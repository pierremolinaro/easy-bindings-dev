#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @bindingOptionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bindingOptionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_bindingOptionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_bindingOptionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mOptionName,
                                                 const class GALGAS_abstractDefaultValue & in_mOptionValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_bindingOptionList extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bindingOptionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_bindingOptionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_abstractDefaultValue & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_bindingOptionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_abstractDefaultValue & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_bindingOptionList add_operation (const GALGAS_bindingOptionList & inOperand,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_bindingOptionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_abstractDefaultValue constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_abstractDefaultValue & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_abstractDefaultValue & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_abstractDefaultValue & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionNameAtIndex (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionValueAtIndex (class GALGAS_abstractDefaultValue constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_abstractDefaultValue & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_abstractDefaultValue & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue getter_mOptionValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bindingOptionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bindingOptionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bindingOptionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_bindingOptionList ;
 
} ; // End of GALGAS_bindingOptionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_bindingOptionList : public cGenericAbstractEnumerator {
  public: cEnumerator_bindingOptionList (const GALGAS_bindingOptionList & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mOptionName (LOCATION_ARGS) const ;
  public: class GALGAS_abstractDefaultValue current_mOptionValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_bindingOptionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingOptionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @observablePropertyList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_observablePropertyList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_observablePropertyList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_observablePropertyList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_observablePropertyAST & in_mObservableProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_observablePropertyList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_observablePropertyList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyList constructor_listWithValue (const class GALGAS_observablePropertyAST & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_observablePropertyList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_observablePropertyAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_observablePropertyList add_operation (const GALGAS_observablePropertyList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_observablePropertyList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_observablePropertyAST constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_observablePropertyAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_observablePropertyAST & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_observablePropertyAST & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObservablePropertyAtIndex (class GALGAS_observablePropertyAST constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_observablePropertyAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_observablePropertyAST & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_observablePropertyAST getter_mObservablePropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_observablePropertyList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_observablePropertyList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_observablePropertyList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_observablePropertyList ;
 
} ; // End of GALGAS_observablePropertyList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_observablePropertyList : public cGenericAbstractEnumerator {
  public: cEnumerator_observablePropertyList (const GALGAS_observablePropertyList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_observablePropertyAST current_mObservableProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_observablePropertyList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @regularBindingList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_regularBindingList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mBindingName ;
  public: inline GALGAS_lstring readProperty_mBindingName (void) const {
    return mProperty_mBindingName ;
  }

  public: GALGAS_observablePropertyList mProperty_mObservablePropertyList ;
  public: inline GALGAS_observablePropertyList readProperty_mObservablePropertyList (void) const {
    return mProperty_mObservablePropertyList ;
  }

  public: GALGAS_bindingOptionList mProperty_mBindingOptionList ;
  public: inline GALGAS_bindingOptionList readProperty_mBindingOptionList (void) const {
    return mProperty_mBindingOptionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_regularBindingList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_regularBindingList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMBindingName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingName = inValue ;
  }

  public: inline void setter_setMObservablePropertyList (const GALGAS_observablePropertyList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObservablePropertyList = inValue ;
  }

  public: inline void setter_setMBindingOptionList (const GALGAS_bindingOptionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingOptionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_regularBindingList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_regularBindingList_2D_element (const GALGAS_lstring & in_mBindingName,
                                                const GALGAS_observablePropertyList & in_mObservablePropertyList,
                                                const GALGAS_bindingOptionList & in_mBindingOptionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_regularBindingList_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_regularBindingList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_observablePropertyList & inOperand1,
                                                                             const class GALGAS_bindingOptionList & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_regularBindingList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_regularBindingList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularBindingList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astComputedViewInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astComputedViewInstruction : public GALGAS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_astComputedViewInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_astComputedViewInstruction (const class cPtr_astComputedViewInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mAutoLayoutViewClassName (void) const ;

  public: class GALGAS_astAutoLayoutViewInstructionParameterList readProperty_mParameterList (void) const ;

  public: class GALGAS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

  public: class GALGAS_tableValueBinding readProperty_mTableValueBinding (void) const ;

  public: class GALGAS_runActionDescriptor readProperty_mRunActionDescriptor (void) const ;

  public: class GALGAS_multipleBindingDescriptor readProperty_mEnabledBindingDescriptor (void) const ;

  public: class GALGAS_multipleBindingDescriptor readProperty_mHiddenBindingDescriptor (void) const ;

  public: class GALGAS_graphicController readProperty_mGraphicController (void) const ;

  public: class GALGAS_regularBindingList readProperty_mRegularBindingList (void) const ;

  public: class GALGAS_lstring readProperty_mConfiguratorName (void) const ;

  public: class GALGAS_lstring readProperty_mOutletName (void) const ;

  public: class GALGAS_bool readProperty_mOutletIsArray (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_astComputedViewInstruction extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astComputedViewInstruction constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_astAutoLayoutViewInstructionParameterList & inOperand1,
                                                                          const class GALGAS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                          const class GALGAS_tableValueBinding & inOperand3,
                                                                          const class GALGAS_runActionDescriptor & inOperand4,
                                                                          const class GALGAS_multipleBindingDescriptor & inOperand5,
                                                                          const class GALGAS_multipleBindingDescriptor & inOperand6,
                                                                          const class GALGAS_graphicController & inOperand7,
                                                                          const class GALGAS_regularBindingList & inOperand8,
                                                                          const class GALGAS_lstring & inOperand9,
                                                                          const class GALGAS_lstring & inOperand10,
                                                                          const class GALGAS_bool & inOperand11
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astComputedViewInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_astComputedViewInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedViewInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astComputedViewInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astComputedViewInstruction : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateViewCode
  public: virtual void method_generateViewCode (const class GALGAS_autoLayoutViewDeclarationMap inViewDeclarationMap,
           const class GALGAS_bool inPreferences,
           const class GALGAS_propertyMap inRootObservablePropertyMap,
           const class GALGAS_propertyMap inPreferencesPropertyMap,
           const class GALGAS_semanticContext inSemanticContext,
           const class GALGAS_propertyMap inObservablePropertyMap,
           const class GALGAS_actionMap inActionMap,
           const class GALGAS_string inReceiverSwiftTypeName,
           const class GALGAS_classMap inClassMap,
           class GALGAS_implicitViewFunctionGenerationList & ioImplicitViewFunctionGenerationList,
           class GALGAS_autoLayoutConfiguratorMap & ioConfiguratorMap,
           class GALGAS_autoLayoutOutletMap & ioOutletMap,
           class GALGAS_abstractViewInstructionGeneration & outInstruction,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mAutoLayoutViewClassName ;
  public: GALGAS_astAutoLayoutViewInstructionParameterList mProperty_mParameterList ;
  public: GALGAS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public: GALGAS_tableValueBinding mProperty_mTableValueBinding ;
  public: GALGAS_runActionDescriptor mProperty_mRunActionDescriptor ;
  public: GALGAS_multipleBindingDescriptor mProperty_mEnabledBindingDescriptor ;
  public: GALGAS_multipleBindingDescriptor mProperty_mHiddenBindingDescriptor ;
  public: GALGAS_graphicController mProperty_mGraphicController ;
  public: GALGAS_regularBindingList mProperty_mRegularBindingList ;
  public: GALGAS_lstring mProperty_mConfiguratorName ;
  public: GALGAS_lstring mProperty_mOutletName ;
  public: GALGAS_bool mProperty_mOutletIsArray ;

//--- Constructor
  public: cPtr_astComputedViewInstruction (const GALGAS_lstring & in_mAutoLayoutViewClassName,
                                           const GALGAS_astAutoLayoutViewInstructionParameterList & in_mParameterList,
                                           const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                           const GALGAS_tableValueBinding & in_mTableValueBinding,
                                           const GALGAS_runActionDescriptor & in_mRunActionDescriptor,
                                           const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                           const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                           const GALGAS_graphicController & in_mGraphicController,
                                           const GALGAS_regularBindingList & in_mRegularBindingList,
                                           const GALGAS_lstring & in_mConfiguratorName,
                                           const GALGAS_lstring & in_mOutletName,
                                           const GALGAS_bool & in_mOutletIsArray
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astComputedViewInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astComputedViewInstruction_2D_weak : public GALGAS_astAbstractViewInstructionDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_astComputedViewInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astComputedViewInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_astComputedViewInstruction_2D_weak (const class GALGAS_astComputedViewInstruction & inSource) ;

  public: GALGAS_astComputedViewInstruction_2D_weak & operator = (const class GALGAS_astComputedViewInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_astComputedViewInstruction bang_astComputedViewInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_astComputedViewInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astComputedViewInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astComputedViewInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_astComputedViewInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedViewInstruction_2D_weak ;

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
  public: GALGAS_autoLayoutViewDeclarationMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_autoLayoutViewDeclarationMap (const GALGAS_autoLayoutViewDeclarationMap & inSource) ;
  public: GALGAS_autoLayoutViewDeclarationMap & operator = (const GALGAS_autoLayoutViewDeclarationMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewDeclarationMap extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutViewDeclarationMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutViewDeclarationMap constructor_mapWithMapToOverride (const class GALGAS_autoLayoutViewDeclarationMap & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewDeclarationMap add_operation (const GALGAS_autoLayoutViewDeclarationMap & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewDeclarationMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_autoLayoutViewDeclarationMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_autoLayoutViewDeclarationMap ;
 
} ; // End of GALGAS_autoLayoutViewDeclarationMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutViewDeclarationMap : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutViewDeclarationMap (const GALGAS_autoLayoutViewDeclarationMap & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutViewDeclarationMap_2D_element current (LOCATION_ARGS) const ;
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
  public: cMapElement_autoLayoutViewDeclarationMap (const GALGAS_lstring & inKey
                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewDeclarationMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewDeclarationMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutViewDeclarationMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_autoLayoutViewDeclarationMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_autoLayoutViewDeclarationMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_autoLayoutViewDeclarationMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewDeclarationMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutViewDeclarationMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutViewDeclarationMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutViewDeclarationMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewDeclarationMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@astAbstractViewDeclaration checkView'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkView (class cPtr_astAbstractViewDeclaration * inObject,
                                    const class GALGAS_string constin_inViewName,
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
                                    class GALGAS_abstractViewGeneration & out_outGeneration,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@actionMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_actionMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public: cMapElement_actionMap (const GALGAS_lstring & inKey
                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                             Phase 1: @propertyKind enum                                             *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_propertyKind (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_property,
    kEnum_toMany,
    kEnum_toOne,
    kEnum_arrayController,
    kEnum_selectionController
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyKind extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_propertyKind constructor_arrayController (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_bool & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_propertyKind constructor_property (const class GALGAS_typeKind & inOperand0,
                                                                 const class GALGAS_propertyAccessibility & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_propertyKind constructor_selectionController (const class GALGAS_string & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_propertyKind constructor_toMany (const class GALGAS_lstring & inOperand0,
                                                               const class GALGAS_propertyAccessibility & inOperand1,
                                                               const class GALGAS_bool & inOperand2,
                                                               const class GALGAS_toManyRelationshipOptionAST & inOperand3
                                                               COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_propertyKind constructor_toOne (const class GALGAS_lstring & inOperand0,
                                                              const class GALGAS_propertyAccessibility & inOperand1,
                                                              const class GALGAS_bool & inOperand2,
                                                              const class GALGAS_toOneOppositeRelationship & inOperand3,
                                                              const class GALGAS_bool & inOperand4
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_propertyKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_arrayController (class GALGAS_lstring & outArgument0,
                                                        class GALGAS_bool & outArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_property (class GALGAS_typeKind & outArgument0,
                                                 class GALGAS_propertyAccessibility & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selectionController (class GALGAS_string & outArgument0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_toMany (class GALGAS_lstring & outArgument0,
                                               class GALGAS_propertyAccessibility & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               class GALGAS_toManyRelationshipOptionAST & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_toOne (class GALGAS_lstring & outArgument0,
                                              class GALGAS_propertyAccessibility & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              class GALGAS_toOneOppositeRelationship & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArrayController (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelectionController (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isToMany (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isToOne (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_arrayController (class GALGAS_lstring & outOperand0,
                                                          class GALGAS_bool & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_property (class GALGAS_typeKind & outOperand0,
                                                   class GALGAS_propertyAccessibility & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_selectionController (class GALGAS_string & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_toMany (class GALGAS_lstring & outOperand0,
                                                 class GALGAS_propertyAccessibility & outOperand1,
                                                 class GALGAS_bool & outOperand2,
                                                 class GALGAS_toManyRelationshipOptionAST & outOperand3) const ;

  public: VIRTUAL_IN_DEBUG bool optional_toOne (class GALGAS_lstring & outOperand0,
                                                class GALGAS_propertyAccessibility & outOperand1,
                                                class GALGAS_bool & outOperand2,
                                                class GALGAS_toOneOppositeRelationship & outOperand3,
                                                class GALGAS_bool & outOperand4) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GALGAS_propertyKind mProperty_mKind ;
  public: GALGAS_actionMap mProperty_mActionMap ;
  public: GALGAS_bool mProperty_mIsOverriding ;

//--- Constructor
  public: cMapElement_propertyMap (const GALGAS_lstring & inKey,
                                   const GALGAS_propertyKind & in_mKind,
                                   const GALGAS_actionMap & in_mActionMap,
                                   const GALGAS_bool & in_mIsOverriding
                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticContext struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_semanticContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_classMap mProperty_mClassMap ;
  public: inline GALGAS_classMap readProperty_mClassMap (void) const {
    return mProperty_mClassMap ;
  }

  public: GALGAS_outletClassMap mProperty_mOutletClassMap ;
  public: inline GALGAS_outletClassMap readProperty_mOutletClassMap (void) const {
    return mProperty_mOutletClassMap ;
  }

  public: GALGAS_bindingSpecificationMap mProperty_mBindingSpecificationMap ;
  public: inline GALGAS_bindingSpecificationMap readProperty_mBindingSpecificationMap (void) const {
    return mProperty_mBindingSpecificationMap ;
  }

  public: GALGAS_autolayoutViewClassMap mProperty_mAutolayoutViewClassMap ;
  public: inline GALGAS_autolayoutViewClassMap readProperty_mAutolayoutViewClassMap (void) const {
    return mProperty_mAutolayoutViewClassMap ;
  }

  public: GALGAS_autoLayoutBindingSpecificationMap mProperty_mAutoLayoutBindingSpecificationMap ;
  public: inline GALGAS_autoLayoutBindingSpecificationMap readProperty_mAutoLayoutBindingSpecificationMap (void) const {
    return mProperty_mAutoLayoutBindingSpecificationMap ;
  }

  public: GALGAS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutVStackFunctionMap ;
  public: inline GALGAS_astAutoLayoutViewFunctionMap readProperty_mAutoLayoutVStackFunctionMap (void) const {
    return mProperty_mAutoLayoutVStackFunctionMap ;
  }

  public: GALGAS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutHStackFunctionMap ;
  public: inline GALGAS_astAutoLayoutViewFunctionMap readProperty_mAutoLayoutHStackFunctionMap (void) const {
    return mProperty_mAutoLayoutHStackFunctionMap ;
  }

  public: GALGAS_enumerationFunctionListAST mProperty_mEnumerationFunctionListAST ;
  public: inline GALGAS_enumerationFunctionListAST readProperty_mEnumerationFunctionListAST (void) const {
    return mProperty_mEnumerationFunctionListAST ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_semanticContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_semanticContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMClassMap (const GALGAS_classMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mClassMap = inValue ;
  }

  public: inline void setter_setMOutletClassMap (const GALGAS_outletClassMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletClassMap = inValue ;
  }

  public: inline void setter_setMBindingSpecificationMap (const GALGAS_bindingSpecificationMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingSpecificationMap = inValue ;
  }

  public: inline void setter_setMAutolayoutViewClassMap (const GALGAS_autolayoutViewClassMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutolayoutViewClassMap = inValue ;
  }

  public: inline void setter_setMAutoLayoutBindingSpecificationMap (const GALGAS_autoLayoutBindingSpecificationMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutBindingSpecificationMap = inValue ;
  }

  public: inline void setter_setMAutoLayoutVStackFunctionMap (const GALGAS_astAutoLayoutViewFunctionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutVStackFunctionMap = inValue ;
  }

  public: inline void setter_setMAutoLayoutHStackFunctionMap (const GALGAS_astAutoLayoutViewFunctionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutHStackFunctionMap = inValue ;
  }

  public: inline void setter_setMEnumerationFunctionListAST (const GALGAS_enumerationFunctionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumerationFunctionListAST = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_semanticContext (void) ;

//--------------------------------- Native constructor
  public: GALGAS_semanticContext (const GALGAS_classMap & in_mClassMap,
                                  const GALGAS_outletClassMap & in_mOutletClassMap,
                                  const GALGAS_bindingSpecificationMap & in_mBindingSpecificationMap,
                                  const GALGAS_autolayoutViewClassMap & in_mAutolayoutViewClassMap,
                                  const GALGAS_autoLayoutBindingSpecificationMap & in_mAutoLayoutBindingSpecificationMap,
                                  const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutVStackFunctionMap,
                                  const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutHStackFunctionMap,
                                  const GALGAS_enumerationFunctionListAST & in_mEnumerationFunctionListAST) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticContext extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_semanticContext constructor_new (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_semanticContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticContext class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@astAutoLayoutViewFunctionCallList checkViewFunctionCallList'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_checkViewFunctionCallList (const class GALGAS_astAutoLayoutViewFunctionCallList inObject,
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
  public: GALGAS_autolayoutEnabledBindingForGeneration (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_none,
    kEnum_enabled
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autolayoutEnabledBindingForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autolayoutEnabledBindingForGeneration constructor_enabled (const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_autolayoutEnabledBindingForGeneration constructor_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autolayoutEnabledBindingForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_enabled (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEnabled (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_enabled (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_none () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autolayoutEnabledBindingForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @autolayoutEnabledBindingForGeneration enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled : public cEnumAssociatedValues {
  public: const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inAssociatedValue0
                                                                               COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                   Phase 1: @autolayoutRunBindingForGeneration enum                                  *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autolayoutRunBindingForGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_autolayoutRunBindingForGeneration (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_none,
    kEnum_run
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autolayoutRunBindingForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autolayoutRunBindingForGeneration constructor_none (LOCATION_ARGS) ;

  public: static class GALGAS_autolayoutRunBindingForGeneration constructor_run (const class GALGAS_string & inOperand0,
                                                                                 const class GALGAS_string & inOperand1,
                                                                                 const class GALGAS_string & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autolayoutRunBindingForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_run (class GALGAS_string & outArgument0,
                                            class GALGAS_string & outArgument1,
                                            class GALGAS_string & outArgument2,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNone (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRun (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_none () const ;

  public: VIRTUAL_IN_DEBUG bool optional_run (class GALGAS_string & outOperand0,
                                              class GALGAS_string & outOperand1,
                                              class GALGAS_string & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autolayoutRunBindingForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autolayoutRunBindingForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @autolayoutRunBindingForGeneration enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_autolayoutRunBindingForGeneration_run : public cEnumAssociatedValues {
  public: const GALGAS_string mAssociatedValue0 ;
  public: const GALGAS_string mAssociatedValue1 ;
  public: const GALGAS_string mAssociatedValue2 ;

//--- Constructor
  public: cEnumAssociatedValues_autolayoutRunBindingForGeneration_run (const GALGAS_string inAssociatedValue0,
                                                                       const GALGAS_string inAssociatedValue1,
                                                                       const GALGAS_string inAssociatedValue2
                                                                       COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_autolayoutRunBindingForGeneration_run (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @classKind enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_classKind_atomic : public cEnumAssociatedValues {
  public: const GALGAS_typeKind mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_classKind_atomic (const GALGAS_typeKind inAssociatedValue0
                                                  COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_classKind_atomic (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_classKind_document : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_classKind_document (const GALGAS_lstring inAssociatedValue0
                                                    COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_classKind_document (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_classKind_entity : public cEnumAssociatedValues {
  public: const GALGAS_string mAssociatedValue0 ;
  public: const GALGAS_bool mAssociatedValue1 ;
  public: const GALGAS_bool mAssociatedValue2 ;
  public: const GALGAS_bool mAssociatedValue3 ;

//--- Constructor
  public: cEnumAssociatedValues_classKind_entity (const GALGAS_string inAssociatedValue0,
                                                  const GALGAS_bool inAssociatedValue1,
                                                  const GALGAS_bool inAssociatedValue2,
                                                  const GALGAS_bool inAssociatedValue3
                                                  COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_classKind_entity (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractBooleanMultipleBindingExpressionForGeneration expressionString'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_expressionString (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewInstructionGenerationFuncCallList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewInstructionGenerationFuncCallList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutViewInstructionGenerationFuncCallList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_autoLayoutViewInstructionGenerationFuncCallList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mFunctionName,
                                                 const class GALGAS_autoLayoutViewInstructionGenerationParameterList & in_mParameters
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewInstructionGenerationFuncCallList extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutViewInstructionGenerationFuncCallList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutViewInstructionGenerationFuncCallList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                         const class GALGAS_autoLayoutViewInstructionGenerationParameterList & inOperand1
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_autoLayoutViewInstructionGenerationParameterList & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationFuncCallList add_operation (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_autoLayoutViewInstructionGenerationParameterList constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionNameAtIndex (class GALGAS_string constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParametersAtIndex (class GALGAS_autoLayoutViewInstructionGenerationParameterList constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFunctionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationParameterList getter_mParametersAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutViewInstructionGenerationFuncCallList ;
 
} ; // End of GALGAS_autoLayoutViewInstructionGenerationFuncCallList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutViewInstructionGenerationFuncCallList : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutViewInstructionGenerationFuncCallList (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inEnumeratedObject,
                                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mFunctionName (LOCATION_ARGS) const ;
  public: class GALGAS_autoLayoutViewInstructionGenerationParameterList current_mParameters (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_autoLayoutViewInstructionGenerationParameterList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_autoLayoutViewInstructionGenerationParameterList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mParameterName,
                                                 const class GALGAS_string & in_mParameterValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewInstructionGenerationParameterList extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutViewInstructionGenerationParameterList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutViewInstructionGenerationParameterList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                          const class GALGAS_string & inOperand1
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutViewInstructionGenerationParameterList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationParameterList add_operation (const GALGAS_autoLayoutViewInstructionGenerationParameterList & inOperand,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterNameAtIndex (class GALGAS_string constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterValueAtIndex (class GALGAS_string constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mParameterNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mParameterValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationParameterList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationParameterList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationParameterList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutViewInstructionGenerationParameterList ;
 
} ; // End of GALGAS_autoLayoutViewInstructionGenerationParameterList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutViewInstructionGenerationParameterList : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutViewInstructionGenerationParameterList (const GALGAS_autoLayoutViewInstructionGenerationParameterList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mParameterName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mParameterValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@astAbstractViewInstructionDeclaration generateViewCode'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateViewCode (class cPtr_astAbstractViewInstructionDeclaration * inObject,
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
                                           class GALGAS_abstractViewInstructionGeneration & out_outInstruction,
                                           class C_Compiler * inCompiler
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
                                             const class GALGAS_propertyMap constinArgument6,
                                             class GALGAS_autolayoutEnabledBindingForGeneration & outArgument7,
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
// Phase 1: @abstractViewGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractViewGeneration_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractViewGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractViewGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractViewGeneration_2D_weak (const class GALGAS_abstractViewGeneration & inSource) ;

  public: GALGAS_abstractViewGeneration_2D_weak & operator = (const class GALGAS_abstractViewGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractViewGeneration bang_abstractViewGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractViewGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractViewGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractViewGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractViewGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractViewGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewInstructionGenerationFuncCallList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mFunctionName ;
  public: inline GALGAS_string readProperty_mFunctionName (void) const {
    return mProperty_mFunctionName ;
  }

  public: GALGAS_autoLayoutViewInstructionGenerationParameterList mProperty_mParameters ;
  public: inline GALGAS_autoLayoutViewInstructionGenerationParameterList readProperty_mParameters (void) const {
    return mProperty_mParameters ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFunctionName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionName = inValue ;
  }

  public: inline void setter_setMParameters (const GALGAS_autoLayoutViewInstructionGenerationParameterList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameters = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (const GALGAS_string & in_mFunctionName,
                                                                             const GALGAS_autoLayoutViewInstructionGenerationParameterList & in_mParameters) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                          const class GALGAS_autoLayoutViewInstructionGenerationParameterList & inOperand1
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewInstructionGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewInstructionGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutViewInstructionGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_autoLayoutViewInstructionGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_abstractViewInstructionGeneration & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewInstructionGenerationList extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutViewInstructionGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutViewInstructionGenerationList constructor_listWithValue (const class GALGAS_abstractViewInstructionGeneration & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutViewInstructionGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractViewInstructionGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationList add_operation (const GALGAS_autoLayoutViewInstructionGenerationList & inOperand,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_autoLayoutViewInstructionGenerationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractViewInstructionGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_abstractViewInstructionGeneration constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractViewInstructionGeneration getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutViewInstructionGenerationList ;
 
} ; // End of GALGAS_autoLayoutViewInstructionGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutViewInstructionGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutViewInstructionGenerationList (const GALGAS_autoLayoutViewInstructionGenerationList & inEnumeratedObject,
                                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_abstractViewInstructionGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutViewInstructionGenerationList_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_abstractViewInstructionGeneration mProperty_mInstruction ;
  public: inline GALGAS_abstractViewInstructionGeneration readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_autoLayoutViewInstructionGenerationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GALGAS_abstractViewInstructionGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_autoLayoutViewInstructionGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_autoLayoutViewInstructionGenerationList_2D_element (const GALGAS_abstractViewInstructionGeneration & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewInstructionGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutViewInstructionGenerationList_2D_element constructor_new (const class GALGAS_abstractViewInstructionGeneration & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutViewInstructionGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutViewInstructionGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computedHorizontalViewGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computedHorizontalViewGeneration : public GALGAS_abstractViewGeneration {
//--------------------------------- Default constructor
  public: GALGAS_computedHorizontalViewGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_computedHorizontalViewGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_computedHorizontalViewGeneration (const class cPtr_computedHorizontalViewGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_autoLayoutViewInstructionGenerationFuncCallList readProperty_mFuncCallList (void) const ;

  public: class GALGAS_autoLayoutViewInstructionGenerationList readProperty_mInstructionList (void) const ;

  public: class GALGAS_astNewStackViewDeclarationList readProperty_mNewStackViewDeclarationList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computedHorizontalViewGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_computedHorizontalViewGeneration constructor_new (const class GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                                const class GALGAS_autoLayoutViewInstructionGenerationList & inOperand1,
                                                                                const class GALGAS_astNewStackViewDeclarationList & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_computedHorizontalViewGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_computedHorizontalViewGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedHorizontalViewGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @computedHorizontalViewGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_computedHorizontalViewGeneration : public cPtr_abstractViewGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateViewBuilder
  public: virtual class GALGAS_string getter_generateViewBuilder (const class GALGAS_bool inPreferences,
           const class GALGAS_string inViewName,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_autoLayoutViewInstructionGenerationFuncCallList mProperty_mFuncCallList ;
  public: GALGAS_autoLayoutViewInstructionGenerationList mProperty_mInstructionList ;
  public: GALGAS_astNewStackViewDeclarationList mProperty_mNewStackViewDeclarationList ;

//--- Constructor
  public: cPtr_computedHorizontalViewGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                 const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                 const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computedHorizontalViewGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computedHorizontalViewGeneration_2D_weak : public GALGAS_abstractViewGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_computedHorizontalViewGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_computedHorizontalViewGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_computedHorizontalViewGeneration_2D_weak (const class GALGAS_computedHorizontalViewGeneration & inSource) ;

  public: GALGAS_computedHorizontalViewGeneration_2D_weak & operator = (const class GALGAS_computedHorizontalViewGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_computedHorizontalViewGeneration bang_computedHorizontalViewGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computedHorizontalViewGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_computedHorizontalViewGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_computedHorizontalViewGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_computedHorizontalViewGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedHorizontalViewGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computedVerticalViewGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computedVerticalViewGeneration : public GALGAS_abstractViewGeneration {
//--------------------------------- Default constructor
  public: GALGAS_computedVerticalViewGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_computedVerticalViewGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_computedVerticalViewGeneration (const class cPtr_computedVerticalViewGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_autoLayoutViewInstructionGenerationFuncCallList readProperty_mFuncCallList (void) const ;

  public: class GALGAS_autoLayoutViewInstructionGenerationList readProperty_mInstructionList (void) const ;

  public: class GALGAS_astNewStackViewDeclarationList readProperty_mNewStackViewDeclarationList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computedVerticalViewGeneration extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_computedVerticalViewGeneration constructor_new (const class GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                              const class GALGAS_autoLayoutViewInstructionGenerationList & inOperand1,
                                                                              const class GALGAS_astNewStackViewDeclarationList & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_computedVerticalViewGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_computedVerticalViewGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedVerticalViewGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @computedVerticalViewGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_computedVerticalViewGeneration : public cPtr_abstractViewGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateViewBuilder
  public: virtual class GALGAS_string getter_generateViewBuilder (const class GALGAS_bool inPreferences,
           const class GALGAS_string inViewName,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_autoLayoutViewInstructionGenerationFuncCallList mProperty_mFuncCallList ;
  public: GALGAS_autoLayoutViewInstructionGenerationList mProperty_mInstructionList ;
  public: GALGAS_astNewStackViewDeclarationList mProperty_mNewStackViewDeclarationList ;

//--- Constructor
  public: cPtr_computedVerticalViewGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                               const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                               const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computedVerticalViewGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computedVerticalViewGeneration_2D_weak : public GALGAS_abstractViewGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_computedVerticalViewGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_computedVerticalViewGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_computedVerticalViewGeneration_2D_weak (const class GALGAS_computedVerticalViewGeneration & inSource) ;

  public: GALGAS_computedVerticalViewGeneration_2D_weak & operator = (const class GALGAS_computedVerticalViewGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_computedVerticalViewGeneration bang_computedVerticalViewGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computedVerticalViewGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_computedVerticalViewGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_computedVerticalViewGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_computedVerticalViewGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedVerticalViewGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractViewInstructionGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractViewInstructionGeneration_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractViewInstructionGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractViewInstructionGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractViewInstructionGeneration_2D_weak (const class GALGAS_abstractViewInstructionGeneration & inSource) ;

  public: GALGAS_abstractViewInstructionGeneration_2D_weak & operator = (const class GALGAS_abstractViewInstructionGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractViewInstructionGeneration bang_abstractViewInstructionGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractViewInstructionGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractViewInstructionGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractViewInstructionGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractViewInstructionGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutMultipleBindingGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutMultipleBindingGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutMultipleBindingGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_autoLayoutMultipleBindingGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mBindingName,
                                                 const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutMultipleBindingGenerationList extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutMultipleBindingGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutMultipleBindingGenerationList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                 const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutMultipleBindingGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutMultipleBindingGenerationList add_operation (const GALGAS_autoLayoutMultipleBindingGenerationList & inOperand,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_autoLayoutMultipleBindingGenerationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GALGAS_string constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBoundObjectExpressionAtIndex (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBindingNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mBoundObjectExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutMultipleBindingGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutMultipleBindingGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutMultipleBindingGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutMultipleBindingGenerationList ;
 
} ; // End of GALGAS_autoLayoutMultipleBindingGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutMultipleBindingGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutMultipleBindingGenerationList (const GALGAS_autoLayoutMultipleBindingGenerationList & inEnumeratedObject,
                                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mBindingName (LOCATION_ARGS) const ;
  public: class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration current_mBoundObjectExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutMultipleBindingGenerationList_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_string mProperty_mBindingName ;
  public: inline GALGAS_string readProperty_mBindingName (void) const {
    return mProperty_mBindingName ;
  }

  public: GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mBoundObjectExpression ;
  public: inline GALGAS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_mBoundObjectExpression (void) const {
    return mProperty_mBoundObjectExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_autoLayoutMultipleBindingGenerationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMBindingName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingName = inValue ;
  }

  public: inline void setter_setMBoundObjectExpression (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoundObjectExpression = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_autoLayoutMultipleBindingGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_autoLayoutMultipleBindingGenerationList_2D_element (const GALGAS_string & in_mBindingName,
                                                                     const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutMultipleBindingGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutMultipleBindingGenerationList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                  const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutMultipleBindingGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutMultipleBindingGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @hStackViewInstructionGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_hStackViewInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--------------------------------- Default constructor
  public: GALGAS_hStackViewInstructionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_hStackViewInstructionGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_hStackViewInstructionGeneration (const class cPtr_hStackViewInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_autoLayoutViewInstructionGenerationFuncCallList readProperty_mFuncCallList (void) const ;

  public: class GALGAS_autoLayoutViewInstructionGenerationList readProperty_mInstructionList (void) const ;

  public: class GALGAS_autoLayoutMultipleBindingGenerationList readProperty_mMultipleBindingGenerationList (void) const ;

  public: class GALGAS_astNewStackViewDeclarationList readProperty_mNewStackViewDeclarationList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_hStackViewInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_hStackViewInstructionGeneration constructor_new (const class GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                               const class GALGAS_autoLayoutViewInstructionGenerationList & inOperand1,
                                                                               const class GALGAS_autoLayoutMultipleBindingGenerationList & inOperand2,
                                                                               const class GALGAS_astNewStackViewDeclarationList & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_hStackViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_hStackViewInstructionGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_hStackViewInstructionGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @hStackViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_hStackViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateViewInstruction
  public: virtual class GALGAS_string getter_generateViewInstruction (const class GALGAS_bool inPreferences,
           const class GALGAS_string inName,
           const class GALGAS_string inIndentation,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_autoLayoutViewInstructionGenerationFuncCallList mProperty_mFuncCallList ;
  public: GALGAS_autoLayoutViewInstructionGenerationList mProperty_mInstructionList ;
  public: GALGAS_autoLayoutMultipleBindingGenerationList mProperty_mMultipleBindingGenerationList ;
  public: GALGAS_astNewStackViewDeclarationList mProperty_mNewStackViewDeclarationList ;

//--- Constructor
  public: cPtr_hStackViewInstructionGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                const GALGAS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @hStackViewInstructionGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_hStackViewInstructionGeneration_2D_weak : public GALGAS_abstractViewInstructionGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_hStackViewInstructionGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_hStackViewInstructionGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_hStackViewInstructionGeneration_2D_weak (const class GALGAS_hStackViewInstructionGeneration & inSource) ;

  public: GALGAS_hStackViewInstructionGeneration_2D_weak & operator = (const class GALGAS_hStackViewInstructionGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_hStackViewInstructionGeneration bang_hStackViewInstructionGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_hStackViewInstructionGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_hStackViewInstructionGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_hStackViewInstructionGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_hStackViewInstructionGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_hStackViewInstructionGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @vStackViewInstructionGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_vStackViewInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--------------------------------- Default constructor
  public: GALGAS_vStackViewInstructionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_vStackViewInstructionGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_vStackViewInstructionGeneration (const class cPtr_vStackViewInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_autoLayoutViewInstructionGenerationFuncCallList readProperty_mFuncCallList (void) const ;

  public: class GALGAS_autoLayoutViewInstructionGenerationList readProperty_mInstructionList (void) const ;

  public: class GALGAS_autoLayoutMultipleBindingGenerationList readProperty_mMultipleBindingGenerationList (void) const ;

  public: class GALGAS_astNewStackViewDeclarationList readProperty_mNewStackViewDeclarationList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_vStackViewInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_vStackViewInstructionGeneration constructor_new (const class GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                               const class GALGAS_autoLayoutViewInstructionGenerationList & inOperand1,
                                                                               const class GALGAS_autoLayoutMultipleBindingGenerationList & inOperand2,
                                                                               const class GALGAS_astNewStackViewDeclarationList & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_vStackViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_vStackViewInstructionGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_vStackViewInstructionGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @vStackViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_vStackViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateViewInstruction
  public: virtual class GALGAS_string getter_generateViewInstruction (const class GALGAS_bool inPreferences,
           const class GALGAS_string inName,
           const class GALGAS_string inIndentation,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_autoLayoutViewInstructionGenerationFuncCallList mProperty_mFuncCallList ;
  public: GALGAS_autoLayoutViewInstructionGenerationList mProperty_mInstructionList ;
  public: GALGAS_autoLayoutMultipleBindingGenerationList mProperty_mMultipleBindingGenerationList ;
  public: GALGAS_astNewStackViewDeclarationList mProperty_mNewStackViewDeclarationList ;

//--- Constructor
  public: cPtr_vStackViewInstructionGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                const GALGAS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @vStackViewInstructionGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_vStackViewInstructionGeneration_2D_weak : public GALGAS_abstractViewInstructionGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_vStackViewInstructionGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_vStackViewInstructionGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_vStackViewInstructionGeneration_2D_weak (const class GALGAS_vStackViewInstructionGeneration & inSource) ;

  public: GALGAS_vStackViewInstructionGeneration_2D_weak & operator = (const class GALGAS_vStackViewInstructionGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_vStackViewInstructionGeneration bang_vStackViewInstructionGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_vStackViewInstructionGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_vStackViewInstructionGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_vStackViewInstructionGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_vStackViewInstructionGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_vStackViewInstructionGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutSpaceViewInstructionGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutSpaceViewInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutSpaceViewInstructionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutSpaceViewInstructionGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_autoLayoutSpaceViewInstructionGeneration (const class cPtr_autoLayoutSpaceViewInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutSpaceViewInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutSpaceViewInstructionGeneration constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutSpaceViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutSpaceViewInstructionGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutSpaceViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutSpaceViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateViewInstruction
  public: virtual class GALGAS_string getter_generateViewInstruction (const class GALGAS_bool inPreferences,
           const class GALGAS_string inName,
           const class GALGAS_string inIndentation,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties

//--- Constructor
  public: cPtr_autoLayoutSpaceViewInstructionGeneration (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutSpaceViewInstructionGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak : public GALGAS_abstractViewInstructionGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak (const class GALGAS_autoLayoutSpaceViewInstructionGeneration & inSource) ;

  public: GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak & operator = (const class GALGAS_autoLayoutSpaceViewInstructionGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_autoLayoutSpaceViewInstructionGeneration bang_autoLayoutSpaceViewInstructionGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutSeparatorInstructionGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutSeparatorInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutSeparatorInstructionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutSeparatorInstructionGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_autoLayoutSeparatorInstructionGeneration (const class cPtr_autoLayoutSeparatorInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_horizontal (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutSeparatorInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutSeparatorInstructionGeneration constructor_new (const class GALGAS_bool & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutSeparatorInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutSeparatorInstructionGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutSeparatorInstructionGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutSeparatorInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutSeparatorInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateViewInstruction
  public: virtual class GALGAS_string getter_generateViewInstruction (const class GALGAS_bool inPreferences,
           const class GALGAS_string inName,
           const class GALGAS_string inIndentation,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_bool mProperty_horizontal ;

//--- Constructor
  public: cPtr_autoLayoutSeparatorInstructionGeneration (const GALGAS_bool & in_horizontal
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutSeparatorInstructionGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak : public GALGAS_abstractViewInstructionGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak (const class GALGAS_autoLayoutSeparatorInstructionGeneration & inSource) ;

  public: GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak & operator = (const class GALGAS_autoLayoutSeparatorInstructionGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_autoLayoutSeparatorInstructionGeneration bang_autoLayoutSeparatorInstructionGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutDividerInstructionGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutDividerInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutDividerInstructionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutDividerInstructionGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_autoLayoutDividerInstructionGeneration (const class cPtr_autoLayoutDividerInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_horizontal (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutDividerInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutDividerInstructionGeneration constructor_new (const class GALGAS_bool & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutDividerInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutDividerInstructionGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDividerInstructionGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutDividerInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutDividerInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateViewInstruction
  public: virtual class GALGAS_string getter_generateViewInstruction (const class GALGAS_bool inPreferences,
           const class GALGAS_string inName,
           const class GALGAS_string inIndentation,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_bool mProperty_horizontal ;

//--- Constructor
  public: cPtr_autoLayoutDividerInstructionGeneration (const GALGAS_bool & in_horizontal
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutDividerInstructionGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutDividerInstructionGeneration_2D_weak : public GALGAS_abstractViewInstructionGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutDividerInstructionGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutDividerInstructionGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_autoLayoutDividerInstructionGeneration_2D_weak (const class GALGAS_autoLayoutDividerInstructionGeneration & inSource) ;

  public: GALGAS_autoLayoutDividerInstructionGeneration_2D_weak & operator = (const class GALGAS_autoLayoutDividerInstructionGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_autoLayoutDividerInstructionGeneration bang_autoLayoutDividerInstructionGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutDividerInstructionGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutDividerInstructionGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutDividerInstructionGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutDividerInstructionGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDividerInstructionGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutLocalViewInstructionGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutLocalViewInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutLocalViewInstructionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutLocalViewInstructionGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_autoLayoutLocalViewInstructionGeneration (const class cPtr_autoLayoutLocalViewInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mLocalView (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutLocalViewInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutLocalViewInstructionGeneration constructor_new (const class GALGAS_string & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutLocalViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutLocalViewInstructionGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutLocalViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutLocalViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateViewInstruction
  public: virtual class GALGAS_string getter_generateViewInstruction (const class GALGAS_bool inPreferences,
           const class GALGAS_string inName,
           const class GALGAS_string inIndentation,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_string mProperty_mLocalView ;

//--- Constructor
  public: cPtr_autoLayoutLocalViewInstructionGeneration (const GALGAS_string & in_mLocalView
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutLocalViewInstructionGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak : public GALGAS_abstractViewInstructionGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak (const class GALGAS_autoLayoutLocalViewInstructionGeneration & inSource) ;

  public: GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak & operator = (const class GALGAS_autoLayoutLocalViewInstructionGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_autoLayoutLocalViewInstructionGeneration bang_autoLayoutLocalViewInstructionGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutRegularBindingsGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutRegularBindingsGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutRegularBindingsGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_autoLayoutRegularBindingsGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mBindingName,
                                                 const class GALGAS_boundObjectList & in_mBoundObjectList,
                                                 const class GALGAS_string & in_mBindingOptionsString
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutRegularBindingsGenerationList extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutRegularBindingsGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutRegularBindingsGenerationList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                 const class GALGAS_boundObjectList & inOperand1,
                                                                                                 const class GALGAS_string & inOperand2
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutRegularBindingsGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_boundObjectList & inOperand1,
                                                     const class GALGAS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutRegularBindingsGenerationList add_operation (const GALGAS_autoLayoutRegularBindingsGenerationList & inOperand,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_autoLayoutRegularBindingsGenerationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_boundObjectList constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_boundObjectList & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_boundObjectList & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_boundObjectList & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GALGAS_string constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingOptionsStringAtIndex (class GALGAS_string constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBoundObjectListAtIndex (class GALGAS_boundObjectList constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_boundObjectList & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_boundObjectList & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBindingNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBindingOptionsStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_boundObjectList getter_mBoundObjectListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutRegularBindingsGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutRegularBindingsGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutRegularBindingsGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutRegularBindingsGenerationList ;
 
} ; // End of GALGAS_autoLayoutRegularBindingsGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutRegularBindingsGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutRegularBindingsGenerationList (const GALGAS_autoLayoutRegularBindingsGenerationList & inEnumeratedObject,
                                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mBindingName (LOCATION_ARGS) const ;
  public: class GALGAS_boundObjectList current_mBoundObjectList (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBindingOptionsString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutRegularBindingsGenerationList_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_string mProperty_mBindingName ;
  public: inline GALGAS_string readProperty_mBindingName (void) const {
    return mProperty_mBindingName ;
  }

  public: GALGAS_boundObjectList mProperty_mBoundObjectList ;
  public: inline GALGAS_boundObjectList readProperty_mBoundObjectList (void) const {
    return mProperty_mBoundObjectList ;
  }

  public: GALGAS_string mProperty_mBindingOptionsString ;
  public: inline GALGAS_string readProperty_mBindingOptionsString (void) const {
    return mProperty_mBindingOptionsString ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutRegularBindingsGenerationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMBindingName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingName = inValue ;
  }

  public: inline void setter_setMBoundObjectList (const GALGAS_boundObjectList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoundObjectList = inValue ;
  }

  public: inline void setter_setMBindingOptionsString (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingOptionsString = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (const GALGAS_string & in_mBindingName,
                                                                     const GALGAS_boundObjectList & in_mBoundObjectList,
                                                                     const GALGAS_string & in_mBindingOptionsString) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutRegularBindingsGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutRegularBindingsGenerationList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                  const class GALGAS_boundObjectList & inOperand1,
                                                                                                  const class GALGAS_string & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutRegularBindingsGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GALGAS_propertyAccessibility (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_stored,
    kEnum_computed,
    kEnum_transient
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyAccessibility extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_propertyAccessibility constructor_computed (LOCATION_ARGS) ;

  public: static class GALGAS_propertyAccessibility constructor_stored (LOCATION_ARGS) ;

  public: static class GALGAS_propertyAccessibility constructor_transient (const class GALGAS_bool & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_propertyAccessibility & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_transient (class GALGAS_bool & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isComputed (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStored (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTransient (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_computed () const ;

  public: VIRTUAL_IN_DEBUG bool optional_stored () const ;

  public: VIRTUAL_IN_DEBUG bool optional_transient (class GALGAS_bool & outOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_propertyAccessibility class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyAccessibility ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                      Phase 1: @toManyRelationshipOptionAST enum                                     *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyRelationshipOptionAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_toManyRelationshipOptionAST (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_none,
    kEnum_hasOpposite,
    kEnum_hasDependance
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_toManyRelationshipOptionAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toManyRelationshipOptionAST constructor_hasDependance (const class GALGAS_lstring & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_toManyRelationshipOptionAST constructor_hasOpposite (const class GALGAS_lstring & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_toManyRelationshipOptionAST constructor_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_toManyRelationshipOptionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_hasDependance (class GALGAS_lstring & outArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_hasOpposite (class GALGAS_lstring & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isHasDependance (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isHasOpposite (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_hasDependance (class GALGAS_lstring & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_hasOpposite (class GALGAS_lstring & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_none () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_toManyRelationshipOptionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                       Phase 1: @toOneOppositeRelationship enum                                      *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toOneOppositeRelationship : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_toOneOppositeRelationship (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_none,
    kEnum_oppositeIsToOne,
    kEnum_oppositeIsToMany
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_toOneOppositeRelationship extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toOneOppositeRelationship constructor_none (LOCATION_ARGS) ;

  public: static class GALGAS_toOneOppositeRelationship constructor_oppositeIsToMany (const class GALGAS_lstring & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_toOneOppositeRelationship constructor_oppositeIsToOne (const class GALGAS_lstring & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_toOneOppositeRelationship & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_oppositeIsToMany (class GALGAS_lstring & outArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_oppositeIsToOne (class GALGAS_lstring & outArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNone (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOppositeIsToMany (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOppositeIsToOne (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_none () const ;

  public: VIRTUAL_IN_DEBUG bool optional_oppositeIsToMany (class GALGAS_lstring & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_oppositeIsToOne (class GALGAS_lstring & outOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_toOneOppositeRelationship class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @propertyKind enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyKind_property : public cEnumAssociatedValues {
  public: const GALGAS_typeKind mAssociatedValue0 ;
  public: const GALGAS_propertyAccessibility mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_propertyKind_property (const GALGAS_typeKind inAssociatedValue0,
                                                       const GALGAS_propertyAccessibility inAssociatedValue1
                                                       COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_propertyKind_property (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyKind_toMany : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_propertyAccessibility mAssociatedValue1 ;
  public: const GALGAS_bool mAssociatedValue2 ;
  public: const GALGAS_toManyRelationshipOptionAST mAssociatedValue3 ;

//--- Constructor
  public: cEnumAssociatedValues_propertyKind_toMany (const GALGAS_lstring inAssociatedValue0,
                                                     const GALGAS_propertyAccessibility inAssociatedValue1,
                                                     const GALGAS_bool inAssociatedValue2,
                                                     const GALGAS_toManyRelationshipOptionAST inAssociatedValue3
                                                     COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_propertyKind_toMany (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyKind_toOne : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_propertyAccessibility mAssociatedValue1 ;
  public: const GALGAS_bool mAssociatedValue2 ;
  public: const GALGAS_toOneOppositeRelationship mAssociatedValue3 ;
  public: const GALGAS_bool mAssociatedValue4 ;

//--- Constructor
  public: cEnumAssociatedValues_propertyKind_toOne (const GALGAS_lstring inAssociatedValue0,
                                                    const GALGAS_propertyAccessibility inAssociatedValue1,
                                                    const GALGAS_bool inAssociatedValue2,
                                                    const GALGAS_toOneOppositeRelationship inAssociatedValue3,
                                                    const GALGAS_bool inAssociatedValue4
                                                    COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_propertyKind_toOne (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyKind_arrayController : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_bool mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_propertyKind_arrayController (const GALGAS_lstring inAssociatedValue0,
                                                              const GALGAS_bool inAssociatedValue1
                                                              COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_propertyKind_arrayController (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyKind_selectionController : public cEnumAssociatedValues {
  public: const GALGAS_string mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_propertyKind_selectionController (const GALGAS_string inAssociatedValue0
                                                                  COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_propertyKind_selectionController (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @boundObjectList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_boundObjectList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mBoundObjectString ;
  public: inline GALGAS_string readProperty_mBoundObjectString (void) const {
    return mProperty_mBoundObjectString ;
  }

  public: GALGAS_propertyKind mProperty_mKind ;
  public: inline GALGAS_propertyKind readProperty_mKind (void) const {
    return mProperty_mKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_boundObjectList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMBoundObjectString (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoundObjectString = inValue ;
  }

  public: inline void setter_setMKind (const GALGAS_propertyKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKind = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_boundObjectList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_boundObjectList_2D_element (const GALGAS_string & in_mBoundObjectString,
                                             const GALGAS_propertyKind & in_mKind) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_boundObjectList_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_boundObjectList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                          const class GALGAS_propertyKind & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_boundObjectList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_boundObjectList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boundObjectList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//                           Phase 1: @autoLayoutViewGraphicControllerBindingGeneration enum                           *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewGraphicControllerBindingGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutViewGraphicControllerBindingGeneration (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_none,
    kEnum_binding
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewGraphicControllerBindingGeneration extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutViewGraphicControllerBindingGeneration constructor_binding (const class GALGAS_string & inOperand0
                                                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutViewGraphicControllerBindingGeneration constructor_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutViewGraphicControllerBindingGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_binding (class GALGAS_string & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBinding (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_binding (class GALGAS_string & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_none () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutViewGraphicControllerBindingGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @autoLayoutViewGraphicControllerBindingGeneration enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding : public cEnumAssociatedValues {
  public: const GALGAS_string mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding (const GALGAS_string inAssociatedValue0
                                                                                          COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewInstructionGenerationParameterList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mParameterName ;
  public: inline GALGAS_string readProperty_mParameterName (void) const {
    return mProperty_mParameterName ;
  }

  public: GALGAS_string mProperty_mParameterValue ;
  public: inline GALGAS_string readProperty_mParameterValue (void) const {
    return mProperty_mParameterValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMParameterName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterName = inValue ;
  }

  public: inline void setter_setMParameterValue (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (const GALGAS_string & in_mParameterName,
                                                                              const GALGAS_string & in_mParameterValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                           const class GALGAS_string & inOperand1
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutComputedViewInstructionGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutComputedViewInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutComputedViewInstructionGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_autoLayoutComputedViewInstructionGeneration (const class cPtr_autoLayoutComputedViewInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mAutoLayoutViewClassName (void) const ;

  public: class GALGAS_autoLayoutViewInstructionGenerationParameterList readProperty_mParameterList (void) const ;

  public: class GALGAS_autoLayoutViewInstructionGenerationFuncCallList readProperty_mFunctionCallList (void) const ;

  public: class GALGAS_autoLayoutRegularBindingsGenerationList readProperty_mRegularBindingsGenerationList (void) const ;

  public: class GALGAS_autoLayoutMultipleBindingGenerationList readProperty_mMultipleBindingGenerationList (void) const ;

  public: class GALGAS_autolayoutRunBindingForGeneration readProperty_mRunBindingGeneration (void) const ;

  public: class GALGAS_string readProperty_mTableViewBindingGeneration (void) const ;

  public: class GALGAS_autoLayoutViewGraphicControllerBindingGeneration readProperty_mEBViewGraphicControllerBindingGeneration (void) const ;

  public: class GALGAS_string readProperty_mConfiguratorName (void) const ;

  public: class GALGAS_string readProperty_mOutletName (void) const ;

  public: class GALGAS_bool readProperty_mOutletIsArray (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutComputedViewInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutComputedViewInstructionGeneration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_autoLayoutViewInstructionGenerationParameterList & inOperand1,
                                                                                           const class GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand2,
                                                                                           const class GALGAS_autoLayoutRegularBindingsGenerationList & inOperand3,
                                                                                           const class GALGAS_autoLayoutMultipleBindingGenerationList & inOperand4,
                                                                                           const class GALGAS_autolayoutRunBindingForGeneration & inOperand5,
                                                                                           const class GALGAS_string & inOperand6,
                                                                                           const class GALGAS_autoLayoutViewGraphicControllerBindingGeneration & inOperand7,
                                                                                           const class GALGAS_string & inOperand8,
                                                                                           const class GALGAS_string & inOperand9,
                                                                                           const class GALGAS_bool & inOperand10
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutComputedViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutComputedViewInstructionGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutComputedViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutComputedViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateViewInstruction
  public: virtual class GALGAS_string getter_generateViewInstruction (const class GALGAS_bool inPreferences,
           const class GALGAS_string inName,
           const class GALGAS_string inIndentation,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_lstring mProperty_mAutoLayoutViewClassName ;
  public: GALGAS_autoLayoutViewInstructionGenerationParameterList mProperty_mParameterList ;
  public: GALGAS_autoLayoutViewInstructionGenerationFuncCallList mProperty_mFunctionCallList ;
  public: GALGAS_autoLayoutRegularBindingsGenerationList mProperty_mRegularBindingsGenerationList ;
  public: GALGAS_autoLayoutMultipleBindingGenerationList mProperty_mMultipleBindingGenerationList ;
  public: GALGAS_autolayoutRunBindingForGeneration mProperty_mRunBindingGeneration ;
  public: GALGAS_string mProperty_mTableViewBindingGeneration ;
  public: GALGAS_autoLayoutViewGraphicControllerBindingGeneration mProperty_mEBViewGraphicControllerBindingGeneration ;
  public: GALGAS_string mProperty_mConfiguratorName ;
  public: GALGAS_string mProperty_mOutletName ;
  public: GALGAS_bool mProperty_mOutletIsArray ;

//--- Constructor
  public: cPtr_autoLayoutComputedViewInstructionGeneration (const GALGAS_lstring & in_mAutoLayoutViewClassName,
                                                            const GALGAS_autoLayoutViewInstructionGenerationParameterList & in_mParameterList,
                                                            const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFunctionCallList,
                                                            const GALGAS_autoLayoutRegularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                            const GALGAS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                            const GALGAS_autolayoutRunBindingForGeneration & in_mRunBindingGeneration,
                                                            const GALGAS_string & in_mTableViewBindingGeneration,
                                                            const GALGAS_autoLayoutViewGraphicControllerBindingGeneration & in_mEBViewGraphicControllerBindingGeneration,
                                                            const GALGAS_string & in_mConfiguratorName,
                                                            const GALGAS_string & in_mOutletName,
                                                            const GALGAS_bool & in_mOutletIsArray
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutComputedViewInstructionGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak : public GALGAS_abstractViewInstructionGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak (const class GALGAS_autoLayoutComputedViewInstructionGeneration & inSource) ;

  public: GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak & operator = (const class GALGAS_autoLayoutComputedViewInstructionGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_autoLayoutComputedViewInstructionGeneration bang_autoLayoutComputedViewInstructionGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak ;

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
//Abstract extension getter '@abstractViewGeneration generateViewBuilder'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generateViewBuilder (const class cPtr_abstractViewGeneration * inObject,
                                                             const class GALGAS_bool constin_inPreferences,
                                                             const class GALGAS_string constin_inViewName,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractViewInstructionGeneration generateViewInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generateViewInstruction (const class cPtr_abstractViewInstructionGeneration * inObject,
                                                                 const class GALGAS_bool constin_inPreferences,
                                                                 const class GALGAS_string constin_inName,
                                                                 const class GALGAS_string constin_inIndentation,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletClassDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_outletClassDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_outletClassDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_outletClassDeclarationAST (const class cPtr_outletClassDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mUserDefined (void) const ;

  public: class GALGAS_lstring readProperty_mSuperClassName (void) const ;

  public: class GALGAS_bool readProperty_mHasRunAction (void) const ;

  public: class GALGAS_bool readProperty_mHasEnabled (void) const ;

  public: class GALGAS_bool readProperty_mHandlesTableValueBinding (void) const ;

  public: class GALGAS_bool readProperty_mHandlesGraphicControllerBinding (void) const ;

  public: class GALGAS_bool readProperty_mHasHidden (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_outletClassDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outletClassDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_bool & inOperand1,
                                                                         const class GALGAS_lstring & inOperand2,
                                                                         const class GALGAS_bool & inOperand3,
                                                                         const class GALGAS_bool & inOperand4,
                                                                         const class GALGAS_bool & inOperand5,
                                                                         const class GALGAS_bool & inOperand6,
                                                                         const class GALGAS_bool & inOperand7
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_outletClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMHandlesGraphicControllerBinding (class GALGAS_bool inArgument0
                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHandlesTableValueBinding (class GALGAS_bool inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasEnabled (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasHidden (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasRunAction (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSuperClassName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUserDefined (class GALGAS_bool inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_outletClassDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @outletClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_outletClassDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter nodeKey
  public: virtual class GALGAS_lstring getter_nodeKey (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GALGAS_declarationPrecedenceGraph & ioGraph,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mUserDefined ;
  public: GALGAS_lstring mProperty_mSuperClassName ;
  public: GALGAS_bool mProperty_mHasRunAction ;
  public: GALGAS_bool mProperty_mHasEnabled ;
  public: GALGAS_bool mProperty_mHandlesTableValueBinding ;
  public: GALGAS_bool mProperty_mHandlesGraphicControllerBinding ;
  public: GALGAS_bool mProperty_mHasHidden ;

//--- Constructor
  public: cPtr_outletClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                          const GALGAS_bool & in_mUserDefined,
                                          const GALGAS_lstring & in_mSuperClassName,
                                          const GALGAS_bool & in_mHasRunAction,
                                          const GALGAS_bool & in_mHasEnabled,
                                          const GALGAS_bool & in_mHandlesTableValueBinding,
                                          const GALGAS_bool & in_mHandlesGraphicControllerBinding,
                                          const GALGAS_bool & in_mHasHidden
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletClassDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_outletClassDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_outletClassDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_outletClassDeclarationAST_2D_weak (const class GALGAS_outletClassDeclarationAST & inSource) ;

  public: GALGAS_outletClassDeclarationAST_2D_weak & operator = (const class GALGAS_outletClassDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_outletClassDeclarationAST bang_outletClassDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_outletClassDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outletClassDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_outletClassDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_outletClassDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@outletBindingSpecificationMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_outletBindingSpecificationMap : public cMapElement {
//--- Map attributes
  public: GALGAS_outletBindingSpecificationModelList mProperty_mOutletBindingSpecificationModelList ;
  public: GALGAS_controllerBindingOptionDecoratedList mProperty_mControllerBindingOptionList ;

//--- Constructor
  public: cMapElement_outletBindingSpecificationMap (const GALGAS_lstring & inKey,
                                                     const GALGAS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                     const GALGAS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionList
                                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletBindingSpecificationMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletBindingSpecificationMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_outletBindingSpecificationModelList mProperty_mOutletBindingSpecificationModelList ;
  public: inline GALGAS_outletBindingSpecificationModelList readProperty_mOutletBindingSpecificationModelList (void) const {
    return mProperty_mOutletBindingSpecificationModelList ;
  }

  public: GALGAS_controllerBindingOptionDecoratedList mProperty_mControllerBindingOptionList ;
  public: inline GALGAS_controllerBindingOptionDecoratedList readProperty_mControllerBindingOptionList (void) const {
    return mProperty_mControllerBindingOptionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_outletBindingSpecificationMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_outletBindingSpecificationMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMOutletBindingSpecificationModelList (const GALGAS_outletBindingSpecificationModelList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletBindingSpecificationModelList = inValue ;
  }

  public: inline void setter_setMControllerBindingOptionList (const GALGAS_controllerBindingOptionDecoratedList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControllerBindingOptionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_outletBindingSpecificationMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_outletBindingSpecificationMap_2D_element (const GALGAS_lstring & in_lkey,
                                                           const GALGAS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                           const GALGAS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_outletBindingSpecificationMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outletBindingSpecificationMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_outletBindingSpecificationModelList & inOperand1,
                                                                                        const class GALGAS_controllerBindingOptionDecoratedList & inOperand2
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_outletBindingSpecificationMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GALGAS_lstring mProperty_mOptionName ;
  public: inline GALGAS_lstring readProperty_mOptionName (void) const {
    return mProperty_mOptionName ;
  }

  public: GALGAS_abstractDefaultValue mProperty_mOptionValue ;
  public: inline GALGAS_abstractDefaultValue readProperty_mOptionValue (void) const {
    return mProperty_mOptionValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_bindingOptionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOptionName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionName = inValue ;
  }

  public: inline void setter_setMOptionValue (const GALGAS_abstractDefaultValue & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_bindingOptionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_bindingOptionList_2D_element (const GALGAS_lstring & in_mOptionName,
                                               const GALGAS_abstractDefaultValue & in_mOptionValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_bindingOptionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bindingOptionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_abstractDefaultValue & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_bindingOptionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GALGAS_outletBindingModelList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_outletBindingModelList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_propertyKind & in_mKind,
                                                 const class GALGAS_location & in_mErrorLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_outletBindingModelList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outletBindingModelList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_outletBindingModelList constructor_listWithValue (const class GALGAS_propertyKind & inOperand0,
                                                                                const class GALGAS_location & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_outletBindingModelList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_propertyKind & inOperand0,
                                                     const class GALGAS_location & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_outletBindingModelList add_operation (const GALGAS_outletBindingModelList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_outletBindingModelList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_propertyKind constinArgument0,
                                                      class GALGAS_location constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_propertyKind & outArgument0,
                                                 class GALGAS_location & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_propertyKind & outArgument0,
                                                class GALGAS_location & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_propertyKind & outArgument0,
                                                      class GALGAS_location & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorLocationAtIndex (class GALGAS_location constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKindAtIndex (class GALGAS_propertyKind constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_propertyKind & outArgument0,
                                              class GALGAS_location & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_propertyKind & outArgument0,
                                             class GALGAS_location & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mErrorLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyKind getter_mKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletBindingModelList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletBindingModelList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletBindingModelList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_outletBindingModelList ;
 
} ; // End of GALGAS_outletBindingModelList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_outletBindingModelList : public cGenericAbstractEnumerator {
  public: cEnumerator_outletBindingModelList (const GALGAS_outletBindingModelList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_propertyKind current_mKind (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mErrorLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_outletBindingModelList_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_propertyKind mProperty_mKind ;
  public: inline GALGAS_propertyKind readProperty_mKind (void) const {
    return mProperty_mKind ;
  }

  public: GALGAS_location mProperty_mErrorLocation ;
  public: inline GALGAS_location readProperty_mErrorLocation (void) const {
    return mProperty_mErrorLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_outletBindingModelList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMKind (const GALGAS_propertyKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKind = inValue ;
  }

  public: inline void setter_setMErrorLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorLocation = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_outletBindingModelList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_outletBindingModelList_2D_element (const GALGAS_propertyKind & in_mKind,
                                                    const GALGAS_location & in_mErrorLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_outletBindingModelList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outletBindingModelList_2D_element constructor_new (const class GALGAS_propertyKind & inOperand0,
                                                                                 const class GALGAS_location & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_outletBindingModelList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_outletBindingModelList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingModelList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                         Phase 1: @observablePropertyAST enum                                        *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_observablePropertyAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_observablePropertyAST (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_rootProperty,
    kEnum_rootPropertyWithOption,
    kEnum_rootPropertyRelationship,
    kEnum_rootPropertyNone,
    kEnum_selfWithoutProperty,
    kEnum_selfProperty,
    kEnum_selfPropertyWithOption,
    kEnum_selfPropertyArray,
    kEnum_selfPropertyObject,
    kEnum_selfPropertyNone,
    kEnum_prefsProperty,
    kEnum_prefsPropertyWithOption,
    kEnum_selfControllerProperty,
    kEnum_selfControllerSecondaryProperty,
    kEnum_selfControllerAllProperties,
    kEnum_selfControllerOneProperty,
    kEnum_signatureProperty,
    kEnum_versionProperty,
    kEnum_versionShouldChangeProperty,
    kEnum_superProperty,
    kEnum_superPropertyWithDefaultValue
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_observablePropertyAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_observablePropertyAST constructor_prefsProperty (const class GALGAS_lstring & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST constructor_prefsPropertyWithOption (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST constructor_rootProperty (const class GALGAS_lstring & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST constructor_rootPropertyNone (const class GALGAS_lstring & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST constructor_rootPropertyRelationship (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST constructor_rootPropertyWithOption (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_lstring & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST constructor_selfControllerAllProperties (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_lstring & inOperand1,
                                                                                             const class GALGAS_lstring & inOperand2
                                                                                             COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST constructor_selfControllerOneProperty (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_lstring & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST constructor_selfControllerProperty (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_lstring & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST constructor_selfControllerSecondaryProperty (const class GALGAS_lstring & inOperand0,
                                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                                 const class GALGAS_lstring & inOperand2
                                                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST constructor_selfProperty (const class GALGAS_lstring & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST constructor_selfPropertyArray (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST constructor_selfPropertyNone (const class GALGAS_lstring & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST constructor_selfPropertyObject (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST constructor_selfPropertyWithOption (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_lstring & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST constructor_selfWithoutProperty (const class GALGAS_location & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST constructor_signatureProperty (const class GALGAS_location & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST constructor_superProperty (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST constructor_superPropertyWithDefaultValue (const class GALGAS_lstring & inOperand0,
                                                                                               const class GALGAS_lstring & inOperand1,
                                                                                               const class GALGAS_abstractDefaultValue & inOperand2
                                                                                               COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST constructor_versionProperty (const class GALGAS_location & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST constructor_versionShouldChangeProperty (const class GALGAS_location & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_observablePropertyAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_prefsProperty (class GALGAS_lstring & outArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_prefsPropertyWithOption (class GALGAS_lstring & outArgument0,
                                                                class GALGAS_lstring & outArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_rootProperty (class GALGAS_lstring & outArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_rootPropertyNone (class GALGAS_lstring & outArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_rootPropertyRelationship (class GALGAS_lstring & outArgument0,
                                                                 class GALGAS_lstring & outArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_rootPropertyWithOption (class GALGAS_lstring & outArgument0,
                                                               class GALGAS_lstring & outArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selfControllerAllProperties (class GALGAS_lstring & outArgument0,
                                                                    class GALGAS_lstring & outArgument1,
                                                                    class GALGAS_lstring & outArgument2,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selfControllerOneProperty (class GALGAS_lstring & outArgument0,
                                                                  class GALGAS_lstring & outArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selfControllerProperty (class GALGAS_lstring & outArgument0,
                                                               class GALGAS_lstring & outArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selfControllerSecondaryProperty (class GALGAS_lstring & outArgument0,
                                                                        class GALGAS_lstring & outArgument1,
                                                                        class GALGAS_lstring & outArgument2,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selfProperty (class GALGAS_lstring & outArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selfPropertyArray (class GALGAS_lstring & outArgument0,
                                                          class GALGAS_lstring & outArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selfPropertyNone (class GALGAS_lstring & outArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selfPropertyObject (class GALGAS_lstring & outArgument0,
                                                           class GALGAS_lstring & outArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selfPropertyWithOption (class GALGAS_lstring & outArgument0,
                                                               class GALGAS_lstring & outArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selfWithoutProperty (class GALGAS_location & outArgument0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_signatureProperty (class GALGAS_location & outArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_superProperty (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_superPropertyWithDefaultValue (class GALGAS_lstring & outArgument0,
                                                                      class GALGAS_lstring & outArgument1,
                                                                      class GALGAS_abstractDefaultValue & outArgument2,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_versionProperty (class GALGAS_location & outArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_versionShouldChangeProperty (class GALGAS_location & outArgument0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrefsProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrefsPropertyWithOption (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRootProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRootPropertyNone (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRootPropertyRelationship (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRootPropertyWithOption (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfControllerAllProperties (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfControllerOneProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfControllerProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfControllerSecondaryProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfPropertyArray (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfPropertyNone (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfPropertyObject (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfPropertyWithOption (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfWithoutProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSignatureProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSuperProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSuperPropertyWithDefaultValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isVersionProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isVersionShouldChangeProperty (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_prefsProperty (class GALGAS_lstring & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_prefsPropertyWithOption (class GALGAS_lstring & outOperand0,
                                                                  class GALGAS_lstring & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_rootProperty (class GALGAS_lstring & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_rootPropertyNone (class GALGAS_lstring & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_rootPropertyRelationship (class GALGAS_lstring & outOperand0,
                                                                   class GALGAS_lstring & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_rootPropertyWithOption (class GALGAS_lstring & outOperand0,
                                                                 class GALGAS_lstring & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_selfControllerAllProperties (class GALGAS_lstring & outOperand0,
                                                                      class GALGAS_lstring & outOperand1,
                                                                      class GALGAS_lstring & outOperand2) const ;

  public: VIRTUAL_IN_DEBUG bool optional_selfControllerOneProperty (class GALGAS_lstring & outOperand0,
                                                                    class GALGAS_lstring & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_selfControllerProperty (class GALGAS_lstring & outOperand0,
                                                                 class GALGAS_lstring & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_selfControllerSecondaryProperty (class GALGAS_lstring & outOperand0,
                                                                          class GALGAS_lstring & outOperand1,
                                                                          class GALGAS_lstring & outOperand2) const ;

  public: VIRTUAL_IN_DEBUG bool optional_selfProperty (class GALGAS_lstring & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_selfPropertyArray (class GALGAS_lstring & outOperand0,
                                                            class GALGAS_lstring & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_selfPropertyNone (class GALGAS_lstring & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_selfPropertyObject (class GALGAS_lstring & outOperand0,
                                                             class GALGAS_lstring & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_selfPropertyWithOption (class GALGAS_lstring & outOperand0,
                                                                 class GALGAS_lstring & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_selfWithoutProperty (class GALGAS_location & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_signatureProperty (class GALGAS_location & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_superProperty (class GALGAS_lstring & outOperand0,
                                                        class GALGAS_lstring & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_superPropertyWithDefaultValue (class GALGAS_lstring & outOperand0,
                                                                        class GALGAS_lstring & outOperand1,
                                                                        class GALGAS_abstractDefaultValue & outOperand2) const ;

  public: VIRTUAL_IN_DEBUG bool optional_versionProperty (class GALGAS_location & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_versionShouldChangeProperty (class GALGAS_location & outOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_observablePropertyAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @observablePropertyAST enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_rootProperty : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_rootProperty (const GALGAS_lstring inAssociatedValue0
                                                                    COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_rootProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption (const GALGAS_lstring inAssociatedValue0,
                                                                              const GALGAS_lstring inAssociatedValue1
                                                                              COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship (const GALGAS_lstring inAssociatedValue0,
                                                                                const GALGAS_lstring inAssociatedValue1
                                                                                COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_rootPropertyNone : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_rootPropertyNone (const GALGAS_lstring inAssociatedValue0
                                                                        COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_rootPropertyNone (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty : public cEnumAssociatedValues {
  public: const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty (const GALGAS_location inAssociatedValue0
                                                                           COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfProperty : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_selfProperty (const GALGAS_lstring inAssociatedValue0
                                                                    COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_selfProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption (const GALGAS_lstring inAssociatedValue0,
                                                                              const GALGAS_lstring inAssociatedValue1
                                                                              COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfPropertyArray : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_selfPropertyArray (const GALGAS_lstring inAssociatedValue0,
                                                                         const GALGAS_lstring inAssociatedValue1
                                                                         COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_selfPropertyArray (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfPropertyObject : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_selfPropertyObject (const GALGAS_lstring inAssociatedValue0,
                                                                          const GALGAS_lstring inAssociatedValue1
                                                                          COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_selfPropertyObject (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfPropertyNone : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_selfPropertyNone (const GALGAS_lstring inAssociatedValue0
                                                                        COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_selfPropertyNone (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_prefsProperty : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_prefsProperty (const GALGAS_lstring inAssociatedValue0
                                                                     COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_prefsProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption (const GALGAS_lstring inAssociatedValue0,
                                                                               const GALGAS_lstring inAssociatedValue1
                                                                               COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfControllerProperty : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_selfControllerProperty (const GALGAS_lstring inAssociatedValue0,
                                                                              const GALGAS_lstring inAssociatedValue1
                                                                              COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_selfControllerProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;
  public: const GALGAS_lstring mAssociatedValue2 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty (const GALGAS_lstring inAssociatedValue0,
                                                                                       const GALGAS_lstring inAssociatedValue1,
                                                                                       const GALGAS_lstring inAssociatedValue2
                                                                                       COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;
  public: const GALGAS_lstring mAssociatedValue2 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties (const GALGAS_lstring inAssociatedValue0,
                                                                                   const GALGAS_lstring inAssociatedValue1,
                                                                                   const GALGAS_lstring inAssociatedValue2
                                                                                   COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty (const GALGAS_lstring inAssociatedValue0,
                                                                                 const GALGAS_lstring inAssociatedValue1
                                                                                 COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_signatureProperty : public cEnumAssociatedValues {
  public: const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_signatureProperty (const GALGAS_location inAssociatedValue0
                                                                         COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_signatureProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_versionProperty : public cEnumAssociatedValues {
  public: const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_versionProperty (const GALGAS_location inAssociatedValue0
                                                                       COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_versionProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty : public cEnumAssociatedValues {
  public: const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty (const GALGAS_location inAssociatedValue0
                                                                                   COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_superProperty : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_superProperty (const GALGAS_lstring inAssociatedValue0,
                                                                     const GALGAS_lstring inAssociatedValue1
                                                                     COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_superProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;
  public: const GALGAS_abstractDefaultValue mAssociatedValue2 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue (const GALGAS_lstring inAssociatedValue0,
                                                                                     const GALGAS_lstring inAssociatedValue1,
                                                                                     const GALGAS_abstractDefaultValue inAssociatedValue2
                                                                                     COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @observablePropertyList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_observablePropertyList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_observablePropertyAST mProperty_mObservableProperty ;
  public: inline GALGAS_observablePropertyAST readProperty_mObservableProperty (void) const {
    return mProperty_mObservableProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_observablePropertyList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMObservableProperty (const GALGAS_observablePropertyAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObservableProperty = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_observablePropertyList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_observablePropertyList_2D_element (const GALGAS_observablePropertyAST & in_mObservableProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_observablePropertyList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_observablePropertyList_2D_element constructor_new (const class GALGAS_observablePropertyAST & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_observablePropertyList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
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

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST modelStringFunctionArgument' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_modelStringFunctionArgument (const class GALGAS_observablePropertyAST & inObject,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST needs_unwSelf' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_needs_5F_unwSelf (const class GALGAS_observablePropertyAST & inObject,
                                                    const class GALGAS_bool & constinArgument0,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST location' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_location extensionGetter_location (const class GALGAS_observablePropertyAST & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@observablePropertyAST analyzeObservableProperty'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_analyzeObservableProperty (const class GALGAS_observablePropertyAST inObject,
                                                const class GALGAS_propertyMap constin_inRootPropertyMap,
                                                const class GALGAS_semanticContext constin_inSemanticContext,
                                                const class GALGAS_propertyMap constin_inBoundModelPropertyMap,
                                                class GALGAS_propertyKind & out_outKind,
                                                class GALGAS_string & out_outSwiftTypeStringForTransientFunctionArgument,
                                                class GALGAS_string & out_outDefaultValue,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @propertyAccessibility enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyAccessibility_transient : public cEnumAssociatedValues {
  public: const GALGAS_bool mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_propertyAccessibility_transient (const GALGAS_bool inAssociatedValue0
                                                                 COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_propertyAccessibility_transient (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @toManyRelationshipOptionAST enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite (const GALGAS_lstring inAssociatedValue0
                                                                         COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance (const GALGAS_lstring inAssociatedValue0
                                                                           COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'preferencesName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_preferencesName (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyKind swiftTypeName' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_swiftTypeName (const class GALGAS_propertyKind & inObject,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@typeKind swiftTypeName' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_swiftTypeName (const class GALGAS_typeKind & inObject,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKindList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typeKindList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_typeKindList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_typeKindList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_typeKind & in_mType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeKindList extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typeKindList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindList constructor_listWithValue (const class GALGAS_typeKind & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_typeKindList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_typeKind & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_typeKindList add_operation (const GALGAS_typeKindList & inOperand,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_typeKindList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_typeKind constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_typeKind & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_typeKind & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_typeKind & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GALGAS_typeKind constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_typeKind & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_typeKind & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeKindList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeKindList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeKindList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_typeKindList ;
 
} ; // End of GALGAS_typeKindList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_typeKindList : public cGenericAbstractEnumerator {
  public: cEnumerator_typeKindList (const GALGAS_typeKindList & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_typeKind current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_typeKindList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindList ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDefaultValue analyzeDefaultValueType'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeDefaultValueType (class cPtr_abstractDefaultValue * inObject,
                                                  const class GALGAS_typeKindList constin_inAttributeActualTypeList,
                                                  const class GALGAS_propertyMap constin_inPreferencesPropertyMap,
                                                  class GALGAS_string & out_outSwiftDefaultValueAsString,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

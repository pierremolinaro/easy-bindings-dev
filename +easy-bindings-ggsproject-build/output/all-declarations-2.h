#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewDeclarationMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_autoLayoutViewDeclarationMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_autoLayoutViewDeclarationMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewDeclarationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutViewDeclarationMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_autoLayoutViewDeclarationMap (const GALGAS_autoLayoutViewDeclarationMap & inSource) ;
  public: GALGAS_autoLayoutViewDeclarationMap & operator = (const GALGAS_autoLayoutViewDeclarationMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewDeclarationMap extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autoLayoutViewDeclarationMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutViewDeclarationMap class_func_mapWithMapToOverride (const class GALGAS_autoLayoutViewDeclarationMap & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewDeclarationMap add_operation (const GALGAS_autoLayoutViewDeclarationMap & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewDeclarationMap getter_overriddenMap (Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_autoLayoutViewDeclarationMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_autoLayoutViewDeclarationMap ;
 
} ; // End of GALGAS_autoLayoutViewDeclarationMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutViewDeclarationMap : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutViewDeclarationMap (const GALGAS_autoLayoutViewDeclarationMap & inEnumeratedObject,
                                                    const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutViewDeclarationMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewDeclarationMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@autoLayoutViewDeclarationMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_autoLayoutViewDeclarationMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public: cMapElement_autoLayoutViewDeclarationMap (const GALGAS_lstring & inKey
                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewDeclarationMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewDeclarationMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewDeclarationMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autoLayoutViewDeclarationMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_autoLayoutViewDeclarationMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutViewDeclarationMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewDeclarationMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@astAbstractViewDeclaration checkView'
//
//--------------------------------------------------------------------------------------------------

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
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@actionMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_actionMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public: cMapElement_actionMap (const GALGAS_lstring & inKey
                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
//                                             Phase 1: @propertyKind enum                                             *
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyKind extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_propertyKind class_func_arrayController (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_bool & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_propertyKind class_func_property (const class GALGAS_typeKind & inOperand0,
                                                                const class GALGAS_propertyAccessibility & inOperand1
                                                                COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_propertyKind class_func_selectionController (const class GALGAS_string & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_propertyKind class_func_toMany (const class GALGAS_lstring & inOperand0,
                                                              const class GALGAS_propertyAccessibility & inOperand1,
                                                              const class GALGAS_bool & inOperand2,
                                                              const class GALGAS_toManyRelationshipOptionAST & inOperand3
                                                              COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_propertyKind class_func_toOne (const class GALGAS_lstring & inOperand0,
                                                             const class GALGAS_propertyAccessibility & inOperand1,
                                                             const class GALGAS_bool & inOperand2,
                                                             const class GALGAS_toOneOppositeRelationship & inOperand3,
                                                             const class GALGAS_bool & inOperand4
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_propertyKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_arrayController (class GALGAS_lstring & outArgument0,
                                                        class GALGAS_bool & outArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_property (class GALGAS_typeKind & outArgument0,
                                                 class GALGAS_propertyAccessibility & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selectionController (class GALGAS_string & outArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_toMany (class GALGAS_lstring & outArgument0,
                                               class GALGAS_propertyAccessibility & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               class GALGAS_toManyRelationshipOptionAST & outArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_toOne (class GALGAS_lstring & outArgument0,
                                              class GALGAS_propertyAccessibility & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              class GALGAS_toOneOppositeRelationship & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              Compiler * inCompiler
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


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@propertyMap' map
//
//--------------------------------------------------------------------------------------------------

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
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticContext struct
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticContext extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticContext class_func_new (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_semanticContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticContext class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@astAutoLayoutViewFunctionCallList checkViewFunctionCallList'
//
//--------------------------------------------------------------------------------------------------

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
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//                                 Phase 1: @autolayoutEnabledBindingForGeneration enum                                *
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autolayoutEnabledBindingForGeneration extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autolayoutEnabledBindingForGeneration class_func_enabled (const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_autolayoutEnabledBindingForGeneration class_func_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_autolayoutEnabledBindingForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_enabled (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument0,
                                                Compiler * inCompiler
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


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @autolayoutEnabledBindingForGeneration enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled : public cEnumAssociatedValues {
  public: const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inAssociatedValue0
                                                                               COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
//                                   Phase 1: @autolayoutRunBindingForGeneration enum                                  *
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autolayoutRunBindingForGeneration extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autolayoutRunBindingForGeneration class_func_none (LOCATION_ARGS) ;

  public: static class GALGAS_autolayoutRunBindingForGeneration class_func_run (const class GALGAS_string & inOperand0,
                                                                                const class GALGAS_string & inOperand1,
                                                                                const class GALGAS_string & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_autolayoutRunBindingForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_run (class GALGAS_string & outArgument0,
                                            class GALGAS_string & outArgument1,
                                            class GALGAS_string & outArgument2,
                                            Compiler * inCompiler
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


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autolayoutRunBindingForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @autolayoutRunBindingForGeneration enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_autolayoutRunBindingForGeneration_run : public cEnumAssociatedValues {
  public: const GALGAS_string mAssociatedValue0 ;
  public: const GALGAS_string mAssociatedValue1 ;
  public: const GALGAS_string mAssociatedValue2 ;

//--- Constructor
  public: cEnumAssociatedValues_autolayoutRunBindingForGeneration_run (const GALGAS_string inAssociatedValue0,
                                                                       const GALGAS_string inAssociatedValue1,
                                                                       const GALGAS_string inAssociatedValue2
                                                                       COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_autolayoutRunBindingForGeneration_run (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @classKind enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_classKind_atomic : public cEnumAssociatedValues {
  public: const GALGAS_typeKind mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_classKind_atomic (const GALGAS_typeKind inAssociatedValue0
                                                  COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_classKind_atomic (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_classKind_document : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_classKind_document (const GALGAS_lstring inAssociatedValue0
                                                    COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_classKind_document (void) {}
} ;

//--------------------------------------------------------------------------------------------------

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

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_classKind_entity (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_expressionString (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewInstructionGenerationFuncCallList list
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewInstructionGenerationFuncCallList extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autoLayoutViewInstructionGenerationFuncCallList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutViewInstructionGenerationFuncCallList class_func_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                        const class GALGAS_autoLayoutViewInstructionGenerationParameterList & inOperand1
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_autoLayoutViewInstructionGenerationParameterList & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationFuncCallList add_operation (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_autoLayoutViewInstructionGenerationParameterList constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_autoLayoutViewInstructionGenerationParameterList constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionNameAtIndex (class GALGAS_string constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParametersAtIndex (class GALGAS_autoLayoutViewInstructionGenerationParameterList constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFunctionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationParameterList getter_mParametersAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutViewInstructionGenerationFuncCallList ;
 
} ; // End of GALGAS_autoLayoutViewInstructionGenerationFuncCallList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutViewInstructionGenerationFuncCallList : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutViewInstructionGenerationFuncCallList (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inEnumeratedObject,
                                                                       const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mFunctionName (LOCATION_ARGS) const ;
  public: class GALGAS_autoLayoutViewInstructionGenerationParameterList current_mParameters (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewInstructionGenerationParameterList list
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewInstructionGenerationParameterList extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autoLayoutViewInstructionGenerationParameterList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutViewInstructionGenerationParameterList class_func_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                         const class GALGAS_string & inOperand1
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutViewInstructionGenerationParameterList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationParameterList add_operation (const GALGAS_autoLayoutViewInstructionGenerationParameterList & inOperand,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterNameAtIndex (class GALGAS_string constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterValueAtIndex (class GALGAS_string constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mParameterNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mParameterValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationParameterList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationParameterList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationParameterList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutViewInstructionGenerationParameterList ;
 
} ; // End of GALGAS_autoLayoutViewInstructionGenerationParameterList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutViewInstructionGenerationParameterList : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutViewInstructionGenerationParameterList (const GALGAS_autoLayoutViewInstructionGenerationParameterList & inEnumeratedObject,
                                                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mParameterName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mParameterValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@astAbstractViewInstructionDeclaration generateViewCode'
//
//--------------------------------------------------------------------------------------------------

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
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutEnableBinding??handlesEnabledBinding?prefs????prefsMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (const class GALGAS_multipleBindingDescriptor constinArgument0,
                                                                                                               const class GALGAS_bool constinArgument1,
                                                                                                               const class GALGAS_bool constinArgument2,
                                                                                                               const class GALGAS_propertyMap constinArgument3,
                                                                                                               const class GALGAS_semanticContext constinArgument4,
                                                                                                               const class GALGAS_propertyMap constinArgument5,
                                                                                                               const class GALGAS_propertyMap constinArgument6,
                                                                                                               class GALGAS_autolayoutEnabledBindingForGeneration & outArgument7,
                                                                                                               class Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutRunBinding??handlesRunAction?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__21_ (const class GALGAS_runActionDescriptor constinArgument0,
                                                                                          const class GALGAS_bool constinArgument1,
                                                                                          const class GALGAS_bool constinArgument2,
                                                                                          const class GALGAS_lstring constinArgument3,
                                                                                          const class GALGAS_actionMap constinArgument4,
                                                                                          const class GALGAS_propertyMap constinArgument5,
                                                                                          const class GALGAS_string constinArgument6,
                                                                                          class GALGAS_autolayoutRunBindingForGeneration & outArgument7,
                                                                                          class Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractViewGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractViewGeneration_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractViewGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractViewGeneration_2D_weak (const class GALGAS_abstractViewGeneration & inSource) ;

  public: GALGAS_abstractViewGeneration_2D_weak & operator = (const class GALGAS_abstractViewGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractViewGeneration bang_abstractViewGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractViewGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_abstractViewGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_abstractViewGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractViewGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractViewGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewInstructionGenerationFuncCallList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                                                         const class GALGAS_autoLayoutViewInstructionGenerationParameterList & inOperand1,
                                                                                                         class Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewInstructionGenerationList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewInstructionGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutViewInstructionGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_autoLayoutViewInstructionGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_abstractViewInstructionGeneration & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewInstructionGenerationList extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autoLayoutViewInstructionGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutViewInstructionGenerationList class_func_listWithValue (const class GALGAS_abstractViewInstructionGeneration & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutViewInstructionGenerationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractViewInstructionGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationList add_operation (const GALGAS_autoLayoutViewInstructionGenerationList & inOperand,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_abstractViewInstructionGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractViewInstructionGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_abstractViewInstructionGeneration constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractViewInstructionGeneration getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutViewInstructionGenerationList ;
 
} ; // End of GALGAS_autoLayoutViewInstructionGenerationList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutViewInstructionGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutViewInstructionGenerationList (const GALGAS_autoLayoutViewInstructionGenerationList & inEnumeratedObject,
                                                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_abstractViewInstructionGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutViewInstructionGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewInstructionGenerationList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewInstructionGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autoLayoutViewInstructionGenerationList_2D_element class_func_new (const class GALGAS_abstractViewInstructionGeneration & inOperand0,
                                                                                                 class Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_autoLayoutViewInstructionGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutViewInstructionGenerationList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @computedHorizontalViewGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_computedHorizontalViewGeneration : public GALGAS_abstractViewGeneration {
//--------------------------------- Default constructor
  public: GALGAS_computedHorizontalViewGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_computedHorizontalViewGeneration (const class cPtr_computedHorizontalViewGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_autoLayoutViewInstructionGenerationFuncCallList readProperty_mFuncCallList (void) const ;

  public: class GALGAS_autoLayoutViewInstructionGenerationList readProperty_mInstructionList (void) const ;

  public: class GALGAS_astNewStackViewDeclarationList readProperty_mNewStackViewDeclarationList (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computedHorizontalViewGeneration extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_computedHorizontalViewGeneration class_func_new (const class GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                               const class GALGAS_autoLayoutViewInstructionGenerationList & inOperand1,
                                                                               const class GALGAS_astNewStackViewDeclarationList & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_computedHorizontalViewGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_computedHorizontalViewGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedHorizontalViewGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @computedHorizontalViewGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_computedHorizontalViewGeneration : public cPtr_abstractViewGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateViewBuilder
  public: virtual class GALGAS_string getter_generateViewBuilder (const class GALGAS_bool inPreferences,
           const class GALGAS_string inViewName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

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
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @computedHorizontalViewGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_computedHorizontalViewGeneration_2D_weak : public GALGAS_abstractViewGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_computedHorizontalViewGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_computedHorizontalViewGeneration_2D_weak (const class GALGAS_computedHorizontalViewGeneration & inSource) ;

  public: GALGAS_computedHorizontalViewGeneration_2D_weak & operator = (const class GALGAS_computedHorizontalViewGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_computedHorizontalViewGeneration bang_computedHorizontalViewGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computedHorizontalViewGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_computedHorizontalViewGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_computedHorizontalViewGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_computedHorizontalViewGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedHorizontalViewGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @computedVerticalViewGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_computedVerticalViewGeneration : public GALGAS_abstractViewGeneration {
//--------------------------------- Default constructor
  public: GALGAS_computedVerticalViewGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_computedVerticalViewGeneration (const class cPtr_computedVerticalViewGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_autoLayoutViewInstructionGenerationFuncCallList readProperty_mFuncCallList (void) const ;

  public: class GALGAS_autoLayoutViewInstructionGenerationList readProperty_mInstructionList (void) const ;

  public: class GALGAS_astNewStackViewDeclarationList readProperty_mNewStackViewDeclarationList (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computedVerticalViewGeneration extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_computedVerticalViewGeneration class_func_new (const class GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                             const class GALGAS_autoLayoutViewInstructionGenerationList & inOperand1,
                                                                             const class GALGAS_astNewStackViewDeclarationList & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_computedVerticalViewGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_computedVerticalViewGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedVerticalViewGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @computedVerticalViewGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_computedVerticalViewGeneration : public cPtr_abstractViewGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateViewBuilder
  public: virtual class GALGAS_string getter_generateViewBuilder (const class GALGAS_bool inPreferences,
           const class GALGAS_string inViewName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

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
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @computedVerticalViewGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_computedVerticalViewGeneration_2D_weak : public GALGAS_abstractViewGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_computedVerticalViewGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_computedVerticalViewGeneration_2D_weak (const class GALGAS_computedVerticalViewGeneration & inSource) ;

  public: GALGAS_computedVerticalViewGeneration_2D_weak & operator = (const class GALGAS_computedVerticalViewGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_computedVerticalViewGeneration bang_computedVerticalViewGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computedVerticalViewGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_computedVerticalViewGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_computedVerticalViewGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_computedVerticalViewGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedVerticalViewGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractViewInstructionGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractViewInstructionGeneration_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractViewInstructionGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractViewInstructionGeneration_2D_weak (const class GALGAS_abstractViewInstructionGeneration & inSource) ;

  public: GALGAS_abstractViewInstructionGeneration_2D_weak & operator = (const class GALGAS_abstractViewInstructionGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractViewInstructionGeneration bang_abstractViewInstructionGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractViewInstructionGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_abstractViewInstructionGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_abstractViewInstructionGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractViewInstructionGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutMultipleBindingGenerationList list
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutMultipleBindingGenerationList extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autoLayoutMultipleBindingGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutMultipleBindingGenerationList class_func_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutMultipleBindingGenerationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutMultipleBindingGenerationList add_operation (const GALGAS_autoLayoutMultipleBindingGenerationList & inOperand,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GALGAS_string constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBoundObjectExpressionAtIndex (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBindingNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mBoundObjectExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutMultipleBindingGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutMultipleBindingGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutMultipleBindingGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutMultipleBindingGenerationList ;
 
} ; // End of GALGAS_autoLayoutMultipleBindingGenerationList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutMultipleBindingGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutMultipleBindingGenerationList (const GALGAS_autoLayoutMultipleBindingGenerationList & inEnumeratedObject,
                                                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mBindingName (LOCATION_ARGS) const ;
  public: class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration current_mBoundObjectExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutMultipleBindingGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutMultipleBindingGenerationList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutMultipleBindingGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autoLayoutMultipleBindingGenerationList_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                                                 const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1,
                                                                                                 class Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_autoLayoutMultipleBindingGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutMultipleBindingGenerationList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @hStackViewInstructionGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_hStackViewInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--------------------------------- Default constructor
  public: GALGAS_hStackViewInstructionGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_hStackViewInstructionGeneration (const class cPtr_hStackViewInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_autoLayoutViewInstructionGenerationFuncCallList readProperty_mFuncCallList (void) const ;

  public: class GALGAS_autoLayoutViewInstructionGenerationList readProperty_mInstructionList (void) const ;

  public: class GALGAS_autoLayoutMultipleBindingGenerationList readProperty_mMultipleBindingGenerationList (void) const ;

  public: class GALGAS_astNewStackViewDeclarationList readProperty_mNewStackViewDeclarationList (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_hStackViewInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_hStackViewInstructionGeneration class_func_new (const class GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                              const class GALGAS_autoLayoutViewInstructionGenerationList & inOperand1,
                                                                              const class GALGAS_autoLayoutMultipleBindingGenerationList & inOperand2,
                                                                              const class GALGAS_astNewStackViewDeclarationList & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_hStackViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_hStackViewInstructionGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_hStackViewInstructionGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @hStackViewInstructionGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_hStackViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateViewInstruction
  public: virtual class GALGAS_string getter_generateViewInstruction (const class GALGAS_bool inPreferences,
           const class GALGAS_string inName,
           const class GALGAS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const override ;

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
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @hStackViewInstructionGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_hStackViewInstructionGeneration_2D_weak : public GALGAS_abstractViewInstructionGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_hStackViewInstructionGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_hStackViewInstructionGeneration_2D_weak (const class GALGAS_hStackViewInstructionGeneration & inSource) ;

  public: GALGAS_hStackViewInstructionGeneration_2D_weak & operator = (const class GALGAS_hStackViewInstructionGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_hStackViewInstructionGeneration bang_hStackViewInstructionGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_hStackViewInstructionGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_hStackViewInstructionGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_hStackViewInstructionGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_hStackViewInstructionGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_hStackViewInstructionGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @vStackViewInstructionGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_vStackViewInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--------------------------------- Default constructor
  public: GALGAS_vStackViewInstructionGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_vStackViewInstructionGeneration (const class cPtr_vStackViewInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_autoLayoutViewInstructionGenerationFuncCallList readProperty_mFuncCallList (void) const ;

  public: class GALGAS_autoLayoutViewInstructionGenerationList readProperty_mInstructionList (void) const ;

  public: class GALGAS_autoLayoutMultipleBindingGenerationList readProperty_mMultipleBindingGenerationList (void) const ;

  public: class GALGAS_astNewStackViewDeclarationList readProperty_mNewStackViewDeclarationList (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_vStackViewInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_vStackViewInstructionGeneration class_func_new (const class GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                              const class GALGAS_autoLayoutViewInstructionGenerationList & inOperand1,
                                                                              const class GALGAS_autoLayoutMultipleBindingGenerationList & inOperand2,
                                                                              const class GALGAS_astNewStackViewDeclarationList & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_vStackViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_vStackViewInstructionGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_vStackViewInstructionGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @vStackViewInstructionGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_vStackViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateViewInstruction
  public: virtual class GALGAS_string getter_generateViewInstruction (const class GALGAS_bool inPreferences,
           const class GALGAS_string inName,
           const class GALGAS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const override ;

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
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @vStackViewInstructionGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_vStackViewInstructionGeneration_2D_weak : public GALGAS_abstractViewInstructionGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_vStackViewInstructionGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_vStackViewInstructionGeneration_2D_weak (const class GALGAS_vStackViewInstructionGeneration & inSource) ;

  public: GALGAS_vStackViewInstructionGeneration_2D_weak & operator = (const class GALGAS_vStackViewInstructionGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_vStackViewInstructionGeneration bang_vStackViewInstructionGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_vStackViewInstructionGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_vStackViewInstructionGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_vStackViewInstructionGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_vStackViewInstructionGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_vStackViewInstructionGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutSpaceViewInstructionGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutSpaceViewInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutSpaceViewInstructionGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_autoLayoutSpaceViewInstructionGeneration (const class cPtr_autoLayoutSpaceViewInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutSpaceViewInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autoLayoutSpaceViewInstructionGeneration class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_autoLayoutSpaceViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutSpaceViewInstructionGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutSpaceViewInstructionGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutSpaceViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateViewInstruction
  public: virtual class GALGAS_string getter_generateViewInstruction (const class GALGAS_bool inPreferences,
           const class GALGAS_string inName,
           const class GALGAS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties

//--- Constructor
  public: cPtr_autoLayoutSpaceViewInstructionGeneration (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutSpaceViewInstructionGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak : public GALGAS_abstractViewInstructionGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak (const class GALGAS_autoLayoutSpaceViewInstructionGeneration & inSource) ;

  public: GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak & operator = (const class GALGAS_autoLayoutSpaceViewInstructionGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_autoLayoutSpaceViewInstructionGeneration bang_autoLayoutSpaceViewInstructionGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutSeparatorInstructionGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutSeparatorInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutSeparatorInstructionGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_autoLayoutSeparatorInstructionGeneration (const class cPtr_autoLayoutSeparatorInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_horizontal (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutSeparatorInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autoLayoutSeparatorInstructionGeneration class_func_new (const class GALGAS_bool & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_autoLayoutSeparatorInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutSeparatorInstructionGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutSeparatorInstructionGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutSeparatorInstructionGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutSeparatorInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateViewInstruction
  public: virtual class GALGAS_string getter_generateViewInstruction (const class GALGAS_bool inPreferences,
           const class GALGAS_string inName,
           const class GALGAS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_bool mProperty_horizontal ;

//--- Constructor
  public: cPtr_autoLayoutSeparatorInstructionGeneration (const GALGAS_bool & in_horizontal
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutSeparatorInstructionGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak : public GALGAS_abstractViewInstructionGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak (const class GALGAS_autoLayoutSeparatorInstructionGeneration & inSource) ;

  public: GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak & operator = (const class GALGAS_autoLayoutSeparatorInstructionGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_autoLayoutSeparatorInstructionGeneration bang_autoLayoutSeparatorInstructionGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutDividerInstructionGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutDividerInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutDividerInstructionGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_autoLayoutDividerInstructionGeneration (const class cPtr_autoLayoutDividerInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_horizontal (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutDividerInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autoLayoutDividerInstructionGeneration class_func_new (const class GALGAS_bool & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_autoLayoutDividerInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutDividerInstructionGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDividerInstructionGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutDividerInstructionGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutDividerInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateViewInstruction
  public: virtual class GALGAS_string getter_generateViewInstruction (const class GALGAS_bool inPreferences,
           const class GALGAS_string inName,
           const class GALGAS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_bool mProperty_horizontal ;

//--- Constructor
  public: cPtr_autoLayoutDividerInstructionGeneration (const GALGAS_bool & in_horizontal
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutDividerInstructionGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutDividerInstructionGeneration_2D_weak : public GALGAS_abstractViewInstructionGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutDividerInstructionGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_autoLayoutDividerInstructionGeneration_2D_weak (const class GALGAS_autoLayoutDividerInstructionGeneration & inSource) ;

  public: GALGAS_autoLayoutDividerInstructionGeneration_2D_weak & operator = (const class GALGAS_autoLayoutDividerInstructionGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_autoLayoutDividerInstructionGeneration bang_autoLayoutDividerInstructionGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutDividerInstructionGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autoLayoutDividerInstructionGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_autoLayoutDividerInstructionGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutDividerInstructionGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDividerInstructionGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutLocalViewInstructionGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutLocalViewInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutLocalViewInstructionGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_autoLayoutLocalViewInstructionGeneration (const class cPtr_autoLayoutLocalViewInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mLocalView (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutLocalViewInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autoLayoutLocalViewInstructionGeneration class_func_new (const class GALGAS_string & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_autoLayoutLocalViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutLocalViewInstructionGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutLocalViewInstructionGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutLocalViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateViewInstruction
  public: virtual class GALGAS_string getter_generateViewInstruction (const class GALGAS_bool inPreferences,
           const class GALGAS_string inName,
           const class GALGAS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_string mProperty_mLocalView ;

//--- Constructor
  public: cPtr_autoLayoutLocalViewInstructionGeneration (const GALGAS_string & in_mLocalView
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutLocalViewInstructionGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak : public GALGAS_abstractViewInstructionGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak (const class GALGAS_autoLayoutLocalViewInstructionGeneration & inSource) ;

  public: GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak & operator = (const class GALGAS_autoLayoutLocalViewInstructionGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_autoLayoutLocalViewInstructionGeneration bang_autoLayoutLocalViewInstructionGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutRegularBindingsGenerationList list
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutRegularBindingsGenerationList extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autoLayoutRegularBindingsGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutRegularBindingsGenerationList class_func_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                const class GALGAS_boundObjectList & inOperand1,
                                                                                                const class GALGAS_string & inOperand2
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutRegularBindingsGenerationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_boundObjectList & inOperand1,
                                                     const class GALGAS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_autoLayoutRegularBindingsGenerationList add_operation (const GALGAS_autoLayoutRegularBindingsGenerationList & inOperand,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_boundObjectList constinArgument1,
                                               class GALGAS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_boundObjectList constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_boundObjectList & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_boundObjectList & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_boundObjectList & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GALGAS_string constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingOptionsStringAtIndex (class GALGAS_string constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBoundObjectListAtIndex (class GALGAS_boundObjectList constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_boundObjectList & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_boundObjectList & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBindingNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBindingOptionsStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_boundObjectList getter_mBoundObjectListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutRegularBindingsGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutRegularBindingsGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_autoLayoutRegularBindingsGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutRegularBindingsGenerationList ;
 
} ; // End of GALGAS_autoLayoutRegularBindingsGenerationList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutRegularBindingsGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_autoLayoutRegularBindingsGenerationList (const GALGAS_autoLayoutRegularBindingsGenerationList & inEnumeratedObject,
                                                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mBindingName (LOCATION_ARGS) const ;
  public: class GALGAS_boundObjectList current_mBoundObjectList (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBindingOptionsString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_autoLayoutRegularBindingsGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutRegularBindingsGenerationList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutRegularBindingsGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autoLayoutRegularBindingsGenerationList_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                                                 const class GALGAS_boundObjectList & inOperand1,
                                                                                                 const class GALGAS_string & inOperand2,
                                                                                                 class Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_autoLayoutRegularBindingsGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutRegularBindingsGenerationList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//                                         Phase 1: @propertyAccessibility enum                                        *
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyAccessibility extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_propertyAccessibility class_func_computed (LOCATION_ARGS) ;

  public: static class GALGAS_propertyAccessibility class_func_stored (LOCATION_ARGS) ;

  public: static class GALGAS_propertyAccessibility class_func_transient (const class GALGAS_bool & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_propertyAccessibility & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_transient (class GALGAS_bool & outArgument0,
                                                  Compiler * inCompiler
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


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyAccessibility ;

//--------------------------------------------------------------------------------------------------
//
//                                      Phase 1: @toManyRelationshipOptionAST enum                                     *
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_toManyRelationshipOptionAST extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_toManyRelationshipOptionAST class_func_hasDependance (const class GALGAS_lstring & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_toManyRelationshipOptionAST class_func_hasOpposite (const class GALGAS_lstring & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_toManyRelationshipOptionAST class_func_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_toManyRelationshipOptionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_hasDependance (class GALGAS_lstring & outArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_hasOpposite (class GALGAS_lstring & outArgument0,
                                                    Compiler * inCompiler
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


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST ;

//--------------------------------------------------------------------------------------------------
//
//                                       Phase 1: @toOneOppositeRelationship enum                                      *
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_toOneOppositeRelationship extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_toOneOppositeRelationship class_func_none (LOCATION_ARGS) ;

  public: static class GALGAS_toOneOppositeRelationship class_func_oppositeIsToMany (const class GALGAS_lstring & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_toOneOppositeRelationship class_func_oppositeIsToOne (const class GALGAS_lstring & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_toOneOppositeRelationship & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_oppositeIsToMany (class GALGAS_lstring & outArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_oppositeIsToOne (class GALGAS_lstring & outArgument0,
                                                        Compiler * inCompiler
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


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @propertyKind enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyKind_property : public cEnumAssociatedValues {
  public: const GALGAS_typeKind mAssociatedValue0 ;
  public: const GALGAS_propertyAccessibility mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_propertyKind_property (const GALGAS_typeKind inAssociatedValue0,
                                                       const GALGAS_propertyAccessibility inAssociatedValue1
                                                       COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_propertyKind_property (void) {}
} ;

//--------------------------------------------------------------------------------------------------

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

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_propertyKind_toMany (void) {}
} ;

//--------------------------------------------------------------------------------------------------

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

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_propertyKind_toOne (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyKind_arrayController : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_bool mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_propertyKind_arrayController (const GALGAS_lstring inAssociatedValue0,
                                                              const GALGAS_bool inAssociatedValue1
                                                              COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_propertyKind_arrayController (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyKind_selectionController : public cEnumAssociatedValues {
  public: const GALGAS_string mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_propertyKind_selectionController (const GALGAS_string inAssociatedValue0
                                                                  COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_propertyKind_selectionController (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boundObjectList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_boundObjectList_2D_element extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_boundObjectList_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_propertyKind & inOperand1,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_boundObjectList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_boundObjectList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boundObjectList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//                           Phase 1: @autoLayoutViewGraphicControllerBindingGeneration enum                           *
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewGraphicControllerBindingGeneration extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autoLayoutViewGraphicControllerBindingGeneration class_func_binding (const class GALGAS_string & inOperand0
                                                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_autoLayoutViewGraphicControllerBindingGeneration class_func_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_autoLayoutViewGraphicControllerBindingGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_binding (class GALGAS_string & outArgument0,
                                                Compiler * inCompiler
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


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @autoLayoutViewGraphicControllerBindingGeneration enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding : public cEnumAssociatedValues {
  public: const GALGAS_string mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding (const GALGAS_string inAssociatedValue0
                                                                                          COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewInstructionGenerationParameterList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                                                          const class GALGAS_string & inOperand1,
                                                                                                          class Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutComputedViewInstructionGeneration reference class
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutComputedViewInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autoLayoutComputedViewInstructionGeneration class_func_new (const class GALGAS_lstring & inOperand0,
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
  public: ComparisonResult objectCompare (const GALGAS_autoLayoutComputedViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutComputedViewInstructionGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutComputedViewInstructionGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutComputedViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter generateViewInstruction
  public: virtual class GALGAS_string getter_generateViewInstruction (const class GALGAS_bool inPreferences,
           const class GALGAS_string inName,
           const class GALGAS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const override ;

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
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutComputedViewInstructionGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak : public GALGAS_abstractViewInstructionGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak (const class GALGAS_autoLayoutComputedViewInstructionGeneration & inSource) ;

  public: GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak & operator = (const class GALGAS_autoLayoutComputedViewInstructionGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_autoLayoutComputedViewInstructionGeneration bang_autoLayoutComputedViewInstructionGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@autoLayoutViewInstructionGenerationFuncCallList generate'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generate (const class GALGAS_autoLayoutViewInstructionGenerationFuncCallList inObject,
                               const class GALGAS_string constin_inIndentation,
                               class GALGAS_string & io_ioStr,
                               class Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractViewGeneration generateViewBuilder'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generateViewBuilder (const class cPtr_abstractViewGeneration * inObject,
                                                             const class GALGAS_bool constin_inPreferences,
                                                             const class GALGAS_string constin_inViewName,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generateViewInstruction (const class cPtr_abstractViewInstructionGeneration * inObject,
                                                                 const class GALGAS_bool constin_inPreferences,
                                                                 const class GALGAS_string constin_inName,
                                                                 const class GALGAS_string constin_inIndentation,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_outletClassDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_outletClassDeclarationAST (void) ;

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_outletClassDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_outletClassDeclarationAST class_func_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_bool & inOperand1,
                                                                        const class GALGAS_lstring & inOperand2,
                                                                        const class GALGAS_bool & inOperand3,
                                                                        const class GALGAS_bool & inOperand4,
                                                                        const class GALGAS_bool & inOperand5,
                                                                        const class GALGAS_bool & inOperand6,
                                                                        const class GALGAS_bool & inOperand7
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_outletClassDeclarationAST & inOperand) const ;

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


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @outletClassDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_outletClassDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter nodeKey
  public: virtual class GALGAS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GALGAS_declarationPrecedenceGraph & ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_outletClassDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_outletClassDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_outletClassDeclarationAST_2D_weak (const class GALGAS_outletClassDeclarationAST & inSource) ;

  public: GALGAS_outletClassDeclarationAST_2D_weak & operator = (const class GALGAS_outletClassDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_outletClassDeclarationAST bang_outletClassDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_outletClassDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_outletClassDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_outletClassDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_outletClassDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@outletBindingSpecificationMap' map
//
//--------------------------------------------------------------------------------------------------

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
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outletBindingSpecificationMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_outletBindingSpecificationMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_outletBindingSpecificationMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_outletBindingSpecificationModelList & inOperand1,
                                                                                       const class GALGAS_controllerBindingOptionDecoratedList & inOperand2,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_outletBindingSpecificationMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_outletBindingSpecificationMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bindingOptionList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_bindingOptionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_bindingOptionList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_abstractDefaultValue & inOperand1,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_bindingOptionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_bindingOptionList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingOptionList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outletBindingModelList list
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_outletBindingModelList extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_outletBindingModelList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_outletBindingModelList class_func_listWithValue (const class GALGAS_propertyKind & inOperand0,
                                                                               const class GALGAS_location & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_outletBindingModelList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_propertyKind & inOperand0,
                                                     const class GALGAS_location & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_outletBindingModelList add_operation (const GALGAS_outletBindingModelList & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_propertyKind constinArgument0,
                                               class GALGAS_location constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_propertyKind constinArgument0,
                                                      class GALGAS_location constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_propertyKind & outArgument0,
                                                 class GALGAS_location & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_propertyKind & outArgument0,
                                                class GALGAS_location & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_propertyKind & outArgument0,
                                                      class GALGAS_location & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorLocationAtIndex (class GALGAS_location constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKindAtIndex (class GALGAS_propertyKind constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_propertyKind & outArgument0,
                                              class GALGAS_location & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_propertyKind & outArgument0,
                                             class GALGAS_location & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mErrorLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyKind getter_mKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletBindingModelList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletBindingModelList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_outletBindingModelList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_outletBindingModelList ;
 
} ; // End of GALGAS_outletBindingModelList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_outletBindingModelList : public cGenericAbstractEnumerator {
  public: cEnumerator_outletBindingModelList (const GALGAS_outletBindingModelList & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_propertyKind current_mKind (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mErrorLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_outletBindingModelList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingModelList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outletBindingModelList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_outletBindingModelList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_outletBindingModelList_2D_element class_func_new (const class GALGAS_propertyKind & inOperand0,
                                                                                const class GALGAS_location & inOperand1,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_outletBindingModelList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_outletBindingModelList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingModelList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//                                         Phase 1: @observablePropertyAST enum                                        *
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_observablePropertyAST extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_observablePropertyAST class_func_prefsProperty (const class GALGAS_lstring & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST class_func_prefsPropertyWithOption (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_lstring & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST class_func_rootProperty (const class GALGAS_lstring & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST class_func_rootPropertyNone (const class GALGAS_lstring & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST class_func_rootPropertyRelationship (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST class_func_rootPropertyWithOption (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST class_func_selfControllerAllProperties (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_lstring & inOperand1,
                                                                                            const class GALGAS_lstring & inOperand2
                                                                                            COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST class_func_selfControllerOneProperty (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST class_func_selfControllerProperty (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST class_func_selfControllerSecondaryProperty (const class GALGAS_lstring & inOperand0,
                                                                                                const class GALGAS_lstring & inOperand1,
                                                                                                const class GALGAS_lstring & inOperand2
                                                                                                COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST class_func_selfProperty (const class GALGAS_lstring & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST class_func_selfPropertyArray (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST class_func_selfPropertyNone (const class GALGAS_lstring & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST class_func_selfPropertyObject (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST class_func_selfPropertyWithOption (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST class_func_selfWithoutProperty (const class GALGAS_location & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST class_func_signatureProperty (const class GALGAS_location & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST class_func_superProperty (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST class_func_superPropertyWithDefaultValue (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_lstring & inOperand1,
                                                                                              const class GALGAS_abstractDefaultValue & inOperand2
                                                                                              COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST class_func_versionProperty (const class GALGAS_location & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_observablePropertyAST class_func_versionShouldChangeProperty (const class GALGAS_location & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_observablePropertyAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_prefsProperty (class GALGAS_lstring & outArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_prefsPropertyWithOption (class GALGAS_lstring & outArgument0,
                                                                class GALGAS_lstring & outArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_rootProperty (class GALGAS_lstring & outArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_rootPropertyNone (class GALGAS_lstring & outArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_rootPropertyRelationship (class GALGAS_lstring & outArgument0,
                                                                 class GALGAS_lstring & outArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_rootPropertyWithOption (class GALGAS_lstring & outArgument0,
                                                               class GALGAS_lstring & outArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selfControllerAllProperties (class GALGAS_lstring & outArgument0,
                                                                    class GALGAS_lstring & outArgument1,
                                                                    class GALGAS_lstring & outArgument2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selfControllerOneProperty (class GALGAS_lstring & outArgument0,
                                                                  class GALGAS_lstring & outArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selfControllerProperty (class GALGAS_lstring & outArgument0,
                                                               class GALGAS_lstring & outArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selfControllerSecondaryProperty (class GALGAS_lstring & outArgument0,
                                                                        class GALGAS_lstring & outArgument1,
                                                                        class GALGAS_lstring & outArgument2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selfProperty (class GALGAS_lstring & outArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selfPropertyArray (class GALGAS_lstring & outArgument0,
                                                          class GALGAS_lstring & outArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selfPropertyNone (class GALGAS_lstring & outArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selfPropertyObject (class GALGAS_lstring & outArgument0,
                                                           class GALGAS_lstring & outArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selfPropertyWithOption (class GALGAS_lstring & outArgument0,
                                                               class GALGAS_lstring & outArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_selfWithoutProperty (class GALGAS_location & outArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_signatureProperty (class GALGAS_location & outArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_superProperty (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_superPropertyWithDefaultValue (class GALGAS_lstring & outArgument0,
                                                                      class GALGAS_lstring & outArgument1,
                                                                      class GALGAS_abstractDefaultValue & outArgument2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_versionProperty (class GALGAS_location & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_versionShouldChangeProperty (class GALGAS_location & outArgument0,
                                                                    Compiler * inCompiler
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


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @observablePropertyAST enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_rootProperty : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_rootProperty (const GALGAS_lstring inAssociatedValue0
                                                                    COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_rootProperty (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption (const GALGAS_lstring inAssociatedValue0,
                                                                              const GALGAS_lstring inAssociatedValue1
                                                                              COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship (const GALGAS_lstring inAssociatedValue0,
                                                                                const GALGAS_lstring inAssociatedValue1
                                                                                COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_rootPropertyNone : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_rootPropertyNone (const GALGAS_lstring inAssociatedValue0
                                                                        COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_rootPropertyNone (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty : public cEnumAssociatedValues {
  public: const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty (const GALGAS_location inAssociatedValue0
                                                                           COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfProperty : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_selfProperty (const GALGAS_lstring inAssociatedValue0
                                                                    COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_selfProperty (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption (const GALGAS_lstring inAssociatedValue0,
                                                                              const GALGAS_lstring inAssociatedValue1
                                                                              COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfPropertyArray : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_selfPropertyArray (const GALGAS_lstring inAssociatedValue0,
                                                                         const GALGAS_lstring inAssociatedValue1
                                                                         COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_selfPropertyArray (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfPropertyObject : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_selfPropertyObject (const GALGAS_lstring inAssociatedValue0,
                                                                          const GALGAS_lstring inAssociatedValue1
                                                                          COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_selfPropertyObject (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfPropertyNone : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_selfPropertyNone (const GALGAS_lstring inAssociatedValue0
                                                                        COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_selfPropertyNone (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_prefsProperty : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_prefsProperty (const GALGAS_lstring inAssociatedValue0
                                                                     COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_prefsProperty (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption (const GALGAS_lstring inAssociatedValue0,
                                                                               const GALGAS_lstring inAssociatedValue1
                                                                               COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfControllerProperty : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_selfControllerProperty (const GALGAS_lstring inAssociatedValue0,
                                                                              const GALGAS_lstring inAssociatedValue1
                                                                              COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_selfControllerProperty (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;
  public: const GALGAS_lstring mAssociatedValue2 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty (const GALGAS_lstring inAssociatedValue0,
                                                                                       const GALGAS_lstring inAssociatedValue1,
                                                                                       const GALGAS_lstring inAssociatedValue2
                                                                                       COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;
  public: const GALGAS_lstring mAssociatedValue2 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties (const GALGAS_lstring inAssociatedValue0,
                                                                                   const GALGAS_lstring inAssociatedValue1,
                                                                                   const GALGAS_lstring inAssociatedValue2
                                                                                   COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty (const GALGAS_lstring inAssociatedValue0,
                                                                                 const GALGAS_lstring inAssociatedValue1
                                                                                 COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_signatureProperty : public cEnumAssociatedValues {
  public: const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_signatureProperty (const GALGAS_location inAssociatedValue0
                                                                         COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_signatureProperty (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_versionProperty : public cEnumAssociatedValues {
  public: const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_versionProperty (const GALGAS_location inAssociatedValue0
                                                                       COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_versionProperty (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty : public cEnumAssociatedValues {
  public: const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty (const GALGAS_location inAssociatedValue0
                                                                                   COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_superProperty : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_superProperty (const GALGAS_lstring inAssociatedValue0,
                                                                     const GALGAS_lstring inAssociatedValue1
                                                                     COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_superProperty (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;
  public: const GALGAS_abstractDefaultValue mAssociatedValue2 ;

//--- Constructor
  public: cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue (const GALGAS_lstring inAssociatedValue0,
                                                                                     const GALGAS_lstring inAssociatedValue1,
                                                                                     const GALGAS_abstractDefaultValue inAssociatedValue2
                                                                                     COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @observablePropertyList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_observablePropertyList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_observablePropertyList_2D_element class_func_new (const class GALGAS_observablePropertyAST & inOperand0,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_observablePropertyList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_observablePropertyList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST modelStringForSelf' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_modelStringForSelf (const class GALGAS_observablePropertyAST & inObject,
                                                        const class GALGAS_string & constinArgument0,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST modelStringFunctionArgument' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_modelStringFunctionArgument (const class GALGAS_observablePropertyAST & inObject,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST needs_unwSelf' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_needs_5F_unwSelf (const class GALGAS_observablePropertyAST & inObject,
                                                    const class GALGAS_bool & constinArgument0,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST location' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_location extensionGetter_location (const class GALGAS_observablePropertyAST & inObject,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@observablePropertyAST analyzeObservableProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeObservableProperty (const class GALGAS_observablePropertyAST inObject,
                                                const class GALGAS_propertyMap constin_inRootPropertyMap,
                                                const class GALGAS_semanticContext constin_inSemanticContext,
                                                const class GALGAS_propertyMap constin_inBoundModelPropertyMap,
                                                class GALGAS_propertyKind & out_outKind,
                                                class GALGAS_string & out_outSwiftTypeStringForTransientFunctionArgument,
                                                class GALGAS_string & out_outDefaultValue,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @propertyAccessibility enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyAccessibility_transient : public cEnumAssociatedValues {
  public: const GALGAS_bool mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_propertyAccessibility_transient (const GALGAS_bool inAssociatedValue0
                                                                 COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_propertyAccessibility_transient (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @toManyRelationshipOptionAST enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite (const GALGAS_lstring inAssociatedValue0
                                                                         COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance (const GALGAS_lstring inAssociatedValue0
                                                                           COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
//Function 'preferencesName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_preferencesName (class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyKind swiftTypeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_swiftTypeName (const class GALGAS_propertyKind & inObject,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@typeKind swiftTypeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_swiftTypeName (const class GALGAS_typeKind & inObject,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKindList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeKindList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_typeKindList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_typeKindList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_typeKind & in_mType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeKindList extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typeKindList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_typeKindList class_func_listWithValue (const class GALGAS_typeKind & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_typeKindList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_typeKind & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_typeKindList add_operation (const GALGAS_typeKindList & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_typeKind constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_typeKind constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_typeKind & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_typeKind & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_typeKind & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GALGAS_typeKind constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_typeKind & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_typeKind & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeKindList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeKindList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeKindList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_typeKindList ;
 
} ; // End of GALGAS_typeKindList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_typeKindList : public cGenericAbstractEnumerator {
  public: cEnumerator_typeKindList (const GALGAS_typeKindList & inEnumeratedObject,
                                    const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_typeKind current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_typeKindList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindList ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDefaultValue analyzeDefaultValueType'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeDefaultValueType (class cPtr_abstractDefaultValue * inObject,
                                                  const class GALGAS_typeKindList constin_inAttributeActualTypeList,
                                                  const class GALGAS_propertyMap constin_inPreferencesPropertyMap,
                                                  class GALGAS_string & out_outSwiftDefaultValueAsString,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @computedPropertyDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_computedPropertyDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_computedPropertyDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_computedPropertyDeclarationAST (const class cPtr_computedPropertyDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mRootEntityName (void) const ;

  public: class GALGAS_lstring readProperty_mComputedPropertyTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mComputedPropertyName (void) const ;

  public: class GALGAS_observablePropertyList readProperty_mDependencyList (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computedPropertyDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_computedPropertyDeclarationAST class_func_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_lstring & inOperand2,
                                                                             const class GALGAS_lstring & inOperand3,
                                                                             const class GALGAS_observablePropertyList & inOperand4
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_computedPropertyDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMComputedPropertyName (class GALGAS_lstring inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMComputedPropertyTypeName (class GALGAS_lstring inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDependencyList (class GALGAS_observablePropertyList inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_computedPropertyDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @computedPropertyDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_computedPropertyDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter nodeKey
  public: virtual class GALGAS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GALGAS_declarationPrecedenceGraph & ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method thirdAnalysisPhase
  public: virtual void method_thirdAnalysisPhase (class GALGAS_semanticContext & ioSemanticContext,
           class GALGAS_generationStruct & ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mRootEntityName ;
  public: GALGAS_lstring mProperty_mComputedPropertyTypeName ;
  public: GALGAS_lstring mProperty_mComputedPropertyName ;
  public: GALGAS_observablePropertyList mProperty_mDependencyList ;

//--- Constructor
  public: cPtr_computedPropertyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                               const GALGAS_lstring & in_mRootEntityName,
                                               const GALGAS_lstring & in_mComputedPropertyTypeName,
                                               const GALGAS_lstring & in_mComputedPropertyName,
                                               const GALGAS_observablePropertyList & in_mDependencyList
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @computedPropertyDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_computedPropertyDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_computedPropertyDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_computedPropertyDeclarationAST_2D_weak (const class GALGAS_computedPropertyDeclarationAST & inSource) ;

  public: GALGAS_computedPropertyDeclarationAST_2D_weak & operator = (const class GALGAS_computedPropertyDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_computedPropertyDeclarationAST bang_computedPropertyDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computedPropertyDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_computedPropertyDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_computedPropertyDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_computedPropertyDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @transientDependencyListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_transientDependencyListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_transientDependencyListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_transientDependencyListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_observablePropertyAST & in_mDependency,
                                                 const class GALGAS_string & in_mFunctionArgumentName,
                                                 const class GALGAS_string & in_mFunctionArgumentTypeString,
                                                 const class GALGAS_string & in_mDefaultValueAsString
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_transientDependencyListForGeneration extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_transientDependencyListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_transientDependencyListForGeneration class_func_listWithValue (const class GALGAS_observablePropertyAST & inOperand0,
                                                                                             const class GALGAS_string & inOperand1,
                                                                                             const class GALGAS_string & inOperand2,
                                                                                             const class GALGAS_string & inOperand3
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_transientDependencyListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_observablePropertyAST & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     const class GALGAS_string & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_transientDependencyListForGeneration add_operation (const GALGAS_transientDependencyListForGeneration & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_observablePropertyAST constinArgument0,
                                               class GALGAS_string constinArgument1,
                                               class GALGAS_string constinArgument2,
                                               class GALGAS_string constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_observablePropertyAST constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_string constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_observablePropertyAST & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_observablePropertyAST & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                class GALGAS_string & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_observablePropertyAST & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_string & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDefaultValueAsStringAtIndex (class GALGAS_string constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDependencyAtIndex (class GALGAS_observablePropertyAST constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionArgumentNameAtIndex (class GALGAS_string constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionArgumentTypeStringAtIndex (class GALGAS_string constinArgument0,
                                                                              class GALGAS_uint constinArgument1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_observablePropertyAST & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_observablePropertyAST & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             class GALGAS_string & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mDefaultValueAsStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_observablePropertyAST getter_mDependencyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFunctionArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFunctionArgumentTypeStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_transientDependencyListForGeneration ;
 
} ; // End of GALGAS_transientDependencyListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_transientDependencyListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_transientDependencyListForGeneration (const GALGAS_transientDependencyListForGeneration & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_observablePropertyAST current_mDependency (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mFunctionArgumentName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mFunctionArgumentTypeString (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mDefaultValueAsString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_transientDependencyListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDependencyListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @transientDependencyListForGeneration_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_transientDependencyListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_observablePropertyAST mProperty_mDependency ;
  public: inline GALGAS_observablePropertyAST readProperty_mDependency (void) const {
    return mProperty_mDependency ;
  }

  public: GALGAS_string mProperty_mFunctionArgumentName ;
  public: inline GALGAS_string readProperty_mFunctionArgumentName (void) const {
    return mProperty_mFunctionArgumentName ;
  }

  public: GALGAS_string mProperty_mFunctionArgumentTypeString ;
  public: inline GALGAS_string readProperty_mFunctionArgumentTypeString (void) const {
    return mProperty_mFunctionArgumentTypeString ;
  }

  public: GALGAS_string mProperty_mDefaultValueAsString ;
  public: inline GALGAS_string readProperty_mDefaultValueAsString (void) const {
    return mProperty_mDefaultValueAsString ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_transientDependencyListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDependency (const GALGAS_observablePropertyAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDependency = inValue ;
  }

  public: inline void setter_setMFunctionArgumentName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionArgumentName = inValue ;
  }

  public: inline void setter_setMFunctionArgumentTypeString (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionArgumentTypeString = inValue ;
  }

  public: inline void setter_setMDefaultValueAsString (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefaultValueAsString = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_transientDependencyListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_transientDependencyListForGeneration_2D_element (const GALGAS_observablePropertyAST & in_mDependency,
                                                                  const GALGAS_string & in_mFunctionArgumentName,
                                                                  const GALGAS_string & in_mFunctionArgumentTypeString,
                                                                  const GALGAS_string & in_mDefaultValueAsString) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_transientDependencyListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_transientDependencyListForGeneration_2D_element class_func_new (const class GALGAS_observablePropertyAST & inOperand0,
                                                                                              const class GALGAS_string & inOperand1,
                                                                                              const class GALGAS_string & inOperand2,
                                                                                              const class GALGAS_string & inOperand3,
                                                                                              class Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_transientDependencyListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_transientDependencyListForGeneration_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_propertyGeneration_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_propertyGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_propertyGeneration_2D_weak (const class GALGAS_propertyGeneration & inSource) ;

  public: GALGAS_propertyGeneration_2D_weak & operator = (const class GALGAS_propertyGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_propertyGeneration bang_propertyGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_propertyGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_propertyGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_propertyGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @computedPropertyGenerationList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_computedPropertyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_computedPropertyGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_computedPropertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_computedPropertyGeneration & in_mProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computedPropertyGenerationList extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_computedPropertyGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_computedPropertyGenerationList class_func_listWithValue (const class GALGAS_computedPropertyGeneration & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_computedPropertyGenerationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_computedPropertyGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_computedPropertyGenerationList add_operation (const GALGAS_computedPropertyGenerationList & inOperand,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_computedPropertyGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_computedPropertyGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_computedPropertyGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_computedPropertyGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_computedPropertyGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GALGAS_computedPropertyGeneration constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_computedPropertyGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_computedPropertyGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_computedPropertyGeneration getter_mPropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_computedPropertyGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_computedPropertyGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_computedPropertyGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_computedPropertyGenerationList ;
 
} ; // End of GALGAS_computedPropertyGenerationList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_computedPropertyGenerationList : public cGenericAbstractEnumerator {
  public: cEnumerator_computedPropertyGenerationList (const GALGAS_computedPropertyGenerationList & inEnumeratedObject,
                                                      const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_computedPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_computedPropertyGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGenerationList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @computedPropertyGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_computedPropertyGeneration : public GALGAS_propertyGeneration {
//--------------------------------- Default constructor
  public: GALGAS_computedPropertyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_computedPropertyGeneration (const class cPtr_computedPropertyGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mClassName (void) const ;

  public: class GALGAS_typeKind readProperty_mType (void) const ;

  public: class GALGAS_transientDependencyListForGeneration readProperty_mDependencyList (void) const ;

  public: class GALGAS_bool readProperty_mGenerate (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computedPropertyGeneration extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_computedPropertyGeneration class_func_new (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         const class GALGAS_typeKind & inOperand2,
                                                                         const class GALGAS_transientDependencyListForGeneration & inOperand3,
                                                                         const class GALGAS_bool & inOperand4
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_computedPropertyGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMClassName (class GALGAS_string inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDependencyList (class GALGAS_transientDependencyListForGeneration inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGenerate (class GALGAS_bool inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMType (class GALGAS_typeKind inArgument0
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_computedPropertyGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @computedPropertyGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_computedPropertyGeneration : public cPtr_propertyGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter bindPropertyInSelectionController
  public: virtual class GALGAS_string getter_bindPropertyInSelectionController (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter configurationCode
  public: virtual class GALGAS_string getter_configurationCode (const class GALGAS_bool inPreferences,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter declarationInSelectionControllerCode
  public: virtual class GALGAS_string getter_declarationInSelectionControllerCode (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter initCode
  public: virtual class GALGAS_string getter_initCode (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter propertyDeclarationCode
  public: virtual class GALGAS_string getter_propertyDeclarationCode (const class GALGAS_bool inPreferences,
           const class GALGAS_bool inGenerationDirectAccess,
           const class GALGAS_stringset inOverriddenTransients,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_string mProperty_mClassName ;
  public: GALGAS_typeKind mProperty_mType ;
  public: GALGAS_transientDependencyListForGeneration mProperty_mDependencyList ;
  public: GALGAS_bool mProperty_mGenerate ;

//--- Constructor
  public: cPtr_computedPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                           const GALGAS_string & in_mClassName,
                                           const GALGAS_typeKind & in_mType,
                                           const GALGAS_transientDependencyListForGeneration & in_mDependencyList,
                                           const GALGAS_bool & in_mGenerate
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @computedPropertyGenerationList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_computedPropertyGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_computedPropertyGeneration mProperty_mProperty ;
  public: inline GALGAS_computedPropertyGeneration readProperty_mProperty (void) const {
    return mProperty_mProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_computedPropertyGenerationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProperty (const GALGAS_computedPropertyGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProperty = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_computedPropertyGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_computedPropertyGenerationList_2D_element (const GALGAS_computedPropertyGeneration & in_mProperty) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computedPropertyGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_computedPropertyGenerationList_2D_element class_func_new (const class GALGAS_computedPropertyGeneration & inOperand0,
                                                                                        class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_computedPropertyGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_computedPropertyGenerationList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGenerationList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @computeRoutineGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_computeRoutineGeneration : public GALGAS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GALGAS_computeRoutineGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_computeRoutineGeneration (const class cPtr_computeRoutineGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mOwnerName (void) const ;

  public: class GALGAS_string readProperty_mTransientName (void) const ;

  public: class GALGAS_typeKind readProperty_mTransientType (void) const ;

  public: class GALGAS_transientDependencyListForGeneration readProperty_mDependencyList (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computeRoutineGeneration extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_computeRoutineGeneration class_func_new (const class GALGAS_string & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       const class GALGAS_typeKind & inOperand2,
                                                                       const class GALGAS_transientDependencyListForGeneration & inOperand3
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_computeRoutineGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDependencyList (class GALGAS_transientDependencyListForGeneration inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOwnerName (class GALGAS_string inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTransientName (class GALGAS_string inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTransientType (class GALGAS_typeKind inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_computeRoutineGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computeRoutineGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @computeRoutineGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_computeRoutineGeneration : public cPtr_abstractFileGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_string inOutputDirectory,
           const class GALGAS_generationStruct inGenerationStruct,
           class GALGAS_stringset & ioGeneratedFileSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mOwnerName ;
  public: GALGAS_string mProperty_mTransientName ;
  public: GALGAS_typeKind mProperty_mTransientType ;
  public: GALGAS_transientDependencyListForGeneration mProperty_mDependencyList ;

//--- Constructor
  public: cPtr_computeRoutineGeneration (const GALGAS_string & in_mOwnerName,
                                         const GALGAS_string & in_mTransientName,
                                         const GALGAS_typeKind & in_mTransientType,
                                         const GALGAS_transientDependencyListForGeneration & in_mDependencyList
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;


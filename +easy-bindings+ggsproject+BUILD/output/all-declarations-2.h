#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @implicitViewFunctionGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_implicitViewFunctionGenerationList final {
  public: DownEnumerator_implicitViewFunctionGenerationList (const class GGS_implicitViewFunctionGenerationList & inList) ;

  public: ~ DownEnumerator_implicitViewFunctionGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractViewInstructionGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_implicitViewFunctionGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_implicitViewFunctionGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_implicitViewFunctionGenerationList (const DownEnumerator_implicitViewFunctionGenerationList &) = delete ;
  private: DownEnumerator_implicitViewFunctionGenerationList & operator = (const DownEnumerator_implicitViewFunctionGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_implicitViewFunctionGenerationList final {
  public: UpEnumerator_implicitViewFunctionGenerationList (const class GGS_implicitViewFunctionGenerationList & inList)  ;

  public: ~ UpEnumerator_implicitViewFunctionGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractViewInstructionGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_implicitViewFunctionGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_implicitViewFunctionGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_implicitViewFunctionGenerationList (const UpEnumerator_implicitViewFunctionGenerationList &) = delete ;
  private: UpEnumerator_implicitViewFunctionGenerationList & operator = (const UpEnumerator_implicitViewFunctionGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @implicitViewFunctionGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_implicitViewFunctionGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_implicitViewFunctionGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_implicitViewFunctionGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_implicitViewFunctionGenerationList (void) = default ;

//--- Copy
  public: GGS_implicitViewFunctionGenerationList (const GGS_implicitViewFunctionGenerationList &) = default ;
  public: GGS_implicitViewFunctionGenerationList & operator = (const GGS_implicitViewFunctionGenerationList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_implicitViewFunctionGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_implicitViewFunctionGenerationList subList (const int32_t inStart,
                                                           const int32_t inLength,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_implicitViewFunctionGenerationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_abstractViewInstructionGeneration & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_implicitViewFunctionGenerationList init (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_implicitViewFunctionGenerationList extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_implicitViewFunctionGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_implicitViewFunctionGenerationList class_func_listWithValue (const class GGS_abstractViewInstructionGeneration & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_implicitViewFunctionGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_abstractViewInstructionGeneration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_implicitViewFunctionGenerationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_implicitViewFunctionGenerationList add_operation (const GGS_implicitViewFunctionGenerationList & inOperand,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_abstractViewInstructionGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_abstractViewInstructionGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_abstractViewInstructionGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_abstractViewInstructionGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_abstractViewInstructionGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_abstractViewInstructionGeneration constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_abstractViewInstructionGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_abstractViewInstructionGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractViewInstructionGeneration getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_implicitViewFunctionGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_implicitViewFunctionGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_implicitViewFunctionGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_implicitViewFunctionGenerationList ;
  friend class DownEnumerator_implicitViewFunctionGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitViewFunctionGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractViewInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractViewInstructionGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractViewInstructionGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractViewInstructionGeneration (const class cPtr_abstractViewInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractViewInstructionGeneration init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractViewInstructionGeneration extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractViewInstructionGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractViewInstructionGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractViewInstructionGeneration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractViewInstructionGeneration_init (Compiler * inCompiler) ;


//--- Extension getter generateAppendViewInstruction
  public: virtual class GGS_string getter_generateAppendViewInstruction (const class GGS_bool inPreferences,
           const class GGS_string inReceiverViewName,
           const class GGS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter generateViewInstruction
  public: virtual class GGS_string getter_generateViewInstruction (const class GGS_bool inPreferences,
           const class GGS_string inName,
           const class GGS_string inIndentation,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_abstractViewInstructionGeneration (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @implicitViewFunctionGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_implicitViewFunctionGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractViewInstructionGeneration mProperty_mInstruction ;
  public: inline GGS_abstractViewInstructionGeneration readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_implicitViewFunctionGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_abstractViewInstructionGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_implicitViewFunctionGenerationList_2E_element (const GGS_abstractViewInstructionGeneration & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_implicitViewFunctionGenerationList_2E_element (const GGS_implicitViewFunctionGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_implicitViewFunctionGenerationList_2E_element & operator = (const GGS_implicitViewFunctionGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_implicitViewFunctionGenerationList_2E_element init_21_ (const class GGS_abstractViewInstructionGeneration & inOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_implicitViewFunctionGenerationList_2E_element extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_implicitViewFunctionGenerationList_2E_element class_func_new (const class GGS_abstractViewInstructionGeneration & inOperand0,
                                                                                         class Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitViewFunctionGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutConfiguratorMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutConfiguratorMap final {

  public: DownEnumerator_autoLayoutConfiguratorMap (const class GGS_autoLayoutConfiguratorMap & inMap) ;

  public: ~ DownEnumerator_autoLayoutConfiguratorMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_string current_mAutoLayoutOutletTypeName (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutConfiguratorMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutConfiguratorMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutConfiguratorMap (const DownEnumerator_autoLayoutConfiguratorMap &) = delete ;
  private: DownEnumerator_autoLayoutConfiguratorMap & operator = (const DownEnumerator_autoLayoutConfiguratorMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutConfiguratorMap final {
  public: UpEnumerator_autoLayoutConfiguratorMap (const class GGS_autoLayoutConfiguratorMap & inMap)  ;

  public: ~ UpEnumerator_autoLayoutConfiguratorMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_string current_mAutoLayoutOutletTypeName (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutConfiguratorMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutConfiguratorMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutConfiguratorMap (const UpEnumerator_autoLayoutConfiguratorMap &) = delete ;
  private: UpEnumerator_autoLayoutConfiguratorMap & operator = (const UpEnumerator_autoLayoutConfiguratorMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutConfiguratorMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_autoLayoutConfiguratorMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_autoLayoutConfiguratorMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_autoLayoutConfiguratorMap (void) ;

//--- Handle copy
  public: GGS_autoLayoutConfiguratorMap (const GGS_autoLayoutConfiguratorMap & inSource) ;
  public: GGS_autoLayoutConfiguratorMap & operator = (const GGS_autoLayoutConfiguratorMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_autoLayoutConfiguratorMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_autoLayoutConfiguratorMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutConfiguratorMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutConfiguratorMap init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutConfiguratorMap extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutConfiguratorMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutConfiguratorMap class_func_mapWithMapToOverride (const class GGS_autoLayoutConfiguratorMap & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutOutletTypeNameForKey (class GGS_string constinArgument0,
                                                                           class GGS_string constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_string & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mAutoLayoutOutletTypeNameForKey (const class GGS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutConfiguratorMap getter_overriddenMap (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutConfiguratorMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutConfiguratorMap ;
  friend class DownEnumerator_autoLayoutConfiguratorMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutConfiguratorMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutConfiguratorMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutConfiguratorMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_string mProperty_mAutoLayoutOutletTypeName ;
  public: inline GGS_string readProperty_mAutoLayoutOutletTypeName (void) const {
    return mProperty_mAutoLayoutOutletTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutConfiguratorMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMAutoLayoutOutletTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutOutletTypeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutConfiguratorMap_2E_element (const GGS_lstring & in_lkey,
                                                    const GGS_string & in_mAutoLayoutOutletTypeName) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutConfiguratorMap_2E_element (const GGS_autoLayoutConfiguratorMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutConfiguratorMap_2E_element & operator = (const GGS_autoLayoutConfiguratorMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutConfiguratorMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_string & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutConfiguratorMap_2E_element extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutConfiguratorMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                const class GGS_string & inOperand1,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutConfiguratorMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: autoLayoutConfiguratorMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutConfiguratorMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_autoLayoutConfiguratorMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutConfiguratorMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_autoLayoutConfiguratorMap_2E_element_3F_ (const GGS_autoLayoutConfiguratorMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_autoLayoutConfiguratorMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_autoLayoutConfiguratorMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutConfiguratorMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutConfiguratorMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutDocumentFileGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutDocumentFileGeneration : public GGS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GGS_autoLayoutDocumentFileGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_autoLayoutDocumentFileGeneration (const class cPtr_autoLayoutDocumentFileGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mDocumentName (void) const ;

  public: class GGS_string readProperty_mRootEntityName (void) const ;

  public: class GGS_string readProperty_mMainViewName (void) const ;

  public: class GGS_propertyGenerationList readProperty_mDocumentPropertyGenearionList (void) const ;

  public: class GGS_decoratedOutletMap readProperty_mOutletMap (void) const ;

  public: class GGS_autoLayoutOutletMap readProperty_mAutoLayoutOutletMap (void) const ;

  public: class GGS_actionBindingListForGeneration readProperty_mTargetActionList (void) const ;

  public: class GGS_regularBindingsGenerationList readProperty_mRegularBindingsGenerationList (void) const ;

  public: class GGS_multipleBindingGenerationList readProperty_multipleBindingGenerationList (void) const ;

  public: class GGS_tableViewBindingGenerationList readProperty_mTableViewBindingGenerationList (void) const ;

  public: class GGS_ebViewGraphicControllerBindingGenerationList readProperty_mEBViewBindingGenerationList (void) const ;

  public: class GGS_viewGenerationList readProperty_mViewDeclarationList (void) const ;

  public: class GGS_implicitViewFunctionGenerationList readProperty_mImplicitViewFunctionGenerationList (void) const ;

  public: class GGS_autoLayoutConfiguratorMap readProperty_mConfiguratorMap (void) const ;

  public: class GGS_string readProperty_mCustomSuperClassName (void) const ;

  public: class GGS_autoLayoutOutletLinkerGenerationList readProperty_mOutletLinkerGenerationList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutDocumentFileGeneration init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                                            const class GGS_string & inOperand1,
                                                                                                                            const class GGS_string & inOperand2,
                                                                                                                            const class GGS_propertyGenerationList & inOperand3,
                                                                                                                            const class GGS_decoratedOutletMap & inOperand4,
                                                                                                                            const class GGS_autoLayoutOutletMap & inOperand5,
                                                                                                                            const class GGS_actionBindingListForGeneration & inOperand6,
                                                                                                                            const class GGS_regularBindingsGenerationList & inOperand7,
                                                                                                                            const class GGS_multipleBindingGenerationList & inOperand8,
                                                                                                                            const class GGS_tableViewBindingGenerationList & inOperand9,
                                                                                                                            const class GGS_ebViewGraphicControllerBindingGenerationList & inOperand10,
                                                                                                                            const class GGS_viewGenerationList & inOperand11,
                                                                                                                            const class GGS_implicitViewFunctionGenerationList & inOperand12,
                                                                                                                            const class GGS_autoLayoutConfiguratorMap & inOperand13,
                                                                                                                            const class GGS_string & inOperand14,
                                                                                                                            const class GGS_autoLayoutOutletLinkerGenerationList & inOperand15,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutDocumentFileGeneration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutDocumentFileGeneration class_func_new (const class GGS_string & inOperand0,
                                                                            const class GGS_string & inOperand1,
                                                                            const class GGS_string & inOperand2,
                                                                            const class GGS_propertyGenerationList & inOperand3,
                                                                            const class GGS_decoratedOutletMap & inOperand4,
                                                                            const class GGS_autoLayoutOutletMap & inOperand5,
                                                                            const class GGS_actionBindingListForGeneration & inOperand6,
                                                                            const class GGS_regularBindingsGenerationList & inOperand7,
                                                                            const class GGS_multipleBindingGenerationList & inOperand8,
                                                                            const class GGS_tableViewBindingGenerationList & inOperand9,
                                                                            const class GGS_ebViewGraphicControllerBindingGenerationList & inOperand10,
                                                                            const class GGS_viewGenerationList & inOperand11,
                                                                            const class GGS_implicitViewFunctionGenerationList & inOperand12,
                                                                            const class GGS_autoLayoutConfiguratorMap & inOperand13,
                                                                            const class GGS_string & inOperand14,
                                                                            const class GGS_autoLayoutOutletLinkerGenerationList & inOperand15,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutDocumentFileGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @autoLayoutDocumentFileGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutDocumentFileGeneration : public cPtr_abstractFileGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void autoLayoutDocumentFileGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                                      const class GGS_string & inOperand1,
                                                                                                                      const class GGS_string & inOperand2,
                                                                                                                      const class GGS_propertyGenerationList & inOperand3,
                                                                                                                      const class GGS_decoratedOutletMap & inOperand4,
                                                                                                                      const class GGS_autoLayoutOutletMap & inOperand5,
                                                                                                                      const class GGS_actionBindingListForGeneration & inOperand6,
                                                                                                                      const class GGS_regularBindingsGenerationList & inOperand7,
                                                                                                                      const class GGS_multipleBindingGenerationList & inOperand8,
                                                                                                                      const class GGS_tableViewBindingGenerationList & inOperand9,
                                                                                                                      const class GGS_ebViewGraphicControllerBindingGenerationList & inOperand10,
                                                                                                                      const class GGS_viewGenerationList & inOperand11,
                                                                                                                      const class GGS_implicitViewFunctionGenerationList & inOperand12,
                                                                                                                      const class GGS_autoLayoutConfiguratorMap & inOperand13,
                                                                                                                      const class GGS_string & inOperand14,
                                                                                                                      const class GGS_autoLayoutOutletLinkerGenerationList & inOperand15,
                                                                                                                      Compiler * inCompiler) ;


//--- Extension method generateCodePhase1
  public: virtual void method_generateCodePhase_31_ (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
           class GGS_stringset & arg_ioUsedProtocolSet,
           class GGS_stringset & arg_ioGeneratedFileSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCodePhase2
  public: virtual void method_generateCodePhase_32_ (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
           const class GGS_stringset arg_inUsedProtocolSet,
           class GGS_stringset & arg_ioGeneratedFileSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mDocumentName ;
  public: GGS_string mProperty_mRootEntityName ;
  public: GGS_string mProperty_mMainViewName ;
  public: GGS_propertyGenerationList mProperty_mDocumentPropertyGenearionList ;
  public: GGS_decoratedOutletMap mProperty_mOutletMap ;
  public: GGS_autoLayoutOutletMap mProperty_mAutoLayoutOutletMap ;
  public: GGS_actionBindingListForGeneration mProperty_mTargetActionList ;
  public: GGS_regularBindingsGenerationList mProperty_mRegularBindingsGenerationList ;
  public: GGS_multipleBindingGenerationList mProperty_multipleBindingGenerationList ;
  public: GGS_tableViewBindingGenerationList mProperty_mTableViewBindingGenerationList ;
  public: GGS_ebViewGraphicControllerBindingGenerationList mProperty_mEBViewBindingGenerationList ;
  public: GGS_viewGenerationList mProperty_mViewDeclarationList ;
  public: GGS_implicitViewFunctionGenerationList mProperty_mImplicitViewFunctionGenerationList ;
  public: GGS_autoLayoutConfiguratorMap mProperty_mConfiguratorMap ;
  public: GGS_string mProperty_mCustomSuperClassName ;
  public: GGS_autoLayoutOutletLinkerGenerationList mProperty_mOutletLinkerGenerationList ;


//--- Default constructor
  public: cPtr_autoLayoutDocumentFileGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_autoLayoutDocumentFileGeneration (const GGS_string & in_mDocumentName,
                                                 const GGS_string & in_mRootEntityName,
                                                 const GGS_string & in_mMainViewName,
                                                 const GGS_propertyGenerationList & in_mDocumentPropertyGenearionList,
                                                 const GGS_decoratedOutletMap & in_mOutletMap,
                                                 const GGS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                                 const GGS_actionBindingListForGeneration & in_mTargetActionList,
                                                 const GGS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                 const GGS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                                 const GGS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                 const GGS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                 const GGS_viewGenerationList & in_mViewDeclarationList,
                                                 const GGS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                 const GGS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                 const GGS_string & in_mCustomSuperClassName,
                                                 const GGS_autoLayoutOutletLinkerGenerationList & in_mOutletLinkerGenerationList,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutDocumentFileGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutDocumentFileGeneration_2E_weak : public GGS_abstractFileGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_autoLayoutDocumentFileGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_autoLayoutDocumentFileGeneration_2E_weak (const class GGS_autoLayoutDocumentFileGeneration & inSource) ;

  public: GGS_autoLayoutDocumentFileGeneration_2E_weak & operator = (const class GGS_autoLayoutDocumentFileGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_autoLayoutDocumentFileGeneration_2E_weak init_nil (void) {
    GGS_autoLayoutDocumentFileGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_autoLayoutDocumentFileGeneration bang_autoLayoutDocumentFileGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_autoLayoutDocumentFileGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutDocumentFileGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutDocumentFileGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutDocumentFileGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @mainXibDescriptorList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_mainXibDescriptorList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_mainXibLineDescriptorList mProperty_mLine ;
  public: inline GGS_mainXibLineDescriptorList readProperty_mLine (void) const {
    return mProperty_mLine ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_mainXibDescriptorList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLine (const GGS_mainXibLineDescriptorList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLine = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_mainXibDescriptorList_2E_element (const GGS_mainXibLineDescriptorList & in_mLine) ;

//--------------------------------- Copy constructor
  public: GGS_mainXibDescriptorList_2E_element (const GGS_mainXibDescriptorList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_mainXibDescriptorList_2E_element & operator = (const GGS_mainXibDescriptorList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_mainXibDescriptorList_2E_element init_21_ (const class GGS_mainXibLineDescriptorList & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mainXibDescriptorList_2E_element extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_mainXibDescriptorList_2E_element class_func_new (const class GGS_mainXibLineDescriptorList & inOperand0,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibDescriptorList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @prefsDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_prefsDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_prefsDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_prefsDeclarationAST (const class cPtr_prefsDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_prefDeclaration readProperty_mDeclaration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_prefsDeclarationAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                       const class GGS_prefDeclaration & inOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prefsDeclarationAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prefsDeclarationAST class_func_new (const class GGS_lstring & inOperand0,
                                                               const class GGS_prefDeclaration & inOperand1,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefsDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefsDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @prefsDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_prefsDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void prefsDeclarationAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                 const class GGS_prefDeclaration & inOperand1,
                                                 Compiler * inCompiler) ;


//--- Extension getter nodeKey
  public: virtual class GGS_lstring getter_nodeKey (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method firstAnalysisPhase
  public: virtual void method_firstAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method fourthAnalysisPhase
  public: virtual void method_fourthAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_prefDeclaration mProperty_mDeclaration ;


//--- Default constructor
  public: cPtr_prefsDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_prefsDeclarationAST (const GGS_lstring & in_mClassName,
                                    const GGS_prefDeclaration & in_mDeclaration,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @prefsDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_prefsDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_prefsDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_prefsDeclarationAST_2E_weak (const class GGS_prefsDeclarationAST & inSource) ;

  public: GGS_prefsDeclarationAST_2E_weak & operator = (const class GGS_prefsDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_prefsDeclarationAST_2E_weak init_nil (void) {
    GGS_prefsDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_prefsDeclarationAST bang_prefsDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_prefsDeclarationAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prefsDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prefsDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefsDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefsDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @preferencesForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_preferencesForGeneration : public GGS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GGS_preferencesForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_preferencesForGeneration (const class cPtr_preferencesForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_propertyGenerationList readProperty_mPropertyListForGeneration (void) const ;

  public: class GGS_mainXibDescriptorList readProperty_mMainXibDescriptorList (void) const ;

  public: class GGS_regularBindingsGenerationList readProperty_mRegularBindingsGenerationList (void) const ;

  public: class GGS_multipleBindingGenerationList readProperty_mMultipleBindingGenerationList (void) const ;

  public: class GGS_actionBindingListForGeneration readProperty_mActionBindingListForGeneration (void) const ;

  public: class GGS_decoratedOutletMap readProperty_mOutletMap (void) const ;

  public: class GGS_externSwiftFunctionList readProperty_mExternSwiftFunctionList (void) const ;

  public: class GGS_tableViewBindingGenerationList readProperty_mTableViewBindingGenerationList (void) const ;

  public: class GGS_ebViewGraphicControllerBindingGenerationList readProperty_mEBViewBindingGenerationList (void) const ;

  public: class GGS_viewGenerationList readProperty_mViewGenerationList (void) const ;

  public: class GGS_implicitViewFunctionGenerationList readProperty_mImplicitViewFunctionGenerationList (void) const ;

  public: class GGS_autoLayoutConfiguratorMap readProperty_mConfiguratorMap (void) const ;

  public: class GGS_autoLayoutOutletMap readProperty_mAutoLayoutOutletMap (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_preferencesForGeneration init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_propertyGenerationList & inOperand0,
                                                                                                        const class GGS_mainXibDescriptorList & inOperand1,
                                                                                                        const class GGS_regularBindingsGenerationList & inOperand2,
                                                                                                        const class GGS_multipleBindingGenerationList & inOperand3,
                                                                                                        const class GGS_actionBindingListForGeneration & inOperand4,
                                                                                                        const class GGS_decoratedOutletMap & inOperand5,
                                                                                                        const class GGS_externSwiftFunctionList & inOperand6,
                                                                                                        const class GGS_tableViewBindingGenerationList & inOperand7,
                                                                                                        const class GGS_ebViewGraphicControllerBindingGenerationList & inOperand8,
                                                                                                        const class GGS_viewGenerationList & inOperand9,
                                                                                                        const class GGS_implicitViewFunctionGenerationList & inOperand10,
                                                                                                        const class GGS_autoLayoutConfiguratorMap & inOperand11,
                                                                                                        const class GGS_autoLayoutOutletMap & inOperand12,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_preferencesForGeneration extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_preferencesForGeneration class_func_new (const class GGS_propertyGenerationList & inOperand0,
                                                                    const class GGS_mainXibDescriptorList & inOperand1,
                                                                    const class GGS_regularBindingsGenerationList & inOperand2,
                                                                    const class GGS_multipleBindingGenerationList & inOperand3,
                                                                    const class GGS_actionBindingListForGeneration & inOperand4,
                                                                    const class GGS_decoratedOutletMap & inOperand5,
                                                                    const class GGS_externSwiftFunctionList & inOperand6,
                                                                    const class GGS_tableViewBindingGenerationList & inOperand7,
                                                                    const class GGS_ebViewGraphicControllerBindingGenerationList & inOperand8,
                                                                    const class GGS_viewGenerationList & inOperand9,
                                                                    const class GGS_implicitViewFunctionGenerationList & inOperand10,
                                                                    const class GGS_autoLayoutConfiguratorMap & inOperand11,
                                                                    const class GGS_autoLayoutOutletMap & inOperand12,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_preferencesForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_preferencesForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @preferencesForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_preferencesForGeneration : public cPtr_abstractFileGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void preferencesForGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_propertyGenerationList & inOperand0,
                                                                                                  const class GGS_mainXibDescriptorList & inOperand1,
                                                                                                  const class GGS_regularBindingsGenerationList & inOperand2,
                                                                                                  const class GGS_multipleBindingGenerationList & inOperand3,
                                                                                                  const class GGS_actionBindingListForGeneration & inOperand4,
                                                                                                  const class GGS_decoratedOutletMap & inOperand5,
                                                                                                  const class GGS_externSwiftFunctionList & inOperand6,
                                                                                                  const class GGS_tableViewBindingGenerationList & inOperand7,
                                                                                                  const class GGS_ebViewGraphicControllerBindingGenerationList & inOperand8,
                                                                                                  const class GGS_viewGenerationList & inOperand9,
                                                                                                  const class GGS_implicitViewFunctionGenerationList & inOperand10,
                                                                                                  const class GGS_autoLayoutConfiguratorMap & inOperand11,
                                                                                                  const class GGS_autoLayoutOutletMap & inOperand12,
                                                                                                  Compiler * inCompiler) ;


//--- Extension method generateCodePhase1
  public: virtual void method_generateCodePhase_31_ (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
           class GGS_stringset & arg_ioUsedProtocolSet,
           class GGS_stringset & arg_ioGeneratedFileSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCodePhase2
  public: virtual void method_generateCodePhase_32_ (const class GGS_string arg_inOutputDirectory,
           const class GGS_generationStruct arg_inGenerationStruct,
           const class GGS_stringset arg_inUsedProtocolSet,
           class GGS_stringset & arg_ioGeneratedFileSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_propertyGenerationList mProperty_mPropertyListForGeneration ;
  public: GGS_mainXibDescriptorList mProperty_mMainXibDescriptorList ;
  public: GGS_regularBindingsGenerationList mProperty_mRegularBindingsGenerationList ;
  public: GGS_multipleBindingGenerationList mProperty_mMultipleBindingGenerationList ;
  public: GGS_actionBindingListForGeneration mProperty_mActionBindingListForGeneration ;
  public: GGS_decoratedOutletMap mProperty_mOutletMap ;
  public: GGS_externSwiftFunctionList mProperty_mExternSwiftFunctionList ;
  public: GGS_tableViewBindingGenerationList mProperty_mTableViewBindingGenerationList ;
  public: GGS_ebViewGraphicControllerBindingGenerationList mProperty_mEBViewBindingGenerationList ;
  public: GGS_viewGenerationList mProperty_mViewGenerationList ;
  public: GGS_implicitViewFunctionGenerationList mProperty_mImplicitViewFunctionGenerationList ;
  public: GGS_autoLayoutConfiguratorMap mProperty_mConfiguratorMap ;
  public: GGS_autoLayoutOutletMap mProperty_mAutoLayoutOutletMap ;


//--- Default constructor
  public: cPtr_preferencesForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_preferencesForGeneration (const GGS_propertyGenerationList & in_mPropertyListForGeneration,
                                         const GGS_mainXibDescriptorList & in_mMainXibDescriptorList,
                                         const GGS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                         const GGS_multipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                         const GGS_actionBindingListForGeneration & in_mActionBindingListForGeneration,
                                         const GGS_decoratedOutletMap & in_mOutletMap,
                                         const GGS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                         const GGS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                         const GGS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                         const GGS_viewGenerationList & in_mViewGenerationList,
                                         const GGS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                         const GGS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                         const GGS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @preferencesForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_preferencesForGeneration_2E_weak : public GGS_abstractFileGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_preferencesForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_preferencesForGeneration_2E_weak (const class GGS_preferencesForGeneration & inSource) ;

  public: GGS_preferencesForGeneration_2E_weak & operator = (const class GGS_preferencesForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_preferencesForGeneration_2E_weak init_nil (void) {
    GGS_preferencesForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_preferencesForGeneration bang_preferencesForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_preferencesForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_preferencesForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_preferencesForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_preferencesForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_preferencesForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutClassParameterList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutClassParameterList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mParameterName ;
  public: inline GGS_lstring readProperty_mParameterName (void) const {
    return mProperty_mParameterName ;
  }

  public: GGS_autoLayoutClassParameterType mProperty_mParameterType ;
  public: inline GGS_autoLayoutClassParameterType readProperty_mParameterType (void) const {
    return mProperty_mParameterType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutClassParameterList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMParameterName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterName = inValue ;
  }

  public: inline void setter_setMParameterType (const GGS_autoLayoutClassParameterType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutClassParameterList_2E_element (const GGS_lstring & in_mParameterName,
                                                       const GGS_autoLayoutClassParameterType & in_mParameterType) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutClassParameterList_2E_element (const GGS_autoLayoutClassParameterList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutClassParameterList_2E_element & operator = (const GGS_autoLayoutClassParameterList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutClassParameterList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_autoLayoutClassParameterType & inOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutClassParameterList_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutClassParameterList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_autoLayoutClassParameterType & inOperand1,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewClassDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewClassDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_autoLayoutViewClassDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_autoLayoutViewClassDeclarationAST_2E_weak (const class GGS_autoLayoutViewClassDeclarationAST & inSource) ;

  public: GGS_autoLayoutViewClassDeclarationAST_2E_weak & operator = (const class GGS_autoLayoutViewClassDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_autoLayoutViewClassDeclarationAST_2E_weak init_nil (void) {
    GGS_autoLayoutViewClassDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_autoLayoutViewClassDeclarationAST bang_autoLayoutViewClassDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_autoLayoutViewClassDeclarationAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewClassDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewClassDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutViewClassDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutClassParameterType_2E_typeEnum struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutClassParameterType_2E_typeEnum : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutClassParameterType_2E_typeEnum (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutClassParameterType_2E_typeEnum (const GGS_lstring & in_name) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutClassParameterType_2E_typeEnum (const GGS_autoLayoutClassParameterType_2E_typeEnum & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutClassParameterType_2E_typeEnum & operator = (const GGS_autoLayoutClassParameterType_2E_typeEnum & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutClassParameterType_2E_typeEnum init_21_ (const class GGS_lstring & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutClassParameterType_2E_typeEnum extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutClassParameterType_2E_typeEnum class_func_new (const class GGS_lstring & inOperand0,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutClassParameterType_2E_typeEnum & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterType_2E_typeEnum ;

//--------------------------------------------------------------------------------------------------
// Phase 1: autoLayoutClassParameterType.typeEnum? optional
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_autoLayoutClassParameterType_2E_typeEnum mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ (const GGS_autoLayoutClassParameterType_2E_typeEnum & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_autoLayoutClassParameterType_2E_typeEnum unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterType_2E_typeEnum_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@autoLayoutClassParameterType string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_autoLayoutClassParameterType & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletClassBindingSpecificationModelList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_outletClassBindingSpecificationModelList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mModelTypeName ;
  public: inline GGS_lstring readProperty_mModelTypeName (void) const {
    return mProperty_mModelTypeName ;
  }

  public: GGS_bool mProperty_mModelShouldBeWritableProperty ;
  public: inline GGS_bool readProperty_mModelShouldBeWritableProperty (void) const {
    return mProperty_mModelShouldBeWritableProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_outletClassBindingSpecificationModelList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMModelTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mModelTypeName = inValue ;
  }

  public: inline void setter_setMModelShouldBeWritableProperty (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mModelShouldBeWritableProperty = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_outletClassBindingSpecificationModelList_2E_element (const GGS_lstring & in_mModelTypeName,
                                                                   const GGS_bool & in_mModelShouldBeWritableProperty) ;

//--------------------------------- Copy constructor
  public: GGS_outletClassBindingSpecificationModelList_2E_element (const GGS_outletClassBindingSpecificationModelList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_outletClassBindingSpecificationModelList_2E_element & operator = (const GGS_outletClassBindingSpecificationModelList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletClassBindingSpecificationModelList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_bool & inOperand1,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletClassBindingSpecificationModelList_2E_element extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outletClassBindingSpecificationModelList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                               const class GGS_bool & inOperand1,
                                                                                               class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controllerBindingOptionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_controllerBindingOptionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mOptionName ;
  public: inline GGS_lstring readProperty_mOptionName (void) const {
    return mProperty_mOptionName ;
  }

  public: GGS_lstring mProperty_mOptionTypeName ;
  public: inline GGS_lstring readProperty_mOptionTypeName (void) const {
    return mProperty_mOptionTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controllerBindingOptionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOptionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionName = inValue ;
  }

  public: inline void setter_setMOptionTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionTypeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controllerBindingOptionList_2E_element (const GGS_lstring & in_mOptionName,
                                                      const GGS_lstring & in_mOptionTypeName) ;

//--------------------------------- Copy constructor
  public: GGS_controllerBindingOptionList_2E_element (const GGS_controllerBindingOptionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controllerBindingOptionList_2E_element & operator = (const GGS_controllerBindingOptionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controllerBindingOptionList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controllerBindingOptionList_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controllerBindingOptionList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controllerBindingOptionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controllerBindingOptionDecoratedList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_controllerBindingOptionDecoratedList final {
  public: DownEnumerator_controllerBindingOptionDecoratedList (const class GGS_controllerBindingOptionDecoratedList & inList) ;

  public: ~ DownEnumerator_controllerBindingOptionDecoratedList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_typeKind current_mOptionType (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_controllerBindingOptionDecoratedList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_controllerBindingOptionDecoratedList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_controllerBindingOptionDecoratedList (const DownEnumerator_controllerBindingOptionDecoratedList &) = delete ;
  private: DownEnumerator_controllerBindingOptionDecoratedList & operator = (const DownEnumerator_controllerBindingOptionDecoratedList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_controllerBindingOptionDecoratedList final {
  public: UpEnumerator_controllerBindingOptionDecoratedList (const class GGS_controllerBindingOptionDecoratedList & inList)  ;

  public: ~ UpEnumerator_controllerBindingOptionDecoratedList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_typeKind current_mOptionType (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_controllerBindingOptionDecoratedList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_controllerBindingOptionDecoratedList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_controllerBindingOptionDecoratedList (const UpEnumerator_controllerBindingOptionDecoratedList &) = delete ;
  private: UpEnumerator_controllerBindingOptionDecoratedList & operator = (const UpEnumerator_controllerBindingOptionDecoratedList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @controllerBindingOptionDecoratedList list
//--------------------------------------------------------------------------------------------------

class GGS_controllerBindingOptionDecoratedList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_controllerBindingOptionDecoratedList_2E_element> mArray ;

//--- Default constructor
  public: GGS_controllerBindingOptionDecoratedList (void) ;

//--- Destructor
  public: virtual ~ GGS_controllerBindingOptionDecoratedList (void) = default ;

//--- Copy
  public: GGS_controllerBindingOptionDecoratedList (const GGS_controllerBindingOptionDecoratedList &) = default ;
  public: GGS_controllerBindingOptionDecoratedList & operator = (const GGS_controllerBindingOptionDecoratedList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_controllerBindingOptionDecoratedList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_controllerBindingOptionDecoratedList subList (const int32_t inStart,
                                                             const int32_t inLength,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_controllerBindingOptionDecoratedList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_typeKind & in_mOptionType,
                                                 const class GGS_lstring & in_mOptionName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controllerBindingOptionDecoratedList init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controllerBindingOptionDecoratedList extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controllerBindingOptionDecoratedList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_controllerBindingOptionDecoratedList class_func_listWithValue (const class GGS_typeKind & inOperand0,
                                                                                          const class GGS_lstring & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_controllerBindingOptionDecoratedList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_typeKind & inOperand0,
                                                    const class GGS_lstring & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_controllerBindingOptionDecoratedList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_controllerBindingOptionDecoratedList add_operation (const GGS_controllerBindingOptionDecoratedList & inOperand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_typeKind constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_typeKind constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_typeKind & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_typeKind & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_typeKind & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionNameAtIndex (class GGS_lstring constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionTypeAtIndex (class GGS_typeKind constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_typeKind & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_typeKind & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOptionNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKind getter_mOptionTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_controllerBindingOptionDecoratedList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_controllerBindingOptionDecoratedList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_controllerBindingOptionDecoratedList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_controllerBindingOptionDecoratedList ;
  friend class DownEnumerator_controllerBindingOptionDecoratedList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletBindingSpecificationModelList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_outletBindingSpecificationModelList final {
  public: DownEnumerator_outletBindingSpecificationModelList (const class GGS_outletBindingSpecificationModelList & inList) ;

  public: ~ DownEnumerator_outletBindingSpecificationModelList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_typeKind current_mModelType (LOCATION_ARGS) const ;
  public: class GGS_bool current_mModelShouldBeWritableProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_outletBindingSpecificationModelList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_outletBindingSpecificationModelList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_outletBindingSpecificationModelList (const DownEnumerator_outletBindingSpecificationModelList &) = delete ;
  private: DownEnumerator_outletBindingSpecificationModelList & operator = (const DownEnumerator_outletBindingSpecificationModelList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_outletBindingSpecificationModelList final {
  public: UpEnumerator_outletBindingSpecificationModelList (const class GGS_outletBindingSpecificationModelList & inList)  ;

  public: ~ UpEnumerator_outletBindingSpecificationModelList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_typeKind current_mModelType (LOCATION_ARGS) const ;
  public: class GGS_bool current_mModelShouldBeWritableProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_outletBindingSpecificationModelList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_outletBindingSpecificationModelList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_outletBindingSpecificationModelList (const UpEnumerator_outletBindingSpecificationModelList &) = delete ;
  private: UpEnumerator_outletBindingSpecificationModelList & operator = (const UpEnumerator_outletBindingSpecificationModelList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @outletBindingSpecificationModelList list
//--------------------------------------------------------------------------------------------------

class GGS_outletBindingSpecificationModelList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_outletBindingSpecificationModelList_2E_element> mArray ;

//--- Default constructor
  public: GGS_outletBindingSpecificationModelList (void) ;

//--- Destructor
  public: virtual ~ GGS_outletBindingSpecificationModelList (void) = default ;

//--- Copy
  public: GGS_outletBindingSpecificationModelList (const GGS_outletBindingSpecificationModelList &) = default ;
  public: GGS_outletBindingSpecificationModelList & operator = (const GGS_outletBindingSpecificationModelList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_outletBindingSpecificationModelList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_outletBindingSpecificationModelList subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_outletBindingSpecificationModelList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_typeKind & in_mModelType,
                                                 const class GGS_bool & in_mModelShouldBeWritableProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletBindingSpecificationModelList init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletBindingSpecificationModelList extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outletBindingSpecificationModelList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_outletBindingSpecificationModelList class_func_listWithValue (const class GGS_typeKind & inOperand0,
                                                                                         const class GGS_bool & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_outletBindingSpecificationModelList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_typeKind & inOperand0,
                                                    const class GGS_bool & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_outletBindingSpecificationModelList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_outletBindingSpecificationModelList add_operation (const GGS_outletBindingSpecificationModelList & inOperand,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_typeKind constinArgument0,
                                               class GGS_bool constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_typeKind constinArgument0,
                                                      class GGS_bool constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_typeKind & outArgument0,
                                                 class GGS_bool & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_typeKind & outArgument0,
                                                class GGS_bool & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_typeKind & outArgument0,
                                                      class GGS_bool & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModelShouldBeWritablePropertyAtIndex (class GGS_bool constinArgument0,
                                                                                 class GGS_uint constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModelTypeAtIndex (class GGS_typeKind constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_typeKind & outArgument0,
                                              class GGS_bool & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_typeKind & outArgument0,
                                             class GGS_bool & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mModelShouldBeWritablePropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKind getter_mModelTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletBindingSpecificationModelList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletBindingSpecificationModelList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletBindingSpecificationModelList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_outletBindingSpecificationModelList ;
  friend class DownEnumerator_outletBindingSpecificationModelList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingSpecificationModelList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewBindingSpecificationMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewBindingSpecificationMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_outletBindingSpecificationModelList mProperty_mOutletBindingSpecificationModelList ;
  public: inline GGS_outletBindingSpecificationModelList readProperty_mOutletBindingSpecificationModelList (void) const {
    return mProperty_mOutletBindingSpecificationModelList ;
  }

  public: GGS_controllerBindingOptionDecoratedList mProperty_mControllerBindingOptionList ;
  public: inline GGS_controllerBindingOptionDecoratedList readProperty_mControllerBindingOptionList (void) const {
    return mProperty_mControllerBindingOptionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutViewBindingSpecificationMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMOutletBindingSpecificationModelList (const GGS_outletBindingSpecificationModelList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletBindingSpecificationModelList = inValue ;
  }

  public: inline void setter_setMControllerBindingOptionList (const GGS_controllerBindingOptionDecoratedList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControllerBindingOptionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutViewBindingSpecificationMap_2E_element (const GGS_lstring & in_lkey,
                                                                const GGS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                                const GGS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionList) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutViewBindingSpecificationMap_2E_element (const GGS_autoLayoutViewBindingSpecificationMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutViewBindingSpecificationMap_2E_element & operator = (const GGS_autoLayoutViewBindingSpecificationMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewBindingSpecificationMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                        const class GGS_outletBindingSpecificationModelList & inOperand1,
                                                                                        const class GGS_controllerBindingOptionDecoratedList & inOperand2,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewBindingSpecificationMap_2E_element extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewBindingSpecificationMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_outletBindingSpecificationModelList & inOperand1,
                                                                                            const class GGS_controllerBindingOptionDecoratedList & inOperand2,
                                                                                            class Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: autoLayoutViewBindingSpecificationMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_autoLayoutViewBindingSpecificationMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ (const GGS_autoLayoutViewBindingSpecificationMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_autoLayoutViewBindingSpecificationMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletBindingSpecificationModelList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_outletBindingSpecificationModelList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_typeKind mProperty_mModelType ;
  public: inline GGS_typeKind readProperty_mModelType (void) const {
    return mProperty_mModelType ;
  }

  public: GGS_bool mProperty_mModelShouldBeWritableProperty ;
  public: inline GGS_bool readProperty_mModelShouldBeWritableProperty (void) const {
    return mProperty_mModelShouldBeWritableProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_outletBindingSpecificationModelList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMModelType (const GGS_typeKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mModelType = inValue ;
  }

  public: inline void setter_setMModelShouldBeWritableProperty (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mModelShouldBeWritableProperty = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_outletBindingSpecificationModelList_2E_element (const GGS_typeKind & in_mModelType,
                                                              const GGS_bool & in_mModelShouldBeWritableProperty) ;

//--------------------------------- Copy constructor
  public: GGS_outletBindingSpecificationModelList_2E_element (const GGS_outletBindingSpecificationModelList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_outletBindingSpecificationModelList_2E_element & operator = (const GGS_outletBindingSpecificationModelList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletBindingSpecificationModelList_2E_element init_21__21_ (const class GGS_typeKind & inOperand0,
                                                                                  const class GGS_bool & inOperand1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletBindingSpecificationModelList_2E_element extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outletBindingSpecificationModelList_2E_element class_func_new (const class GGS_typeKind & inOperand0,
                                                                                          const class GGS_bool & inOperand1,
                                                                                          class Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controllerBindingOptionDecoratedList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_controllerBindingOptionDecoratedList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_typeKind mProperty_mOptionType ;
  public: inline GGS_typeKind readProperty_mOptionType (void) const {
    return mProperty_mOptionType ;
  }

  public: GGS_lstring mProperty_mOptionName ;
  public: inline GGS_lstring readProperty_mOptionName (void) const {
    return mProperty_mOptionName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controllerBindingOptionDecoratedList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOptionType (const GGS_typeKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionType = inValue ;
  }

  public: inline void setter_setMOptionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controllerBindingOptionDecoratedList_2E_element (const GGS_typeKind & in_mOptionType,
                                                               const GGS_lstring & in_mOptionName) ;

//--------------------------------- Copy constructor
  public: GGS_controllerBindingOptionDecoratedList_2E_element (const GGS_controllerBindingOptionDecoratedList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controllerBindingOptionDecoratedList_2E_element & operator = (const GGS_controllerBindingOptionDecoratedList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controllerBindingOptionDecoratedList_2E_element init_21__21_ (const class GGS_typeKind & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controllerBindingOptionDecoratedList_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controllerBindingOptionDecoratedList_2E_element class_func_new (const class GGS_typeKind & inOperand0,
                                                                                           const class GGS_lstring & inOperand1,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAbstractViewDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astAbstractViewDeclaration_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_astAbstractViewDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astAbstractViewDeclaration_2E_weak (const class GGS_astAbstractViewDeclaration & inSource) ;

  public: GGS_astAbstractViewDeclaration_2E_weak & operator = (const class GGS_astAbstractViewDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astAbstractViewDeclaration_2E_weak init_nil (void) {
    GGS_astAbstractViewDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astAbstractViewDeclaration bang_astAbstractViewDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astAbstractViewDeclaration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAbstractViewDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAbstractViewDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astAbstractViewDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAbstractViewDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewFunctionCallList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewFunctionCallList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFunctionName ;
  public: inline GGS_lstring readProperty_mFunctionName (void) const {
    return mProperty_mFunctionName ;
  }

  public: GGS_astAutoLayoutViewInstructionParameterList mProperty_mParameterList ;
  public: inline GGS_astAutoLayoutViewInstructionParameterList readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewFunctionCallList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFunctionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionName = inValue ;
  }

  public: inline void setter_setMParameterList (const GGS_astAutoLayoutViewInstructionParameterList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astAutoLayoutViewFunctionCallList_2E_element (const GGS_lstring & in_mFunctionName,
                                                            const GGS_astAutoLayoutViewInstructionParameterList & in_mParameterList) ;

//--------------------------------- Copy constructor
  public: GGS_astAutoLayoutViewFunctionCallList_2E_element (const GGS_astAutoLayoutViewFunctionCallList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astAutoLayoutViewFunctionCallList_2E_element & operator = (const GGS_astAutoLayoutViewFunctionCallList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewFunctionCallList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                const class GGS_astAutoLayoutViewInstructionParameterList & inOperand1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewFunctionCallList_2E_element extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewFunctionCallList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                        const class GGS_astAutoLayoutViewInstructionParameterList & inOperand1,
                                                                                        class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionCallList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astViewInstructionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_astViewInstructionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_astAbstractViewInstructionDeclaration mProperty_mInstruction ;
  public: inline GGS_astAbstractViewInstructionDeclaration readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astViewInstructionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_astAbstractViewInstructionDeclaration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astViewInstructionList_2E_element (const GGS_astAbstractViewInstructionDeclaration & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_astViewInstructionList_2E_element (const GGS_astViewInstructionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astViewInstructionList_2E_element & operator = (const GGS_astViewInstructionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astViewInstructionList_2E_element init_21_ (const class GGS_astAbstractViewInstructionDeclaration & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astViewInstructionList_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astViewInstructionList_2E_element class_func_new (const class GGS_astAbstractViewInstructionDeclaration & inOperand0,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astViewInstructionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astNewStackViewDeclarationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_astNewStackViewDeclarationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mInstanciedStackViewName ;
  public: inline GGS_lstring readProperty_mInstanciedStackViewName (void) const {
    return mProperty_mInstanciedStackViewName ;
  }

  public: GGS_lstring mProperty_mTypeStackViewName ;
  public: inline GGS_lstring readProperty_mTypeStackViewName (void) const {
    return mProperty_mTypeStackViewName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astNewStackViewDeclarationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstanciedStackViewName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstanciedStackViewName = inValue ;
  }

  public: inline void setter_setMTypeStackViewName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeStackViewName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astNewStackViewDeclarationList_2E_element (const GGS_lstring & in_mInstanciedStackViewName,
                                                         const GGS_lstring & in_mTypeStackViewName) ;

//--------------------------------- Copy constructor
  public: GGS_astNewStackViewDeclarationList_2E_element (const GGS_astNewStackViewDeclarationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astNewStackViewDeclarationList_2E_element & operator = (const GGS_astNewStackViewDeclarationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astNewStackViewDeclarationList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astNewStackViewDeclarationList_2E_element extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astNewStackViewDeclarationList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_lstring & inOperand1,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astNewStackViewDeclarationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astComputedHorizontalViewDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astComputedHorizontalViewDeclaration_2E_weak : public GGS_astAbstractViewDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_astComputedHorizontalViewDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astComputedHorizontalViewDeclaration_2E_weak (const class GGS_astComputedHorizontalViewDeclaration & inSource) ;

  public: GGS_astComputedHorizontalViewDeclaration_2E_weak & operator = (const class GGS_astComputedHorizontalViewDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astComputedHorizontalViewDeclaration_2E_weak init_nil (void) {
    GGS_astComputedHorizontalViewDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astComputedHorizontalViewDeclaration bang_astComputedHorizontalViewDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astComputedHorizontalViewDeclaration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astComputedHorizontalViewDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astComputedHorizontalViewDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astComputedHorizontalViewDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astComputedVerticalViewDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astComputedVerticalViewDeclaration_2E_weak : public GGS_astAbstractViewDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_astComputedVerticalViewDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astComputedVerticalViewDeclaration_2E_weak (const class GGS_astComputedVerticalViewDeclaration & inSource) ;

  public: GGS_astComputedVerticalViewDeclaration_2E_weak & operator = (const class GGS_astComputedVerticalViewDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astComputedVerticalViewDeclaration_2E_weak init_nil (void) {
    GGS_astComputedVerticalViewDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astComputedVerticalViewDeclaration bang_astComputedVerticalViewDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astComputedVerticalViewDeclaration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astComputedVerticalViewDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astComputedVerticalViewDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astComputedVerticalViewDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAbstractViewInstructionDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astAbstractViewInstructionDeclaration_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_astAbstractViewInstructionDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astAbstractViewInstructionDeclaration_2E_weak (const class GGS_astAbstractViewInstructionDeclaration & inSource) ;

  public: GGS_astAbstractViewInstructionDeclaration_2E_weak & operator = (const class GGS_astAbstractViewInstructionDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astAbstractViewInstructionDeclaration_2E_weak init_nil (void) {
    GGS_astAbstractViewInstructionDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astAbstractViewInstructionDeclaration bang_astAbstractViewInstructionDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astAbstractViewInstructionDeclaration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAbstractViewInstructionDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAbstractViewInstructionDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astAbstractViewInstructionDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astSeparatorInstructionDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astSeparatorInstructionDeclaration_2E_weak : public GGS_astAbstractViewInstructionDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_astSeparatorInstructionDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astSeparatorInstructionDeclaration_2E_weak (const class GGS_astSeparatorInstructionDeclaration & inSource) ;

  public: GGS_astSeparatorInstructionDeclaration_2E_weak & operator = (const class GGS_astSeparatorInstructionDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astSeparatorInstructionDeclaration_2E_weak init_nil (void) {
    GGS_astSeparatorInstructionDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astSeparatorInstructionDeclaration bang_astSeparatorInstructionDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astSeparatorInstructionDeclaration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astSeparatorInstructionDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astSeparatorInstructionDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astSeparatorInstructionDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astSeparatorInstructionDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astGutterInstructionDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astGutterInstructionDeclaration_2E_weak : public GGS_astAbstractViewInstructionDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_astGutterInstructionDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astGutterInstructionDeclaration_2E_weak (const class GGS_astGutterInstructionDeclaration & inSource) ;

  public: GGS_astGutterInstructionDeclaration_2E_weak & operator = (const class GGS_astGutterInstructionDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astGutterInstructionDeclaration_2E_weak init_nil (void) {
    GGS_astGutterInstructionDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astGutterInstructionDeclaration bang_astGutterInstructionDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astGutterInstructionDeclaration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astGutterInstructionDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astGutterInstructionDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astGutterInstructionDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astGutterInstructionDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astDividerInstructionDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astDividerInstructionDeclaration_2E_weak : public GGS_astAbstractViewInstructionDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_astDividerInstructionDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astDividerInstructionDeclaration_2E_weak (const class GGS_astDividerInstructionDeclaration & inSource) ;

  public: GGS_astDividerInstructionDeclaration_2E_weak & operator = (const class GGS_astDividerInstructionDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astDividerInstructionDeclaration_2E_weak init_nil (void) {
    GGS_astDividerInstructionDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astDividerInstructionDeclaration bang_astDividerInstructionDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astDividerInstructionDeclaration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astDividerInstructionDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astDividerInstructionDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astDividerInstructionDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astDividerInstructionDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @optionalHiddenBinding_2E_binding struct
//--------------------------------------------------------------------------------------------------

class GGS_optionalHiddenBinding_2E_binding : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_hidden ;
  public: inline GGS_abstractBooleanMultipleBindingExpressionAST readProperty_hidden (void) const {
    return mProperty_hidden ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_optionalHiddenBinding_2E_binding (void) ;

//--------------------------------- Property setters
  public: inline void setter_setHidden (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_hidden = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_optionalHiddenBinding_2E_binding (const GGS_abstractBooleanMultipleBindingExpressionAST & in_hidden) ;

//--------------------------------- Copy constructor
  public: GGS_optionalHiddenBinding_2E_binding (const GGS_optionalHiddenBinding_2E_binding & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_optionalHiddenBinding_2E_binding & operator = (const GGS_optionalHiddenBinding_2E_binding & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optionalHiddenBinding_2E_binding init_21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionalHiddenBinding_2E_binding extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionalHiddenBinding_2E_binding class_func_new (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalHiddenBinding_2E_binding ;

//--------------------------------------------------------------------------------------------------
// Phase 1: optionalHiddenBinding.binding? optional
//--------------------------------------------------------------------------------------------------

class GGS_optionalHiddenBinding_2E_binding_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_optionalHiddenBinding_2E_binding mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_optionalHiddenBinding_2E_binding_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_optionalHiddenBinding_2E_binding_3F_ (const GGS_optionalHiddenBinding_2E_binding & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_optionalHiddenBinding_2E_binding_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_optionalHiddenBinding_2E_binding unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionalHiddenBinding_2E_binding_3F_ extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalHiddenBinding_2E_binding_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astHStackViewInstructionDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astHStackViewInstructionDeclaration_2E_weak : public GGS_astAbstractViewInstructionDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_astHStackViewInstructionDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astHStackViewInstructionDeclaration_2E_weak (const class GGS_astHStackViewInstructionDeclaration & inSource) ;

  public: GGS_astHStackViewInstructionDeclaration_2E_weak & operator = (const class GGS_astHStackViewInstructionDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astHStackViewInstructionDeclaration_2E_weak init_nil (void) {
    GGS_astHStackViewInstructionDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astHStackViewInstructionDeclaration bang_astHStackViewInstructionDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astHStackViewInstructionDeclaration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astHStackViewInstructionDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astHStackViewInstructionDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astHStackViewInstructionDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astVStackViewInstructionDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astVStackViewInstructionDeclaration_2E_weak : public GGS_astAbstractViewInstructionDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_astVStackViewInstructionDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astVStackViewInstructionDeclaration_2E_weak (const class GGS_astVStackViewInstructionDeclaration & inSource) ;

  public: GGS_astVStackViewInstructionDeclaration_2E_weak & operator = (const class GGS_astVStackViewInstructionDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astVStackViewInstructionDeclaration_2E_weak init_nil (void) {
    GGS_astVStackViewInstructionDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astVStackViewInstructionDeclaration bang_astVStackViewInstructionDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astVStackViewInstructionDeclaration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astVStackViewInstructionDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astVStackViewInstructionDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astVStackViewInstructionDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astSpaceViewInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astSpaceViewInstruction_2E_weak : public GGS_astAbstractViewInstructionDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_astSpaceViewInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astSpaceViewInstruction_2E_weak (const class GGS_astSpaceViewInstruction & inSource) ;

  public: GGS_astSpaceViewInstruction_2E_weak & operator = (const class GGS_astSpaceViewInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astSpaceViewInstruction_2E_weak init_nil (void) {
    GGS_astSpaceViewInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astSpaceViewInstruction bang_astSpaceViewInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astSpaceViewInstruction unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astSpaceViewInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astSpaceViewInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astSpaceViewInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astSpaceViewInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astLocalViewInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astLocalViewInstruction_2E_weak : public GGS_astAbstractViewInstructionDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_astLocalViewInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astLocalViewInstruction_2E_weak (const class GGS_astLocalViewInstruction & inSource) ;

  public: GGS_astLocalViewInstruction_2E_weak & operator = (const class GGS_astLocalViewInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astLocalViewInstruction_2E_weak init_nil (void) {
    GGS_astLocalViewInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astLocalViewInstruction bang_astLocalViewInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astLocalViewInstruction unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astLocalViewInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astLocalViewInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astLocalViewInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astLocalViewInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewInstructionParameterList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mParameterName ;
  public: inline GGS_lstring readProperty_mParameterName (void) const {
    return mProperty_mParameterName ;
  }

  public: GGS_autoLayoutClassParameterType mProperty_mParameterType ;
  public: inline GGS_autoLayoutClassParameterType readProperty_mParameterType (void) const {
    return mProperty_mParameterType ;
  }

  public: GGS_astAutoLayoutViewInstructionParameterValue mProperty_mParameter ;
  public: inline GGS_astAutoLayoutViewInstructionParameterValue readProperty_mParameter (void) const {
    return mProperty_mParameter ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMParameterName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterName = inValue ;
  }

  public: inline void setter_setMParameterType (const GGS_autoLayoutClassParameterType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterType = inValue ;
  }

  public: inline void setter_setMParameter (const GGS_astAutoLayoutViewInstructionParameterValue & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameter = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astAutoLayoutViewInstructionParameterList_2E_element (const GGS_lstring & in_mParameterName,
                                                                    const GGS_autoLayoutClassParameterType & in_mParameterType,
                                                                    const GGS_astAutoLayoutViewInstructionParameterValue & in_mParameter) ;

//--------------------------------- Copy constructor
  public: GGS_astAutoLayoutViewInstructionParameterList_2E_element (const GGS_astAutoLayoutViewInstructionParameterList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astAutoLayoutViewInstructionParameterList_2E_element & operator = (const GGS_astAutoLayoutViewInstructionParameterList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewInstructionParameterList_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_autoLayoutClassParameterType & inOperand1,
                                                                                            const class GGS_astAutoLayoutViewInstructionParameterValue & inOperand2,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewInstructionParameterList_2E_element extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewInstructionParameterList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                                const class GGS_autoLayoutClassParameterType & inOperand1,
                                                                                                const class GGS_astAutoLayoutViewInstructionParameterValue & inOperand2,
                                                                                                class Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @tableValueBinding_2E_tableValueBinding struct
//--------------------------------------------------------------------------------------------------

class GGS_tableValueBinding_2E_tableValueBinding : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_controllerName ;
  public: inline GGS_lstring readProperty_controllerName (void) const {
    return mProperty_controllerName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_tableValueBinding_2E_tableValueBinding (void) ;

//--------------------------------- Property setters
  public: inline void setter_setControllerName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_controllerName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_tableValueBinding_2E_tableValueBinding (const GGS_lstring & in_controllerName) ;

//--------------------------------- Copy constructor
  public: GGS_tableValueBinding_2E_tableValueBinding (const GGS_tableValueBinding_2E_tableValueBinding & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_tableValueBinding_2E_tableValueBinding & operator = (const GGS_tableValueBinding_2E_tableValueBinding & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_tableValueBinding_2E_tableValueBinding init_21_ (const class GGS_lstring & inOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_tableValueBinding_2E_tableValueBinding extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_tableValueBinding_2E_tableValueBinding class_func_new (const class GGS_lstring & inOperand0,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_tableValueBinding_2E_tableValueBinding & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tableValueBinding_2E_tableValueBinding ;

//--------------------------------------------------------------------------------------------------
// Phase 1: tableValueBinding.tableValueBinding? optional
//--------------------------------------------------------------------------------------------------

class GGS_tableValueBinding_2E_tableValueBinding_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_tableValueBinding_2E_tableValueBinding mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_tableValueBinding_2E_tableValueBinding_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_tableValueBinding_2E_tableValueBinding_3F_ (const GGS_tableValueBinding_2E_tableValueBinding & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_tableValueBinding_2E_tableValueBinding_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_tableValueBinding_2E_tableValueBinding unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_tableValueBinding_2E_tableValueBinding_3F_ extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_tableValueBinding_2E_tableValueBinding_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tableValueBinding_2E_tableValueBinding_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @runActionDescriptor_2E_action struct
//--------------------------------------------------------------------------------------------------

class GGS_runActionDescriptor_2E_action : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_target ;
  public: inline GGS_lstring readProperty_target (void) const {
    return mProperty_target ;
  }

  public: GGS_lstring mProperty_action ;
  public: inline GGS_lstring readProperty_action (void) const {
    return mProperty_action ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_runActionDescriptor_2E_action (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTarget (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_target = inValue ;
  }

  public: inline void setter_setAction (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_action = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_runActionDescriptor_2E_action (const GGS_lstring & in_target,
                                             const GGS_lstring & in_action) ;

//--------------------------------- Copy constructor
  public: GGS_runActionDescriptor_2E_action (const GGS_runActionDescriptor_2E_action & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_runActionDescriptor_2E_action & operator = (const GGS_runActionDescriptor_2E_action & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_runActionDescriptor_2E_action init_21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_lstring & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_runActionDescriptor_2E_action extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_runActionDescriptor_2E_action class_func_new (const class GGS_lstring & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_runActionDescriptor_2E_action & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_runActionDescriptor_2E_action ;

//--------------------------------------------------------------------------------------------------
// Phase 1: runActionDescriptor.action? optional
//--------------------------------------------------------------------------------------------------

class GGS_runActionDescriptor_2E_action_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_runActionDescriptor_2E_action mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_runActionDescriptor_2E_action_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_runActionDescriptor_2E_action_3F_ (const GGS_runActionDescriptor_2E_action & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_runActionDescriptor_2E_action_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_runActionDescriptor_2E_action unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_runActionDescriptor_2E_action_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_runActionDescriptor_2E_action_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_runActionDescriptor_2E_action_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @multipleBindingDescriptor_2E_binding struct
//--------------------------------------------------------------------------------------------------

class GGS_multipleBindingDescriptor_2E_binding : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_expression ;
  public: inline GGS_abstractBooleanMultipleBindingExpressionAST readProperty_expression (void) const {
    return mProperty_expression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_multipleBindingDescriptor_2E_binding (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExpression (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_expression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_multipleBindingDescriptor_2E_binding (const GGS_abstractBooleanMultipleBindingExpressionAST & in_expression) ;

//--------------------------------- Copy constructor
  public: GGS_multipleBindingDescriptor_2E_binding (const GGS_multipleBindingDescriptor_2E_binding & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_multipleBindingDescriptor_2E_binding & operator = (const GGS_multipleBindingDescriptor_2E_binding & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_multipleBindingDescriptor_2E_binding init_21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_multipleBindingDescriptor_2E_binding extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_multipleBindingDescriptor_2E_binding class_func_new (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_multipleBindingDescriptor_2E_binding & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multipleBindingDescriptor_2E_binding ;

//--------------------------------------------------------------------------------------------------
// Phase 1: multipleBindingDescriptor.binding? optional
//--------------------------------------------------------------------------------------------------

class GGS_multipleBindingDescriptor_2E_binding_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_multipleBindingDescriptor_2E_binding mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_multipleBindingDescriptor_2E_binding_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_multipleBindingDescriptor_2E_binding_3F_ (const GGS_multipleBindingDescriptor_2E_binding & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_multipleBindingDescriptor_2E_binding_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_multipleBindingDescriptor_2E_binding unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_multipleBindingDescriptor_2E_binding_3F_ extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_multipleBindingDescriptor_2E_binding_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multipleBindingDescriptor_2E_binding_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @graphicController_2E_defined struct
//--------------------------------------------------------------------------------------------------

class GGS_graphicController_2E_defined : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_controller ;
  public: inline GGS_lstring readProperty_controller (void) const {
    return mProperty_controller ;
  }

  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_graphicController_2E_defined (void) ;

//--------------------------------- Property setters
  public: inline void setter_setController (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_controller = inValue ;
  }

  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_graphicController_2E_defined (const GGS_lstring & in_controller,
                                            const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_graphicController_2E_defined (const GGS_graphicController_2E_defined & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_graphicController_2E_defined & operator = (const GGS_graphicController_2E_defined & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_graphicController_2E_defined init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_graphicController_2E_defined extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_graphicController_2E_defined class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphicController_2E_defined ;

//--------------------------------------------------------------------------------------------------
// Phase 1: graphicController.defined? optional
//--------------------------------------------------------------------------------------------------

class GGS_graphicController_2E_defined_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_graphicController_2E_defined mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_graphicController_2E_defined_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_graphicController_2E_defined_3F_ (const GGS_graphicController_2E_defined & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_graphicController_2E_defined_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_graphicController_2E_defined unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_graphicController_2E_defined_3F_ extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphicController_2E_defined_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @regularBindingList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_regularBindingList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mBindingName ;
  public: inline GGS_lstring readProperty_mBindingName (void) const {
    return mProperty_mBindingName ;
  }

  public: GGS_observablePropertyList mProperty_mObservablePropertyList ;
  public: inline GGS_observablePropertyList readProperty_mObservablePropertyList (void) const {
    return mProperty_mObservablePropertyList ;
  }

  public: GGS_bindingOptionList mProperty_mBindingOptionList ;
  public: inline GGS_bindingOptionList readProperty_mBindingOptionList (void) const {
    return mProperty_mBindingOptionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_regularBindingList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMBindingName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingName = inValue ;
  }

  public: inline void setter_setMObservablePropertyList (const GGS_observablePropertyList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObservablePropertyList = inValue ;
  }

  public: inline void setter_setMBindingOptionList (const GGS_bindingOptionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingOptionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_regularBindingList_2E_element (const GGS_lstring & in_mBindingName,
                                             const GGS_observablePropertyList & in_mObservablePropertyList,
                                             const GGS_bindingOptionList & in_mBindingOptionList) ;

//--------------------------------- Copy constructor
  public: GGS_regularBindingList_2E_element (const GGS_regularBindingList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_regularBindingList_2E_element & operator = (const GGS_regularBindingList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_regularBindingList_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_observablePropertyList & inOperand1,
                                                                     const class GGS_bindingOptionList & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_regularBindingList_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_regularBindingList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                         const class GGS_observablePropertyList & inOperand1,
                                                                         const class GGS_bindingOptionList & inOperand2,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_regularBindingList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astComputedViewInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_astComputedViewInstruction_2E_weak : public GGS_astAbstractViewInstructionDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_astComputedViewInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_astComputedViewInstruction_2E_weak (const class GGS_astComputedViewInstruction & inSource) ;

  public: GGS_astComputedViewInstruction_2E_weak & operator = (const class GGS_astComputedViewInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_astComputedViewInstruction_2E_weak init_nil (void) {
    GGS_astComputedViewInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_astComputedViewInstruction bang_astComputedViewInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_astComputedViewInstruction unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astComputedViewInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astComputedViewInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astComputedViewInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astComputedViewInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewInstructionParameterValue_2E_entity struct
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterValue_2E_entity : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_entityName ;
  public: inline GGS_lstring readProperty_entityName (void) const {
    return mProperty_entityName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_entity (void) ;

//--------------------------------- Property setters
  public: inline void setter_setEntityName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_entityName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_entity (const GGS_lstring & in_entityName) ;

//--------------------------------- Copy constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_entity (const GGS_astAutoLayoutViewInstructionParameterValue_2E_entity & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_entity & operator = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_entity & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_entity init_21_ (const class GGS_lstring & inOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_entity extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewInstructionParameterValue_2E_entity class_func_new (const class GGS_lstring & inOperand0,
                                                                                                class Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_entity ;

//--------------------------------------------------------------------------------------------------
// Phase 1: astAutoLayoutViewInstructionParameterValue.entity? optional
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_astAutoLayoutViewInstructionParameterValue_2E_entity mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ (const GGS_astAutoLayoutViewInstructionParameterValue_2E_entity & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_astAutoLayoutViewInstructionParameterValue_2E_entity unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ extractObject (const GGS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewInstructionParameterValue_2E_enumFunc struct
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_enumTypeName ;
  public: inline GGS_lstring readProperty_enumTypeName (void) const {
    return mProperty_enumTypeName ;
  }

  public: GGS_lstring mProperty_enumFuncName ;
  public: inline GGS_lstring readProperty_enumFuncName (void) const {
    return mProperty_enumFuncName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc (void) ;

//--------------------------------- Property setters
  public: inline void setter_setEnumTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_enumTypeName = inValue ;
  }

  public: inline void setter_setEnumFuncName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_enumFuncName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc (const GGS_lstring & in_enumTypeName,
                                                                      const GGS_lstring & in_enumFuncName) ;

//--------------------------------- Copy constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc (const GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc & operator = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_lstring & inOperand1,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc class_func_new (const class GGS_lstring & inOperand0,
                                                                                                  const class GGS_lstring & inOperand1,
                                                                                                  class Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc ;

//--------------------------------------------------------------------------------------------------
// Phase 1: astAutoLayoutViewInstructionParameterValue.enumFunc? optional
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ (const GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewInstructionParameterValue_2E_menuItem struct
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_title ;
  public: inline GGS_string readProperty_title (void) const {
    return mProperty_title ;
  }

  public: GGS_runActionDescriptor mProperty_run ;
  public: inline GGS_runActionDescriptor readProperty_run (void) const {
    return mProperty_run ;
  }

  public: GGS_multipleBindingDescriptor mProperty_enabled ;
  public: inline GGS_multipleBindingDescriptor readProperty_enabled (void) const {
    return mProperty_enabled ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTitle (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_title = inValue ;
  }

  public: inline void setter_setRun (const GGS_runActionDescriptor & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_run = inValue ;
  }

  public: inline void setter_setEnabled (const GGS_multipleBindingDescriptor & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_enabled = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem (const GGS_string & in_title,
                                                                      const GGS_runActionDescriptor & in_run,
                                                                      const GGS_multipleBindingDescriptor & in_enabled) ;

//--------------------------------- Copy constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem (const GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem & operator = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem init_21__21__21_ (const class GGS_string & inOperand0,
                                                                                              const class GGS_runActionDescriptor & inOperand1,
                                                                                              const class GGS_multipleBindingDescriptor & inOperand2,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem class_func_new (const class GGS_string & inOperand0,
                                                                                                  const class GGS_runActionDescriptor & inOperand1,
                                                                                                  const class GGS_multipleBindingDescriptor & inOperand2,
                                                                                                  class Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_menuItem ;

//--------------------------------------------------------------------------------------------------
// Phase 1: astAutoLayoutViewInstructionParameterValue.menuItem? optional
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ (const GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewInstructionParameterValue_2E_string struct
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterValue_2E_string : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_value ;
  public: inline GGS_string readProperty_value (void) const {
    return mProperty_value ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_string (void) ;

//--------------------------------- Property setters
  public: inline void setter_setValue (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_value = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_string (const GGS_string & in_value) ;

//--------------------------------- Copy constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_string (const GGS_astAutoLayoutViewInstructionParameterValue_2E_string & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_string & operator = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_string & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_string init_21_ (const class GGS_string & inOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_string extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewInstructionParameterValue_2E_string class_func_new (const class GGS_string & inOperand0,
                                                                                                class Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_string ;

//--------------------------------------------------------------------------------------------------
// Phase 1: astAutoLayoutViewInstructionParameterValue.string? optional
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_astAutoLayoutViewInstructionParameterValue_2E_string mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ (const GGS_astAutoLayoutViewInstructionParameterValue_2E_string & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_astAutoLayoutViewInstructionParameterValue_2E_string unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ extractObject (const GGS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewInstructionParameterValue_2E_viewFunc struct
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_astAbstractViewInstructionDeclaration mProperty_instruction ;
  public: inline GGS_astAbstractViewInstructionDeclaration readProperty_instruction (void) const {
    return mProperty_instruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc (void) ;

//--------------------------------- Property setters
  public: inline void setter_setInstruction (const GGS_astAbstractViewInstructionDeclaration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_instruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc (const GGS_astAbstractViewInstructionDeclaration & in_instruction) ;

//--------------------------------- Copy constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc (const GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc & operator = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc init_21_ (const class GGS_astAbstractViewInstructionDeclaration & inOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc class_func_new (const class GGS_astAbstractViewInstructionDeclaration & inOperand0,
                                                                                                  class Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc ;

//--------------------------------------------------------------------------------------------------
// Phase 1: astAutoLayoutViewInstructionParameterValue.viewFunc? optional
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ (const GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewDeclarationMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutViewDeclarationMap final {

  public: DownEnumerator_autoLayoutViewDeclarationMap (const class GGS_autoLayoutViewDeclarationMap & inMap) ;

  public: ~ DownEnumerator_autoLayoutViewDeclarationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewDeclarationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutViewDeclarationMap (const DownEnumerator_autoLayoutViewDeclarationMap &) = delete ;
  private: DownEnumerator_autoLayoutViewDeclarationMap & operator = (const DownEnumerator_autoLayoutViewDeclarationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutViewDeclarationMap final {
  public: UpEnumerator_autoLayoutViewDeclarationMap (const class GGS_autoLayoutViewDeclarationMap & inMap)  ;

  public: ~ UpEnumerator_autoLayoutViewDeclarationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutViewDeclarationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutViewDeclarationMap (const UpEnumerator_autoLayoutViewDeclarationMap &) = delete ;
  private: UpEnumerator_autoLayoutViewDeclarationMap & operator = (const UpEnumerator_autoLayoutViewDeclarationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewDeclarationMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_autoLayoutViewDeclarationMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_autoLayoutViewDeclarationMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_autoLayoutViewDeclarationMap (void) ;

//--- Handle copy
  public: GGS_autoLayoutViewDeclarationMap (const GGS_autoLayoutViewDeclarationMap & inSource) ;
  public: GGS_autoLayoutViewDeclarationMap & operator = (const GGS_autoLayoutViewDeclarationMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_autoLayoutViewDeclarationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewDeclarationMap init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewDeclarationMap extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewDeclarationMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutViewDeclarationMap class_func_mapWithMapToOverride (const class GGS_autoLayoutViewDeclarationMap & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewDeclarationMap getter_overriddenMap (Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewDeclarationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutViewDeclarationMap ;
  friend class DownEnumerator_autoLayoutViewDeclarationMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewDeclarationMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewDeclarationMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewDeclarationMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutViewDeclarationMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutViewDeclarationMap_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutViewDeclarationMap_2E_element (const GGS_autoLayoutViewDeclarationMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutViewDeclarationMap_2E_element & operator = (const GGS_autoLayoutViewDeclarationMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewDeclarationMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewDeclarationMap_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewDeclarationMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewDeclarationMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: autoLayoutViewDeclarationMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewDeclarationMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_autoLayoutViewDeclarationMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutViewDeclarationMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_autoLayoutViewDeclarationMap_2E_element_3F_ (const GGS_autoLayoutViewDeclarationMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_autoLayoutViewDeclarationMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_autoLayoutViewDeclarationMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewDeclarationMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewDeclarationMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@astAbstractViewDeclaration checkView'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkView (class cPtr_astAbstractViewDeclaration * inObject,
                                    const class GGS_string constin_inViewName,
                                    const class GGS_autoLayoutViewDeclarationMap constin_inViewDeclarationMap,
                                    const class GGS_bool constin_inPreferences,
                                    const class GGS_propertyMap constin_inRootObservablePropertyMap,
                                    const class GGS_propertyMap constin_inPreferencesPropertyMap,
                                    const class GGS_semanticContext constin_inSemanticContext,
                                    const class GGS_propertyMap constin_inObservablePropertyMap,
                                    const class GGS_actionMap constin_inActionMap,
                                    const class GGS_string constin_inReceiverSwiftTypeName,
                                    const class GGS_classMap constin_inClassMap,
                                    class GGS_implicitViewFunctionGenerationList & io_ioImplicitViewFunctionGenerationList,
                                    class GGS_autoLayoutConfiguratorMap & io_ioConfiguratorMap,
                                    class GGS_autoLayoutOutletMap & io_ioOutletMap,
                                    class GGS_abstractViewGeneration & out_outGeneration,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticContext struct
//--------------------------------------------------------------------------------------------------

class GGS_semanticContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_classMap mProperty_mClassMap ;
  public: inline GGS_classMap readProperty_mClassMap (void) const {
    return mProperty_mClassMap ;
  }

  public: GGS_outletClassMap mProperty_mOutletClassMap ;
  public: inline GGS_outletClassMap readProperty_mOutletClassMap (void) const {
    return mProperty_mOutletClassMap ;
  }

  public: GGS_bindingSpecificationMap mProperty_mBindingSpecificationMap ;
  public: inline GGS_bindingSpecificationMap readProperty_mBindingSpecificationMap (void) const {
    return mProperty_mBindingSpecificationMap ;
  }

  public: GGS_autolayoutViewClassMap mProperty_mAutolayoutViewClassMap ;
  public: inline GGS_autolayoutViewClassMap readProperty_mAutolayoutViewClassMap (void) const {
    return mProperty_mAutolayoutViewClassMap ;
  }

  public: GGS_autoLayoutBindingSpecificationMap mProperty_mAutoLayoutBindingSpecificationMap ;
  public: inline GGS_autoLayoutBindingSpecificationMap readProperty_mAutoLayoutBindingSpecificationMap (void) const {
    return mProperty_mAutoLayoutBindingSpecificationMap ;
  }

  public: GGS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutVStackFunctionMap ;
  public: inline GGS_astAutoLayoutViewFunctionMap readProperty_mAutoLayoutVStackFunctionMap (void) const {
    return mProperty_mAutoLayoutVStackFunctionMap ;
  }

  public: GGS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutHStackFunctionMap ;
  public: inline GGS_astAutoLayoutViewFunctionMap readProperty_mAutoLayoutHStackFunctionMap (void) const {
    return mProperty_mAutoLayoutHStackFunctionMap ;
  }

  public: GGS_enumerationFunctionListAST mProperty_mEnumerationFunctionListAST ;
  public: inline GGS_enumerationFunctionListAST readProperty_mEnumerationFunctionListAST (void) const {
    return mProperty_mEnumerationFunctionListAST ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_semanticContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMClassMap (const GGS_classMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mClassMap = inValue ;
  }

  public: inline void setter_setMOutletClassMap (const GGS_outletClassMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletClassMap = inValue ;
  }

  public: inline void setter_setMBindingSpecificationMap (const GGS_bindingSpecificationMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingSpecificationMap = inValue ;
  }

  public: inline void setter_setMAutolayoutViewClassMap (const GGS_autolayoutViewClassMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutolayoutViewClassMap = inValue ;
  }

  public: inline void setter_setMAutoLayoutBindingSpecificationMap (const GGS_autoLayoutBindingSpecificationMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutBindingSpecificationMap = inValue ;
  }

  public: inline void setter_setMAutoLayoutVStackFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutVStackFunctionMap = inValue ;
  }

  public: inline void setter_setMAutoLayoutHStackFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutHStackFunctionMap = inValue ;
  }

  public: inline void setter_setMEnumerationFunctionListAST (const GGS_enumerationFunctionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumerationFunctionListAST = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_semanticContext (const GGS_classMap & in_mClassMap,
                               const GGS_outletClassMap & in_mOutletClassMap,
                               const GGS_bindingSpecificationMap & in_mBindingSpecificationMap,
                               const GGS_autolayoutViewClassMap & in_mAutolayoutViewClassMap,
                               const GGS_autoLayoutBindingSpecificationMap & in_mAutoLayoutBindingSpecificationMap,
                               const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutVStackFunctionMap,
                               const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutHStackFunctionMap,
                               const GGS_enumerationFunctionListAST & in_mEnumerationFunctionListAST) ;

//--------------------------------- Copy constructor
  public: GGS_semanticContext (const GGS_semanticContext & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_semanticContext & operator = (const GGS_semanticContext & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticContext init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticContext extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticContext class_func_new (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticContext ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@astAutoLayoutViewFunctionCallList checkViewFunctionCallList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkViewFunctionCallList (const class GGS_astAutoLayoutViewFunctionCallList inObject,
                                                const class GGS_astAutoLayoutViewFunctionMap constin_inFunctionMap,
                                                const class GGS_autoLayoutViewDeclarationMap constin_inViewDeclarationMap,
                                                const class GGS_bool constin_inPreferences,
                                                const class GGS_actionMap constin_inPreferencesActionMap,
                                                const class GGS_propertyMap constin_inRootObservablePropertyMap,
                                                const class GGS_propertyMap constin_inPreferencesPropertyMap,
                                                const class GGS_semanticContext constin_inSemanticContext,
                                                const class GGS_propertyMap constin_inObservablePropertyMap,
                                                const class GGS_actionMap constin_inActionMap,
                                                const class GGS_string constin_inReceiverSwiftTypeName,
                                                const class GGS_classMap constin_inClassMap,
                                                class GGS_implicitViewFunctionGenerationList & io_ioImplicitViewFunctionGenerationList,
                                                class GGS_autoLayoutConfiguratorMap & io_ioConfiguratorMap,
                                                class GGS_autoLayoutOutletMap & io_ioOutletMap,
                                                class GGS_autoLayoutViewInstructionGenerationFuncCallList & out_outFuncCallList,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum autolayoutEnabledBindingForGeneration
//--------------------------------------------------------------------------------------------------

class GGS_autolayoutEnabledBindingForGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_autolayoutEnabledBindingForGeneration (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_none,
    enum_enabled
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_enabled (class GGS_abstractBooleanMultipleBindingExpressionForGeneration & out_binding) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autolayoutEnabledBindingForGeneration extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autolayoutEnabledBindingForGeneration class_func_enabled (const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_autolayoutEnabledBindingForGeneration class_func_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractEnabled (class GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ getter_getEnabled (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEnabled (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration ;

//--------------------------------------------------------------------------------------------------
//   enum autolayoutRunBindingForGeneration
//--------------------------------------------------------------------------------------------------

class GGS_autolayoutRunBindingForGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_autolayoutRunBindingForGeneration (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_none,
    enum_run
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_run (class GGS_string & out_targetName,
                                                            class GGS_string & out_actionName,
                                                            class GGS_string & out_targetTypeName) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autolayoutRunBindingForGeneration extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autolayoutRunBindingForGeneration class_func_none (LOCATION_ARGS) ;

  public: static class GGS_autolayoutRunBindingForGeneration class_func_run (const class GGS_string & inOperand0,
                                                                             const class GGS_string & inOperand1,
                                                                             const class GGS_string & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractRun (class GGS_string & outArgument0,
                                                   class GGS_string & outArgument1,
                                                   class GGS_string & outArgument2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_autolayoutRunBindingForGeneration_2E_run_3F_ getter_getRun (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNone (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRun (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutRunBindingForGeneration ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_expressionString (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateViewInstruction (const class cPtr_abstractViewInstructionGeneration * inObject,
                                                              const class GGS_bool constin_inPreferences,
                                                              const class GGS_string constin_inName,
                                                              const class GGS_string constin_inIndentation,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewInstructionGenerationFuncCallList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList final {
  public: DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList (const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inList) ;

  public: ~ DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mFunctionName (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutViewInstructionGenerationParameterList current_mParameters (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList (const DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList &) = delete ;
  private: DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList & operator = (const DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList final {
  public: UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList (const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inList)  ;

  public: ~ UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mFunctionName (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutViewInstructionGenerationParameterList current_mParameters (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList (const UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList &) = delete ;
  private: UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList & operator = (const UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @autoLayoutViewInstructionGenerationFuncCallList list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewInstructionGenerationFuncCallList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element> mArray ;

//--- Default constructor
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList (void) ;

//--- Destructor
  public: virtual ~ GGS_autoLayoutViewInstructionGenerationFuncCallList (void) = default ;

//--- Copy
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList (const GGS_autoLayoutViewInstructionGenerationFuncCallList &) = default ;
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList & operator = (const GGS_autoLayoutViewInstructionGenerationFuncCallList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_autoLayoutViewInstructionGenerationFuncCallList subList (const int32_t inStart,
                                                                        const int32_t inLength,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mFunctionName,
                                                 const class GGS_autoLayoutViewInstructionGenerationParameterList & in_mParameters
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewInstructionGenerationFuncCallList init (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewInstructionGenerationFuncCallList extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewInstructionGenerationFuncCallList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutViewInstructionGenerationFuncCallList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                                     const class GGS_autoLayoutViewInstructionGenerationParameterList & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_autoLayoutViewInstructionGenerationFuncCallList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_autoLayoutViewInstructionGenerationParameterList & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutViewInstructionGenerationFuncCallList add_operation (const GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_autoLayoutViewInstructionGenerationParameterList constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_autoLayoutViewInstructionGenerationParameterList constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionNameAtIndex (class GGS_string constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParametersAtIndex (class GGS_autoLayoutViewInstructionGenerationParameterList constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mFunctionNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewInstructionGenerationParameterList getter_mParametersAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewInstructionGenerationFuncCallList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewInstructionGenerationFuncCallList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewInstructionGenerationFuncCallList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList ;
  friend class DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewInstructionGenerationParameterList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutViewInstructionGenerationParameterList final {
  public: DownEnumerator_autoLayoutViewInstructionGenerationParameterList (const class GGS_autoLayoutViewInstructionGenerationParameterList & inList) ;

  public: ~ DownEnumerator_autoLayoutViewInstructionGenerationParameterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mParameterName (LOCATION_ARGS) const ;
  public: class GGS_string current_mParameterValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutViewInstructionGenerationParameterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutViewInstructionGenerationParameterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutViewInstructionGenerationParameterList (const DownEnumerator_autoLayoutViewInstructionGenerationParameterList &) = delete ;
  private: DownEnumerator_autoLayoutViewInstructionGenerationParameterList & operator = (const DownEnumerator_autoLayoutViewInstructionGenerationParameterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutViewInstructionGenerationParameterList final {
  public: UpEnumerator_autoLayoutViewInstructionGenerationParameterList (const class GGS_autoLayoutViewInstructionGenerationParameterList & inList)  ;

  public: ~ UpEnumerator_autoLayoutViewInstructionGenerationParameterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mParameterName (LOCATION_ARGS) const ;
  public: class GGS_string current_mParameterValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutViewInstructionGenerationParameterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutViewInstructionGenerationParameterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutViewInstructionGenerationParameterList (const UpEnumerator_autoLayoutViewInstructionGenerationParameterList &) = delete ;
  private: UpEnumerator_autoLayoutViewInstructionGenerationParameterList & operator = (const UpEnumerator_autoLayoutViewInstructionGenerationParameterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @autoLayoutViewInstructionGenerationParameterList list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewInstructionGenerationParameterList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_autoLayoutViewInstructionGenerationParameterList_2E_element> mArray ;

//--- Default constructor
  public: GGS_autoLayoutViewInstructionGenerationParameterList (void) ;

//--- Destructor
  public: virtual ~ GGS_autoLayoutViewInstructionGenerationParameterList (void) = default ;

//--- Copy
  public: GGS_autoLayoutViewInstructionGenerationParameterList (const GGS_autoLayoutViewInstructionGenerationParameterList &) = default ;
  public: GGS_autoLayoutViewInstructionGenerationParameterList & operator = (const GGS_autoLayoutViewInstructionGenerationParameterList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_autoLayoutViewInstructionGenerationParameterList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_autoLayoutViewInstructionGenerationParameterList subList (const int32_t inStart,
                                                                         const int32_t inLength,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_autoLayoutViewInstructionGenerationParameterList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mParameterName,
                                                 const class GGS_string & in_mParameterValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewInstructionGenerationParameterList init (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewInstructionGenerationParameterList extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewInstructionGenerationParameterList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutViewInstructionGenerationParameterList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                                      const class GGS_string & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_autoLayoutViewInstructionGenerationParameterList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutViewInstructionGenerationParameterList add_operation (const GGS_autoLayoutViewInstructionGenerationParameterList & inOperand,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterNameAtIndex (class GGS_string constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterValueAtIndex (class GGS_string constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mParameterNameAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mParameterValueAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewInstructionGenerationParameterList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewInstructionGenerationParameterList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewInstructionGenerationParameterList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutViewInstructionGenerationParameterList ;
  friend class DownEnumerator_autoLayoutViewInstructionGenerationParameterList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@astAbstractViewInstructionDeclaration generateViewCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateViewCode (class cPtr_astAbstractViewInstructionDeclaration * inObject,
                                           const class GGS_autoLayoutViewDeclarationMap constin_inViewDeclarationMap,
                                           const class GGS_bool constin_inPreferences,
                                           const class GGS_propertyMap constin_inRootObservablePropertyMap,
                                           const class GGS_propertyMap constin_inPreferencesPropertyMap,
                                           const class GGS_semanticContext constin_inSemanticContext,
                                           const class GGS_propertyMap constin_inObservablePropertyMap,
                                           const class GGS_actionMap constin_inActionMap,
                                           const class GGS_string constin_inReceiverSwiftTypeName,
                                           const class GGS_classMap constin_inClassMap,
                                           class GGS_implicitViewFunctionGenerationList & io_ioImplicitViewFunctionGenerationList,
                                           class GGS_autoLayoutConfiguratorMap & io_ioConfiguratorMap,
                                           class GGS_autoLayoutOutletMap & io_ioOutletMap,
                                           class GGS_abstractViewInstructionGeneration & out_outInstruction,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @classKind_2E_atomic struct
//--------------------------------------------------------------------------------------------------

class GGS_classKind_2E_atomic : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_typeKind mProperty_kind ;
  public: inline GGS_typeKind readProperty_kind (void) const {
    return mProperty_kind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_classKind_2E_atomic (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKind (const GGS_typeKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_kind = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_classKind_2E_atomic (const GGS_typeKind & in_kind) ;

//--------------------------------- Copy constructor
  public: GGS_classKind_2E_atomic (const GGS_classKind_2E_atomic & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_classKind_2E_atomic & operator = (const GGS_classKind_2E_atomic & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classKind_2E_atomic init_21_ (const class GGS_typeKind & inOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classKind_2E_atomic extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classKind_2E_atomic class_func_new (const class GGS_typeKind & inOperand0,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind_2E_atomic ;

//--------------------------------------------------------------------------------------------------
// Phase 1: classKind.atomic? optional
//--------------------------------------------------------------------------------------------------

class GGS_classKind_2E_atomic_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_classKind_2E_atomic mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_classKind_2E_atomic_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_classKind_2E_atomic_3F_ (const GGS_classKind_2E_atomic & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_classKind_2E_atomic_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_classKind_2E_atomic unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classKind_2E_atomic_3F_ extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind_2E_atomic_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutEnableBinding??handlesEnabledBinding?prefs????prefsMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (const class GGS_multipleBindingDescriptor constinArgument0,
                                                                                                               const class GGS_bool constinArgument1,
                                                                                                               const class GGS_bool constinArgument2,
                                                                                                               const class GGS_propertyMap constinArgument3,
                                                                                                               const class GGS_semanticContext constinArgument4,
                                                                                                               const class GGS_propertyMap constinArgument5,
                                                                                                               const class GGS_propertyMap constinArgument6,
                                                                                                               class GGS_autolayoutEnabledBindingForGeneration & outArgument7,
                                                                                                               class Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutRunBinding??handlesRunAction??????!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__3F__21_ (const class GGS_runActionDescriptor constinArgument0,
                                                                                              const class GGS_bool constinArgument1,
                                                                                              const class GGS_bool constinArgument2,
                                                                                              const class GGS_lstring constinArgument3,
                                                                                              const class GGS_actionMap constinArgument4,
                                                                                              const class GGS_propertyMap constinArgument5,
                                                                                              const class GGS_string constinArgument6,
                                                                                              const class GGS_actionMap constinArgument7,
                                                                                              class GGS_autolayoutRunBindingForGeneration & outArgument8,
                                                                                              class Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractViewGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractViewGeneration_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractViewGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractViewGeneration_2E_weak (const class GGS_abstractViewGeneration & inSource) ;

  public: GGS_abstractViewGeneration_2E_weak & operator = (const class GGS_abstractViewGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractViewGeneration_2E_weak init_nil (void) {
    GGS_abstractViewGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractViewGeneration bang_abstractViewGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractViewGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractViewGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractViewGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractViewGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractViewGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewInstructionGenerationFuncCallList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mFunctionName ;
  public: inline GGS_string readProperty_mFunctionName (void) const {
    return mProperty_mFunctionName ;
  }

  public: GGS_autoLayoutViewInstructionGenerationParameterList mProperty_mParameters ;
  public: inline GGS_autoLayoutViewInstructionGenerationParameterList readProperty_mParameters (void) const {
    return mProperty_mParameters ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFunctionName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionName = inValue ;
  }

  public: inline void setter_setMParameters (const GGS_autoLayoutViewInstructionGenerationParameterList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameters = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element (const GGS_string & in_mFunctionName,
                                                                          const GGS_autoLayoutViewInstructionGenerationParameterList & in_mParameters) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element (const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element & operator = (const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                                              const class GGS_autoLayoutViewInstructionGenerationParameterList & inOperand1,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                                      const class GGS_autoLayoutViewInstructionGenerationParameterList & inOperand1,
                                                                                                      class Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewInstructionGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutViewInstructionGenerationList final {
  public: DownEnumerator_autoLayoutViewInstructionGenerationList (const class GGS_autoLayoutViewInstructionGenerationList & inList) ;

  public: ~ DownEnumerator_autoLayoutViewInstructionGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractViewInstructionGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutViewInstructionGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutViewInstructionGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutViewInstructionGenerationList (const DownEnumerator_autoLayoutViewInstructionGenerationList &) = delete ;
  private: DownEnumerator_autoLayoutViewInstructionGenerationList & operator = (const DownEnumerator_autoLayoutViewInstructionGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutViewInstructionGenerationList final {
  public: UpEnumerator_autoLayoutViewInstructionGenerationList (const class GGS_autoLayoutViewInstructionGenerationList & inList)  ;

  public: ~ UpEnumerator_autoLayoutViewInstructionGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractViewInstructionGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutViewInstructionGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutViewInstructionGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutViewInstructionGenerationList (const UpEnumerator_autoLayoutViewInstructionGenerationList &) = delete ;
  private: UpEnumerator_autoLayoutViewInstructionGenerationList & operator = (const UpEnumerator_autoLayoutViewInstructionGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @autoLayoutViewInstructionGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewInstructionGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_autoLayoutViewInstructionGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_autoLayoutViewInstructionGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_autoLayoutViewInstructionGenerationList (void) = default ;

//--- Copy
  public: GGS_autoLayoutViewInstructionGenerationList (const GGS_autoLayoutViewInstructionGenerationList &) = default ;
  public: GGS_autoLayoutViewInstructionGenerationList & operator = (const GGS_autoLayoutViewInstructionGenerationList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_autoLayoutViewInstructionGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_autoLayoutViewInstructionGenerationList subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_autoLayoutViewInstructionGenerationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_abstractViewInstructionGeneration & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewInstructionGenerationList init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewInstructionGenerationList extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewInstructionGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutViewInstructionGenerationList class_func_listWithValue (const class GGS_abstractViewInstructionGeneration & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_autoLayoutViewInstructionGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_abstractViewInstructionGeneration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_autoLayoutViewInstructionGenerationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutViewInstructionGenerationList add_operation (const GGS_autoLayoutViewInstructionGenerationList & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_abstractViewInstructionGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_abstractViewInstructionGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_abstractViewInstructionGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_abstractViewInstructionGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_abstractViewInstructionGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_abstractViewInstructionGeneration constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_abstractViewInstructionGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_abstractViewInstructionGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractViewInstructionGeneration getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewInstructionGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewInstructionGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewInstructionGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutViewInstructionGenerationList ;
  friend class DownEnumerator_autoLayoutViewInstructionGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewInstructionGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewInstructionGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractViewInstructionGeneration mProperty_mInstruction ;
  public: inline GGS_abstractViewInstructionGeneration readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutViewInstructionGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_abstractViewInstructionGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutViewInstructionGenerationList_2E_element (const GGS_abstractViewInstructionGeneration & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutViewInstructionGenerationList_2E_element (const GGS_autoLayoutViewInstructionGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutViewInstructionGenerationList_2E_element & operator = (const GGS_autoLayoutViewInstructionGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewInstructionGenerationList_2E_element init_21_ (const class GGS_abstractViewInstructionGeneration & inOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewInstructionGenerationList_2E_element extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewInstructionGenerationList_2E_element class_func_new (const class GGS_abstractViewInstructionGeneration & inOperand0,
                                                                                              class Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @computedHorizontalViewGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_computedHorizontalViewGeneration : public GGS_abstractViewGeneration {
//--------------------------------- Default constructor
  public: GGS_computedHorizontalViewGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_computedHorizontalViewGeneration (const class cPtr_computedHorizontalViewGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_autoLayoutViewInstructionGenerationFuncCallList readProperty_mFuncCallList (void) const ;

  public: class GGS_autoLayoutViewInstructionGenerationList readProperty_mInstructionList (void) const ;

  public: class GGS_astNewStackViewDeclarationList readProperty_mNewStackViewDeclarationList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_computedHorizontalViewGeneration init_21__21__21_ (const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                        const class GGS_autoLayoutViewInstructionGenerationList & inOperand1,
                                                                        const class GGS_astNewStackViewDeclarationList & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_computedHorizontalViewGeneration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_computedHorizontalViewGeneration class_func_new (const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                            const class GGS_autoLayoutViewInstructionGenerationList & inOperand1,
                                                                            const class GGS_astNewStackViewDeclarationList & inOperand2,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computedHorizontalViewGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedHorizontalViewGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @computedHorizontalViewGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_computedHorizontalViewGeneration : public cPtr_abstractViewGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void computedHorizontalViewGeneration_init_21__21__21_ (const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                  const class GGS_autoLayoutViewInstructionGenerationList & inOperand1,
                                                                  const class GGS_astNewStackViewDeclarationList & inOperand2,
                                                                  Compiler * inCompiler) ;


//--- Extension getter generateViewBuilder
  public: virtual class GGS_string getter_generateViewBuilder (const class GGS_bool inPreferences,
           const class GGS_string inViewName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList mProperty_mFuncCallList ;
  public: GGS_autoLayoutViewInstructionGenerationList mProperty_mInstructionList ;
  public: GGS_astNewStackViewDeclarationList mProperty_mNewStackViewDeclarationList ;


//--- Default constructor
  public: cPtr_computedHorizontalViewGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_computedHorizontalViewGeneration (const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                 const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                 const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @computedHorizontalViewGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_computedHorizontalViewGeneration_2E_weak : public GGS_abstractViewGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_computedHorizontalViewGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_computedHorizontalViewGeneration_2E_weak (const class GGS_computedHorizontalViewGeneration & inSource) ;

  public: GGS_computedHorizontalViewGeneration_2E_weak & operator = (const class GGS_computedHorizontalViewGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_computedHorizontalViewGeneration_2E_weak init_nil (void) {
    GGS_computedHorizontalViewGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_computedHorizontalViewGeneration bang_computedHorizontalViewGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_computedHorizontalViewGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_computedHorizontalViewGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_computedHorizontalViewGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computedHorizontalViewGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedHorizontalViewGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @computedVerticalViewGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_computedVerticalViewGeneration : public GGS_abstractViewGeneration {
//--------------------------------- Default constructor
  public: GGS_computedVerticalViewGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_computedVerticalViewGeneration (const class cPtr_computedVerticalViewGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mHasVerticalScroller (void) const ;

  public: class GGS_lstring readProperty_mConfiguratorName (void) const ;

  public: class GGS_autoLayoutViewInstructionGenerationFuncCallList readProperty_mFuncCallList (void) const ;

  public: class GGS_autoLayoutViewInstructionGenerationList readProperty_mInstructionList (void) const ;

  public: class GGS_astNewStackViewDeclarationList readProperty_mNewStackViewDeclarationList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_computedVerticalViewGeneration init_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand2,
                                                                              const class GGS_autoLayoutViewInstructionGenerationList & inOperand3,
                                                                              const class GGS_astNewStackViewDeclarationList & inOperand4,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_computedVerticalViewGeneration extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_computedVerticalViewGeneration class_func_new (const class GGS_bool & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand2,
                                                                          const class GGS_autoLayoutViewInstructionGenerationList & inOperand3,
                                                                          const class GGS_astNewStackViewDeclarationList & inOperand4,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computedVerticalViewGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedVerticalViewGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @computedVerticalViewGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_computedVerticalViewGeneration : public cPtr_abstractViewGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void computedVerticalViewGeneration_init_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand2,
                                                                        const class GGS_autoLayoutViewInstructionGenerationList & inOperand3,
                                                                        const class GGS_astNewStackViewDeclarationList & inOperand4,
                                                                        Compiler * inCompiler) ;


//--- Extension getter generateViewBuilder
  public: virtual class GGS_string getter_generateViewBuilder (const class GGS_bool inPreferences,
           const class GGS_string inViewName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_bool mProperty_mHasVerticalScroller ;
  public: GGS_lstring mProperty_mConfiguratorName ;
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList mProperty_mFuncCallList ;
  public: GGS_autoLayoutViewInstructionGenerationList mProperty_mInstructionList ;
  public: GGS_astNewStackViewDeclarationList mProperty_mNewStackViewDeclarationList ;


//--- Default constructor
  public: cPtr_computedVerticalViewGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_computedVerticalViewGeneration (const GGS_bool & in_mHasVerticalScroller,
                                               const GGS_lstring & in_mConfiguratorName,
                                               const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                               const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                               const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @computedVerticalViewGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_computedVerticalViewGeneration_2E_weak : public GGS_abstractViewGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_computedVerticalViewGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_computedVerticalViewGeneration_2E_weak (const class GGS_computedVerticalViewGeneration & inSource) ;

  public: GGS_computedVerticalViewGeneration_2E_weak & operator = (const class GGS_computedVerticalViewGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_computedVerticalViewGeneration_2E_weak init_nil (void) {
    GGS_computedVerticalViewGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_computedVerticalViewGeneration bang_computedVerticalViewGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_computedVerticalViewGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_computedVerticalViewGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_computedVerticalViewGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computedVerticalViewGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedVerticalViewGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateAppendViewInstruction (const class cPtr_abstractViewInstructionGeneration * inObject,
                                                                    const class GGS_bool constin_inPreferences,
                                                                    const class GGS_string constin_inReceiverViewName,
                                                                    const class GGS_string constin_inIndentation,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractViewInstructionGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractViewInstructionGeneration_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractViewInstructionGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractViewInstructionGeneration_2E_weak (const class GGS_abstractViewInstructionGeneration & inSource) ;

  public: GGS_abstractViewInstructionGeneration_2E_weak & operator = (const class GGS_abstractViewInstructionGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractViewInstructionGeneration_2E_weak init_nil (void) {
    GGS_abstractViewInstructionGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractViewInstructionGeneration bang_abstractViewInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractViewInstructionGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractViewInstructionGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractViewInstructionGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractViewInstructionGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutMultipleBindingGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutMultipleBindingGenerationList final {
  public: DownEnumerator_autoLayoutMultipleBindingGenerationList (const class GGS_autoLayoutMultipleBindingGenerationList & inList) ;

  public: ~ DownEnumerator_autoLayoutMultipleBindingGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_abstractBooleanMultipleBindingExpressionForGeneration current_mBoundObjectExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutMultipleBindingGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutMultipleBindingGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutMultipleBindingGenerationList (const DownEnumerator_autoLayoutMultipleBindingGenerationList &) = delete ;
  private: DownEnumerator_autoLayoutMultipleBindingGenerationList & operator = (const DownEnumerator_autoLayoutMultipleBindingGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutMultipleBindingGenerationList final {
  public: UpEnumerator_autoLayoutMultipleBindingGenerationList (const class GGS_autoLayoutMultipleBindingGenerationList & inList)  ;

  public: ~ UpEnumerator_autoLayoutMultipleBindingGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_abstractBooleanMultipleBindingExpressionForGeneration current_mBoundObjectExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutMultipleBindingGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutMultipleBindingGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutMultipleBindingGenerationList (const UpEnumerator_autoLayoutMultipleBindingGenerationList &) = delete ;
  private: UpEnumerator_autoLayoutMultipleBindingGenerationList & operator = (const UpEnumerator_autoLayoutMultipleBindingGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @autoLayoutMultipleBindingGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutMultipleBindingGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_autoLayoutMultipleBindingGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_autoLayoutMultipleBindingGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_autoLayoutMultipleBindingGenerationList (void) = default ;

//--- Copy
  public: GGS_autoLayoutMultipleBindingGenerationList (const GGS_autoLayoutMultipleBindingGenerationList &) = default ;
  public: GGS_autoLayoutMultipleBindingGenerationList & operator = (const GGS_autoLayoutMultipleBindingGenerationList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_autoLayoutMultipleBindingGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_autoLayoutMultipleBindingGenerationList subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_autoLayoutMultipleBindingGenerationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mBindingName,
                                                 const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutMultipleBindingGenerationList init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutMultipleBindingGenerationList extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutMultipleBindingGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutMultipleBindingGenerationList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                             const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_autoLayoutMultipleBindingGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_autoLayoutMultipleBindingGenerationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutMultipleBindingGenerationList add_operation (const GGS_autoLayoutMultipleBindingGenerationList & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_abstractBooleanMultipleBindingExpressionForGeneration constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_abstractBooleanMultipleBindingExpressionForGeneration constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GGS_string constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBoundObjectExpressionAtIndex (class GGS_abstractBooleanMultipleBindingExpressionForGeneration constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBindingNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractBooleanMultipleBindingExpressionForGeneration getter_mBoundObjectExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutMultipleBindingGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutMultipleBindingGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutMultipleBindingGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutMultipleBindingGenerationList ;
  friend class DownEnumerator_autoLayoutMultipleBindingGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutMultipleBindingGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutMultipleBindingGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mBindingName ;
  public: inline GGS_string readProperty_mBindingName (void) const {
    return mProperty_mBindingName ;
  }

  public: GGS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mBoundObjectExpression ;
  public: inline GGS_abstractBooleanMultipleBindingExpressionForGeneration readProperty_mBoundObjectExpression (void) const {
    return mProperty_mBoundObjectExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutMultipleBindingGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMBindingName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingName = inValue ;
  }

  public: inline void setter_setMBoundObjectExpression (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoundObjectExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutMultipleBindingGenerationList_2E_element (const GGS_string & in_mBindingName,
                                                                  const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutMultipleBindingGenerationList_2E_element (const GGS_autoLayoutMultipleBindingGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutMultipleBindingGenerationList_2E_element & operator = (const GGS_autoLayoutMultipleBindingGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutMultipleBindingGenerationList_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                                      const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutMultipleBindingGenerationList_2E_element extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutMultipleBindingGenerationList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                              const class GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1,
                                                                                              class Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList_2E_element ;


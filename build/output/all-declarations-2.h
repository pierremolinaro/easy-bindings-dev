#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerPropertyGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak : public GGS_propertyGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak (const class GGS_autoLayoutTableViewControllerPropertyGeneration & inSource) ;

  public: GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak & operator = (const class GGS_autoLayoutTableViewControllerPropertyGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak init_nil (void) {
    GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_autoLayoutTableViewControllerPropertyGeneration bang_autoLayoutTableViewControllerPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_autoLayoutTableViewControllerPropertyGeneration unwrappedValue (void) const ;

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
  public: static GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum autoLayoutTableViewControllerModelKind
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerModelKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerModelKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_entityArray,
    enum_transientArray
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerModelKind extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerModelKind class_func_entityArray (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutTableViewControllerModelKind class_func_transientArray (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEntityArray (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTransientArray (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerModelKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerBoundColumnListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration final {
  public: DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration (const class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & inList) ;

  public: ~ DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_bool current_mEditable (LOCATION_ARGS) const ;
  public: class GGS_string current_mSortPropertyName (LOCATION_ARGS) const ;
  public: class GGS_string current_mDisplayedPropertyName (LOCATION_ARGS) const ;
  public: class GGS_string current_mColumnObjectTypeName (LOCATION_ARGS) const ;
  public: class GGS_string current_mRunAction (LOCATION_ARGS) const ;
  public: class GGS__32_stringlist current_mActualParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration (const DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration &) = delete ;
  private: DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration & operator = (const DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration final {
  public: UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration (const class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & inList)  ;

  public: ~ UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_bool current_mEditable (LOCATION_ARGS) const ;
  public: class GGS_string current_mSortPropertyName (LOCATION_ARGS) const ;
  public: class GGS_string current_mDisplayedPropertyName (LOCATION_ARGS) const ;
  public: class GGS_string current_mColumnObjectTypeName (LOCATION_ARGS) const ;
  public: class GGS_string current_mRunAction (LOCATION_ARGS) const ;
  public: class GGS__32_stringlist current_mActualParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration (const UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration &) = delete ;
  private: UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration & operator = (const UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @autoLayoutTableViewControllerBoundColumnListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_autoLayoutTableViewControllerBoundColumnListForGeneration (void) = default ;

//--- Copy
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration &) = default ;
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & operator = (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration &) = default ;

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
  public : inline GenericArray <GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration subList (const int32_t inStart,
                                                                                  const int32_t inLength,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_bool & in_mEditable,
                                                 const class GGS_string & in_mSortPropertyName,
                                                 const class GGS_string & in_mDisplayedPropertyName,
                                                 const class GGS_string & in_mColumnObjectTypeName,
                                                 const class GGS_string & in_mRunAction,
                                                 const class GGS__32_stringlist & in_mActualParameterList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerBoundColumnListForGeneration init (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerBoundColumnListForGeneration extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration class_func_listWithValue (const class GGS_bool & inOperand0,
                                                                                                               const class GGS_string & inOperand1,
                                                                                                               const class GGS_string & inOperand2,
                                                                                                               const class GGS_string & inOperand3,
                                                                                                               const class GGS_string & inOperand4,
                                                                                                               const class GGS__32_stringlist & inOperand5
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_bool & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_string & inOperand2,
                                                    const class GGS_string & inOperand3,
                                                    const class GGS_string & inOperand4,
                                                    const class GGS__32_stringlist & inOperand5
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutTableViewControllerBoundColumnListForGeneration add_operation (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & inOperand,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_bool constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_string constinArgument2,
                                               class GGS_string constinArgument3,
                                               class GGS_string constinArgument4,
                                               class GGS__32_stringlist constinArgument5,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_bool constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_string constinArgument3,
                                                      class GGS_string constinArgument4,
                                                      class GGS__32_stringlist constinArgument5,
                                                      class GGS_uint constinArgument6,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_bool & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 class GGS_string & outArgument3,
                                                 class GGS_string & outArgument4,
                                                 class GGS__32_stringlist & outArgument5,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_bool & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_string & outArgument2,
                                                class GGS_string & outArgument3,
                                                class GGS_string & outArgument4,
                                                class GGS__32_stringlist & outArgument5,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_bool & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_string & outArgument3,
                                                      class GGS_string & outArgument4,
                                                      class GGS__32_stringlist & outArgument5,
                                                      class GGS_uint constinArgument6,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActualParameterListAtIndex (class GGS__32_stringlist constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMColumnObjectTypeNameAtIndex (class GGS_string constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDisplayedPropertyNameAtIndex (class GGS_string constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEditableAtIndex (class GGS_bool constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRunActionAtIndex (class GGS_string constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSortPropertyNameAtIndex (class GGS_string constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_bool & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_string & outArgument2,
                                              class GGS_string & outArgument3,
                                              class GGS_string & outArgument4,
                                              class GGS__32_stringlist & outArgument5,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_bool & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_string & outArgument2,
                                             class GGS_string & outArgument3,
                                             class GGS_string & outArgument4,
                                             class GGS__32_stringlist & outArgument5,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_stringlist getter_mActualParameterListAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mColumnObjectTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mDisplayedPropertyNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mEditableAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mRunActionAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mSortPropertyNameAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration ;
  friend class DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_mEditable ;
  public: inline GGS_bool readProperty_mEditable (void) const {
    return mProperty_mEditable ;
  }

  public: GGS_string mProperty_mSortPropertyName ;
  public: inline GGS_string readProperty_mSortPropertyName (void) const {
    return mProperty_mSortPropertyName ;
  }

  public: GGS_string mProperty_mDisplayedPropertyName ;
  public: inline GGS_string readProperty_mDisplayedPropertyName (void) const {
    return mProperty_mDisplayedPropertyName ;
  }

  public: GGS_string mProperty_mColumnObjectTypeName ;
  public: inline GGS_string readProperty_mColumnObjectTypeName (void) const {
    return mProperty_mColumnObjectTypeName ;
  }

  public: GGS_string mProperty_mRunAction ;
  public: inline GGS_string readProperty_mRunAction (void) const {
    return mProperty_mRunAction ;
  }

  public: GGS__32_stringlist mProperty_mActualParameterList ;
  public: inline GGS__32_stringlist readProperty_mActualParameterList (void) const {
    return mProperty_mActualParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEditable (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEditable = inValue ;
  }

  public: inline void setter_setMSortPropertyName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSortPropertyName = inValue ;
  }

  public: inline void setter_setMDisplayedPropertyName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDisplayedPropertyName = inValue ;
  }

  public: inline void setter_setMColumnObjectTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mColumnObjectTypeName = inValue ;
  }

  public: inline void setter_setMRunAction (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRunAction = inValue ;
  }

  public: inline void setter_setMActualParameterList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActualParameterList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element (const GGS_bool & in_mEditable,
                                                                                    const GGS_string & in_mSortPropertyName,
                                                                                    const GGS_string & in_mDisplayedPropertyName,
                                                                                    const GGS_string & in_mColumnObjectTypeName,
                                                                                    const GGS_string & in_mRunAction,
                                                                                    const GGS__32_stringlist & in_mActualParameterList) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element & operator = (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element init_21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                        const class GGS_string & inOperand1,
                                                                                                                        const class GGS_string & inOperand2,
                                                                                                                        const class GGS_string & inOperand3,
                                                                                                                        const class GGS_string & inOperand4,
                                                                                                                        const class GGS__32_stringlist & inOperand5,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element class_func_new (const class GGS_bool & inOperand0,
                                                                                                                const class GGS_string & inOperand1,
                                                                                                                const class GGS_string & inOperand2,
                                                                                                                const class GGS_string & inOperand3,
                                                                                                                const class GGS_string & inOperand4,
                                                                                                                const class GGS__32_stringlist & inOperand5,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerSortedColumnListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration final {
  public: DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration (const class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & inList) ;

  public: ~ DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mColumnName (LOCATION_ARGS) const ;
  public: class GGS_propertyKind current_mSortPropertyKind (LOCATION_ARGS) const ;
  public: class GGS_string current_mObservablePropertyForSorting (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration (const DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration &) = delete ;
  private: DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration & operator = (const DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration final {
  public: UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration (const class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & inList)  ;

  public: ~ UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mColumnName (LOCATION_ARGS) const ;
  public: class GGS_propertyKind current_mSortPropertyKind (LOCATION_ARGS) const ;
  public: class GGS_string current_mObservablePropertyForSorting (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration (const UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration &) = delete ;
  private: UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration & operator = (const UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @autoLayoutTableViewControllerSortedColumnListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_autoLayoutTableViewControllerSortedColumnListForGeneration (void) = default ;

//--- Copy
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration &) = default ;
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & operator = (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration &) = default ;

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
  public : inline GenericArray <GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration subList (const int32_t inStart,
                                                                                   const int32_t inLength,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mColumnName,
                                                 const class GGS_propertyKind & in_mSortPropertyKind,
                                                 const class GGS_string & in_mObservablePropertyForSorting
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerSortedColumnListForGeneration init (Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerSortedColumnListForGeneration extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                                                const class GGS_propertyKind & inOperand1,
                                                                                                                const class GGS_string & inOperand2
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_propertyKind & inOperand1,
                                                    const class GGS_string & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutTableViewControllerSortedColumnListForGeneration add_operation (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & inOperand,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_propertyKind constinArgument1,
                                               class GGS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_propertyKind constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_propertyKind & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_propertyKind & outArgument1,
                                                class GGS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_propertyKind & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMColumnNameAtIndex (class GGS_string constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObservablePropertyForSortingAtIndex (class GGS_string constinArgument0,
                                                                                class GGS_uint constinArgument1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSortPropertyKindAtIndex (class GGS_propertyKind constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_propertyKind & outArgument1,
                                              class GGS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_propertyKind & outArgument1,
                                             class GGS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mColumnNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mObservablePropertyForSortingAtIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyKind getter_mSortPropertyKindAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration ;
  friend class DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mColumnName ;
  public: inline GGS_string readProperty_mColumnName (void) const {
    return mProperty_mColumnName ;
  }

  public: GGS_propertyKind mProperty_mSortPropertyKind ;
  public: inline GGS_propertyKind readProperty_mSortPropertyKind (void) const {
    return mProperty_mSortPropertyKind ;
  }

  public: GGS_string mProperty_mObservablePropertyForSorting ;
  public: inline GGS_string readProperty_mObservablePropertyForSorting (void) const {
    return mProperty_mObservablePropertyForSorting ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMColumnName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mColumnName = inValue ;
  }

  public: inline void setter_setMSortPropertyKind (const GGS_propertyKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSortPropertyKind = inValue ;
  }

  public: inline void setter_setMObservablePropertyForSorting (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObservablePropertyForSorting = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element (const GGS_string & in_mColumnName,
                                                                                     const GGS_propertyKind & in_mSortPropertyKind,
                                                                                     const GGS_string & in_mObservablePropertyForSorting) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element & operator = (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element init_21__21__21_ (const class GGS_string & inOperand0,
                                                                                                             const class GGS_propertyKind & inOperand1,
                                                                                                             const class GGS_string & inOperand2,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                                                 const class GGS_propertyKind & inOperand1,
                                                                                                                 const class GGS_string & inOperand2,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerGeneration : public GGS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_autoLayoutTableViewControllerGeneration (const class cPtr_autoLayoutTableViewControllerGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mOwnerName (void) const ;

  public: class GGS_lstring readProperty_mControllerName (void) const ;

  public: class GGS_string readProperty_mModelString (void) const ;

  public: class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration readProperty_mTableViewControllerBoundColumnListForGeneration (void) const ;

  public: class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration readProperty_mTableViewControllerSortedColumnListForGeneration (void) const ;

  public: class GGS_string readProperty_mModelTypeName (void) const ;

  public: class GGS_autoLayoutTableViewControllerModelKind readProperty_mTableViewControllerModelKind (void) const ;

  public: class GGS_string readProperty_mElementTypeName (void) const ;

  public: class GGS_bool readProperty_mElementTypeIsGraphic (void) const ;

  public: class GGS__32_stringlist readProperty_mAttributeListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerGeneration init_21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                           const class GGS_lstring & inOperand1,
                                                                                                           const class GGS_string & inOperand2,
                                                                                                           const class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & inOperand3,
                                                                                                           const class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & inOperand4,
                                                                                                           const class GGS_string & inOperand5,
                                                                                                           const class GGS_autoLayoutTableViewControllerModelKind & inOperand6,
                                                                                                           const class GGS_string & inOperand7,
                                                                                                           const class GGS_bool & inOperand8,
                                                                                                           const class GGS__32_stringlist & inOperand9,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerGeneration extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerGeneration class_func_new (const class GGS_string & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   const class GGS_string & inOperand2,
                                                                                   const class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & inOperand3,
                                                                                   const class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & inOperand4,
                                                                                   const class GGS_string & inOperand5,
                                                                                   const class GGS_autoLayoutTableViewControllerModelKind & inOperand6,
                                                                                   const class GGS_string & inOperand7,
                                                                                   const class GGS_bool & inOperand8,
                                                                                   const class GGS__32_stringlist & inOperand9,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutTableViewControllerGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @autoLayoutTableViewControllerGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutTableViewControllerGeneration : public cPtr_abstractFileGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void autoLayoutTableViewControllerGeneration_init_21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                     const class GGS_lstring & inOperand1,
                                                                                                     const class GGS_string & inOperand2,
                                                                                                     const class GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & inOperand3,
                                                                                                     const class GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & inOperand4,
                                                                                                     const class GGS_string & inOperand5,
                                                                                                     const class GGS_autoLayoutTableViewControllerModelKind & inOperand6,
                                                                                                     const class GGS_string & inOperand7,
                                                                                                     const class GGS_bool & inOperand8,
                                                                                                     const class GGS__32_stringlist & inOperand9,
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
  public: GGS_string mProperty_mOwnerName ;
  public: GGS_lstring mProperty_mControllerName ;
  public: GGS_string mProperty_mModelString ;
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration mProperty_mTableViewControllerBoundColumnListForGeneration ;
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration mProperty_mTableViewControllerSortedColumnListForGeneration ;
  public: GGS_string mProperty_mModelTypeName ;
  public: GGS_autoLayoutTableViewControllerModelKind mProperty_mTableViewControllerModelKind ;
  public: GGS_string mProperty_mElementTypeName ;
  public: GGS_bool mProperty_mElementTypeIsGraphic ;
  public: GGS__32_stringlist mProperty_mAttributeListForGeneration ;


//--- Default constructor
  public: cPtr_autoLayoutTableViewControllerGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_autoLayoutTableViewControllerGeneration (const GGS_string & in_mOwnerName,
                                                        const GGS_lstring & in_mControllerName,
                                                        const GGS_string & in_mModelString,
                                                        const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & in_mTableViewControllerBoundColumnListForGeneration,
                                                        const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & in_mTableViewControllerSortedColumnListForGeneration,
                                                        const GGS_string & in_mModelTypeName,
                                                        const GGS_autoLayoutTableViewControllerModelKind & in_mTableViewControllerModelKind,
                                                        const GGS_string & in_mElementTypeName,
                                                        const GGS_bool & in_mElementTypeIsGraphic,
                                                        const GGS__32_stringlist & in_mAttributeListForGeneration,
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
// Phase 1: @autoLayoutTableViewControllerGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerGeneration_2E_weak : public GGS_abstractFileGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_autoLayoutTableViewControllerGeneration_2E_weak (const class GGS_autoLayoutTableViewControllerGeneration & inSource) ;

  public: GGS_autoLayoutTableViewControllerGeneration_2E_weak & operator = (const class GGS_autoLayoutTableViewControllerGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_autoLayoutTableViewControllerGeneration_2E_weak init_nil (void) {
    GGS_autoLayoutTableViewControllerGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_autoLayoutTableViewControllerGeneration bang_autoLayoutTableViewControllerGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_autoLayoutTableViewControllerGeneration unwrappedValue (void) const ;

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
  public: static GGS_autoLayoutTableViewControllerGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutTableViewControllerGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutTableViewControllerGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration_2E_weak ;

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
// Phase 1: @classKind_2E_document struct
//--------------------------------------------------------------------------------------------------

class GGS_classKind_2E_document : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_rootEntityName ;
  public: inline GGS_lstring readProperty_rootEntityName (void) const {
    return mProperty_rootEntityName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_classKind_2E_document (void) ;

//--------------------------------- Property setters
  public: inline void setter_setRootEntityName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_rootEntityName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_classKind_2E_document (const GGS_lstring & in_rootEntityName) ;

//--------------------------------- Copy constructor
  public: GGS_classKind_2E_document (const GGS_classKind_2E_document & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_classKind_2E_document & operator = (const GGS_classKind_2E_document & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classKind_2E_document init_21_ (const class GGS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classKind_2E_document extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classKind_2E_document class_func_new (const class GGS_lstring & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind_2E_document ;

//--------------------------------------------------------------------------------------------------
// Phase 1: classKind.document? optional
//--------------------------------------------------------------------------------------------------

class GGS_classKind_2E_document_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_classKind_2E_document mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_classKind_2E_document_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_classKind_2E_document_3F_ (const GGS_classKind_2E_document & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_classKind_2E_document_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_classKind_2E_document unwrappedValue (void) const {
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
  public: static GGS_classKind_2E_document_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind_2E_document_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @classKind_2E_entity struct
//--------------------------------------------------------------------------------------------------

class GGS_classKind_2E_entity : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_superEntityName ;
  public: inline GGS_string readProperty_superEntityName (void) const {
    return mProperty_superEntityName ;
  }

  public: GGS_bool mProperty_isGraphic ;
  public: inline GGS_bool readProperty_isGraphic (void) const {
    return mProperty_isGraphic ;
  }

  public: GGS_bool mProperty_isAbstract ;
  public: inline GGS_bool readProperty_isAbstract (void) const {
    return mProperty_isAbstract ;
  }

  public: GGS_bool mProperty_handlingOpposite ;
  public: inline GGS_bool readProperty_handlingOpposite (void) const {
    return mProperty_handlingOpposite ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_classKind_2E_entity (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSuperEntityName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_superEntityName = inValue ;
  }

  public: inline void setter_setIsGraphic (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isGraphic = inValue ;
  }

  public: inline void setter_setIsAbstract (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isAbstract = inValue ;
  }

  public: inline void setter_setHandlingOpposite (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_handlingOpposite = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_classKind_2E_entity (const GGS_string & in_superEntityName,
                                   const GGS_bool & in_isGraphic,
                                   const GGS_bool & in_isAbstract,
                                   const GGS_bool & in_handlingOpposite) ;

//--------------------------------- Copy constructor
  public: GGS_classKind_2E_entity (const GGS_classKind_2E_entity & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_classKind_2E_entity & operator = (const GGS_classKind_2E_entity & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classKind_2E_entity init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                               const class GGS_bool & inOperand1,
                                                               const class GGS_bool & inOperand2,
                                                               const class GGS_bool & inOperand3,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classKind_2E_entity extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classKind_2E_entity class_func_new (const class GGS_string & inOperand0,
                                                               const class GGS_bool & inOperand1,
                                                               const class GGS_bool & inOperand2,
                                                               const class GGS_bool & inOperand3,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind_2E_entity ;

//--------------------------------------------------------------------------------------------------
// Phase 1: classKind.entity? optional
//--------------------------------------------------------------------------------------------------

class GGS_classKind_2E_entity_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_classKind_2E_entity mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_classKind_2E_entity_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_classKind_2E_entity_3F_ (const GGS_classKind_2E_entity & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_classKind_2E_entity_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_classKind_2E_entity unwrappedValue (void) const {
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
  public: static GGS_classKind_2E_entity_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind_2E_entity_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration prefKeyDefinitionCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_prefKeyDefinitionCode (const cPtr_propertyGeneration * inObject,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_declarationInSelectionControllerCode (const cPtr_propertyGeneration * inObject,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_bindPropertyInSelectionController (const cPtr_propertyGeneration * inObject,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@propertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_propertyDeclarationCode (const class cPtr_propertyGeneration * inObject,
                                                              const class GGS_bool constin_inPreferences,
                                                              const class GGS_bool constin_inGenerationDirectAccess,
                                                              const class GGS_stringset constin_inOverriddenTransients,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@propertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_configurationCode (const class cPtr_propertyGeneration * inObject,
                                                        const class GGS_bool constin_inPreferences,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@propertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_initCode (const class cPtr_propertyGeneration * inObject,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @actionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_actionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_actionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_actionMap_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_actionMap_2E_element (const GGS_actionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_actionMap_2E_element & operator = (const GGS_actionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actionMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_actionMap_2E_element extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_actionMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: actionMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_actionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_actionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_actionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_actionMap_2E_element_3F_ (const GGS_actionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_actionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_actionMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_actionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyAccessibility_2E_transient struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyAccessibility_2E_transient : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_isAbstract ;
  public: inline GGS_bool readProperty_isAbstract (void) const {
    return mProperty_isAbstract ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyAccessibility_2E_transient (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIsAbstract (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isAbstract = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyAccessibility_2E_transient (const GGS_bool & in_isAbstract) ;

//--------------------------------- Copy constructor
  public: GGS_propertyAccessibility_2E_transient (const GGS_propertyAccessibility_2E_transient & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyAccessibility_2E_transient & operator = (const GGS_propertyAccessibility_2E_transient & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyAccessibility_2E_transient init_21_ (const class GGS_bool & inOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyAccessibility_2E_transient extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyAccessibility_2E_transient class_func_new (const class GGS_bool & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyAccessibility_2E_transient ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyAccessibility.transient? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyAccessibility_2E_transient_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyAccessibility_2E_transient mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyAccessibility_2E_transient_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyAccessibility_2E_transient_3F_ (const GGS_propertyAccessibility_2E_transient & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyAccessibility_2E_transient_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyAccessibility_2E_transient unwrappedValue (void) const {
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
  public: static GGS_propertyAccessibility_2E_transient_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyAccessibility_2E_transient_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @atomicPropertyDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_atomicPropertyDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_atomicPropertyDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_atomicPropertyDeclarationAST (const class cPtr_atomicPropertyDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mPropertyTypeName (void) const ;
  public: void setProperty_mPropertyTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mPropertyName (void) const ;
  public: void setProperty_mPropertyName (const GGS_lstring & inValue) ;

  public: class GGS_abstractDefaultValue readProperty_mDefaultValue (void) const ;
  public: void setProperty_mDefaultValue (const GGS_abstractDefaultValue & inValue) ;

  public: class GGS_bool readProperty_generateResetMethod (void) const ;
  public: void setProperty_generateResetMethod (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_generateDirectRead (void) const ;

  public: class GGS_bool readProperty_generateDirectAccess (void) const ;

  public: class GGS_bool readProperty_standalone (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_atomicPropertyDeclarationAST init_21__21__21__21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone (const class GGS_lstring & inOperand0,
                                                                                                                                                           const class GGS_lstring & inOperand1,
                                                                                                                                                           const class GGS_lstring & inOperand2,
                                                                                                                                                           const class GGS_abstractDefaultValue & inOperand3,
                                                                                                                                                           const class GGS_bool & inOperand4,
                                                                                                                                                           const class GGS_bool & inOperand5,
                                                                                                                                                           const class GGS_bool & inOperand6,
                                                                                                                                                           const class GGS_bool & inOperand7,
                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_atomicPropertyDeclarationAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_atomicPropertyDeclarationAST class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_lstring & inOperand2,
                                                                        const class GGS_abstractDefaultValue & inOperand3,
                                                                        const class GGS_bool & inOperand4,
                                                                        const class GGS_bool & inOperand5,
                                                                        const class GGS_bool & inOperand6,
                                                                        const class GGS_bool & inOperand7,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_atomicPropertyDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @atomicPropertyDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_atomicPropertyDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void atomicPropertyDeclarationAST_init_21__21__21__21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone (const class GGS_lstring & inOperand0,
                                                                                                                                                     const class GGS_lstring & inOperand1,
                                                                                                                                                     const class GGS_lstring & inOperand2,
                                                                                                                                                     const class GGS_abstractDefaultValue & inOperand3,
                                                                                                                                                     const class GGS_bool & inOperand4,
                                                                                                                                                     const class GGS_bool & inOperand5,
                                                                                                                                                     const class GGS_bool & inOperand6,
                                                                                                                                                     const class GGS_bool & inOperand7,
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

//--- Properties
  public: GGS_lstring mProperty_mPropertyTypeName ;
  public: GGS_lstring mProperty_mPropertyName ;
  public: GGS_abstractDefaultValue mProperty_mDefaultValue ;
  public: GGS_bool mProperty_generateResetMethod ;
  public: GGS_bool mProperty_generateDirectRead ;
  public: GGS_bool mProperty_generateDirectAccess ;
  public: GGS_bool mProperty_standalone ;


//--- Default constructor
  public: cPtr_atomicPropertyDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_atomicPropertyDeclarationAST (const GGS_lstring & in_mClassName,
                                             const GGS_lstring & in_mPropertyTypeName,
                                             const GGS_lstring & in_mPropertyName,
                                             const GGS_abstractDefaultValue & in_mDefaultValue,
                                             const GGS_bool & in_generateResetMethod,
                                             const GGS_bool & in_generateDirectRead,
                                             const GGS_bool & in_generateDirectAccess,
                                             const GGS_bool & in_standalone,
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
// Phase 1: @atomicPropertyDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_atomicPropertyDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_atomicPropertyDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_atomicPropertyDeclarationAST_2E_weak (const class GGS_atomicPropertyDeclarationAST & inSource) ;

  public: GGS_atomicPropertyDeclarationAST_2E_weak & operator = (const class GGS_atomicPropertyDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_atomicPropertyDeclarationAST_2E_weak init_nil (void) {
    GGS_atomicPropertyDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_atomicPropertyDeclarationAST bang_atomicPropertyDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_atomicPropertyDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_atomicPropertyDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_atomicPropertyDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_atomicPropertyDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @atomicPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_atomicPropertyGeneration : public GGS_propertyGeneration {
//--------------------------------- Default constructor
  public: GGS_atomicPropertyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_atomicPropertyGeneration (const class cPtr_atomicPropertyGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_generateResetMethod (void) const ;

  public: class GGS_bool readProperty_generateDirectRead (void) const ;

  public: class GGS_bool readProperty_generateDirectAccess (void) const ;

  public: class GGS_bool readProperty_standalone (void) const ;

  public: class GGS_typeKind readProperty_mType (void) const ;

  public: class GGS_bool readProperty_mIsProxy (void) const ;

  public: class GGS_string readProperty_mDefaultValueInSwift (void) const ;

  public: class GGS_bool readProperty_mInPreferences (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_atomicPropertyGeneration init_21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                                                                           const class GGS_bool & inOperand1,
                                                                                                                                                           const class GGS_bool & inOperand2,
                                                                                                                                                           const class GGS_bool & inOperand3,
                                                                                                                                                           const class GGS_bool & inOperand4,
                                                                                                                                                           const class GGS_typeKind & inOperand5,
                                                                                                                                                           const class GGS_bool & inOperand6,
                                                                                                                                                           const class GGS_string & inOperand7,
                                                                                                                                                           const class GGS_bool & inOperand8,
                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_atomicPropertyGeneration extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_atomicPropertyGeneration class_func_new (const class GGS_string & inOperand0,
                                                                    const class GGS_bool & inOperand1,
                                                                    const class GGS_bool & inOperand2,
                                                                    const class GGS_bool & inOperand3,
                                                                    const class GGS_bool & inOperand4,
                                                                    const class GGS_typeKind & inOperand5,
                                                                    const class GGS_bool & inOperand6,
                                                                    const class GGS_string & inOperand7,
                                                                    const class GGS_bool & inOperand8,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_atomicPropertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicPropertyGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @atomicPropertyGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_atomicPropertyGeneration : public cPtr_propertyGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void atomicPropertyGeneration_init_21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                                                                     const class GGS_bool & inOperand1,
                                                                                                                                                     const class GGS_bool & inOperand2,
                                                                                                                                                     const class GGS_bool & inOperand3,
                                                                                                                                                     const class GGS_bool & inOperand4,
                                                                                                                                                     const class GGS_typeKind & inOperand5,
                                                                                                                                                     const class GGS_bool & inOperand6,
                                                                                                                                                     const class GGS_string & inOperand7,
                                                                                                                                                     const class GGS_bool & inOperand8,
                                                                                                                                                     Compiler * inCompiler) ;


//--- Extension getter bindPropertyInSelectionController
  public: virtual class GGS_string getter_bindPropertyInSelectionController (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter configurationCode
  public: virtual class GGS_string getter_configurationCode (const class GGS_bool inPreferences,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter declarationInSelectionControllerCode
  public: virtual class GGS_string getter_declarationInSelectionControllerCode (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter initCode
  public: virtual class GGS_string getter_initCode (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter prefKeyDefinitionCode
  public: virtual class GGS_string getter_prefKeyDefinitionCode (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter propertyDeclarationCode
  public: virtual class GGS_string getter_propertyDeclarationCode (const class GGS_bool inPreferences,
           const class GGS_bool inGenerationDirectAccess,
           const class GGS_stringset inOverriddenTransients,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_bool mProperty_generateResetMethod ;
  public: GGS_bool mProperty_generateDirectRead ;
  public: GGS_bool mProperty_generateDirectAccess ;
  public: GGS_bool mProperty_standalone ;
  public: GGS_typeKind mProperty_mType ;
  public: GGS_bool mProperty_mIsProxy ;
  public: GGS_string mProperty_mDefaultValueInSwift ;
  public: GGS_bool mProperty_mInPreferences ;


//--- Default constructor
  public: cPtr_atomicPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_atomicPropertyGeneration (const GGS_string & in_mPropertyName,
                                         const GGS_bool & in_generateResetMethod,
                                         const GGS_bool & in_generateDirectRead,
                                         const GGS_bool & in_generateDirectAccess,
                                         const GGS_bool & in_standalone,
                                         const GGS_typeKind & in_mType,
                                         const GGS_bool & in_mIsProxy,
                                         const GGS_string & in_mDefaultValueInSwift,
                                         const GGS_bool & in_mInPreferences,
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
// Phase 1: @atomicPropertyGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_atomicPropertyGeneration_2E_weak : public GGS_propertyGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_atomicPropertyGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_atomicPropertyGeneration_2E_weak (const class GGS_atomicPropertyGeneration & inSource) ;

  public: GGS_atomicPropertyGeneration_2E_weak & operator = (const class GGS_atomicPropertyGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_atomicPropertyGeneration_2E_weak init_nil (void) {
    GGS_atomicPropertyGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_atomicPropertyGeneration bang_atomicPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_atomicPropertyGeneration unwrappedValue (void) const ;

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
  public: static GGS_atomicPropertyGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_atomicPropertyGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_atomicPropertyGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicPropertyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @atomicPropertyGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_atomicPropertyGenerationList final {
  public: DownEnumerator_atomicPropertyGenerationList (const class GGS_atomicPropertyGenerationList & inList) ;

  public: ~ DownEnumerator_atomicPropertyGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_atomicPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_atomicPropertyGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_atomicPropertyGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_atomicPropertyGenerationList (const DownEnumerator_atomicPropertyGenerationList &) = delete ;
  private: DownEnumerator_atomicPropertyGenerationList & operator = (const DownEnumerator_atomicPropertyGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_atomicPropertyGenerationList final {
  public: UpEnumerator_atomicPropertyGenerationList (const class GGS_atomicPropertyGenerationList & inList)  ;

  public: ~ UpEnumerator_atomicPropertyGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_atomicPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_atomicPropertyGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_atomicPropertyGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_atomicPropertyGenerationList (const UpEnumerator_atomicPropertyGenerationList &) = delete ;
  private: UpEnumerator_atomicPropertyGenerationList & operator = (const UpEnumerator_atomicPropertyGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @atomicPropertyGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_atomicPropertyGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_atomicPropertyGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_atomicPropertyGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_atomicPropertyGenerationList (void) = default ;

//--- Copy
  public: GGS_atomicPropertyGenerationList (const GGS_atomicPropertyGenerationList &) = default ;
  public: GGS_atomicPropertyGenerationList & operator = (const GGS_atomicPropertyGenerationList &) = default ;

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
  public : inline GenericArray <GGS_atomicPropertyGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_atomicPropertyGenerationList subList (const int32_t inStart,
                                                     const int32_t inLength,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_atomicPropertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_atomicPropertyGeneration & in_mProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_atomicPropertyGenerationList init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_atomicPropertyGenerationList extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_atomicPropertyGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_atomicPropertyGenerationList class_func_listWithValue (const class GGS_atomicPropertyGeneration & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_atomicPropertyGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_atomicPropertyGeneration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_atomicPropertyGenerationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_atomicPropertyGenerationList add_operation (const GGS_atomicPropertyGenerationList & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_atomicPropertyGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_atomicPropertyGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_atomicPropertyGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_atomicPropertyGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_atomicPropertyGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GGS_atomicPropertyGeneration constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_atomicPropertyGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_atomicPropertyGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_atomicPropertyGeneration getter_mPropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_atomicPropertyGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_atomicPropertyGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_atomicPropertyGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_atomicPropertyGenerationList ;
  friend class DownEnumerator_atomicPropertyGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicPropertyGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @atomicPropertyGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_atomicPropertyGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_atomicPropertyGeneration mProperty_mProperty ;
  public: inline GGS_atomicPropertyGeneration readProperty_mProperty (void) const {
    return mProperty_mProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_atomicPropertyGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProperty (const GGS_atomicPropertyGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProperty = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_atomicPropertyGenerationList_2E_element (const GGS_atomicPropertyGeneration & in_mProperty) ;

//--------------------------------- Copy constructor
  public: GGS_atomicPropertyGenerationList_2E_element (const GGS_atomicPropertyGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_atomicPropertyGenerationList_2E_element & operator = (const GGS_atomicPropertyGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_atomicPropertyGenerationList_2E_element init_21_ (const class GGS_atomicPropertyGeneration & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_atomicPropertyGenerationList_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_atomicPropertyGenerationList_2E_element class_func_new (const class GGS_atomicPropertyGeneration & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicPropertyGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
//   enum proxyKind
//--------------------------------------------------------------------------------------------------

class GGS_proxyKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_proxyKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_propertyProxy,
    enum_toManyProxy
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_proxyKind extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_proxyKind class_func_propertyProxy (LOCATION_ARGS) ;

  public: static class GGS_proxyKind class_func_toManyProxy (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_proxyKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPropertyProxy (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isToManyProxy (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_proxyKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @proxyDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_proxyDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_proxyDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_proxyDeclarationAST (const class cPtr_proxyDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_proxyKind readProperty_mProxyKind (void) const ;
  public: void setProperty_mProxyKind (const GGS_proxyKind & inValue) ;

  public: class GGS_lstring readProperty_mProxyTypeName (void) const ;
  public: void setProperty_mProxyTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mProxyName (void) const ;
  public: void setProperty_mProxyName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mToOneRelationshipName (void) const ;
  public: void setProperty_mToOneRelationshipName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mPropertyName (void) const ;
  public: void setProperty_mPropertyName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_proxyDeclarationAST init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                       const class GGS_proxyKind & inOperand1,
                                                                       const class GGS_lstring & inOperand2,
                                                                       const class GGS_lstring & inOperand3,
                                                                       const class GGS_lstring & inOperand4,
                                                                       const class GGS_lstring & inOperand5,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_proxyDeclarationAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_proxyDeclarationAST class_func_new (const class GGS_lstring & inOperand0,
                                                               const class GGS_proxyKind & inOperand1,
                                                               const class GGS_lstring & inOperand2,
                                                               const class GGS_lstring & inOperand3,
                                                               const class GGS_lstring & inOperand4,
                                                               const class GGS_lstring & inOperand5,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_proxyDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_proxyDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @proxyDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_proxyDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void proxyDeclarationAST_init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_proxyKind & inOperand1,
                                                                 const class GGS_lstring & inOperand2,
                                                                 const class GGS_lstring & inOperand3,
                                                                 const class GGS_lstring & inOperand4,
                                                                 const class GGS_lstring & inOperand5,
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

//--- Extension method secondAnalysisPhase
  public: virtual void method_secondAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_proxyKind mProperty_mProxyKind ;
  public: GGS_lstring mProperty_mProxyTypeName ;
  public: GGS_lstring mProperty_mProxyName ;
  public: GGS_lstring mProperty_mToOneRelationshipName ;
  public: GGS_lstring mProperty_mPropertyName ;


//--- Default constructor
  public: cPtr_proxyDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_proxyDeclarationAST (const GGS_lstring & in_mClassName,
                                    const GGS_proxyKind & in_mProxyKind,
                                    const GGS_lstring & in_mProxyTypeName,
                                    const GGS_lstring & in_mProxyName,
                                    const GGS_lstring & in_mToOneRelationshipName,
                                    const GGS_lstring & in_mPropertyName,
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
// Phase 1: @proxyDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_proxyDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_proxyDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_proxyDeclarationAST_2E_weak (const class GGS_proxyDeclarationAST & inSource) ;

  public: GGS_proxyDeclarationAST_2E_weak & operator = (const class GGS_proxyDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_proxyDeclarationAST_2E_weak init_nil (void) {
    GGS_proxyDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_proxyDeclarationAST bang_proxyDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_proxyDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_proxyDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_proxyDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_proxyDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_proxyDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyProxyGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_toManyProxyGeneration : public GGS_propertyGeneration {
//--------------------------------- Default constructor
  public: GGS_toManyProxyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_toManyProxyGeneration (const class cPtr_toManyProxyGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_proxyKind readProperty_mProxyKind (void) const ;
  public: void setProperty_mProxyKind (const GGS_proxyKind & inValue) ;

  public: class GGS_string readProperty_mToManyTypeName (void) const ;
  public: void setProperty_mToManyTypeName (const GGS_string & inValue) ;

  public: class GGS_string readProperty_mObservedRelationshipName (void) const ;
  public: void setProperty_mObservedRelationshipName (const GGS_string & inValue) ;

  public: class GGS_string readProperty_mObservedPropertyName (void) const ;
  public: void setProperty_mObservedPropertyName (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toManyProxyGeneration init_21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                     const class GGS_proxyKind & inOperand1,
                                                                     const class GGS_string & inOperand2,
                                                                     const class GGS_string & inOperand3,
                                                                     const class GGS_string & inOperand4,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toManyProxyGeneration extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyProxyGeneration class_func_new (const class GGS_string & inOperand0,
                                                                 const class GGS_proxyKind & inOperand1,
                                                                 const class GGS_string & inOperand2,
                                                                 const class GGS_string & inOperand3,
                                                                 const class GGS_string & inOperand4,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toManyProxyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyProxyGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @toManyProxyGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_toManyProxyGeneration : public cPtr_propertyGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void toManyProxyGeneration_init_21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                               const class GGS_proxyKind & inOperand1,
                                                               const class GGS_string & inOperand2,
                                                               const class GGS_string & inOperand3,
                                                               const class GGS_string & inOperand4,
                                                               Compiler * inCompiler) ;


//--- Extension getter bindPropertyInSelectionController
  public: virtual class GGS_string getter_bindPropertyInSelectionController (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter configurationCode
  public: virtual class GGS_string getter_configurationCode (const class GGS_bool inPreferences,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter declarationInSelectionControllerCode
  public: virtual class GGS_string getter_declarationInSelectionControllerCode (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter initCode
  public: virtual class GGS_string getter_initCode (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter propertyDeclarationCode
  public: virtual class GGS_string getter_propertyDeclarationCode (const class GGS_bool inPreferences,
           const class GGS_bool inGenerationDirectAccess,
           const class GGS_stringset inOverriddenTransients,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_proxyKind mProperty_mProxyKind ;
  public: GGS_string mProperty_mToManyTypeName ;
  public: GGS_string mProperty_mObservedRelationshipName ;
  public: GGS_string mProperty_mObservedPropertyName ;


//--- Default constructor
  public: cPtr_toManyProxyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_toManyProxyGeneration (const GGS_string & in_mPropertyName,
                                      const GGS_proxyKind & in_mProxyKind,
                                      const GGS_string & in_mToManyTypeName,
                                      const GGS_string & in_mObservedRelationshipName,
                                      const GGS_string & in_mObservedPropertyName,
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
// Phase 1: @toManyProxyGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_toManyProxyGeneration_2E_weak : public GGS_propertyGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_toManyProxyGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_toManyProxyGeneration_2E_weak (const class GGS_toManyProxyGeneration & inSource) ;

  public: GGS_toManyProxyGeneration_2E_weak & operator = (const class GGS_toManyProxyGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_toManyProxyGeneration_2E_weak init_nil (void) {
    GGS_toManyProxyGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_toManyProxyGeneration bang_toManyProxyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_toManyProxyGeneration unwrappedValue (void) const ;

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
  public: static GGS_toManyProxyGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyProxyGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toManyProxyGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyProxyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyProxyGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_toManyProxyGenerationList final {
  public: DownEnumerator_toManyProxyGenerationList (const class GGS_toManyProxyGenerationList & inList) ;

  public: ~ DownEnumerator_toManyProxyGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_toManyProxyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_toManyProxyGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_toManyProxyGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_toManyProxyGenerationList (const DownEnumerator_toManyProxyGenerationList &) = delete ;
  private: DownEnumerator_toManyProxyGenerationList & operator = (const DownEnumerator_toManyProxyGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_toManyProxyGenerationList final {
  public: UpEnumerator_toManyProxyGenerationList (const class GGS_toManyProxyGenerationList & inList)  ;

  public: ~ UpEnumerator_toManyProxyGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_toManyProxyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_toManyProxyGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_toManyProxyGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_toManyProxyGenerationList (const UpEnumerator_toManyProxyGenerationList &) = delete ;
  private: UpEnumerator_toManyProxyGenerationList & operator = (const UpEnumerator_toManyProxyGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @toManyProxyGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_toManyProxyGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_toManyProxyGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_toManyProxyGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_toManyProxyGenerationList (void) = default ;

//--- Copy
  public: GGS_toManyProxyGenerationList (const GGS_toManyProxyGenerationList &) = default ;
  public: GGS_toManyProxyGenerationList & operator = (const GGS_toManyProxyGenerationList &) = default ;

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
  public : inline GenericArray <GGS_toManyProxyGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_toManyProxyGenerationList subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_toManyProxyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_toManyProxyGeneration & in_mProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toManyProxyGenerationList init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toManyProxyGenerationList extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyProxyGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_toManyProxyGenerationList class_func_listWithValue (const class GGS_toManyProxyGeneration & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_toManyProxyGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_toManyProxyGeneration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_toManyProxyGenerationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_toManyProxyGenerationList add_operation (const GGS_toManyProxyGenerationList & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_toManyProxyGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_toManyProxyGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_toManyProxyGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_toManyProxyGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_toManyProxyGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GGS_toManyProxyGeneration constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_toManyProxyGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_toManyProxyGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_toManyProxyGeneration getter_mPropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_toManyProxyGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_toManyProxyGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_toManyProxyGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_toManyProxyGenerationList ;
  friend class DownEnumerator_toManyProxyGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyProxyGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toManyProxyGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_toManyProxyGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_toManyProxyGeneration mProperty_mProperty ;
  public: inline GGS_toManyProxyGeneration readProperty_mProperty (void) const {
    return mProperty_mProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_toManyProxyGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProperty (const GGS_toManyProxyGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProperty = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_toManyProxyGenerationList_2E_element (const GGS_toManyProxyGeneration & in_mProperty) ;

//--------------------------------- Copy constructor
  public: GGS_toManyProxyGenerationList_2E_element (const GGS_toManyProxyGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_toManyProxyGenerationList_2E_element & operator = (const GGS_toManyProxyGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toManyProxyGenerationList_2E_element init_21_ (const class GGS_toManyProxyGeneration & inOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toManyProxyGenerationList_2E_element extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_toManyProxyGenerationList_2E_element class_func_new (const class GGS_toManyProxyGeneration & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyProxyGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @atomicProxyGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_atomicProxyGeneration : public GGS_propertyGeneration {
//--------------------------------- Default constructor
  public: GGS_atomicProxyGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_atomicProxyGeneration (const class cPtr_atomicProxyGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_proxyKind readProperty_mProxyKind (void) const ;
  public: void setProperty_mProxyKind (const GGS_proxyKind & inValue) ;

  public: class GGS_typeKind readProperty_mType (void) const ;
  public: void setProperty_mType (const GGS_typeKind & inValue) ;

  public: class GGS_string readProperty_mObservedRelationshipName (void) const ;
  public: void setProperty_mObservedRelationshipName (const GGS_string & inValue) ;

  public: class GGS_string readProperty_mObservedPropertyName (void) const ;
  public: void setProperty_mObservedPropertyName (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_atomicProxyGeneration init_21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                     const class GGS_proxyKind & inOperand1,
                                                                     const class GGS_typeKind & inOperand2,
                                                                     const class GGS_string & inOperand3,
                                                                     const class GGS_string & inOperand4,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_atomicProxyGeneration extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_atomicProxyGeneration class_func_new (const class GGS_string & inOperand0,
                                                                 const class GGS_proxyKind & inOperand1,
                                                                 const class GGS_typeKind & inOperand2,
                                                                 const class GGS_string & inOperand3,
                                                                 const class GGS_string & inOperand4,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_atomicProxyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicProxyGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @atomicProxyGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_atomicProxyGeneration : public cPtr_propertyGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void atomicProxyGeneration_init_21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                               const class GGS_proxyKind & inOperand1,
                                                               const class GGS_typeKind & inOperand2,
                                                               const class GGS_string & inOperand3,
                                                               const class GGS_string & inOperand4,
                                                               Compiler * inCompiler) ;


//--- Extension getter bindPropertyInSelectionController
  public: virtual class GGS_string getter_bindPropertyInSelectionController (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter configurationCode
  public: virtual class GGS_string getter_configurationCode (const class GGS_bool inPreferences,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter declarationInSelectionControllerCode
  public: virtual class GGS_string getter_declarationInSelectionControllerCode (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter initCode
  public: virtual class GGS_string getter_initCode (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter propertyDeclarationCode
  public: virtual class GGS_string getter_propertyDeclarationCode (const class GGS_bool inPreferences,
           const class GGS_bool inGenerationDirectAccess,
           const class GGS_stringset inOverriddenTransients,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_proxyKind mProperty_mProxyKind ;
  public: GGS_typeKind mProperty_mType ;
  public: GGS_string mProperty_mObservedRelationshipName ;
  public: GGS_string mProperty_mObservedPropertyName ;


//--- Default constructor
  public: cPtr_atomicProxyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_atomicProxyGeneration (const GGS_string & in_mPropertyName,
                                      const GGS_proxyKind & in_mProxyKind,
                                      const GGS_typeKind & in_mType,
                                      const GGS_string & in_mObservedRelationshipName,
                                      const GGS_string & in_mObservedPropertyName,
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
// Phase 1: @atomicProxyGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_atomicProxyGeneration_2E_weak : public GGS_propertyGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_atomicProxyGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_atomicProxyGeneration_2E_weak (const class GGS_atomicProxyGeneration & inSource) ;

  public: GGS_atomicProxyGeneration_2E_weak & operator = (const class GGS_atomicProxyGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_atomicProxyGeneration_2E_weak init_nil (void) {
    GGS_atomicProxyGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_atomicProxyGeneration bang_atomicProxyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_atomicProxyGeneration unwrappedValue (void) const ;

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
  public: static GGS_atomicProxyGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_atomicProxyGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_atomicProxyGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicProxyGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @atomicProxyGenerationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_atomicProxyGenerationList final {
  public: DownEnumerator_atomicProxyGenerationList (const class GGS_atomicProxyGenerationList & inList) ;

  public: ~ DownEnumerator_atomicProxyGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_atomicProxyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_atomicProxyGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_atomicProxyGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_atomicProxyGenerationList (const DownEnumerator_atomicProxyGenerationList &) = delete ;
  private: DownEnumerator_atomicProxyGenerationList & operator = (const DownEnumerator_atomicProxyGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_atomicProxyGenerationList final {
  public: UpEnumerator_atomicProxyGenerationList (const class GGS_atomicProxyGenerationList & inList)  ;

  public: ~ UpEnumerator_atomicProxyGenerationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_atomicProxyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_atomicProxyGenerationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_atomicProxyGenerationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_atomicProxyGenerationList (const UpEnumerator_atomicProxyGenerationList &) = delete ;
  private: UpEnumerator_atomicProxyGenerationList & operator = (const UpEnumerator_atomicProxyGenerationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @atomicProxyGenerationList list
//--------------------------------------------------------------------------------------------------

class GGS_atomicProxyGenerationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_atomicProxyGenerationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_atomicProxyGenerationList (void) ;

//--- Destructor
  public: virtual ~ GGS_atomicProxyGenerationList (void) = default ;

//--- Copy
  public: GGS_atomicProxyGenerationList (const GGS_atomicProxyGenerationList &) = default ;
  public: GGS_atomicProxyGenerationList & operator = (const GGS_atomicProxyGenerationList &) = default ;

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
  public : inline GenericArray <GGS_atomicProxyGenerationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_atomicProxyGenerationList subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_atomicProxyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_atomicProxyGeneration & in_mProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_atomicProxyGenerationList init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_atomicProxyGenerationList extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_atomicProxyGenerationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_atomicProxyGenerationList class_func_listWithValue (const class GGS_atomicProxyGeneration & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_atomicProxyGenerationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_atomicProxyGeneration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_atomicProxyGenerationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_atomicProxyGenerationList add_operation (const GGS_atomicProxyGenerationList & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_atomicProxyGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_atomicProxyGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_atomicProxyGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_atomicProxyGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_atomicProxyGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GGS_atomicProxyGeneration constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_atomicProxyGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_atomicProxyGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_atomicProxyGeneration getter_mPropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_atomicProxyGenerationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_atomicProxyGenerationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_atomicProxyGenerationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_atomicProxyGenerationList ;
  friend class DownEnumerator_atomicProxyGenerationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicProxyGenerationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @atomicProxyGenerationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_atomicProxyGenerationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_atomicProxyGeneration mProperty_mProperty ;
  public: inline GGS_atomicProxyGeneration readProperty_mProperty (void) const {
    return mProperty_mProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_atomicProxyGenerationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProperty (const GGS_atomicProxyGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProperty = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_atomicProxyGenerationList_2E_element (const GGS_atomicProxyGeneration & in_mProperty) ;

//--------------------------------- Copy constructor
  public: GGS_atomicProxyGenerationList_2E_element (const GGS_atomicProxyGenerationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_atomicProxyGenerationList_2E_element & operator = (const GGS_atomicProxyGenerationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_atomicProxyGenerationList_2E_element init_21_ (const class GGS_atomicProxyGeneration & inOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_atomicProxyGenerationList_2E_element extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_atomicProxyGenerationList_2E_element class_func_new (const class GGS_atomicProxyGeneration & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicProxyGenerationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractDefaultValue_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractDefaultValue_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractDefaultValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractDefaultValue_2E_weak (const class GGS_abstractDefaultValue & inSource) ;

  public: GGS_abstractDefaultValue_2E_weak & operator = (const class GGS_abstractDefaultValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractDefaultValue_2E_weak init_nil (void) {
    GGS_abstractDefaultValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractDefaultValue bang_abstractDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractDefaultValue unwrappedValue (void) const ;

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
  public: static GGS_abstractDefaultValue_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractDefaultValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractDefaultValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractDefaultValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @boolAsDefaultValue reference class
//--------------------------------------------------------------------------------------------------

class GGS_boolAsDefaultValue : public GGS_abstractDefaultValue {
//--------------------------------- Default constructor
  public: GGS_boolAsDefaultValue (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_boolAsDefaultValue (const class cPtr_boolAsDefaultValue * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lbool readProperty_mValue (void) const ;
  public: void setProperty_mValue (const GGS_lbool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_boolAsDefaultValue init_21_ (const class GGS_lbool & inOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_boolAsDefaultValue extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_boolAsDefaultValue class_func_new (const class GGS_lbool & inOperand0,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolAsDefaultValue ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @boolAsDefaultValue class
//--------------------------------------------------------------------------------------------------

class cPtr_boolAsDefaultValue : public cPtr_abstractDefaultValue {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void boolAsDefaultValue_init_21_ (const class GGS_lbool & inOperand0,
                                            Compiler * inCompiler) ;


//--- Extension method analyzeDefaultValueType
  public: virtual void method_analyzeDefaultValueType (const class GGS_typeKindList arg_inAttributeActualTypeList,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           class GGS_string & arg_outSwiftDefaultValueAsString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lbool mProperty_mValue ;


//--- Default constructor
  public: cPtr_boolAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_boolAsDefaultValue (const GGS_lbool & in_mValue,
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
// Phase 1: @boolAsDefaultValue_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_boolAsDefaultValue_2E_weak : public GGS_abstractDefaultValue_2E_weak {
//--------------------------------- Default constructor
  public: GGS_boolAsDefaultValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_boolAsDefaultValue_2E_weak (const class GGS_boolAsDefaultValue & inSource) ;

  public: GGS_boolAsDefaultValue_2E_weak & operator = (const class GGS_boolAsDefaultValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_boolAsDefaultValue_2E_weak init_nil (void) {
    GGS_boolAsDefaultValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_boolAsDefaultValue bang_boolAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_boolAsDefaultValue unwrappedValue (void) const ;

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
  public: static GGS_boolAsDefaultValue_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_boolAsDefaultValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolAsDefaultValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolAsDefaultValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @doubleAsDefaultValue reference class
//--------------------------------------------------------------------------------------------------

class GGS_doubleAsDefaultValue : public GGS_abstractDefaultValue {
//--------------------------------- Default constructor
  public: GGS_doubleAsDefaultValue (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_doubleAsDefaultValue (const class cPtr_doubleAsDefaultValue * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_ldouble readProperty_mValue (void) const ;
  public: void setProperty_mValue (const GGS_ldouble & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_doubleAsDefaultValue init_21_ (const class GGS_ldouble & inOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_doubleAsDefaultValue extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_doubleAsDefaultValue class_func_new (const class GGS_ldouble & inOperand0,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_doubleAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_doubleAsDefaultValue ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @doubleAsDefaultValue class
//--------------------------------------------------------------------------------------------------

class cPtr_doubleAsDefaultValue : public cPtr_abstractDefaultValue {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void doubleAsDefaultValue_init_21_ (const class GGS_ldouble & inOperand0,
                                              Compiler * inCompiler) ;


//--- Extension method analyzeDefaultValueType
  public: virtual void method_analyzeDefaultValueType (const class GGS_typeKindList arg_inAttributeActualTypeList,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           class GGS_string & arg_outSwiftDefaultValueAsString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_ldouble mProperty_mValue ;


//--- Default constructor
  public: cPtr_doubleAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_doubleAsDefaultValue (const GGS_ldouble & in_mValue,
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
// Phase 1: @doubleAsDefaultValue_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_doubleAsDefaultValue_2E_weak : public GGS_abstractDefaultValue_2E_weak {
//--------------------------------- Default constructor
  public: GGS_doubleAsDefaultValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_doubleAsDefaultValue_2E_weak (const class GGS_doubleAsDefaultValue & inSource) ;

  public: GGS_doubleAsDefaultValue_2E_weak & operator = (const class GGS_doubleAsDefaultValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_doubleAsDefaultValue_2E_weak init_nil (void) {
    GGS_doubleAsDefaultValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_doubleAsDefaultValue bang_doubleAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_doubleAsDefaultValue unwrappedValue (void) const ;

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
  public: static GGS_doubleAsDefaultValue_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_doubleAsDefaultValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_doubleAsDefaultValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_doubleAsDefaultValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @integerAsDefaultValue reference class
//--------------------------------------------------------------------------------------------------

class GGS_integerAsDefaultValue : public GGS_abstractDefaultValue {
//--------------------------------- Default constructor
  public: GGS_integerAsDefaultValue (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_integerAsDefaultValue (const class cPtr_integerAsDefaultValue * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mValue (void) const ;
  public: void setProperty_mValue (const GGS_luint & inValue) ;

  public: class GGS_bool readProperty_mNegative (void) const ;
  public: void setProperty_mNegative (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_integerAsDefaultValue init_21__21_ (const class GGS_luint & inOperand0,
                                                         const class GGS_bool & inOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_integerAsDefaultValue extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_integerAsDefaultValue class_func_new (const class GGS_luint & inOperand0,
                                                                 const class GGS_bool & inOperand1,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_integerAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerAsDefaultValue ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @integerAsDefaultValue class
//--------------------------------------------------------------------------------------------------

class cPtr_integerAsDefaultValue : public cPtr_abstractDefaultValue {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void integerAsDefaultValue_init_21__21_ (const class GGS_luint & inOperand0,
                                                   const class GGS_bool & inOperand1,
                                                   Compiler * inCompiler) ;


//--- Extension method analyzeDefaultValueType
  public: virtual void method_analyzeDefaultValueType (const class GGS_typeKindList arg_inAttributeActualTypeList,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           class GGS_string & arg_outSwiftDefaultValueAsString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mValue ;
  public: GGS_bool mProperty_mNegative ;


//--- Default constructor
  public: cPtr_integerAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_integerAsDefaultValue (const GGS_luint & in_mValue,
                                      const GGS_bool & in_mNegative,
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
// Phase 1: @integerAsDefaultValue_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_integerAsDefaultValue_2E_weak : public GGS_abstractDefaultValue_2E_weak {
//--------------------------------- Default constructor
  public: GGS_integerAsDefaultValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_integerAsDefaultValue_2E_weak (const class GGS_integerAsDefaultValue & inSource) ;

  public: GGS_integerAsDefaultValue_2E_weak & operator = (const class GGS_integerAsDefaultValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_integerAsDefaultValue_2E_weak init_nil (void) {
    GGS_integerAsDefaultValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_integerAsDefaultValue bang_integerAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_integerAsDefaultValue unwrappedValue (void) const ;

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
  public: static GGS_integerAsDefaultValue_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_integerAsDefaultValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_integerAsDefaultValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerAsDefaultValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @stringAsDefaultValue reference class
//--------------------------------------------------------------------------------------------------

class GGS_stringAsDefaultValue : public GGS_abstractDefaultValue {
//--------------------------------- Default constructor
  public: GGS_stringAsDefaultValue (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_stringAsDefaultValue (const class cPtr_stringAsDefaultValue * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mValue (void) const ;
  public: void setProperty_mValue (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_stringAsDefaultValue init_21_ (const class GGS_lstring & inOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_stringAsDefaultValue extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_stringAsDefaultValue class_func_new (const class GGS_lstring & inOperand0,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_stringAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_stringAsDefaultValue ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @stringAsDefaultValue class
//--------------------------------------------------------------------------------------------------

class cPtr_stringAsDefaultValue : public cPtr_abstractDefaultValue {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void stringAsDefaultValue_init_21_ (const class GGS_lstring & inOperand0,
                                              Compiler * inCompiler) ;


//--- Extension method analyzeDefaultValueType
  public: virtual void method_analyzeDefaultValueType (const class GGS_typeKindList arg_inAttributeActualTypeList,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           class GGS_string & arg_outSwiftDefaultValueAsString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mValue ;


//--- Default constructor
  public: cPtr_stringAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_stringAsDefaultValue (const GGS_lstring & in_mValue,
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
// Phase 1: @stringAsDefaultValue_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_stringAsDefaultValue_2E_weak : public GGS_abstractDefaultValue_2E_weak {
//--------------------------------- Default constructor
  public: GGS_stringAsDefaultValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_stringAsDefaultValue_2E_weak (const class GGS_stringAsDefaultValue & inSource) ;

  public: GGS_stringAsDefaultValue_2E_weak & operator = (const class GGS_stringAsDefaultValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_stringAsDefaultValue_2E_weak init_nil (void) {
    GGS_stringAsDefaultValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_stringAsDefaultValue bang_stringAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_stringAsDefaultValue unwrappedValue (void) const ;

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
  public: static GGS_stringAsDefaultValue_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_stringAsDefaultValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_stringAsDefaultValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_stringAsDefaultValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @identifierAsDefaultValue reference class
//--------------------------------------------------------------------------------------------------

class GGS_identifierAsDefaultValue : public GGS_abstractDefaultValue {
//--------------------------------- Default constructor
  public: GGS_identifierAsDefaultValue (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_identifierAsDefaultValue (const class cPtr_identifierAsDefaultValue * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mValue (void) const ;
  public: void setProperty_mValue (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_identifierAsDefaultValue init_21_ (const class GGS_lstring & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_identifierAsDefaultValue extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_identifierAsDefaultValue class_func_new (const class GGS_lstring & inOperand0,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_identifierAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_identifierAsDefaultValue ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @identifierAsDefaultValue class
//--------------------------------------------------------------------------------------------------

class cPtr_identifierAsDefaultValue : public cPtr_abstractDefaultValue {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void identifierAsDefaultValue_init_21_ (const class GGS_lstring & inOperand0,
                                                  Compiler * inCompiler) ;


//--- Extension method analyzeDefaultValueType
  public: virtual void method_analyzeDefaultValueType (const class GGS_typeKindList arg_inAttributeActualTypeList,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           class GGS_string & arg_outSwiftDefaultValueAsString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mValue ;


//--- Default constructor
  public: cPtr_identifierAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_identifierAsDefaultValue (const GGS_lstring & in_mValue,
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
// Phase 1: @identifierAsDefaultValue_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_identifierAsDefaultValue_2E_weak : public GGS_abstractDefaultValue_2E_weak {
//--------------------------------- Default constructor
  public: GGS_identifierAsDefaultValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_identifierAsDefaultValue_2E_weak (const class GGS_identifierAsDefaultValue & inSource) ;

  public: GGS_identifierAsDefaultValue_2E_weak & operator = (const class GGS_identifierAsDefaultValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_identifierAsDefaultValue_2E_weak init_nil (void) {
    GGS_identifierAsDefaultValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_identifierAsDefaultValue bang_identifierAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_identifierAsDefaultValue unwrappedValue (void) const ;

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
  public: static GGS_identifierAsDefaultValue_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_identifierAsDefaultValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_identifierAsDefaultValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_identifierAsDefaultValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @prefsAsDefaultValue reference class
//--------------------------------------------------------------------------------------------------

class GGS_prefsAsDefaultValue : public GGS_abstractDefaultValue {
//--------------------------------- Default constructor
  public: GGS_prefsAsDefaultValue (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_prefsAsDefaultValue (const class cPtr_prefsAsDefaultValue * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mPrefPropertyName (void) const ;
  public: void setProperty_mPrefPropertyName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_prefsAsDefaultValue init_21_ (const class GGS_lstring & inOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prefsAsDefaultValue extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prefsAsDefaultValue class_func_new (const class GGS_lstring & inOperand0,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefsAsDefaultValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefsAsDefaultValue ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @prefsAsDefaultValue class
//--------------------------------------------------------------------------------------------------

class cPtr_prefsAsDefaultValue : public cPtr_abstractDefaultValue {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void prefsAsDefaultValue_init_21_ (const class GGS_lstring & inOperand0,
                                             Compiler * inCompiler) ;


//--- Extension method analyzeDefaultValueType
  public: virtual void method_analyzeDefaultValueType (const class GGS_typeKindList arg_inAttributeActualTypeList,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           class GGS_string & arg_outSwiftDefaultValueAsString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDefaultValuePrecedence
  public: virtual void method_enterDefaultValuePrecedence (const class GGS_lstring arg_inNode,
           class GGS_declarationPrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mPrefPropertyName ;


//--- Default constructor
  public: cPtr_prefsAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_prefsAsDefaultValue (const GGS_lstring & in_mPrefPropertyName,
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
// Phase 1: @prefsAsDefaultValue_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_prefsAsDefaultValue_2E_weak : public GGS_abstractDefaultValue_2E_weak {
//--------------------------------- Default constructor
  public: GGS_prefsAsDefaultValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_prefsAsDefaultValue_2E_weak (const class GGS_prefsAsDefaultValue & inSource) ;

  public: GGS_prefsAsDefaultValue_2E_weak & operator = (const class GGS_prefsAsDefaultValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_prefsAsDefaultValue_2E_weak init_nil (void) {
    GGS_prefsAsDefaultValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_prefsAsDefaultValue bang_prefsAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_prefsAsDefaultValue unwrappedValue (void) const ;

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
  public: static GGS_prefsAsDefaultValue_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prefsAsDefaultValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefsAsDefaultValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefsAsDefaultValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDefaultValue analyzeDefaultValueType'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeDefaultValueType (class cPtr_abstractDefaultValue * inObject,
                                                  const class GGS_typeKindList constin_inAttributeActualTypeList,
                                                  const class GGS_propertyMap constin_inPreferencesPropertyMap,
                                                  class GGS_string & out_outSwiftDefaultValueAsString,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKindList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_typeKindList final {
  public: DownEnumerator_typeKindList (const class GGS_typeKindList & inList) ;

  public: ~ DownEnumerator_typeKindList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_typeKind current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_typeKindList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_typeKindList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_typeKindList (const DownEnumerator_typeKindList &) = delete ;
  private: DownEnumerator_typeKindList & operator = (const DownEnumerator_typeKindList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_typeKindList final {
  public: UpEnumerator_typeKindList (const class GGS_typeKindList & inList)  ;

  public: ~ UpEnumerator_typeKindList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_typeKind current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_typeKindList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_typeKindList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_typeKindList (const UpEnumerator_typeKindList &) = delete ;
  private: UpEnumerator_typeKindList & operator = (const UpEnumerator_typeKindList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @typeKindList list
//--------------------------------------------------------------------------------------------------

class GGS_typeKindList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_typeKindList_2E_element> mArray ;

//--- Default constructor
  public: GGS_typeKindList (void) ;

//--- Destructor
  public: virtual ~ GGS_typeKindList (void) = default ;

//--- Copy
  public: GGS_typeKindList (const GGS_typeKindList &) = default ;
  public: GGS_typeKindList & operator = (const GGS_typeKindList &) = default ;

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
  public : inline GenericArray <GGS_typeKindList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_typeKindList subList (const int32_t inStart,
                                     const int32_t inLength,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_typeKindList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_typeKind & in_mType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKindList init (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKindList extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKindList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_typeKindList class_func_listWithValue (const class GGS_typeKind & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_typeKindList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_typeKind & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_typeKindList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_typeKindList add_operation (const GGS_typeKindList & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_typeKind constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_typeKind constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_typeKind & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_typeKind & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_typeKind & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GGS_typeKind constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_typeKind & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_typeKind & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKind getter_mTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKindList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKindList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKindList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_typeKindList ;
  friend class DownEnumerator_typeKindList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKindList ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDefaultValue enterDefaultValuePrecedence'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDefaultValuePrecedence (class cPtr_abstractDefaultValue * inObject,
                                                      const class GGS_lstring constin_inNode,
                                                      class GGS_declarationPrecedenceGraph & io_ioGraph,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @declarationPrecedenceGraph graph
//--------------------------------------------------------------------------------------------------

class GGS_declarationPrecedenceGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public: GGS_declarationPrecedenceGraph (void) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_declarationPrecedenceGraph init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_declarationPrecedenceGraph extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_declarationPrecedenceGraph class_func_emptyGraph (LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_addNode (class GGS_lstring inArgument0,
                                                class GGS_abstractDeclarationAST inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_circularities (class GGS_declarationListAST & outArgument0,
                                                      class GGS_lstringlist & outArgument1
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_depthFirstTopologicalSort (class GGS_declarationListAST & outArgument0,
                                                                  class GGS_lstringlist & outArgument1,
                                                                  class GGS_declarationListAST & outArgument2,
                                                                  class GGS_lstringlist & outArgument3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoPredecessor (class GGS_declarationListAST & outArgument0,
                                                               class GGS_lstringlist & outArgument1
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoSuccessor (class GGS_declarationListAST & outArgument0,
                                                             class GGS_lstringlist & outArgument1
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_topologicalSort (class GGS_declarationListAST & outArgument0,
                                                        class GGS_lstringlist & outArgument1,
                                                        class GGS_declarationListAST & outArgument2,
                                                        class GGS_lstringlist & outArgument3,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_accessibleNodesFrom (const class GGS_lstringlist & constinOperand0,
                                                                             const class GGS_stringset & constinOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_declarationListAST getter_nodeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_declarationPrecedenceGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_declarationPrecedenceGraph getter_subgraphFromNodes (const class GGS_lstringlist & constinOperand0,
                                                                                          const class GGS_stringset & constinOperand1,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declarationPrecedenceGraph ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewClassBindingSpecificationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutViewClassBindingSpecificationList final {
  public: DownEnumerator_autoLayoutViewClassBindingSpecificationList (const class GGS_autoLayoutViewClassBindingSpecificationList & inList) ;

  public: ~ DownEnumerator_autoLayoutViewClassBindingSpecificationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mOutletClassName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_outletClassBindingSpecificationModelList current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const ;
  public: class GGS_controllerBindingOptionList current_mBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutViewClassBindingSpecificationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutViewClassBindingSpecificationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutViewClassBindingSpecificationList (const DownEnumerator_autoLayoutViewClassBindingSpecificationList &) = delete ;
  private: DownEnumerator_autoLayoutViewClassBindingSpecificationList & operator = (const DownEnumerator_autoLayoutViewClassBindingSpecificationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutViewClassBindingSpecificationList final {
  public: UpEnumerator_autoLayoutViewClassBindingSpecificationList (const class GGS_autoLayoutViewClassBindingSpecificationList & inList)  ;

  public: ~ UpEnumerator_autoLayoutViewClassBindingSpecificationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mOutletClassName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_outletClassBindingSpecificationModelList current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const ;
  public: class GGS_controllerBindingOptionList current_mBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutViewClassBindingSpecificationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutViewClassBindingSpecificationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutViewClassBindingSpecificationList (const UpEnumerator_autoLayoutViewClassBindingSpecificationList &) = delete ;
  private: UpEnumerator_autoLayoutViewClassBindingSpecificationList & operator = (const UpEnumerator_autoLayoutViewClassBindingSpecificationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @autoLayoutViewClassBindingSpecificationList list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewClassBindingSpecificationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_autoLayoutViewClassBindingSpecificationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_autoLayoutViewClassBindingSpecificationList (void) ;

//--- Destructor
  public: virtual ~ GGS_autoLayoutViewClassBindingSpecificationList (void) = default ;

//--- Copy
  public: GGS_autoLayoutViewClassBindingSpecificationList (const GGS_autoLayoutViewClassBindingSpecificationList &) = default ;
  public: GGS_autoLayoutViewClassBindingSpecificationList & operator = (const GGS_autoLayoutViewClassBindingSpecificationList &) = default ;

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
  public : inline GenericArray <GGS_autoLayoutViewClassBindingSpecificationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_autoLayoutViewClassBindingSpecificationList subList (const int32_t inStart,
                                                                    const int32_t inLength,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_autoLayoutViewClassBindingSpecificationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mOutletClassName,
                                                 const class GGS_lstring & in_mBindingName,
                                                 const class GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                 const class GGS_controllerBindingOptionList & in_mBindingOptionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewClassBindingSpecificationList init (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewClassBindingSpecificationList extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewClassBindingSpecificationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_autoLayoutViewClassBindingSpecificationList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                                 const class GGS_lstring & inOperand1,
                                                                                                 const class GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                 const class GGS_controllerBindingOptionList & inOperand3
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_autoLayoutViewClassBindingSpecificationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1,
                                                    const class GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                    const class GGS_controllerBindingOptionList & inOperand3
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_autoLayoutViewClassBindingSpecificationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_autoLayoutViewClassBindingSpecificationList add_operation (const GGS_autoLayoutViewClassBindingSpecificationList & inOperand,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_outletClassBindingSpecificationModelList constinArgument2,
                                               class GGS_controllerBindingOptionList constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_outletClassBindingSpecificationModelList constinArgument2,
                                                      class GGS_controllerBindingOptionList constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                                 class GGS_controllerBindingOptionList & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                                class GGS_controllerBindingOptionList & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                                      class GGS_controllerBindingOptionList & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GGS_lstring constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBindingOptionListAtIndex (class GGS_controllerBindingOptionList constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletClassBindingSpecificationModelListAtIndex (class GGS_outletClassBindingSpecificationModelList constinArgument0,
                                                                                            class GGS_uint constinArgument1,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletClassNameAtIndex (class GGS_lstring constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                              class GGS_controllerBindingOptionList & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                             class GGS_controllerBindingOptionList & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mBindingNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_controllerBindingOptionList getter_mBindingOptionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletClassBindingSpecificationModelList getter_mOutletClassBindingSpecificationModelListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOutletClassNameAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewClassBindingSpecificationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewClassBindingSpecificationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_autoLayoutViewClassBindingSpecificationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutViewClassBindingSpecificationList ;
  friend class DownEnumerator_autoLayoutViewClassBindingSpecificationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewClassBindingSpecificationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controllerBindingOptionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_controllerBindingOptionList final {
  public: DownEnumerator_controllerBindingOptionList (const class GGS_controllerBindingOptionList & inList) ;

  public: ~ DownEnumerator_controllerBindingOptionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mOptionName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_controllerBindingOptionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_controllerBindingOptionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_controllerBindingOptionList (const DownEnumerator_controllerBindingOptionList &) = delete ;
  private: DownEnumerator_controllerBindingOptionList & operator = (const DownEnumerator_controllerBindingOptionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_controllerBindingOptionList final {
  public: UpEnumerator_controllerBindingOptionList (const class GGS_controllerBindingOptionList & inList)  ;

  public: ~ UpEnumerator_controllerBindingOptionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mOptionName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_controllerBindingOptionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_controllerBindingOptionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_controllerBindingOptionList (const UpEnumerator_controllerBindingOptionList &) = delete ;
  private: UpEnumerator_controllerBindingOptionList & operator = (const UpEnumerator_controllerBindingOptionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @controllerBindingOptionList list
//--------------------------------------------------------------------------------------------------

class GGS_controllerBindingOptionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_controllerBindingOptionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_controllerBindingOptionList (void) ;

//--- Destructor
  public: virtual ~ GGS_controllerBindingOptionList (void) = default ;

//--- Copy
  public: GGS_controllerBindingOptionList (const GGS_controllerBindingOptionList &) = default ;
  public: GGS_controllerBindingOptionList & operator = (const GGS_controllerBindingOptionList &) = default ;

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
  public : inline GenericArray <GGS_controllerBindingOptionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_controllerBindingOptionList subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_controllerBindingOptionList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mOptionName,
                                                 const class GGS_lstring & in_mOptionTypeName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controllerBindingOptionList init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controllerBindingOptionList extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controllerBindingOptionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_controllerBindingOptionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_lstring & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_controllerBindingOptionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_controllerBindingOptionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_controllerBindingOptionList add_operation (const GGS_controllerBindingOptionList & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionNameAtIndex (class GGS_lstring constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOptionNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOptionTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_controllerBindingOptionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_controllerBindingOptionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_controllerBindingOptionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_controllerBindingOptionList ;
  friend class DownEnumerator_controllerBindingOptionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controllerBindingOptionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletClassBindingSpecificationModelList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_outletClassBindingSpecificationModelList final {
  public: DownEnumerator_outletClassBindingSpecificationModelList (const class GGS_outletClassBindingSpecificationModelList & inList) ;

  public: ~ DownEnumerator_outletClassBindingSpecificationModelList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mModelTypeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mModelShouldBeWritableProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_outletClassBindingSpecificationModelList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_outletClassBindingSpecificationModelList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_outletClassBindingSpecificationModelList (const DownEnumerator_outletClassBindingSpecificationModelList &) = delete ;
  private: DownEnumerator_outletClassBindingSpecificationModelList & operator = (const DownEnumerator_outletClassBindingSpecificationModelList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_outletClassBindingSpecificationModelList final {
  public: UpEnumerator_outletClassBindingSpecificationModelList (const class GGS_outletClassBindingSpecificationModelList & inList)  ;

  public: ~ UpEnumerator_outletClassBindingSpecificationModelList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mModelTypeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mModelShouldBeWritableProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_outletClassBindingSpecificationModelList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_outletClassBindingSpecificationModelList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_outletClassBindingSpecificationModelList (const UpEnumerator_outletClassBindingSpecificationModelList &) = delete ;
  private: UpEnumerator_outletClassBindingSpecificationModelList & operator = (const UpEnumerator_outletClassBindingSpecificationModelList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @outletClassBindingSpecificationModelList list
//--------------------------------------------------------------------------------------------------

class GGS_outletClassBindingSpecificationModelList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_outletClassBindingSpecificationModelList_2E_element> mArray ;

//--- Default constructor
  public: GGS_outletClassBindingSpecificationModelList (void) ;

//--- Destructor
  public: virtual ~ GGS_outletClassBindingSpecificationModelList (void) = default ;

//--- Copy
  public: GGS_outletClassBindingSpecificationModelList (const GGS_outletClassBindingSpecificationModelList &) = default ;
  public: GGS_outletClassBindingSpecificationModelList & operator = (const GGS_outletClassBindingSpecificationModelList &) = default ;

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
  public : inline GenericArray <GGS_outletClassBindingSpecificationModelList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_outletClassBindingSpecificationModelList subList (const int32_t inStart,
                                                                 const int32_t inLength,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_outletClassBindingSpecificationModelList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mModelTypeName,
                                                 const class GGS_bool & in_mModelShouldBeWritableProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletClassBindingSpecificationModelList init (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletClassBindingSpecificationModelList extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outletClassBindingSpecificationModelList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_outletClassBindingSpecificationModelList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                              const class GGS_bool & inOperand1
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_outletClassBindingSpecificationModelList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_bool & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_outletClassBindingSpecificationModelList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_outletClassBindingSpecificationModelList add_operation (const GGS_outletClassBindingSpecificationModelList & inOperand,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_bool constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_bool constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_bool & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_bool & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_bool & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModelShouldBeWritablePropertyAtIndex (class GGS_bool constinArgument0,
                                                                                 class GGS_uint constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModelTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_bool & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_bool & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mModelShouldBeWritablePropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mModelTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletClassBindingSpecificationModelList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletClassBindingSpecificationModelList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_outletClassBindingSpecificationModelList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_outletClassBindingSpecificationModelList ;
  friend class DownEnumerator_outletClassBindingSpecificationModelList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewClassBindingSpecificationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewClassBindingSpecificationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mOutletClassName ;
  public: inline GGS_lstring readProperty_mOutletClassName (void) const {
    return mProperty_mOutletClassName ;
  }

  public: GGS_lstring mProperty_mBindingName ;
  public: inline GGS_lstring readProperty_mBindingName (void) const {
    return mProperty_mBindingName ;
  }

  public: GGS_outletClassBindingSpecificationModelList mProperty_mOutletClassBindingSpecificationModelList ;
  public: inline GGS_outletClassBindingSpecificationModelList readProperty_mOutletClassBindingSpecificationModelList (void) const {
    return mProperty_mOutletClassBindingSpecificationModelList ;
  }

  public: GGS_controllerBindingOptionList mProperty_mBindingOptionList ;
  public: inline GGS_controllerBindingOptionList readProperty_mBindingOptionList (void) const {
    return mProperty_mBindingOptionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutViewClassBindingSpecificationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOutletClassName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletClassName = inValue ;
  }

  public: inline void setter_setMBindingName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingName = inValue ;
  }

  public: inline void setter_setMOutletClassBindingSpecificationModelList (const GGS_outletClassBindingSpecificationModelList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletClassBindingSpecificationModelList = inValue ;
  }

  public: inline void setter_setMBindingOptionList (const GGS_controllerBindingOptionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingOptionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutViewClassBindingSpecificationList_2E_element (const GGS_lstring & in_mOutletClassName,
                                                                      const GGS_lstring & in_mBindingName,
                                                                      const GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                      const GGS_controllerBindingOptionList & in_mBindingOptionList) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutViewClassBindingSpecificationList_2E_element (const GGS_autoLayoutViewClassBindingSpecificationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutViewClassBindingSpecificationList_2E_element & operator = (const GGS_autoLayoutViewClassBindingSpecificationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewClassBindingSpecificationList_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                  const class GGS_lstring & inOperand1,
                                                                                                  const class GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                  const class GGS_controllerBindingOptionList & inOperand3,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewClassBindingSpecificationList_2E_element extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewClassBindingSpecificationList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                                  const class GGS_lstring & inOperand1,
                                                                                                  const class GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                  const class GGS_controllerBindingOptionList & inOperand3,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewClassBindingSpecificationList_2E_element ;

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
// Phase 1: @declarationListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_declarationListAST final {
  public: DownEnumerator_declarationListAST (const class GGS_declarationListAST & inList) ;

  public: ~ DownEnumerator_declarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractDeclarationAST current_mPropertyDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_declarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_declarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_declarationListAST (const DownEnumerator_declarationListAST &) = delete ;
  private: DownEnumerator_declarationListAST & operator = (const DownEnumerator_declarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_declarationListAST final {
  public: UpEnumerator_declarationListAST (const class GGS_declarationListAST & inList)  ;

  public: ~ UpEnumerator_declarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractDeclarationAST current_mPropertyDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_declarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_declarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_declarationListAST (const UpEnumerator_declarationListAST &) = delete ;
  private: UpEnumerator_declarationListAST & operator = (const UpEnumerator_declarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @declarationListAST list
//--------------------------------------------------------------------------------------------------

class GGS_declarationListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_declarationListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_declarationListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_declarationListAST (void) = default ;

//--- Copy
  public: GGS_declarationListAST (const GGS_declarationListAST &) = default ;
  public: GGS_declarationListAST & operator = (const GGS_declarationListAST &) = default ;

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
  public : inline GenericArray <GGS_declarationListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_declarationListAST subList (const int32_t inStart,
                                           const int32_t inLength,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_declarationListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_abstractDeclarationAST & in_mPropertyDeclaration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_declarationListAST init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_declarationListAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_declarationListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_declarationListAST class_func_listWithValue (const class GGS_abstractDeclarationAST & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_declarationListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_abstractDeclarationAST & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_declarationListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_declarationListAST add_operation (const GGS_declarationListAST & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_abstractDeclarationAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_abstractDeclarationAST constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_abstractDeclarationAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_abstractDeclarationAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_abstractDeclarationAST & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyDeclarationAtIndex (class GGS_abstractDeclarationAST constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_abstractDeclarationAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_abstractDeclarationAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractDeclarationAST getter_mPropertyDeclarationAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_declarationListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_declarationListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_declarationListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_declarationListAST ;
  friend class DownEnumerator_declarationListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declarationListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @declarationListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_declarationListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractDeclarationAST mProperty_mPropertyDeclaration ;
  public: inline GGS_abstractDeclarationAST readProperty_mPropertyDeclaration (void) const {
    return mProperty_mPropertyDeclaration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_declarationListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPropertyDeclaration (const GGS_abstractDeclarationAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyDeclaration = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_declarationListAST_2E_element (const GGS_abstractDeclarationAST & in_mPropertyDeclaration) ;

//--------------------------------- Copy constructor
  public: GGS_declarationListAST_2E_element (const GGS_declarationListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_declarationListAST_2E_element & operator = (const GGS_declarationListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_declarationListAST_2E_element init_21_ (const class GGS_abstractDeclarationAST & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_declarationListAST_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_declarationListAST_2E_element class_func_new (const class GGS_abstractDeclarationAST & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declarationListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeGroupList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_XCodeGroupList final {
  public: DownEnumerator_XCodeGroupList (const class GGS_XCodeGroupList & inList) ;

  public: ~ DownEnumerator_XCodeGroupList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mGroupReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mGroupName (LOCATION_ARGS) const ;
  public: class GGS_string current_mGroupPath (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mChildrenRefs (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_XCodeGroupList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_XCodeGroupList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_XCodeGroupList (const DownEnumerator_XCodeGroupList &) = delete ;
  private: DownEnumerator_XCodeGroupList & operator = (const DownEnumerator_XCodeGroupList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_XCodeGroupList final {
  public: UpEnumerator_XCodeGroupList (const class GGS_XCodeGroupList & inList)  ;

  public: ~ UpEnumerator_XCodeGroupList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mGroupReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mGroupName (LOCATION_ARGS) const ;
  public: class GGS_string current_mGroupPath (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mChildrenRefs (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_XCodeGroupList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_XCodeGroupList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_XCodeGroupList (const UpEnumerator_XCodeGroupList &) = delete ;
  private: UpEnumerator_XCodeGroupList & operator = (const UpEnumerator_XCodeGroupList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @XCodeGroupList list
//--------------------------------------------------------------------------------------------------

class GGS_XCodeGroupList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_XCodeGroupList_2E_element> mArray ;

//--- Default constructor
  public: GGS_XCodeGroupList (void) ;

//--- Destructor
  public: virtual ~ GGS_XCodeGroupList (void) = default ;

//--- Copy
  public: GGS_XCodeGroupList (const GGS_XCodeGroupList &) = default ;
  public: GGS_XCodeGroupList & operator = (const GGS_XCodeGroupList &) = default ;

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
  public : inline GenericArray <GGS_XCodeGroupList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_XCodeGroupList subList (const int32_t inStart,
                                       const int32_t inLength,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_XCodeGroupList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mGroupReference,
                                                 const class GGS_string & in_mGroupName,
                                                 const class GGS_string & in_mGroupPath,
                                                 const class GGS_stringlist & in_mChildrenRefs
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeGroupList init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XCodeGroupList extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_XCodeGroupList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_XCodeGroupList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                    const class GGS_string & inOperand1,
                                                                    const class GGS_string & inOperand2,
                                                                    const class GGS_stringlist & inOperand3
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_XCodeGroupList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_string & inOperand2,
                                                    const class GGS_stringlist & inOperand3
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_XCodeGroupList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_XCodeGroupList add_operation (const GGS_XCodeGroupList & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_string constinArgument2,
                                               class GGS_stringlist constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_stringlist constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 class GGS_stringlist & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_string & outArgument2,
                                                class GGS_stringlist & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_stringlist & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMChildrenRefsAtIndex (class GGS_stringlist constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGroupNameAtIndex (class GGS_string constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGroupPathAtIndex (class GGS_string constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGroupReferenceAtIndex (class GGS_string constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_string & outArgument2,
                                              class GGS_stringlist & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_string & outArgument2,
                                             class GGS_stringlist & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mChildrenRefsAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mGroupNameAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mGroupPathAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mGroupReferenceAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeGroupList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeGroupList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeGroupList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_XCodeGroupList ;
  friend class DownEnumerator_XCodeGroupList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeGroupList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeGroupList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_XCodeGroupList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mGroupReference ;
  public: inline GGS_string readProperty_mGroupReference (void) const {
    return mProperty_mGroupReference ;
  }

  public: GGS_string mProperty_mGroupName ;
  public: inline GGS_string readProperty_mGroupName (void) const {
    return mProperty_mGroupName ;
  }

  public: GGS_string mProperty_mGroupPath ;
  public: inline GGS_string readProperty_mGroupPath (void) const {
    return mProperty_mGroupPath ;
  }

  public: GGS_stringlist mProperty_mChildrenRefs ;
  public: inline GGS_stringlist readProperty_mChildrenRefs (void) const {
    return mProperty_mChildrenRefs ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_XCodeGroupList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGroupReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupReference = inValue ;
  }

  public: inline void setter_setMGroupName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupName = inValue ;
  }

  public: inline void setter_setMGroupPath (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupPath = inValue ;
  }

  public: inline void setter_setMChildrenRefs (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mChildrenRefs = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_XCodeGroupList_2E_element (const GGS_string & in_mGroupReference,
                                         const GGS_string & in_mGroupName,
                                         const GGS_string & in_mGroupPath,
                                         const GGS_stringlist & in_mChildrenRefs) ;

//--------------------------------- Copy constructor
  public: GGS_XCodeGroupList_2E_element (const GGS_XCodeGroupList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_XCodeGroupList_2E_element & operator = (const GGS_XCodeGroupList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeGroupList_2E_element init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                     const class GGS_string & inOperand1,
                                                                     const class GGS_string & inOperand2,
                                                                     const class GGS_stringlist & inOperand3,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XCodeGroupList_2E_element extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_XCodeGroupList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                     const class GGS_string & inOperand1,
                                                                     const class GGS_string & inOperand2,
                                                                     const class GGS_stringlist & inOperand3,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeGroupList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeToolTargetList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_XCodeToolTargetList final {
  public: DownEnumerator_XCodeToolTargetList (const class GGS_XCodeToolTargetList & inList) ;

  public: ~ DownEnumerator_XCodeToolTargetList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mTargetRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetName (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileName (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildPhaseRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationListRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildConfigurationSettingList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mFrameworksFileRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_XCodeToolTargetList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_XCodeToolTargetList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_XCodeToolTargetList (const DownEnumerator_XCodeToolTargetList &) = delete ;
  private: DownEnumerator_XCodeToolTargetList & operator = (const DownEnumerator_XCodeToolTargetList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_XCodeToolTargetList final {
  public: UpEnumerator_XCodeToolTargetList (const class GGS_XCodeToolTargetList & inList)  ;

  public: ~ UpEnumerator_XCodeToolTargetList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mTargetRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetName (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileName (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildPhaseRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationListRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildConfigurationSettingList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mFrameworksFileRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_XCodeToolTargetList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_XCodeToolTargetList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_XCodeToolTargetList (const UpEnumerator_XCodeToolTargetList &) = delete ;
  private: UpEnumerator_XCodeToolTargetList & operator = (const UpEnumerator_XCodeToolTargetList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @XCodeToolTargetList list
//--------------------------------------------------------------------------------------------------

class GGS_XCodeToolTargetList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_XCodeToolTargetList_2E_element> mArray ;

//--- Default constructor
  public: GGS_XCodeToolTargetList (void) ;

//--- Destructor
  public: virtual ~ GGS_XCodeToolTargetList (void) = default ;

//--- Copy
  public: GGS_XCodeToolTargetList (const GGS_XCodeToolTargetList &) = default ;
  public: GGS_XCodeToolTargetList & operator = (const GGS_XCodeToolTargetList &) = default ;

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
  public : inline GenericArray <GGS_XCodeToolTargetList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_XCodeToolTargetList subList (const int32_t inStart,
                                            const int32_t inLength,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_XCodeToolTargetList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mTargetRef,
                                                 const class GGS_string & in_mTargetName,
                                                 const class GGS_string & in_mProductFileReference,
                                                 const class GGS_string & in_mProductFileName,
                                                 const class GGS_stringlist & in_mBuildPhaseRefList,
                                                 const class GGS_string & in_mBuildPhaseRef,
                                                 const class GGS_string & in_mBuildConfigurationListRef,
                                                 const class GGS_stringlist & in_mBuildConfigurationSettingList,
                                                 const class GGS_string & in_mBuildConfigurationRef,
                                                 const class GGS_stringlist & in_mFrameworksFileRefList,
                                                 const class GGS_string & in_mFrameworkBuildPhaseRef
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeToolTargetList init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XCodeToolTargetList extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_XCodeToolTargetList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_XCodeToolTargetList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         const class GGS_string & inOperand2,
                                                                         const class GGS_string & inOperand3,
                                                                         const class GGS_stringlist & inOperand4,
                                                                         const class GGS_string & inOperand5,
                                                                         const class GGS_string & inOperand6,
                                                                         const class GGS_stringlist & inOperand7,
                                                                         const class GGS_string & inOperand8,
                                                                         const class GGS_stringlist & inOperand9,
                                                                         const class GGS_string & inOperand10
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_XCodeToolTargetList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_string & inOperand2,
                                                    const class GGS_string & inOperand3,
                                                    const class GGS_stringlist & inOperand4,
                                                    const class GGS_string & inOperand5,
                                                    const class GGS_string & inOperand6,
                                                    const class GGS_stringlist & inOperand7,
                                                    const class GGS_string & inOperand8,
                                                    const class GGS_stringlist & inOperand9,
                                                    const class GGS_string & inOperand10
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_XCodeToolTargetList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_XCodeToolTargetList add_operation (const GGS_XCodeToolTargetList & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_string constinArgument2,
                                               class GGS_string constinArgument3,
                                               class GGS_stringlist constinArgument4,
                                               class GGS_string constinArgument5,
                                               class GGS_string constinArgument6,
                                               class GGS_stringlist constinArgument7,
                                               class GGS_string constinArgument8,
                                               class GGS_stringlist constinArgument9,
                                               class GGS_string constinArgument10,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_string constinArgument3,
                                                      class GGS_stringlist constinArgument4,
                                                      class GGS_string constinArgument5,
                                                      class GGS_string constinArgument6,
                                                      class GGS_stringlist constinArgument7,
                                                      class GGS_string constinArgument8,
                                                      class GGS_stringlist constinArgument9,
                                                      class GGS_string constinArgument10,
                                                      class GGS_uint constinArgument11,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 class GGS_string & outArgument3,
                                                 class GGS_stringlist & outArgument4,
                                                 class GGS_string & outArgument5,
                                                 class GGS_string & outArgument6,
                                                 class GGS_stringlist & outArgument7,
                                                 class GGS_string & outArgument8,
                                                 class GGS_stringlist & outArgument9,
                                                 class GGS_string & outArgument10,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_string & outArgument2,
                                                class GGS_string & outArgument3,
                                                class GGS_stringlist & outArgument4,
                                                class GGS_string & outArgument5,
                                                class GGS_string & outArgument6,
                                                class GGS_stringlist & outArgument7,
                                                class GGS_string & outArgument8,
                                                class GGS_stringlist & outArgument9,
                                                class GGS_string & outArgument10,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_string & outArgument3,
                                                      class GGS_stringlist & outArgument4,
                                                      class GGS_string & outArgument5,
                                                      class GGS_string & outArgument6,
                                                      class GGS_stringlist & outArgument7,
                                                      class GGS_string & outArgument8,
                                                      class GGS_stringlist & outArgument9,
                                                      class GGS_string & outArgument10,
                                                      class GGS_uint constinArgument11,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationListRefAtIndex (class GGS_string constinArgument0,
                                                                             class GGS_uint constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationRefAtIndex (class GGS_string constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationSettingListAtIndex (class GGS_stringlist constinArgument0,
                                                                                 class GGS_uint constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefAtIndex (class GGS_string constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefListAtIndex (class GGS_stringlist constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFrameworkBuildPhaseRefAtIndex (class GGS_string constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFrameworksFileRefListAtIndex (class GGS_stringlist constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductFileNameAtIndex (class GGS_string constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductFileReferenceAtIndex (class GGS_string constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetNameAtIndex (class GGS_string constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetRefAtIndex (class GGS_string constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_string & outArgument2,
                                              class GGS_string & outArgument3,
                                              class GGS_stringlist & outArgument4,
                                              class GGS_string & outArgument5,
                                              class GGS_string & outArgument6,
                                              class GGS_stringlist & outArgument7,
                                              class GGS_string & outArgument8,
                                              class GGS_stringlist & outArgument9,
                                              class GGS_string & outArgument10,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_string & outArgument2,
                                             class GGS_string & outArgument3,
                                             class GGS_stringlist & outArgument4,
                                             class GGS_string & outArgument5,
                                             class GGS_string & outArgument6,
                                             class GGS_stringlist & outArgument7,
                                             class GGS_string & outArgument8,
                                             class GGS_stringlist & outArgument9,
                                             class GGS_string & outArgument10,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBuildConfigurationListRefAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBuildConfigurationRefAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mBuildConfigurationSettingListAtIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBuildPhaseRefAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mBuildPhaseRefListAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mFrameworkBuildPhaseRefAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mFrameworksFileRefListAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mProductFileNameAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mProductFileReferenceAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mTargetNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mTargetRefAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeToolTargetList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeToolTargetList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeToolTargetList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_XCodeToolTargetList ;
  friend class DownEnumerator_XCodeToolTargetList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeToolTargetList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeToolTargetList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_XCodeToolTargetList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mTargetRef ;
  public: inline GGS_string readProperty_mTargetRef (void) const {
    return mProperty_mTargetRef ;
  }

  public: GGS_string mProperty_mTargetName ;
  public: inline GGS_string readProperty_mTargetName (void) const {
    return mProperty_mTargetName ;
  }

  public: GGS_string mProperty_mProductFileReference ;
  public: inline GGS_string readProperty_mProductFileReference (void) const {
    return mProperty_mProductFileReference ;
  }

  public: GGS_string mProperty_mProductFileName ;
  public: inline GGS_string readProperty_mProductFileName (void) const {
    return mProperty_mProductFileName ;
  }

  public: GGS_stringlist mProperty_mBuildPhaseRefList ;
  public: inline GGS_stringlist readProperty_mBuildPhaseRefList (void) const {
    return mProperty_mBuildPhaseRefList ;
  }

  public: GGS_string mProperty_mBuildPhaseRef ;
  public: inline GGS_string readProperty_mBuildPhaseRef (void) const {
    return mProperty_mBuildPhaseRef ;
  }

  public: GGS_string mProperty_mBuildConfigurationListRef ;
  public: inline GGS_string readProperty_mBuildConfigurationListRef (void) const {
    return mProperty_mBuildConfigurationListRef ;
  }

  public: GGS_stringlist mProperty_mBuildConfigurationSettingList ;
  public: inline GGS_stringlist readProperty_mBuildConfigurationSettingList (void) const {
    return mProperty_mBuildConfigurationSettingList ;
  }

  public: GGS_string mProperty_mBuildConfigurationRef ;
  public: inline GGS_string readProperty_mBuildConfigurationRef (void) const {
    return mProperty_mBuildConfigurationRef ;
  }

  public: GGS_stringlist mProperty_mFrameworksFileRefList ;
  public: inline GGS_stringlist readProperty_mFrameworksFileRefList (void) const {
    return mProperty_mFrameworksFileRefList ;
  }

  public: GGS_string mProperty_mFrameworkBuildPhaseRef ;
  public: inline GGS_string readProperty_mFrameworkBuildPhaseRef (void) const {
    return mProperty_mFrameworkBuildPhaseRef ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_XCodeToolTargetList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTargetRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetRef = inValue ;
  }

  public: inline void setter_setMTargetName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetName = inValue ;
  }

  public: inline void setter_setMProductFileReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileReference = inValue ;
  }

  public: inline void setter_setMProductFileName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileName = inValue ;
  }

  public: inline void setter_setMBuildPhaseRefList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRefList = inValue ;
  }

  public: inline void setter_setMBuildPhaseRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationListRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationListRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationSettingList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationSettingList = inValue ;
  }

  public: inline void setter_setMBuildConfigurationRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationRef = inValue ;
  }

  public: inline void setter_setMFrameworksFileRefList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworksFileRefList = inValue ;
  }

  public: inline void setter_setMFrameworkBuildPhaseRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworkBuildPhaseRef = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_XCodeToolTargetList_2E_element (const GGS_string & in_mTargetRef,
                                              const GGS_string & in_mTargetName,
                                              const GGS_string & in_mProductFileReference,
                                              const GGS_string & in_mProductFileName,
                                              const GGS_stringlist & in_mBuildPhaseRefList,
                                              const GGS_string & in_mBuildPhaseRef,
                                              const GGS_string & in_mBuildConfigurationListRef,
                                              const GGS_stringlist & in_mBuildConfigurationSettingList,
                                              const GGS_string & in_mBuildConfigurationRef,
                                              const GGS_stringlist & in_mFrameworksFileRefList,
                                              const GGS_string & in_mFrameworkBuildPhaseRef) ;

//--------------------------------- Copy constructor
  public: GGS_XCodeToolTargetList_2E_element (const GGS_XCodeToolTargetList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_XCodeToolTargetList_2E_element & operator = (const GGS_XCodeToolTargetList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeToolTargetList_2E_element init_21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                      const class GGS_string & inOperand1,
                                                                                                      const class GGS_string & inOperand2,
                                                                                                      const class GGS_string & inOperand3,
                                                                                                      const class GGS_stringlist & inOperand4,
                                                                                                      const class GGS_string & inOperand5,
                                                                                                      const class GGS_string & inOperand6,
                                                                                                      const class GGS_stringlist & inOperand7,
                                                                                                      const class GGS_string & inOperand8,
                                                                                                      const class GGS_stringlist & inOperand9,
                                                                                                      const class GGS_string & inOperand10,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XCodeToolTargetList_2E_element extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_XCodeToolTargetList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                          const class GGS_string & inOperand1,
                                                                          const class GGS_string & inOperand2,
                                                                          const class GGS_string & inOperand3,
                                                                          const class GGS_stringlist & inOperand4,
                                                                          const class GGS_string & inOperand5,
                                                                          const class GGS_string & inOperand6,
                                                                          const class GGS_stringlist & inOperand7,
                                                                          const class GGS_string & inOperand8,
                                                                          const class GGS_stringlist & inOperand9,
                                                                          const class GGS_string & inOperand10,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeToolTargetList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeAppTargetList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_XCodeAppTargetList final {
  public: DownEnumerator_XCodeAppTargetList (const class GGS_XCodeAppTargetList & inList) ;

  public: ~ DownEnumerator_XCodeAppTargetList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mTargetRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetName (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileName (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildPhaseRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationListRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildConfigurationSettingList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mFrameworksFileRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GGS__32_stringlist current_mDependentTargets (LOCATION_ARGS) const ;
  public: class GGS_string current_mResourceBuildRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mResourceFileBuildRefs (LOCATION_ARGS) const ;
  public: class GGS_string current_mInfoPListFile (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_XCodeAppTargetList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_XCodeAppTargetList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_XCodeAppTargetList (const DownEnumerator_XCodeAppTargetList &) = delete ;
  private: DownEnumerator_XCodeAppTargetList & operator = (const DownEnumerator_XCodeAppTargetList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_XCodeAppTargetList final {
  public: UpEnumerator_XCodeAppTargetList (const class GGS_XCodeAppTargetList & inList)  ;

  public: ~ UpEnumerator_XCodeAppTargetList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mTargetRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetName (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileName (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildPhaseRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationListRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildConfigurationSettingList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mFrameworksFileRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GGS__32_stringlist current_mDependentTargets (LOCATION_ARGS) const ;
  public: class GGS_string current_mResourceBuildRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mResourceFileBuildRefs (LOCATION_ARGS) const ;
  public: class GGS_string current_mInfoPListFile (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_XCodeAppTargetList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_XCodeAppTargetList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_XCodeAppTargetList (const UpEnumerator_XCodeAppTargetList &) = delete ;
  private: UpEnumerator_XCodeAppTargetList & operator = (const UpEnumerator_XCodeAppTargetList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @XCodeAppTargetList list
//--------------------------------------------------------------------------------------------------

class GGS_XCodeAppTargetList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_XCodeAppTargetList_2E_element> mArray ;

//--- Default constructor
  public: GGS_XCodeAppTargetList (void) ;

//--- Destructor
  public: virtual ~ GGS_XCodeAppTargetList (void) = default ;

//--- Copy
  public: GGS_XCodeAppTargetList (const GGS_XCodeAppTargetList &) = default ;
  public: GGS_XCodeAppTargetList & operator = (const GGS_XCodeAppTargetList &) = default ;

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
  public : inline GenericArray <GGS_XCodeAppTargetList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_XCodeAppTargetList subList (const int32_t inStart,
                                           const int32_t inLength,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_XCodeAppTargetList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mTargetRef,
                                                 const class GGS_string & in_mTargetName,
                                                 const class GGS_string & in_mProductFileReference,
                                                 const class GGS_string & in_mProductFileName,
                                                 const class GGS_stringlist & in_mBuildPhaseRefList,
                                                 const class GGS_string & in_mBuildPhaseRef,
                                                 const class GGS_string & in_mBuildConfigurationListRef,
                                                 const class GGS_stringlist & in_mBuildConfigurationSettingList,
                                                 const class GGS_string & in_mBuildConfigurationRef,
                                                 const class GGS_stringlist & in_mFrameworksFileRefList,
                                                 const class GGS_string & in_mFrameworkBuildPhaseRef,
                                                 const class GGS__32_stringlist & in_mDependentTargets,
                                                 const class GGS_string & in_mResourceBuildRef,
                                                 const class GGS_stringlist & in_mResourceFileBuildRefs,
                                                 const class GGS_string & in_mInfoPListFile
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeAppTargetList init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XCodeAppTargetList extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_XCodeAppTargetList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_XCodeAppTargetList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                        const class GGS_string & inOperand1,
                                                                        const class GGS_string & inOperand2,
                                                                        const class GGS_string & inOperand3,
                                                                        const class GGS_stringlist & inOperand4,
                                                                        const class GGS_string & inOperand5,
                                                                        const class GGS_string & inOperand6,
                                                                        const class GGS_stringlist & inOperand7,
                                                                        const class GGS_string & inOperand8,
                                                                        const class GGS_stringlist & inOperand9,
                                                                        const class GGS_string & inOperand10,
                                                                        const class GGS__32_stringlist & inOperand11,
                                                                        const class GGS_string & inOperand12,
                                                                        const class GGS_stringlist & inOperand13,
                                                                        const class GGS_string & inOperand14
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_XCodeAppTargetList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_string & inOperand2,
                                                    const class GGS_string & inOperand3,
                                                    const class GGS_stringlist & inOperand4,
                                                    const class GGS_string & inOperand5,
                                                    const class GGS_string & inOperand6,
                                                    const class GGS_stringlist & inOperand7,
                                                    const class GGS_string & inOperand8,
                                                    const class GGS_stringlist & inOperand9,
                                                    const class GGS_string & inOperand10,
                                                    const class GGS__32_stringlist & inOperand11,
                                                    const class GGS_string & inOperand12,
                                                    const class GGS_stringlist & inOperand13,
                                                    const class GGS_string & inOperand14
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_XCodeAppTargetList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_XCodeAppTargetList add_operation (const GGS_XCodeAppTargetList & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_string constinArgument2,
                                               class GGS_string constinArgument3,
                                               class GGS_stringlist constinArgument4,
                                               class GGS_string constinArgument5,
                                               class GGS_string constinArgument6,
                                               class GGS_stringlist constinArgument7,
                                               class GGS_string constinArgument8,
                                               class GGS_stringlist constinArgument9,
                                               class GGS_string constinArgument10,
                                               class GGS__32_stringlist constinArgument11,
                                               class GGS_string constinArgument12,
                                               class GGS_stringlist constinArgument13,
                                               class GGS_string constinArgument14,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_string constinArgument3,
                                                      class GGS_stringlist constinArgument4,
                                                      class GGS_string constinArgument5,
                                                      class GGS_string constinArgument6,
                                                      class GGS_stringlist constinArgument7,
                                                      class GGS_string constinArgument8,
                                                      class GGS_stringlist constinArgument9,
                                                      class GGS_string constinArgument10,
                                                      class GGS__32_stringlist constinArgument11,
                                                      class GGS_string constinArgument12,
                                                      class GGS_stringlist constinArgument13,
                                                      class GGS_string constinArgument14,
                                                      class GGS_uint constinArgument15,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 class GGS_string & outArgument3,
                                                 class GGS_stringlist & outArgument4,
                                                 class GGS_string & outArgument5,
                                                 class GGS_string & outArgument6,
                                                 class GGS_stringlist & outArgument7,
                                                 class GGS_string & outArgument8,
                                                 class GGS_stringlist & outArgument9,
                                                 class GGS_string & outArgument10,
                                                 class GGS__32_stringlist & outArgument11,
                                                 class GGS_string & outArgument12,
                                                 class GGS_stringlist & outArgument13,
                                                 class GGS_string & outArgument14,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_string & outArgument2,
                                                class GGS_string & outArgument3,
                                                class GGS_stringlist & outArgument4,
                                                class GGS_string & outArgument5,
                                                class GGS_string & outArgument6,
                                                class GGS_stringlist & outArgument7,
                                                class GGS_string & outArgument8,
                                                class GGS_stringlist & outArgument9,
                                                class GGS_string & outArgument10,
                                                class GGS__32_stringlist & outArgument11,
                                                class GGS_string & outArgument12,
                                                class GGS_stringlist & outArgument13,
                                                class GGS_string & outArgument14,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_string & outArgument3,
                                                      class GGS_stringlist & outArgument4,
                                                      class GGS_string & outArgument5,
                                                      class GGS_string & outArgument6,
                                                      class GGS_stringlist & outArgument7,
                                                      class GGS_string & outArgument8,
                                                      class GGS_stringlist & outArgument9,
                                                      class GGS_string & outArgument10,
                                                      class GGS__32_stringlist & outArgument11,
                                                      class GGS_string & outArgument12,
                                                      class GGS_stringlist & outArgument13,
                                                      class GGS_string & outArgument14,
                                                      class GGS_uint constinArgument15,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationListRefAtIndex (class GGS_string constinArgument0,
                                                                             class GGS_uint constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationRefAtIndex (class GGS_string constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationSettingListAtIndex (class GGS_stringlist constinArgument0,
                                                                                 class GGS_uint constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefAtIndex (class GGS_string constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefListAtIndex (class GGS_stringlist constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDependentTargetsAtIndex (class GGS__32_stringlist constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFrameworkBuildPhaseRefAtIndex (class GGS_string constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFrameworksFileRefListAtIndex (class GGS_stringlist constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInfoPListFileAtIndex (class GGS_string constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductFileNameAtIndex (class GGS_string constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductFileReferenceAtIndex (class GGS_string constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResourceBuildRefAtIndex (class GGS_string constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResourceFileBuildRefsAtIndex (class GGS_stringlist constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetNameAtIndex (class GGS_string constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetRefAtIndex (class GGS_string constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_string & outArgument2,
                                              class GGS_string & outArgument3,
                                              class GGS_stringlist & outArgument4,
                                              class GGS_string & outArgument5,
                                              class GGS_string & outArgument6,
                                              class GGS_stringlist & outArgument7,
                                              class GGS_string & outArgument8,
                                              class GGS_stringlist & outArgument9,
                                              class GGS_string & outArgument10,
                                              class GGS__32_stringlist & outArgument11,
                                              class GGS_string & outArgument12,
                                              class GGS_stringlist & outArgument13,
                                              class GGS_string & outArgument14,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_string & outArgument2,
                                             class GGS_string & outArgument3,
                                             class GGS_stringlist & outArgument4,
                                             class GGS_string & outArgument5,
                                             class GGS_string & outArgument6,
                                             class GGS_stringlist & outArgument7,
                                             class GGS_string & outArgument8,
                                             class GGS_stringlist & outArgument9,
                                             class GGS_string & outArgument10,
                                             class GGS__32_stringlist & outArgument11,
                                             class GGS_string & outArgument12,
                                             class GGS_stringlist & outArgument13,
                                             class GGS_string & outArgument14,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBuildConfigurationListRefAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBuildConfigurationRefAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mBuildConfigurationSettingListAtIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBuildPhaseRefAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mBuildPhaseRefListAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_stringlist getter_mDependentTargetsAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mFrameworkBuildPhaseRefAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mFrameworksFileRefListAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mInfoPListFileAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mProductFileNameAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mProductFileReferenceAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mResourceBuildRefAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mResourceFileBuildRefsAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mTargetNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mTargetRefAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeAppTargetList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeAppTargetList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeAppTargetList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_XCodeAppTargetList ;
  friend class DownEnumerator_XCodeAppTargetList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeAppTargetList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeAppTargetList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_XCodeAppTargetList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mTargetRef ;
  public: inline GGS_string readProperty_mTargetRef (void) const {
    return mProperty_mTargetRef ;
  }

  public: GGS_string mProperty_mTargetName ;
  public: inline GGS_string readProperty_mTargetName (void) const {
    return mProperty_mTargetName ;
  }

  public: GGS_string mProperty_mProductFileReference ;
  public: inline GGS_string readProperty_mProductFileReference (void) const {
    return mProperty_mProductFileReference ;
  }

  public: GGS_string mProperty_mProductFileName ;
  public: inline GGS_string readProperty_mProductFileName (void) const {
    return mProperty_mProductFileName ;
  }

  public: GGS_stringlist mProperty_mBuildPhaseRefList ;
  public: inline GGS_stringlist readProperty_mBuildPhaseRefList (void) const {
    return mProperty_mBuildPhaseRefList ;
  }

  public: GGS_string mProperty_mBuildPhaseRef ;
  public: inline GGS_string readProperty_mBuildPhaseRef (void) const {
    return mProperty_mBuildPhaseRef ;
  }

  public: GGS_string mProperty_mBuildConfigurationListRef ;
  public: inline GGS_string readProperty_mBuildConfigurationListRef (void) const {
    return mProperty_mBuildConfigurationListRef ;
  }

  public: GGS_stringlist mProperty_mBuildConfigurationSettingList ;
  public: inline GGS_stringlist readProperty_mBuildConfigurationSettingList (void) const {
    return mProperty_mBuildConfigurationSettingList ;
  }

  public: GGS_string mProperty_mBuildConfigurationRef ;
  public: inline GGS_string readProperty_mBuildConfigurationRef (void) const {
    return mProperty_mBuildConfigurationRef ;
  }

  public: GGS_stringlist mProperty_mFrameworksFileRefList ;
  public: inline GGS_stringlist readProperty_mFrameworksFileRefList (void) const {
    return mProperty_mFrameworksFileRefList ;
  }

  public: GGS_string mProperty_mFrameworkBuildPhaseRef ;
  public: inline GGS_string readProperty_mFrameworkBuildPhaseRef (void) const {
    return mProperty_mFrameworkBuildPhaseRef ;
  }

  public: GGS__32_stringlist mProperty_mDependentTargets ;
  public: inline GGS__32_stringlist readProperty_mDependentTargets (void) const {
    return mProperty_mDependentTargets ;
  }

  public: GGS_string mProperty_mResourceBuildRef ;
  public: inline GGS_string readProperty_mResourceBuildRef (void) const {
    return mProperty_mResourceBuildRef ;
  }

  public: GGS_stringlist mProperty_mResourceFileBuildRefs ;
  public: inline GGS_stringlist readProperty_mResourceFileBuildRefs (void) const {
    return mProperty_mResourceFileBuildRefs ;
  }

  public: GGS_string mProperty_mInfoPListFile ;
  public: inline GGS_string readProperty_mInfoPListFile (void) const {
    return mProperty_mInfoPListFile ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_XCodeAppTargetList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTargetRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetRef = inValue ;
  }

  public: inline void setter_setMTargetName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetName = inValue ;
  }

  public: inline void setter_setMProductFileReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileReference = inValue ;
  }

  public: inline void setter_setMProductFileName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileName = inValue ;
  }

  public: inline void setter_setMBuildPhaseRefList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRefList = inValue ;
  }

  public: inline void setter_setMBuildPhaseRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationListRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationListRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationSettingList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationSettingList = inValue ;
  }

  public: inline void setter_setMBuildConfigurationRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationRef = inValue ;
  }

  public: inline void setter_setMFrameworksFileRefList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworksFileRefList = inValue ;
  }

  public: inline void setter_setMFrameworkBuildPhaseRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworkBuildPhaseRef = inValue ;
  }

  public: inline void setter_setMDependentTargets (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDependentTargets = inValue ;
  }

  public: inline void setter_setMResourceBuildRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResourceBuildRef = inValue ;
  }

  public: inline void setter_setMResourceFileBuildRefs (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResourceFileBuildRefs = inValue ;
  }

  public: inline void setter_setMInfoPListFile (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInfoPListFile = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_XCodeAppTargetList_2E_element (const GGS_string & in_mTargetRef,
                                             const GGS_string & in_mTargetName,
                                             const GGS_string & in_mProductFileReference,
                                             const GGS_string & in_mProductFileName,
                                             const GGS_stringlist & in_mBuildPhaseRefList,
                                             const GGS_string & in_mBuildPhaseRef,
                                             const GGS_string & in_mBuildConfigurationListRef,
                                             const GGS_stringlist & in_mBuildConfigurationSettingList,
                                             const GGS_string & in_mBuildConfigurationRef,
                                             const GGS_stringlist & in_mFrameworksFileRefList,
                                             const GGS_string & in_mFrameworkBuildPhaseRef,
                                             const GGS__32_stringlist & in_mDependentTargets,
                                             const GGS_string & in_mResourceBuildRef,
                                             const GGS_stringlist & in_mResourceFileBuildRefs,
                                             const GGS_string & in_mInfoPListFile) ;

//--------------------------------- Copy constructor
  public: GGS_XCodeAppTargetList_2E_element (const GGS_XCodeAppTargetList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_XCodeAppTargetList_2E_element & operator = (const GGS_XCodeAppTargetList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeAppTargetList_2E_element init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                                     const class GGS_string & inOperand1,
                                                                                                                     const class GGS_string & inOperand2,
                                                                                                                     const class GGS_string & inOperand3,
                                                                                                                     const class GGS_stringlist & inOperand4,
                                                                                                                     const class GGS_string & inOperand5,
                                                                                                                     const class GGS_string & inOperand6,
                                                                                                                     const class GGS_stringlist & inOperand7,
                                                                                                                     const class GGS_string & inOperand8,
                                                                                                                     const class GGS_stringlist & inOperand9,
                                                                                                                     const class GGS_string & inOperand10,
                                                                                                                     const class GGS__32_stringlist & inOperand11,
                                                                                                                     const class GGS_string & inOperand12,
                                                                                                                     const class GGS_stringlist & inOperand13,
                                                                                                                     const class GGS_string & inOperand14,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XCodeAppTargetList_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_XCodeAppTargetList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         const class GGS_string & inOperand2,
                                                                         const class GGS_string & inOperand3,
                                                                         const class GGS_stringlist & inOperand4,
                                                                         const class GGS_string & inOperand5,
                                                                         const class GGS_string & inOperand6,
                                                                         const class GGS_stringlist & inOperand7,
                                                                         const class GGS_string & inOperand8,
                                                                         const class GGS_stringlist & inOperand9,
                                                                         const class GGS_string & inOperand10,
                                                                         const class GGS__32_stringlist & inOperand11,
                                                                         const class GGS_string & inOperand12,
                                                                         const class GGS_stringlist & inOperand13,
                                                                         const class GGS_string & inOperand14,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeAppTargetList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @BuildFileList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_BuildFileList final {
  public: DownEnumerator_BuildFileList (const class GGS_BuildFileList & inList) ;

  public: ~ DownEnumerator_BuildFileList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mFileReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mFileName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildReference (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_BuildFileList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_BuildFileList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_BuildFileList (const DownEnumerator_BuildFileList &) = delete ;
  private: DownEnumerator_BuildFileList & operator = (const DownEnumerator_BuildFileList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_BuildFileList final {
  public: UpEnumerator_BuildFileList (const class GGS_BuildFileList & inList)  ;

  public: ~ UpEnumerator_BuildFileList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mFileReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mFileName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildReference (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_BuildFileList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_BuildFileList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_BuildFileList (const UpEnumerator_BuildFileList &) = delete ;
  private: UpEnumerator_BuildFileList & operator = (const UpEnumerator_BuildFileList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @BuildFileList list
//--------------------------------------------------------------------------------------------------

class GGS_BuildFileList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_BuildFileList_2E_element> mArray ;

//--- Default constructor
  public: GGS_BuildFileList (void) ;

//--- Destructor
  public: virtual ~ GGS_BuildFileList (void) = default ;

//--- Copy
  public: GGS_BuildFileList (const GGS_BuildFileList &) = default ;
  public: GGS_BuildFileList & operator = (const GGS_BuildFileList &) = default ;

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
  public : inline GenericArray <GGS_BuildFileList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_BuildFileList subList (const int32_t inStart,
                                      const int32_t inLength,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_BuildFileList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mFileReference,
                                                 const class GGS_string & in_mFileName,
                                                 const class GGS_string & in_mBuildReference
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_BuildFileList init (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_BuildFileList extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_BuildFileList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_BuildFileList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                   const class GGS_string & inOperand1,
                                                                   const class GGS_string & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_BuildFileList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_string & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_BuildFileList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_BuildFileList add_operation (const GGS_BuildFileList & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildReferenceAtIndex (class GGS_string constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFileNameAtIndex (class GGS_string constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFileReferenceAtIndex (class GGS_string constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBuildReferenceAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mFileNameAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mFileReferenceAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_BuildFileList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_BuildFileList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_BuildFileList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_BuildFileList ;
  friend class DownEnumerator_BuildFileList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_BuildFileList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @BuildFileList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_BuildFileList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mFileReference ;
  public: inline GGS_string readProperty_mFileReference (void) const {
    return mProperty_mFileReference ;
  }

  public: GGS_string mProperty_mFileName ;
  public: inline GGS_string readProperty_mFileName (void) const {
    return mProperty_mFileName ;
  }

  public: GGS_string mProperty_mBuildReference ;
  public: inline GGS_string readProperty_mBuildReference (void) const {
    return mProperty_mBuildReference ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_BuildFileList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFileReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFileReference = inValue ;
  }

  public: inline void setter_setMFileName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFileName = inValue ;
  }

  public: inline void setter_setMBuildReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildReference = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_BuildFileList_2E_element (const GGS_string & in_mFileReference,
                                        const GGS_string & in_mFileName,
                                        const GGS_string & in_mBuildReference) ;

//--------------------------------- Copy constructor
  public: GGS_BuildFileList_2E_element (const GGS_BuildFileList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_BuildFileList_2E_element & operator = (const GGS_BuildFileList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_BuildFileList_2E_element init_21__21__21_ (const class GGS_string & inOperand0,
                                                                const class GGS_string & inOperand1,
                                                                const class GGS_string & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_BuildFileList_2E_element extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_BuildFileList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                    const class GGS_string & inOperand1,
                                                                    const class GGS_string & inOperand2,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_BuildFileList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractBooleanMultipleBindingExpressionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractBooleanMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractBooleanMultipleBindingExpressionAST (const class cPtr_abstractBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractBooleanMultipleBindingExpressionAST init (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractBooleanMultipleBindingExpressionAST extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST ;

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


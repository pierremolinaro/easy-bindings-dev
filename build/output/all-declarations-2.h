#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @bindingSpecificationMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_bindingSpecificationMap final {

  public: DownEnumerator_bindingSpecificationMap (const class GGS_bindingSpecificationMap & inMap) ;

  public: ~ DownEnumerator_bindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mOutletSuperClassName (LOCATION_ARGS) const ;

  public: class GGS_outletBindingSpecificationMap current_mBindingMap (LOCATION_ARGS) const ;

  public: class GGS_bindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_bindingSpecificationMap (const DownEnumerator_bindingSpecificationMap &) = delete ;
  private: DownEnumerator_bindingSpecificationMap & operator = (const DownEnumerator_bindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_bindingSpecificationMap final {
  public: UpEnumerator_bindingSpecificationMap (const class GGS_bindingSpecificationMap & inMap)  ;

  public: ~ UpEnumerator_bindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOutletSuperClassName (LOCATION_ARGS) const ;
  public: class GGS_outletBindingSpecificationMap current_mBindingMap (LOCATION_ARGS) const ;
  public: class GGS_bindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_bindingSpecificationMap (const UpEnumerator_bindingSpecificationMap &) = delete ;
  private: UpEnumerator_bindingSpecificationMap & operator = (const UpEnumerator_bindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_bindingSpecificationMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_bindingSpecificationMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_bindingSpecificationMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_bindingSpecificationMap (void) ;

//--- Handle copy
  public: GGS_bindingSpecificationMap (const GGS_bindingSpecificationMap & inSource) ;
  public: GGS_bindingSpecificationMap & operator = (const GGS_bindingSpecificationMap & inSource) ;

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
  protected: void performInsert (const class GGS_bindingSpecificationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bindingSpecificationMap init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bindingSpecificationMap extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bindingSpecificationMap class_func_mapWithMapToOverride (const class GGS_bindingSpecificationMap & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring constinArgument1,
                                 class GGS_outletBindingSpecificationMap constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring & outArgument1,
                                 class GGS_outletBindingSpecificationMap & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMBindingMapForKey (class GGS_outletBindingSpecificationMap constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMOutletSuperClassNameForKey (class GGS_lstring constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring & outArgument1,
                                 class GGS_outletBindingSpecificationMap & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_outletBindingSpecificationMap getter_mBindingMapForKey (const class GGS_string & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mOutletSuperClassNameForKey (const class GGS_string & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_bindingSpecificationMap getter_overriddenMap (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_bindingSpecificationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_bindingSpecificationMap ;
  friend class DownEnumerator_bindingSpecificationMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bindingSpecificationMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletBindingSpecificationMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_outletBindingSpecificationMap final {

  public: DownEnumerator_outletBindingSpecificationMap (const class GGS_outletBindingSpecificationMap & inMap) ;

  public: ~ DownEnumerator_outletBindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_outletBindingSpecificationModelList current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;

  public: class GGS_controllerBindingOptionDecoratedList current_mControllerBindingOptionList (LOCATION_ARGS) const ;

  public: class GGS_outletBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_outletBindingSpecificationMap (const DownEnumerator_outletBindingSpecificationMap &) = delete ;
  private: DownEnumerator_outletBindingSpecificationMap & operator = (const DownEnumerator_outletBindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_outletBindingSpecificationMap final {
  public: UpEnumerator_outletBindingSpecificationMap (const class GGS_outletBindingSpecificationMap & inMap)  ;

  public: ~ UpEnumerator_outletBindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_outletBindingSpecificationModelList current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;
  public: class GGS_controllerBindingOptionDecoratedList current_mControllerBindingOptionList (LOCATION_ARGS) const ;
  public: class GGS_outletBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_outletBindingSpecificationMap (const UpEnumerator_outletBindingSpecificationMap &) = delete ;
  private: UpEnumerator_outletBindingSpecificationMap & operator = (const UpEnumerator_outletBindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_outletBindingSpecificationMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_outletBindingSpecificationMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_outletBindingSpecificationMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_outletBindingSpecificationMap (void) ;

//--- Handle copy
  public: GGS_outletBindingSpecificationMap (const GGS_outletBindingSpecificationMap & inSource) ;
  public: GGS_outletBindingSpecificationMap & operator = (const GGS_outletBindingSpecificationMap & inSource) ;

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
  protected: void performInsert (const class GGS_outletBindingSpecificationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletBindingSpecificationMap init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletBindingSpecificationMap extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outletBindingSpecificationMap class_func_mapWithMapToOverride (const class GGS_outletBindingSpecificationMap & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_outletBindingSpecificationModelList constinArgument1,
                                 class GGS_controllerBindingOptionDecoratedList constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMControllerBindingOptionListForKey (class GGS_controllerBindingOptionDecoratedList constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMOutletBindingSpecificationModelListForKey (class GGS_outletBindingSpecificationModelList constinArgument0,
                                                                     class GGS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_outletBindingSpecificationModelList & outArgument1,
                                 class GGS_controllerBindingOptionDecoratedList & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_controllerBindingOptionDecoratedList getter_mControllerBindingOptionListForKey (const class GGS_string & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_outletBindingSpecificationModelList getter_mOutletBindingSpecificationModelListForKey (const class GGS_string & constinOperand0,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_outletBindingSpecificationMap getter_overriddenMap (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_outletBindingSpecificationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_outletBindingSpecificationMap ;
  friend class DownEnumerator_outletBindingSpecificationMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bindingSpecificationMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_bindingSpecificationMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mOutletSuperClassName ;
  public: inline GGS_lstring readProperty_mOutletSuperClassName (void) const {
    return mProperty_mOutletSuperClassName ;
  }

  public: GGS_outletBindingSpecificationMap mProperty_mBindingMap ;
  public: inline GGS_outletBindingSpecificationMap readProperty_mBindingMap (void) const {
    return mProperty_mBindingMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_bindingSpecificationMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMOutletSuperClassName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletSuperClassName = inValue ;
  }

  public: inline void setter_setMBindingMap (const GGS_outletBindingSpecificationMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_bindingSpecificationMap_2E_element (const GGS_lstring & in_lkey,
                                                  const GGS_lstring & in_mOutletSuperClassName,
                                                  const GGS_outletBindingSpecificationMap & in_mBindingMap) ;

//--------------------------------- Copy constructor
  public: GGS_bindingSpecificationMap_2E_element (const GGS_bindingSpecificationMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_bindingSpecificationMap_2E_element & operator = (const GGS_bindingSpecificationMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bindingSpecificationMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          const class GGS_outletBindingSpecificationMap & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bindingSpecificationMap_2E_element extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bindingSpecificationMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: bindingSpecificationMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_bindingSpecificationMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_bindingSpecificationMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_bindingSpecificationMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_bindingSpecificationMap_2E_element_3F_ (const GGS_bindingSpecificationMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_bindingSpecificationMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_bindingSpecificationMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_bindingSpecificationMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bindingSpecificationMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autolayoutViewClassMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_autolayoutViewClassMap final {

  public: DownEnumerator_autolayoutViewClassMap (const class GGS_autolayoutViewClassMap & inMap) ;

  public: ~ DownEnumerator_autolayoutViewClassMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mSuperClassName (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandlesRunAction (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandlesTableValueBinding (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandleEnabledBinding (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandleHiddenBinding (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHandleGraphicControllerBinding (LOCATION_ARGS) const ;

  public: class GGS_bool current_mUserDefined (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutClassParameterList current_mParameterList (LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewFunctionMap current_mAutoLayoutViewFunctionMap (LOCATION_ARGS) const ;

  public: class GGS_autolayoutViewClassMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autolayoutViewClassMap (const DownEnumerator_autolayoutViewClassMap &) = delete ;
  private: DownEnumerator_autolayoutViewClassMap & operator = (const DownEnumerator_autolayoutViewClassMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autolayoutViewClassMap final {
  public: UpEnumerator_autolayoutViewClassMap (const class GGS_autolayoutViewClassMap & inMap)  ;

  public: ~ UpEnumerator_autolayoutViewClassMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSuperClassName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandlesRunAction (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandlesTableValueBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandleEnabledBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandleHiddenBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHandleGraphicControllerBinding (LOCATION_ARGS) const ;
  public: class GGS_bool current_mUserDefined (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutClassParameterList current_mParameterList (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutViewFunctionMap current_mAutoLayoutViewFunctionMap (LOCATION_ARGS) const ;
  public: class GGS_autolayoutViewClassMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autolayoutViewClassMap (const UpEnumerator_autolayoutViewClassMap &) = delete ;
  private: UpEnumerator_autolayoutViewClassMap & operator = (const UpEnumerator_autolayoutViewClassMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_autolayoutViewClassMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_autolayoutViewClassMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_autolayoutViewClassMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_autolayoutViewClassMap (void) ;

//--- Handle copy
  public: GGS_autolayoutViewClassMap (const GGS_autolayoutViewClassMap & inSource) ;
  public: GGS_autolayoutViewClassMap & operator = (const GGS_autolayoutViewClassMap & inSource) ;

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
  protected: void performInsert (const class GGS_autolayoutViewClassMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autolayoutViewClassMap init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autolayoutViewClassMap extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autolayoutViewClassMap class_func_mapWithMapToOverride (const class GGS_autolayoutViewClassMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring constinArgument1,
                                 class GGS_bool constinArgument2,
                                 class GGS_bool constinArgument3,
                                 class GGS_bool constinArgument4,
                                 class GGS_bool constinArgument5,
                                 class GGS_bool constinArgument6,
                                 class GGS_bool constinArgument7,
                                 class GGS_autoLayoutClassParameterList constinArgument8,
                                 class GGS_astAutoLayoutViewFunctionMap constinArgument9,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMAutoLayoutViewFunctionMapForKey (class GGS_astAutoLayoutViewFunctionMap constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMHandleEnabledBindingForKey (class GGS_bool constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMHandleGraphicControllerBindingForKey (class GGS_bool constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMHandleHiddenBindingForKey (class GGS_bool constinArgument0,
                                                     class GGS_string constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMHandlesRunActionForKey (class GGS_bool constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMHandlesTableValueBindingForKey (class GGS_bool constinArgument0,
                                                          class GGS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMParameterListForKey (class GGS_autoLayoutClassParameterList constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMSuperClassNameForKey (class GGS_lstring constinArgument0,
                                                class GGS_string constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMUserDefinedForKey (class GGS_bool constinArgument0,
                                             class GGS_string constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring & outArgument1,
                                 class GGS_bool & outArgument2,
                                 class GGS_bool & outArgument3,
                                 class GGS_bool & outArgument4,
                                 class GGS_bool & outArgument5,
                                 class GGS_bool & outArgument6,
                                 class GGS_bool & outArgument7,
                                 class GGS_autoLayoutClassParameterList & outArgument8,
                                 class GGS_astAutoLayoutViewFunctionMap & outArgument9,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewFunctionMap getter_mAutoLayoutViewFunctionMapForKey (const class GGS_string & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mHandleEnabledBindingForKey (const class GGS_string & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mHandleGraphicControllerBindingForKey (const class GGS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mHandleHiddenBindingForKey (const class GGS_string & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mHandlesRunActionForKey (const class GGS_string & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mHandlesTableValueBindingForKey (const class GGS_string & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutClassParameterList getter_mParameterListForKey (const class GGS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mSuperClassNameForKey (const class GGS_string & constinOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mUserDefinedForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_autolayoutViewClassMap getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_autolayoutViewClassMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autolayoutViewClassMap ;
  friend class DownEnumerator_autolayoutViewClassMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutViewClassMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutClassParameterList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutClassParameterList final {
  public: DownEnumerator_autoLayoutClassParameterList (const class GGS_autoLayoutClassParameterList & inList) ;

  public: ~ DownEnumerator_autoLayoutClassParameterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mParameterName (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutClassParameterType current_mParameterType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutClassParameterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutClassParameterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutClassParameterList (const DownEnumerator_autoLayoutClassParameterList &) = delete ;
  private: DownEnumerator_autoLayoutClassParameterList & operator = (const DownEnumerator_autoLayoutClassParameterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutClassParameterList final {
  public: UpEnumerator_autoLayoutClassParameterList (const class GGS_autoLayoutClassParameterList & inList)  ;

  public: ~ UpEnumerator_autoLayoutClassParameterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mParameterName (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutClassParameterType current_mParameterType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_autoLayoutClassParameterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_autoLayoutClassParameterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutClassParameterList (const UpEnumerator_autoLayoutClassParameterList &) = delete ;
  private: UpEnumerator_autoLayoutClassParameterList & operator = (const UpEnumerator_autoLayoutClassParameterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @autoLayoutClassParameterList list
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutClassParameterList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_autoLayoutClassParameterList_2E_element> mArray ;

//--- Default constructor
  public: GGS_autoLayoutClassParameterList (void) ;

//--- Destructor
  public: virtual ~ GGS_autoLayoutClassParameterList (void) = default ;

//--- Copy
  public: GGS_autoLayoutClassParameterList (const GGS_autoLayoutClassParameterList &) = default ;
  public: GGS_autoLayoutClassParameterList & operator = (const GGS_autoLayoutClassParameterList &) = default ;

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
  public : inline GenericArray <GGS_autoLayoutClassParameterList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_autoLayoutClassParameterList subList (const int32_t inStart,
                                                     const int32_t inLength,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_autoLayoutClassParameterList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mParameterName,
                                                 const class GGS_autoLayoutClassParameterType & in_mParameterType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutClassParameterList init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutClassParameterList extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutClassParameterList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_autoLayoutClassParameterType & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_autoLayoutClassParameterList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_autoLayoutClassParameterType & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_autoLayoutClassParameterList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_autoLayoutClassParameterList add_operation (const GGS_autoLayoutClassParameterList & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_autoLayoutClassParameterType constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_autoLayoutClassParameterType constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_autoLayoutClassParameterType & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_autoLayoutClassParameterType & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_autoLayoutClassParameterType & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMParameterNameAtIndex (class GGS_lstring constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMParameterTypeAtIndex (class GGS_autoLayoutClassParameterType constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_autoLayoutClassParameterType & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_autoLayoutClassParameterType & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mParameterNameAtIndex (const class GGS_uint & constinOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutClassParameterType getter_mParameterTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutClassParameterList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutClassParameterList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutClassParameterList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutClassParameterList ;
  friend class DownEnumerator_autoLayoutClassParameterList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewFunctionMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_astAutoLayoutViewFunctionMap final {

  public: DownEnumerator_astAutoLayoutViewFunctionMap (const class GGS_astAutoLayoutViewFunctionMap & inMap) ;

  public: ~ DownEnumerator_astAutoLayoutViewFunctionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutClassParameterList current_mFomalParameterList (LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewFunctionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_astAutoLayoutViewFunctionMap (const DownEnumerator_astAutoLayoutViewFunctionMap &) = delete ;
  private: DownEnumerator_astAutoLayoutViewFunctionMap & operator = (const DownEnumerator_astAutoLayoutViewFunctionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_astAutoLayoutViewFunctionMap final {
  public: UpEnumerator_astAutoLayoutViewFunctionMap (const class GGS_astAutoLayoutViewFunctionMap & inMap)  ;

  public: ~ UpEnumerator_astAutoLayoutViewFunctionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutClassParameterList current_mFomalParameterList (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutViewFunctionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_astAutoLayoutViewFunctionMap (const UpEnumerator_astAutoLayoutViewFunctionMap &) = delete ;
  private: UpEnumerator_astAutoLayoutViewFunctionMap & operator = (const UpEnumerator_astAutoLayoutViewFunctionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewFunctionMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_astAutoLayoutViewFunctionMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_astAutoLayoutViewFunctionMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_astAutoLayoutViewFunctionMap (void) ;

//--- Handle copy
  public: GGS_astAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inSource) ;
  public: GGS_astAutoLayoutViewFunctionMap & operator = (const GGS_astAutoLayoutViewFunctionMap & inSource) ;

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
  protected: void performInsert (const class GGS_astAutoLayoutViewFunctionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewFunctionMap init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewFunctionMap extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewFunctionMap class_func_mapWithMapToOverride (const class GGS_astAutoLayoutViewFunctionMap & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_autoLayoutClassParameterList constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMFomalParameterListForKey (class GGS_autoLayoutClassParameterList constinArgument0,
                                                    class GGS_string constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_autoLayoutClassParameterList & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutClassParameterList getter_mFomalParameterListForKey (const class GGS_string & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewFunctionMap getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_astAutoLayoutViewFunctionMap ;
  friend class DownEnumerator_astAutoLayoutViewFunctionMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autolayoutViewClassMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autolayoutViewClassMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mSuperClassName ;
  public: inline GGS_lstring readProperty_mSuperClassName (void) const {
    return mProperty_mSuperClassName ;
  }

  public: GGS_bool mProperty_mHandlesRunAction ;
  public: inline GGS_bool readProperty_mHandlesRunAction (void) const {
    return mProperty_mHandlesRunAction ;
  }

  public: GGS_bool mProperty_mHandlesTableValueBinding ;
  public: inline GGS_bool readProperty_mHandlesTableValueBinding (void) const {
    return mProperty_mHandlesTableValueBinding ;
  }

  public: GGS_bool mProperty_mHandleEnabledBinding ;
  public: inline GGS_bool readProperty_mHandleEnabledBinding (void) const {
    return mProperty_mHandleEnabledBinding ;
  }

  public: GGS_bool mProperty_mHandleHiddenBinding ;
  public: inline GGS_bool readProperty_mHandleHiddenBinding (void) const {
    return mProperty_mHandleHiddenBinding ;
  }

  public: GGS_bool mProperty_mHandleGraphicControllerBinding ;
  public: inline GGS_bool readProperty_mHandleGraphicControllerBinding (void) const {
    return mProperty_mHandleGraphicControllerBinding ;
  }

  public: GGS_bool mProperty_mUserDefined ;
  public: inline GGS_bool readProperty_mUserDefined (void) const {
    return mProperty_mUserDefined ;
  }

  public: GGS_autoLayoutClassParameterList mProperty_mParameterList ;
  public: inline GGS_autoLayoutClassParameterList readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

  public: GGS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutViewFunctionMap ;
  public: inline GGS_astAutoLayoutViewFunctionMap readProperty_mAutoLayoutViewFunctionMap (void) const {
    return mProperty_mAutoLayoutViewFunctionMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autolayoutViewClassMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSuperClassName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSuperClassName = inValue ;
  }

  public: inline void setter_setMHandlesRunAction (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandlesRunAction = inValue ;
  }

  public: inline void setter_setMHandlesTableValueBinding (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandlesTableValueBinding = inValue ;
  }

  public: inline void setter_setMHandleEnabledBinding (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandleEnabledBinding = inValue ;
  }

  public: inline void setter_setMHandleHiddenBinding (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandleHiddenBinding = inValue ;
  }

  public: inline void setter_setMHandleGraphicControllerBinding (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandleGraphicControllerBinding = inValue ;
  }

  public: inline void setter_setMUserDefined (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUserDefined = inValue ;
  }

  public: inline void setter_setMParameterList (const GGS_autoLayoutClassParameterList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

  public: inline void setter_setMAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutViewFunctionMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autolayoutViewClassMap_2E_element (const GGS_lstring & in_lkey,
                                                 const GGS_lstring & in_mSuperClassName,
                                                 const GGS_bool & in_mHandlesRunAction,
                                                 const GGS_bool & in_mHandlesTableValueBinding,
                                                 const GGS_bool & in_mHandleEnabledBinding,
                                                 const GGS_bool & in_mHandleHiddenBinding,
                                                 const GGS_bool & in_mHandleGraphicControllerBinding,
                                                 const GGS_bool & in_mUserDefined,
                                                 const GGS_autoLayoutClassParameterList & in_mParameterList,
                                                 const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap) ;

//--------------------------------- Copy constructor
  public: GGS_autolayoutViewClassMap_2E_element (const GGS_autolayoutViewClassMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autolayoutViewClassMap_2E_element & operator = (const GGS_autolayoutViewClassMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autolayoutViewClassMap_2E_element init_21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                     const class GGS_lstring & inOperand1,
                                                                                                     const class GGS_bool & inOperand2,
                                                                                                     const class GGS_bool & inOperand3,
                                                                                                     const class GGS_bool & inOperand4,
                                                                                                     const class GGS_bool & inOperand5,
                                                                                                     const class GGS_bool & inOperand6,
                                                                                                     const class GGS_bool & inOperand7,
                                                                                                     const class GGS_autoLayoutClassParameterList & inOperand8,
                                                                                                     const class GGS_astAutoLayoutViewFunctionMap & inOperand9,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autolayoutViewClassMap_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutViewClassMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: autolayoutViewClassMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_autolayoutViewClassMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_autolayoutViewClassMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_autolayoutViewClassMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_autolayoutViewClassMap_2E_element_3F_ (const GGS_autolayoutViewClassMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_autolayoutViewClassMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_autolayoutViewClassMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_autolayoutViewClassMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutViewClassMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutBindingSpecificationMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutBindingSpecificationMap final {

  public: DownEnumerator_autoLayoutBindingSpecificationMap (const class GGS_autoLayoutBindingSpecificationMap & inMap) ;

  public: ~ DownEnumerator_autoLayoutBindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mOutletSuperClassName (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewBindingSpecificationMap current_mBindingMap (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutBindingSpecificationMap (const DownEnumerator_autoLayoutBindingSpecificationMap &) = delete ;
  private: DownEnumerator_autoLayoutBindingSpecificationMap & operator = (const DownEnumerator_autoLayoutBindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutBindingSpecificationMap final {
  public: UpEnumerator_autoLayoutBindingSpecificationMap (const class GGS_autoLayoutBindingSpecificationMap & inMap)  ;

  public: ~ UpEnumerator_autoLayoutBindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOutletSuperClassName (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutViewBindingSpecificationMap current_mBindingMap (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutBindingSpecificationMap (const UpEnumerator_autoLayoutBindingSpecificationMap &) = delete ;
  private: UpEnumerator_autoLayoutBindingSpecificationMap & operator = (const UpEnumerator_autoLayoutBindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutBindingSpecificationMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_autoLayoutBindingSpecificationMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_autoLayoutBindingSpecificationMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_autoLayoutBindingSpecificationMap (void) ;

//--- Handle copy
  public: GGS_autoLayoutBindingSpecificationMap (const GGS_autoLayoutBindingSpecificationMap & inSource) ;
  public: GGS_autoLayoutBindingSpecificationMap & operator = (const GGS_autoLayoutBindingSpecificationMap & inSource) ;

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
  protected: void performInsert (const class GGS_autoLayoutBindingSpecificationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutBindingSpecificationMap init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutBindingSpecificationMap extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutBindingSpecificationMap class_func_mapWithMapToOverride (const class GGS_autoLayoutBindingSpecificationMap & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring constinArgument1,
                                 class GGS_autoLayoutViewBindingSpecificationMap constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring & outArgument1,
                                 class GGS_autoLayoutViewBindingSpecificationMap & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMBindingMapForKey (class GGS_autoLayoutViewBindingSpecificationMap constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMOutletSuperClassNameForKey (class GGS_lstring constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring & outArgument1,
                                 class GGS_autoLayoutViewBindingSpecificationMap & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewBindingSpecificationMap getter_mBindingMapForKey (const class GGS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mOutletSuperClassNameForKey (const class GGS_string & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutBindingSpecificationMap getter_overriddenMap (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutBindingSpecificationMap ;
  friend class DownEnumerator_autoLayoutBindingSpecificationMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewBindingSpecificationMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_autoLayoutViewBindingSpecificationMap final {

  public: DownEnumerator_autoLayoutViewBindingSpecificationMap (const class GGS_autoLayoutViewBindingSpecificationMap & inMap) ;

  public: ~ DownEnumerator_autoLayoutViewBindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_outletBindingSpecificationModelList current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;

  public: class GGS_controllerBindingOptionDecoratedList current_mControllerBindingOptionList (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_autoLayoutViewBindingSpecificationMap (const DownEnumerator_autoLayoutViewBindingSpecificationMap &) = delete ;
  private: DownEnumerator_autoLayoutViewBindingSpecificationMap & operator = (const DownEnumerator_autoLayoutViewBindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_autoLayoutViewBindingSpecificationMap final {
  public: UpEnumerator_autoLayoutViewBindingSpecificationMap (const class GGS_autoLayoutViewBindingSpecificationMap & inMap)  ;

  public: ~ UpEnumerator_autoLayoutViewBindingSpecificationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_outletBindingSpecificationModelList current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;
  public: class GGS_controllerBindingOptionDecoratedList current_mControllerBindingOptionList (LOCATION_ARGS) const ;
  public: class GGS_autoLayoutViewBindingSpecificationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_autoLayoutViewBindingSpecificationMap (const UpEnumerator_autoLayoutViewBindingSpecificationMap &) = delete ;
  private: UpEnumerator_autoLayoutViewBindingSpecificationMap & operator = (const UpEnumerator_autoLayoutViewBindingSpecificationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewBindingSpecificationMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_autoLayoutViewBindingSpecificationMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_autoLayoutViewBindingSpecificationMap (void) ;

//--- Handle copy
  public: GGS_autoLayoutViewBindingSpecificationMap (const GGS_autoLayoutViewBindingSpecificationMap & inSource) ;
  public: GGS_autoLayoutViewBindingSpecificationMap & operator = (const GGS_autoLayoutViewBindingSpecificationMap & inSource) ;

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
  protected: void performInsert (const class GGS_autoLayoutViewBindingSpecificationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewBindingSpecificationMap init (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewBindingSpecificationMap extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_autoLayoutViewBindingSpecificationMap class_func_mapWithMapToOverride (const class GGS_autoLayoutViewBindingSpecificationMap & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_outletBindingSpecificationModelList constinArgument1,
                                 class GGS_controllerBindingOptionDecoratedList constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMControllerBindingOptionListForKey (class GGS_controllerBindingOptionDecoratedList constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMOutletBindingSpecificationModelListForKey (class GGS_outletBindingSpecificationModelList constinArgument0,
                                                                     class GGS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_outletBindingSpecificationModelList & outArgument1,
                                 class GGS_controllerBindingOptionDecoratedList & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_controllerBindingOptionDecoratedList getter_mControllerBindingOptionListForKey (const class GGS_string & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_outletBindingSpecificationModelList getter_mOutletBindingSpecificationModelListForKey (const class GGS_string & constinOperand0,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewBindingSpecificationMap getter_overriddenMap (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_autoLayoutViewBindingSpecificationMap ;
  friend class DownEnumerator_autoLayoutViewBindingSpecificationMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutBindingSpecificationMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutBindingSpecificationMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mOutletSuperClassName ;
  public: inline GGS_lstring readProperty_mOutletSuperClassName (void) const {
    return mProperty_mOutletSuperClassName ;
  }

  public: GGS_autoLayoutViewBindingSpecificationMap mProperty_mBindingMap ;
  public: inline GGS_autoLayoutViewBindingSpecificationMap readProperty_mBindingMap (void) const {
    return mProperty_mBindingMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutBindingSpecificationMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMOutletSuperClassName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOutletSuperClassName = inValue ;
  }

  public: inline void setter_setMBindingMap (const GGS_autoLayoutViewBindingSpecificationMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_autoLayoutBindingSpecificationMap_2E_element (const GGS_lstring & in_lkey,
                                                            const GGS_lstring & in_mOutletSuperClassName,
                                                            const GGS_autoLayoutViewBindingSpecificationMap & in_mBindingMap) ;

//--------------------------------- Copy constructor
  public: GGS_autoLayoutBindingSpecificationMap_2E_element (const GGS_autoLayoutBindingSpecificationMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_autoLayoutBindingSpecificationMap_2E_element & operator = (const GGS_autoLayoutBindingSpecificationMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutBindingSpecificationMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstring & inOperand1,
                                                                                    const class GGS_autoLayoutViewBindingSpecificationMap & inOperand2,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutBindingSpecificationMap_2E_element extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: autoLayoutBindingSpecificationMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_autoLayoutBindingSpecificationMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ (const GGS_autoLayoutBindingSpecificationMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_autoLayoutBindingSpecificationMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewFunctionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewFunctionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_autoLayoutClassParameterList mProperty_mFomalParameterList ;
  public: inline GGS_autoLayoutClassParameterList readProperty_mFomalParameterList (void) const {
    return mProperty_mFomalParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewFunctionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFomalParameterList (const GGS_autoLayoutClassParameterList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFomalParameterList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_astAutoLayoutViewFunctionMap_2E_element (const GGS_lstring & in_lkey,
                                                       const GGS_autoLayoutClassParameterList & in_mFomalParameterList) ;

//--------------------------------- Copy constructor
  public: GGS_astAutoLayoutViewFunctionMap_2E_element (const GGS_astAutoLayoutViewFunctionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astAutoLayoutViewFunctionMap_2E_element & operator = (const GGS_astAutoLayoutViewFunctionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewFunctionMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_autoLayoutClassParameterList & inOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewFunctionMap_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: astAutoLayoutViewFunctionMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_astAutoLayoutViewFunctionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ (const GGS_astAutoLayoutViewFunctionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_astAutoLayoutViewFunctionMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumerationFunctionListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_enumerationFunctionListAST final {
  public: DownEnumerator_enumerationFunctionListAST (const class GGS_enumerationFunctionListAST & inList) ;

  public: ~ DownEnumerator_enumerationFunctionListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mEnumName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public: class GGS__32_lstringlist current_mAssociationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_enumerationFunctionListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_enumerationFunctionListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_enumerationFunctionListAST (const DownEnumerator_enumerationFunctionListAST &) = delete ;
  private: DownEnumerator_enumerationFunctionListAST & operator = (const DownEnumerator_enumerationFunctionListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_enumerationFunctionListAST final {
  public: UpEnumerator_enumerationFunctionListAST (const class GGS_enumerationFunctionListAST & inList)  ;

  public: ~ UpEnumerator_enumerationFunctionListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mEnumName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public: class GGS__32_lstringlist current_mAssociationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_enumerationFunctionListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_enumerationFunctionListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_enumerationFunctionListAST (const UpEnumerator_enumerationFunctionListAST &) = delete ;
  private: UpEnumerator_enumerationFunctionListAST & operator = (const UpEnumerator_enumerationFunctionListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @enumerationFunctionListAST list
//--------------------------------------------------------------------------------------------------

class GGS_enumerationFunctionListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_enumerationFunctionListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_enumerationFunctionListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_enumerationFunctionListAST (void) = default ;

//--- Copy
  public: GGS_enumerationFunctionListAST (const GGS_enumerationFunctionListAST &) = default ;
  public: GGS_enumerationFunctionListAST & operator = (const GGS_enumerationFunctionListAST &) = default ;

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
  public : inline GenericArray <GGS_enumerationFunctionListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_enumerationFunctionListAST subList (const int32_t inStart,
                                                   const int32_t inLength,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_enumerationFunctionListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mEnumName,
                                                 const class GGS_lstring & in_mFunctionName,
                                                 const class GGS__32_lstringlist & in_mAssociationList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumerationFunctionListAST init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumerationFunctionListAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumerationFunctionListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS__32_lstringlist & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_enumerationFunctionListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1,
                                   const class GGS__32_lstringlist & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_enumerationFunctionListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_enumerationFunctionListAST add_operation (const GGS_enumerationFunctionListAST & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstring constinArgument1,
                              class GGS__32_lstringlist constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS__32_lstringlist constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstring & outArgument1,
                                class GGS__32_lstringlist & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstring & outArgument1,
                               class GGS__32_lstringlist & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS__32_lstringlist & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMAssociationListAtIndex (class GGS__32_lstringlist constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMEnumNameAtIndex (class GGS_lstring constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMFunctionNameAtIndex (class GGS_lstring constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstring & outArgument1,
                             class GGS__32_lstringlist & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstring & outArgument1,
                            class GGS__32_lstringlist & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS__32_lstringlist getter_mAssociationListAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mEnumNameAtIndex (const class GGS_uint & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFunctionNameAtIndex (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_enumerationFunctionListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_enumerationFunctionListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_enumerationFunctionListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_enumerationFunctionListAST ;
  friend class DownEnumerator_enumerationFunctionListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationFunctionListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumerationFunctionListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_enumerationFunctionListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mEnumName ;
  public: inline GGS_lstring readProperty_mEnumName (void) const {
    return mProperty_mEnumName ;
  }

  public: GGS_lstring mProperty_mFunctionName ;
  public: inline GGS_lstring readProperty_mFunctionName (void) const {
    return mProperty_mFunctionName ;
  }

  public: GGS__32_lstringlist mProperty_mAssociationList ;
  public: inline GGS__32_lstringlist readProperty_mAssociationList (void) const {
    return mProperty_mAssociationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_enumerationFunctionListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEnumName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumName = inValue ;
  }

  public: inline void setter_setMFunctionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionName = inValue ;
  }

  public: inline void setter_setMAssociationList (const GGS__32_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociationList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_enumerationFunctionListAST_2E_element (const GGS_lstring & in_mEnumName,
                                                     const GGS_lstring & in_mFunctionName,
                                                     const GGS__32_lstringlist & in_mAssociationList) ;

//--------------------------------- Copy constructor
  public: GGS_enumerationFunctionListAST_2E_element (const GGS_enumerationFunctionListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_enumerationFunctionListAST_2E_element & operator = (const GGS_enumerationFunctionListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumerationFunctionListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS__32_lstringlist & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumerationFunctionListAST_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationFunctionListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bindingOptionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_bindingOptionList final {
  public: DownEnumerator_bindingOptionList (const class GGS_bindingOptionList & inList) ;

  public: ~ DownEnumerator_bindingOptionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mOptionName (LOCATION_ARGS) const ;
  public: class GGS_abstractDefaultValue current_mOptionValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_bindingOptionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_bindingOptionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_bindingOptionList (const DownEnumerator_bindingOptionList &) = delete ;
  private: DownEnumerator_bindingOptionList & operator = (const DownEnumerator_bindingOptionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_bindingOptionList final {
  public: UpEnumerator_bindingOptionList (const class GGS_bindingOptionList & inList)  ;

  public: ~ UpEnumerator_bindingOptionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mOptionName (LOCATION_ARGS) const ;
  public: class GGS_abstractDefaultValue current_mOptionValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_bindingOptionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_bindingOptionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_bindingOptionList (const UpEnumerator_bindingOptionList &) = delete ;
  private: UpEnumerator_bindingOptionList & operator = (const UpEnumerator_bindingOptionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @bindingOptionList list
//--------------------------------------------------------------------------------------------------

class GGS_bindingOptionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_bindingOptionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_bindingOptionList (void) ;

//--- Destructor
  public: virtual ~ GGS_bindingOptionList (void) = default ;

//--- Copy
  public: GGS_bindingOptionList (const GGS_bindingOptionList &) = default ;
  public: GGS_bindingOptionList & operator = (const GGS_bindingOptionList &) = default ;

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
  public : inline GenericArray <GGS_bindingOptionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_bindingOptionList subList (const int32_t inStart,
                                          const int32_t inLength,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_bindingOptionList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mOptionName,
                                                 const class GGS_abstractDefaultValue & in_mOptionValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bindingOptionList init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bindingOptionList extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bindingOptionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                       const class GGS_abstractDefaultValue & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_bindingOptionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_abstractDefaultValue & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_bindingOptionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_bindingOptionList add_operation (const GGS_bindingOptionList & inOperand,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_abstractDefaultValue constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_abstractDefaultValue constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_abstractDefaultValue & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_abstractDefaultValue & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_abstractDefaultValue & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMOptionNameAtIndex (class GGS_lstring constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMOptionValueAtIndex (class GGS_abstractDefaultValue constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_abstractDefaultValue & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_abstractDefaultValue & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mOptionNameAtIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_abstractDefaultValue getter_mOptionValueAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_bindingOptionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_bindingOptionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_bindingOptionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_bindingOptionList ;
  friend class DownEnumerator_bindingOptionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bindingOptionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_observablePropertyList final {
  public: DownEnumerator_observablePropertyList (const class GGS_observablePropertyList & inList) ;

  public: ~ DownEnumerator_observablePropertyList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_observablePropertyAST current_mObservableProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_observablePropertyList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_observablePropertyList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_observablePropertyList (const DownEnumerator_observablePropertyList &) = delete ;
  private: DownEnumerator_observablePropertyList & operator = (const DownEnumerator_observablePropertyList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_observablePropertyList final {
  public: UpEnumerator_observablePropertyList (const class GGS_observablePropertyList & inList)  ;

  public: ~ UpEnumerator_observablePropertyList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_observablePropertyAST current_mObservableProperty (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_observablePropertyList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_observablePropertyList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_observablePropertyList (const UpEnumerator_observablePropertyList &) = delete ;
  private: UpEnumerator_observablePropertyList & operator = (const UpEnumerator_observablePropertyList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @observablePropertyList list
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_observablePropertyList_2E_element> mArray ;

//--- Default constructor
  public: GGS_observablePropertyList (void) ;

//--- Destructor
  public: virtual ~ GGS_observablePropertyList (void) = default ;

//--- Copy
  public: GGS_observablePropertyList (const GGS_observablePropertyList &) = default ;
  public: GGS_observablePropertyList & operator = (const GGS_observablePropertyList &) = default ;

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
  public : inline GenericArray <GGS_observablePropertyList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_observablePropertyList subList (const int32_t inStart,
                                               const int32_t inLength,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_observablePropertyList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_observablePropertyAST & in_mObservableProperty
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyList init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyList extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyList class_func_listWithValue (const class GGS_observablePropertyAST & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_observablePropertyList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_observablePropertyAST & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_observablePropertyList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_observablePropertyList add_operation (const GGS_observablePropertyList & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_observablePropertyAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_observablePropertyAST constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_observablePropertyAST & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_observablePropertyAST & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_observablePropertyAST & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMObservablePropertyAtIndex (class GGS_observablePropertyAST constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_observablePropertyAST & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_observablePropertyAST & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST getter_mObservablePropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_observablePropertyList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_observablePropertyList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_observablePropertyList ;
  friend class DownEnumerator_observablePropertyList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyList ;

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

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_regularBindingList_2E_element ;

//--------------------------------------------------------------------------------------------------
//   enum observablePropertyAST
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_observablePropertyAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_rootProperty,
    enum_rootPropertyWithOption,
    enum_rootPropertyRelationship,
    enum_rootPropertyNone,
    enum_selfWithoutProperty,
    enum_selfProperty,
    enum_selfPropertyWithOption,
    enum_selfPropertyArray,
    enum_selfPropertyObject,
    enum_selfPropertyNone,
    enum_prefsProperty,
    enum_prefsPropertyWithOption,
    enum_selfControllerProperty,
    enum_selfControllerSecondaryProperty,
    enum_selfControllerAllProperties,
    enum_selfControllerOneProperty,
    enum_signatureProperty,
    enum_versionProperty,
    enum_versionShouldChangeProperty,
    enum_superProperty,
    enum_superPropertyWithDefaultValue
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_rootProperty (class GGS_lstring & out_propertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_rootPropertyWithOption (class GGS_lstring & out_propertyName,
                                                                               class GGS_lstring & out_optionName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_rootPropertyRelationship (class GGS_lstring & out_relationshipName,
                                                                                 class GGS_lstring & out_propertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_rootPropertyNone (class GGS_lstring & out_relationshipName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selfWithoutProperty (class GGS_location & out_issueLocation) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selfProperty (class GGS_lstring & out_propertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selfPropertyWithOption (class GGS_lstring & out_propertyName,
                                                                               class GGS_lstring & out_optionName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selfPropertyArray (class GGS_lstring & out_propertyName,
                                                                          class GGS_lstring & out_elementPropertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selfPropertyObject (class GGS_lstring & out_propertyName,
                                                                           class GGS_lstring & out_elementPropertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selfPropertyNone (class GGS_lstring & out_propertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_prefsProperty (class GGS_lstring & out_propertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_prefsPropertyWithOption (class GGS_lstring & out_propertyName,
                                                                                class GGS_lstring & out_optionName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selfControllerProperty (class GGS_lstring & out_controllerName,
                                                                               class GGS_lstring & out_propertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selfControllerSecondaryProperty (class GGS_lstring & out_controllerName,
                                                                                        class GGS_lstring & out_propertyName,
                                                                                        class GGS_lstring & out_secondaryPropertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selfControllerAllProperties (class GGS_lstring & out_controllerName,
                                                                                    class GGS_lstring & out_propertyName,
                                                                                    class GGS_lstring & out_secondaryPropertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selfControllerOneProperty (class GGS_lstring & out_controllerName,
                                                                                  class GGS_lstring & out_propertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_signatureProperty (class GGS_location & out_location) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_versionProperty (class GGS_location & out_location) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_versionShouldChangeProperty (class GGS_location & out_location) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_superProperty (class GGS_lstring & out_superEntityName,
                                                                      class GGS_lstring & out_propertyName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_superPropertyWithDefaultValue (class GGS_lstring & out_superEntityName,
                                                                                      class GGS_lstring & out_propertyName,
                                                                                      class GGS_abstractDefaultValue & out_defaultValue) const ;

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
  public: static GGS_observablePropertyAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_observablePropertyAST class_func_prefsProperty (const class GGS_lstring & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_prefsPropertyWithOption (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_lstring & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_rootProperty (const class GGS_lstring & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_rootPropertyNone (const class GGS_lstring & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_rootPropertyRelationship (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_lstring & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_rootPropertyWithOption (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_selfControllerAllProperties (const class GGS_lstring & inOperand0,
                                                                                         const class GGS_lstring & inOperand1,
                                                                                         const class GGS_lstring & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_selfControllerOneProperty (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_lstring & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_selfControllerProperty (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_selfControllerSecondaryProperty (const class GGS_lstring & inOperand0,
                                                                                             const class GGS_lstring & inOperand1,
                                                                                             const class GGS_lstring & inOperand2
                                                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_selfProperty (const class GGS_lstring & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_selfPropertyArray (const class GGS_lstring & inOperand0,
                                                                               const class GGS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_selfPropertyNone (const class GGS_lstring & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_selfPropertyObject (const class GGS_lstring & inOperand0,
                                                                                const class GGS_lstring & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_selfPropertyWithOption (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_selfWithoutProperty (const class GGS_location & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_signatureProperty (const class GGS_location & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_superProperty (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lstring & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_superPropertyWithDefaultValue (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_lstring & inOperand1,
                                                                                           const class GGS_abstractDefaultValue & inOperand2
                                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_versionProperty (const class GGS_location & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_observablePropertyAST class_func_versionShouldChangeProperty (const class GGS_location & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractPrefsProperty (class GGS_lstring & outArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;

  public: void method_extractPrefsPropertyWithOption (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: void method_extractRootProperty (class GGS_lstring & outArgument0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;

  public: void method_extractRootPropertyNone (class GGS_lstring & outArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: void method_extractRootPropertyRelationship (class GGS_lstring & outArgument0,
                                                       class GGS_lstring & outArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: void method_extractRootPropertyWithOption (class GGS_lstring & outArgument0,
                                                     class GGS_lstring & outArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: void method_extractSelfControllerAllProperties (class GGS_lstring & outArgument0,
                                                          class GGS_lstring & outArgument1,
                                                          class GGS_lstring & outArgument2,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: void method_extractSelfControllerOneProperty (class GGS_lstring & outArgument0,
                                                        class GGS_lstring & outArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: void method_extractSelfControllerProperty (class GGS_lstring & outArgument0,
                                                     class GGS_lstring & outArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: void method_extractSelfControllerSecondaryProperty (class GGS_lstring & outArgument0,
                                                              class GGS_lstring & outArgument1,
                                                              class GGS_lstring & outArgument2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: void method_extractSelfProperty (class GGS_lstring & outArgument0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;

  public: void method_extractSelfPropertyArray (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: void method_extractSelfPropertyNone (class GGS_lstring & outArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: void method_extractSelfPropertyObject (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: void method_extractSelfPropertyWithOption (class GGS_lstring & outArgument0,
                                                     class GGS_lstring & outArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: void method_extractSelfWithoutProperty (class GGS_location & outArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: void method_extractSignatureProperty (class GGS_location & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: void method_extractSuperProperty (class GGS_lstring & outArgument0,
                                            class GGS_lstring & outArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;

  public: void method_extractSuperPropertyWithDefaultValue (class GGS_lstring & outArgument0,
                                                            class GGS_lstring & outArgument1,
                                                            class GGS_abstractDefaultValue & outArgument2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: void method_extractVersionProperty (class GGS_location & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: void method_extractVersionShouldChangeProperty (class GGS_location & outArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_observablePropertyAST_2E_prefsProperty_3F_ getter_getPrefsProperty (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ getter_getPrefsPropertyWithOption (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_rootProperty_3F_ getter_getRootProperty (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_rootPropertyNone_3F_ getter_getRootPropertyNone (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ getter_getRootPropertyRelationship (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ getter_getRootPropertyWithOption (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ getter_getSelfControllerAllProperties (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ getter_getSelfControllerOneProperty (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_selfControllerProperty_3F_ getter_getSelfControllerProperty (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ getter_getSelfControllerSecondaryProperty (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_selfProperty_3F_ getter_getSelfProperty (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_selfPropertyArray_3F_ getter_getSelfPropertyArray (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_selfPropertyNone_3F_ getter_getSelfPropertyNone (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_selfPropertyObject_3F_ getter_getSelfPropertyObject (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ getter_getSelfPropertyWithOption (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ getter_getSelfWithoutProperty (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_signatureProperty_3F_ getter_getSignatureProperty (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_superProperty_3F_ getter_getSuperProperty (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ getter_getSuperPropertyWithDefaultValue (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_versionProperty_3F_ getter_getVersionProperty (LOCATION_ARGS) const ;

  public: class GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ getter_getVersionShouldChangeProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isPrefsProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isPrefsPropertyWithOption (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRootProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRootPropertyNone (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRootPropertyRelationship (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRootPropertyWithOption (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelfControllerAllProperties (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelfControllerOneProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelfControllerProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelfControllerSecondaryProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelfProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelfPropertyArray (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelfPropertyNone (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelfPropertyObject (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelfPropertyWithOption (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelfWithoutProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSignatureProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSuperProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSuperPropertyWithDefaultValue (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isVersionProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isVersionShouldChangeProperty (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_observablePropertyAST mProperty_mObservableProperty ;
  public: inline GGS_observablePropertyAST readProperty_mObservableProperty (void) const {
    return mProperty_mObservableProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMObservableProperty (const GGS_observablePropertyAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObservableProperty = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyList_2E_element (const GGS_observablePropertyAST & in_mObservableProperty) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyList_2E_element (const GGS_observablePropertyList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyList_2E_element & operator = (const GGS_observablePropertyList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyList_2E_element init_21_ (const class GGS_observablePropertyAST & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyList_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bindingOptionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_bindingOptionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mOptionName ;
  public: inline GGS_lstring readProperty_mOptionName (void) const {
    return mProperty_mOptionName ;
  }

  public: GGS_abstractDefaultValue mProperty_mOptionValue ;
  public: inline GGS_abstractDefaultValue readProperty_mOptionValue (void) const {
    return mProperty_mOptionValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_bindingOptionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOptionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionName = inValue ;
  }

  public: inline void setter_setMOptionValue (const GGS_abstractDefaultValue & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_bindingOptionList_2E_element (const GGS_lstring & in_mOptionName,
                                            const GGS_abstractDefaultValue & in_mOptionValue) ;

//--------------------------------- Copy constructor
  public: GGS_bindingOptionList_2E_element (const GGS_bindingOptionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_bindingOptionList_2E_element & operator = (const GGS_bindingOptionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bindingOptionList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_abstractDefaultValue & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bindingOptionList_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bindingOptionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_prefsPropertyWithOption struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_prefsPropertyWithOption : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_lstring mProperty_optionName ;
  public: inline GGS_lstring readProperty_optionName (void) const {
    return mProperty_optionName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_prefsPropertyWithOption (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setOptionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_optionName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_prefsPropertyWithOption (const GGS_lstring & in_propertyName,
                                                                const GGS_lstring & in_optionName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_prefsPropertyWithOption (const GGS_observablePropertyAST_2E_prefsPropertyWithOption & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_prefsPropertyWithOption & operator = (const GGS_observablePropertyAST_2E_prefsPropertyWithOption & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_prefsPropertyWithOption init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstring & inOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_prefsPropertyWithOption extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsPropertyWithOption ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.prefsPropertyWithOption? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_prefsPropertyWithOption mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ (const GGS_observablePropertyAST_2E_prefsPropertyWithOption & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_prefsPropertyWithOption unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_prefsProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_prefsProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_prefsProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_prefsProperty (const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_prefsProperty (const GGS_observablePropertyAST_2E_prefsProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_prefsProperty & operator = (const GGS_observablePropertyAST_2E_prefsProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_prefsProperty init_21_ (const class GGS_lstring & inOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_prefsProperty extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.prefsProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_prefsProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_prefsProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_prefsProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_prefsProperty_3F_ (const GGS_observablePropertyAST_2E_prefsProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_prefsProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_prefsProperty unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_prefsProperty_3F_ extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_rootPropertyNone struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootPropertyNone : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_relationshipName ;
  public: inline GGS_lstring readProperty_relationshipName (void) const {
    return mProperty_relationshipName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootPropertyNone (void) ;

//--------------------------------- Property setters
  public: inline void setter_setRelationshipName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_relationshipName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_rootPropertyNone (const GGS_lstring & in_relationshipName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_rootPropertyNone (const GGS_observablePropertyAST_2E_rootPropertyNone & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_rootPropertyNone & operator = (const GGS_observablePropertyAST_2E_rootPropertyNone & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_rootPropertyNone init_21_ (const class GGS_lstring & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_rootPropertyNone extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyNone ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.rootPropertyNone? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootPropertyNone_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_rootPropertyNone mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootPropertyNone_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_rootPropertyNone_3F_ (const GGS_observablePropertyAST_2E_rootPropertyNone & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_rootPropertyNone_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_rootPropertyNone unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_rootPropertyNone_3F_ extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyNone_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_rootPropertyRelationship struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootPropertyRelationship : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_relationshipName ;
  public: inline GGS_lstring readProperty_relationshipName (void) const {
    return mProperty_relationshipName ;
  }

  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootPropertyRelationship (void) ;

//--------------------------------- Property setters
  public: inline void setter_setRelationshipName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_relationshipName = inValue ;
  }

  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_rootPropertyRelationship (const GGS_lstring & in_relationshipName,
                                                                 const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_rootPropertyRelationship (const GGS_observablePropertyAST_2E_rootPropertyRelationship & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_rootPropertyRelationship & operator = (const GGS_observablePropertyAST_2E_rootPropertyRelationship & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_rootPropertyRelationship init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_lstring & inOperand1,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_rootPropertyRelationship extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyRelationship ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.rootPropertyRelationship? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_rootPropertyRelationship mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ (const GGS_observablePropertyAST_2E_rootPropertyRelationship & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_rootPropertyRelationship unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyRelationship_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_rootPropertyWithOption struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootPropertyWithOption : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_lstring mProperty_optionName ;
  public: inline GGS_lstring readProperty_optionName (void) const {
    return mProperty_optionName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootPropertyWithOption (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setOptionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_optionName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_rootPropertyWithOption (const GGS_lstring & in_propertyName,
                                                               const GGS_lstring & in_optionName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_rootPropertyWithOption (const GGS_observablePropertyAST_2E_rootPropertyWithOption & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_rootPropertyWithOption & operator = (const GGS_observablePropertyAST_2E_rootPropertyWithOption & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_rootPropertyWithOption init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_rootPropertyWithOption extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyWithOption ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.rootPropertyWithOption? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_rootPropertyWithOption mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ (const GGS_observablePropertyAST_2E_rootPropertyWithOption & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_rootPropertyWithOption unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyWithOption_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_rootProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_rootProperty (const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_rootProperty (const GGS_observablePropertyAST_2E_rootProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_rootProperty & operator = (const GGS_observablePropertyAST_2E_rootProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_rootProperty init_21_ (const class GGS_lstring & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_rootProperty extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.rootProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_rootProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_rootProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_rootProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_rootProperty_3F_ (const GGS_observablePropertyAST_2E_rootProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_rootProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_rootProperty unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_rootProperty_3F_ extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfControllerAllProperties struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerAllProperties : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_controllerName ;
  public: inline GGS_lstring readProperty_controllerName (void) const {
    return mProperty_controllerName ;
  }

  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_lstring mProperty_secondaryPropertyName ;
  public: inline GGS_lstring readProperty_secondaryPropertyName (void) const {
    return mProperty_secondaryPropertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerAllProperties (void) ;

//--------------------------------- Property setters
  public: inline void setter_setControllerName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_controllerName = inValue ;
  }

  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setSecondaryPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_secondaryPropertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfControllerAllProperties (const GGS_lstring & in_controllerName,
                                                                    const GGS_lstring & in_propertyName,
                                                                    const GGS_lstring & in_secondaryPropertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfControllerAllProperties (const GGS_observablePropertyAST_2E_selfControllerAllProperties & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfControllerAllProperties & operator = (const GGS_observablePropertyAST_2E_selfControllerAllProperties & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfControllerAllProperties init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_lstring & inOperand1,
                                                                                            const class GGS_lstring & inOperand2,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_selfControllerAllProperties extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerAllProperties ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfControllerAllProperties? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfControllerAllProperties mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ (const GGS_observablePropertyAST_2E_selfControllerAllProperties & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfControllerAllProperties unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ extractObject (const GGS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerAllProperties_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfControllerOneProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerOneProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_controllerName ;
  public: inline GGS_lstring readProperty_controllerName (void) const {
    return mProperty_controllerName ;
  }

  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerOneProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setControllerName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_controllerName = inValue ;
  }

  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfControllerOneProperty (const GGS_lstring & in_controllerName,
                                                                  const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfControllerOneProperty (const GGS_observablePropertyAST_2E_selfControllerOneProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfControllerOneProperty & operator = (const GGS_observablePropertyAST_2E_selfControllerOneProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfControllerOneProperty init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_lstring & inOperand1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_selfControllerOneProperty extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerOneProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfControllerOneProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfControllerOneProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ (const GGS_observablePropertyAST_2E_selfControllerOneProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfControllerOneProperty unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerOneProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfControllerProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_controllerName ;
  public: inline GGS_lstring readProperty_controllerName (void) const {
    return mProperty_controllerName ;
  }

  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setControllerName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_controllerName = inValue ;
  }

  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfControllerProperty (const GGS_lstring & in_controllerName,
                                                               const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfControllerProperty (const GGS_observablePropertyAST_2E_selfControllerProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfControllerProperty & operator = (const GGS_observablePropertyAST_2E_selfControllerProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfControllerProperty init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_selfControllerProperty extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfControllerProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfControllerProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfControllerProperty_3F_ (const GGS_observablePropertyAST_2E_selfControllerProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfControllerProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfControllerProperty unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_selfControllerProperty_3F_ extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfControllerSecondaryProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerSecondaryProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_controllerName ;
  public: inline GGS_lstring readProperty_controllerName (void) const {
    return mProperty_controllerName ;
  }

  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_lstring mProperty_secondaryPropertyName ;
  public: inline GGS_lstring readProperty_secondaryPropertyName (void) const {
    return mProperty_secondaryPropertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerSecondaryProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setControllerName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_controllerName = inValue ;
  }

  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setSecondaryPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_secondaryPropertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfControllerSecondaryProperty (const GGS_lstring & in_controllerName,
                                                                        const GGS_lstring & in_propertyName,
                                                                        const GGS_lstring & in_secondaryPropertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfControllerSecondaryProperty (const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfControllerSecondaryProperty & operator = (const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfControllerSecondaryProperty init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                const class GGS_lstring & inOperand1,
                                                                                                const class GGS_lstring & inOperand2,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_selfControllerSecondaryProperty extractObject (const GGS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerSecondaryProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfControllerSecondaryProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfControllerSecondaryProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ (const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfControllerSecondaryProperty unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ extractObject (const GGS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfPropertyArray struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyArray : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_lstring mProperty_elementPropertyName ;
  public: inline GGS_lstring readProperty_elementPropertyName (void) const {
    return mProperty_elementPropertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyArray (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setElementPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_elementPropertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfPropertyArray (const GGS_lstring & in_propertyName,
                                                          const GGS_lstring & in_elementPropertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfPropertyArray (const GGS_observablePropertyAST_2E_selfPropertyArray & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfPropertyArray & operator = (const GGS_observablePropertyAST_2E_selfPropertyArray & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfPropertyArray init_21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_selfPropertyArray extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyArray ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfPropertyArray? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyArray_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfPropertyArray mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyArray_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfPropertyArray_3F_ (const GGS_observablePropertyAST_2E_selfPropertyArray & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfPropertyArray_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfPropertyArray unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_selfPropertyArray_3F_ extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyArray_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfPropertyNone struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyNone : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyNone (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfPropertyNone (const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfPropertyNone (const GGS_observablePropertyAST_2E_selfPropertyNone & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfPropertyNone & operator = (const GGS_observablePropertyAST_2E_selfPropertyNone & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfPropertyNone init_21_ (const class GGS_lstring & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_selfPropertyNone extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyNone ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfPropertyNone? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyNone_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfPropertyNone mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyNone_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfPropertyNone_3F_ (const GGS_observablePropertyAST_2E_selfPropertyNone & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfPropertyNone_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfPropertyNone unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_selfPropertyNone_3F_ extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyNone_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfPropertyObject struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyObject : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_lstring mProperty_elementPropertyName ;
  public: inline GGS_lstring readProperty_elementPropertyName (void) const {
    return mProperty_elementPropertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyObject (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setElementPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_elementPropertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfPropertyObject (const GGS_lstring & in_propertyName,
                                                           const GGS_lstring & in_elementPropertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfPropertyObject (const GGS_observablePropertyAST_2E_selfPropertyObject & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfPropertyObject & operator = (const GGS_observablePropertyAST_2E_selfPropertyObject & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfPropertyObject init_21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_lstring & inOperand1,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_selfPropertyObject extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyObject ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfPropertyObject? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyObject_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfPropertyObject mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyObject_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfPropertyObject_3F_ (const GGS_observablePropertyAST_2E_selfPropertyObject & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfPropertyObject_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfPropertyObject unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_selfPropertyObject_3F_ extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyObject_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfPropertyWithOption struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyWithOption : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_lstring mProperty_optionName ;
  public: inline GGS_lstring readProperty_optionName (void) const {
    return mProperty_optionName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyWithOption (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setOptionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_optionName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfPropertyWithOption (const GGS_lstring & in_propertyName,
                                                               const GGS_lstring & in_optionName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfPropertyWithOption (const GGS_observablePropertyAST_2E_selfPropertyWithOption & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfPropertyWithOption & operator = (const GGS_observablePropertyAST_2E_selfPropertyWithOption & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfPropertyWithOption init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_selfPropertyWithOption extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyWithOption ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfPropertyWithOption? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfPropertyWithOption mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ (const GGS_observablePropertyAST_2E_selfPropertyWithOption & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfPropertyWithOption unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyWithOption_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfProperty (const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfProperty (const GGS_observablePropertyAST_2E_selfProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfProperty & operator = (const GGS_observablePropertyAST_2E_selfProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfProperty init_21_ (const class GGS_lstring & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_selfProperty extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfProperty_3F_ (const GGS_observablePropertyAST_2E_selfProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfProperty unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_selfProperty_3F_ extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_selfWithoutProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfWithoutProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_issueLocation ;
  public: inline GGS_location readProperty_issueLocation (void) const {
    return mProperty_issueLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfWithoutProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIssueLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_issueLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_selfWithoutProperty (const GGS_location & in_issueLocation) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_selfWithoutProperty (const GGS_observablePropertyAST_2E_selfWithoutProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_selfWithoutProperty & operator = (const GGS_observablePropertyAST_2E_selfWithoutProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_selfWithoutProperty init_21_ (const class GGS_location & inOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_selfWithoutProperty extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfWithoutProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.selfWithoutProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_selfWithoutProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ (const GGS_observablePropertyAST_2E_selfWithoutProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_selfWithoutProperty unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfWithoutProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_signatureProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_signatureProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_location ;
  public: inline GGS_location readProperty_location (void) const {
    return mProperty_location ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_signatureProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_location = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_signatureProperty (const GGS_location & in_location) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_signatureProperty (const GGS_observablePropertyAST_2E_signatureProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_signatureProperty & operator = (const GGS_observablePropertyAST_2E_signatureProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_signatureProperty init_21_ (const class GGS_location & inOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_signatureProperty extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_signatureProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.signatureProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_signatureProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_signatureProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_signatureProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_signatureProperty_3F_ (const GGS_observablePropertyAST_2E_signatureProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_signatureProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_signatureProperty unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_signatureProperty_3F_ extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_signatureProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_superPropertyWithDefaultValue struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_superPropertyWithDefaultValue : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_superEntityName ;
  public: inline GGS_lstring readProperty_superEntityName (void) const {
    return mProperty_superEntityName ;
  }

  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

  public: GGS_abstractDefaultValue mProperty_defaultValue ;
  public: inline GGS_abstractDefaultValue readProperty_defaultValue (void) const {
    return mProperty_defaultValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_superPropertyWithDefaultValue (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSuperEntityName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_superEntityName = inValue ;
  }

  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

  public: inline void setter_setDefaultValue (const GGS_abstractDefaultValue & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_defaultValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_superPropertyWithDefaultValue (const GGS_lstring & in_superEntityName,
                                                                      const GGS_lstring & in_propertyName,
                                                                      const GGS_abstractDefaultValue & in_defaultValue) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_superPropertyWithDefaultValue (const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_superPropertyWithDefaultValue & operator = (const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_superPropertyWithDefaultValue init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                              const class GGS_lstring & inOperand1,
                                                                                              const class GGS_abstractDefaultValue & inOperand2,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_superPropertyWithDefaultValue extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superPropertyWithDefaultValue ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.superPropertyWithDefaultValue? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_superPropertyWithDefaultValue mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ (const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_superPropertyWithDefaultValue unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_superProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_superProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_superEntityName ;
  public: inline GGS_lstring readProperty_superEntityName (void) const {
    return mProperty_superEntityName ;
  }

  public: GGS_lstring mProperty_propertyName ;
  public: inline GGS_lstring readProperty_propertyName (void) const {
    return mProperty_propertyName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_superProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSuperEntityName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_superEntityName = inValue ;
  }

  public: inline void setter_setPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_superProperty (const GGS_lstring & in_superEntityName,
                                                      const GGS_lstring & in_propertyName) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_superProperty (const GGS_observablePropertyAST_2E_superProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_superProperty & operator = (const GGS_observablePropertyAST_2E_superProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_superProperty init_21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_superProperty extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.superProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_superProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_superProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_superProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_superProperty_3F_ (const GGS_observablePropertyAST_2E_superProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_superProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_superProperty unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_superProperty_3F_ extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_versionProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_versionProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_location ;
  public: inline GGS_location readProperty_location (void) const {
    return mProperty_location ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_versionProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_location = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_versionProperty (const GGS_location & in_location) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_versionProperty (const GGS_observablePropertyAST_2E_versionProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_versionProperty & operator = (const GGS_observablePropertyAST_2E_versionProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_versionProperty init_21_ (const class GGS_location & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_versionProperty extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.versionProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_versionProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_versionProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_versionProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_versionProperty_3F_ (const GGS_observablePropertyAST_2E_versionProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_versionProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_versionProperty unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_versionProperty_3F_ extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyAST_2E_versionShouldChangeProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_versionShouldChangeProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_location ;
  public: inline GGS_location readProperty_location (void) const {
    return mProperty_location ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_versionShouldChangeProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_location = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_observablePropertyAST_2E_versionShouldChangeProperty (const GGS_location & in_location) ;

//--------------------------------- Copy constructor
  public: GGS_observablePropertyAST_2E_versionShouldChangeProperty (const GGS_observablePropertyAST_2E_versionShouldChangeProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_observablePropertyAST_2E_versionShouldChangeProperty & operator = (const GGS_observablePropertyAST_2E_versionShouldChangeProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyAST_2E_versionShouldChangeProperty init_21_ (const class GGS_location & inOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyAST_2E_versionShouldChangeProperty extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionShouldChangeProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: observablePropertyAST.versionShouldChangeProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_observablePropertyAST_2E_versionShouldChangeProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ (const GGS_observablePropertyAST_2E_versionShouldChangeProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_observablePropertyAST_2E_versionShouldChangeProperty unwrappedValue (void) const {
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
  public: static GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ extractObject (const GGS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST modelStringForSelf' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_modelStringForSelf (const class GGS_observablePropertyAST & inObject,
                                                     const class GGS_string & constinArgument0,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST modelStringFunctionArgument' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_modelStringFunctionArgument (const class GGS_observablePropertyAST & inObject,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST needs_unwSelf' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_needs_5F_unwSelf (const class GGS_observablePropertyAST & inObject,
                                                 const class GGS_bool & constinArgument0,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST location' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_location extensionGetter_location (const class GGS_observablePropertyAST & inObject,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@observablePropertyAST analyzeObservableProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeObservableProperty (const class GGS_observablePropertyAST inObject,
                                                const class GGS_propertyMap constin_inRootPropertyMap,
                                                const class GGS_semanticContext constin_inSemanticContext,
                                                const class GGS_propertyMap constin_inBoundModelPropertyMap,
                                                class GGS_propertyKind & out_outKind,
                                                class GGS_string & out_outSwiftTypeStringForTransientFunctionArgument,
                                                class GGS_string & out_outProtocolTypeString,
                                                class GGS_string & out_outDefaultValue,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'preferencesName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_preferencesName (class Compiler * inCompiler
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

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticContext ;

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

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutViewClassDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutViewClassDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_autoLayoutViewClassDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_autoLayoutViewClassDeclarationAST (const class cPtr_autoLayoutViewClassDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mUserDefined (void) const ;
  public: void setProperty_mUserDefined (const GGS_bool & inValue) ;

  public: class GGS_lstring readProperty_mSuperClassName (void) const ;
  public: void setProperty_mSuperClassName (const GGS_lstring & inValue) ;

  public: class GGS_bool readProperty_mHasRunAction (void) const ;
  public: void setProperty_mHasRunAction (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mHasEnabled (void) const ;
  public: void setProperty_mHasEnabled (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mHandlesTableValueBinding (void) const ;
  public: void setProperty_mHandlesTableValueBinding (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mHandlesGraphicControllerBinding (void) const ;
  public: void setProperty_mHandlesGraphicControllerBinding (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mHasHidden (void) const ;
  public: void setProperty_mHasHidden (const GGS_bool & inValue) ;

  public: class GGS_autoLayoutClassParameterList readProperty_mParameterList (void) const ;
  public: void setProperty_mParameterList (const GGS_autoLayoutClassParameterList & inValue) ;

  public: class GGS_astAutoLayoutViewFunctionMap readProperty_mAutoLayoutViewFunctionMap (void) const ;
  public: void setProperty_mAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutViewClassDeclarationAST init_21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                     const class GGS_bool & inOperand1,
                                                                                                     const class GGS_lstring & inOperand2,
                                                                                                     const class GGS_bool & inOperand3,
                                                                                                     const class GGS_bool & inOperand4,
                                                                                                     const class GGS_bool & inOperand5,
                                                                                                     const class GGS_bool & inOperand6,
                                                                                                     const class GGS_bool & inOperand7,
                                                                                                     const class GGS_autoLayoutClassParameterList & inOperand8,
                                                                                                     const class GGS_astAutoLayoutViewFunctionMap & inOperand9,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutViewClassDeclarationAST extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutViewClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @autoLayoutViewClassDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutViewClassDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void autoLayoutViewClassDeclarationAST_init_21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                               const class GGS_bool & inOperand1,
                                                                                               const class GGS_lstring & inOperand2,
                                                                                               const class GGS_bool & inOperand3,
                                                                                               const class GGS_bool & inOperand4,
                                                                                               const class GGS_bool & inOperand5,
                                                                                               const class GGS_bool & inOperand6,
                                                                                               const class GGS_bool & inOperand7,
                                                                                               const class GGS_autoLayoutClassParameterList & inOperand8,
                                                                                               const class GGS_astAutoLayoutViewFunctionMap & inOperand9,
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
  public: GGS_bool mProperty_mUserDefined ;
  public: GGS_lstring mProperty_mSuperClassName ;
  public: GGS_bool mProperty_mHasRunAction ;
  public: GGS_bool mProperty_mHasEnabled ;
  public: GGS_bool mProperty_mHandlesTableValueBinding ;
  public: GGS_bool mProperty_mHandlesGraphicControllerBinding ;
  public: GGS_bool mProperty_mHasHidden ;
  public: GGS_autoLayoutClassParameterList mProperty_mParameterList ;
  public: GGS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutViewFunctionMap ;


//--- Default constructor
  public: cPtr_autoLayoutViewClassDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_autoLayoutViewClassDeclarationAST (const GGS_lstring & in_mClassName,
                                                  const GGS_bool & in_mUserDefined,
                                                  const GGS_lstring & in_mSuperClassName,
                                                  const GGS_bool & in_mHasRunAction,
                                                  const GGS_bool & in_mHasEnabled,
                                                  const GGS_bool & in_mHandlesTableValueBinding,
                                                  const GGS_bool & in_mHandlesGraphicControllerBinding,
                                                  const GGS_bool & in_mHasHidden,
                                                  const GGS_autoLayoutClassParameterList & in_mParameterList,
                                                  const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutClassParameterType_2E_typeEnum & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
//
//Parser class 'easyBindings_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_easyBindings_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_easyBindings_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_action_5F_declaration_ (class GGS_lstringlist & ioArgument0,
                                                     class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_action_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_ (class GGS_stringset & ioArgument0,
                                                                      class GGS_astAutoLayoutViewFunctionCallList & outArgument1,
                                                                      class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (const class GGS_lstring constinArgument0,
                                                                                  class GGS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                                  class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_class_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                                  class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_class_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_ (const class GGS_lstring constinArgument0,
                                                                         class GGS_autoLayoutClassParameterList & outArgument1,
                                                                         class GGS_lstring & outArgument2,
                                                                         class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_binding_5F_option_5F_list_ (class GGS_bindingOptionList & outArgument0,
                                                         class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_binding_5F_option_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingComparison_ (class GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingComparison_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingExpression_ (class GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingExpression_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingOperand_ (class GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                             class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingOperand_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingTerm_ (class GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                          class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_booleanMultipleBindingTerm_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_class_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                    class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_class_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_computed_5F_view_5F_instruction_ (class GGS_stringset & ioArgument0,
                                                               class GGS_astComputedViewInstruction & outArgument1,
                                                               class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_computed_5F_view_5F_instruction_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_controller_5F_declaration_ (const class GGS_lstring constinArgument0,
                                                         const class GGS_lstring constinArgument1,
                                                         class GGS_arrayControllerBindingListAST & ioArgument2,
                                                         class GGS_astDeclarationStruct & ioArgument3,
                                                         class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_controller_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_document_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                       class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_document_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_entity_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                     class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_entity_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                   class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_function_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                               class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_enum_5F_function_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_value_ (class GGS_abstractDefaultValue & outArgument0,
                                                 class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_explicit_5F_value_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_delegate_ (class GGS_externSwiftDelegateList & ioArgument0,
                                                           class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_delegate_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_func_ (class GGS_externSwiftFunctionList & ioArgument0,
                                                       class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_swift_5F_func_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_graphviz_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                       class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_graphviz_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_ (class GGS_mainXibDescriptorList & ioArgument0,
                                           class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_5F_line_ (class GGS_mainXibLineDescriptorList & outArgument0,
                                                   class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_main_5F_xib_5F_line_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_observable_5F_property_ (class GGS_observablePropertyAST & outArgument0,
                                                      class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_observable_5F_property_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_ (class GGS_tableValueBinding & outArgument0,
                                                 class GGS_runActionDescriptor & outArgument1,
                                                 class GGS_multipleBindingDescriptor & outArgument2,
                                                 class GGS_multipleBindingDescriptor & outArgument3,
                                                 class GGS_graphicController & outArgument4,
                                                 class GGS_regularBindingList & outArgument5,
                                                 class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_5F_specification_ (class GGS_outletClassBindingSpecificationList & ioArgument0,
                                                                  class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_binding_5F_specification_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_class_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                              class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_class_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_declaration_ (class GGS_outletDeclarationList & ioArgument0,
                                                     class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_outlet_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_preferences_5F_declaration_ (class GGS_astDeclarationStruct & ioArgument0,
                                                          class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_preferences_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_stored_5F_declaration_ (const class GGS_lstring constinArgument0,
                                                               class GGS_simpleStoredPropertyList & ioArgument1,
                                                               class GGS_stringset & ioArgument2,
                                                               class GGS_astDeclarationStruct & ioArgument3,
                                                               class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_stored_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_stack_5F_view_5F_declaration_ (class GGS_astViewDeclarationList & ioArgument0,
                                                            class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_stack_5F_view_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class GGS_astDeclarationStruct & ioArgument0,
                                               class GGS_location & outArgument1,
                                               class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toMany_5F_relationship_ (const class GGS_lstring constinArgument0,
                                                      class GGS_stringset & ioArgument1,
                                                      class GGS_astDeclarationStruct & ioArgument2,
                                                      class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toMany_5F_relationship_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toOne_5F_relationship_ (const class GGS_lstring constinArgument0,
                                                     class GGS_astDeclarationStruct & ioArgument1,
                                                     class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_toOne_5F_relationship_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_transient_5F_declaration_ (const class GGS_lstring constinArgument0,
                                                        const class GGS_lstring constinArgument1,
                                                        class GGS_astDeclarationStruct & ioArgument2,
                                                        class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_transient_5F_declaration_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_actual_5F_parameter_5F_list_ (class GGS_stringset & ioArgument0,
                                                                   class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                                   class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_actual_5F_parameter_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_ (class GGS_stringset & ioArgument0,
                                                   class GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                   class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_5F_list_ (const class GGS_bool constinArgument0,
                                                           class GGS_stringset & ioArgument1,
                                                           class GGS_astNewStackViewDeclarationList & ioArgument2,
                                                           class GGS_astViewInstructionList & ioArgument3,
                                                           class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_view_5F_instruction_5F_list_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_xcode_5F_project_ (class GGS_lstring & ioArgument0,
                                                class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_xcode_5F_project_indexing (class Lexique_easyBindings_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_easyBindings_5F_syntax_start_5F_symbol_i0_ (GGS_astDeclarationStruct & ioArgument0,
                                                                   GGS_location & outArgument1,
                                                                   Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_start_5F_symbol_i0_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_start_5F_symbol_i0_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_ (GGS_externSwiftDelegateList & ioArgument0,
                                                                               Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i2_ (const GGS_lstring constinArgument0,
                                                                             const GGS_lstring constinArgument1,
                                                                             GGS_arrayControllerBindingListAST & ioArgument2,
                                                                             GGS_astDeclarationStruct & ioArgument3,
                                                                             Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i2_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i2_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_i3_ (GGS_mainXibDescriptorList & ioArgument0,
                                                               Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_main_5F_xib_i3_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_i3_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i4_ (GGS_mainXibLineDescriptorList & outArgument0,
                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i4_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i4_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toMany_5F_relationship_i5_ (const GGS_lstring constinArgument0,
                                                                          GGS_stringset & ioArgument1,
                                                                          GGS_astDeclarationStruct & ioArgument2,
                                                                          Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_toMany_5F_relationship_i5_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_toMany_5F_relationship_i5_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_document_5F_declaration_i6_ (GGS_astDeclarationStruct & ioArgument0,
                                                                           Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_document_5F_declaration_i6_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_document_5F_declaration_i6_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_preferences_5F_declaration_i7_ (GGS_astDeclarationStruct & ioArgument0,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_preferences_5F_declaration_i7_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_preferences_5F_declaration_i7_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i8_ (GGS_astDeclarationStruct & ioArgument0,
                                                                                  Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i8_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i8_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i9_ (const GGS_lstring constinArgument0,
                                                                                   GGS_simpleStoredPropertyList & ioArgument1,
                                                                                   GGS_stringset & ioArgument2,
                                                                                   GGS_astDeclarationStruct & ioArgument3,
                                                                                   Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i9_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i9_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i10_ (const GGS_lstring constinArgument0,
                                                                                    GGS_simpleStoredPropertyList & ioArgument1,
                                                                                    GGS_stringset & ioArgument2,
                                                                                    GGS_astDeclarationStruct & ioArgument3,
                                                                                    Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i10_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i10_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_explicit_5F_value_i11_ (GGS_abstractDefaultValue & outArgument0,
                                                                      Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_explicit_5F_value_i11_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_explicit_5F_value_i11_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i12_ (GGS_bindingOptionList & outArgument0,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i12_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i12_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_observable_5F_property_i13_ (GGS_observablePropertyAST & outArgument0,
                                                                           Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_observable_5F_property_i13_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_observable_5F_property_i13_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i14_ (GGS_astDeclarationStruct & ioArgument0,
                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i14_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i14_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i15_ (GGS_astDeclarationStruct & ioArgument0,
                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i15_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i15_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i16_ (GGS_astDeclarationStruct & ioArgument0,
                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i16_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i16_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i17_ (const GGS_lstring constinArgument0,
                                                                                              GGS_autoLayoutClassParameterList & outArgument1,
                                                                                              GGS_lstring & outArgument2,
                                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i17_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i17_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i18_ (GGS_astDeclarationStruct & ioArgument0,
                                                                            Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i18_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i18_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_xcode_5F_project_i19_ (GGS_lstring & ioArgument0,
                                                                     Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_xcode_5F_project_i19_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_xcode_5F_project_i19_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i20_ (const GGS_lstring constinArgument0,
                                                                                                       GGS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i20_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i20_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i21_ (GGS_outletClassBindingSpecificationList & ioArgument0,
                                                                                       Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i21_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i21_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i22_ (const GGS_lstring constinArgument0,
                                                                              const GGS_lstring constinArgument1,
                                                                              GGS_arrayControllerBindingListAST & ioArgument2,
                                                                              GGS_astDeclarationStruct & ioArgument3,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i22_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i22_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i23_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                     Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i23_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i23_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i24_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                     Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i24_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i24_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i25_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                               Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i25_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i25_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i26_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i26_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i26_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i27_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i27_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i27_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i28_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i28_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i28_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i29_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                  Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i29_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i29_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i30_ (const GGS_lstring constinArgument0,
                                                                              const GGS_lstring constinArgument1,
                                                                              GGS_arrayControllerBindingListAST & ioArgument2,
                                                                              GGS_astDeclarationStruct & ioArgument3,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i30_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i30_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i31_ (GGS_astViewDeclarationList & ioArgument0,
                                                                                 Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i31_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i31_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i32_ (GGS_astViewDeclarationList & ioArgument0,
                                                                                 Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i32_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i32_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i33_ (GGS_stringset & ioArgument0,
                                                                                           GGS_astAutoLayoutViewFunctionCallList & outArgument1,
                                                                                           Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i33_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i33_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i34_ (const GGS_bool constinArgument0,
                                                                                GGS_stringset & ioArgument1,
                                                                                GGS_astNewStackViewDeclarationList & ioArgument2,
                                                                                GGS_astViewInstructionList & ioArgument3,
                                                                                Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i34_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i34_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i35_ (GGS_stringset & ioArgument0,
                                                                        GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i35_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i35_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i36_ (GGS_stringset & ioArgument0,
                                                                        GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i36_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i36_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i37_ (GGS_stringset & ioArgument0,
                                                                                    GGS_astComputedViewInstruction & outArgument1,
                                                                                    Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i37_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i37_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i38_ (GGS_stringset & ioArgument0,
                                                                                        GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i38_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i38_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i39_ (GGS_stringset & ioArgument0,
                                                                        GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i39_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i39_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i40_ (GGS_stringset & ioArgument0,
                                                                        GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i40_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_view_5F_instruction_i40_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_declaration_i41_ (GGS_outletDeclarationList & ioArgument0,
                                                                          Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_outlet_5F_declaration_i41_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_outlet_5F_declaration_i41_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_i42_ (GGS_tableValueBinding & outArgument0,
                                                                      GGS_runActionDescriptor & outArgument1,
                                                                      GGS_multipleBindingDescriptor & outArgument2,
                                                                      GGS_multipleBindingDescriptor & outArgument3,
                                                                      GGS_graphicController & outArgument4,
                                                                      GGS_regularBindingList & outArgument5,
                                                                      Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_i42_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_outlet_5F_binding_i42_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i43_ (const GGS_lstring constinArgument0,
                                                                             const GGS_lstring constinArgument1,
                                                                             GGS_astDeclarationStruct & ioArgument2,
                                                                             Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i43_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i43_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i44_ (const GGS_lstring constinArgument0,
                                                                             const GGS_lstring constinArgument1,
                                                                             GGS_astDeclarationStruct & ioArgument2,
                                                                             Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i44_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i44_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i45_ (GGS_externSwiftFunctionList & ioArgument0,
                                                                            Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i45_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i45_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_declaration_i46_ (GGS_astDeclarationStruct & ioArgument0,
                                                                        Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_enum_5F_declaration_i46_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_enum_5F_declaration_i46_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i47_ (GGS_astDeclarationStruct & ioArgument0,
                                                                                    Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i47_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i47_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_entity_5F_declaration_i48_ (GGS_astDeclarationStruct & ioArgument0,
                                                                          Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_entity_5F_declaration_i48_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_entity_5F_declaration_i48_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i49_ (const GGS_lstring constinArgument0,
                                                                              const GGS_lstring constinArgument1,
                                                                              GGS_arrayControllerBindingListAST & ioArgument2,
                                                                              GGS_astDeclarationStruct & ioArgument3,
                                                                              Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i49_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_controller_5F_declaration_i49_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i50_ (const GGS_lstring constinArgument0,
                                                                             const GGS_lstring constinArgument1,
                                                                             GGS_astDeclarationStruct & ioArgument2,
                                                                             Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i50_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_transient_5F_declaration_i50_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_class_5F_declaration_i51_ (GGS_astDeclarationStruct & ioArgument0,
                                                                         Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_class_5F_declaration_i51_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_class_5F_declaration_i51_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_action_5F_declaration_i52_ (GGS_lstringlist & ioArgument0,
                                                                          Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_action_5F_declaration_i52_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_action_5F_declaration_i52_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;

  protected: void rule_easyBindings_5F_syntax_toOne_5F_relationship_i53_ (const GGS_lstring constinArgument0,
                                                                          GGS_astDeclarationStruct & ioArgument1,
                                                                          Lexique_easyBindings_5F_lexique * inLexique) ;

/*  protected: void rule_easyBindings_5F_syntax_toOne_5F_relationship_i53_parse (Lexique_easyBindings_5F_lexique * inLexique) ; */

  protected: void rule_easyBindings_5F_syntax_toOne_5F_relationship_i53_indexing (Lexique_easyBindings_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_easyBindings_5F_syntax_0 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_1 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_2 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_3 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_4 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_5 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_6 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_7 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_8 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_9 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_10 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_11 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_12 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_13 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_14 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_15 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_16 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_17 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_18 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_19 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_20 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_21 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_22 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_23 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_24 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_25 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_26 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_27 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_28 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_29 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_30 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_31 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_32 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_33 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_34 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_35 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_36 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_37 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_38 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_39 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_40 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_41 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_42 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_43 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_44 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_45 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_46 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_47 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_48 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_49 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_50 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_51 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_52 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_53 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_54 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_55 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_56 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_57 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_58 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_59 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_60 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_61 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_62 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_63 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_64 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_65 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_66 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_67 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_68 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_69 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_70 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_71 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_72 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_73 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_74 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_75 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_76 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_77 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_78 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_79 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_80 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_81 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_82 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_83 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_84 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_85 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_86 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_87 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_88 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_89 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_90 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_91 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_92 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_93 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_94 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_95 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_96 (Lexique_easyBindings_5F_lexique *) = 0 ;

  protected: virtual int32_t select_easyBindings_5F_syntax_97 (Lexique_easyBindings_5F_lexique *) = 0 ;


} ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractBooleanMultipleBindingExpressionAST : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractBooleanMultipleBindingExpressionAST_init (Compiler * inCompiler) ;


//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_abstractBooleanMultipleBindingExpressionAST (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @andBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_andBooleanMultipleBindingExpressionAST : public GGS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GGS_andBooleanMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_andBooleanMultipleBindingExpressionAST (const class cPtr_andBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mLeftBinding (void) const ;
  public: void setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mRightBinding (void) const ;
  public: void setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_andBooleanMultipleBindingExpressionAST init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                          const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_andBooleanMultipleBindingExpressionAST extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_andBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @andBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_andBooleanMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void andBooleanMultipleBindingExpressionAST_init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                    const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                    Compiler * inCompiler) ;


//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mLeftBinding ;
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mRightBinding ;


//--- Default constructor
  public: cPtr_andBooleanMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_andBooleanMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                       const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @arrayControllerDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_arrayControllerDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_arrayControllerDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_arrayControllerDeclarationAST (const class cPtr_arrayControllerDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mControllerName (void) const ;
  public: void setProperty_mControllerName (const GGS_lstring & inValue) ;

  public: class GGS_arrayControllerBoundModelAST readProperty_mModel (void) const ;
  public: void setProperty_mModel (const GGS_arrayControllerBoundModelAST & inValue) ;

  public: class GGS_lstring readProperty_mToManyPropertyName (void) const ;
  public: void setProperty_mToManyPropertyName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_arrayControllerDeclarationAST init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_arrayControllerBoundModelAST & inOperand2,
                                                                         const class GGS_lstring & inOperand3,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_arrayControllerDeclarationAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_arrayControllerDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//   enum arrayControllerBoundModelAST
//--------------------------------------------------------------------------------------------------

class GGS_arrayControllerBoundModelAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_arrayControllerBoundModelAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_rootToManyRelationship,
    enum_selfToManyRelationship
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_rootToManyRelationship (class GGS_lstring & out_rootEntityName) const ;

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
  public: static GGS_arrayControllerBoundModelAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_arrayControllerBoundModelAST class_func_rootToManyRelationship (const class GGS_lstring & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_arrayControllerBoundModelAST class_func_selfToManyRelationship (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractRootToManyRelationship (class GGS_lstring & outArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ getter_getRootToManyRelationship (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRootToManyRelationship (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelfToManyRelationship (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerBoundModelAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @arrayControllerDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_arrayControllerDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void arrayControllerDeclarationAST_init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   const class GGS_arrayControllerBoundModelAST & inOperand2,
                                                                   const class GGS_lstring & inOperand3,
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

//--- Extension method thirdAnalysisPhase
  public: virtual void method_thirdAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mControllerName ;
  public: GGS_arrayControllerBoundModelAST mProperty_mModel ;
  public: GGS_lstring mProperty_mToManyPropertyName ;


//--- Default constructor
  public: cPtr_arrayControllerDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_arrayControllerDeclarationAST (const GGS_lstring & in_mClassName,
                                              const GGS_lstring & in_mControllerName,
                                              const GGS_arrayControllerBoundModelAST & in_mModel,
                                              const GGS_lstring & in_mToManyPropertyName,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAbstractViewInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

class GGS_astAbstractViewInstructionDeclaration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_astAbstractViewInstructionDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astAbstractViewInstructionDeclaration (const class cPtr_astAbstractViewInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAbstractViewInstructionDeclaration init (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAbstractViewInstructionDeclaration extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astAbstractViewInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astAbstractViewInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_astAbstractViewInstructionDeclaration : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astAbstractViewInstructionDeclaration_init (Compiler * inCompiler) ;


//--- Extension method generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_astAbstractViewInstructionDeclaration (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astComputedHorizontalViewDeclaration reference class
//--------------------------------------------------------------------------------------------------

class GGS_astComputedHorizontalViewDeclaration : public GGS_astAbstractViewDeclaration {
//--------------------------------- Default constructor
  public: GGS_astComputedHorizontalViewDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astComputedHorizontalViewDeclaration (const class cPtr_astComputedHorizontalViewDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

  public: class GGS_astViewInstructionList readProperty_mInstructionList (void) const ;

  public: class GGS_astNewStackViewDeclarationList readProperty_mNewStackViewDeclarationList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astComputedHorizontalViewDeclaration init_21__21__21_ (const class GGS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                            const class GGS_astViewInstructionList & inOperand1,
                                                                            const class GGS_astNewStackViewDeclarationList & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astComputedHorizontalViewDeclaration extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astComputedHorizontalViewDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astAutoLayoutViewFunctionCallList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_astAutoLayoutViewFunctionCallList final {
  public: DownEnumerator_astAutoLayoutViewFunctionCallList (const class GGS_astAutoLayoutViewFunctionCallList & inList) ;

  public: ~ DownEnumerator_astAutoLayoutViewFunctionCallList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutViewInstructionParameterList current_mParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astAutoLayoutViewFunctionCallList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_astAutoLayoutViewFunctionCallList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_astAutoLayoutViewFunctionCallList (const DownEnumerator_astAutoLayoutViewFunctionCallList &) = delete ;
  private: DownEnumerator_astAutoLayoutViewFunctionCallList & operator = (const DownEnumerator_astAutoLayoutViewFunctionCallList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_astAutoLayoutViewFunctionCallList final {
  public: UpEnumerator_astAutoLayoutViewFunctionCallList (const class GGS_astAutoLayoutViewFunctionCallList & inList)  ;

  public: ~ UpEnumerator_astAutoLayoutViewFunctionCallList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public: class GGS_astAutoLayoutViewInstructionParameterList current_mParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astAutoLayoutViewFunctionCallList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_astAutoLayoutViewFunctionCallList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_astAutoLayoutViewFunctionCallList (const UpEnumerator_astAutoLayoutViewFunctionCallList &) = delete ;
  private: UpEnumerator_astAutoLayoutViewFunctionCallList & operator = (const UpEnumerator_astAutoLayoutViewFunctionCallList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @astAutoLayoutViewFunctionCallList list
//--------------------------------------------------------------------------------------------------

class GGS_astAutoLayoutViewFunctionCallList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_astAutoLayoutViewFunctionCallList_2E_element> mArray ;

//--- Default constructor
  public: GGS_astAutoLayoutViewFunctionCallList (void) ;

//--- Destructor
  public: virtual ~ GGS_astAutoLayoutViewFunctionCallList (void) = default ;

//--- Copy
  public: GGS_astAutoLayoutViewFunctionCallList (const GGS_astAutoLayoutViewFunctionCallList &) = default ;
  public: GGS_astAutoLayoutViewFunctionCallList & operator = (const GGS_astAutoLayoutViewFunctionCallList &) = default ;

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
  public : inline GenericArray <GGS_astAutoLayoutViewFunctionCallList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_astAutoLayoutViewFunctionCallList subList (const int32_t inStart,
                                                          const int32_t inLength,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_astAutoLayoutViewFunctionCallList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mFunctionName,
                                                 const class GGS_astAutoLayoutViewInstructionParameterList & in_mParameterList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astAutoLayoutViewFunctionCallList init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astAutoLayoutViewFunctionCallList extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astAutoLayoutViewFunctionCallList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_astAutoLayoutViewInstructionParameterList & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_astAutoLayoutViewFunctionCallList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_astAutoLayoutViewInstructionParameterList & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_astAutoLayoutViewFunctionCallList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_astAutoLayoutViewFunctionCallList add_operation (const GGS_astAutoLayoutViewFunctionCallList & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_astAutoLayoutViewInstructionParameterList constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_astAutoLayoutViewInstructionParameterList constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFunctionNameAtIndex (class GGS_lstring constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMParameterListAtIndex (class GGS_astAutoLayoutViewInstructionParameterList constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFunctionNameAtIndex (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewInstructionParameterList getter_mParameterListAtIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewFunctionCallList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewFunctionCallList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_astAutoLayoutViewFunctionCallList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_astAutoLayoutViewFunctionCallList ;
  friend class DownEnumerator_astAutoLayoutViewFunctionCallList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionCallList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astNewStackViewDeclarationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_astNewStackViewDeclarationList final {
  public: DownEnumerator_astNewStackViewDeclarationList (const class GGS_astNewStackViewDeclarationList & inList) ;

  public: ~ DownEnumerator_astNewStackViewDeclarationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mInstanciedStackViewName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mTypeStackViewName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astNewStackViewDeclarationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_astNewStackViewDeclarationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_astNewStackViewDeclarationList (const DownEnumerator_astNewStackViewDeclarationList &) = delete ;
  private: DownEnumerator_astNewStackViewDeclarationList & operator = (const DownEnumerator_astNewStackViewDeclarationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_astNewStackViewDeclarationList final {
  public: UpEnumerator_astNewStackViewDeclarationList (const class GGS_astNewStackViewDeclarationList & inList)  ;

  public: ~ UpEnumerator_astNewStackViewDeclarationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mInstanciedStackViewName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mTypeStackViewName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astNewStackViewDeclarationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_astNewStackViewDeclarationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_astNewStackViewDeclarationList (const UpEnumerator_astNewStackViewDeclarationList &) = delete ;
  private: UpEnumerator_astNewStackViewDeclarationList & operator = (const UpEnumerator_astNewStackViewDeclarationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @astNewStackViewDeclarationList list
//--------------------------------------------------------------------------------------------------

class GGS_astNewStackViewDeclarationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_astNewStackViewDeclarationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_astNewStackViewDeclarationList (void) ;

//--- Destructor
  public: virtual ~ GGS_astNewStackViewDeclarationList (void) = default ;

//--- Copy
  public: GGS_astNewStackViewDeclarationList (const GGS_astNewStackViewDeclarationList &) = default ;
  public: GGS_astNewStackViewDeclarationList & operator = (const GGS_astNewStackViewDeclarationList &) = default ;

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
  public : inline GenericArray <GGS_astNewStackViewDeclarationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_astNewStackViewDeclarationList subList (const int32_t inStart,
                                                       const int32_t inLength,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_astNewStackViewDeclarationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mInstanciedStackViewName,
                                                 const class GGS_lstring & in_mTypeStackViewName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astNewStackViewDeclarationList init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astNewStackViewDeclarationList extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astNewStackViewDeclarationList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_astNewStackViewDeclarationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_astNewStackViewDeclarationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_astNewStackViewDeclarationList add_operation (const GGS_astNewStackViewDeclarationList & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstring constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstring & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstring & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstanciedStackViewNameAtIndex (class GGS_lstring constinArgument0,
                                                          class GGS_uint constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMTypeStackViewNameAtIndex (class GGS_lstring constinArgument0,
                                                    class GGS_uint constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstring & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstring & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mInstanciedStackViewNameAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mTypeStackViewNameAtIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_astNewStackViewDeclarationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_astNewStackViewDeclarationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_astNewStackViewDeclarationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_astNewStackViewDeclarationList ;
  friend class DownEnumerator_astNewStackViewDeclarationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astNewStackViewDeclarationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astViewInstructionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_astViewInstructionList final {
  public: DownEnumerator_astViewInstructionList (const class GGS_astViewInstructionList & inList) ;

  public: ~ DownEnumerator_astViewInstructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_astAbstractViewInstructionDeclaration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astViewInstructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_astViewInstructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_astViewInstructionList (const DownEnumerator_astViewInstructionList &) = delete ;
  private: DownEnumerator_astViewInstructionList & operator = (const DownEnumerator_astViewInstructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_astViewInstructionList final {
  public: UpEnumerator_astViewInstructionList (const class GGS_astViewInstructionList & inList)  ;

  public: ~ UpEnumerator_astViewInstructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_astAbstractViewInstructionDeclaration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_astViewInstructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_astViewInstructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_astViewInstructionList (const UpEnumerator_astViewInstructionList &) = delete ;
  private: UpEnumerator_astViewInstructionList & operator = (const UpEnumerator_astViewInstructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @astViewInstructionList list
//--------------------------------------------------------------------------------------------------

class GGS_astViewInstructionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_astViewInstructionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_astViewInstructionList (void) ;

//--- Destructor
  public: virtual ~ GGS_astViewInstructionList (void) = default ;

//--- Copy
  public: GGS_astViewInstructionList (const GGS_astViewInstructionList &) = default ;
  public: GGS_astViewInstructionList & operator = (const GGS_astViewInstructionList &) = default ;

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
  public : inline GenericArray <GGS_astViewInstructionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_astViewInstructionList subList (const int32_t inStart,
                                               const int32_t inLength,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_astViewInstructionList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_astAbstractViewInstructionDeclaration & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astViewInstructionList init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astViewInstructionList extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_astViewInstructionList class_func_listWithValue (const class GGS_astAbstractViewInstructionDeclaration & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_astViewInstructionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_astAbstractViewInstructionDeclaration & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_astViewInstructionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_astViewInstructionList add_operation (const GGS_astViewInstructionList & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_astAbstractViewInstructionDeclaration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_astAbstractViewInstructionDeclaration constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_astAbstractViewInstructionDeclaration & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_astAbstractViewInstructionDeclaration & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_astAbstractViewInstructionDeclaration & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionAtIndex (class GGS_astAbstractViewInstructionDeclaration constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_astAbstractViewInstructionDeclaration & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_astAbstractViewInstructionDeclaration & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_astAbstractViewInstructionDeclaration getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_astViewInstructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_astViewInstructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_astViewInstructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_astViewInstructionList ;
  friend class DownEnumerator_astViewInstructionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astViewInstructionList ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astComputedHorizontalViewDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_astComputedHorizontalViewDeclaration : public cPtr_astAbstractViewDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astComputedHorizontalViewDeclaration_init_21__21__21_ (const class GGS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                      const class GGS_astViewInstructionList & inOperand1,
                                                                      const class GGS_astNewStackViewDeclarationList & inOperand2,
                                                                      Compiler * inCompiler) ;


//--- Extension method checkView
  public: virtual void method_checkView (const class GGS_string arg_inViewName,
           const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewGeneration & arg_outGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public: GGS_astViewInstructionList mProperty_mInstructionList ;
  public: GGS_astNewStackViewDeclarationList mProperty_mNewStackViewDeclarationList ;


//--- Default constructor
  public: cPtr_astComputedHorizontalViewDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astComputedHorizontalViewDeclaration (const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                     const GGS_astViewInstructionList & in_mInstructionList,
                                                     const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astComputedVerticalViewDeclaration reference class
//--------------------------------------------------------------------------------------------------

class GGS_astComputedVerticalViewDeclaration : public GGS_astAbstractViewDeclaration {
//--------------------------------- Default constructor
  public: GGS_astComputedVerticalViewDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astComputedVerticalViewDeclaration (const class cPtr_astComputedVerticalViewDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mHasVerticalScroller (void) const ;

  public: class GGS_lstring readProperty_mConfiguratorName (void) const ;

  public: class GGS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

  public: class GGS_astViewInstructionList readProperty_mInstructionList (void) const ;

  public: class GGS_astNewStackViewDeclarationList readProperty_mNewStackViewDeclarationList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astComputedVerticalViewDeclaration init_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                                  const class GGS_astViewInstructionList & inOperand3,
                                                                                  const class GGS_astNewStackViewDeclarationList & inOperand4,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astComputedVerticalViewDeclaration extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astComputedVerticalViewDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astComputedVerticalViewDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_astComputedVerticalViewDeclaration : public cPtr_astAbstractViewDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astComputedVerticalViewDeclaration_init_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                            const class GGS_astViewInstructionList & inOperand3,
                                                                            const class GGS_astNewStackViewDeclarationList & inOperand4,
                                                                            Compiler * inCompiler) ;


//--- Extension method checkView
  public: virtual void method_checkView (const class GGS_string arg_inViewName,
           const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewGeneration & arg_outGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mHasVerticalScroller ;
  public: GGS_lstring mProperty_mConfiguratorName ;
  public: GGS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public: GGS_astViewInstructionList mProperty_mInstructionList ;
  public: GGS_astNewStackViewDeclarationList mProperty_mNewStackViewDeclarationList ;


//--- Default constructor
  public: cPtr_astComputedVerticalViewDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astComputedVerticalViewDeclaration (const GGS_bool & in_mHasVerticalScroller,
                                                   const GGS_lstring & in_mConfiguratorName,
                                                   const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                   const GGS_astViewInstructionList & in_mInstructionList,
                                                   const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astComputedViewInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_astComputedViewInstruction : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astComputedViewInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astComputedViewInstruction (const class cPtr_astComputedViewInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mAutoLayoutViewClassName (void) const ;

  public: class GGS_astAutoLayoutViewInstructionParameterList readProperty_mParameterList (void) const ;

  public: class GGS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

  public: class GGS_tableValueBinding readProperty_mTableValueBinding (void) const ;

  public: class GGS_runActionDescriptor readProperty_mRunActionDescriptor (void) const ;

  public: class GGS_multipleBindingDescriptor readProperty_mEnabledBindingDescriptor (void) const ;

  public: class GGS_multipleBindingDescriptor readProperty_mHiddenBindingDescriptor (void) const ;

  public: class GGS_graphicController readProperty_mGraphicController (void) const ;

  public: class GGS_regularBindingList readProperty_mRegularBindingList (void) const ;

  public: class GGS_lstring readProperty_mConfiguratorName (void) const ;

  public: class GGS_lstring readProperty_mOutletName (void) const ;

  public: class GGS_bool readProperty_mOutletIsArray (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astComputedViewInstruction init_21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                      const class GGS_astAutoLayoutViewInstructionParameterList & inOperand1,
                                                                                                      const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                                                      const class GGS_tableValueBinding & inOperand3,
                                                                                                      const class GGS_runActionDescriptor & inOperand4,
                                                                                                      const class GGS_multipleBindingDescriptor & inOperand5,
                                                                                                      const class GGS_multipleBindingDescriptor & inOperand6,
                                                                                                      const class GGS_graphicController & inOperand7,
                                                                                                      const class GGS_regularBindingList & inOperand8,
                                                                                                      const class GGS_lstring & inOperand9,
                                                                                                      const class GGS_lstring & inOperand10,
                                                                                                      const class GGS_bool & inOperand11,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astComputedViewInstruction extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astComputedViewInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astComputedViewInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astComputedViewInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_astComputedViewInstruction : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astComputedViewInstruction_init_21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                const class GGS_astAutoLayoutViewInstructionParameterList & inOperand1,
                                                                                                const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                                                const class GGS_tableValueBinding & inOperand3,
                                                                                                const class GGS_runActionDescriptor & inOperand4,
                                                                                                const class GGS_multipleBindingDescriptor & inOperand5,
                                                                                                const class GGS_multipleBindingDescriptor & inOperand6,
                                                                                                const class GGS_graphicController & inOperand7,
                                                                                                const class GGS_regularBindingList & inOperand8,
                                                                                                const class GGS_lstring & inOperand9,
                                                                                                const class GGS_lstring & inOperand10,
                                                                                                const class GGS_bool & inOperand11,
                                                                                                Compiler * inCompiler) ;


//--- Extension method generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mAutoLayoutViewClassName ;
  public: GGS_astAutoLayoutViewInstructionParameterList mProperty_mParameterList ;
  public: GGS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public: GGS_tableValueBinding mProperty_mTableValueBinding ;
  public: GGS_runActionDescriptor mProperty_mRunActionDescriptor ;
  public: GGS_multipleBindingDescriptor mProperty_mEnabledBindingDescriptor ;
  public: GGS_multipleBindingDescriptor mProperty_mHiddenBindingDescriptor ;
  public: GGS_graphicController mProperty_mGraphicController ;
  public: GGS_regularBindingList mProperty_mRegularBindingList ;
  public: GGS_lstring mProperty_mConfiguratorName ;
  public: GGS_lstring mProperty_mOutletName ;
  public: GGS_bool mProperty_mOutletIsArray ;


//--- Default constructor
  public: cPtr_astComputedViewInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astComputedViewInstruction (const GGS_lstring & in_mAutoLayoutViewClassName,
                                           const GGS_astAutoLayoutViewInstructionParameterList & in_mParameterList,
                                           const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                           const GGS_tableValueBinding & in_mTableValueBinding,
                                           const GGS_runActionDescriptor & in_mRunActionDescriptor,
                                           const GGS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                           const GGS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                           const GGS_graphicController & in_mGraphicController,
                                           const GGS_regularBindingList & in_mRegularBindingList,
                                           const GGS_lstring & in_mConfiguratorName,
                                           const GGS_lstring & in_mOutletName,
                                           const GGS_bool & in_mOutletIsArray,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astDividerInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

class GGS_astDividerInstructionDeclaration : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astDividerInstructionDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astDividerInstructionDeclaration (const class cPtr_astDividerInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_horizontal (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astDividerInstructionDeclaration init_21_horizontal (const class GGS_bool & inOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astDividerInstructionDeclaration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astDividerInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astDividerInstructionDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astDividerInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_astDividerInstructionDeclaration : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astDividerInstructionDeclaration_init_21_horizontal (const class GGS_bool & inOperand0,
                                                                    Compiler * inCompiler) ;


//--- Extension method generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_horizontal ;


//--- Default constructor
  public: cPtr_astDividerInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astDividerInstructionDeclaration (const GGS_bool & in_horizontal,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astGutterInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

class GGS_astGutterInstructionDeclaration : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astGutterInstructionDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astGutterInstructionDeclaration (const class cPtr_astGutterInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_horizontal (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astGutterInstructionDeclaration init_21_horizontal (const class GGS_bool & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astGutterInstructionDeclaration extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astGutterInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astGutterInstructionDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astGutterInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_astGutterInstructionDeclaration : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astGutterInstructionDeclaration_init_21_horizontal (const class GGS_bool & inOperand0,
                                                                   Compiler * inCompiler) ;


//--- Extension method generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_horizontal ;


//--- Default constructor
  public: cPtr_astGutterInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astGutterInstructionDeclaration (const GGS_bool & in_horizontal,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astHStackViewInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

class GGS_astHStackViewInstructionDeclaration : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astHStackViewInstructionDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astHStackViewInstructionDeclaration (const class cPtr_astHStackViewInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

  public: class GGS_astViewInstructionList readProperty_mInstructionList (void) const ;

  public: class GGS_optionalHiddenBinding readProperty_mOptionalHiddenBinding (void) const ;

  public: class GGS_astNewStackViewDeclarationList readProperty_mAstNewStackViewDeclarationList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astHStackViewInstructionDeclaration init_21__21__21__21_ (const class GGS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                               const class GGS_astViewInstructionList & inOperand1,
                                                                               const class GGS_optionalHiddenBinding & inOperand2,
                                                                               const class GGS_astNewStackViewDeclarationList & inOperand3,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astHStackViewInstructionDeclaration extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astHStackViewInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration ;

//--------------------------------------------------------------------------------------------------
//   enum optionalHiddenBinding
//--------------------------------------------------------------------------------------------------

class GGS_optionalHiddenBinding : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_optionalHiddenBinding (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_noBinding,
    enum_binding
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_binding (class GGS_abstractBooleanMultipleBindingExpressionAST & out_hidden) const ;

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
  public: static GGS_optionalHiddenBinding extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionalHiddenBinding class_func_binding (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_optionalHiddenBinding class_func_noBinding (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractBinding (class GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_optionalHiddenBinding_2E_binding_3F_ getter_getBinding (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBinding (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNoBinding (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalHiddenBinding ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astHStackViewInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_astHStackViewInstructionDeclaration : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astHStackViewInstructionDeclaration_init_21__21__21__21_ (const class GGS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                         const class GGS_astViewInstructionList & inOperand1,
                                                                         const class GGS_optionalHiddenBinding & inOperand2,
                                                                         const class GGS_astNewStackViewDeclarationList & inOperand3,
                                                                         Compiler * inCompiler) ;


//--- Extension method generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public: GGS_astViewInstructionList mProperty_mInstructionList ;
  public: GGS_optionalHiddenBinding mProperty_mOptionalHiddenBinding ;
  public: GGS_astNewStackViewDeclarationList mProperty_mAstNewStackViewDeclarationList ;


//--- Default constructor
  public: cPtr_astHStackViewInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astHStackViewInstructionDeclaration (const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                    const GGS_astViewInstructionList & in_mInstructionList,
                                                    const GGS_optionalHiddenBinding & in_mOptionalHiddenBinding,
                                                    const GGS_astNewStackViewDeclarationList & in_mAstNewStackViewDeclarationList,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astLocalViewInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_astLocalViewInstruction : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astLocalViewInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astLocalViewInstruction (const class cPtr_astLocalViewInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLocalView (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astLocalViewInstruction init_21_ (const class GGS_lstring & inOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astLocalViewInstruction extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astLocalViewInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astLocalViewInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astLocalViewInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_astLocalViewInstruction : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astLocalViewInstruction_init_21_ (const class GGS_lstring & inOperand0,
                                                 Compiler * inCompiler) ;


//--- Extension method generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mLocalView ;


//--- Default constructor
  public: cPtr_astLocalViewInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astLocalViewInstruction (const GGS_lstring & in_mLocalView,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astSeparatorInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

class GGS_astSeparatorInstructionDeclaration : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astSeparatorInstructionDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astSeparatorInstructionDeclaration (const class cPtr_astSeparatorInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_horizontal (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astSeparatorInstructionDeclaration init_21_horizontal (const class GGS_bool & inOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astSeparatorInstructionDeclaration extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astSeparatorInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astSeparatorInstructionDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astSeparatorInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_astSeparatorInstructionDeclaration : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astSeparatorInstructionDeclaration_init_21_horizontal (const class GGS_bool & inOperand0,
                                                                      Compiler * inCompiler) ;


//--- Extension method generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_horizontal ;


//--- Default constructor
  public: cPtr_astSeparatorInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astSeparatorInstructionDeclaration (const GGS_bool & in_horizontal,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astSpaceViewInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_astSpaceViewInstruction : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astSpaceViewInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astSpaceViewInstruction (const class cPtr_astSpaceViewInstruction * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astSpaceViewInstruction init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astSpaceViewInstruction extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astSpaceViewInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astSpaceViewInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astSpaceViewInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_astSpaceViewInstruction : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astSpaceViewInstruction_init (Compiler * inCompiler) ;


//--- Extension method generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_astSpaceViewInstruction (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astVStackViewInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

class GGS_astVStackViewInstructionDeclaration : public GGS_astAbstractViewInstructionDeclaration {
//--------------------------------- Default constructor
  public: GGS_astVStackViewInstructionDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_astVStackViewInstructionDeclaration (const class cPtr_astVStackViewInstructionDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mHasVerticalScroller (void) const ;

  public: class GGS_lstring readProperty_mConfiguratorName (void) const ;

  public: class GGS_astAutoLayoutViewFunctionCallList readProperty_mFunctionCallList (void) const ;

  public: class GGS_astViewInstructionList readProperty_mInstructionList (void) const ;

  public: class GGS_optionalHiddenBinding readProperty_mOptionalHiddenBinding (void) const ;

  public: class GGS_astNewStackViewDeclarationList readProperty_mAstNewStackViewDeclarationList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astVStackViewInstructionDeclaration init_21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                                       const class GGS_astViewInstructionList & inOperand3,
                                                                                       const class GGS_optionalHiddenBinding & inOperand4,
                                                                                       const class GGS_astNewStackViewDeclarationList & inOperand5,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astVStackViewInstructionDeclaration extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_astVStackViewInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @astVStackViewInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_astVStackViewInstructionDeclaration : public cPtr_astAbstractViewInstructionDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void astVStackViewInstructionDeclaration_init_21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_astAutoLayoutViewFunctionCallList & inOperand2,
                                                                                 const class GGS_astViewInstructionList & inOperand3,
                                                                                 const class GGS_optionalHiddenBinding & inOperand4,
                                                                                 const class GGS_astNewStackViewDeclarationList & inOperand5,
                                                                                 Compiler * inCompiler) ;


//--- Extension method generateViewCode
  public: virtual void method_generateViewCode (const class GGS_autoLayoutViewDeclarationMap arg_inViewDeclarationMap,
           const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesPropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inObservablePropertyMap,
           const class GGS_actionMap arg_inActionMap,
           const class GGS_string arg_inReceiverSwiftTypeName,
           const class GGS_classMap arg_inClassMap,
           class GGS_implicitViewFunctionGenerationList & arg_ioImplicitViewFunctionGenerationList,
           class GGS_autoLayoutConfiguratorMap & arg_ioConfiguratorMap,
           class GGS_autoLayoutOutletMap & arg_ioOutletMap,
           class GGS_abstractViewInstructionGeneration & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mHasVerticalScroller ;
  public: GGS_lstring mProperty_mConfiguratorName ;
  public: GGS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public: GGS_astViewInstructionList mProperty_mInstructionList ;
  public: GGS_optionalHiddenBinding mProperty_mOptionalHiddenBinding ;
  public: GGS_astNewStackViewDeclarationList mProperty_mAstNewStackViewDeclarationList ;


//--- Default constructor
  public: cPtr_astVStackViewInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_astVStackViewInstructionDeclaration (const GGS_bool & in_mHasVerticalScroller,
                                                    const GGS_lstring & in_mConfiguratorName,
                                                    const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                    const GGS_astViewInstructionList & in_mInstructionList,
                                                    const GGS_optionalHiddenBinding & in_mOptionalHiddenBinding,
                                                    const GGS_astNewStackViewDeclarationList & in_mAstNewStackViewDeclarationList,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @autoLayoutTableViewControllerDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_autoLayoutTableViewControllerDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_autoLayoutTableViewControllerDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_autoLayoutTableViewControllerDeclarationAST (const class cPtr_autoLayoutTableViewControllerDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mControllerName (void) const ;

  public: class GGS_bool readProperty_mIsRoot (void) const ;

  public: class GGS_lstring readProperty_mRootEntityName (void) const ;

  public: class GGS_lstring readProperty_mToManyPropertyName (void) const ;

  public: class GGS_autoLayoutTableViewControllerBoundColumnListAST readProperty_mTableViewControllerBoundColumnListAST (void) const ;

  public: class GGS_autoLayoutTableViewControllerAttributListAST readProperty_mTableViewControllerAttributListAST (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_autoLayoutTableViewControllerDeclarationAST init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                   const class GGS_lstring & inOperand1,
                                                                                                   const class GGS_bool & inOperand2,
                                                                                                   const class GGS_lstring & inOperand3,
                                                                                                   const class GGS_lstring & inOperand4,
                                                                                                   const class GGS_autoLayoutTableViewControllerBoundColumnListAST & inOperand5,
                                                                                                   const class GGS_autoLayoutTableViewControllerAttributListAST & inOperand6,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_autoLayoutTableViewControllerDeclarationAST extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_autoLayoutTableViewControllerDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @autoLayoutTableViewControllerDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_autoLayoutTableViewControllerDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void autoLayoutTableViewControllerDeclarationAST_init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                             const class GGS_lstring & inOperand1,
                                                                                             const class GGS_bool & inOperand2,
                                                                                             const class GGS_lstring & inOperand3,
                                                                                             const class GGS_lstring & inOperand4,
                                                                                             const class GGS_autoLayoutTableViewControllerBoundColumnListAST & inOperand5,
                                                                                             const class GGS_autoLayoutTableViewControllerAttributListAST & inOperand6,
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

//--- Extension method thirdAnalysisPhase
  public: virtual void method_thirdAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mControllerName ;
  public: GGS_bool mProperty_mIsRoot ;
  public: GGS_lstring mProperty_mRootEntityName ;
  public: GGS_lstring mProperty_mToManyPropertyName ;
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST mProperty_mTableViewControllerBoundColumnListAST ;
  public: GGS_autoLayoutTableViewControllerAttributListAST mProperty_mTableViewControllerAttributListAST ;


//--- Default constructor
  public: cPtr_autoLayoutTableViewControllerDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_autoLayoutTableViewControllerDeclarationAST (const GGS_lstring & in_mClassName,
                                                            const GGS_lstring & in_mControllerName,
                                                            const GGS_bool & in_mIsRoot,
                                                            const GGS_lstring & in_mRootEntityName,
                                                            const GGS_lstring & in_mToManyPropertyName,
                                                            const GGS_autoLayoutTableViewControllerBoundColumnListAST & in_mTableViewControllerBoundColumnListAST,
                                                            const GGS_autoLayoutTableViewControllerAttributListAST & in_mTableViewControllerAttributListAST,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @comparisonMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_comparisonMultipleBindingExpressionAST : public GGS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GGS_comparisonMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_comparisonMultipleBindingExpressionAST (const class cPtr_comparisonMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mLeftBinding (void) const ;
  public: void setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

  public: class GGS_multipleBindingComparisonAST readProperty_mOperator (void) const ;
  public: void setProperty_mOperator (const GGS_multipleBindingComparisonAST & inValue) ;

  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mRightBinding (void) const ;
  public: void setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_comparisonMultipleBindingExpressionAST init_21__21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                              const class GGS_multipleBindingComparisonAST & inOperand1,
                                                                              const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_comparisonMultipleBindingExpressionAST extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_comparisonMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
//   enum multipleBindingComparisonAST
//--------------------------------------------------------------------------------------------------

class GGS_multipleBindingComparisonAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_multipleBindingComparisonAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_equal,
    enum_notEqual,
    enum_lower,
    enum_lowerOrEqual,
    enum_greater,
    enum_greaterOrEqual
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
  public: static GGS_multipleBindingComparisonAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_multipleBindingComparisonAST class_func_equal (LOCATION_ARGS) ;

  public: static class GGS_multipleBindingComparisonAST class_func_greater (LOCATION_ARGS) ;

  public: static class GGS_multipleBindingComparisonAST class_func_greaterOrEqual (LOCATION_ARGS) ;

  public: static class GGS_multipleBindingComparisonAST class_func_lower (LOCATION_ARGS) ;

  public: static class GGS_multipleBindingComparisonAST class_func_lowerOrEqual (LOCATION_ARGS) ;

  public: static class GGS_multipleBindingComparisonAST class_func_notEqual (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isEqual (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isGreater (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isGreaterOrEqual (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLower (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLowerOrEqual (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNotEqual (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multipleBindingComparisonAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @comparisonMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_comparisonMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void comparisonMultipleBindingExpressionAST_init_21__21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                        const class GGS_multipleBindingComparisonAST & inOperand1,
                                                                        const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand2,
                                                                        Compiler * inCompiler) ;


//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mLeftBinding ;
  public: GGS_multipleBindingComparisonAST mProperty_mOperator ;
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mRightBinding ;


//--- Default constructor
  public: cPtr_comparisonMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_comparisonMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                       const GGS_multipleBindingComparisonAST & in_mOperator,
                                                       const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @computedPropertyDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_computedPropertyDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_computedPropertyDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_computedPropertyDeclarationAST (const class cPtr_computedPropertyDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRootEntityName (void) const ;
  public: void setProperty_mRootEntityName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mComputedPropertyTypeName (void) const ;
  public: void setProperty_mComputedPropertyTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mComputedPropertyName (void) const ;
  public: void setProperty_mComputedPropertyName (const GGS_lstring & inValue) ;

  public: class GGS_observablePropertyList readProperty_mDependencyList (void) const ;
  public: void setProperty_mDependencyList (const GGS_observablePropertyList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_computedPropertyDeclarationAST init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_lstring & inOperand2,
                                                                              const class GGS_lstring & inOperand3,
                                                                              const class GGS_observablePropertyList & inOperand4,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_computedPropertyDeclarationAST extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computedPropertyDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @computedPropertyDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_computedPropertyDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void computedPropertyDeclarationAST_init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_lstring & inOperand2,
                                                                        const class GGS_lstring & inOperand3,
                                                                        const class GGS_observablePropertyList & inOperand4,
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

//--- Extension method thirdAnalysisPhase
  public: virtual void method_thirdAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mRootEntityName ;
  public: GGS_lstring mProperty_mComputedPropertyTypeName ;
  public: GGS_lstring mProperty_mComputedPropertyName ;
  public: GGS_observablePropertyList mProperty_mDependencyList ;


//--- Default constructor
  public: cPtr_computedPropertyDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_computedPropertyDeclarationAST (const GGS_lstring & in_mClassName,
                                               const GGS_lstring & in_mRootEntityName,
                                               const GGS_lstring & in_mComputedPropertyTypeName,
                                               const GGS_lstring & in_mComputedPropertyName,
                                               const GGS_observablePropertyList & in_mDependencyList,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @entityDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_entityDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_entityDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_entityDeclarationAST (const class cPtr_entityDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsAbstract (void) const ;

  public: class GGS_lstring readProperty_mSuperEntityName (void) const ;

  public: class GGS_bool readProperty_mHandlingOpposite (void) const ;

  public: class GGS_simpleStoredPropertyList readProperty_mSimpleStoredPropertyList (void) const ;

  public: class GGS_stringset readProperty_mSignatureList (void) const ;

  public: class GGS_lstringlist readProperty_mActionDeclarationList (void) const ;

  public: class GGS_lstringlist readProperty_mObsoleteEntityNames (void) const ;

  public: class GGS_bool readProperty_mIsGraphicEntity (void) const ;

  public: class GGS_externSwiftDelegateList readProperty_mExternSwiftDelegateList (void) const ;

  public: class GGS_lstringlist readProperty_mGraphicOptionArray (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_entityDeclarationAST init_21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_bool & inOperand1,
                                                                                            const class GGS_lstring & inOperand2,
                                                                                            const class GGS_bool & inOperand3,
                                                                                            const class GGS_simpleStoredPropertyList & inOperand4,
                                                                                            const class GGS_stringset & inOperand5,
                                                                                            const class GGS_lstringlist & inOperand6,
                                                                                            const class GGS_lstringlist & inOperand7,
                                                                                            const class GGS_bool & inOperand8,
                                                                                            const class GGS_externSwiftDelegateList & inOperand9,
                                                                                            const class GGS_lstringlist & inOperand10,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_entityDeclarationAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_entityDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @entityDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_entityDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void entityDeclarationAST_init_21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_bool & inOperand1,
                                                                                      const class GGS_lstring & inOperand2,
                                                                                      const class GGS_bool & inOperand3,
                                                                                      const class GGS_simpleStoredPropertyList & inOperand4,
                                                                                      const class GGS_stringset & inOperand5,
                                                                                      const class GGS_lstringlist & inOperand6,
                                                                                      const class GGS_lstringlist & inOperand7,
                                                                                      const class GGS_bool & inOperand8,
                                                                                      const class GGS_externSwiftDelegateList & inOperand9,
                                                                                      const class GGS_lstringlist & inOperand10,
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

//--- Extension method secondAnalysisPhase
  public: virtual void method_secondAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mIsAbstract ;
  public: GGS_lstring mProperty_mSuperEntityName ;
  public: GGS_bool mProperty_mHandlingOpposite ;
  public: GGS_simpleStoredPropertyList mProperty_mSimpleStoredPropertyList ;
  public: GGS_stringset mProperty_mSignatureList ;
  public: GGS_lstringlist mProperty_mActionDeclarationList ;
  public: GGS_lstringlist mProperty_mObsoleteEntityNames ;
  public: GGS_bool mProperty_mIsGraphicEntity ;
  public: GGS_externSwiftDelegateList mProperty_mExternSwiftDelegateList ;
  public: GGS_lstringlist mProperty_mGraphicOptionArray ;


//--- Default constructor
  public: cPtr_entityDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_entityDeclarationAST (const GGS_lstring & in_mClassName,
                                     const GGS_bool & in_mIsAbstract,
                                     const GGS_lstring & in_mSuperEntityName,
                                     const GGS_bool & in_mHandlingOpposite,
                                     const GGS_simpleStoredPropertyList & in_mSimpleStoredPropertyList,
                                     const GGS_stringset & in_mSignatureList,
                                     const GGS_lstringlist & in_mActionDeclarationList,
                                     const GGS_lstringlist & in_mObsoleteEntityNames,
                                     const GGS_bool & in_mIsGraphicEntity,
                                     const GGS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                     const GGS_lstringlist & in_mGraphicOptionArray,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumerationDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumerationDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_enumerationDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_enumerationDeclarationAST (const class cPtr_enumerationDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstringlist readProperty_mEnumConstantNameList (void) const ;

  public: class GGS_bool readProperty_mCaseIterable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumerationDeclarationAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_lstringlist & inOperand1,
                                                                 const class GGS_bool & inOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumerationDeclarationAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumerationDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @enumerationDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_enumerationDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void enumerationDeclarationAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                           const class GGS_lstringlist & inOperand1,
                                                           const class GGS_bool & inOperand2,
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
  public: GGS_lstringlist mProperty_mEnumConstantNameList ;
  public: GGS_bool mProperty_mCaseIterable ;


//--- Default constructor
  public: cPtr_enumerationDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enumerationDeclarationAST (const GGS_lstring & in_mClassName,
                                          const GGS_lstringlist & in_mEnumConstantNameList,
                                          const GGS_bool & in_mCaseIterable,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @literalIntMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalIntMultipleBindingExpressionAST : public GGS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GGS_literalIntMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_literalIntMultipleBindingExpressionAST (const class cPtr_literalIntMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mValue (void) const ;
  public: void setProperty_mValue (const GGS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_literalIntMultipleBindingExpressionAST init_21_ (const class GGS_luint & inOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalIntMultipleBindingExpressionAST extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalIntMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @literalIntMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_literalIntMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalIntMultipleBindingExpressionAST_init_21_ (const class GGS_luint & inOperand0,
                                                                Compiler * inCompiler) ;


//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mValue ;


//--- Default constructor
  public: cPtr_literalIntMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalIntMultipleBindingExpressionAST (const GGS_luint & in_mValue,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @negateBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_negateBooleanMultipleBindingExpressionAST : public GGS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GGS_negateBooleanMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_negateBooleanMultipleBindingExpressionAST (const class cPtr_negateBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mBinding (void) const ;
  public: void setProperty_mBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_negateBooleanMultipleBindingExpressionAST init_21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_negateBooleanMultipleBindingExpressionAST extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_negateBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @negateBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_negateBooleanMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void negateBooleanMultipleBindingExpressionAST_init_21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                   Compiler * inCompiler) ;


//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mBinding ;


//--- Default constructor
  public: cPtr_negateBooleanMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_negateBooleanMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mBinding,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @observablePropertyInMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_observablePropertyInMultipleBindingExpressionAST : public GGS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GGS_observablePropertyInMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_observablePropertyInMultipleBindingExpressionAST (const class cPtr_observablePropertyInMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_observablePropertyAST readProperty_mProperty (void) const ;
  public: void setProperty_mProperty (const GGS_observablePropertyAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_observablePropertyInMultipleBindingExpressionAST init_21_ (const class GGS_observablePropertyAST & inOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_observablePropertyInMultipleBindingExpressionAST extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_observablePropertyInMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @observablePropertyInMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_observablePropertyInMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void observablePropertyInMultipleBindingExpressionAST_init_21_ (const class GGS_observablePropertyAST & inOperand0,
                                                                          Compiler * inCompiler) ;


//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_observablePropertyAST mProperty_mProperty ;


//--- Default constructor
  public: cPtr_observablePropertyInMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_observablePropertyInMultipleBindingExpressionAST (const GGS_observablePropertyAST & in_mProperty,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @orBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_orBooleanMultipleBindingExpressionAST : public GGS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GGS_orBooleanMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_orBooleanMultipleBindingExpressionAST (const class cPtr_orBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mLeftBinding (void) const ;
  public: void setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mRightBinding (void) const ;
  public: void setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_orBooleanMultipleBindingExpressionAST init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                         const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_orBooleanMultipleBindingExpressionAST extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_orBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @orBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_orBooleanMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void orBooleanMultipleBindingExpressionAST_init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                   const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                   Compiler * inCompiler) ;


//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mLeftBinding ;
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mRightBinding ;


//--- Default constructor
  public: cPtr_orBooleanMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_orBooleanMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                      const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_proxyDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_proxyDeclarationAST ;

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
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_proxyKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isPropertyProxy (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isToManyProxy (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_proxyKind ;

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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectionControllerDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_selectionControllerDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_selectionControllerDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selectionControllerDeclarationAST (const class cPtr_selectionControllerDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mSelectionControllerName (void) const ;

  public: class GGS_lstring readProperty_mModelControllerName (void) const ;

  public: class GGS_lstring readProperty_mModelControllerPropertyName (void) const ;

  public: class GGS_lstring readProperty_mSelectionEntityName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selectionControllerDeclarationAST init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_lstring & inOperand2,
                                                                                 const class GGS_lstring & inOperand3,
                                                                                 const class GGS_lstring & inOperand4,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selectionControllerDeclarationAST extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectionControllerDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selectionControllerDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_selectionControllerDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selectionControllerDeclarationAST_init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_lstring & inOperand2,
                                                                           const class GGS_lstring & inOperand3,
                                                                           const class GGS_lstring & inOperand4,
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
  public: GGS_lstring mProperty_mSelectionControllerName ;
  public: GGS_lstring mProperty_mModelControllerName ;
  public: GGS_lstring mProperty_mModelControllerPropertyName ;
  public: GGS_lstring mProperty_mSelectionEntityName ;


//--- Default constructor
  public: cPtr_selectionControllerDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selectionControllerDeclarationAST (const GGS_lstring & in_mClassName,
                                                  const GGS_lstring & in_mSelectionControllerName,
                                                  const GGS_lstring & in_mModelControllerName,
                                                  const GGS_lstring & in_mModelControllerPropertyName,
                                                  const GGS_lstring & in_mSelectionEntityName,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @toOneRelationshipAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_toOneRelationshipAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_toOneRelationshipAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_toOneRelationshipAST (const class cPtr_toOneRelationshipAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDestinationEntityName (void) const ;
  public: void setProperty_mDestinationEntityName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mToOneRelationshipName (void) const ;
  public: void setProperty_mToOneRelationshipName (const GGS_lstring & inValue) ;

  public: class GGS_toOneOppositeRelationship readProperty_mOpposite (void) const ;
  public: void setProperty_mOpposite (const GGS_toOneOppositeRelationship & inValue) ;

  public: class GGS_bool readProperty_mUsedForSignature (void) const ;
  public: void setProperty_mUsedForSignature (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_mWeak (void) const ;
  public: void setProperty_mWeak (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_toOneRelationshipAST init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_lstring & inOperand2,
                                                                        const class GGS_toOneOppositeRelationship & inOperand3,
                                                                        const class GGS_bool & inOperand4,
                                                                        const class GGS_bool & inOperand5,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_toOneRelationshipAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_toOneRelationshipAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOneRelationshipAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @toOneRelationshipAST class
//--------------------------------------------------------------------------------------------------

class cPtr_toOneRelationshipAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void toOneRelationshipAST_init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  const class GGS_lstring & inOperand2,
                                                                  const class GGS_toOneOppositeRelationship & inOperand3,
                                                                  const class GGS_bool & inOperand4,
                                                                  const class GGS_bool & inOperand5,
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

//--- Extension method thirdAnalysisPhase
  public: virtual void method_thirdAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mDestinationEntityName ;
  public: GGS_lstring mProperty_mToOneRelationshipName ;
  public: GGS_toOneOppositeRelationship mProperty_mOpposite ;
  public: GGS_bool mProperty_mUsedForSignature ;
  public: GGS_bool mProperty_mWeak ;


//--- Default constructor
  public: cPtr_toOneRelationshipAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_toOneRelationshipAST (const GGS_lstring & in_mClassName,
                                     const GGS_lstring & in_mDestinationEntityName,
                                     const GGS_lstring & in_mToOneRelationshipName,
                                     const GGS_toOneOppositeRelationship & in_mOpposite,
                                     const GGS_bool & in_mUsedForSignature,
                                     const GGS_bool & in_mWeak,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @transientClassDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_transientClassDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_transientClassDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_transientClassDeclarationAST (const class cPtr_transientClassDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsClass (void) const ;
  public: void setProperty_mIsClass (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_transientClassDeclarationAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_bool & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_transientClassDeclarationAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_transientClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientClassDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @transientClassDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_transientClassDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void transientClassDeclarationAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS_bool & inOperand1,
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
  public: GGS_bool mProperty_mIsClass ;


//--- Default constructor
  public: cPtr_transientClassDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_transientClassDeclarationAST (const GGS_lstring & in_mClassName,
                                             const GGS_bool & in_mIsClass,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @transientDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_transientDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_transientDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_transientDeclarationAST (const class cPtr_transientDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRootEntityName (void) const ;
  public: void setProperty_mRootEntityName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mTransientTypeName (void) const ;
  public: void setProperty_mTransientTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mTransientName (void) const ;
  public: void setProperty_mTransientName (const GGS_lstring & inValue) ;

  public: class GGS_observablePropertyList readProperty_mDependencyList (void) const ;
  public: void setProperty_mDependencyList (const GGS_observablePropertyList & inValue) ;

  public: class GGS_bool readProperty_mIsOverriding (void) const ;
  public: void setProperty_mIsOverriding (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_transientDeclarationAST init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_lstring & inOperand2,
                                                                           const class GGS_lstring & inOperand3,
                                                                           const class GGS_observablePropertyList & inOperand4,
                                                                           const class GGS_bool & inOperand5,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_transientDeclarationAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_transientDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @transientDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_transientDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void transientDeclarationAST_init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_lstring & inOperand2,
                                                                     const class GGS_lstring & inOperand3,
                                                                     const class GGS_observablePropertyList & inOperand4,
                                                                     const class GGS_bool & inOperand5,
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

//--- Extension method thirdAnalysisPhase
  public: virtual void method_thirdAnalysisPhase (class GGS_semanticContext & arg_ioSemanticContext,
           class GGS_generationStruct & arg_ioGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mRootEntityName ;
  public: GGS_lstring mProperty_mTransientTypeName ;
  public: GGS_lstring mProperty_mTransientName ;
  public: GGS_observablePropertyList mProperty_mDependencyList ;
  public: GGS_bool mProperty_mIsOverriding ;


//--- Default constructor
  public: cPtr_transientDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_transientDeclarationAST (const GGS_lstring & in_mClassName,
                                        const GGS_lstring & in_mRootEntityName,
                                        const GGS_lstring & in_mTransientTypeName,
                                        const GGS_lstring & in_mTransientName,
                                        const GGS_observablePropertyList & in_mDependencyList,
                                        const GGS_bool & in_mIsOverriding,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @xorBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_xorBooleanMultipleBindingExpressionAST : public GGS_abstractBooleanMultipleBindingExpressionAST {
//--------------------------------- Default constructor
  public: GGS_xorBooleanMultipleBindingExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_xorBooleanMultipleBindingExpressionAST (const class cPtr_xorBooleanMultipleBindingExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mLeftBinding (void) const ;
  public: void setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

  public: class GGS_abstractBooleanMultipleBindingExpressionAST readProperty_mRightBinding (void) const ;
  public: void setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_xorBooleanMultipleBindingExpressionAST init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                          const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_xorBooleanMultipleBindingExpressionAST extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_xorBooleanMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @xorBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_xorBooleanMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void xorBooleanMultipleBindingExpressionAST_init_21__21_ (const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0,
                                                                    const class GGS_abstractBooleanMultipleBindingExpressionAST & inOperand1,
                                                                    Compiler * inCompiler) ;


//--- Extension method analyzeExpressionForMultipleBinding
  public: virtual void method_analyzeExpressionForMultipleBinding (const class GGS_bool arg_inPreferences,
           const class GGS_propertyMap arg_inRootObservablePropertyMap,
           const class GGS_semanticContext arg_inSemanticContext,
           const class GGS_propertyMap arg_inCurrentObservablePropertyMap,
           const class GGS_propertyMap arg_inPreferencesObservablePropertyMap,
           class GGS_abstractBooleanMultipleBindingExpressionForGeneration & arg_outEnableExpression,
           class GGS_typeKind & arg_outType,
           class GGS_location & arg_outErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mLeftBinding ;
  public: GGS_abstractBooleanMultipleBindingExpressionAST mProperty_mRightBinding ;


//--- Default constructor
  public: cPtr_xorBooleanMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_xorBooleanMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                       const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR easyBindings_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_easyBindings_5F_grammar : public cParser_easyBindings_5F_syntax {
//------------------------------------- 'action_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_action_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_action_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_action_5F_declaration_ (GGS_lstringlist & ioArgument0,
                                                  Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'auto_layout_func_call_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_ (GGS_stringset & ioArgument0,
                                                                   GGS_astAutoLayoutViewFunctionCallList & outArgument1,
                                                                   Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'auto_layout_view_binding_specification' non terminal
//--- 'parse' label
 /*  public: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (const GGS_lstring inArgument0,
                                                                               GGS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                               Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'autolayout_class_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_autolayout_5F_class_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_autolayout_5F_class_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_autolayout_5F_class_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                               Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'autolayout_formal_parameter_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_ (const GGS_lstring inArgument0,
                                                                      GGS_autoLayoutClassParameterList & outArgument1,
                                                                      GGS_lstring & outArgument2,
                                                                      Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'binding_option_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_binding_5F_option_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_binding_5F_option_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_binding_5F_option_5F_list_ (GGS_bindingOptionList & outArgument0,
                                                      Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingComparison' non terminal
//--- 'parse' label
 /*  public: virtual void nt_booleanMultipleBindingComparison_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_booleanMultipleBindingComparison_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingComparison_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                             Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingExpression' non terminal
//--- 'parse' label
 /*  public: virtual void nt_booleanMultipleBindingExpression_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_booleanMultipleBindingExpression_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingExpression_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                             Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingOperand' non terminal
//--- 'parse' label
 /*  public: virtual void nt_booleanMultipleBindingOperand_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_booleanMultipleBindingOperand_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingOperand_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                          Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingTerm' non terminal
//--- 'parse' label
 /*  public: virtual void nt_booleanMultipleBindingTerm_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_booleanMultipleBindingTerm_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_booleanMultipleBindingTerm_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                       Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'class_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_class_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_class_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_class_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                 Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'computed_view_instruction' non terminal
//--- 'parse' label
 /*  public: virtual void nt_computed_5F_view_5F_instruction_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_computed_5F_view_5F_instruction_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_computed_5F_view_5F_instruction_ (GGS_stringset & ioArgument0,
                                                            GGS_astComputedViewInstruction & outArgument1,
                                                            Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'controller_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_controller_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_controller_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_controller_5F_declaration_ (const GGS_lstring inArgument0,
                                                      const GGS_lstring inArgument1,
                                                      GGS_arrayControllerBindingListAST & ioArgument2,
                                                      GGS_astDeclarationStruct & ioArgument3,
                                                      Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'document_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_document_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_document_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_document_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                    Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'entity_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_entity_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_entity_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_entity_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                  Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'enum_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_enum_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_enum_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_enum_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'enum_function_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_enum_5F_function_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_enum_5F_function_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_enum_5F_function_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                            Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'explicit_value' non terminal
//--- 'parse' label
 /*  public: virtual void nt_explicit_5F_value_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_explicit_5F_value_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_explicit_5F_value_ (GGS_abstractDefaultValue & outArgument0,
                                              Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'extern_swift_delegate' non terminal
//--- 'parse' label
 /*  public: virtual void nt_extern_5F_swift_5F_delegate_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_extern_5F_swift_5F_delegate_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_extern_5F_swift_5F_delegate_ (GGS_externSwiftDelegateList & ioArgument0,
                                                        Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'extern_swift_func' non terminal
//--- 'parse' label
 /*  public: virtual void nt_extern_5F_swift_5F_func_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_extern_5F_swift_5F_func_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_extern_5F_swift_5F_func_ (GGS_externSwiftFunctionList & ioArgument0,
                                                    Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'graphviz_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_graphviz_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_graphviz_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_graphviz_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                    Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'main_xib' non terminal
//--- 'parse' label
 /*  public: virtual void nt_main_5F_xib_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_main_5F_xib_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_main_5F_xib_ (GGS_mainXibDescriptorList & ioArgument0,
                                        Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'main_xib_line' non terminal
//--- 'parse' label
 /*  public: virtual void nt_main_5F_xib_5F_line_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_main_5F_xib_5F_line_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_main_5F_xib_5F_line_ (GGS_mainXibLineDescriptorList & outArgument0,
                                                Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'observable_property' non terminal
//--- 'parse' label
 /*  public: virtual void nt_observable_5F_property_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_observable_5F_property_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_observable_5F_property_ (GGS_observablePropertyAST & outArgument0,
                                                   Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_binding' non terminal
//--- 'parse' label
 /*  public: virtual void nt_outlet_5F_binding_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_outlet_5F_binding_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_binding_ (GGS_tableValueBinding & outArgument0,
                                              GGS_runActionDescriptor & outArgument1,
                                              GGS_multipleBindingDescriptor & outArgument2,
                                              GGS_multipleBindingDescriptor & outArgument3,
                                              GGS_graphicController & outArgument4,
                                              GGS_regularBindingList & outArgument5,
                                              Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_binding_specification' non terminal
//--- 'parse' label
 /*  public: virtual void nt_outlet_5F_binding_5F_specification_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_outlet_5F_binding_5F_specification_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_binding_5F_specification_ (GGS_outletClassBindingSpecificationList & ioArgument0,
                                                               Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_class_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_outlet_5F_class_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_outlet_5F_class_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_class_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                           Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_outlet_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_outlet_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_outlet_5F_declaration_ (GGS_outletDeclarationList & ioArgument0,
                                                  Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'preferences_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_preferences_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_preferences_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_preferences_5F_declaration_ (GGS_astDeclarationStruct & ioArgument0,
                                                       Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'simple_stored_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_simple_5F_stored_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_simple_5F_stored_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_stored_5F_declaration_ (const GGS_lstring inArgument0,
                                                            GGS_simpleStoredPropertyList & ioArgument1,
                                                            GGS_stringset & ioArgument2,
                                                            GGS_astDeclarationStruct & ioArgument3,
                                                            Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'stack_view_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_stack_5F_view_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_stack_5F_view_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_stack_5F_view_5F_declaration_ (GGS_astViewDeclarationList & ioArgument0,
                                                         Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
 /*  public: virtual void nt_start_5F_symbol_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_start_5F_symbol_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (GGS_astDeclarationStruct & ioArgument0,
                                            GGS_location & outArgument1,
                                            Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_astDeclarationStruct & ioArgument0,
                                                  GGS_location & outArgument1
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_astDeclarationStruct & ioArgument0,
                                                    GGS_location & outArgument1
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (Compiler * inCompiler,
                                       const String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (Compiler * inCompiler,
                                                  const String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (Compiler * inCompiler,
                                                 const String & inSourceFilePath) ;

//------------------------------------- 'toMany_relationship' non terminal
//--- 'parse' label
 /*  public: virtual void nt_toMany_5F_relationship_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_toMany_5F_relationship_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_toMany_5F_relationship_ (const GGS_lstring inArgument0,
                                                   GGS_stringset & ioArgument1,
                                                   GGS_astDeclarationStruct & ioArgument2,
                                                   Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'toOne_relationship' non terminal
//--- 'parse' label
 /*  public: virtual void nt_toOne_5F_relationship_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_toOne_5F_relationship_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_toOne_5F_relationship_ (const GGS_lstring inArgument0,
                                                  GGS_astDeclarationStruct & ioArgument1,
                                                  Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'transient_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_transient_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_transient_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_transient_5F_declaration_ (const GGS_lstring inArgument0,
                                                     const GGS_lstring inArgument1,
                                                     GGS_astDeclarationStruct & ioArgument2,
                                                     Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_actual_parameter_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_view_5F_actual_5F_parameter_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_view_5F_actual_5F_parameter_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_view_5F_actual_5F_parameter_5F_list_ (GGS_stringset & ioArgument0,
                                                                GGS_astAutoLayoutViewInstructionParameterList & outArgument1,
                                                                Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_instruction' non terminal
//--- 'parse' label
 /*  public: virtual void nt_view_5F_instruction_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_view_5F_instruction_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_view_5F_instruction_ (GGS_stringset & ioArgument0,
                                                GGS_astAbstractViewInstructionDeclaration & outArgument1,
                                                Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_instruction_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_view_5F_instruction_5F_list_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_view_5F_instruction_5F_list_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_view_5F_instruction_5F_list_ (const GGS_bool inArgument0,
                                                        GGS_stringset & ioArgument1,
                                                        GGS_astNewStackViewDeclarationList & ioArgument2,
                                                        GGS_astViewInstructionList & ioArgument3,
                                                        Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'xcode_project' non terminal
//--- 'parse' label
 /*  public: virtual void nt_xcode_5F_project_parse (Lexique_easyBindings_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_xcode_5F_project_indexing (Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_xcode_5F_project_ (GGS_lstring & ioArgument0,
                                             Lexique_easyBindings_5F_lexique * inCompiler) ;

  public: virtual int32_t select_easyBindings_5F_syntax_0 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_1 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_2 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_3 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_4 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_5 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_6 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_7 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_8 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_9 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_10 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_11 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_12 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_13 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_14 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_15 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_16 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_17 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_18 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_19 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_20 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_21 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_22 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_23 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_24 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_25 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_26 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_27 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_28 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_29 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_30 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_31 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_32 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_33 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_34 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_35 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_36 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_37 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_38 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_39 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_40 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_41 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_42 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_43 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_44 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_45 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_46 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_47 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_48 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_49 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_50 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_51 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_52 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_53 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_54 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_55 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_56 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_57 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_58 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_59 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_60 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_61 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_62 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_63 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_64 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_65 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_66 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_67 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_68 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_69 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_70 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_71 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_72 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_73 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_74 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_75 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_76 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_77 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_78 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_79 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_80 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_81 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_82 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_83 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_84 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_85 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_86 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_87 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_88 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_89 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_90 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_91 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_92 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_93 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_94 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_95 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_96 (Lexique_easyBindings_5F_lexique *) ;

  public: virtual int32_t select_easyBindings_5F_syntax_97 (Lexique_easyBindings_5F_lexique *) ;
} ;

//--------------------------------------------------------------------------------------------------
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
  public: GGS_autoLayoutViewClassBindingSpecificationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: static class GGS_autoLayoutViewClassBindingSpecificationList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                                 const class GGS_lstring & inOperand1,
                                                                                                 const class GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                 const class GGS_controllerBindingOptionList & inOperand3
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_autoLayoutViewClassBindingSpecificationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1,
                                   const class GGS_outletClassBindingSpecificationModelList & inOperand2,
                                   const class GGS_controllerBindingOptionList & inOperand3
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_autoLayoutViewClassBindingSpecificationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_autoLayoutViewClassBindingSpecificationList add_operation (const GGS_autoLayoutViewClassBindingSpecificationList & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstring constinArgument1,
                              class GGS_outletClassBindingSpecificationModelList constinArgument2,
                              class GGS_controllerBindingOptionList constinArgument3,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_outletClassBindingSpecificationModelList constinArgument2,
                                     class GGS_controllerBindingOptionList constinArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstring & outArgument1,
                                class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                class GGS_controllerBindingOptionList & outArgument3,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstring & outArgument1,
                               class GGS_outletClassBindingSpecificationModelList & outArgument2,
                               class GGS_controllerBindingOptionList & outArgument3,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                     class GGS_controllerBindingOptionList & outArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMBindingNameAtIndex (class GGS_lstring constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setMBindingOptionListAtIndex (class GGS_controllerBindingOptionList constinArgument0,
                                                    class GGS_uint constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: void setter_setMOutletClassBindingSpecificationModelListAtIndex (class GGS_outletClassBindingSpecificationModelList constinArgument0,
                                                                           class GGS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMOutletClassNameAtIndex (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstring & outArgument1,
                             class GGS_outletClassBindingSpecificationModelList & outArgument2,
                             class GGS_controllerBindingOptionList & outArgument3,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstring & outArgument1,
                            class GGS_outletClassBindingSpecificationModelList & outArgument2,
                            class GGS_controllerBindingOptionList & outArgument3,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mBindingNameAtIndex (const class GGS_uint & constinOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_controllerBindingOptionList getter_mBindingOptionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_outletClassBindingSpecificationModelList getter_mOutletClassBindingSpecificationModelListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mOutletClassNameAtIndex (const class GGS_uint & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewClassBindingSpecificationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewClassBindingSpecificationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_autoLayoutViewClassBindingSpecificationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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
  public: GGS_controllerBindingOptionList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: static class GGS_controllerBindingOptionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_lstring & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_controllerBindingOptionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_controllerBindingOptionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_controllerBindingOptionList add_operation (const GGS_controllerBindingOptionList & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstring constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstring & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstring & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMOptionNameAtIndex (class GGS_lstring constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMOptionTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstring & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstring & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mOptionNameAtIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mOptionTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_controllerBindingOptionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_controllerBindingOptionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_controllerBindingOptionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_controllerBindingOptionList ;
  friend class DownEnumerator_controllerBindingOptionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controllerBindingOptionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outletClassBindingSpecificationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_outletClassBindingSpecificationList final {
  public: DownEnumerator_outletClassBindingSpecificationList (const class GGS_outletClassBindingSpecificationList & inList) ;

  public: ~ DownEnumerator_outletClassBindingSpecificationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mOutletClassName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_outletClassBindingSpecificationModelList current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const ;
  public: class GGS_controllerBindingOptionList current_mBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_outletClassBindingSpecificationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_outletClassBindingSpecificationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_outletClassBindingSpecificationList (const DownEnumerator_outletClassBindingSpecificationList &) = delete ;
  private: DownEnumerator_outletClassBindingSpecificationList & operator = (const DownEnumerator_outletClassBindingSpecificationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_outletClassBindingSpecificationList final {
  public: UpEnumerator_outletClassBindingSpecificationList (const class GGS_outletClassBindingSpecificationList & inList)  ;

  public: ~ UpEnumerator_outletClassBindingSpecificationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mOutletClassName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mBindingName (LOCATION_ARGS) const ;
  public: class GGS_outletClassBindingSpecificationModelList current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const ;
  public: class GGS_controllerBindingOptionList current_mBindingOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_outletClassBindingSpecificationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_outletClassBindingSpecificationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_outletClassBindingSpecificationList (const UpEnumerator_outletClassBindingSpecificationList &) = delete ;
  private: UpEnumerator_outletClassBindingSpecificationList & operator = (const UpEnumerator_outletClassBindingSpecificationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @outletClassBindingSpecificationList list
//--------------------------------------------------------------------------------------------------

class GGS_outletClassBindingSpecificationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_outletClassBindingSpecificationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_outletClassBindingSpecificationList (void) ;

//--- Destructor
  public: virtual ~ GGS_outletClassBindingSpecificationList (void) = default ;

//--- Copy
  public: GGS_outletClassBindingSpecificationList (const GGS_outletClassBindingSpecificationList &) = default ;
  public: GGS_outletClassBindingSpecificationList & operator = (const GGS_outletClassBindingSpecificationList &) = default ;

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
  public : inline GenericArray <GGS_outletClassBindingSpecificationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_outletClassBindingSpecificationList subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_outletClassBindingSpecificationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mOutletClassName,
                                                 const class GGS_lstring & in_mBindingName,
                                                 const class GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                 const class GGS_controllerBindingOptionList & in_mBindingOptionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outletClassBindingSpecificationList init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outletClassBindingSpecificationList extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outletClassBindingSpecificationList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                         const class GGS_lstring & inOperand1,
                                                                                         const class GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                         const class GGS_controllerBindingOptionList & inOperand3
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_outletClassBindingSpecificationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1,
                                   const class GGS_outletClassBindingSpecificationModelList & inOperand2,
                                   const class GGS_controllerBindingOptionList & inOperand3
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_outletClassBindingSpecificationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_outletClassBindingSpecificationList add_operation (const GGS_outletClassBindingSpecificationList & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstring constinArgument1,
                              class GGS_outletClassBindingSpecificationModelList constinArgument2,
                              class GGS_controllerBindingOptionList constinArgument3,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_outletClassBindingSpecificationModelList constinArgument2,
                                     class GGS_controllerBindingOptionList constinArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstring & outArgument1,
                                class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                class GGS_controllerBindingOptionList & outArgument3,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstring & outArgument1,
                               class GGS_outletClassBindingSpecificationModelList & outArgument2,
                               class GGS_controllerBindingOptionList & outArgument3,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_outletClassBindingSpecificationModelList & outArgument2,
                                     class GGS_controllerBindingOptionList & outArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMBindingNameAtIndex (class GGS_lstring constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setMBindingOptionListAtIndex (class GGS_controllerBindingOptionList constinArgument0,
                                                    class GGS_uint constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: void setter_setMOutletClassBindingSpecificationModelListAtIndex (class GGS_outletClassBindingSpecificationModelList constinArgument0,
                                                                           class GGS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMOutletClassNameAtIndex (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstring & outArgument1,
                             class GGS_outletClassBindingSpecificationModelList & outArgument2,
                             class GGS_controllerBindingOptionList & outArgument3,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstring & outArgument1,
                            class GGS_outletClassBindingSpecificationModelList & outArgument2,
                            class GGS_controllerBindingOptionList & outArgument3,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mBindingNameAtIndex (const class GGS_uint & constinOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_controllerBindingOptionList getter_mBindingOptionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_outletClassBindingSpecificationModelList getter_mOutletClassBindingSpecificationModelListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mOutletClassNameAtIndex (const class GGS_uint & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_outletClassBindingSpecificationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_outletClassBindingSpecificationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_outletClassBindingSpecificationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_outletClassBindingSpecificationList ;
  friend class DownEnumerator_outletClassBindingSpecificationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationList ;

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
  public: GGS_outletClassBindingSpecificationModelList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: static class GGS_outletClassBindingSpecificationModelList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                              const class GGS_bool & inOperand1
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_outletClassBindingSpecificationModelList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_bool & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_outletClassBindingSpecificationModelList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_outletClassBindingSpecificationModelList add_operation (const GGS_outletClassBindingSpecificationModelList & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_bool constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_bool constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_bool & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_bool & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_bool & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMModelShouldBeWritablePropertyAtIndex (class GGS_bool constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMModelTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_bool & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_bool & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_mModelShouldBeWritablePropertyAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mModelTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_outletClassBindingSpecificationModelList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_outletClassBindingSpecificationModelList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_outletClassBindingSpecificationModelList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_outletClassBindingSpecificationModelList ;
  friend class DownEnumerator_outletClassBindingSpecificationModelList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @astDeclarationStruct struct
//--------------------------------------------------------------------------------------------------

class GGS_astDeclarationStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_declarationListAST mProperty_mUnifiedDeclarationList ;
  public: inline GGS_declarationListAST readProperty_mUnifiedDeclarationList (void) const {
    return mProperty_mUnifiedDeclarationList ;
  }

  public: GGS_outletClassBindingSpecificationList mProperty_mBindingSpecificationListMap ;
  public: inline GGS_outletClassBindingSpecificationList readProperty_mBindingSpecificationListMap (void) const {
    return mProperty_mBindingSpecificationListMap ;
  }

  public: GGS_autoLayoutViewClassBindingSpecificationList mProperty_mAutoLayoutBindingSpecificationList ;
  public: inline GGS_autoLayoutViewClassBindingSpecificationList readProperty_mAutoLayoutBindingSpecificationList (void) const {
    return mProperty_mAutoLayoutBindingSpecificationList ;
  }

  public: GGS_prefDeclaration mProperty_mPreferences ;
  public: inline GGS_prefDeclaration readProperty_mPreferences (void) const {
    return mProperty_mPreferences ;
  }

  public: GGS_lstring mProperty_mXcodeProject ;
  public: inline GGS_lstring readProperty_mXcodeProject (void) const {
    return mProperty_mXcodeProject ;
  }

  public: GGS_lstringlist mProperty_mGraphvizList ;
  public: inline GGS_lstringlist readProperty_mGraphvizList (void) const {
    return mProperty_mGraphvizList ;
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
  public: GGS_astDeclarationStruct (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMUnifiedDeclarationList (const GGS_declarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnifiedDeclarationList = inValue ;
  }

  public: inline void setter_setMBindingSpecificationListMap (const GGS_outletClassBindingSpecificationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBindingSpecificationListMap = inValue ;
  }

  public: inline void setter_setMAutoLayoutBindingSpecificationList (const GGS_autoLayoutViewClassBindingSpecificationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoLayoutBindingSpecificationList = inValue ;
  }

  public: inline void setter_setMPreferences (const GGS_prefDeclaration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPreferences = inValue ;
  }

  public: inline void setter_setMXcodeProject (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mXcodeProject = inValue ;
  }

  public: inline void setter_setMGraphvizList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGraphvizList = inValue ;
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
  public: GGS_astDeclarationStruct (const GGS_declarationListAST & in_mUnifiedDeclarationList,
                                    const GGS_outletClassBindingSpecificationList & in_mBindingSpecificationListMap,
                                    const GGS_autoLayoutViewClassBindingSpecificationList & in_mAutoLayoutBindingSpecificationList,
                                    const GGS_prefDeclaration & in_mPreferences,
                                    const GGS_lstring & in_mXcodeProject,
                                    const GGS_lstringlist & in_mGraphvizList,
                                    const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutVStackFunctionMap,
                                    const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutHStackFunctionMap,
                                    const GGS_enumerationFunctionListAST & in_mEnumerationFunctionListAST) ;

//--------------------------------- Copy constructor
  public: GGS_astDeclarationStruct (const GGS_astDeclarationStruct & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_astDeclarationStruct & operator = (const GGS_astDeclarationStruct & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_astDeclarationStruct init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_astDeclarationStruct extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astDeclarationStruct ;


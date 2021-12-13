#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @entityDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_entityDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_entityDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_entityDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_entityDeclarationAST_2D_weak (const class GALGAS_entityDeclarationAST & inSource) ;

  public: GALGAS_entityDeclarationAST_2D_weak & operator = (const class GALGAS_entityDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_entityDeclarationAST bang_entityDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_entityDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_entityDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_entityDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_entityDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @entityForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_entityForGeneration : public GALGAS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GALGAS_entityForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_entityForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_entityForGeneration (const class cPtr_entityForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mEntityName (void) const ;

  public: class GALGAS_string readProperty_mSuperEntityName (void) const ;

  public: class GALGAS_propertyGenerationList readProperty_mPropertyGenerationList (void) const ;

  public: class GALGAS_stringset readProperty_mSignatureSet (void) const ;

  public: class GALGAS_bool readProperty_mIsGraphicEntity (void) const ;

  public: class GALGAS_bool readProperty_mIsAbstract (void) const ;

  public: class GALGAS_stringset readProperty_mOverridenTransients (void) const ;

  public: class GALGAS_externSwiftDelegateList readProperty_mExternSwiftDelegateList (void) const ;

  public: class GALGAS_bool readProperty_mHasSubEntity (void) const ;

  public: class GALGAS_bool readProperty_mCanCopyAndPaste_5F_option (void) const ;

  public: class GALGAS_bool readProperty_mCannotBeDeleted_5F_option (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_entityForGeneration extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_entityForGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                   const class GALGAS_string & inOperand1,
                                                                   const class GALGAS_propertyGenerationList & inOperand2,
                                                                   const class GALGAS_stringset & inOperand3,
                                                                   const class GALGAS_bool & inOperand4,
                                                                   const class GALGAS_bool & inOperand5,
                                                                   const class GALGAS_stringset & inOperand6,
                                                                   const class GALGAS_externSwiftDelegateList & inOperand7,
                                                                   const class GALGAS_bool & inOperand8,
                                                                   const class GALGAS_bool & inOperand9,
                                                                   const class GALGAS_bool & inOperand10
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_entityForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCanCopyAndPaste_5F_option (class GALGAS_bool inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCannotBeDeleted_5F_option (class GALGAS_bool inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEntityName (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExternSwiftDelegateList (class GALGAS_externSwiftDelegateList inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasSubEntity (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsAbstract (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsGraphicEntity (class GALGAS_bool inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOverridenTransients (class GALGAS_stringset inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyGenerationList (class GALGAS_propertyGenerationList inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSignatureSet (class GALGAS_stringset inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSuperEntityName (class GALGAS_string inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_entityForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @entityForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_entityForGeneration : public cPtr_abstractFileGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mEntityName ;
  public: GALGAS_string mProperty_mSuperEntityName ;
  public: GALGAS_propertyGenerationList mProperty_mPropertyGenerationList ;
  public: GALGAS_stringset mProperty_mSignatureSet ;
  public: GALGAS_bool mProperty_mIsGraphicEntity ;
  public: GALGAS_bool mProperty_mIsAbstract ;
  public: GALGAS_stringset mProperty_mOverridenTransients ;
  public: GALGAS_externSwiftDelegateList mProperty_mExternSwiftDelegateList ;
  public: GALGAS_bool mProperty_mHasSubEntity ;
  public: GALGAS_bool mProperty_mCanCopyAndPaste_5F_option ;
  public: GALGAS_bool mProperty_mCannotBeDeleted_5F_option ;

//--- Constructor
  public: cPtr_entityForGeneration (const GALGAS_string & in_mEntityName,
                                    const GALGAS_string & in_mSuperEntityName,
                                    const GALGAS_propertyGenerationList & in_mPropertyGenerationList,
                                    const GALGAS_stringset & in_mSignatureSet,
                                    const GALGAS_bool & in_mIsGraphicEntity,
                                    const GALGAS_bool & in_mIsAbstract,
                                    const GALGAS_stringset & in_mOverridenTransients,
                                    const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                    const GALGAS_bool & in_mHasSubEntity,
                                    const GALGAS_bool & in_mCanCopyAndPaste_5F_option,
                                    const GALGAS_bool & in_mCannotBeDeleted_5F_option
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @entityForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_entityForGeneration_2D_weak : public GALGAS_abstractFileGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_entityForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_entityForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_entityForGeneration_2D_weak (const class GALGAS_entityForGeneration & inSource) ;

  public: GALGAS_entityForGeneration_2D_weak & operator = (const class GALGAS_entityForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_entityForGeneration bang_entityForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_entityForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_entityForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_entityForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_entityForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @xibDocumentDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_xibDocumentDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_xibDocumentDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_xibDocumentDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_xibDocumentDeclarationAST_2D_weak (const class GALGAS_xibDocumentDeclarationAST & inSource) ;

  public: GALGAS_xibDocumentDeclarationAST_2D_weak & operator = (const class GALGAS_xibDocumentDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_xibDocumentDeclarationAST bang_xibDocumentDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_xibDocumentDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_xibDocumentDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_xibDocumentDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_xibDocumentDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xibDocumentDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @xibDocumentFileGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_xibDocumentFileGeneration : public GALGAS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GALGAS_xibDocumentFileGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_xibDocumentFileGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_xibDocumentFileGeneration (const class cPtr_xibDocumentFileGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mDocumentName (void) const ;

  public: class GALGAS_string readProperty_mRootEntityName (void) const ;

  public: class GALGAS_propertyGenerationList readProperty_mDocumentPropertyGenearionList (void) const ;

  public: class GALGAS_decoratedOutletMap readProperty_mOutletMap (void) const ;

  public: class GALGAS_actionBindingListForGeneration readProperty_mTargetActionList (void) const ;

  public: class GALGAS_regularBindingsGenerationList readProperty_mRegularBindingsGenerationList (void) const ;

  public: class GALGAS_multipleBindingGenerationList readProperty_multipleBindingGenerationList (void) const ;

  public: class GALGAS_tableViewBindingGenerationList readProperty_mTableViewBindingGenerationList (void) const ;

  public: class GALGAS_ebViewGraphicControllerBindingGenerationList readProperty_mEBViewBindingGenerationList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_xibDocumentFileGeneration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_xibDocumentFileGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         const class GALGAS_propertyGenerationList & inOperand2,
                                                                         const class GALGAS_decoratedOutletMap & inOperand3,
                                                                         const class GALGAS_actionBindingListForGeneration & inOperand4,
                                                                         const class GALGAS_regularBindingsGenerationList & inOperand5,
                                                                         const class GALGAS_multipleBindingGenerationList & inOperand6,
                                                                         const class GALGAS_tableViewBindingGenerationList & inOperand7,
                                                                         const class GALGAS_ebViewGraphicControllerBindingGenerationList & inOperand8
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_xibDocumentFileGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDocumentName (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDocumentPropertyGenearionList (class GALGAS_propertyGenerationList inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEBViewBindingGenerationList (class GALGAS_ebViewGraphicControllerBindingGenerationList inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletMap (class GALGAS_decoratedOutletMap inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegularBindingsGenerationList (class GALGAS_regularBindingsGenerationList inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_string inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableViewBindingGenerationList (class GALGAS_tableViewBindingGenerationList inArgument0
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetActionList (class GALGAS_actionBindingListForGeneration inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMultipleBindingGenerationList (class GALGAS_multipleBindingGenerationList inArgument0
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_xibDocumentFileGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xibDocumentFileGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @xibDocumentFileGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_xibDocumentFileGeneration : public cPtr_abstractFileGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mDocumentName ;
  public: GALGAS_string mProperty_mRootEntityName ;
  public: GALGAS_propertyGenerationList mProperty_mDocumentPropertyGenearionList ;
  public: GALGAS_decoratedOutletMap mProperty_mOutletMap ;
  public: GALGAS_actionBindingListForGeneration mProperty_mTargetActionList ;
  public: GALGAS_regularBindingsGenerationList mProperty_mRegularBindingsGenerationList ;
  public: GALGAS_multipleBindingGenerationList mProperty_multipleBindingGenerationList ;
  public: GALGAS_tableViewBindingGenerationList mProperty_mTableViewBindingGenerationList ;
  public: GALGAS_ebViewGraphicControllerBindingGenerationList mProperty_mEBViewBindingGenerationList ;

//--- Constructor
  public: cPtr_xibDocumentFileGeneration (const GALGAS_string & in_mDocumentName,
                                          const GALGAS_string & in_mRootEntityName,
                                          const GALGAS_propertyGenerationList & in_mDocumentPropertyGenearionList,
                                          const GALGAS_decoratedOutletMap & in_mOutletMap,
                                          const GALGAS_actionBindingListForGeneration & in_mTargetActionList,
                                          const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                          const GALGAS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                          const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                          const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @xibDocumentFileGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_xibDocumentFileGeneration_2D_weak : public GALGAS_abstractFileGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_xibDocumentFileGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_xibDocumentFileGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_xibDocumentFileGeneration_2D_weak (const class GALGAS_xibDocumentFileGeneration & inSource) ;

  public: GALGAS_xibDocumentFileGeneration_2D_weak & operator = (const class GALGAS_xibDocumentFileGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_xibDocumentFileGeneration bang_xibDocumentFileGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_xibDocumentFileGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_xibDocumentFileGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_xibDocumentFileGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_xibDocumentFileGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xibDocumentFileGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutDocumentDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutDocumentDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutDocumentDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutDocumentDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_autoLayoutDocumentDeclarationAST_2D_weak (const class GALGAS_autoLayoutDocumentDeclarationAST & inSource) ;

  public: GALGAS_autoLayoutDocumentDeclarationAST_2D_weak & operator = (const class GALGAS_autoLayoutDocumentDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_autoLayoutDocumentDeclarationAST bang_autoLayoutDocumentDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutDocumentDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutDocumentDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutDocumentDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutDocumentDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutDocumentFileGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutDocumentFileGeneration : public GALGAS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutDocumentFileGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutDocumentFileGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_autoLayoutDocumentFileGeneration (const class cPtr_autoLayoutDocumentFileGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mDocumentName (void) const ;

  public: class GALGAS_string readProperty_mRootEntityName (void) const ;

  public: class GALGAS_string readProperty_mMainViewName (void) const ;

  public: class GALGAS_propertyGenerationList readProperty_mDocumentPropertyGenearionList (void) const ;

  public: class GALGAS_decoratedOutletMap readProperty_mOutletMap (void) const ;

  public: class GALGAS_autoLayoutOutletMap readProperty_mAutoLayoutOutletMap (void) const ;

  public: class GALGAS_actionBindingListForGeneration readProperty_mTargetActionList (void) const ;

  public: class GALGAS_regularBindingsGenerationList readProperty_mRegularBindingsGenerationList (void) const ;

  public: class GALGAS_multipleBindingGenerationList readProperty_multipleBindingGenerationList (void) const ;

  public: class GALGAS_tableViewBindingGenerationList readProperty_mTableViewBindingGenerationList (void) const ;

  public: class GALGAS_ebViewGraphicControllerBindingGenerationList readProperty_mEBViewBindingGenerationList (void) const ;

  public: class GALGAS_viewGenerationList readProperty_mViewDeclarationList (void) const ;

  public: class GALGAS_autoLayoutToolbarItemGenerationList readProperty_mAutoLayoutToolbarItemGenerationList (void) const ;

  public: class GALGAS_implicitViewFunctionGenerationList readProperty_mImplicitViewFunctionGenerationList (void) const ;

  public: class GALGAS_autoLayoutConfiguratorMap readProperty_mConfiguratorMap (void) const ;

  public: class GALGAS_string readProperty_mCustomSuperClassName (void) const ;

  public: class GALGAS_autoLayoutOutletLinkerGenerationList readProperty_mOutletLinkerGenerationList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutDocumentFileGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutDocumentFileGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                                const class GALGAS_string & inOperand1,
                                                                                const class GALGAS_string & inOperand2,
                                                                                const class GALGAS_propertyGenerationList & inOperand3,
                                                                                const class GALGAS_decoratedOutletMap & inOperand4,
                                                                                const class GALGAS_autoLayoutOutletMap & inOperand5,
                                                                                const class GALGAS_actionBindingListForGeneration & inOperand6,
                                                                                const class GALGAS_regularBindingsGenerationList & inOperand7,
                                                                                const class GALGAS_multipleBindingGenerationList & inOperand8,
                                                                                const class GALGAS_tableViewBindingGenerationList & inOperand9,
                                                                                const class GALGAS_ebViewGraphicControllerBindingGenerationList & inOperand10,
                                                                                const class GALGAS_viewGenerationList & inOperand11,
                                                                                const class GALGAS_autoLayoutToolbarItemGenerationList & inOperand12,
                                                                                const class GALGAS_implicitViewFunctionGenerationList & inOperand13,
                                                                                const class GALGAS_autoLayoutConfiguratorMap & inOperand14,
                                                                                const class GALGAS_string & inOperand15,
                                                                                const class GALGAS_autoLayoutOutletLinkerGenerationList & inOperand16
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutDocumentFileGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutOutletMap (class GALGAS_autoLayoutOutletMap inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutToolbarItemGenerationList (class GALGAS_autoLayoutToolbarItemGenerationList inArgument0
                                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConfiguratorMap (class GALGAS_autoLayoutConfiguratorMap inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCustomSuperClassName (class GALGAS_string inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDocumentName (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDocumentPropertyGenearionList (class GALGAS_propertyGenerationList inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEBViewBindingGenerationList (class GALGAS_ebViewGraphicControllerBindingGenerationList inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMImplicitViewFunctionGenerationList (class GALGAS_implicitViewFunctionGenerationList inArgument0
                                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMainViewName (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletLinkerGenerationList (class GALGAS_autoLayoutOutletLinkerGenerationList inArgument0
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletMap (class GALGAS_decoratedOutletMap inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegularBindingsGenerationList (class GALGAS_regularBindingsGenerationList inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_string inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableViewBindingGenerationList (class GALGAS_tableViewBindingGenerationList inArgument0
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetActionList (class GALGAS_actionBindingListForGeneration inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMViewDeclarationList (class GALGAS_viewGenerationList inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMultipleBindingGenerationList (class GALGAS_multipleBindingGenerationList inArgument0
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutDocumentFileGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutDocumentFileGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutDocumentFileGeneration : public cPtr_abstractFileGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mDocumentName ;
  public: GALGAS_string mProperty_mRootEntityName ;
  public: GALGAS_string mProperty_mMainViewName ;
  public: GALGAS_propertyGenerationList mProperty_mDocumentPropertyGenearionList ;
  public: GALGAS_decoratedOutletMap mProperty_mOutletMap ;
  public: GALGAS_autoLayoutOutletMap mProperty_mAutoLayoutOutletMap ;
  public: GALGAS_actionBindingListForGeneration mProperty_mTargetActionList ;
  public: GALGAS_regularBindingsGenerationList mProperty_mRegularBindingsGenerationList ;
  public: GALGAS_multipleBindingGenerationList mProperty_multipleBindingGenerationList ;
  public: GALGAS_tableViewBindingGenerationList mProperty_mTableViewBindingGenerationList ;
  public: GALGAS_ebViewGraphicControllerBindingGenerationList mProperty_mEBViewBindingGenerationList ;
  public: GALGAS_viewGenerationList mProperty_mViewDeclarationList ;
  public: GALGAS_autoLayoutToolbarItemGenerationList mProperty_mAutoLayoutToolbarItemGenerationList ;
  public: GALGAS_implicitViewFunctionGenerationList mProperty_mImplicitViewFunctionGenerationList ;
  public: GALGAS_autoLayoutConfiguratorMap mProperty_mConfiguratorMap ;
  public: GALGAS_string mProperty_mCustomSuperClassName ;
  public: GALGAS_autoLayoutOutletLinkerGenerationList mProperty_mOutletLinkerGenerationList ;

//--- Constructor
  public: cPtr_autoLayoutDocumentFileGeneration (const GALGAS_string & in_mDocumentName,
                                                 const GALGAS_string & in_mRootEntityName,
                                                 const GALGAS_string & in_mMainViewName,
                                                 const GALGAS_propertyGenerationList & in_mDocumentPropertyGenearionList,
                                                 const GALGAS_decoratedOutletMap & in_mOutletMap,
                                                 const GALGAS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                                 const GALGAS_actionBindingListForGeneration & in_mTargetActionList,
                                                 const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                 const GALGAS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                                 const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                 const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                 const GALGAS_viewGenerationList & in_mViewDeclarationList,
                                                 const GALGAS_autoLayoutToolbarItemGenerationList & in_mAutoLayoutToolbarItemGenerationList,
                                                 const GALGAS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                 const GALGAS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                 const GALGAS_string & in_mCustomSuperClassName,
                                                 const GALGAS_autoLayoutOutletLinkerGenerationList & in_mOutletLinkerGenerationList
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutDocumentFileGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutDocumentFileGeneration_2D_weak : public GALGAS_abstractFileGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutDocumentFileGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutDocumentFileGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_autoLayoutDocumentFileGeneration_2D_weak (const class GALGAS_autoLayoutDocumentFileGeneration & inSource) ;

  public: GALGAS_autoLayoutDocumentFileGeneration_2D_weak & operator = (const class GALGAS_autoLayoutDocumentFileGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_autoLayoutDocumentFileGeneration bang_autoLayoutDocumentFileGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutDocumentFileGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutDocumentFileGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutDocumentFileGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutDocumentFileGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @prefsDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_prefsDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_prefsDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_prefsDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_prefsDeclarationAST (const class cPtr_prefsDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_prefDeclaration readProperty_mDeclaration (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_prefsDeclarationAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_prefsDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_prefDeclaration & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_prefsDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDeclaration (class GALGAS_prefDeclaration inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefsDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefsDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @prefsDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_prefsDeclarationAST : public cPtr_abstractDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_prefDeclaration mProperty_mDeclaration ;

//--- Constructor
  public: cPtr_prefsDeclarationAST (const GALGAS_lstring & in_mClassName,
                                    const GALGAS_prefDeclaration & in_mDeclaration
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @prefsDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_prefsDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_prefsDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_prefsDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_prefsDeclarationAST_2D_weak (const class GALGAS_prefsDeclarationAST & inSource) ;

  public: GALGAS_prefsDeclarationAST_2D_weak & operator = (const class GALGAS_prefsDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_prefsDeclarationAST bang_prefsDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_prefsDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_prefsDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_prefsDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefsDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefsDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewClassDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewClassDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutViewClassDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutViewClassDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_autoLayoutViewClassDeclarationAST_2D_weak (const class GALGAS_autoLayoutViewClassDeclarationAST & inSource) ;

  public: GALGAS_autoLayoutViewClassDeclarationAST_2D_weak & operator = (const class GALGAS_autoLayoutViewClassDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_autoLayoutViewClassDeclarationAST bang_autoLayoutViewClassDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutViewClassDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutViewClassDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutViewClassDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutViewClassDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astHorizontalStackViewDeclaration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astHorizontalStackViewDeclaration_2D_weak : public GALGAS_astAbstractViewDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_astHorizontalStackViewDeclaration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astHorizontalStackViewDeclaration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_astHorizontalStackViewDeclaration_2D_weak (const class GALGAS_astHorizontalStackViewDeclaration & inSource) ;

  public: GALGAS_astHorizontalStackViewDeclaration_2D_weak & operator = (const class GALGAS_astHorizontalStackViewDeclaration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_astHorizontalStackViewDeclaration bang_astHorizontalStackViewDeclaration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astHorizontalStackViewDeclaration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astHorizontalStackViewDeclaration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astHorizontalStackViewDeclaration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astHorizontalStackViewDeclaration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astHorizontalStackViewDeclaration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astComputedHorizontalViewDeclaration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astComputedHorizontalViewDeclaration_2D_weak : public GALGAS_astAbstractViewDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_astComputedHorizontalViewDeclaration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astComputedHorizontalViewDeclaration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_astComputedHorizontalViewDeclaration_2D_weak (const class GALGAS_astComputedHorizontalViewDeclaration & inSource) ;

  public: GALGAS_astComputedHorizontalViewDeclaration_2D_weak & operator = (const class GALGAS_astComputedHorizontalViewDeclaration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_astComputedHorizontalViewDeclaration bang_astComputedHorizontalViewDeclaration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astComputedHorizontalViewDeclaration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astComputedHorizontalViewDeclaration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astComputedHorizontalViewDeclaration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astComputedHorizontalViewDeclaration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astStackViewReferenceInstructionDeclaration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak : public GALGAS_astAbstractViewInstructionDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak (const class GALGAS_astStackViewReferenceInstructionDeclaration & inSource) ;

  public: GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak & operator = (const class GALGAS_astStackViewReferenceInstructionDeclaration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_astStackViewReferenceInstructionDeclaration bang_astStackViewReferenceInstructionDeclaration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astStackViewReferenceInstructionDeclaration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astLocalViewInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astLocalViewInstruction_2D_weak : public GALGAS_astAbstractViewInstructionDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_astLocalViewInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_astLocalViewInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_astLocalViewInstruction_2D_weak (const class GALGAS_astLocalViewInstruction & inSource) ;

  public: GALGAS_astLocalViewInstruction_2D_weak & operator = (const class GALGAS_astLocalViewInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_astLocalViewInstruction bang_astLocalViewInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_astLocalViewInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_astLocalViewInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_astLocalViewInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astLocalViewInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astLocalViewInstruction_2D_weak ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astComputedViewInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedViewInstruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @newHorizontalStackViewGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_newHorizontalStackViewGeneration : public GALGAS_abstractViewGeneration {
//--------------------------------- Default constructor
  public: GALGAS_newHorizontalStackViewGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_newHorizontalStackViewGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_newHorizontalStackViewGeneration (const class cPtr_newHorizontalStackViewGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_autoLayoutViewInstructionGenerationFuncCallList readProperty_mFuncCallList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_newHorizontalStackViewGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_newHorizontalStackViewGeneration constructor_new (const class GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_newHorizontalStackViewGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFuncCallList (class GALGAS_autoLayoutViewInstructionGenerationFuncCallList inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_newHorizontalStackViewGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_newHorizontalStackViewGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @newHorizontalStackViewGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_newHorizontalStackViewGeneration : public cPtr_abstractViewGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_autoLayoutViewInstructionGenerationFuncCallList mProperty_mFuncCallList ;

//--- Constructor
  public: cPtr_newHorizontalStackViewGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @newHorizontalStackViewGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_newHorizontalStackViewGeneration_2D_weak : public GALGAS_abstractViewGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_newHorizontalStackViewGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_newHorizontalStackViewGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_newHorizontalStackViewGeneration_2D_weak (const class GALGAS_newHorizontalStackViewGeneration & inSource) ;

  public: GALGAS_newHorizontalStackViewGeneration_2D_weak & operator = (const class GALGAS_newHorizontalStackViewGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_newHorizontalStackViewGeneration bang_newHorizontalStackViewGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_newHorizontalStackViewGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_newHorizontalStackViewGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_newHorizontalStackViewGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_newHorizontalStackViewGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_newHorizontalStackViewGeneration_2D_weak ;

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

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_computedHorizontalViewGeneration (const class cPtr_computedHorizontalViewGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_autoLayoutViewInstructionGenerationFuncCallList readProperty_mFuncCallList (void) const ;

  public: class GALGAS_autoLayoutViewInstructionGenerationList readProperty_mInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_computedHorizontalViewGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_computedHorizontalViewGeneration constructor_new (const class GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                                const class GALGAS_autoLayoutViewInstructionGenerationList & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_computedHorizontalViewGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFuncCallList (class GALGAS_autoLayoutViewInstructionGenerationFuncCallList inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_autoLayoutViewInstructionGenerationList inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_computedHorizontalViewGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedHorizontalViewGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @computedHorizontalViewGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_computedHorizontalViewGeneration : public cPtr_abstractViewGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_autoLayoutViewInstructionGenerationFuncCallList mProperty_mFuncCallList ;
  public: GALGAS_autoLayoutViewInstructionGenerationList mProperty_mInstructionList ;

//--- Constructor
  public: cPtr_computedHorizontalViewGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                 const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_computedHorizontalViewGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedHorizontalViewGeneration_2D_weak ;

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

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_hStackViewInstructionGeneration (const class cPtr_hStackViewInstructionGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_autoLayoutViewInstructionGenerationFuncCallList readProperty_mFuncCallList (void) const ;

  public: class GALGAS_autoLayoutViewInstructionGenerationList readProperty_mInstructionList (void) const ;

  public: class GALGAS_autoLayoutMultipleBindingGenerationList readProperty_mMultipleBindingGenerationList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_hStackViewInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_hStackViewInstructionGeneration constructor_new (const class GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                               const class GALGAS_autoLayoutViewInstructionGenerationList & inOperand1,
                                                                               const class GALGAS_autoLayoutMultipleBindingGenerationList & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_hStackViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFuncCallList (class GALGAS_autoLayoutViewInstructionGenerationFuncCallList inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_autoLayoutViewInstructionGenerationList inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMultipleBindingGenerationList (class GALGAS_autoLayoutMultipleBindingGenerationList inArgument0
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_hStackViewInstructionGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_hStackViewInstructionGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @hStackViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_hStackViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_autoLayoutViewInstructionGenerationFuncCallList mProperty_mFuncCallList ;
  public: GALGAS_autoLayoutViewInstructionGenerationList mProperty_mInstructionList ;
  public: GALGAS_autoLayoutMultipleBindingGenerationList mProperty_mMultipleBindingGenerationList ;

//--- Constructor
  public: cPtr_hStackViewInstructionGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                const GALGAS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_hStackViewInstructionGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_hStackViewInstructionGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutComputedViewInstructionGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutComputedViewInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutComputedViewInstructionGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

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
                                                                                           const class GALGAS_string & inOperand9
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutComputedViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAutoLayoutViewClassName (class GALGAS_lstring inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConfiguratorName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEBViewGraphicControllerBindingGeneration (class GALGAS_autoLayoutViewGraphicControllerBindingGeneration inArgument0
                                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (class GALGAS_autoLayoutViewInstructionGenerationFuncCallList inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMultipleBindingGenerationList (class GALGAS_autoLayoutMultipleBindingGenerationList inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOutletName (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterList (class GALGAS_autoLayoutViewInstructionGenerationParameterList inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegularBindingsGenerationList (class GALGAS_autoLayoutRegularBindingsGenerationList inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRunBindingGeneration (class GALGAS_autolayoutRunBindingForGeneration inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableViewBindingGeneration (class GALGAS_string inArgument0
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutComputedViewInstructionGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutComputedViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutComputedViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {

//----------------------------------------------------------------------------------------------------------------------

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
                                                            const GALGAS_string & in_mOutletName
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletClassDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computedPropertyDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computedPropertyDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_computedPropertyDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_computedPropertyDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_computedPropertyDeclarationAST_2D_weak (const class GALGAS_computedPropertyDeclarationAST & inSource) ;

  public: GALGAS_computedPropertyDeclarationAST_2D_weak & operator = (const class GALGAS_computedPropertyDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_computedPropertyDeclarationAST bang_computedPropertyDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_computedPropertyDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_computedPropertyDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_computedPropertyDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_computedPropertyDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computedPropertyGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computedPropertyGeneration_2D_weak : public GALGAS_propertyGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_computedPropertyGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_computedPropertyGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_computedPropertyGeneration_2D_weak (const class GALGAS_computedPropertyGeneration & inSource) ;

  public: GALGAS_computedPropertyGeneration_2D_weak & operator = (const class GALGAS_computedPropertyGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_computedPropertyGeneration bang_computedPropertyGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_computedPropertyGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_computedPropertyGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_computedPropertyGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_computedPropertyGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_transientDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_transientDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_transientDeclarationAST_2D_weak (const class GALGAS_transientDeclarationAST & inSource) ;

  public: GALGAS_transientDeclarationAST_2D_weak & operator = (const class GALGAS_transientDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_transientDeclarationAST bang_transientDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_transientDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_transientDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_transientDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @proxyDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_proxyDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_proxyDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_proxyDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_proxyDeclarationAST_2D_weak (const class GALGAS_proxyDeclarationAST & inSource) ;

  public: GALGAS_proxyDeclarationAST_2D_weak & operator = (const class GALGAS_proxyDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_proxyDeclarationAST bang_proxyDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_proxyDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_proxyDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_proxyDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_proxyDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_proxyDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicPropertyDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicPropertyDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_atomicPropertyDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_atomicPropertyDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_atomicPropertyDeclarationAST_2D_weak (const class GALGAS_atomicPropertyDeclarationAST & inSource) ;

  public: GALGAS_atomicPropertyDeclarationAST_2D_weak & operator = (const class GALGAS_atomicPropertyDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_atomicPropertyDeclarationAST bang_atomicPropertyDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_atomicPropertyDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_atomicPropertyDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_atomicPropertyDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_atomicPropertyDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toOneRelationshipAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toOneRelationshipAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_toOneRelationshipAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_toOneRelationshipAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_toOneRelationshipAST_2D_weak (const class GALGAS_toOneRelationshipAST & inSource) ;

  public: GALGAS_toOneRelationshipAST_2D_weak & operator = (const class GALGAS_toOneRelationshipAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_toOneRelationshipAST bang_toOneRelationshipAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_toOneRelationshipAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toOneRelationshipAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_toOneRelationshipAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toOneRelationshipAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneRelationshipAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toOnePropertyGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toOnePropertyGeneration_2D_weak : public GALGAS_propertyGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_toOnePropertyGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_toOnePropertyGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_toOnePropertyGeneration_2D_weak (const class GALGAS_toOnePropertyGeneration & inSource) ;

  public: GALGAS_toOnePropertyGeneration_2D_weak & operator = (const class GALGAS_toOnePropertyGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_toOnePropertyGeneration bang_toOnePropertyGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_toOnePropertyGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toOnePropertyGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_toOnePropertyGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toOnePropertyGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOnePropertyGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyRelationshipAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyRelationshipAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_toManyRelationshipAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_toManyRelationshipAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_toManyRelationshipAST_2D_weak (const class GALGAS_toManyRelationshipAST & inSource) ;

  public: GALGAS_toManyRelationshipAST_2D_weak & operator = (const class GALGAS_toManyRelationshipAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_toManyRelationshipAST bang_toManyRelationshipAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_toManyRelationshipAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_toManyRelationshipAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_toManyRelationshipAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toManyRelationshipAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalIntMultipleBindingExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalIntMultipleBindingExpressionAST_2D_weak : public GALGAS_abstractBooleanMultipleBindingExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalIntMultipleBindingExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalIntMultipleBindingExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalIntMultipleBindingExpressionAST_2D_weak (const class GALGAS_literalIntMultipleBindingExpressionAST & inSource) ;

  public: GALGAS_literalIntMultipleBindingExpressionAST_2D_weak & operator = (const class GALGAS_literalIntMultipleBindingExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalIntMultipleBindingExpressionAST bang_literalIntMultipleBindingExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalIntMultipleBindingExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalIntMultipleBindingExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalIntMultipleBindingExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalIntMultipleBindingExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayControllerDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arrayControllerDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_arrayControllerDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_arrayControllerDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_arrayControllerDeclarationAST_2D_weak (const class GALGAS_arrayControllerDeclarationAST & inSource) ;

  public: GALGAS_arrayControllerDeclarationAST_2D_weak & operator = (const class GALGAS_arrayControllerDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_arrayControllerDeclarationAST bang_arrayControllerDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_arrayControllerDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_arrayControllerDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_arrayControllerDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayControllerGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arrayControllerGeneration : public GALGAS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GALGAS_arrayControllerGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_arrayControllerGeneration (const class cPtr_arrayControllerGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mOwnerName (void) const ;

  public: class GALGAS_lstring readProperty_mControllerName (void) const ;

  public: class GALGAS_string readProperty_mModelTypeName (void) const ;

  public: class GALGAS_arrayControllerModelKind readProperty_mArrayControllerModelKind (void) const ;

  public: class GALGAS_string readProperty_mElementTypeName (void) const ;

  public: class GALGAS_bool readProperty_mElementTypeIsGraphic (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_arrayControllerGeneration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_arrayControllerGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_string & inOperand2,
                                                                         const class GALGAS_arrayControllerModelKind & inOperand3,
                                                                         const class GALGAS_string & inOperand4,
                                                                         const class GALGAS_bool & inOperand5
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_arrayControllerGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMArrayControllerModelKind (class GALGAS_arrayControllerModelKind inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMControllerName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementTypeIsGraphic (class GALGAS_bool inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementTypeName (class GALGAS_string inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModelTypeName (class GALGAS_string inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOwnerName (class GALGAS_string inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @arrayControllerGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_arrayControllerGeneration : public cPtr_abstractFileGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mOwnerName ;
  public: GALGAS_lstring mProperty_mControllerName ;
  public: GALGAS_string mProperty_mModelTypeName ;
  public: GALGAS_arrayControllerModelKind mProperty_mArrayControllerModelKind ;
  public: GALGAS_string mProperty_mElementTypeName ;
  public: GALGAS_bool mProperty_mElementTypeIsGraphic ;

//--- Constructor
  public: cPtr_arrayControllerGeneration (const GALGAS_string & in_mOwnerName,
                                          const GALGAS_lstring & in_mControllerName,
                                          const GALGAS_string & in_mModelTypeName,
                                          const GALGAS_arrayControllerModelKind & in_mArrayControllerModelKind,
                                          const GALGAS_string & in_mElementTypeName,
                                          const GALGAS_bool & in_mElementTypeIsGraphic
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayControllerGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arrayControllerGeneration_2D_weak : public GALGAS_abstractFileGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_arrayControllerGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_arrayControllerGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_arrayControllerGeneration_2D_weak (const class GALGAS_arrayControllerGeneration & inSource) ;

  public: GALGAS_arrayControllerGeneration_2D_weak & operator = (const class GALGAS_arrayControllerGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_arrayControllerGeneration bang_arrayControllerGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_arrayControllerGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_arrayControllerGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_arrayControllerGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tableViewControllerDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tableViewControllerDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_tableViewControllerDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_tableViewControllerDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_tableViewControllerDeclarationAST_2D_weak (const class GALGAS_tableViewControllerDeclarationAST & inSource) ;

  public: GALGAS_tableViewControllerDeclarationAST_2D_weak & operator = (const class GALGAS_tableViewControllerDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_tableViewControllerDeclarationAST bang_tableViewControllerDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_tableViewControllerDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_tableViewControllerDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_tableViewControllerDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableViewControllerDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tableViewControllerGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tableViewControllerGeneration : public GALGAS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GALGAS_tableViewControllerGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_tableViewControllerGeneration (const class cPtr_tableViewControllerGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mOwnerName (void) const ;

  public: class GALGAS_lstring readProperty_mControllerName (void) const ;

  public: class GALGAS_string readProperty_mModelString (void) const ;

  public: class GALGAS_tableViewControllerBoundColumnListForGeneration readProperty_mTableViewControllerBoundColumnListForGeneration (void) const ;

  public: class GALGAS_tableViewControllerSortedColumnListForGeneration readProperty_mTableViewControllerSortedColumnListForGeneration (void) const ;

  public: class GALGAS_string readProperty_mModelTypeName (void) const ;

  public: class GALGAS_tableViewControllerModelKind readProperty_mTableViewControllerModelKind (void) const ;

  public: class GALGAS_string readProperty_mElementTypeName (void) const ;

  public: class GALGAS_bool readProperty_mElementTypeIsGraphic (void) const ;

  public: class GALGAS__32_stringlist readProperty_mAttributeListForGeneration (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_tableViewControllerGeneration extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_tableViewControllerGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_string & inOperand2,
                                                                             const class GALGAS_tableViewControllerBoundColumnListForGeneration & inOperand3,
                                                                             const class GALGAS_tableViewControllerSortedColumnListForGeneration & inOperand4,
                                                                             const class GALGAS_string & inOperand5,
                                                                             const class GALGAS_tableViewControllerModelKind & inOperand6,
                                                                             const class GALGAS_string & inOperand7,
                                                                             const class GALGAS_bool & inOperand8,
                                                                             const class GALGAS__32_stringlist & inOperand9
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_tableViewControllerGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAttributeListForGeneration (class GALGAS__32_stringlist inArgument0
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMControllerName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementTypeIsGraphic (class GALGAS_bool inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementTypeName (class GALGAS_string inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModelString (class GALGAS_string inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModelTypeName (class GALGAS_string inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOwnerName (class GALGAS_string inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableViewControllerBoundColumnListForGeneration (class GALGAS_tableViewControllerBoundColumnListForGeneration inArgument0
                                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableViewControllerModelKind (class GALGAS_tableViewControllerModelKind inArgument0
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableViewControllerSortedColumnListForGeneration (class GALGAS_tableViewControllerSortedColumnListForGeneration inArgument0
                                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableViewControllerGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @tableViewControllerGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_tableViewControllerGeneration : public cPtr_abstractFileGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mOwnerName ;
  public: GALGAS_lstring mProperty_mControllerName ;
  public: GALGAS_string mProperty_mModelString ;
  public: GALGAS_tableViewControllerBoundColumnListForGeneration mProperty_mTableViewControllerBoundColumnListForGeneration ;
  public: GALGAS_tableViewControllerSortedColumnListForGeneration mProperty_mTableViewControllerSortedColumnListForGeneration ;
  public: GALGAS_string mProperty_mModelTypeName ;
  public: GALGAS_tableViewControllerModelKind mProperty_mTableViewControllerModelKind ;
  public: GALGAS_string mProperty_mElementTypeName ;
  public: GALGAS_bool mProperty_mElementTypeIsGraphic ;
  public: GALGAS__32_stringlist mProperty_mAttributeListForGeneration ;

//--- Constructor
  public: cPtr_tableViewControllerGeneration (const GALGAS_string & in_mOwnerName,
                                              const GALGAS_lstring & in_mControllerName,
                                              const GALGAS_string & in_mModelString,
                                              const GALGAS_tableViewControllerBoundColumnListForGeneration & in_mTableViewControllerBoundColumnListForGeneration,
                                              const GALGAS_tableViewControllerSortedColumnListForGeneration & in_mTableViewControllerSortedColumnListForGeneration,
                                              const GALGAS_string & in_mModelTypeName,
                                              const GALGAS_tableViewControllerModelKind & in_mTableViewControllerModelKind,
                                              const GALGAS_string & in_mElementTypeName,
                                              const GALGAS_bool & in_mElementTypeIsGraphic,
                                              const GALGAS__32_stringlist & in_mAttributeListForGeneration
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tableViewControllerGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tableViewControllerGeneration_2D_weak : public GALGAS_abstractFileGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_tableViewControllerGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_tableViewControllerGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_tableViewControllerGeneration_2D_weak (const class GALGAS_tableViewControllerGeneration & inSource) ;

  public: GALGAS_tableViewControllerGeneration_2D_weak & operator = (const class GALGAS_tableViewControllerGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_tableViewControllerGeneration bang_tableViewControllerGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_tableViewControllerGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_tableViewControllerGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_tableViewControllerGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableViewControllerGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak (const class GALGAS_autoLayoutTableViewControllerDeclarationAST & inSource) ;

  public: GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak & operator = (const class GALGAS_autoLayoutTableViewControllerDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_autoLayoutTableViewControllerDeclarationAST bang_autoLayoutTableViewControllerDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutTableViewControllerGeneration : public GALGAS_abstractFileGeneration {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutTableViewControllerGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_autoLayoutTableViewControllerGeneration (const class cPtr_autoLayoutTableViewControllerGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mOwnerName (void) const ;

  public: class GALGAS_lstring readProperty_mControllerName (void) const ;

  public: class GALGAS_string readProperty_mModelString (void) const ;

  public: class GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration readProperty_mTableViewControllerBoundColumnListForGeneration (void) const ;

  public: class GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration readProperty_mTableViewControllerSortedColumnListForGeneration (void) const ;

  public: class GALGAS_string readProperty_mModelTypeName (void) const ;

  public: class GALGAS_autoLayoutTableViewControllerModelKind readProperty_mTableViewControllerModelKind (void) const ;

  public: class GALGAS_string readProperty_mElementTypeName (void) const ;

  public: class GALGAS_bool readProperty_mElementTypeIsGraphic (void) const ;

  public: class GALGAS__32_stringlist readProperty_mAttributeListForGeneration (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutTableViewControllerGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutTableViewControllerGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                       const class GALGAS_string & inOperand2,
                                                                                       const class GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration & inOperand3,
                                                                                       const class GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration & inOperand4,
                                                                                       const class GALGAS_string & inOperand5,
                                                                                       const class GALGAS_autoLayoutTableViewControllerModelKind & inOperand6,
                                                                                       const class GALGAS_string & inOperand7,
                                                                                       const class GALGAS_bool & inOperand8,
                                                                                       const class GALGAS__32_stringlist & inOperand9
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutTableViewControllerGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAttributeListForGeneration (class GALGAS__32_stringlist inArgument0
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMControllerName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementTypeIsGraphic (class GALGAS_bool inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementTypeName (class GALGAS_string inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModelString (class GALGAS_string inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModelTypeName (class GALGAS_string inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOwnerName (class GALGAS_string inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableViewControllerBoundColumnListForGeneration (class GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration inArgument0
                                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableViewControllerModelKind (class GALGAS_autoLayoutTableViewControllerModelKind inArgument0
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTableViewControllerSortedColumnListForGeneration (class GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration inArgument0
                                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutTableViewControllerGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutTableViewControllerGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutTableViewControllerGeneration : public cPtr_abstractFileGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mOwnerName ;
  public: GALGAS_lstring mProperty_mControllerName ;
  public: GALGAS_string mProperty_mModelString ;
  public: GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration mProperty_mTableViewControllerBoundColumnListForGeneration ;
  public: GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration mProperty_mTableViewControllerSortedColumnListForGeneration ;
  public: GALGAS_string mProperty_mModelTypeName ;
  public: GALGAS_autoLayoutTableViewControllerModelKind mProperty_mTableViewControllerModelKind ;
  public: GALGAS_string mProperty_mElementTypeName ;
  public: GALGAS_bool mProperty_mElementTypeIsGraphic ;
  public: GALGAS__32_stringlist mProperty_mAttributeListForGeneration ;

//--- Constructor
  public: cPtr_autoLayoutTableViewControllerGeneration (const GALGAS_string & in_mOwnerName,
                                                        const GALGAS_lstring & in_mControllerName,
                                                        const GALGAS_string & in_mModelString,
                                                        const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration & in_mTableViewControllerBoundColumnListForGeneration,
                                                        const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration & in_mTableViewControllerSortedColumnListForGeneration,
                                                        const GALGAS_string & in_mModelTypeName,
                                                        const GALGAS_autoLayoutTableViewControllerModelKind & in_mTableViewControllerModelKind,
                                                        const GALGAS_string & in_mElementTypeName,
                                                        const GALGAS_bool & in_mElementTypeIsGraphic,
                                                        const GALGAS__32_stringlist & in_mAttributeListForGeneration
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutTableViewControllerGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutTableViewControllerGeneration_2D_weak : public GALGAS_abstractFileGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_autoLayoutTableViewControllerGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_autoLayoutTableViewControllerGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_autoLayoutTableViewControllerGeneration_2D_weak (const class GALGAS_autoLayoutTableViewControllerGeneration & inSource) ;

  public: GALGAS_autoLayoutTableViewControllerGeneration_2D_weak & operator = (const class GALGAS_autoLayoutTableViewControllerGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_autoLayoutTableViewControllerGeneration bang_autoLayoutTableViewControllerGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_autoLayoutTableViewControllerGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_autoLayoutTableViewControllerGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_autoLayoutTableViewControllerGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutTableViewControllerGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selectionControllerDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selectionControllerDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_selectionControllerDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selectionControllerDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_selectionControllerDeclarationAST_2D_weak (const class GALGAS_selectionControllerDeclarationAST & inSource) ;

  public: GALGAS_selectionControllerDeclarationAST_2D_weak & operator = (const class GALGAS_selectionControllerDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_selectionControllerDeclarationAST bang_selectionControllerDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selectionControllerDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selectionControllerDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selectionControllerDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectionControllerDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @boolAsDefaultValue_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_boolAsDefaultValue_2D_weak : public GALGAS_abstractDefaultValue_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_boolAsDefaultValue_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_boolAsDefaultValue_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_boolAsDefaultValue_2D_weak (const class GALGAS_boolAsDefaultValue & inSource) ;

  public: GALGAS_boolAsDefaultValue_2D_weak & operator = (const class GALGAS_boolAsDefaultValue & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_boolAsDefaultValue bang_boolAsDefaultValue_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_boolAsDefaultValue_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_boolAsDefaultValue_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_boolAsDefaultValue_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_boolAsDefaultValue_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolAsDefaultValue_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @stringAsDefaultValue_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_stringAsDefaultValue_2D_weak : public GALGAS_abstractDefaultValue_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_stringAsDefaultValue_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_stringAsDefaultValue_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_stringAsDefaultValue_2D_weak (const class GALGAS_stringAsDefaultValue & inSource) ;

  public: GALGAS_stringAsDefaultValue_2D_weak & operator = (const class GALGAS_stringAsDefaultValue & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_stringAsDefaultValue bang_stringAsDefaultValue_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_stringAsDefaultValue_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_stringAsDefaultValue_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_stringAsDefaultValue_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_stringAsDefaultValue_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringAsDefaultValue_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @identifierAsDefaultValue_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_identifierAsDefaultValue_2D_weak : public GALGAS_abstractDefaultValue_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_identifierAsDefaultValue_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_identifierAsDefaultValue_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_identifierAsDefaultValue_2D_weak (const class GALGAS_identifierAsDefaultValue & inSource) ;

  public: GALGAS_identifierAsDefaultValue_2D_weak & operator = (const class GALGAS_identifierAsDefaultValue & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_identifierAsDefaultValue bang_identifierAsDefaultValue_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_identifierAsDefaultValue_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_identifierAsDefaultValue_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_identifierAsDefaultValue_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_identifierAsDefaultValue_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_identifierAsDefaultValue_2D_weak ;


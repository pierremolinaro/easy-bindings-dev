#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyMap-element isAbstract' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_isAbstract (const class GALGAS_propertyMap_2D_element & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//----------------------------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

extern C_BoolCommandLineOption gOption_easyBindings_5F_options_outputDeclarationDependencyGraph ;

//----------------------------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'predefinedOutletClasses'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_1_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_2_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_3_predefinedOutletClasses ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedOutletClasses sourceFile'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedOutletClasses_sourceFile (class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'sortProperties'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_sortProperties (const class GALGAS_string constinArgument0,
                             const class GALGAS_declarationListAST constinArgument1,
                             class GALGAS_declarationListAST & outArgument2,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'enumGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_enumGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumGenerationInSwift'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (class C_Compiler * inCompiler,
                                                                                const class GALGAS_string & in_ENUM_5F_TYPE_5F_NAME,
                                                                                const class GALGAS_lstringlist & in_CONSTANT_5F_ORDERED_5F_LIST,
                                                                                const class GALGAS_enumFuncMap & in_FUNCTION_5F_MAP
                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterAtomicClassesIn'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterAtomicClassesIn (class GALGAS_declarationListAST & ioArgument0,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildActionMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildActionMap (const class GALGAS_lstringlist constinArgument0,
                             class GALGAS_actionMap & outArgument1,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'entityGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_entityGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityImplementationInSwift'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_entityGenerationTemplate_entityImplementationInSwift (class C_Compiler * inCompiler,
                                                                                        const class GALGAS_string & in_ENTITY_5F_NAME,
                                                                                        const class GALGAS_string & in_SUPER_5F_CLASS_5F_NAME,
                                                                                        const class GALGAS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                        const class GALGAS_atomicProxyGenerationList & in_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                        const class GALGAS_toManyProxyGenerationList & in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                        const class GALGAS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                        const class GALGAS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                        const class GALGAS_computedPropertyGenerationList & in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                        const class GALGAS_toOnePropertyGenerationList & in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST,
                                                                                        const class GALGAS_toManyPropertyGenerationList & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                        const class GALGAS_stringset & in_SIGNATURE_5F_SET,
                                                                                        const class GALGAS_bool & in_IS_5F_GRAPHIC_5F_ENTITY,
                                                                                        const class GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                        const class GALGAS_stringset & in_OVERRIDEN_5F_TRANSIENTS,
                                                                                        const class GALGAS_externSwiftDelegateList & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                        const class GALGAS_bool & in_HAS_5F_SUB_5F_ENTITY,
                                                                                        const class GALGAS_bool & in_OPTION_5F_CanCopyAndPaste,
                                                                                        const class GALGAS_bool & in_OPTION_5F_CannotBeDeleted
                                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityToManyImplementationInSwift'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_entityGenerationTemplate_entityToManyImplementationInSwift (class C_Compiler * inCompiler,
                                                                                              const class GALGAS_string & in_ENTITY_5F_NAME,
                                                                                              const class GALGAS_string & in_SUPER_5F_CLASS_5F_NAME,
                                                                                              const class GALGAS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                              const class GALGAS_atomicProxyGenerationList & in_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                              const class GALGAS_toManyProxyGenerationList & in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                              const class GALGAS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                              const class GALGAS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                              const class GALGAS_computedPropertyGenerationList & in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                              const class GALGAS_toOnePropertyGenerationList & in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST,
                                                                                              const class GALGAS_toManyPropertyGenerationList & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                              const class GALGAS_stringset & in_SIGNATURE_5F_SET,
                                                                                              const class GALGAS_bool & in_IS_5F_GRAPHIC_5F_ENTITY,
                                                                                              const class GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                              const class GALGAS_stringset & in_OVERRIDEN_5F_TRANSIENTS,
                                                                                              const class GALGAS_externSwiftDelegateList & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION
                                                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityToOneImplementationInSwift'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_entityGenerationTemplate_entityToOneImplementationInSwift (class C_Compiler * inCompiler,
                                                                                             const class GALGAS_string & in_ENTITY_5F_NAME,
                                                                                             const class GALGAS_string & in_SUPER_5F_CLASS_5F_NAME,
                                                                                             const class GALGAS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                             const class GALGAS_atomicProxyGenerationList & in_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                             const class GALGAS_toManyProxyGenerationList & in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                             const class GALGAS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                             const class GALGAS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                             const class GALGAS_computedPropertyGenerationList & in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                             const class GALGAS_toOnePropertyGenerationList & in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST,
                                                                                             const class GALGAS_toManyPropertyGenerationList & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                             const class GALGAS_stringset & in_SIGNATURE_5F_SET,
                                                                                             const class GALGAS_bool & in_IS_5F_GRAPHIC_5F_ENTITY,
                                                                                             const class GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                             const class GALGAS_stringset & in_OVERRIDEN_5F_TRANSIENTS,
                                                                                             const class GALGAS_externSwiftDelegateList & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION
                                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate managedObjectFactory'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_entityGenerationTemplate_managedObjectFactory (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_entityListForGeneratingEBManagedObjectContext & in_ENTITY_5F_LIST
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateEBManagedObjectContext'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateEBManagedObjectContext (const class GALGAS_entityListForGeneratingEBManagedObjectContext constinArgument0,
                                             const class GALGAS_string constinArgument1,
                                             class GALGAS_stringset & ioArgument2,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


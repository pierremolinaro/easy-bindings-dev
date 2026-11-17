#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRegularBinding????????&'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeRegularBinding_3F__3F__3F__3F__3F__3F__3F__3F__26_ (const class GGS_propertyMap constinArgument0,
                                                                        const class GGS_propertyMap constinArgument1,
                                                                        const class GGS_semanticContext constinArgument2,
                                                                        const class GGS_propertyMap constinArgument3,
                                                                        const class GGS_lstring constinArgument4,
                                                                        const class GGS_string constinArgument5,
                                                                        const class GGS__5B_regularBinding_5D_ constinArgument6,
                                                                        const class GGS_string constinArgument7,
                                                                        class GGS__5B_regularBindingsGeneration_5D_ & ioArgument8,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'transientManager'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_1_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_2_transientManager ;
extern const cDirectoryWrapper gWrapperDirectory_3_transientManager ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'transientManager transientComputationFunctionFile'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_transientManager_transientComputationFunctionFile (Compiler * inCompiler,
                                                                                  const class GGS_string & in_OWNER_5F_NAME,
                                                                                  const class GGS_string & in_TRANSIENT_5F_NAME,
                                                                                  const class GGS__5B_transientDependencyForGeneration_5D_ & in_DEPENDENCY_5F_LIST,
                                                                                  const class GGS_typeKind & in_TRANSIENT_5F_TYPE,
                                                                                  const class GGS_string & in_TRANSIENT_5F_FUNCTION_5F_NAME_5F_PREFIX
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateCode???'
//
//--------------------------------------------------------------------------------------------------

void routine_generateCode_3F__3F__3F_ (const class GGS_string constinArgument0,
                                       const class GGS_generationStruct constinArgument1,
                                       const class GGS_string constinArgument2,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateEBManagedObjectContext??&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateEBManagedObjectContext_3F__3F__26_ (const class GGS__5B_entityForGeneratingEBManagedObjectContext_5D_ constinArgument0,
                                                         const class GGS_string constinArgument1,
                                                         class GGS_stringset & ioArgument2,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateStandardProperties???&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateStandardProperties_3F__3F__3F__26_ (const class GGS_string constinArgument0,
                                                         const class GGS__5B_string_5D_ constinArgument1,
                                                         const class GGS__5B_transientExternType_5D_ constinArgument2,
                                                         class GGS_stringset & ioArgument3,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'standard_properties'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_standard_5F_properties ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'standard_properties scalarProperty'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_standard_5F_properties_scalarProperty (Compiler * inCompiler,
                                                                      const class GGS_string & in_TYPE,
                                                                      const class GGS_bool & in_TRANSIENT,
                                                                      const class GGS_string & in_COMPARISON_5F_METHOD
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'standard_properties classProperty'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_standard_5F_properties_classProperty (Compiler * inCompiler,
                                                                     const class GGS_string & in_CLASS_5F_NAME,
                                                                     const class GGS_bool & in_TRANSIENT
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateClassProperty???transient&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateClassProperty_3F__3F__3F_transient_26_ (const class GGS_string constinArgument0,
                                                             const class GGS_string constinArgument1,
                                                             const class GGS_bool constinArgument2,
                                                             class GGS_stringset & ioArgument3,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateScalarProperty???transient?&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (const class GGS_string constinArgument0,
                                                                  const class GGS_string constinArgument1,
                                                                  const class GGS_bool constinArgument2,
                                                                  const class GGS_string constinArgument3,
                                                                  class GGS_stringset & ioArgument4,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'enumGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_enumGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumGenerationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (Compiler * inCompiler,
                                                                             const class GGS_string & in_ENUM_5F_TYPE_5F_NAME,
                                                                             const class GGS__5B_lstring_5D_ & in_CONSTANT_5F_ORDERED_5F_LIST,
                                                                             const class GGS_bool & in_CASE_5F_ITERABLE
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumEBExtensionGenerationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_enumGenerationTemplate_enumEBExtensionGenerationInSwift (Compiler * inCompiler,
                                                                                        const class GGS_string & in_ENUM_5F_TYPE_5F_NAME,
                                                                                        const class GGS__5B_lstring_5D_ & in_CONSTANT_5F_ORDERED_5F_LIST,
                                                                                        const class GGS_enumFuncMap & in_FUNCTION_5F_MAP
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'entityGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_entityGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_entityImplementationInSwift (Compiler * inCompiler,
                                                                                     const class GGS_string & in_ENTITY_5F_NAME,
                                                                                     const class GGS_string & in_SUPER_5F_CLASS_5F_NAME,
                                                                                     const class GGS__5B_propertyGeneration_5D_ & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                     const class GGS_stringset & in_USED_5F_PROTOCOL_5F_SET,
                                                                                     const class GGS__5B_atomicProxyGeneration_5D_ & in_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                     const class GGS__5B_toManyProxyGeneration_5D_ & in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                     const class GGS__5B_atomicPropertyGeneration_5D_ & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                     const class GGS__5B_transientPropertyGeneration_5D_ & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                     const class GGS__5B_computedPropertyGeneration_5D_ & in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                     const class GGS__5B_toOnePropertyGeneration_5D_ & in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST,
                                                                                     const class GGS__5B_toManyPropertyGeneration_5D_ & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                     const class GGS_stringset & in_SIGNATURE_5F_SET,
                                                                                     const class GGS_bool & in_IS_5F_GRAPHIC_5F_ENTITY,
                                                                                     const class GGS_bool & in_IS_5F_ABSTRACT,
                                                                                     const class GGS_stringset & in_OVERRIDEN_5F_TRANSIENTS,
                                                                                     const class GGS__5B_lstring_5D_ & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                     const class GGS_bool & in_HAS_5F_SUB_5F_ENTITY,
                                                                                     const class GGS_bool & in_OPTION_5F_CanCopyAndPaste,
                                                                                     const class GGS_bool & in_OPTION_5F_CannotBeDeleted,
                                                                                     const class GGS_bool & in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityToManyImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_entityToManyImplementationInSwift (Compiler * inCompiler,
                                                                                           const class GGS_string & in_ENTITY_5F_NAME,
                                                                                           const class GGS_string & in_SUPER_5F_CLASS_5F_NAME,
                                                                                           const class GGS_bool & in_HANDLING_5F_OPPOSITE,
                                                                                           const class GGS__5B_propertyGeneration_5D_ & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                           const class GGS__5B_atomicProxyGeneration_5D_ & in_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                           const class GGS__5B_toManyProxyGeneration_5D_ & in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                           const class GGS__5B_atomicPropertyGeneration_5D_ & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                           const class GGS__5B_transientPropertyGeneration_5D_ & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                           const class GGS__5B_computedPropertyGeneration_5D_ & in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                           const class GGS__5B_toOnePropertyGeneration_5D_ & in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST,
                                                                                           const class GGS__5B_toManyPropertyGeneration_5D_ & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                           const class GGS_stringset & in_SIGNATURE_5F_SET,
                                                                                           const class GGS_bool & in_IS_5F_GRAPHIC_5F_ENTITY,
                                                                                           const class GGS_bool & in_IS_5F_ABSTRACT,
                                                                                           const class GGS_stringset & in_OVERRIDEN_5F_TRANSIENTS,
                                                                                           const class GGS__5B_lstring_5D_ & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                           const class GGS_bool & in_GENERATE_5F_CLASS_5F_PreferencesArrayOf_5F_,
                                                                                           const class GGS_bool & in_GENERATE_5F_CLASS_5F_ProxyArrayOf_5F_,
                                                                                           const class GGS_bool & in_GENERATE_5F_CLASS_5F_TransientArrayOfSuperOf_5F_,
                                                                                           const class GGS_bool & in_GENERATE_5F_CLASS_5F_TransientArrayOf_5F_,
                                                                                           const class GGS_bool & in_GENERATE_5F_CLASS_5F_StoredArrayOf_5F_,
                                                                                           const class GGS_stringset & in_USED_5F_PROTOCOL_5F_SET
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityToOneImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_entityToOneImplementationInSwift (Compiler * inCompiler,
                                                                                          const class GGS_string & in_ENTITY_5F_NAME,
                                                                                          const class GGS_string & in_SUPER_5F_CLASS_5F_NAME,
                                                                                          const class GGS_bool & in_HANDLING_5F_OPPOSITE,
                                                                                          const class GGS__5B_propertyGeneration_5D_ & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                          const class GGS__5B_atomicProxyGeneration_5D_ & in_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                          const class GGS__5B_toManyProxyGeneration_5D_ & in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                          const class GGS__5B_atomicPropertyGeneration_5D_ & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                          const class GGS__5B_transientPropertyGeneration_5D_ & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                          const class GGS__5B_computedPropertyGeneration_5D_ & in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                          const class GGS__5B_toOnePropertyGeneration_5D_ & in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST,
                                                                                          const class GGS__5B_toManyPropertyGeneration_5D_ & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                          const class GGS_stringset & in_SIGNATURE_5F_SET,
                                                                                          const class GGS_bool & in_IS_5F_GRAPHIC_5F_ENTITY,
                                                                                          const class GGS_bool & in_IS_5F_ABSTRACT,
                                                                                          const class GGS_stringset & in_OVERRIDEN_5F_TRANSIENTS,
                                                                                          const class GGS__5B_lstring_5D_ & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate managedObjectFactory'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_managedObjectFactory (Compiler * inCompiler,
                                                                              const class GGS__5B_entityForGeneratingEBManagedObjectContext_5D_ & in_ENTITY_5F_LIST
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'computedPropertyManager'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_computedPropertyManager ;
extern const cDirectoryWrapper gWrapperDirectory_1_computedPropertyManager ;
extern const cDirectoryWrapper gWrapperDirectory_2_computedPropertyManager ;
extern const cDirectoryWrapper gWrapperDirectory_3_computedPropertyManager ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'computedPropertyManager computedComputationFunctionFile'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_computedPropertyManager_computedComputationFunctionFile (Compiler * inCompiler,
                                                                                        const class GGS_string & in_OWNER_5F_NAME,
                                                                                        const class GGS_string & in_COMPUTED_5F_PROPERTY_5F_NAME,
                                                                                        const class GGS_typeKind & in_TRANSIENT_5F_TYPE
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'actionGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_actionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_actionGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'actionGenerationTemplate actionGeneration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_actionGenerationTemplate_actionGeneration (Compiler * inCompiler,
                                                                          const class GGS_string & in_EXTENDED_5F_CLASS_5F_NAME,
                                                                          const class GGS_string & in_ACTION_5F_NAME
                                                                          COMMA_LOCATION_ARGS) ;


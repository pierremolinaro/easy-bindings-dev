#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'graphvizAnalysis???'
//
//--------------------------------------------------------------------------------------------------

void routine_graphvizAnalysis_3F__3F__3F_ (const GGS_string constinArgument_inSourceFileDirectory,
                                           const GGS_semanticContext constinArgument_inSemanticContext,
                                           const GGS_lstringlist constinArgument_inGraphvizList,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("graphviz.ggs", 29)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      UpEnumerator_lstringlist enumerator_1084 (constinArgument_inGraphvizList) ;
      while (enumerator_1084.hasCurrentObject ()) {
        {
        routine_graphvizRootEntityAnalysis_3F__3F__3F_ (constinArgument_inSourceFileDirectory, constinArgument_inSemanticContext, enumerator_1084.current_mValue (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 31)) ;
        }
        {
        routine_graphvizRootEntityStrongAnalysis_3F__3F__3F_ (constinArgument_inSourceFileDirectory, constinArgument_inSemanticContext, enumerator_1084.current_mValue (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 32)) ;
        }
        enumerator_1084.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'graphvizRootEntityAnalysis???'
//
//--------------------------------------------------------------------------------------------------

void routine_graphvizRootEntityAnalysis_3F__3F__3F_ (const GGS_string constinArgument_inSourceFileDirectory,
                                                     const GGS_semanticContext constinArgument_inSemanticContext,
                                                     const GGS_string constinArgument_inRootEntityName,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 42)) ;
  temp_0.plusPlusAssignOperation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.ggs", 42)) ;
  GGS_stringset var_reachableEntityNameSet_1689 = temp_0 ;
  GGS_stringlist temp_1 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 43)) ;
  temp_1.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (constinArgument_inRootEntityName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("graphviz.ggs", 43)) ;
  GGS_stringlist var_exploreArray_1751 = temp_1 ;
  GGS_stringlist temp_2 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 44)) ;
  GGS_stringlist var_nodeList_1806 = temp_2 ;
  GGS_stringlist temp_3 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 45)) ;
  GGS_stringlist var_arrowList_1838 = temp_3 ;
  if (constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 46)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 46)).isValid ()) {
    uint32_t variant_1855 = constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 46)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 46)).uintValue () ;
    bool loop_1855 = true ;
    while (loop_1855) {
      loop_1855 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_1751.getter_count (SOURCE_FILE ("graphviz.ggs", 46)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_1855) {
        loop_1855 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_1751.getter_count (SOURCE_FILE ("graphviz.ggs", 46)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_1855 && (0 == variant_1855)) {
        loop_1855 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("graphviz.ggs", 46)) ;
      }
      if (loop_1855) {
        variant_1855 -= 1 ;
        GGS_string var_entityName_1973 ;
        {
        var_exploreArray_1751.setter_popLast (var_entityName_1973, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 47)) ;
        }
        GGS_string var_node_1993 = GGS_string ("  ").add_operation (var_entityName_1973, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (GGS_string ("[label=\"<"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (var_entityName_1973, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (GGS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (var_entityName_1973, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)) ;
        GGS_classKind var_entityKind_2134 ;
        GGS_propertyMap var_propertyMap_2164 ;
        GGS_actionMap joker_2177_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_2177_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_1973.getter_nowhere (SOURCE_FILE ("graphviz.ggs", 49)), var_entityKind_2134, var_propertyMap_2164, joker_2177_2, joker_2177_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 49)) ;
        GGS_string var_superEntityName_2234 ;
        GGS_bool joker_2251_3 ; // Joker input parameter
        GGS_bool joker_2251_2 ; // Joker input parameter
        GGS_bool joker_2251_1 ; // Joker input parameter
        var_entityKind_2134.method_extractEntity (var_superEntityName_2234, joker_2251_3, joker_2251_2, joker_2251_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 50)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::notEqual, var_superEntityName_2234.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = var_reachableEntityNameSet_1689.getter_hasKey (var_superEntityName_2234 COMMA_SOURCE_FILE ("graphviz.ggs", 52)).operator_not (SOURCE_FILE ("graphviz.ggs", 52)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                {
                var_reachableEntityNameSet_1689.setter_insert (var_superEntityName_2234, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 53)) ;
                }
                {
                var_exploreArray_1751.setter_append (var_superEntityName_2234, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 54)) ;
                }
              }
            }
            {
            var_arrowList_1838.setter_append (GGS_string ("  ").add_operation (var_entityName_1973, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (var_superEntityName_2234, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (GGS_string (" [dir=both arrowtail=dot arrowhead=normal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)) ;
            }
          }
        }
        UpEnumerator_propertyMap enumerator_2638 (var_propertyMap_2164) ;
        while (enumerator_2638.hasCurrentObject ()) {
          switch (enumerator_2638.current_mKind (HERE).enumValue ()) {
          case GGS_propertyKind::Enumeration::invalid:
            break ;
          case GGS_propertyKind::Enumeration::enum_property:
            {
              GGS_typeKind extractedValue_2706_type_0 ;
              GGS_propertyAccessibility extractedValue_2712_accessibility_1 ;
              enumerator_2638.current_mKind (HERE).getAssociatedValuesFor_property (extractedValue_2706_type_0, extractedValue_2712_accessibility_1) ;
              switch (extractedValue_2712_accessibility_1.enumValue ()) {
              case GGS_propertyAccessibility::Enumeration::invalid:
                break ;
              case GGS_propertyAccessibility::Enumeration::enum_stored:
                {
                  var_node_1993.plusAssignOperation(GGS_string ("|").add_operation (extensionGetter_swiftTypeName (extractedValue_2706_type_0, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)).add_operation (enumerator_2638.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 63)) ;
                }
                break ;
              case GGS_propertyAccessibility::Enumeration::enum_transient:
                break ;
              case GGS_propertyAccessibility::Enumeration::enum_computed:
                break ;
              }
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_arrayController:
            break ;
          case GGS_propertyKind::Enumeration::enum_selectionController:
            break ;
          case GGS_propertyKind::Enumeration::enum_toMany:
            {
              GGS_lstring extractedValue_3009_typeName_0 ;
              GGS_propertyAccessibility extractedValue_3042_accessibility_1 ;
              GGS_bool extractedValue_3057__2 ;
              GGS_toManyRelationshipOptionAST extractedValue_3060_optionKind_3 ;
              enumerator_2638.current_mKind (HERE).getAssociatedValuesFor_toMany (extractedValue_3009_typeName_0, extractedValue_3042_accessibility_1, extractedValue_3057__2, extractedValue_3060_optionKind_3) ;
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = extractedValue_3042_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.ggs", 70)).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  var_node_1993.plusAssignOperation(GGS_string ("|<").add_operation (enumerator_2638.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (GGS_string (">["), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (extractedValue_3009_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (GGS_string ("] "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (enumerator_2638.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 71)) ;
                  switch (extractedValue_3060_optionKind_3.enumValue ()) {
                  case GGS_toManyRelationshipOptionAST::Enumeration::invalid:
                    break ;
                  case GGS_toManyRelationshipOptionAST::Enumeration::enum_none:
                    {
                      GalgasBool test_7 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_7) {
                        test_7 = var_reachableEntityNameSet_1689.getter_hasKey (extractedValue_3009_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 74)).operator_not (SOURCE_FILE ("graphviz.ggs", 74)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_7) {
                          {
                          var_reachableEntityNameSet_1689.setter_insert (extractedValue_3009_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 75)) ;
                          }
                          {
                          var_exploreArray_1751.setter_append (extractedValue_3009_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 76)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1838.setter_append (GGS_string ("  ").add_operation (var_entityName_1973, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (enumerator_2638.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (extractedValue_3009_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 79)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 79)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)) ;
                      }
                    }
                    break ;
                  case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasOpposite:
                    {
                      GGS_lstring extractedValue_3599_oppositeName_0 ;
                      extractedValue_3060_optionKind_3.getAssociatedValuesFor_hasOpposite (extractedValue_3599_oppositeName_0) ;
                      GalgasBool test_8 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_8) {
                        test_8 = var_reachableEntityNameSet_1689.getter_hasKey (extractedValue_3009_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 81)).operator_not (SOURCE_FILE ("graphviz.ggs", 81)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_8) {
                          {
                          var_reachableEntityNameSet_1689.setter_insert (extractedValue_3009_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 82)) ;
                          }
                          {
                          var_exploreArray_1751.setter_append (extractedValue_3009_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 83)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1838.setter_append (GGS_string ("  ").add_operation (var_entityName_1973, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (enumerator_2638.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (extractedValue_3009_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (extractedValue_3599_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (GGS_string (" [dir=both arrowtail=onormal arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)) ;
                      }
                    }
                    break ;
                  case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasDependance:
                    {
                      GGS_lstring extractedValue_4002__0 ;
                      extractedValue_3060_optionKind_3.getAssociatedValuesFor_hasDependance (extractedValue_4002__0) ;
                      GalgasBool test_9 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_9) {
                        test_9 = var_reachableEntityNameSet_1689.getter_hasKey (extractedValue_3009_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 88)).operator_not (SOURCE_FILE ("graphviz.ggs", 88)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_9) {
                          {
                          var_reachableEntityNameSet_1689.setter_insert (extractedValue_3009_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 89)) ;
                          }
                          {
                          var_exploreArray_1751.setter_append (extractedValue_3009_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 90)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1838.setter_append (GGS_string ("  ").add_operation (var_entityName_1973, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (enumerator_2638.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (extractedValue_3009_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 93)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 93)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)) ;
                      }
                    }
                    break ;
                  }
                }
              }
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_toOne:
            {
              GGS_lstring extractedValue_4393_typeName_0 ;
              GGS_propertyAccessibility extractedValue_4426_accessibility_1 ;
              GGS_bool extractedValue_4441__2 ;
              GGS_toOneOppositeRelationship extractedValue_4444_opposite_3 ;
              GGS_bool extractedValue_4454__4 ;
              enumerator_2638.current_mKind (HERE).getAssociatedValuesFor_toOne (extractedValue_4393_typeName_0, extractedValue_4426_accessibility_1, extractedValue_4441__2, extractedValue_4444_opposite_3, extractedValue_4454__4) ;
              GalgasBool test_10 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_10) {
                test_10 = extractedValue_4426_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.ggs", 97)).boolEnum () ;
                if (GalgasBool::boolTrue == test_10) {
                  var_node_1993.plusAssignOperation(GGS_string ("|<").add_operation (enumerator_2638.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (GGS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (extractedValue_4393_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (GGS_string ("\? "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (enumerator_2638.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 98)) ;
                  switch (extractedValue_4444_opposite_3.enumValue ()) {
                  case GGS_toOneOppositeRelationship::Enumeration::invalid:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_none:
                    {
                      GalgasBool test_11 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_11) {
                        test_11 = var_reachableEntityNameSet_1689.getter_hasKey (extractedValue_4393_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 101)).operator_not (SOURCE_FILE ("graphviz.ggs", 101)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_11) {
                          {
                          var_reachableEntityNameSet_1689.setter_insert (extractedValue_4393_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 102)) ;
                          }
                          {
                          var_exploreArray_1751.setter_append (extractedValue_4393_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 103)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1838.setter_append (GGS_string ("  ").add_operation (var_entityName_1973, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (enumerator_2638.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (extractedValue_4393_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (extractedValue_4393_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)) ;
                      }
                    }
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToMany:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToOne:
                    {
                      GGS_lstring extractedValue_5069_oppositeName_0 ;
                      extractedValue_4444_opposite_3.getAssociatedValuesFor_oppositeIsToOne (extractedValue_5069_oppositeName_0) ;
                      GalgasBool test_12 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_12) {
                        test_12 = var_reachableEntityNameSet_1689.getter_hasKey (extractedValue_4393_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 109)).operator_not (SOURCE_FILE ("graphviz.ggs", 109)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_12) {
                          {
                          var_reachableEntityNameSet_1689.setter_insert (extractedValue_4393_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 110)) ;
                          }
                          {
                          var_exploreArray_1751.setter_append (extractedValue_4393_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 111)) ;
                          }
                        }
                      }
                      GalgasBool test_13 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_13) {
                        test_13 = GGS_bool (ComparisonKind::greaterThan, enumerator_2638.current_lkey (HERE).readProperty_string ().objectCompare (extractedValue_5069_oppositeName_0.readProperty_string ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_13) {
                          {
                          var_arrowList_1838.setter_append (GGS_string ("  ").add_operation (var_entityName_1973, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (enumerator_2638.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (extractedValue_4393_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (extractedValue_5069_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (GGS_string (" [dir=both arrowtail=onormal arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)) ;
                          }
                        }
                      }
                    }
                    break ;
                  }
                }
              }
            }
            break ;
          }
          enumerator_2638.gotoNextObject () ;
        }
        var_node_1993.plusAssignOperation(GGS_string ("\"]"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 121)) ;
        {
        var_nodeList_1806.setter_append (var_node_1993, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 122)) ;
        }
      }
    }
  }
  GGS_string var_s_5654 = GGS_string ("digraph G {\n") ;
  var_s_5654.plusAssignOperation(GGS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 126)) ;
  var_s_5654.plusAssignOperation(GGS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 127)) ;
  UpEnumerator_stringlist enumerator_5775 (var_nodeList_1806) ;
  while (enumerator_5775.hasCurrentObject ()) {
    var_s_5654.plusAssignOperation(enumerator_5775.current_mValue (HERE).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 129)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 129)) ;
    enumerator_5775.gotoNextObject () ;
  }
  UpEnumerator_stringlist enumerator_5832 (var_arrowList_1838) ;
  while (enumerator_5832.hasCurrentObject ()) {
    var_s_5654.plusAssignOperation(enumerator_5832.current_mValue (HERE).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 132)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 132)) ;
    enumerator_5832.gotoNextObject () ;
  }
  var_s_5654.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 134)) ;
  GGS_string var_filePath_5904 = constinArgument_inSourceFileDirectory.add_operation (GGS_string ("/models/graph-"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 135)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 135)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 135)) ;
  GGS_string var_temp_5990 = var_filePath_5904.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("graphviz.ggs", 136)) ;
  var_temp_5990.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 136)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'graphvizRootEntityStrongAnalysis???'
//
//--------------------------------------------------------------------------------------------------

void routine_graphvizRootEntityStrongAnalysis_3F__3F__3F_ (const GGS_string constinArgument_inSourceFileDirectory,
                                                           const GGS_semanticContext constinArgument_inSemanticContext,
                                                           const GGS_string constinArgument_inRootEntityName,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 151)) ;
  temp_0.plusPlusAssignOperation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.ggs", 151)) ;
  GGS_stringset var_reachableEntityNameSet_6734 = temp_0 ;
  GGS_stringlist temp_1 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 152)) ;
  temp_1.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (constinArgument_inRootEntityName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("graphviz.ggs", 152)) ;
  GGS_stringlist var_exploreArray_6796 = temp_1 ;
  GGS_stringlist temp_2 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 153)) ;
  GGS_stringlist var_nodeList_6851 = temp_2 ;
  GGS_stringlist temp_3 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 154)) ;
  GGS_stringlist var_arrowList_6883 = temp_3 ;
  GGS_entityStrongReferenceGraph var_entityStrongReferenceGraph_6932 = GGS_entityStrongReferenceGraph::init (inCompiler COMMA_HERE) ;
  if (constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 156)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 156)).isValid ()) {
    uint32_t variant_6967 = constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 156)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 156)).uintValue () ;
    bool loop_6967 = true ;
    while (loop_6967) {
      loop_6967 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_6796.getter_count (SOURCE_FILE ("graphviz.ggs", 156)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_6967) {
        loop_6967 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_6796.getter_count (SOURCE_FILE ("graphviz.ggs", 156)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_6967 && (0 == variant_6967)) {
        loop_6967 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("graphviz.ggs", 156)) ;
      }
      if (loop_6967) {
        variant_6967 -= 1 ;
        GGS_string var_entityName_7085 ;
        {
        var_exploreArray_6796.setter_popLast (var_entityName_7085, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 157)) ;
        }
        {
        var_nodeList_6851.setter_append (var_entityName_7085, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 158)) ;
        }
        {
        var_entityStrongReferenceGraph_6932.setter_addNode (GGS_lstring::init_21__21_ (var_entityName_7085, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 159)), inCompiler COMMA_HERE), var_entityName_7085, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 159)) ;
        }
        GGS_classKind var_entityKind_7280 ;
        GGS_propertyMap var_propertyMap_7310 ;
        GGS_actionMap joker_7323_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_7323_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_7085.getter_nowhere (SOURCE_FILE ("graphviz.ggs", 160)), var_entityKind_7280, var_propertyMap_7310, joker_7323_2, joker_7323_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 160)) ;
        GGS_string var_superEntityName_7380 ;
        GGS_bool joker_7397_3 ; // Joker input parameter
        GGS_bool joker_7397_2 ; // Joker input parameter
        GGS_bool joker_7397_1 ; // Joker input parameter
        var_entityKind_7280.method_extractEntity (var_superEntityName_7380, joker_7397_3, joker_7397_2, joker_7397_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 161)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::notEqual, var_superEntityName_7380.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = var_reachableEntityNameSet_6734.getter_hasKey (var_superEntityName_7380 COMMA_SOURCE_FILE ("graphviz.ggs", 163)).operator_not (SOURCE_FILE ("graphviz.ggs", 163)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                {
                var_reachableEntityNameSet_6734.setter_insert (var_superEntityName_7380, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 164)) ;
                }
                {
                var_exploreArray_6796.setter_append (var_superEntityName_7380, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 165)) ;
                }
              }
            }
            {
            var_arrowList_6883.setter_append (var_superEntityName_7380.add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)).add_operation (var_entityName_7085, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)).add_operation (GGS_string (" [arrowtail=dot arrowhead=normal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)) ;
            }
            {
            var_entityStrongReferenceGraph_6932.setter_addEdge (GGS_lstring::init_21__21_ (var_superEntityName_7380, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 168)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (var_entityName_7085, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 168)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.ggs", 168)) ;
            }
          }
        }
        UpEnumerator_propertyMap enumerator_7868 (var_propertyMap_7310) ;
        while (enumerator_7868.hasCurrentObject ()) {
          switch (enumerator_7868.current_mKind (HERE).enumValue ()) {
          case GGS_propertyKind::Enumeration::invalid:
            break ;
          case GGS_propertyKind::Enumeration::enum_property:
            break ;
          case GGS_propertyKind::Enumeration::enum_arrayController:
            break ;
          case GGS_propertyKind::Enumeration::enum_selectionController:
            break ;
          case GGS_propertyKind::Enumeration::enum_toMany:
            {
              GGS_lstring extractedValue_8042_typeName_0 ;
              GGS_propertyAccessibility extractedValue_8075_accessibility_1 ;
              GGS_bool extractedValue_8091__2 ;
              GGS_toManyRelationshipOptionAST extractedValue_8091__3 ;
              enumerator_7868.current_mKind (HERE).getAssociatedValuesFor_toMany (extractedValue_8042_typeName_0, extractedValue_8075_accessibility_1, extractedValue_8091__2, extractedValue_8091__3) ;
              {
              var_arrowList_6883.setter_append (var_entityName_7085.add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)).add_operation (extractedValue_8042_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)) ;
              }
              {
              var_entityStrongReferenceGraph_6932.setter_addEdge (GGS_lstring::init_21__21_ (var_entityName_7085, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 177)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (extractedValue_8042_typeName_0.readProperty_string (), GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 177)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.ggs", 177)) ;
              }
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = extractedValue_8075_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.ggs", 178)).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  GalgasBool test_7 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_7) {
                    test_7 = var_reachableEntityNameSet_6734.getter_hasKey (extractedValue_8042_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 179)).operator_not (SOURCE_FILE ("graphviz.ggs", 179)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_7) {
                      {
                      var_reachableEntityNameSet_6734.setter_insert (extractedValue_8042_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 180)) ;
                      }
                      {
                      var_exploreArray_6796.setter_append (extractedValue_8042_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 181)) ;
                      }
                    }
                  }
                }
              }
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_toOne:
            {
              GGS_lstring extractedValue_8568_typeName_0 ;
              GGS_propertyAccessibility extractedValue_8601_accessibility_1 ;
              GGS_bool extractedValue_8616__2 ;
              GGS_toOneOppositeRelationship extractedValue_8619_opposite_3 ;
              GGS_bool extractedValue_8629_isWeak_4 ;
              enumerator_7868.current_mKind (HERE).getAssociatedValuesFor_toOne (extractedValue_8568_typeName_0, extractedValue_8601_accessibility_1, extractedValue_8616__2, extractedValue_8619_opposite_3, extractedValue_8629_isWeak_4) ;
              GalgasBool test_8 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_8) {
                test_8 = extractedValue_8629_isWeak_4.operator_not (SOURCE_FILE ("graphviz.ggs", 185)).boolEnum () ;
                if (GalgasBool::boolTrue == test_8) {
                  {
                  var_arrowList_6883.setter_append (var_entityName_7085.add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 186)).add_operation (extractedValue_8568_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 186)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 186)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 186)) ;
                  }
                  {
                  var_entityStrongReferenceGraph_6932.setter_addEdge (GGS_lstring::init_21__21_ (var_entityName_7085, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 187)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (extractedValue_8568_typeName_0.readProperty_string (), GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 187)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.ggs", 187)) ;
                  }
                }
              }
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = extractedValue_8601_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.ggs", 189)).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  switch (extractedValue_8619_opposite_3.enumValue ()) {
                  case GGS_toOneOppositeRelationship::Enumeration::invalid:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_none:
                    {
                      GalgasBool test_10 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_10) {
                        test_10 = var_reachableEntityNameSet_6734.getter_hasKey (extractedValue_8568_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 192)).operator_not (SOURCE_FILE ("graphviz.ggs", 192)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_10) {
                          {
                          var_reachableEntityNameSet_6734.setter_insert (extractedValue_8568_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 193)) ;
                          }
                          {
                          var_exploreArray_6796.setter_append (extractedValue_8568_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 194)) ;
                          }
                        }
                      }
                    }
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToMany:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToOne:
                    {
                      GGS_lstring extractedValue_9256__0 ;
                      extractedValue_8619_opposite_3.getAssociatedValuesFor_oppositeIsToOne (extractedValue_9256__0) ;
                      GalgasBool test_11 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_11) {
                        test_11 = var_reachableEntityNameSet_6734.getter_hasKey (extractedValue_8568_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 198)).operator_not (SOURCE_FILE ("graphviz.ggs", 198)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_11) {
                          {
                          var_reachableEntityNameSet_6734.setter_insert (extractedValue_8568_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 199)) ;
                          }
                          {
                          var_exploreArray_6796.setter_append (extractedValue_8568_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 200)) ;
                          }
                        }
                      }
                    }
                    break ;
                  }
                }
              }
            }
            break ;
          }
          enumerator_7868.gotoNextObject () ;
        }
      }
    }
  }
  GGS_string var_s_9518 = GGS_string ("digraph G {\n") ;
  var_s_9518.plusAssignOperation(GGS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 209)) ;
  var_s_9518.plusAssignOperation(GGS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 210)) ;
  UpEnumerator_stringlist enumerator_9639 (var_nodeList_6851) ;
  while (enumerator_9639.hasCurrentObject ()) {
    var_s_9518.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_9639.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 212)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 212)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 212)) ;
    enumerator_9639.gotoNextObject () ;
  }
  UpEnumerator_stringlist enumerator_9703 (var_arrowList_6883) ;
  while (enumerator_9703.hasCurrentObject ()) {
    var_s_9518.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_9703.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 215)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 215)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 215)) ;
    enumerator_9703.gotoNextObject () ;
  }
  var_s_9518.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 217)) ;
  GGS_string var_filePath_9782 = constinArgument_inSourceFileDirectory.add_operation (GGS_string ("/models/strong-"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 218)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 218)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 218)) ;
  GGS_string var_temp_9869 = var_filePath_9782.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("graphviz.ggs", 219)) ;
  var_temp_9869.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 219)) ;
  GGS_bool joker_9991 ; // Joker input parameter
  var_s_9518.method_writeToFileWhenDifferentContents (var_filePath_9782, joker_9991, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 220)) ;
  var_filePath_9782 = constinArgument_inSourceFileDirectory.add_operation (GGS_string ("/models/strong-dep-"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 222)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 222)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 222)) ;
  GGS_string var_temp_32__10105 = var_entityStrongReferenceGraph_6932.getter_graphviz (SOURCE_FILE ("graphviz.ggs", 223)) ;
  GGS_bool joker_10201 ; // Joker input parameter
  var_temp_32__10105.method_writeToFileWhenDifferentContents (var_filePath_9782, joker_10201, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 223)) ;
  GGS_stringlist var_undefinedNodeList_10243 = var_entityStrongReferenceGraph_6932.getter_undefinedNodeKeyList (SOURCE_FILE ("graphviz.ggs", 225)) ;
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::greaterThan, var_undefinedNodeList_10243.getter_count (SOURCE_FILE ("graphviz.ggs", 226)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      GGS_string var_s_10357 = GGS_string ("for ").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 227)).add_operation (GGS_string (" graph , the following entities are not defined"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 227)) ;
      UpEnumerator_stringlist enumerator_10448 (var_undefinedNodeList_10243) ;
      while (enumerator_10448.hasCurrentObject ()) {
        var_s_10357.plusAssignOperation(GGS_string ("\n -- ").add_operation (enumerator_10448.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 229)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 229)) ;
        enumerator_10448.gotoNextObject () ;
      }
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 231)), var_s_10357, fixItArray13  COMMA_SOURCE_FILE ("graphviz.ggs", 231)) ;
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    test_14 = GGS_bool (ComparisonKind::equal, var_undefinedNodeList_10243.getter_count (SOURCE_FILE ("graphviz.ggs", 234)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      GGS_lstringlist temp_15 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 236)) ;
      temp_15.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (GGS_lstring::init_21__21_ (constinArgument_inRootEntityName, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 236)), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("graphviz.ggs", 236)) ;
      GGS_stringset temp_16 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 236)) ;
      GGS_lstringlist var_accessibleNodeList_10614 = var_entityStrongReferenceGraph_6932.getter_accessibleNodesFrom (temp_15, temp_16, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 235)) ;
      GGS_stringset var_accessibleNodeSet_10737 = GGS_stringset::class_func_setWithLStringList (var_accessibleNodeList_10614  COMMA_SOURCE_FILE ("graphviz.ggs", 237)) ;
      UpEnumerator_stringlist enumerator_10817 (var_nodeList_6851) ;
      while (enumerator_10817.hasCurrentObject ()) {
        GalgasBool test_17 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_17) {
          test_17 = var_accessibleNodeSet_10737.getter_hasKey (enumerator_10817.current_mValue (HERE) COMMA_SOURCE_FILE ("graphviz.ggs", 239)).operator_not (SOURCE_FILE ("graphviz.ggs", 239)).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            GenericArray <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 240)), enumerator_10817.current_mValue (HERE).add_operation (GGS_string (" entity is not reachable via strong reference from "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 240)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 240)), fixItArray18  COMMA_SOURCE_FILE ("graphviz.ggs", 240)) ;
          }
        }
        enumerator_10817.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = GGS_bool (ComparisonKind::equal, var_undefinedNodeList_10243.getter_count (SOURCE_FILE ("graphviz.ggs", 245)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      GGS_lstringlist var_unsortedNodeList_11153 ;
      GGS_stringlist joker_11131 ; // Joker input parameter
      var_entityStrongReferenceGraph_6932.method_circularities (joker_11131, var_unsortedNodeList_11153 COMMA_SOURCE_FILE ("graphviz.ggs", 246)) ;
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        test_20 = GGS_bool (ComparisonKind::greaterThan, var_unsortedNodeList_11153.getter_count (SOURCE_FILE ("graphviz.ggs", 247)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          GGS_string var_s_11220 = GGS_string ("for ").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 248)).add_operation (GGS_string (" graph, "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 248)).add_operation (var_unsortedNodeList_11153.getter_count (SOURCE_FILE ("graphviz.ggs", 248)).getter_string (SOURCE_FILE ("graphviz.ggs", 248)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 248)) ;
          var_s_11220.plusAssignOperation(GGS_string (" entities are involved in a strong reference cycle"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 249)) ;
          UpEnumerator_lstringlist enumerator_11363 (var_unsortedNodeList_11153) ;
          while (enumerator_11363.hasCurrentObject ()) {
            var_s_11220.plusAssignOperation(GGS_string ("\n -- ").add_operation (enumerator_11363.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 251)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 251)) ;
            enumerator_11363.gotoNextObject () ;
          }
          GenericArray <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.ggs", 253)), var_s_11220, fixItArray21  COMMA_SOURCE_FILE ("graphviz.ggs", 253)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selectionControllerDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selectionControllerDeclarationAST temp_0 = this ;
  const GGS_selectionControllerDeclarationAST temp_1 = this ;
  const GGS_selectionControllerDeclarationAST temp_2 = this ;
  GGS_lstring var_node_687 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 16)).add_operation (temp_1.readProperty_mSelectionControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 16)), temp_2.readProperty_mSelectionControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_selectionControllerDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_687, temp_3, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 19)) ;
  }
  {
  const GGS_selectionControllerDeclarationAST temp_4 = this ;
  const GGS_selectionControllerDeclarationAST temp_5 = this ;
  const GGS_selectionControllerDeclarationAST temp_6 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_687, GGS_lstring::init_21__21_ (temp_4.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 20)).add_operation (temp_5.readProperty_mModelControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 20)), temp_6.readProperty_mModelControllerName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("selection-controller.ggs", 20)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectionControllerDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_selectionControllerDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_selectionControllerDeclarationAST temp_0 = this ;
  const GGS_selectionControllerDeclarationAST temp_1 = this ;
  const GGS_selectionControllerDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 26)).add_operation (temp_1.readProperty_mSelectionControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 26)), temp_2.readProperty_mSelectionControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selectionControllerDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selectionControllerDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_3023 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_propertyKind var_propertyKind_3234 ;
  const GGS_selectionControllerDeclarationAST temp_1 = this ;
  GGS_actionMap joker_3248_2 ; // Joker input parameter
  GGS_bool joker_3248_1 ; // Joker input parameter
  var_entry_3023.readProperty_mPropertyMap ().method_searchKey (temp_1.readProperty_mModelControllerName (), var_propertyKind_3234, joker_3248_2, joker_3248_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 71)) ;
  switch (var_propertyKind_3234.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_3297__0 ;
      GGS_propertyAccessibility extractedValue_3297__1 ;
      var_propertyKind_3234.getAssociatedValuesFor_property (extractedValue_3297__0, extractedValue_3297__1) ;
      const GGS_selectionControllerDeclarationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mModelControllerName ().readProperty_location (), GGS_string ("an array controller is required here"), fixItArray3  COMMA_SOURCE_FILE ("selection-controller.ggs", 74)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_3399__0 ;
      GGS_propertyAccessibility extractedValue_3399__1 ;
      GGS_bool extractedValue_3399__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_3399__3 ;
      var_propertyKind_3234.getAssociatedValuesFor_toMany (extractedValue_3399__0, extractedValue_3399__1, extractedValue_3399__2, extractedValue_3399__3) ;
      const GGS_selectionControllerDeclarationAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mModelControllerName ().readProperty_location (), GGS_string ("an array controller is required here"), fixItArray5  COMMA_SOURCE_FILE ("selection-controller.ggs", 76)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_3500__0 ;
      GGS_propertyAccessibility extractedValue_3500__1 ;
      GGS_bool extractedValue_3500__2 ;
      GGS_toOneOppositeRelationship extractedValue_3500__3 ;
      GGS_bool extractedValue_3500__4 ;
      var_propertyKind_3234.getAssociatedValuesFor_toOne (extractedValue_3500__0, extractedValue_3500__1, extractedValue_3500__2, extractedValue_3500__3, extractedValue_3500__4) ;
      const GGS_selectionControllerDeclarationAST temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mModelControllerName ().readProperty_location (), GGS_string ("an array controller is required here"), fixItArray7  COMMA_SOURCE_FILE ("selection-controller.ggs", 78)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_3614__0 ;
      var_propertyKind_3234.getAssociatedValuesFor_selectionController (extractedValue_3614__0) ;
      const GGS_selectionControllerDeclarationAST temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mModelControllerName ().readProperty_location (), GGS_string ("an array controller is required here"), fixItArray9  COMMA_SOURCE_FILE ("selection-controller.ggs", 80)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_3725__0 ;
      GGS_bool extractedValue_3725__1 ;
      var_propertyKind_3234.getAssociatedValuesFor_arrayController (extractedValue_3725__0, extractedValue_3725__1) ;
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_selectionControllerDeclarationAST temp_11 = this ;
        test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mModelControllerPropertyName ().readProperty_string ().objectCompare (GGS_string ("selectedArray"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_selectionControllerDeclarationAST temp_12 = this ;
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mModelControllerPropertyName ().readProperty_location (), GGS_string ("'selectedArray' is required here"), fixItArray13  COMMA_SOURCE_FILE ("selection-controller.ggs", 83)) ;
        }
      }
      const GGS_selectionControllerDeclarationAST temp_14 = this ;
      GGS_propertyKind var_kind_3909 = GGS_propertyKind::class_func_selectionController (temp_14.readProperty_mSelectionEntityName ().readProperty_string ()  COMMA_SOURCE_FILE ("selection-controller.ggs", 85)) ;
      {
      const GGS_selectionControllerDeclarationAST temp_15 = this ;
      var_entry_3023.mProperty_mPropertyMap.setter_insertKey (temp_15.readProperty_mSelectionControllerName (), var_kind_3909, GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 86)) ;
      }
      {
      const GGS_selectionControllerDeclarationAST temp_16 = this ;
      const GGS_selectionControllerDeclarationAST temp_17 = this ;
      const GGS_selectionControllerDeclarationAST temp_18 = this ;
      const GGS_selectionControllerDeclarationAST temp_19 = this ;
      var_entry_3023.mProperty_mPropertyGenerationList.setter_append (GGS_selectionControllerPropertyGeneration::init_21__21__21__21_ (temp_16.readProperty_mSelectionControllerName ().readProperty_string (), temp_17.readProperty_mClassName ().readProperty_string (), temp_18.readProperty_mModelControllerName ().readProperty_string (), temp_19.readProperty_mModelControllerPropertyName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 87)) ;
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_3023, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 95)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selectionControllerDeclarationAST fourthAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::method_fourthAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                         GGS_generationStruct & ioArgument_ioGeneration,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind var_superClassKind_6033 ;
  GGS_propertyMap var_propertyMap_6054 ;
  const GGS_selectionControllerDeclarationAST temp_0 = this ;
  GGS_actionMap joker_6067_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_6067_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mClassName (), var_superClassKind_6033, var_propertyMap_6054, joker_6067_2, joker_6067_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 131)) ;
  GGS_propertyKind var_propertyKind_6129 ;
  const GGS_selectionControllerDeclarationAST temp_1 = this ;
  GGS_actionMap joker_6143_2 ; // Joker input parameter
  GGS_bool joker_6143_1 ; // Joker input parameter
  var_propertyMap_6054.method_searchKey (temp_1.readProperty_mModelControllerName (), var_propertyKind_6129, joker_6143_2, joker_6143_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 132)) ;
  switch (var_propertyKind_6129.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_6297_typeName_0 ;
      GGS_bool extractedValue_6307__1 ;
      var_propertyKind_6129.getAssociatedValuesFor_arrayController (extractedValue_6297_typeName_0, extractedValue_6307__1) ;
      GGS_propertyMap var_selectionObservablePropertyMap_6413 ;
      GGS_propertyGenerationList var_selectionGenerationList_6468 ;
      const GGS_selectionControllerDeclarationAST temp_2 = this ;
      GGS_classKind joker_6397 ; // Joker input parameter
      GGS_actionMap joker_6452 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mSelectionEntityName (), joker_6397, var_selectionObservablePropertyMap_6413, joker_6452, var_selectionGenerationList_6468, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 139)) ;
      {
      const GGS_selectionControllerDeclarationAST temp_3 = this ;
      const GGS_selectionControllerDeclarationAST temp_4 = this ;
      const GGS_selectionControllerDeclarationAST temp_5 = this ;
      const GGS_selectionControllerDeclarationAST temp_6 = this ;
      const GGS_selectionControllerDeclarationAST temp_7 = this ;
      ioArgument_ioGeneration.mProperty_mSelectionControllerListForGeneration.setter_append (temp_3.readProperty_mClassName ().readProperty_string (), temp_4.readProperty_mSelectionControllerName ().readProperty_string (), temp_5.readProperty_mModelControllerName ().readProperty_string (), temp_6.readProperty_mModelControllerPropertyName ().readProperty_string (), extractedValue_6297_typeName_0.readProperty_string (), temp_7.readProperty_mSelectionEntityName ().readProperty_string (), var_selectionObservablePropertyMap_6413, var_selectionGenerationList_6468, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 146)) ;
      }
      {
      ioArgument_ioGeneration.mProperty_mToManyClassImplementations.setter_insert (extractedValue_6297_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 156)) ;
      }
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_selectionControllerDeclarationAST temp_9 = this ;
        test_8 = GGS_bool (ComparisonKind::notEqual, extractedValue_6297_typeName_0.readProperty_string ().objectCompare (temp_9.readProperty_mSelectionEntityName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          {
          const GGS_selectionControllerDeclarationAST temp_10 = this ;
          ioArgument_ioGeneration.mProperty_mToManyClassImplementations.setter_insert (temp_10.readProperty_mSelectionEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 158)) ;
          }
          {
          const GGS_selectionControllerDeclarationAST temp_11 = this ;
          ioArgument_ioGeneration.mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_.setter_insert (temp_11.readProperty_mSelectionEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 159)) ;
          }
        }
      }
      const GGS_selectionControllerDeclarationAST temp_12 = this ;
      GGS_string var_testedTypeName_7227 = temp_12.readProperty_mSelectionEntityName ().readProperty_string () ;
      if (GGS_uint::class_func_max (SOURCE_FILE ("selection-controller.ggs", 162)).isValid ()) {
        uint32_t variant_7282 = GGS_uint::class_func_max (SOURCE_FILE ("selection-controller.ggs", 162)).uintValue () ;
        bool loop_7282 = true ;
        while (loop_7282) {
          loop_7282 = GGS_bool (ComparisonKind::notEqual, extractedValue_6297_typeName_0.readProperty_string ().objectCompare (var_testedTypeName_7227)).operator_and (GGS_bool (ComparisonKind::notEqual, var_testedTypeName_7227.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("selection-controller.ggs", 162)).isValid () ;
          if (loop_7282) {
            loop_7282 = GGS_bool (ComparisonKind::notEqual, extractedValue_6297_typeName_0.readProperty_string ().objectCompare (var_testedTypeName_7227)).operator_and (GGS_bool (ComparisonKind::notEqual, var_testedTypeName_7227.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("selection-controller.ggs", 162)).boolValue () ;
          }
          if (loop_7282 && (0 == variant_7282)) {
            loop_7282 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("selection-controller.ggs", 162)) ;
          }
          if (loop_7282) {
            variant_7282 -= 1 ;
            GalgasBool test_13 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_13) {
              const GGS_selectionControllerDeclarationAST temp_14 = this ;
              test_13 = GGS_bool (ComparisonKind::notEqual, extractedValue_6297_typeName_0.readProperty_string ().objectCompare (temp_14.readProperty_mSelectionEntityName ().readProperty_string ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                switch (var_superClassKind_6033.enumValue ()) {
                case GGS_classKind::Enumeration::invalid:
                  break ;
                case GGS_classKind::Enumeration::enum_prefs:
                  {
                    var_testedTypeName_7227 = GGS_string::makeEmptyString () ;
                  }
                  break ;
                case GGS_classKind::Enumeration::enum_atomic:
                  {
                    GGS_typeKind extractedValue_7542__0 ;
                    var_superClassKind_6033.getAssociatedValuesFor_atomic (extractedValue_7542__0) ;
                    var_testedTypeName_7227 = GGS_string::makeEmptyString () ;
                  }
                  break ;
                case GGS_classKind::Enumeration::enum_document:
                  {
                    GGS_lstring extractedValue_7602__0 ;
                    var_superClassKind_6033.getAssociatedValuesFor_document (extractedValue_7602__0) ;
                    var_testedTypeName_7227 = GGS_string::makeEmptyString () ;
                  }
                  break ;
                case GGS_classKind::Enumeration::enum_entity:
                  {
                    GGS_string extractedValue_7668_superOfSuperEntity_0 ;
                    GGS_bool extractedValue_7689__1 ;
                    GGS_bool extractedValue_7689__2 ;
                    GGS_bool extractedValue_7689__3 ;
                    var_superClassKind_6033.getAssociatedValuesFor_entity (extractedValue_7668_superOfSuperEntity_0, extractedValue_7689__1, extractedValue_7689__2, extractedValue_7689__3) ;
                    var_testedTypeName_7227 = extractedValue_7668_superOfSuperEntity_0 ;
                    GalgasBool test_15 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_15) {
                      test_15 = GGS_bool (ComparisonKind::equal, var_testedTypeName_7227.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                      if (GalgasBool::boolTrue == test_15) {
                        const GGS_selectionControllerDeclarationAST temp_16 = this ;
                        GenericArray <FixItDescription> fixItArray17 ;
                        inCompiler->emitSemanticError (temp_16.readProperty_mSelectionEntityName ().readProperty_location (), GGS_string ("This entity is not descendant of ").add_operation (extractedValue_6297_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 174)), fixItArray17  COMMA_SOURCE_FILE ("selection-controller.ggs", 174)) ;
                      }
                    }
                  }
                  break ;
                }
              }
            }
          }
        }
      }
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectionControllerPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_selectionControllerPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                                       const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                                       const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("selection-controller.ggs", 198)), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 198)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 198)) ;
  const GGS_selectionControllerPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   Selection controller: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 199)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 199)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.ggs", 199)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("selection-controller.ggs", 200)), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 200)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 200)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.ggs", 200)) ;
  const GGS_selectionControllerPropertyGeneration temp_1 = this ;
  const GGS_selectionControllerPropertyGeneration temp_2 = this ;
  const GGS_selectionControllerPropertyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 201)).add_operation (GGS_string (" = SelectionController_"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 201)).add_operation (temp_2.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 201)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 201)).add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 201)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 201)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.ggs", 201)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectionControllerPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_selectionControllerPropertyGeneration::getter_configurationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_selectionControllerPropertyGeneration temp_0 = this ;
  result_result = GGS_string ("  //--- Selection controller property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 207)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 207)) ;
  const GGS_selectionControllerPropertyGeneration temp_1 = this ;
  const GGS_selectionControllerPropertyGeneration temp_2 = this ;
  const GGS_selectionControllerPropertyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 208)).add_operation (GGS_string (".bind_selection (model: self."), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 208)).add_operation (temp_2.readProperty_mModelControllerName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 208)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 208)).add_operation (temp_3.readProperty_mModelControllerPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 209)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 209)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.ggs", 208)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectionControllerPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_selectionControllerPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'selectionControllerGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_selectionControllerGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_selectionControllerGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_selectionControllerGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_selectionControllerGenerationTemplate_0,
  0,
  gWrapperAllDirectories_selectionControllerGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'selectionControllerGenerationTemplate baseSelectionControllerImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_selectionControllerGenerationTemplate_baseSelectionControllerImplementation (Compiler * inCompiler,
                                                                                                            const GGS_string & in_OWNER_5F_NAME,
                                                                                                            const GGS_string & in_SELECTION_5F_CONTROLLER_5F_NAME,
                                                                                                            const GGS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                            const GGS_propertyMap & in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//    Base Selection Controller ") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString (" ") ;
  result.appendString (in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n@MainActor final class SelectionController_") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  init () {\n    noteObjectAllocation (self)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  deinit {\n    noteObjectDeallocation (self)\n  }\n\n") ;
  GGS_uint index_1030_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    UpEnumerator_propertyMap enumerator_1030 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP) ;
    while (enumerator_1030.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Selection observable property: ") ;
      result.appendString (enumerator_1030.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
      const GalgasBool test_0 = extensionGetter_isEntityType (enumerator_1030.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 29)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 29)).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        const GalgasBool test_1 = extensionGetter_isTransient (enumerator_1030.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 30)).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("  var ") ;
          result.appendString (enumerator_1030.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property = EBTransientProperty <") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_1030.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 31)).stringValue ()) ;
          result.appendString ("> ()\n\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("  var ") ;
          result.appendString (enumerator_1030.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property = EBComputedProperty_") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_1030.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 33)).stringValue ()) ;
          result.appendString (" ()\n\n") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1030.gotoNextObject () ;
      index_1030_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   BIND SELECTION\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mModel : ReadOnlyArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? = nil // SHOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_selection (model : ReadOnlyArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (") {\n    self.mModel = model\n") ;
  GGS_uint index_2181_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    UpEnumerator_propertyMap enumerator_2181 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP) ;
    while (enumerator_2181.hasCurrentObject ()) {
      const GalgasBool test_2 = extensionGetter_isEntityType (enumerator_2181.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 48)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 48)).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString ("    self.bind_property_") ;
        result.appendString (enumerator_2181.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (model: model)\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2181.gotoNextObject () ;
      index_2181_.increment () ;
    }
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   UNBIND SELECTION\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  /* final func unbind_selection () {\n") ;
  GGS_uint index_2644_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    UpEnumerator_propertyMap enumerator_2644 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP) ;
    while (enumerator_2644.hasCurrentObject ()) {
      const GalgasBool test_3 = extensionGetter_isEntityType (enumerator_2644.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 61)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 61)).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("  //--- ") ;
        result.appendString (enumerator_2644.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("\n    self.") ;
        result.appendString (enumerator_2644.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_property.mReadModelFunction = nil \n") ;
        const GalgasBool test_4 = extensionGetter_isTransient (enumerator_2644.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 64)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 64)).boolEnum () ;
        switch (test_4) {
        case GalgasBool::boolTrue : {
          result.appendString ("    self.") ;
          result.appendString (enumerator_2644.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property.mWriteModelFunction = nil \n") ;
          } break ;
        case GalgasBool::boolFalse : {
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        result.appendString ("    self.mModel\?.toMany_") ;
        result.appendString (enumerator_2644.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_StopsBeingObserved (by: self.") ;
        result.appendString (enumerator_2644.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_property)\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2644.gotoNextObject () ;
      index_2644_.increment () ;
    }
  }
  result.appendString ("  //---\n    self.mModel = nil\n  } */\n\n") ;
  GGS_uint index_3143_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    UpEnumerator_propertyMap enumerator_3143 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP) ;
    while (enumerator_3143.hasCurrentObject ()) {
      const GalgasBool test_5 = extensionGetter_isEntityType (enumerator_3143.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 75)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 75)).boolEnum () ;
      switch (test_5) {
      case GalgasBool::boolTrue : {
        result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final func bind_property_") ;
        result.appendString (enumerator_3143.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (model : ReadOnlyArrayOf_") ;
        result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
        result.appendString (") {\n    model.toMany_") ;
        result.appendString (enumerator_3143.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_StartsBeingObserved (by: self.") ;
        result.appendString (enumerator_3143.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_property)\n    self.") ;
        result.appendString (enumerator_3143.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_property.mReadModelFunction = { [weak self] in\n      if let model = self\?.mModel {\n        switch model.selection {\n        case .empty :\n          return .empty\n        case .multiple :\n          return .multiple\n        case .single (let v) :\n          var s = Set <") ;
        result.appendString (extensionGetter_swiftTypeName (enumerator_3143.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 87)).stringValue ()) ;
        result.appendString ("> ()\n          var isMultipleSelection = false\n          for object in v {\n            switch object.") ;
        result.appendString (enumerator_3143.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_property.selection {\n            case .empty :\n              return .empty\n            case .multiple :\n              isMultipleSelection = true\n            case .single (let vProp) :\n              s.insert (vProp)\n            }\n          }\n          if isMultipleSelection {\n            return .multiple\n          }else if s.count == 0 {\n            return .empty\n          }else if s.count == 1 {\n            return .single (s.first!)\n          }else{\n            return .multiple\n          }\n        }\n      }else{\n        return .empty\n      }\n    }\n") ;
        const GalgasBool test_6 = extensionGetter_isTransient (enumerator_3143.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 113)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 113)).boolEnum () ;
        switch (test_6) {
        case GalgasBool::boolTrue : {
          result.appendString ("    self.") ;
          result.appendString (enumerator_3143.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property.mWriteModelFunction = { [weak self] (inValue : ") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_3143.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 114)).stringValue ()) ;
          result.appendString (") in\n      if let model = self\?.mModel {\n        switch model.selection {\n        case .empty, .multiple :\n          break\n        case .single (let v) :\n          for object in v {\n            object.") ;
          result.appendString (enumerator_3143.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property.setProp (inValue)\n          }\n        }\n      }\n    }\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        result.appendString ("  }\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_3143.gotoNextObject () ;
      index_3143_.increment () ;
    }
  }
  result.appendString ("\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'selectionControllerGenerationTemplate derivedSelectionControllerImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_selectionControllerGenerationTemplate_derivedSelectionControllerImplementation (Compiler * inCompiler,
                                                                                                               const GGS_string & in_OWNER_5F_NAME,
                                                                                                               const GGS_string & in_SELECTION_5F_CONTROLLER_5F_NAME,
                                                                                                               const GGS_string & in_BASE_5F_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                               const GGS_string & in_DERIVED_5F_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                               const GGS_propertyGenerationList & in_PROPERTY_5F_GENERATION_5F_LIST,
                                                                                                               const GGS_bool & /* in_HAS_5F_ATOMIC_5F_PROPERTIES */
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//    Derived selection controller ") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString (" ") ;
  result.appendString (in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n@MainActor final class SelectionController_") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  init () {\n    noteObjectAllocation (self)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  deinit {\n    noteObjectDeallocation (self)\n  }\n\n") ;
  GGS_uint index_998_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_998 (in_PROPERTY_5F_GENERATION_5F_LIST) ;
    while (enumerator_998.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_declarationInSelectionControllerCode ((const cPtr_propertyGeneration *) enumerator_998.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 26)).stringValue ()) ;
      enumerator_998.gotoNextObject () ;
      index_998_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Selected array (not observable)\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedArray : EBReferenceArray <") ;
  result.appendString (in_DERIVED_5F_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> { return self.selectedArray_property.propval }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   BIND SELECTION\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   let selectedArray_property = TransientArrayOfSuperOf_") ;
  result.appendString (in_DERIVED_5F_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" <") ;
  result.appendString (in_BASE_5F_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_selection (model : ReadOnlyArrayOf_") ;
  result.appendString (in_BASE_5F_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (") {\n    self.selectedArray_property.setDataProvider (model)\n") ;
  GGS_uint index_2048_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_2048 (in_PROPERTY_5F_GENERATION_5F_LIST) ;
    while (enumerator_2048.hasCurrentObject ()) {
      const GalgasBool test_0 = GGS_bool (enumerator_2048.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GGS_bool (enumerator_2048.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_transientPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 46)).operator_or (GGS_bool (enumerator_2048.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_computedPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 47)).operator_or (GGS_bool (enumerator_2048.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicProxyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 48)).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("    self.bind_property_") ;
        result.appendString (enumerator_2048.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString (" ()\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2048.gotoNextObject () ;
      index_2048_.increment () ;
    }
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   UNBIND SELECTION\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  /* final func unbind_selection () {\n    self.selectedArray_property.setDataProvider (nil)\n") ;
  GGS_uint index_2712_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_2712 (in_PROPERTY_5F_GENERATION_5F_LIST) ;
    while (enumerator_2712.hasCurrentObject ()) {
      const GalgasBool test_1 = GGS_bool (enumerator_2712.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GGS_bool (enumerator_2712.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_computedPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 63)).operator_or (GGS_bool (enumerator_2712.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_transientPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 64)).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("  //--- ") ;
        result.appendString (enumerator_2712.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("\n    self.") ;
        result.appendString (enumerator_2712.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.mReadModelFunction = nil \n") ;
        const GalgasBool test_2 = GGS_bool (enumerator_2712.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GGS_bool (enumerator_2712.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_computedPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 68)).boolEnum () ;
        switch (test_2) {
        case GalgasBool::boolTrue : {
          result.appendString ("    self.") ;
          result.appendString (enumerator_2712.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString ("_property.mWriteModelFunction = nil \n") ;
          } break ;
        case GalgasBool::boolFalse : {
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        result.appendString ("    self.selectedArray_property.toMany_") ;
        result.appendString (enumerator_2712.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_StopsBeingObserved (by: self.") ;
        result.appendString (enumerator_2712.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property)\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2712.gotoNextObject () ;
      index_2712_.increment () ;
    }
  }
  result.appendString ("  } */\n\n") ;
  GGS_uint index_3416_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_3416 (in_PROPERTY_5F_GENERATION_5F_LIST) ;
    while (enumerator_3416.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_bindPropertyInSelectionController ((const cPtr_propertyGeneration *) enumerator_3416.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 77)).stringValue ()) ;
      enumerator_3416.gotoNextObject () ;
      index_3416_.increment () ;
    }
  }
  result.appendString ("\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateSelectionControllers??&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateSelectionControllers_3F__3F__26_ (const GGS_selectionControllerForGeneration constinArgument_inArrayControllerListForGeneration,
                                                       const GGS_string constinArgument_inOutputDirectory,
                                                       GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_selectionControllerForGeneration enumerator_11744 (constinArgument_inArrayControllerListForGeneration) ;
  while (enumerator_11744.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, enumerator_11744.current_mBaseTypeName (HERE).objectCompare (enumerator_11744.current_mSelectionTypeName (HERE))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_s_11865 = GGS_string (filewrapperTemplate_selectionControllerGenerationTemplate_baseSelectionControllerImplementation (inCompiler, enumerator_11744.current_mOwnerName (HERE), enumerator_11744.current_mSelectionControllerName (HERE), enumerator_11744.current_mBaseTypeName (HERE), enumerator_11744.current_mSelectionObservablePropertyMap (HERE) COMMA_SOURCE_FILE ("selection-controller.ggs", 265))) ;
        GGS_string var_fileName_12090 = GGS_string ("selectionController-").add_operation (enumerator_11744.current_mOwnerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 271)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 271)).add_operation (enumerator_11744.current_mSelectionControllerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 271)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 271)) ;
        {
        ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_12090, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 272)) ;
        }
        {
        GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_12090, var_s_11865, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 273)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_bool var_hasAtomicStoredProperties_12336 = GGS_bool (false) ;
      UpEnumerator_propertyGenerationList enumerator_12381 (enumerator_11744.current_mPropertyGenerationList (HERE)) ;
      bool bool_1 = var_hasAtomicStoredProperties_12336.operator_not (SOURCE_FILE ("selection-controller.ggs", 280)).isValidAndTrue () ;
      if (enumerator_12381.hasCurrentObject () && bool_1) {
        while (enumerator_12381.hasCurrentObject () && bool_1) {
          var_hasAtomicStoredProperties_12336 = GGS_bool (nullptr != dynamic_cast <const cPtr_atomicPropertyGeneration *> (enumerator_12381.current_mProperty (HERE).ptr ())) ;
          enumerator_12381.gotoNextObject () ;
          if (enumerator_12381.hasCurrentObject ()) {
            bool_1 = var_hasAtomicStoredProperties_12336.operator_not (SOURCE_FILE ("selection-controller.ggs", 280)).isValidAndTrue () ;
          }
        }
      }
      GGS_string var_s_12550 = GGS_string (filewrapperTemplate_selectionControllerGenerationTemplate_derivedSelectionControllerImplementation (inCompiler, enumerator_11744.current_mOwnerName (HERE), enumerator_11744.current_mSelectionControllerName (HERE), enumerator_11744.current_mBaseTypeName (HERE), enumerator_11744.current_mSelectionTypeName (HERE), enumerator_11744.current_mPropertyGenerationList (HERE), var_hasAtomicStoredProperties_12336 COMMA_SOURCE_FILE ("selection-controller.ggs", 283))) ;
      GGS_string var_fileName_12832 = GGS_string ("selectionController-").add_operation (enumerator_11744.current_mOwnerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 291)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 291)).add_operation (enumerator_11744.current_mSelectionControllerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 291)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 291)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_12832, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 292)) ;
      }
      {
      GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_12832, var_s_12550, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 293)) ;
      }
    }
    enumerator_11744.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@computedPropertyDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_computedPropertyDeclarationAST temp_0 = this ;
  const GGS_computedPropertyDeclarationAST temp_1 = this ;
  const GGS_computedPropertyDeclarationAST temp_2 = this ;
  GGS_lstring var_node_686 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 15)).add_operation (temp_1.readProperty_mComputedPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 15)), temp_2.readProperty_mComputedPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_computedPropertyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_686, temp_3, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 16)) ;
  }
  {
  const GGS_computedPropertyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_686, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("computed-property.ggs", 17)) ;
  }
  {
  const GGS_computedPropertyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_686, temp_5.readProperty_mComputedPropertyTypeName () COMMA_SOURCE_FILE ("computed-property.ggs", 18)) ;
  }
  const GGS_computedPropertyDeclarationAST temp_6 = this ;
  UpEnumerator_observablePropertyList enumerator_984 (temp_6.readProperty_mDependencyList ()) ;
  while (enumerator_984.hasCurrentObject ()) {
    switch (enumerator_984.current (HERE).readProperty_mObservableProperty ().enumValue ()) {
    case GGS_observablePropertyAST::Enumeration::invalid:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
      {
        GGS_lstring extractedValue_1068_propertyName_0 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootProperty (extractedValue_1068_propertyName_0) ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_computedPropertyDeclarationAST temp_8 = this ;
          test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            {
            const GGS_computedPropertyDeclarationAST temp_9 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_9.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 23)).add_operation (extractedValue_1068_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 23)), extractedValue_1068_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 23)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
      {
        GGS_lstring extractedValue_1296_propertyName_0 ;
        GGS_lstring extractedValue_1310__1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyWithOption (extractedValue_1296_propertyName_0, extractedValue_1310__1) ;
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_computedPropertyDeclarationAST temp_11 = this ;
          test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            {
            const GGS_computedPropertyDeclarationAST temp_12 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 27)).add_operation (extractedValue_1296_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 27)), extractedValue_1296_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 27)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
      {
        GGS_lstring extractedValue_1529_relationshipName_0 ;
        GGS_lstring extractedValue_1547__1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyRelationship (extractedValue_1529_relationshipName_0, extractedValue_1547__1) ;
        GalgasBool test_13 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_computedPropertyDeclarationAST temp_14 = this ;
          test_13 = GGS_bool (ComparisonKind::notEqual, temp_14.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_13) {
            {
            const GGS_computedPropertyDeclarationAST temp_15 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_15.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 31)).add_operation (extractedValue_1529_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 31)), extractedValue_1529_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 31)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
      {
        GGS_lstring extractedValue_1766_relationshipName_0 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyNone (extractedValue_1766_relationshipName_0) ;
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          const GGS_computedPropertyDeclarationAST temp_17 = this ;
          test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            {
            const GGS_computedPropertyDeclarationAST temp_18 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_18.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 35)).add_operation (extractedValue_1766_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 35)), extractedValue_1766_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 35)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
      {
        GGS_lstring extractedValue_2031_propertyName_0 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfProperty (extractedValue_2031_propertyName_0) ;
        {
        const GGS_computedPropertyDeclarationAST temp_19 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_19.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 39)).add_operation (extractedValue_2031_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 39)), extractedValue_2031_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 39)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
      {
        GGS_lstring extractedValue_2203_propertyName_0 ;
        GGS_lstring extractedValue_2217__1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyWithOption (extractedValue_2203_propertyName_0, extractedValue_2217__1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_20 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_20.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 41)).add_operation (extractedValue_2203_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 41)), extractedValue_2203_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 41)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
      {
        GGS_lstring extractedValue_2373_propertyName_0 ;
        GGS_lstring extractedValue_2387__1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyArray (extractedValue_2373_propertyName_0, extractedValue_2387__1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_21 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_21.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 43)).add_operation (extractedValue_2373_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 43)), extractedValue_2373_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 43)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
      {
        GGS_lstring extractedValue_2544_propertyName_0 ;
        GGS_lstring extractedValue_2558__1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyObject (extractedValue_2544_propertyName_0, extractedValue_2558__1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_22 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_22.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 45)).add_operation (extractedValue_2544_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 45)), extractedValue_2544_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 45)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
      {
        GGS_lstring extractedValue_2713_propertyName_0 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyNone (extractedValue_2713_propertyName_0) ;
        {
        const GGS_computedPropertyDeclarationAST temp_23 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_23.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 47)).add_operation (extractedValue_2713_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 47)), extractedValue_2713_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 47)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
      {
        GGS_lstring extractedValue_2876_propertyName_0 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_prefsProperty (extractedValue_2876_propertyName_0) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 49)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 49)).add_operation (extractedValue_2876_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 49)), extractedValue_2876_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 49)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
      {
        GGS_lstring extractedValue_3045_propertyName_0 ;
        GGS_lstring extractedValue_3059__1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_3045_propertyName_0, extractedValue_3059__1) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 51)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 51)).add_operation (extractedValue_3045_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 51)), extractedValue_3045_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 51)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
      {
        GGS_lstring extractedValue_3216_controllerName_0 ;
        GGS_lstring extractedValue_3239_propertyName_1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerProperty (extractedValue_3216_controllerName_0, extractedValue_3239_propertyName_1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_24 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_24.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 53)).add_operation (extractedValue_3216_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 53)), extractedValue_3216_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 53)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
      {
        GGS_lstring extractedValue_3425_controllerName_0 ;
        GGS_lstring extractedValue_3448_propertyName_1 ;
        GGS_lstring extractedValue_3469_secondaryPropertyName_2 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_3425_controllerName_0, extractedValue_3448_propertyName_1, extractedValue_3469_secondaryPropertyName_2) ;
        {
        const GGS_computedPropertyDeclarationAST temp_25 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_25.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 55)).add_operation (extractedValue_3425_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 55)), extractedValue_3425_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 55)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
      {
        GGS_lstring extractedValue_3660_controllerName_0 ;
        GGS_lstring extractedValue_3683_propertyName_1 ;
        GGS_lstring extractedValue_3704_secondaryPropertyName_2 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerAllProperties (extractedValue_3660_controllerName_0, extractedValue_3683_propertyName_1, extractedValue_3704_secondaryPropertyName_2) ;
        {
        const GGS_computedPropertyDeclarationAST temp_26 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_26.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 57)).add_operation (extractedValue_3660_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 57)), extractedValue_3660_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 57)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
      {
        GGS_lstring extractedValue_3893_controllerName_0 ;
        GGS_lstring extractedValue_3916_propertyName_1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerOneProperty (extractedValue_3893_controllerName_0, extractedValue_3916_propertyName_1) ;
        {
        const GGS_computedPropertyDeclarationAST temp_27 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (temp_27.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 59)).add_operation (extractedValue_3893_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 59)), extractedValue_3893_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 59)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_superProperty:
      {
        GGS_lstring extractedValue_4191_superEntityName_0 ;
        GGS_lstring extractedValue_4217_propertyName_1 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_superProperty (extractedValue_4191_superEntityName_0, extractedValue_4217_propertyName_1) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (extractedValue_4191_superEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 64)).add_operation (extractedValue_4217_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 64)), extractedValue_4217_propertyName_1.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 64)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
      {
        GGS_lstring extractedValue_4396_superEntityName_0 ;
        GGS_lstring extractedValue_4422_propertyName_1 ;
        GGS_abstractDefaultValue extractedValue_4436__2 ;
        enumerator_984.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_4396_superEntityName_0, extractedValue_4422_propertyName_1, extractedValue_4436__2) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_686, GGS_lstring::init_21__21_ (extractedValue_4396_superEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 66)).add_operation (extractedValue_4422_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 66)), extractedValue_4422_propertyName_1.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("computed-property.ggs", 66)) ;
        }
      }
      break ;
    }
    enumerator_984.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_computedPropertyDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_computedPropertyDeclarationAST temp_0 = this ;
  const GGS_computedPropertyDeclarationAST temp_1 = this ;
  const GGS_computedPropertyDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 74)).add_operation (temp_1.readProperty_mComputedPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 74)), temp_2.readProperty_mComputedPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@computedPropertyDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                     GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_computedPropertyDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_6555 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_classKind var_classKind_6701 ;
  const GGS_computedPropertyDeclarationAST temp_1 = this ;
  GGS_propertyMap joker_6712_3 ; // Joker input parameter
  GGS_actionMap joker_6712_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_6712_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mComputedPropertyTypeName (), var_classKind_6701, joker_6712_3, joker_6712_2, joker_6712_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 130)) ;
  switch (var_classKind_6701.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_computedPropertyDeclarationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("computed-property.ggs", 133)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_6852_kind_0 ;
      var_classKind_6701.getAssociatedValuesFor_atomic (extractedValue_6852_kind_0) ;
      {
      const GGS_computedPropertyDeclarationAST temp_4 = this ;
      var_entry_6555.mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mComputedPropertyName (), GGS_propertyKind::class_func_property (extractedValue_6852_kind_0, GGS_propertyAccessibility::class_func_computed (SOURCE_FILE ("computed-property.ggs", 137))  COMMA_SOURCE_FILE ("computed-property.ggs", 137)), GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 135)) ;
      }
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_7048__0 ;
      var_classKind_6701.getAssociatedValuesFor_document (extractedValue_7048__0) ;
      const GGS_computedPropertyDeclarationAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("computed-property.ggs", 142)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_7151__0 ;
      GGS_bool extractedValue_7151__1 ;
      GGS_bool extractedValue_7151__2 ;
      GGS_bool extractedValue_7151__3 ;
      var_classKind_6701.getAssociatedValuesFor_entity (extractedValue_7151__0, extractedValue_7151__1, extractedValue_7151__2, extractedValue_7151__3) ;
      const GGS_computedPropertyDeclarationAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("computed-property.ggs", 144)) ;
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_6555, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 146)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@computedPropertyDeclarationAST thirdAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::method_thirdAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                     GGS_generationStruct & ioArgument_ioGeneration,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind var_classKind_7791 ;
  const GGS_computedPropertyDeclarationAST temp_0 = this ;
  GGS_propertyMap joker_7802_3 ; // Joker input parameter
  GGS_actionMap joker_7802_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_7802_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mComputedPropertyTypeName (), var_classKind_7791, joker_7802_3, joker_7802_2, joker_7802_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 159)) ;
  GGS_typeKind var_typeKind_7839 ;
  switch (var_classKind_7791.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_computedPropertyDeclarationAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("computed-property.ggs", 164)) ;
      var_typeKind_7839.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_8001_kind_0 ;
      var_classKind_7791.getAssociatedValuesFor_atomic (extractedValue_8001_kind_0) ;
      var_typeKind_7839 = extractedValue_8001_kind_0 ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_8046__0 ;
      var_classKind_7791.getAssociatedValuesFor_document (extractedValue_8046__0) ;
      const GGS_computedPropertyDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("computed-property.ggs", 168)) ;
      var_typeKind_7839.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_8161__0 ;
      GGS_bool extractedValue_8161__1 ;
      GGS_bool extractedValue_8161__2 ;
      GGS_bool extractedValue_8161__3 ;
      var_classKind_7791.getAssociatedValuesFor_entity (extractedValue_8161__0, extractedValue_8161__1, extractedValue_8161__2, extractedValue_8161__3) ;
      const GGS_computedPropertyDeclarationAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mComputedPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("computed-property.ggs", 170)) ;
      var_typeKind_7839.drop () ; // Release error dropped variable
    }
    break ;
  }
  GGS_propertyMap var_rootProperties_8306 ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_computedPropertyDeclarationAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::equal, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      var_rootProperties_8306 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    const GGS_computedPropertyDeclarationAST temp_9 = this ;
    GGS_classKind joker_8461 ; // Joker input parameter
    GGS_actionMap joker_8482_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_8482_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_9.readProperty_mRootEntityName (), joker_8461, var_rootProperties_8306, joker_8482_2, joker_8482_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 177)) ;
  }
  GGS_classKind var_currentClassKind_8586 ;
  GGS_propertyMap var_properties_8609 ;
  const GGS_computedPropertyDeclarationAST temp_10 = this ;
  GGS_actionMap joker_8621_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_8621_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_10.readProperty_mClassName (), var_currentClassKind_8586, var_properties_8609, joker_8621_2, joker_8621_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 180)) ;
  GGS_transientDependencyListForGeneration temp_11 = GGS_transientDependencyListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 182)) ;
  GGS_transientDependencyListForGeneration var_dependencies_8701 = temp_11 ;
  const GGS_computedPropertyDeclarationAST temp_12 = this ;
  UpEnumerator_observablePropertyList enumerator_8726 (temp_12.readProperty_mDependencyList ()) ;
  while (enumerator_8726.hasCurrentObject ()) {
    GGS_propertyKind var_dependencyKind_8916 ;
    GGS_string var_swiftTypeStringForTransientFunctionArgument_8951 ;
    GGS_string var_protocolTypeName_9015 ;
    GGS_string var_defaultValueAsString_9052 ;
    extensionMethod_analyzeObservableProperty (enumerator_8726.current_mObservableProperty (HERE), var_rootProperties_8306, ioArgument_ioSemanticContext, var_properties_8609, var_dependencyKind_8916, var_swiftTypeStringForTransientFunctionArgument_8951, var_protocolTypeName_9015, var_defaultValueAsString_9052, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 184)) ;
    switch (var_dependencyKind_8916.enumValue ()) {
    case GGS_propertyKind::Enumeration::invalid:
      break ;
    case GGS_propertyKind::Enumeration::enum_property:
      break ;
    case GGS_propertyKind::Enumeration::enum_toMany:
      break ;
    case GGS_propertyKind::Enumeration::enum_toOne:
      break ;
    case GGS_propertyKind::Enumeration::enum_arrayController:
      {
        GGS_lstring extractedValue_9202__0 ;
        GGS_bool extractedValue_9202__1 ;
        var_dependencyKind_8916.getAssociatedValuesFor_arrayController (extractedValue_9202__0, extractedValue_9202__1) ;
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_8726.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 198)), GGS_string ("only an atomic property can be observed"), fixItArray13  COMMA_SOURCE_FILE ("computed-property.ggs", 198)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_selectionController:
      {
        GGS_string extractedValue_9322__0 ;
        var_dependencyKind_8916.getAssociatedValuesFor_selectionController (extractedValue_9322__0) ;
        GenericArray <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_8726.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 200)), GGS_string ("only an atomic property can be observed"), fixItArray14  COMMA_SOURCE_FILE ("computed-property.ggs", 200)) ;
      }
      break ;
    }
    {
    var_dependencies_8701.setter_append (enumerator_8726.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_8726.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 204)), var_swiftTypeStringForTransientFunctionArgument_8951, var_defaultValueAsString_9052, var_protocolTypeName_9015, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 202)) ;
    }
    enumerator_8726.gotoNextObject () ;
  }
  {
  const GGS_computedPropertyDeclarationAST temp_15 = this ;
  const GGS_computedPropertyDeclarationAST temp_16 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_transientRoutineGeneration::init_21__21__21__21__21_ (temp_15.readProperty_mClassName ().readProperty_string (), temp_16.readProperty_mComputedPropertyName ().readProperty_string (), var_typeKind_7839, GGS_string ("computed"), var_dependencies_8701, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 210)) ;
  }
  {
  const GGS_computedPropertyDeclarationAST temp_17 = this ;
  const GGS_computedPropertyDeclarationAST temp_18 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_computeRoutineGeneration::init_21__21__21__21_ (temp_17.readProperty_mClassName ().readProperty_string (), temp_18.readProperty_mComputedPropertyName ().readProperty_string (), var_typeKind_7839, var_dependencies_8701, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 219)) ;
  }
  const GGS_computedPropertyDeclarationAST temp_19 = this ;
  GGS_classMap_2E_element var_entry_10045 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_19.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_bool var_generate_10125 ;
  switch (var_currentClassKind_8586.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      var_generate_10125 = GGS_bool (true) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_10220__0 ;
      var_currentClassKind_8586.getAssociatedValuesFor_document (extractedValue_10220__0) ;
      var_generate_10125 = GGS_bool (true) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_10264__0 ;
      var_currentClassKind_8586.getAssociatedValuesFor_atomic (extractedValue_10264__0) ;
      var_generate_10125 = GGS_bool (true) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_10308__0 ;
      GGS_bool extractedValue_10311_graphic_1 ;
      GGS_bool extractedValue_10321__2 ;
      GGS_bool extractedValue_10321__3 ;
      var_currentClassKind_8586.getAssociatedValuesFor_entity (extractedValue_10308__0, extractedValue_10311_graphic_1, extractedValue_10321__2, extractedValue_10321__3) ;
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        test_20 = extractedValue_10311_graphic_1.boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          const GGS_computedPropertyDeclarationAST temp_21 = this ;
          const GGS_computedPropertyDeclarationAST temp_22 = this ;
          var_generate_10125 = GGS_bool (ComparisonKind::notEqual, temp_21.readProperty_mComputedPropertyName ().readProperty_string ().objectCompare (GGS_string ("selectionDisplay"))).operator_and (GGS_bool (ComparisonKind::notEqual, temp_22.readProperty_mComputedPropertyName ().readProperty_string ().objectCompare (GGS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("computed-property.ggs", 238)) ;
        }
      }
      if (GalgasBool::boolFalse == test_20) {
        var_generate_10125 = GGS_bool (true) ;
      }
    }
    break ;
  }
  {
  const GGS_computedPropertyDeclarationAST temp_23 = this ;
  const GGS_computedPropertyDeclarationAST temp_24 = this ;
  var_entry_10045.mProperty_mPropertyGenerationList.setter_append (GGS_computedPropertyGeneration::init_21__21__21__21__21_ (temp_23.readProperty_mComputedPropertyName ().readProperty_string (), temp_24.readProperty_mClassName ().readProperty_string (), var_typeKind_7839, var_dependencies_8701, var_generate_10125, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 243)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_10045, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 251)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedPropertyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 275)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 275)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 275)) ;
  const GGS_computedPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 276)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 276)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 276)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 277)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 277)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 277)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 277)) ;
  const GGS_computedPropertyGeneration temp_1 = this ;
  const GGS_computedPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 278)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 278)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 278)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 278)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 278)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 278)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedPropertyGeneration::getter_bindPropertyInSelectionController (Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 290)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 290)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 290)) ;
  const GGS_computedPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 291)).add_operation (GGS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 291)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 291)) ;
  const GGS_computedPropertyGeneration temp_1 = this ;
  const GGS_computedPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 292)).add_operation (GGS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 292)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 292)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 292)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 292)) ;
  const GGS_computedPropertyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 293)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 293)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 293)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 294)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 295)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 296)) ;
  result_result.plusAssignOperation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 297)) ;
  result_result.plusAssignOperation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 298)) ;
  result_result.plusAssignOperation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 299)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 300)) ;
  const GGS_computedPropertyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 301)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 301)).add_operation (GGS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 301)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 301)) ;
  result_result.plusAssignOperation(GGS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 302)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 303)) ;
  const GGS_computedPropertyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 304)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 304)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 304)) ;
  result_result.plusAssignOperation(GGS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 305)) ;
  result_result.plusAssignOperation(GGS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 306)) ;
  result_result.plusAssignOperation(GGS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 307)) ;
  result_result.plusAssignOperation(GGS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 308)) ;
  result_result.plusAssignOperation(GGS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 309)) ;
  result_result.plusAssignOperation(GGS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 310)) ;
  result_result.plusAssignOperation(GGS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 311)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 312)) ;
  result_result.plusAssignOperation(GGS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 313)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 314)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 315)) ;
  result_result.plusAssignOperation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 316)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 317)) ;
  result_result.plusAssignOperation(GGS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 318)) ;
  result_result.plusAssignOperation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 319)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 320)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 321)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 322)) ;
  result_result.plusAssignOperation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 323)) ;
  result_result.plusAssignOperation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 324)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 325)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 326)) ;
  const GGS_computedPropertyGeneration temp_6 = this ;
  const GGS_computedPropertyGeneration temp_7 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 328)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 328)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 328)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 328)).add_operation (GGS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 328)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 328)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 329)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 330)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 331)) ;
  result_result.plusAssignOperation(GGS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 332)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 333)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 334)) ;
  const GGS_computedPropertyGeneration temp_8 = this ;
  result_result.plusAssignOperation(GGS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 335)).add_operation (GGS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 335)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 335)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 336)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 337)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 338)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 339)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 340)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool constinArgument_inPreferences,
                                                                            const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                            const GGS_stringset constinArgument_inOverriddenTransients,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_computedPropertyGeneration temp_1 = this ;
    const GGS_computedPropertyGeneration temp_2 = this ;
    test_0 = temp_1.readProperty_mGenerate ().operator_and (constinArgument_inOverriddenTransients.getter_hasKey (temp_2.readProperty_mPropertyName () COMMA_SOURCE_FILE ("computed-property.ggs", 349)).operator_not (SOURCE_FILE ("computed-property.ggs", 349)) COMMA_SOURCE_FILE ("computed-property.ggs", 349)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = constinArgument_inPreferences.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 351)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 351)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 351)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 351)) ;
          const GGS_computedPropertyGeneration temp_4 = this ;
          result_result.plusAssignOperation(GGS_string ("//   Transient property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 352)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 352)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 352)) ;
          result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 353)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 353)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 353)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 353)) ;
          const GGS_computedPropertyGeneration temp_5 = this ;
          const GGS_computedPropertyGeneration temp_6 = this ;
          result_result.plusAssignOperation(GGS_string ("  let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 354)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 354)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 354)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 354)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 354)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 354)) ;
          result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 355)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 355)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 355)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 355)) ;
          const GGS_computedPropertyGeneration temp_7 = this ;
          const GGS_computedPropertyGeneration temp_8 = this ;
          result_result.plusAssignOperation(GGS_string ("  var preferences_").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 356)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 356)).add_operation (extensionGetter_swiftTypeName (temp_8.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 356)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 356)).add_operation (GGS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 356)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 356)) ;
          const GGS_computedPropertyGeneration temp_9 = this ;
          result_result.plusAssignOperation(GGS_string ("    return preferences_").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 357)).add_operation (GGS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 357)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 357)) ;
          result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 358)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 360)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 360)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 360)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 360)) ;
        const GGS_computedPropertyGeneration temp_10 = this ;
        result_result.plusAssignOperation(GGS_string ("//   Transient property: ").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 361)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 361)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 361)) ;
        result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 362)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 362)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 362)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 362)) ;
        const GGS_computedPropertyGeneration temp_11 = this ;
        const GGS_computedPropertyGeneration temp_12 = this ;
        result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 363)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 363)).add_operation (extensionGetter_swiftTypeName (temp_12.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 363)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 363)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 363)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 363)) ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedPropertyGeneration::getter_configurationCode (const GGS_bool constinArgument_inPreferences,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GGS_string temp_0 ;
  const GalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_string ("self.") ;
  }
  GGS_string var_prefix_16757 = temp_0 ;
  result_result = GGS_string::makeEmptyString () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_computedPropertyGeneration temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::greaterThan, temp_3.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("computed-property.ggs", 373)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_computedPropertyGeneration temp_4 = this ;
      GGS_bool var_needs_5F_unwSelf_16884 = extensionGetter_needs_5F_unwSelf (temp_4.readProperty_mDependencyList (), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 374)) ;
      const GGS_computedPropertyGeneration temp_5 = this ;
      result_result.plusAssignOperation(GGS_string ("  //--- Computed property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 375)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 375)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 375)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_16884.boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_computedPropertyGeneration temp_7 = this ;
          result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_16757, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 377)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 377)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 377)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 377)) ;
          result_result.plusAssignOperation(GGS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 378)) ;
          const GGS_computedPropertyGeneration temp_8 = this ;
          const GGS_computedPropertyGeneration temp_9 = this ;
          const GGS_computedPropertyGeneration temp_10 = this ;
          result_result.plusAssignOperation(extensionGetter_transientComputeFunctionCall (temp_8.readProperty_mDependencyList (), constinArgument_inPreferences, temp_9.readProperty_mClassName (), temp_10.readProperty_mPropertyName (), GGS_string ("computed"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 379)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 379)) ;
          result_result.plusAssignOperation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 380)) ;
          result_result.plusAssignOperation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 381)) ;
          result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 382)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        const GGS_computedPropertyGeneration temp_11 = this ;
        result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_16757, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 384)).add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 384)).add_operation (GGS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 384)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 384)) ;
        const GGS_computedPropertyGeneration temp_12 = this ;
        const GGS_computedPropertyGeneration temp_13 = this ;
        const GGS_computedPropertyGeneration temp_14 = this ;
        result_result.plusAssignOperation(extensionGetter_transientComputeFunctionCall (temp_12.readProperty_mDependencyList (), constinArgument_inPreferences, temp_13.readProperty_mClassName (), temp_14.readProperty_mPropertyName (), GGS_string ("computed"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 385)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 385)) ;
      }
      result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 387)) ;
      const GGS_computedPropertyGeneration temp_15 = this ;
      const GGS_computedPropertyGeneration temp_16 = this ;
      result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_16757, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 388)).add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 388)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] in self\?.compute_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 388)).add_operation (temp_16.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 388)).add_operation (GGS_string ("_property ($0) }\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 388)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 388)) ;
      const GGS_computedPropertyGeneration temp_17 = this ;
      UpEnumerator_transientDependencyListForGeneration enumerator_17890 (temp_17.readProperty_mDependencyList ()) ;
      while (enumerator_17890.hasCurrentObject ()) {
        GGS_string var_s_17930 = extensionGetter_generateAddObserverCall (enumerator_17890.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 390)) ;
        GalgasBool test_18 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_18) {
          test_18 = GGS_bool (ComparisonKind::notEqual, var_s_17930.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_18) {
            const GGS_computedPropertyGeneration temp_19 = this ;
            result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_s_17930, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 392)).add_operation (GGS_string (" (by: "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 392)).add_operation (var_prefix_16757, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 392)).add_operation (temp_19.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 392)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 392)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 392)) ;
          }
        }
        enumerator_17890.gotoNextObject () ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@computeRoutineGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_computeRoutineGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                                  const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                  GGS_stringset & /* ioArgument_ioUsedProtocolSet */,
                                                                  GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@computeRoutineGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_computeRoutineGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                  const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                  const GGS_stringset /* constinArgument_inUsedProtocolSet */,
                                                                  GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_computeRoutineGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("computed-property.ggs", 425)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_computeRoutineGeneration temp_2 = this ;
      const GGS_computeRoutineGeneration temp_3 = this ;
      const GGS_computeRoutineGeneration temp_4 = this ;
      GGS_string var_s_19333 = GGS_string (filewrapperTemplate_computedPropertyManager_computedComputationFunctionFile (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mTransientName (), temp_4.readProperty_mTransientType () COMMA_SOURCE_FILE ("computed-property.ggs", 426))) ;
      const GGS_computeRoutineGeneration temp_5 = this ;
      const GGS_computeRoutineGeneration temp_6 = this ;
      GGS_string var_fileName_19497 = GGS_string ("compute-").add_operation (temp_5.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 431)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 431)).add_operation (temp_6.readProperty_mTransientName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 431)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 431)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_19497, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 432)) ;
      }
      GGS_string var_header_19627 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 433)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 433)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 433)) ;
      var_header_19627.plusAssignOperation(GGS_string ("//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 434)) ;
      var_header_19627.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 435)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 435)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 435)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 435)) ;
      var_header_19627.plusAssignOperation(GGS_string ("import AppKit\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 436)) ;
      var_header_19627.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 437)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 437)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 437)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 437)) ;
      GGS_string var_generatedZone_33__19997 = GGS_string ("  }\n\n") ;
      var_generatedZone_33__19997.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("computed-property.ggs", 439)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 439)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 439)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 439)) ;
      var_generatedZone_33__19997.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 440)) ;
      var_generatedZone_33__19997.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("computed-property.ggs", 441)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 441)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 441)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 441)) ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_19497, GGS_string ("//"), var_header_19627, GGS_string ("\n\n"), var_s_19333, GGS_string ("\n"), var_generatedZone_33__19997, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 442)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'computedPropertyManager'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_computedPropertyManager (
  "controllers",
  0,
  gWrapperAllFiles_computedPropertyManager_3,
  0,
  gWrapperAllDirectories_computedPropertyManager_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_computedPropertyManager (
  "standard-properties",
  0,
  gWrapperAllFiles_computedPropertyManager_1,
  0,
  gWrapperAllDirectories_computedPropertyManager_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_computedPropertyManager (
  "xcode-project",
  0,
  gWrapperAllFiles_computedPropertyManager_2,
  0,
  gWrapperAllDirectories_computedPropertyManager_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_0 [4] = {
  & gWrapperDirectory_3_computedPropertyManager,
  & gWrapperDirectory_1_computedPropertyManager,
  & gWrapperDirectory_2_computedPropertyManager,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_computedPropertyManager (
  "",
  0,
  gWrapperAllFiles_computedPropertyManager_0,
  3,
  gWrapperAllDirectories_computedPropertyManager_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'computedPropertyManager computedComputationFunctionFile'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_computedPropertyManager_computedComputationFunctionFile (Compiler * inCompiler,
                                                                                        const GGS_string & in_OWNER_5F_NAME,
                                                                                        const GGS_string & in_COMPUTED_5F_PROPERTY_5F_NAME,
                                                                                        const GGS_typeKind & in_TRANSIENT_5F_TYPE
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nextension ") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func compute_") ;
  result.appendString (in_COMPUTED_5F_PROPERTY_5F_NAME.stringValue ()) ;
  result.appendString ("_property (_ inValue : ") ;
  result.appendString (extensionGetter_swiftTypeName (in_TRANSIENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("compute-property-function.swift.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (") {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@transientDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_transientDeclarationAST temp_0 = this ;
  const GGS_transientDeclarationAST temp_1 = this ;
  const GGS_transientDeclarationAST temp_2 = this ;
  GGS_lstring var_node_666 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 15)).add_operation (temp_1.readProperty_mTransientName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 15)), temp_2.readProperty_mTransientName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_transientDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_666, temp_3, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 16)) ;
  }
  {
  const GGS_transientDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_666, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("transient-property.ggs", 17)) ;
  }
  {
  const GGS_transientDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_666, temp_5.readProperty_mTransientTypeName () COMMA_SOURCE_FILE ("transient-property.ggs", 18)) ;
  }
  const GGS_transientDeclarationAST temp_6 = this ;
  UpEnumerator_observablePropertyList enumerator_951 (temp_6.readProperty_mDependencyList ()) ;
  while (enumerator_951.hasCurrentObject ()) {
    switch (enumerator_951.current (HERE).readProperty_mObservableProperty ().enumValue ()) {
    case GGS_observablePropertyAST::Enumeration::invalid:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
      {
        GGS_lstring extractedValue_1039_propertyName_0 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootProperty (extractedValue_1039_propertyName_0) ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_transientDeclarationAST temp_8 = this ;
          test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            {
            const GGS_transientDeclarationAST temp_9 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_9.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 23)).add_operation (extractedValue_1039_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 23)), extractedValue_1039_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 23)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
      {
        GGS_lstring extractedValue_1275_propertyName_0 ;
        GGS_lstring extractedValue_1289__1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyWithOption (extractedValue_1275_propertyName_0, extractedValue_1289__1) ;
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_transientDeclarationAST temp_11 = this ;
          test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            {
            const GGS_transientDeclarationAST temp_12 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 27)).add_operation (extractedValue_1275_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 27)), extractedValue_1275_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 27)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
      {
        GGS_lstring extractedValue_1516_relationshipName_0 ;
        GGS_lstring extractedValue_1534__1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyRelationship (extractedValue_1516_relationshipName_0, extractedValue_1534__1) ;
        GalgasBool test_13 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_transientDeclarationAST temp_14 = this ;
          test_13 = GGS_bool (ComparisonKind::notEqual, temp_14.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_13) {
            {
            const GGS_transientDeclarationAST temp_15 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_15.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 31)).add_operation (extractedValue_1516_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 31)), extractedValue_1516_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 31)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
      {
        GGS_lstring extractedValue_1761_relationshipName_0 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyNone (extractedValue_1761_relationshipName_0) ;
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          const GGS_transientDeclarationAST temp_17 = this ;
          test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            {
            const GGS_transientDeclarationAST temp_18 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_18.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 35)).add_operation (extractedValue_1761_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 35)), extractedValue_1761_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 35)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
      {
        GGS_lstring extractedValue_2036_propertyName_0 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfProperty (extractedValue_2036_propertyName_0) ;
        {
        const GGS_transientDeclarationAST temp_19 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_19.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 39)).add_operation (extractedValue_2036_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 39)), extractedValue_2036_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 39)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
      {
        GGS_lstring extractedValue_2212_propertyName_0 ;
        GGS_lstring extractedValue_2226__1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyWithOption (extractedValue_2212_propertyName_0, extractedValue_2226__1) ;
        {
        const GGS_transientDeclarationAST temp_20 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_20.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 41)).add_operation (extractedValue_2212_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 41)), extractedValue_2212_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 41)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
      {
        GGS_lstring extractedValue_2386_propertyName_0 ;
        GGS_lstring extractedValue_2400__1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyArray (extractedValue_2386_propertyName_0, extractedValue_2400__1) ;
        {
        const GGS_transientDeclarationAST temp_21 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_21.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 43)).add_operation (extractedValue_2386_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 43)), extractedValue_2386_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 43)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
      {
        GGS_lstring extractedValue_2561_propertyName_0 ;
        GGS_lstring extractedValue_2575__1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyObject (extractedValue_2561_propertyName_0, extractedValue_2575__1) ;
        {
        const GGS_transientDeclarationAST temp_22 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_22.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 45)).add_operation (extractedValue_2561_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 45)), extractedValue_2561_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 45)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
      {
        GGS_lstring extractedValue_2734_propertyName_0 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyNone (extractedValue_2734_propertyName_0) ;
        {
        const GGS_transientDeclarationAST temp_23 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_23.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 47)).add_operation (extractedValue_2734_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 47)), extractedValue_2734_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 47)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
      {
        GGS_lstring extractedValue_2901_propertyName_0 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_prefsProperty (extractedValue_2901_propertyName_0) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 49)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 49)).add_operation (extractedValue_2901_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 49)), extractedValue_2901_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 49)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
      {
        GGS_lstring extractedValue_3074_propertyName_0 ;
        GGS_lstring extractedValue_3088__1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_3074_propertyName_0, extractedValue_3088__1) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 51)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 51)).add_operation (extractedValue_3074_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 51)), extractedValue_3074_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 51)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
      {
        GGS_lstring extractedValue_3249_controllerName_0 ;
        GGS_lstring extractedValue_3272_propertyName_1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerProperty (extractedValue_3249_controllerName_0, extractedValue_3272_propertyName_1) ;
        {
        const GGS_transientDeclarationAST temp_24 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_24.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 53)).add_operation (extractedValue_3249_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 53)), extractedValue_3249_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 53)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
      {
        GGS_lstring extractedValue_3462_controllerName_0 ;
        GGS_lstring extractedValue_3485_propertyName_1 ;
        GGS_lstring extractedValue_3506_secondaryPropertyName_2 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_3462_controllerName_0, extractedValue_3485_propertyName_1, extractedValue_3506_secondaryPropertyName_2) ;
        {
        const GGS_transientDeclarationAST temp_25 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_25.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 55)).add_operation (extractedValue_3462_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 55)), extractedValue_3462_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 55)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
      {
        GGS_lstring extractedValue_3701_controllerName_0 ;
        GGS_lstring extractedValue_3724_propertyName_1 ;
        GGS_lstring extractedValue_3745_secondaryPropertyName_2 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerAllProperties (extractedValue_3701_controllerName_0, extractedValue_3724_propertyName_1, extractedValue_3745_secondaryPropertyName_2) ;
        {
        const GGS_transientDeclarationAST temp_26 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_26.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 57)).add_operation (extractedValue_3701_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 57)), extractedValue_3701_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 57)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
      {
        GGS_lstring extractedValue_3938_controllerName_0 ;
        GGS_lstring extractedValue_3961_propertyName_1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerOneProperty (extractedValue_3938_controllerName_0, extractedValue_3961_propertyName_1) ;
        {
        const GGS_transientDeclarationAST temp_27 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_27.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 59)).add_operation (extractedValue_3938_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 59)), extractedValue_3938_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 59)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_superProperty:
      {
        GGS_lstring extractedValue_4246_superEntityName_0 ;
        GGS_lstring extractedValue_4272_propertyName_1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_superProperty (extractedValue_4246_superEntityName_0, extractedValue_4272_propertyName_1) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (extractedValue_4246_superEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 64)).add_operation (extractedValue_4272_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 64)), extractedValue_4272_propertyName_1.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 64)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
      {
        GGS_lstring extractedValue_4455_superEntityName_0 ;
        GGS_lstring extractedValue_4481_propertyName_1 ;
        GGS_abstractDefaultValue extractedValue_4495__2 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_4455_superEntityName_0, extractedValue_4481_propertyName_1, extractedValue_4495__2) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (extractedValue_4455_superEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 66)).add_operation (extractedValue_4481_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 66)), extractedValue_4481_propertyName_1.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.ggs", 66)) ;
        }
      }
      break ;
    }
    enumerator_951.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_transientDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_transientDeclarationAST temp_0 = this ;
  const GGS_transientDeclarationAST temp_1 = this ;
  const GGS_transientDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 74)).add_operation (temp_1.readProperty_mTransientName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 74)), temp_2.readProperty_mTransientName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@transientDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                              GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_transientDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_7287 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_classKind var_classKind_7426 ;
  const GGS_transientDeclarationAST temp_1 = this ;
  GGS_propertyMap joker_7437_3 ; // Joker input parameter
  GGS_actionMap joker_7437_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_7437_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mTransientTypeName (), var_classKind_7426, joker_7437_3, joker_7437_2, joker_7437_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 155)) ;
  switch (var_classKind_7426.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_transientDeclarationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("transient-property.ggs", 158)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_7570_kind_0 ;
      var_classKind_7426.getAssociatedValuesFor_atomic (extractedValue_7570_kind_0) ;
      {
      const GGS_transientDeclarationAST temp_4 = this ;
      const GGS_transientDeclarationAST temp_5 = this ;
      const GGS_transientDeclarationAST temp_6 = this ;
      var_entry_7287.mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mTransientName (), GGS_propertyKind::class_func_property (extractedValue_7570_kind_0, GGS_propertyAccessibility::class_func_transient (GGS_bool (ComparisonKind::equal, temp_5.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("transient-property.ggs", 162)).objectCompare (GGS_uint (uint32_t (0U))))  COMMA_SOURCE_FILE ("transient-property.ggs", 162))  COMMA_SOURCE_FILE ("transient-property.ggs", 162)), GGS_actionMap::init (inCompiler COMMA_HERE), temp_6.readProperty_mIsOverriding (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 160)) ;
      }
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_7820__0 ;
      var_classKind_7426.getAssociatedValuesFor_document (extractedValue_7820__0) ;
      const GGS_transientDeclarationAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("transient-property.ggs", 167)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_7916__0 ;
      GGS_bool extractedValue_7916__1 ;
      GGS_bool extractedValue_7916__2 ;
      GGS_bool extractedValue_7916__3 ;
      var_classKind_7426.getAssociatedValuesFor_entity (extractedValue_7916__0, extractedValue_7916__1, extractedValue_7916__2, extractedValue_7916__3) ;
      const GGS_transientDeclarationAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray10  COMMA_SOURCE_FILE ("transient-property.ggs", 169)) ;
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_7287, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 171)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@transientDeclarationAST thirdAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::method_thirdAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                              GGS_generationStruct & ioArgument_ioGeneration,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind var_classKind_8535 ;
  const GGS_transientDeclarationAST temp_0 = this ;
  GGS_propertyMap joker_8546_3 ; // Joker input parameter
  GGS_actionMap joker_8546_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_8546_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mTransientTypeName (), var_classKind_8535, joker_8546_3, joker_8546_2, joker_8546_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 183)) ;
  GGS_typeKind var_typeKind_8583 ;
  switch (var_classKind_8535.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_transientDeclarationAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("transient-property.ggs", 188)) ;
      var_typeKind_8583.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_8738_kind_0 ;
      var_classKind_8535.getAssociatedValuesFor_atomic (extractedValue_8738_kind_0) ;
      var_typeKind_8583 = extractedValue_8738_kind_0 ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_8783__0 ;
      var_classKind_8535.getAssociatedValuesFor_document (extractedValue_8783__0) ;
      const GGS_transientDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("transient-property.ggs", 192)) ;
      var_typeKind_8583.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_8891__0 ;
      GGS_bool extractedValue_8891__1 ;
      GGS_bool extractedValue_8891__2 ;
      GGS_bool extractedValue_8891__3 ;
      var_classKind_8535.getAssociatedValuesFor_entity (extractedValue_8891__0, extractedValue_8891__1, extractedValue_8891__2, extractedValue_8891__3) ;
      const GGS_transientDeclarationAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("transient-property.ggs", 194)) ;
      var_typeKind_8583.drop () ; // Release error dropped variable
    }
    break ;
  }
  GGS_propertyMap var_rootProperties_9029 ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_transientDeclarationAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::equal, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      var_rootProperties_9029 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    const GGS_transientDeclarationAST temp_9 = this ;
    GGS_classKind joker_9184 ; // Joker input parameter
    GGS_actionMap joker_9205_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_9205_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_9.readProperty_mRootEntityName (), joker_9184, var_rootProperties_9029, joker_9205_2, joker_9205_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 201)) ;
  }
  GGS_classKind var_currentClassKind_9309 ;
  GGS_propertyMap var_properties_9332 ;
  const GGS_transientDeclarationAST temp_10 = this ;
  GGS_actionMap joker_9344_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_9344_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_10.readProperty_mClassName (), var_currentClassKind_9309, var_properties_9332, joker_9344_2, joker_9344_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 204)) ;
  GGS_transientDependencyListForGeneration temp_11 = GGS_transientDependencyListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 206)) ;
  GGS_transientDependencyListForGeneration var_dependencies_9424 = temp_11 ;
  const GGS_transientDeclarationAST temp_12 = this ;
  UpEnumerator_observablePropertyList enumerator_9449 (temp_12.readProperty_mDependencyList ()) ;
  while (enumerator_9449.hasCurrentObject ()) {
    GGS_propertyKind var_dependencyKind_9639 ;
    GGS_string var_swiftTypeStringForTransientFunctionArgument_9674 ;
    GGS_string var_protocolTypeName_9738 ;
    GGS_string var_defaultValueAsString_9775 ;
    extensionMethod_analyzeObservableProperty (enumerator_9449.current_mObservableProperty (HERE), var_rootProperties_9029, ioArgument_ioSemanticContext, var_properties_9332, var_dependencyKind_9639, var_swiftTypeStringForTransientFunctionArgument_9674, var_protocolTypeName_9738, var_defaultValueAsString_9775, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 208)) ;
    switch (var_dependencyKind_9639.enumValue ()) {
    case GGS_propertyKind::Enumeration::invalid:
      break ;
    case GGS_propertyKind::Enumeration::enum_property:
      break ;
    case GGS_propertyKind::Enumeration::enum_toMany:
      break ;
    case GGS_propertyKind::Enumeration::enum_toOne:
      break ;
    case GGS_propertyKind::Enumeration::enum_arrayController:
      {
        GGS_lstring extractedValue_9993__0 ;
        GGS_bool extractedValue_9993__1 ;
        var_dependencyKind_9639.getAssociatedValuesFor_arrayController (extractedValue_9993__0, extractedValue_9993__1) ;
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9449.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 223)), GGS_string ("only an atomic property can be observed"), fixItArray13  COMMA_SOURCE_FILE ("transient-property.ggs", 223)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_selectionController:
      {
        GGS_string extractedValue_10113__0 ;
        var_dependencyKind_9639.getAssociatedValuesFor_selectionController (extractedValue_10113__0) ;
        GenericArray <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9449.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 225)), GGS_string ("only an atomic property can be observed"), fixItArray14  COMMA_SOURCE_FILE ("transient-property.ggs", 225)) ;
      }
      break ;
    }
    {
    var_dependencies_9424.setter_append (enumerator_9449.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_9449.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 229)), var_swiftTypeStringForTransientFunctionArgument_9674, var_defaultValueAsString_9775, var_protocolTypeName_9738, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 227)) ;
    }
    enumerator_9449.gotoNextObject () ;
  }
  {
  const GGS_transientDeclarationAST temp_15 = this ;
  const GGS_transientDeclarationAST temp_16 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_transientRoutineGeneration::init_21__21__21__21__21_ (temp_15.readProperty_mClassName ().readProperty_string (), temp_16.readProperty_mTransientName ().readProperty_string (), var_typeKind_8583, GGS_string ("transient"), var_dependencies_9424, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 235)) ;
  }
  const GGS_transientDeclarationAST temp_17 = this ;
  GGS_classMap_2E_element var_entry_10626 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_17.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_bool var_generate_10706 ;
  switch (var_currentClassKind_9309.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      var_generate_10706 = GGS_bool (true) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_10801__0 ;
      var_currentClassKind_9309.getAssociatedValuesFor_document (extractedValue_10801__0) ;
      var_generate_10706 = GGS_bool (true) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_10845__0 ;
      var_currentClassKind_9309.getAssociatedValuesFor_atomic (extractedValue_10845__0) ;
      var_generate_10706 = GGS_bool (true) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_10889__0 ;
      GGS_bool extractedValue_10892_graphic_1 ;
      GGS_bool extractedValue_10902__2 ;
      GGS_bool extractedValue_10902__3 ;
      var_currentClassKind_9309.getAssociatedValuesFor_entity (extractedValue_10889__0, extractedValue_10892_graphic_1, extractedValue_10902__2, extractedValue_10902__3) ;
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = extractedValue_10892_graphic_1.boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          const GGS_transientDeclarationAST temp_19 = this ;
          const GGS_transientDeclarationAST temp_20 = this ;
          var_generate_10706 = GGS_bool (ComparisonKind::notEqual, temp_19.readProperty_mTransientName ().readProperty_string ().objectCompare (GGS_string ("selectionDisplay"))).operator_and (GGS_bool (ComparisonKind::notEqual, temp_20.readProperty_mTransientName ().readProperty_string ().objectCompare (GGS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("transient-property.ggs", 254)) ;
        }
      }
      if (GalgasBool::boolFalse == test_18) {
        var_generate_10706 = GGS_bool (true) ;
      }
    }
    break ;
  }
  {
  const GGS_transientDeclarationAST temp_21 = this ;
  const GGS_transientDeclarationAST temp_22 = this ;
  var_entry_10626.mProperty_mPropertyGenerationList.setter_append (GGS_transientPropertyGeneration::init_21__21__21__21__21_ (temp_21.readProperty_mTransientName ().readProperty_string (), temp_22.readProperty_mClassName ().readProperty_string (), var_typeKind_8583, var_dependencies_9424, var_generate_10706, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 259)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_10626, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 267)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_transientPropertyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 291)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 291)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 291)) ;
  const GGS_transientPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 292)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 292)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 292)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 293)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 293)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 293)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 293)) ;
  const GGS_transientPropertyGeneration temp_1 = this ;
  const GGS_transientPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 294)).add_operation (GGS_string ("_property = EBTransientProperty <"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 294)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 294)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 294)).add_operation (GGS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 294)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 294)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_transientPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_transientPropertyGeneration::getter_bindPropertyInSelectionController (Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 306)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 306)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 306)) ;
  const GGS_transientPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 307)).add_operation (GGS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 307)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 307)) ;
  const GGS_transientPropertyGeneration temp_1 = this ;
  const GGS_transientPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 308)).add_operation (GGS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 308)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 308)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 308)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 308)) ;
  const GGS_transientPropertyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 309)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 309)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 309)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 310)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 311)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 312)) ;
  result_result.plusAssignOperation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 313)) ;
  result_result.plusAssignOperation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 314)) ;
  result_result.plusAssignOperation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 315)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 316)) ;
  const GGS_transientPropertyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 317)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 317)).add_operation (GGS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 317)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 317)) ;
  result_result.plusAssignOperation(GGS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 318)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 319)) ;
  const GGS_transientPropertyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 320)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 320)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 320)) ;
  result_result.plusAssignOperation(GGS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 321)) ;
  result_result.plusAssignOperation(GGS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 322)) ;
  result_result.plusAssignOperation(GGS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 323)) ;
  result_result.plusAssignOperation(GGS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 324)) ;
  result_result.plusAssignOperation(GGS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 325)) ;
  result_result.plusAssignOperation(GGS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 326)) ;
  result_result.plusAssignOperation(GGS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 327)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 328)) ;
  result_result.plusAssignOperation(GGS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 329)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 330)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 331)) ;
  result_result.plusAssignOperation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 332)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 333)) ;
  result_result.plusAssignOperation(GGS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 334)) ;
  result_result.plusAssignOperation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 335)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 336)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 337)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 338)) ;
  result_result.plusAssignOperation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 339)) ;
  result_result.plusAssignOperation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 340)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 341)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 342)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 343)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_transientPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool constinArgument_inPreferences,
                                                                             const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                             const GGS_stringset constinArgument_inOverriddenTransients,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_transientPropertyGeneration temp_1 = this ;
    const GGS_transientPropertyGeneration temp_2 = this ;
    test_0 = temp_1.readProperty_mGenerate ().operator_and (constinArgument_inOverriddenTransients.getter_hasKey (temp_2.readProperty_mPropertyName () COMMA_SOURCE_FILE ("transient-property.ggs", 354)).operator_not (SOURCE_FILE ("transient-property.ggs", 354)) COMMA_SOURCE_FILE ("transient-property.ggs", 354)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = constinArgument_inPreferences.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 356)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 356)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 356)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 356)) ;
          const GGS_transientPropertyGeneration temp_4 = this ;
          result_result.plusAssignOperation(GGS_string ("//   Transient property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 357)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 357)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 357)) ;
          result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 358)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 358)) ;
          const GGS_transientPropertyGeneration temp_5 = this ;
          const GGS_transientPropertyGeneration temp_6 = this ;
          result_result.plusAssignOperation(GGS_string ("@MainActor let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 359)).add_operation (GGS_string ("_property = EBTransientProperty <"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 359)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 359)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 359)).add_operation (GGS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 359)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 359)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 361)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 361)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 361)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 361)) ;
        const GGS_transientPropertyGeneration temp_7 = this ;
        result_result.plusAssignOperation(GGS_string ("  //   Transient property: ").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 362)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 362)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 362)) ;
        result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 363)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 363)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 363)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 363)) ;
        const GGS_transientPropertyGeneration temp_8 = this ;
        const GGS_transientPropertyGeneration temp_9 = this ;
        result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 364)).add_operation (GGS_string ("_property = EBTransientProperty <"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 364)).add_operation (extensionGetter_swiftTypeName (temp_9.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 364)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 364)).add_operation (GGS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 364)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 364)) ;
        result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.ggs", 365)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 365)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 365)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 365)) ;
        const GGS_transientPropertyGeneration temp_10 = this ;
        const GGS_transientPropertyGeneration temp_11 = this ;
        result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 366)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 366)).add_operation (extensionGetter_swiftTypeName (temp_11.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 366)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 366)).add_operation (GGS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 366)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 366)) ;
        const GGS_transientPropertyGeneration temp_12 = this ;
        result_result.plusAssignOperation(GGS_string ("    return self.").add_operation (temp_12.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 367)).add_operation (GGS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 367)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 367)) ;
        result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 368)) ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_transientPropertyGeneration::getter_configurationCode (const GGS_bool constinArgument_inPreferences,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GGS_string temp_0 ;
  const GalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_string ("self.") ;
  }
  GGS_string var_prefix_16590 = temp_0 ;
  result_result = GGS_string::makeEmptyString () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_transientPropertyGeneration temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::greaterThan, temp_3.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("transient-property.ggs", 378)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_transientPropertyGeneration temp_4 = this ;
      GGS_bool var_needs_5F_unwSelf_16717 = extensionGetter_needs_5F_unwSelf (temp_4.readProperty_mDependencyList (), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 379)) ;
      const GGS_transientPropertyGeneration temp_5 = this ;
      result_result.plusAssignOperation(GGS_string ("  //--- Atomic property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 380)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 380)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 380)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_16717.boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_transientPropertyGeneration temp_7 = this ;
          result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_16590, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 382)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 382)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 382)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 382)) ;
          result_result.plusAssignOperation(GGS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 383)) ;
          const GGS_transientPropertyGeneration temp_8 = this ;
          const GGS_transientPropertyGeneration temp_9 = this ;
          const GGS_transientPropertyGeneration temp_10 = this ;
          result_result.plusAssignOperation(extensionGetter_transientComputeFunctionCall (temp_8.readProperty_mDependencyList (), constinArgument_inPreferences, temp_9.readProperty_mClassName (), temp_10.readProperty_mPropertyName (), GGS_string ("transient"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 384)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 384)) ;
          result_result.plusAssignOperation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 385)) ;
          result_result.plusAssignOperation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 386)) ;
          result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 387)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        const GGS_transientPropertyGeneration temp_11 = this ;
        result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_16590, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 389)).add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 389)).add_operation (GGS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 389)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 389)) ;
        const GGS_transientPropertyGeneration temp_12 = this ;
        const GGS_transientPropertyGeneration temp_13 = this ;
        const GGS_transientPropertyGeneration temp_14 = this ;
        result_result.plusAssignOperation(extensionGetter_transientComputeFunctionCall (temp_12.readProperty_mDependencyList (), constinArgument_inPreferences, temp_13.readProperty_mClassName (), temp_14.readProperty_mPropertyName (), GGS_string ("transient"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 390)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 390)) ;
      }
      result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 392)) ;
      const GGS_transientPropertyGeneration temp_15 = this ;
      UpEnumerator_transientDependencyListForGeneration enumerator_17560 (temp_15.readProperty_mDependencyList ()) ;
      while (enumerator_17560.hasCurrentObject ()) {
        GGS_string var_s_17600 = extensionGetter_generateAddObserverCall (enumerator_17560.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 394)) ;
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          test_16 = GGS_bool (ComparisonKind::notEqual, var_s_17600.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            const GGS_transientPropertyGeneration temp_17 = this ;
            result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_s_17600, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 396)).add_operation (GGS_string (" (by: "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 396)).add_operation (var_prefix_16590, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 396)).add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 396)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 396)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 396)) ;
          }
        }
        enumerator_17560.gotoNextObject () ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@transientRoutineGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_transientRoutineGeneration::method_generateCodePhase_32_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                                    const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                    const GGS_stringset /* constinArgument_inUsedProtocolSet */,
                                                                    GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@transientRoutineGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_transientRoutineGeneration::method_generateCodePhase_31_ (const GGS_string constinArgument_inOutputDirectory,
                                                                    const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                    GGS_stringset & ioArgument_ioUsedProtocolSet,
                                                                    GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_transientRoutineGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("transient-property.ggs", 614)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_transientRoutineGeneration temp_2 = this ;
      UpEnumerator_transientDependencyListForGeneration enumerator_28883 (temp_2.readProperty_mDependencyList ()) ;
      while (enumerator_28883.hasCurrentObject ()) {
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::notEqual, enumerator_28883.current (HERE).readProperty_mProtocolName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            ioArgument_ioUsedProtocolSet.plusPlusAssignOperation (enumerator_28883.current (HERE).readProperty_mProtocolName ()  COMMA_SOURCE_FILE ("transient-property.ggs", 617)) ;
          }
        }
        enumerator_28883.gotoNextObject () ;
      }
      const GGS_transientRoutineGeneration temp_4 = this ;
      const GGS_transientRoutineGeneration temp_5 = this ;
      const GGS_transientRoutineGeneration temp_6 = this ;
      const GGS_transientRoutineGeneration temp_7 = this ;
      const GGS_transientRoutineGeneration temp_8 = this ;
      GGS_string var_s_29065 = GGS_string (filewrapperTemplate_transientManager_transientComputationFunctionFile (inCompiler, temp_4.readProperty_mOwnerName (), temp_5.readProperty_mTransientName (), temp_6.readProperty_mDependencyList (), temp_7.readProperty_mTransientType (), temp_8.readProperty_mGeneratedFunctionNamePrefix () COMMA_SOURCE_FILE ("transient-property.ggs", 621))) ;
      GGS_string var_header_29306 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.ggs", 628)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 628)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 628)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.ggs", 630)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 630)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 630)).add_operation (GGS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 630)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 631)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.ggs", 632)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 632)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 632)) ;
      const GGS_transientRoutineGeneration temp_9 = this ;
      const GGS_transientRoutineGeneration temp_10 = this ;
      const GGS_transientRoutineGeneration temp_11 = this ;
      GGS_string var_fileName_29657 = temp_9.readProperty_mGeneratedFunctionNamePrefix ().add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 633)).add_operation (temp_10.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 633)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 633)).add_operation (temp_11.readProperty_mTransientName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 633)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 633)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_29657, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 634)) ;
      }
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_29657, GGS_string ("//"), var_header_29306, GGS_string ("\n\n"), var_s_29065, GGS_string ("\n"), GGS_string ("}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.ggs", 643)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 643)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 643)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 635)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'transientManager'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_transientManager (
  "controllers",
  0,
  gWrapperAllFiles_transientManager_3,
  0,
  gWrapperAllDirectories_transientManager_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_transientManager (
  "standard-properties",
  0,
  gWrapperAllFiles_transientManager_1,
  0,
  gWrapperAllDirectories_transientManager_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_transientManager (
  "xcode-project",
  0,
  gWrapperAllFiles_transientManager_2,
  0,
  gWrapperAllDirectories_transientManager_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_0 [4] = {
  & gWrapperDirectory_3_transientManager,
  & gWrapperDirectory_1_transientManager,
  & gWrapperDirectory_2_transientManager,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_transientManager (
  "",
  0,
  gWrapperAllFiles_transientManager_0,
  3,
  gWrapperAllDirectories_transientManager_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'transientManager transientComputationFunctionFile'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_transientManager_transientComputationFunctionFile (Compiler * inCompiler,
                                                                                  const GGS_string & in_OWNER_5F_NAME,
                                                                                  const GGS_string & in_TRANSIENT_5F_NAME,
                                                                                  const GGS_transientDependencyListForGeneration & in_DEPENDENCY_5F_LIST,
                                                                                  const GGS_typeKind & in_TRANSIENT_5F_TYPE,
                                                                                  const GGS_string & in_TRANSIENT_5F_FUNCTION_5F_NAME_5F_PREFIX
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n@MainActor func ") ;
  result.appendString (in_TRANSIENT_5F_FUNCTION_5F_NAME_5F_PREFIX.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_TRANSIENT_5F_NAME.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_270_ (0) ;
  if (in_DEPENDENCY_5F_LIST.isValid ()) {
    UpEnumerator_transientDependencyListForGeneration enumerator_270 (in_DEPENDENCY_5F_LIST) ;
    while (enumerator_270.hasCurrentObject ()) {
      result.appendString ("\n       _ ") ;
      result.appendString (enumerator_270.current_mFunctionArgumentName (HERE).stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (enumerator_270.current_mFunctionArgumentTypeString (HERE).stringValue ()) ;
      enumerator_270.gotoNextObject () ;
      if (enumerator_270.hasCurrentObject ()) {
        result.appendString (",") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_270_.increment () ;
    }
  }
  result.appendString ("\n) -> ") ;
  result.appendString (extensionGetter_swiftTypeName (in_TRANSIENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("transient-computation-function.swift.galgasTemplate", 10)).stringValue ()) ;
  result.appendString (" {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@toManyRelationshipAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_toManyRelationshipAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_toManyRelationshipAST temp_0 = this ;
  const GGS_toManyRelationshipAST temp_1 = this ;
  const GGS_toManyRelationshipAST temp_2 = this ;
  GGS_lstring var_node_1014 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 26)).add_operation (temp_1.readProperty_mToManyRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 26)), temp_2.readProperty_mToManyRelationshipName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_toManyRelationshipAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1014, temp_3, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 27)) ;
  }
  {
  const GGS_toManyRelationshipAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1014, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("to-many-relationship.ggs", 28)) ;
  }
  {
  const GGS_toManyRelationshipAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1014, temp_5.readProperty_mDestinationEntityName () COMMA_SOURCE_FILE ("to-many-relationship.ggs", 29)) ;
  }
  const GGS_toManyRelationshipAST temp_6 = this ;
  switch (temp_6.readProperty_mOption ().enumValue ()) {
  case GGS_toManyRelationshipOptionAST::Enumeration::invalid:
    break ;
  case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasDependance:
    {
      GGS_lstring extractedValue_1332_masterPropertyName_0 ;
      temp_6.readProperty_mOption ().getAssociatedValuesFor_hasDependance (extractedValue_1332_masterPropertyName_0) ;
      const GGS_toManyRelationshipAST temp_7 = this ;
      GGS_lstring var_dependanceNode_1362 = GGS_lstring::init_21__21_ (temp_7.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 32)).add_operation (extractedValue_1332_masterPropertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 32)), extractedValue_1332_masterPropertyName_0.readProperty_location (), inCompiler COMMA_HERE) ;
      {
      ioArgument_ioGraph.setter_addEdge (var_node_1014, var_dependanceNode_1362 COMMA_SOURCE_FILE ("to-many-relationship.ggs", 33)) ;
      }
    }
    break ;
  case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasOpposite:
    break ;
  case GGS_toManyRelationshipOptionAST::Enumeration::enum_none:
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyRelationshipAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_toManyRelationshipAST::getter_nodeKey (Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_toManyRelationshipAST temp_0 = this ;
  const GGS_toManyRelationshipAST temp_1 = this ;
  const GGS_toManyRelationshipAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 42)).add_operation (temp_1.readProperty_mToManyRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 42)), temp_2.readProperty_mToManyRelationshipName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@toManyRelationshipAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_toManyRelationshipAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                            GGS_generationStruct & ioArgument_ioGeneration,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_toManyRelationshipAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_5325 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  {
  const GGS_toManyRelationshipAST temp_1 = this ;
  ioArgument_ioGeneration.mProperty_mToManyClassImplementations.setter_insert (temp_1.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 141)) ;
  }
  GGS_classKind var_classKind_5631 ;
  const GGS_toManyRelationshipAST temp_2 = this ;
  GGS_propertyMap joker_5642_3 ; // Joker input parameter
  GGS_actionMap joker_5642_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_5642_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mDestinationEntityName (), var_classKind_5631, joker_5642_3, joker_5642_2, joker_5642_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 142)) ;
  switch (var_classKind_5631.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_toManyRelationshipAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray4  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 145)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_5773__0 ;
      var_classKind_5631.getAssociatedValuesFor_atomic (extractedValue_5773__0) ;
      const GGS_toManyRelationshipAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray6  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 147)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_5868__0 ;
      var_classKind_5631.getAssociatedValuesFor_document (extractedValue_5868__0) ;
      const GGS_toManyRelationshipAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray8  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 149)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_5961__0 ;
      GGS_bool extractedValue_5964_graphic_1 ;
      GGS_bool extractedValue_5973__2 ;
      GGS_bool extractedValue_5976_handleOpposite_3 ;
      var_classKind_5631.getAssociatedValuesFor_entity (extractedValue_5961__0, extractedValue_5964_graphic_1, extractedValue_5973__2, extractedValue_5976_handleOpposite_3) ;
      const GGS_toManyRelationshipAST temp_9 = this ;
      const GGS_toManyRelationshipAST temp_10 = this ;
      GGS_propertyKind var_kind_6004 = GGS_propertyKind::class_func_toMany (temp_9.readProperty_mDestinationEntityName (), GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("to-many-relationship.ggs", 153)), extractedValue_5964_graphic_1, temp_10.readProperty_mOption ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 151)) ;
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = extractedValue_5976_handleOpposite_3.operator_not (SOURCE_FILE ("to-many-relationship.ggs", 158)).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          const GGS_toManyRelationshipAST temp_12 = this ;
          test_11 = temp_12.readProperty_mOption ().getter_isHasOpposite (SOURCE_FILE ("to-many-relationship.ggs", 158)).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            const GGS_toManyRelationshipAST temp_13 = this ;
            const GGS_toManyRelationshipAST temp_14 = this ;
            GenericArray <FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (temp_13.readProperty_mToManyRelationshipName ().readProperty_location (), GGS_string ("the '").add_operation (temp_14.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 159)).add_operation (GGS_string ("' entity does not handle opposite relationship"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 159)), fixItArray15  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 159)) ;
          }
        }
      }
      {
      const GGS_toManyRelationshipAST temp_16 = this ;
      var_entry_5325.mProperty_mPropertyMap.setter_insertKey (temp_16.readProperty_mToManyRelationshipName (), var_kind_6004, GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 161)) ;
      }
      const GGS_toManyRelationshipAST temp_17 = this ;
      GGS_bool var_inPrefs_6591 = GGS_bool (ComparisonKind::equal, temp_17.readProperty_mClassName ().readProperty_string ().objectCompare (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 163)))) ;
      GGS_toManyRelationshipOptionGeneration var_optionForGeneration_6708 ;
      const GGS_toManyRelationshipAST temp_18 = this ;
      switch (temp_18.readProperty_mOption ().enumValue ()) {
      case GGS_toManyRelationshipOptionAST::Enumeration::invalid:
        break ;
      case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasDependance:
        {
          GGS_lstring extractedValue_6780_masterPropertyName_0 ;
          temp_18.readProperty_mOption ().getAssociatedValuesFor_hasDependance (extractedValue_6780_masterPropertyName_0) ;
          GGS_propertyKind var_masterPropertyKind_6865 ;
          GGS_actionMap joker_6885_2 ; // Joker input parameter
          GGS_bool joker_6885_1 ; // Joker input parameter
          var_entry_5325.readProperty_mPropertyMap ().method_searchKey (extractedValue_6780_masterPropertyName_0, var_masterPropertyKind_6865, joker_6885_2, joker_6885_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 168)) ;
          var_optionForGeneration_6708 = GGS_toManyRelationshipOptionGeneration::class_func_hasDependance (extractedValue_6780_masterPropertyName_0.readProperty_string (), extensionGetter_swiftTypeName (var_masterPropertyKind_6865, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 171))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 169)) ;
        }
        break ;
      case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasOpposite:
        {
          GGS_lstring extractedValue_7102_oppositeName_0 ;
          temp_18.readProperty_mOption ().getAssociatedValuesFor_hasOpposite (extractedValue_7102_oppositeName_0) ;
          var_optionForGeneration_6708 = GGS_toManyRelationshipOptionGeneration::class_func_hasOpposite (extractedValue_7102_oppositeName_0.readProperty_string ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 174)) ;
        }
        break ;
      case GGS_toManyRelationshipOptionAST::Enumeration::enum_none:
        {
          var_optionForGeneration_6708 = GGS_toManyRelationshipOptionGeneration::class_func_none (SOURCE_FILE ("to-many-relationship.ggs", 176)) ;
        }
        break ;
      }
      {
      const GGS_toManyRelationshipAST temp_19 = this ;
      const GGS_toManyRelationshipAST temp_20 = this ;
      const GGS_toManyRelationshipAST temp_21 = this ;
      const GGS_toManyRelationshipAST temp_22 = this ;
      const GGS_toManyRelationshipAST temp_23 = this ;
      var_entry_5325.mProperty_mPropertyGenerationList.setter_append (GGS_toManyPropertyGeneration::init_21__21__21__21__21__21__21__21_ (temp_19.readProperty_mToManyRelationshipName ().readProperty_string (), temp_20.readProperty_mGenerateDirectAccess (), temp_21.readProperty_mGenerateDirectRead (), var_kind_6004, var_optionForGeneration_6708, var_inPrefs_6591, temp_22.readProperty_mCustomStore (), temp_23.readProperty_mUsedForSignature (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 179)) ;
      }
      {
      const GGS_toManyRelationshipAST temp_24 = this ;
      ioArgument_ioGeneration.mProperty_mGenerateClass_5F_StoredArrayOf_5F_.setter_insert (temp_24.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 190)) ;
      }
      GalgasBool test_25 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_25) {
        test_25 = var_inPrefs_6591.boolEnum () ;
        if (GalgasBool::boolTrue == test_25) {
          {
          const GGS_toManyRelationshipAST temp_26 = this ;
          ioArgument_ioGeneration.mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_.setter_insert (temp_26.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 192)) ;
          }
        }
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_5325, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 195)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                          const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                          const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_toManyPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 230)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 231)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 231)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 231)) ;
      const GGS_toManyPropertyGeneration temp_2 = this ;
      result_result.plusAssignOperation(GGS_string ("  //   To many property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 232)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 232)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 232)) ;
      result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 233)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 233)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 233)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 233)) ;
      GGS_string var_masterPropertyTypeName_9601 ;
      const GGS_toManyPropertyGeneration temp_3 = this ;
      GGS_string joker_9562_1 ; // Joker input parameter
      temp_3.readProperty_mOption ().method_extractHasDependance (joker_9562_1, var_masterPropertyTypeName_9601, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 234)) ;
      const GGS_toManyPropertyGeneration temp_4 = this ;
      const GGS_toManyPropertyGeneration temp_5 = this ;
      result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)).add_operation (GGS_string ("_property = TransientArrayOfSuperOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)).add_operation (extensionGetter_swiftTypeName (temp_5.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)).add_operation (GGS_string (" <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)).add_operation (var_masterPropertyTypeName_9601, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 236)).add_operation (GGS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 236)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 235)) ;
      result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 237)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 237)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 237)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 237)) ;
      const GGS_toManyPropertyGeneration temp_6 = this ;
      const GGS_toManyPropertyGeneration temp_7 = this ;
      result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)).add_operation (GGS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)).add_operation (GGS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)) ;
      const GGS_toManyPropertyGeneration temp_8 = this ;
      result_result.plusAssignOperation(GGS_string ("    get { return self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 239)).add_operation (GGS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 239)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 239)) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_toManyPropertyGeneration temp_10 = this ;
        test_9 = temp_10.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 240)).operator_not (SOURCE_FILE ("to-many-relationship.ggs", 240)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_toManyPropertyGeneration temp_11 = this ;
          result_result.plusAssignOperation(GGS_string ("    set { self.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 241)).add_operation (GGS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 241)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 241)) ;
        }
      }
      result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 243)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_toManyPropertyGeneration temp_13 = this ;
      test_12 = temp_13.readProperty_mInPreferences ().boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        result_result = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 245)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 245)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 245)) ;
        const GGS_toManyPropertyGeneration temp_14 = this ;
        result_result.plusAssignOperation(GGS_string ("//   To many property: ").add_operation (temp_14.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 246)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 246)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 246)) ;
        result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 247)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 247)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 247)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 247)) ;
        const GGS_toManyPropertyGeneration temp_15 = this ;
        const GGS_toManyPropertyGeneration temp_16 = this ;
        result_result.plusAssignOperation(GGS_string ("@MainActor let preferences_").add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 248)).add_operation (GGS_string ("_property = PreferencesArrayOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 248)).add_operation (extensionGetter_swiftTypeName (temp_16.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 248)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 248)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 248)) ;
        const GGS_toManyPropertyGeneration temp_17 = this ;
        result_result.plusAssignOperation(GGS_string (" (prefKey: Preferences_").add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 249)).add_operation (GGS_string (")\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 249)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 249)) ;
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 251)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 251)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 251)) ;
      const GGS_toManyPropertyGeneration temp_18 = this ;
      result_result.plusAssignOperation(GGS_string ("  //   To many property: ").add_operation (temp_18.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 252)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 252)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 252)) ;
      result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 253)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 253)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 253)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 253)) ;
      const GGS_toManyPropertyGeneration temp_19 = this ;
      result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_19.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 254)).add_operation (GGS_string ("_property = "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 254)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 254)) ;
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        const GGS_toManyPropertyGeneration temp_21 = this ;
        test_20 = temp_21.readProperty_mCustomStore ().boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          const GGS_toManyPropertyGeneration temp_22 = this ;
          result_result.plusAssignOperation(GGS_string ("Custom_").add_operation (extensionGetter_swiftTypeName (temp_22.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 256)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 256)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 256)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 256)) ;
        }
      }
      const GGS_toManyPropertyGeneration temp_23 = this ;
      result_result.plusAssignOperation(GGS_string ("StoredArrayOf_").add_operation (extensionGetter_swiftTypeName (temp_23.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 258)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 258)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 258)) ;
      const GGS_toManyPropertyGeneration temp_24 = this ;
      result_result.plusAssignOperation(GGS_string (" (usedForSignature: ").add_operation (temp_24.readProperty_mUsedForSignature ().getter_cString (SOURCE_FILE ("to-many-relationship.ggs", 259)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 259)).add_operation (GGS_string (", key: "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 259)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 259)) ;
      GalgasBool test_25 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_25) {
        const GGS_toManyPropertyGeneration temp_26 = this ;
        test_25 = temp_26.readProperty_mCustomStore ().boolEnum () ;
        if (GalgasBool::boolTrue == test_25) {
          const GGS_toManyPropertyGeneration temp_27 = this ;
          const GGS_toManyPropertyGeneration temp_28 = this ;
          result_result.plusAssignOperation(GGS_string ("KEY_FOR_").add_operation (extensionGetter_swiftTypeName (temp_27.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 261)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 261)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 261)).add_operation (temp_28.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 261)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 261)) ;
        }
      }
      if (GalgasBool::boolFalse == test_25) {
        const GGS_toManyPropertyGeneration temp_29 = this ;
        result_result.plusAssignOperation(GGS_string ("\"").add_operation (temp_29.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 263)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 263)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 263)) ;
      }
      result_result.plusAssignOperation(GGS_string (")\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 265)) ;
      GalgasBool test_30 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_30) {
        const GGS_toManyPropertyGeneration temp_31 = this ;
        GGS_bool test_32 = temp_31.readProperty_mGenerateDirectAccess () ;
        if (GalgasBool::boolTrue != test_32.boolEnum ()) {
          const GGS_toManyPropertyGeneration temp_33 = this ;
          test_32 = temp_33.readProperty_mGenerateDirectRead () ;
        }
        test_30 = test_32.boolEnum () ;
        if (GalgasBool::boolTrue == test_30) {
          result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 267)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 267)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 267)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 267)) ;
          const GGS_toManyPropertyGeneration temp_34 = this ;
          const GGS_toManyPropertyGeneration temp_35 = this ;
          result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_34.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)).add_operation (GGS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)).add_operation (extensionGetter_swiftTypeName (temp_35.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)).add_operation (GGS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)) ;
          const GGS_toManyPropertyGeneration temp_36 = this ;
          result_result.plusAssignOperation(GGS_string ("    get { return self.").add_operation (temp_36.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 269)).add_operation (GGS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 269)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 269)) ;
          GalgasBool test_37 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_37) {
            const GGS_toManyPropertyGeneration temp_38 = this ;
            test_37 = temp_38.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 270)).operator_not (SOURCE_FILE ("to-many-relationship.ggs", 270)).boolEnum () ;
            if (GalgasBool::boolTrue == test_37) {
              const GGS_toManyPropertyGeneration temp_39 = this ;
              test_37 = temp_39.readProperty_mGenerateDirectAccess ().boolEnum () ;
              if (GalgasBool::boolTrue == test_37) {
                const GGS_toManyPropertyGeneration temp_40 = this ;
                result_result.plusAssignOperation(GGS_string ("    set { self.").add_operation (temp_40.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 271)).add_operation (GGS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 271)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 271)) ;
              }
            }
          }
          result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 273)) ;
        }
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration prefKeyDefinitionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyPropertyGeneration::getter_prefKeyDefinitionCode (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_toManyPropertyGeneration temp_0 = this ;
  const GGS_toManyPropertyGeneration temp_1 = this ;
  result_result = GGS_string ("fileprivate let Preferences_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 287)).add_operation (GGS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 287)).add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 287)).add_operation (GGS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 287)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyPropertyGeneration::getter_configurationCode (const GGS_bool constinArgument_inPreferences,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GGS_string temp_0 ;
  const GalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_string ("self.") ;
  }
  GGS_string var_prefix_12791 = temp_0 ;
  GGS_string temp_2 ;
  const GalgasBool test_3 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_3) {
    temp_2 = GGS_string ("self.undoManager") ;
  }else if (GalgasBool::boolFalse == test_3) {
    temp_2 = GGS_string ("inUndoManager") ;
  }
  GGS_string var_undoManager_12860 = temp_2 ;
  const GGS_toManyPropertyGeneration temp_4 = this ;
  switch (temp_4.readProperty_mOption ().enumValue ()) {
  case GGS_toManyRelationshipOptionGeneration::Enumeration::invalid:
    break ;
  case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_none:
    {
      const GGS_toManyPropertyGeneration temp_5 = this ;
      result_result = GGS_string ("  //--- To many property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 297)).add_operation (GGS_string (" (no option)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 297)) ;
      const GGS_toManyPropertyGeneration temp_6 = this ;
      result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_12791, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)).add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)).add_operation (GGS_string ("_property.undoManager = "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)).add_operation (var_undoManager_12860, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 298)) ;
    }
    break ;
  case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_hasDependance:
    {
      GGS_string extractedValue_13183__0 ;
      GGS_string extractedValue_13183__1 ;
      temp_4.readProperty_mOption ().getAssociatedValuesFor_hasDependance (extractedValue_13183__0, extractedValue_13183__1) ;
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_hasOpposite:
    {
      GGS_string extractedValue_13232_oppositeName_0 ;
      temp_4.readProperty_mOption ().getAssociatedValuesFor_hasOpposite (extractedValue_13232_oppositeName_0) ;
      const GGS_toManyPropertyGeneration temp_7 = this ;
      result_result = GGS_string ("  //--- To many property: ").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)).add_operation (GGS_string (" (has opposite relationship)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)) ;
      const GGS_toManyPropertyGeneration temp_8 = this ;
      result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_12791, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)).add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)).add_operation (GGS_string ("_property.undoManager = "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)).add_operation (var_undoManager_12860, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 303)) ;
      const GGS_toManyPropertyGeneration temp_9 = this ;
      result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_12791, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 304)).add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 304)).add_operation (GGS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 304)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 304)) ;
      result_result.plusAssignOperation(GGS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_13232_oppositeName_0, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 305)).add_operation (GGS_string ("_property.setProp (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 305)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 305)) ;
      result_result.plusAssignOperation(GGS_string ("      resetter: { inObject in inObject.").add_operation (extractedValue_13232_oppositeName_0, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 306)).add_operation (GGS_string ("_property.setProp (nil) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 306)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 306)) ;
      result_result.plusAssignOperation(GGS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 307)) ;
    }
    break ;
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = constinArgument_inPreferences.operator_not (SOURCE_FILE ("to-many-relationship.ggs", 309)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_toManyPropertyGeneration temp_11 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.accumulateProperty (self.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 310)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 310)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 310)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@atomicClassDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_atomicClassDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_atomicClassDeclarationAST temp_0 = this ;
  const GGS_atomicClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 12)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicClassDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_atomicClassDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_atomicClassDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterAtomicClassesIn&declarationList'
//
//--------------------------------------------------------------------------------------------------

void routine_enterAtomicClassesIn_26_declarationList (GGS_declarationListAST & ioArgument_ioDeclarationListAST,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Double").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 26)), GGS_typeKind::class_func_doubleType (SOURCE_FILE ("atomic-class.ggs", 26)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 26)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("String").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 27)), GGS_typeKind::class_func_stringType (SOURCE_FILE ("atomic-class.ggs", 27)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 27)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Int").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 28)), GGS_typeKind::class_func_integerType (SOURCE_FILE ("atomic-class.ggs", 28)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 28)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("UInt32").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 29)), GGS_typeKind::class_func_uint_33__32_Type (SOURCE_FILE ("atomic-class.ggs", 29)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 29)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Bool").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 30)), GGS_typeKind::class_func_boolType (SOURCE_FILE ("atomic-class.ggs", 30)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 30)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("NSColor").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 32)), GGS_typeKind::class_func_colorType (SOURCE_FILE ("atomic-class.ggs", 32)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 32)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("NSFont").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 33)), GGS_typeKind::class_func_fontType (SOURCE_FILE ("atomic-class.ggs", 33)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 33)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Date").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 34)), GGS_typeKind::class_func_dateType (SOURCE_FILE ("atomic-class.ggs", 34)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 34)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Data").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 35)), GGS_typeKind::class_func_dataType (SOURCE_FILE ("atomic-class.ggs", 35)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 35)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("NSBezierPath").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 36)), GGS_typeKind::class_func_bezierPathType (SOURCE_FILE ("atomic-class.ggs", 36)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 36)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("BezierPathArray").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 37)), GGS_typeKind::class_func_bezierPathArrayType (SOURCE_FILE ("atomic-class.ggs", 37)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 37)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@atomicClassDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_atomicClassDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_atomicClassDeclarationAST temp_0 = this ;
  const GGS_atomicClassDeclarationAST temp_1 = this ;
  GGS_propertyGenerationList temp_2 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 53)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_0.readProperty_mClassName (), GGS_classKind::class_func_atomic (temp_1.readProperty_mKind ()  COMMA_SOURCE_FILE ("atomic-class.ggs", 50)), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_actionMap::init (inCompiler COMMA_HERE), temp_2, inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 48)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateTestFile????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateTestFile_3F__3F__3F__3F_ (const GGS_string constinArgument_inBundleIdentifier,
                                               const GGS_string constinArgument_inProjectName,
                                               const GGS_mainXibDescriptorList constinArgument_inMainXibDescriptorList,
                                               const GGS_string constinArgument_inOutputDirectory,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_bool test_1 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inMainXibDescriptorList.getter_count (SOURCE_FILE ("main-xib.ggs", 134)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (GalgasBool::boolTrue == test_1.boolEnum ()) {
      test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inBundleIdentifier.objectCompare (GGS_string::makeEmptyString ())) ;
    }
    test_0 = test_1.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_stringlist temp_2 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 135)) ;
      GGS_stringlist var_outlet_5F_identifier_5F_list_5083 = temp_2 ;
      UpEnumerator_mainXibDescriptorList enumerator_5120 (constinArgument_inMainXibDescriptorList) ;
      while (enumerator_5120.hasCurrentObject ()) {
        UpEnumerator_mainXibLineDescriptorList enumerator_5168 (enumerator_5120.current_mLine (HERE)) ;
        while (enumerator_5168.hasCurrentObject ()) {
          switch (enumerator_5168.current_mElement (HERE).enumValue ()) {
          case GGS_mainXibElement::Enumeration::invalid:
            break ;
          case GGS_mainXibElement::Enumeration::enum_text:
            break ;
          case GGS_mainXibElement::Enumeration::enum_outlet:
            {
              GGS_lstring extractedValue_5259__0 ;
              GGS_lstring extractedValue_5262_outletName_1 ;
              enumerator_5168.current_mElement (HERE).getAssociatedValuesFor_outlet (extractedValue_5259__0, extractedValue_5262_outletName_1) ;
              {
              var_outlet_5F_identifier_5F_list_5083.setter_append (extractedValue_5262_outletName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 141)) ;
              }
            }
            break ;
          }
          enumerator_5168.gotoNextObject () ;
        }
        enumerator_5120.gotoNextObject () ;
      }
      GGS_string var_s_5376 = GGS_string (filewrapperTemplate_testFiles_test_5F_py (inCompiler, constinArgument_inBundleIdentifier, constinArgument_inProjectName, var_outlet_5F_identifier_5F_list_5083 COMMA_SOURCE_FILE ("main-xib.ggs", 145))) ;
      GGS_string var_header_5502 = GGS_string ("#!/usr/bin/python3\n// coding=utf-8\n\n// https://pypi.python.org/pypi/atomac\n// https://github.com/pyatom/pyatom/blob/master/atomac/AXClasses.py\n\n") ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, GGS_string ("test.py"), GGS_string ("#"), var_header_5502, GGS_string::makeEmptyString (), var_s_5376, GGS_string ("//    ENTER USER CODE HERE\n"), GGS_string ("\nquitApplication ()\n\n//---------------------------------------------------------------------------*\n"), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 154)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'testFiles'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_testFiles_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_testFiles_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_testFiles (
  "",
  0,
  gWrapperAllFiles_testFiles_0,
  0,
  gWrapperAllDirectories_testFiles_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'testFiles test_py'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_testFiles_test_5F_py (Compiler * /* inCompiler */,
                                                     const GGS_string & in_BUNDLE_5F_IDENTIFIER,
                                                     const GGS_string & in_PROJECT_5F_NAME,
                                                     const GGS_stringlist & in_OUTLET_5F_IDENTIFIER_5F_LIST
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//-----------------------------------------------------------------------------*\n\nimport random, string\n\nimport subprocess, os, sys, atexit\nimport atomac, sys, time, inspect\n\n//-----------------------------------------------------------------------------*\n//   GET SOURCE LINE NUMBER                                                     *\n//-----------------------------------------------------------------------------*\n\ndef lineno():\n  return inspect.currentframe().f_back.f_lineno\n\n//-----------------------------------------------------------------------------*\n//   LAUNCH APPLICATION                                                         *\n//-----------------------------------------------------------------------------*\n\ndef launchApplication ():\n  scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n  atomac.launchAppByBundlePath (scriptDir + \"/build/Default/") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (".app\")\n  time.sleep (0.5)\n  application = atomac.getAppRefByBundleId ('") ;
  result.appendString (in_BUNDLE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (".") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("')\n  return application\n\n//-----------------------------------------------------------------------------*\n//   QUIT APPLICATION                                                           *\n//-----------------------------------------------------------------------------*\n\ndef quitApplication ():\n  atomac.terminateAppByBundleId ('") ;
  result.appendString (in_BUNDLE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (".") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("')\n  time.sleep (0.5)\n\n//-----------------------------------------------------------------------------*\n//   PREFERENCES WINDOW                                                         *\n//-----------------------------------------------------------------------------*\n\ndef setUpPreferencesWindow (application) :\n  time.sleep (0.5)\n  window = application.windows ('") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("')[0]\n") ;
  GGS_uint index_1788_ (0) ;
  if (in_OUTLET_5F_IDENTIFIER_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_1788 (in_OUTLET_5F_IDENTIFIER_5F_LIST) ;
    while (enumerator_1788.hasCurrentObject ()) {
      result.appendString ("  global ") ;
      result.appendString (enumerator_1788.current_mValue (HERE).stringValue ()) ;
      result.appendString ("\n  ") ;
      result.appendString (enumerator_1788.current_mValue (HERE).stringValue ()) ;
      result.appendString (" = window.findFirst (AXIdentifier='") ;
      result.appendString (enumerator_1788.current_mValue (HERE).stringValue ()) ;
      result.appendString ("')\n") ;
      enumerator_1788.gotoNextObject () ;
      index_1788_.increment () ;
    }
  }
  result.appendString ("\n//-----------------------------------------------------------------------------*\n//   CHECK TEXT FIELD VALUE                                                     *\n//-----------------------------------------------------------------------------*\n\ndef checkTextFieldValue (textField, expectedValue, line):\n  if textField.AXValue != expectedValue :\n    print '*** Check error at line ' + str (line) + ' ***'\n    sys.exit (1)\n\n//-----------------------------------------------------------------------------*\n//   SET TEXT FIELD                                                             *\n//-----------------------------------------------------------------------------*\n\ndef setTextFieldValue (textField, value):\n  textField.AXFocused = True\n  textField.AXValue = value\n  textField.Confirm ()\n  time.sleep (0.5)\n\n//-----------------------------------------------------------------------------*\n//   MAIN                                                                       *\n//-----------------------------------------------------------------------------*\n\napplication = launchApplication ()\nsetUpPreferencesWindow (application)\n\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'predefinedOutletClasses'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_predefinedOutletClasses (
  "controllers",
  0,
  gWrapperAllFiles_predefinedOutletClasses_3,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_predefinedOutletClasses (
  "standard-properties",
  0,
  gWrapperAllFiles_predefinedOutletClasses_1,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_predefinedOutletClasses (
  "xcode-project",
  0,
  gWrapperAllFiles_predefinedOutletClasses_2,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_0 [4] = {
  & gWrapperDirectory_3_predefinedOutletClasses,
  & gWrapperDirectory_1_predefinedOutletClasses,
  & gWrapperDirectory_2_predefinedOutletClasses,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_predefinedOutletClasses (
  "",
  0,
  gWrapperAllFiles_predefinedOutletClasses_0,
  3,
  gWrapperAllDirectories_predefinedOutletClasses_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedOutletClasses sourceFile'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedOutletClasses_sourceFile (Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\nenum GridStyle {\n  noGrid, cross, line\n}\n\n//----------------------------------------------------------------------------------------\n\ntransient property struct CGFloat ;\n\ntransient property class NSImage ;\n\ntransient property class EBShape ;\n\nextern outlet class EBGraphicView : NSView $graphicController ;\nbinding EBGraphicView $underObjectsDisplay : transient EBShape ;\nbinding EBGraphicView $overObjectsDisplay : transient EBShape ;\nbinding EBGraphicView $arrowKeyMagnitude : transient Int ;\nbinding EBGraphicView $shiftArrowKeyMagnitude : transient Int ;\nbinding EBGraphicView $backColor : transient NSColor ;\nbinding EBGraphicView $mouseGrid : transient Int ;\nbinding EBGraphicView $gridStep : transient Int ;\nbinding EBGraphicView $gridStyle : transient GridStyle ;\nbinding EBGraphicView $gridDisplayFactor : transient Int ;\nbinding EBGraphicView $gridLineColor : transient NSColor ;\nbinding EBGraphicView $gridCrossColor : transient NSColor ;\nbinding EBGraphicView $zoom : property Int ;\nbinding EBGraphicView $horizontalFlip : transient Bool ;\nbinding EBGraphicView $verticalFlip : transient Bool ;\nbinding EBGraphicView $xPlacardUnit : transient Int ;\nbinding EBGraphicView $yPlacardUnit : transient Int ;\nbinding EBGraphicView $backgroundImageData : transient Data ;\nbinding EBGraphicView $backgroundImageOpacity : transient Double ;\nbinding EBGraphicView $foregroundImageData : transient Data ;\nbinding EBGraphicView $foregroundImageOpacity : transient Double ;\n\nextern outlet class EBEnclosingGraphicView : NSView $graphicController ;\nbinding EBEnclosingGraphicView $underObjectsDisplay : transient EBShape ;\nbinding EBEnclosingGraphicView $overObjectsDisplay : transient EBShape ;\nbinding EBEnclosingGraphicView $arrowKeyMagnitude : transient Int ;\nbinding EBEnclosingGraphicView $shiftArrowKeyMagnitude : transient Int ;\nbinding EBEnclosingGraphicView $backColor : transient NSColor ;\nbinding EBEnclosingGraphicView $mouseGrid : transient Int ;\nbinding EBEnclosingGraphicView $gridStep : transient Int ;\nbinding EBEnclosingGraphicView $gridStyle : transient GridStyle ;\nbinding EBEnclosingGraphicView $gridDisplayFactor : transient Int ;\nbinding EBEnclosingGraphicView $gridLineColor : transient NSColor ;\nbinding EBEnclosingGraphicView $gridCrossColor : transient NSColor ;\nbinding EBEnclosingGraphicView $zoom : property Int ;\nbinding EBEnclosingGraphicView $horizontalFlip : transient Bool ;\nbinding EBEnclosingGraphicView $verticalFlip : transient Bool ;\nbinding EBEnclosingGraphicView $xPlacardUnit : transient Int ;\nbinding EBEnclosingGraphicView $yPlacardUnit : transient Int ;\nbinding EBEnclosingGraphicView $backgroundImageData : transient Data ;\nbinding EBEnclosingGraphicView $backgroundImageOpacity : transient Double ;\nbinding EBEnclosingGraphicView $foregroundImageData : transient Data ;\nbinding EBEnclosingGraphicView $foregroundImageOpacity : transient Double ;\n\nextern outlet class NSView $hidden ;\n\nextern outlet class NSControl : NSView $enabled $run ;\n\noutlet class EBButton : NSControl ;\nbinding EBButton $title : transient String ;\n\noutlet class EBColorObserverWell : NSControl ;\nbinding EBColorObserverWell $colorObserver : transient NSColor ;\n\noutlet class EBColorWell : NSControl ;\nbinding EBColorWell $color : property NSColor {sendContinously : Bool} ;\n\n\noutlet class EBDatePicker : NSControl ;\nbinding EBDatePicker $date : property Date ;\n\noutlet class EBDoubleField : NSControl ;\nbinding EBDoubleField $value : property Double {sendContinously : Bool, autoFormatter:Bool} ;\n\n\noutlet class EBDoubleObserverField : NSControl ;\nbinding EBDoubleObserverField $valueObserver : transient Double {autoFormatter:Bool} ;\n\n\noutlet class EBIntField : NSControl ;\nbinding EBIntField $value : property Int {sendContinously : Bool, autoFormatter:Bool} ;\n\n\noutlet class EBIntObserverField : NSControl ;\nbinding EBIntObserverField $valueObserver : transient Int {autoFormatter:Bool} ;\n\n\noutlet class EBFontButton : NSControl ;\nbinding EBFontButton $fontValue : property NSFont ;\n\n\noutlet class EBPopUpButton : NSControl ;\nbinding EBPopUpButton $selectedTag : property Int ;\nbinding EBPopUpButton $selectedIndex : property enum ;\n\n\noutlet class EBGroupButton : NSControl ;\nbinding EBGroupButton $selectedIndex : property Int ;\n\n\noutlet class EBImageObserverView : NSView ;\nbinding EBImageObserverView $image : transient NSImage ;\nbinding EBImageObserverView $tooltip : transient String ;\n\n\noutlet class EBMenu ;\n\n\noutlet class EBMenuItem $enabled $run ;\n\n\noutlet class EBCheckedMenuItem ;\nbinding EBCheckedMenuItem $checked : property Bool ;\n\n\noutlet class EBProgressIndicator : NSView ;\n\n\noutlet class EBSegmentedControl : NSControl ;\nbinding EBSegmentedControl $selectedIndex : property Int ;\n\n\noutlet class EBSlider : NSControl ;\nbinding EBSlider $doubleValue : property Double {sendContinously:Bool} ;\nbinding EBSlider $intValue : property Int {sendContinously:Bool} ;\n\n\noutlet class EBStepper : NSControl ;\nbinding EBStepper $value : property Int {sendContinously:Bool} ;\n\n\noutlet class EBSwitch : NSControl ;\nbinding EBSwitch $value : property Bool ;\n\n\noutlet class EBTableView : NSControl $tableValue ;\n\n\noutlet class EBTextField : NSControl ;\nbinding EBTextField $value : property String {sendContinously : Bool} ;\n\noutlet class EBTextObserverField : NSView ;\nbinding EBTextObserverField $valueObserver : transient String ;\nbinding EBTextObserverField $backColor : transient NSColor ;\n\n\noutlet class EBTextObserverView : NSView ;\nbinding EBTextObserverView $valueObserver : transient String ;\n\n\noutlet class EBTextView : NSControl ;\nbinding EBTextView $value : property String ;\n\noutlet class EBWindow ;\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gOption_easyBindings_5F_options_outputDeclarationDependencyGraph ("easyBindings_options",
                                         "outputDeclarationDependencyGraph",
                                         103,
                                         "output-declaration-graph",
                                         "Output a declaration dependancy graph graphviz file") ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutTableViewControllerDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_0 = this ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_1 = this ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_2 = this ;
  GGS_lstring var_node_1449 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 33)).add_operation (temp_1.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 33)), temp_2.readProperty_mControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1449, temp_3, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 34)) ;
  }
  {
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1449, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 35)) ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_6 = this ;
    test_5 = temp_6.readProperty_mIsRoot ().operator_not (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 36)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      {
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_7 = this ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_8 = this ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_9 = this ;
      ioArgument_ioGraph.setter_addEdge (var_node_1449, GGS_lstring::init_21__21_ (temp_7.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 37)).add_operation (temp_8.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 37)), temp_9.readProperty_mToManyPropertyName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 37)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_11 = this ;
      test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        {
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_12 = this ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_13 = this ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_14 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_1449, GGS_lstring::init_21__21_ (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 39)).add_operation (temp_13.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 39)), temp_14.readProperty_mToManyPropertyName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 39)) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutTableViewControllerDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_autoLayoutTableViewControllerDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_0 = this ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_1 = this ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 46)).add_operation (temp_1.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 46)), temp_2.readProperty_mControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutTableViewControllerDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_5245 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_actionMap var_controllerActions_5409 = GGS_actionMap::init (inCompiler COMMA_HERE) ;
  {
  var_controllerActions_5409.setter_insertKey (GGS_string ("add").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 147)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 147)) ;
  }
  {
  var_controllerActions_5409.setter_insertKey (GGS_string ("remove").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 148)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 148)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_mIsRoot ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_propertyMap var_rootProperties_5636 ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_3 = this ;
      GGS_classKind joker_5627 ; // Joker input parameter
      GGS_actionMap joker_5652_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_5652_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_3.readProperty_mRootEntityName (), joker_5627, var_rootProperties_5636, joker_5652_2, joker_5652_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 150)) ;
      GGS_propertyKind var_classKind_5720 ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_4 = this ;
      GGS_actionMap joker_5731_2 ; // Joker input parameter
      GGS_bool joker_5731_1 ; // Joker input parameter
      var_rootProperties_5636.method_searchKey (temp_4.readProperty_mToManyPropertyName (), var_classKind_5720, joker_5731_2, joker_5731_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 151)) ;
      switch (var_classKind_5720.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_5781__0 ;
          GGS_propertyAccessibility extractedValue_5781__1 ;
          var_classKind_5720.getAssociatedValuesFor_property (extractedValue_5781__0, extractedValue_5781__1) ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 154)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_5883_typeName_0 ;
          GGS_propertyAccessibility extractedValue_5893__1 ;
          GGS_bool extractedValue_5896_graphic_2 ;
          GGS_toManyRelationshipOptionAST extractedValue_5905__3 ;
          var_classKind_5720.getAssociatedValuesFor_toMany (extractedValue_5883_typeName_0, extractedValue_5893__1, extractedValue_5896_graphic_2, extractedValue_5905__3) ;
          GGS_propertyKind var_kind_5922 = GGS_propertyKind::class_func_arrayController (extractedValue_5883_typeName_0, extractedValue_5896_graphic_2  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 156)) ;
          {
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_7 = this ;
          var_entry_5245.mProperty_mPropertyMap.setter_insertKey (temp_7.readProperty_mControllerName (), var_kind_5922, var_controllerActions_5409, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 160)) ;
          }
          {
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_8 = this ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_9 = this ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_10 = this ;
          var_entry_5245.mProperty_mPropertyGenerationList.setter_append (GGS_autoLayoutTableViewControllerPropertyGeneration::init_21__21__21_ (temp_8.readProperty_mControllerName ().readProperty_string (), GGS_string ("rootObject.").add_operation (temp_9.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 165)), temp_10.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 162)) ;
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_6409__0 ;
          GGS_propertyAccessibility extractedValue_6409__1 ;
          GGS_bool extractedValue_6409__2 ;
          GGS_toOneOppositeRelationship extractedValue_6409__3 ;
          GGS_bool extractedValue_6409__4 ;
          var_classKind_5720.getAssociatedValuesFor_toOne (extractedValue_6409__0, extractedValue_6409__1, extractedValue_6409__2, extractedValue_6409__3, extractedValue_6409__4) ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 170)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_6521__0 ;
          GGS_bool extractedValue_6521__1 ;
          var_classKind_5720.getAssociatedValuesFor_arrayController (extractedValue_6521__0, extractedValue_6521__1) ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_13 = this ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 172)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_6636__0 ;
          var_classKind_5720.getAssociatedValuesFor_selectionController (extractedValue_6636__0) ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_15 = this ;
          GenericArray <FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_15.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray16  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 174)) ;
        }
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_propertyKind var_classKind_6805 ;
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_17 = this ;
    GGS_actionMap joker_6816_2 ; // Joker input parameter
    GGS_bool joker_6816_1 ; // Joker input parameter
    var_entry_5245.readProperty_mPropertyMap ().method_searchKey (temp_17.readProperty_mToManyPropertyName (), var_classKind_6805, joker_6816_2, joker_6816_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 177)) ;
    switch (var_classKind_6805.enumValue ()) {
    case GGS_propertyKind::Enumeration::invalid:
      break ;
    case GGS_propertyKind::Enumeration::enum_property:
      {
        GGS_typeKind extractedValue_6866__0 ;
        GGS_propertyAccessibility extractedValue_6866__1 ;
        var_classKind_6805.getAssociatedValuesFor_property (extractedValue_6866__0, extractedValue_6866__1) ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_18 = this ;
        GenericArray <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 180)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_toMany:
      {
        GGS_lstring extractedValue_6968_typeName_0 ;
        GGS_propertyAccessibility extractedValue_6978__1 ;
        GGS_bool extractedValue_6981_graphic_2 ;
        GGS_toManyRelationshipOptionAST extractedValue_6990__3 ;
        var_classKind_6805.getAssociatedValuesFor_toMany (extractedValue_6968_typeName_0, extractedValue_6978__1, extractedValue_6981_graphic_2, extractedValue_6990__3) ;
        GGS_propertyKind var_kind_7007 = GGS_propertyKind::class_func_arrayController (extractedValue_6968_typeName_0, extractedValue_6981_graphic_2  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 182)) ;
        {
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_20 = this ;
        var_entry_5245.mProperty_mPropertyMap.setter_insertKey (temp_20.readProperty_mControllerName (), var_kind_7007, var_controllerActions_5409, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 186)) ;
        }
        {
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_21 = this ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_22 = this ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_23 = this ;
        var_entry_5245.mProperty_mPropertyGenerationList.setter_append (GGS_autoLayoutTableViewControllerPropertyGeneration::init_21__21__21_ (temp_21.readProperty_mControllerName ().readProperty_string (), temp_22.readProperty_mToManyPropertyName ().readProperty_string (), temp_23.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 188)) ;
        }
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_toOne:
      {
        GGS_lstring extractedValue_7461__0 ;
        GGS_propertyAccessibility extractedValue_7461__1 ;
        GGS_bool extractedValue_7461__2 ;
        GGS_toOneOppositeRelationship extractedValue_7461__3 ;
        GGS_bool extractedValue_7461__4 ;
        var_classKind_6805.getAssociatedValuesFor_toOne (extractedValue_7461__0, extractedValue_7461__1, extractedValue_7461__2, extractedValue_7461__3, extractedValue_7461__4) ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_24 = this ;
        GenericArray <FixItDescription> fixItArray25 ;
        inCompiler->emitSemanticError (temp_24.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray25  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 195)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_arrayController:
      {
        GGS_lstring extractedValue_7573__0 ;
        GGS_bool extractedValue_7573__1 ;
        var_classKind_6805.getAssociatedValuesFor_arrayController (extractedValue_7573__0, extractedValue_7573__1) ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_26 = this ;
        GenericArray <FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (temp_26.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 197)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_selectionController:
      {
        GGS_string extractedValue_7688__0 ;
        var_classKind_6805.getAssociatedValuesFor_selectionController (extractedValue_7688__0) ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_28 = this ;
        GenericArray <FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (temp_28.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray29  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 199)) ;
      }
      break ;
    }
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_5245, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 202)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutTableViewControllerDeclarationAST thirdAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerDeclarationAST::method_thirdAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  GGS_generationStruct & ioArgument_ioGeneration,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap var_preferencesPropertyMap_8344 ;
  GGS_classKind joker_8331 ; // Joker input parameter
  GGS_actionMap joker_8372_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_8372_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 215)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 215)), inCompiler COMMA_HERE), joker_8331, var_preferencesPropertyMap_8344, joker_8372_2, joker_8372_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 214)) ;
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 221)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("allowsEmptySelection")  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 221)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("allowsMultipleSelection")  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 221)) ;
  GGS_stringset var_attributes_8482 = temp_0 ;
  GGS_typeKindList temp_1 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 222)) ;
  temp_1.plusPlusAssignOperation (GGS_typeKindList_2E_element::init_21_ (GGS_typeKind::class_func_boolType (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 222)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 222)) ;
  GGS_typeKindList var_allowedTypes_8564 = temp_1 ;
  GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 223)) ;
  GGS_stringset var_definedAttributes_8625 = temp_2 ;
  GGS__32_stringlist temp_3 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 224)) ;
  GGS__32_stringlist var_attributeListForGeneration_8667 = temp_3 ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_4 = this ;
  UpEnumerator_autoLayoutTableViewControllerAttributListAST enumerator_8712 (temp_4.readProperty_mTableViewControllerAttributListAST ()) ;
  while (enumerator_8712.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_attributes_8482.getter_hasKey (enumerator_8712.current_mAttributeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 226)).operator_not (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 226)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_8712.current_mAttributeName (HERE).readProperty_location (), GGS_string ("unknown attribute"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 227)) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = var_definedAttributes_8625.getter_hasKey (enumerator_8712.current_mAttributeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 228)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_8712.current_mAttributeName (HERE).readProperty_location (), GGS_string ("attribute multiply defined"), fixItArray8  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 229)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        {
        var_definedAttributes_8625.setter_insert (enumerator_8712.current_mAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 231)) ;
        }
      }
    }
    GGS_string var_valueAsString_9097 ;
    callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_8712.current_mAttributeValue (HERE).ptr (), var_allowedTypes_8564, var_preferencesPropertyMap_8344, var_valueAsString_9097, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 233)) ;
    {
    var_attributeListForGeneration_8667.setter_append (enumerator_8712.current_mAttributeName (HERE).readProperty_string (), var_valueAsString_9097, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 234)) ;
    }
    enumerator_8712.gotoNextObject () ;
  }
  UpEnumerator_stringset enumerator_9198 (var_attributes_8482) ;
  while (enumerator_9198.hasCurrentObject ()) {
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = var_definedAttributes_8625.getter_hasKey (enumerator_9198.current (HERE) COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 237)).operator_not (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 237)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_10 = this ;
        GenericArray <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (temp_10.readProperty_mControllerName ().readProperty_location (), GGS_string ("attribute '").add_operation (enumerator_9198.current (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 238)).add_operation (GGS_string ("' not defined"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 238)), fixItArray11  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 238)) ;
      }
    }
    enumerator_9198.gotoNextObject () ;
  }
  GGS_propertyMap var_boundModelPropertyMap_9369 ;
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_13 = this ;
    test_12 = temp_13.readProperty_mIsRoot ().boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_14 = this ;
      GGS_classKind joker_9493 ; // Joker input parameter
      GGS_actionMap joker_9535_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_9535_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_14.readProperty_mRootEntityName (), joker_9493, var_boundModelPropertyMap_9369, joker_9535_2, joker_9535_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 244)) ;
    }
  }
  if (GalgasBool::boolFalse == test_12) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_15 = this ;
    GGS_classKind joker_9627 ; // Joker input parameter
    GGS_actionMap joker_9669_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_9669_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_15.readProperty_mClassName (), joker_9627, var_boundModelPropertyMap_9369, joker_9669_2, joker_9669_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 251)) ;
  }
  GGS_propertyKind var_boundModelClassKind_9778 ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_16 = this ;
  GGS_actionMap joker_9804_2 ; // Joker input parameter
  GGS_bool joker_9804_1 ; // Joker input parameter
  var_boundModelPropertyMap_9369.method_searchKey (temp_16.readProperty_mToManyPropertyName (), var_boundModelClassKind_9778, joker_9804_2, joker_9804_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 258)) ;
  GGS_propertyMap var_propertyMap_9918 ;
  GGS_autoLayoutTableViewControllerModelKind var_arrayControllerModelKind_9976 ;
  GGS_bool var_graphic_10013 ;
  GGS_string var_elementTypeName_10035 ;
  switch (var_boundModelClassKind_9778.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_10098__0 ;
      GGS_propertyAccessibility extractedValue_10098__1 ;
      var_boundModelClassKind_9778.getAssociatedValuesFor_property (extractedValue_10098__0, extractedValue_10098__1) ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_17 = this ;
      GenericArray <FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (temp_17.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray18  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 270)) ;
      var_graphic_10013.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_9976.drop () ; // Release error dropped variable
      var_propertyMap_9918.drop () ; // Release error dropped variable
      var_elementTypeName_10035.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_10276_typeName_0 ;
      GGS_propertyAccessibility extractedValue_10286_accessibility_1 ;
      GGS_bool extractedValue_10301_isGraphic_2 ;
      GGS_toManyRelationshipOptionAST extractedValue_10312__3 ;
      var_boundModelClassKind_9778.getAssociatedValuesFor_toMany (extractedValue_10276_typeName_0, extractedValue_10286_accessibility_1, extractedValue_10301_isGraphic_2, extractedValue_10312__3) ;
      var_elementTypeName_10035 = extractedValue_10276_typeName_0.readProperty_string () ;
      var_graphic_10013 = extractedValue_10301_isGraphic_2 ;
      GGS_autoLayoutTableViewControllerModelKind temp_19 ;
      const GalgasBool test_20 = extractedValue_10286_accessibility_1.getter_isTransient (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 276)).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        temp_19 = GGS_autoLayoutTableViewControllerModelKind::class_func_transientArray (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 277)) ;
      }else if (GalgasBool::boolFalse == test_20) {
        temp_19 = GGS_autoLayoutTableViewControllerModelKind::class_func_entityArray (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 278)) ;
      }
      var_arrayControllerModelKind_9976 = temp_19 ;
      GGS_classKind joker_10544 ; // Joker input parameter
      GGS_actionMap joker_10562 ; // Joker input parameter
      GGS_propertyGenerationList joker_10566 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_10276_typeName_0, joker_10544, var_propertyMap_9918, joker_10562, joker_10566, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 280)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_10585__0 ;
      GGS_propertyAccessibility extractedValue_10585__1 ;
      GGS_bool extractedValue_10585__2 ;
      GGS_toOneOppositeRelationship extractedValue_10585__3 ;
      GGS_bool extractedValue_10585__4 ;
      var_boundModelClassKind_9778.getAssociatedValuesFor_toOne (extractedValue_10585__0, extractedValue_10585__1, extractedValue_10585__2, extractedValue_10585__3, extractedValue_10585__4) ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_21 = this ;
      GenericArray <FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray22  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 282)) ;
      var_graphic_10013.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_9976.drop () ; // Release error dropped variable
      var_propertyMap_9918.drop () ; // Release error dropped variable
      var_elementTypeName_10035.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_10773__0 ;
      GGS_bool extractedValue_10773__1 ;
      var_boundModelClassKind_9778.getAssociatedValuesFor_arrayController (extractedValue_10773__0, extractedValue_10773__1) ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_23 = this ;
      GenericArray <FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray24  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 286)) ;
      var_graphic_10013.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_9976.drop () ; // Release error dropped variable
      var_propertyMap_9918.drop () ; // Release error dropped variable
      var_elementTypeName_10035.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_10964__0 ;
      var_boundModelClassKind_9778.getAssociatedValuesFor_selectionController (extractedValue_10964__0) ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_25 = this ;
      GenericArray <FixItDescription> fixItArray26 ;
      inCompiler->emitSemanticError (temp_25.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray26  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 290)) ;
      var_graphic_10013.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_9976.drop () ; // Release error dropped variable
      var_propertyMap_9918.drop () ; // Release error dropped variable
      var_elementTypeName_10035.drop () ; // Release error dropped variable
    }
    break ;
  }
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration temp_27 = GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 294)) ;
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration var_arrayControllerBoundColumnListForGeneration_11198 = temp_27 ;
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration temp_28 = GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 295)) ;
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration var_arrayControllerSortedColumnListForGeneration_11313 = temp_28 ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_29 = this ;
  UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST enumerator_11415 (temp_29.readProperty_mTableViewControllerBoundColumnListAST ()) ;
  while (enumerator_11415.hasCurrentObject ()) {
    GGS_autoLayoutClassParameterList temp_30 = GGS_autoLayoutClassParameterList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 298)) ;
    GGS_autoLayoutClassParameterList var_formalArgumentList_11543 = temp_30 ;
    {
    var_formalArgumentList_11543.setter_append (GGS_string ("title").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 299)), GGS_autoLayoutClassParameterType::class_func_typeString (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 299)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 299)) ;
    }
    {
    var_formalArgumentList_11543.setter_append (GGS_string ("minWidth").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 300)), GGS_autoLayoutClassParameterType::class_func_typeInt (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 300)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 300)) ;
    }
    {
    var_formalArgumentList_11543.setter_append (GGS_string ("maxWidth").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 301)), GGS_autoLayoutClassParameterType::class_func_typeInt (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 301)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 301)) ;
    }
    {
    var_formalArgumentList_11543.setter_append (GGS_string ("headerAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 302)), GGS_autoLayoutClassParameterType::class_func_typeEnum (GGS_string ("TextAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 302))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 302)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 302)) ;
    }
    {
    var_formalArgumentList_11543.setter_append (GGS_string ("contentAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 303)), GGS_autoLayoutClassParameterType::class_func_typeEnum (GGS_string ("TextAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 303))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 303)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 303)) ;
    }
    GGS__32_stringlist temp_31 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 304)) ;
    GGS__32_stringlist var_actualParameterList_11993 = temp_31 ;
    GalgasBool test_32 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_32) {
      test_32 = GGS_bool (ComparisonKind::notEqual, var_formalArgumentList_11543.getter_count (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 305)).objectCompare (enumerator_11415.current_mColumnParameterListAST (HERE).getter_count (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 305)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_32) {
        GenericArray <FixItDescription> fixItArray33 ;
        inCompiler->emitSemanticError (enumerator_11415.current_mPropertyName (HERE).readProperty_location (), enumerator_11415.current_mColumnParameterListAST (HERE).getter_count (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 306)).getter_string (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 306)).add_operation (GGS_string (" parameter(s), "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 306)).add_operation (var_formalArgumentList_11543.getter_count (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 306)).getter_string (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 306)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 306)).add_operation (GGS_string (" required"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 306)), fixItArray33  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 306)) ;
      }
    }
    if (GalgasBool::boolFalse == test_32) {
      UpEnumerator_autoLayoutClassParameterList enumerator_12238 (var_formalArgumentList_11543) ;
      UpEnumerator_astAutoLayoutViewInstructionParameterList enumerator_12298 (enumerator_11415.current_mColumnParameterListAST (HERE)) ;
      while (enumerator_12238.hasCurrentObject () && enumerator_12298.hasCurrentObject ()) {
        GalgasBool test_34 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_34) {
          test_34 = GGS_bool (ComparisonKind::notEqual, enumerator_12238.current_mParameterName (HERE).readProperty_string ().objectCompare (enumerator_12298.current_mParameterName (HERE).readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_34) {
            GenericArray <FixItDescription> fixItArray35 ;
            inCompiler->emitSemanticError (enumerator_12298.current_mParameterName (HERE).readProperty_location (), GGS_string ("required argument name: ").add_operation (enumerator_12238.current_mParameterName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 310)), fixItArray35  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 310)) ;
          }
        }
        GalgasBool test_36 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_36) {
          const GGS_autoLayoutClassParameterType_2E_typeEnum var_formalTypeEnum_12492 = enumerator_12238.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 312)).unwrappedValue () ;
          if (!enumerator_12238.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 312)).isValuated ()) {
            test_36 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_36) {
            const GGS_autoLayoutClassParameterType_2E_typeEnum var_actualTypeEnum_12537 = enumerator_12298.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 312)).unwrappedValue () ;
            if (!enumerator_12298.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 312)).isValuated ()) {
              test_36 = GalgasBool::boolFalse ;
            }
            if (GalgasBool::boolTrue == test_36) {
              GGS_classKind var_typeKind_12657 ;
              GGS_propertyMap joker_12667_3 ; // Joker input parameter
              GGS_actionMap joker_12667_2 ; // Joker input parameter
              GGS_propertyGenerationList joker_12667_1 ; // Joker input parameter
              ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (var_formalTypeEnum_12492.readProperty_name (), var_typeKind_12657, joker_12667_3, joker_12667_2, joker_12667_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 313)) ;
              GalgasBool test_37 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_37) {
                const GGS_classKind_2E_atomic var_atomicTypeKind_12689 = var_typeKind_12657.getter_getAtomic (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 314)).unwrappedValue () ;
                if (!var_typeKind_12657.getter_getAtomic (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 314)).isValuated ()) {
                  test_37 = GalgasBool::boolFalse ;
                }
                if (GalgasBool::boolTrue == test_37) {
                  const GGS_typeKind_2E_enumType var_atomicEnumType_12730 = var_atomicTypeKind_12689.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 314)).unwrappedValue () ;
                  if (!var_atomicTypeKind_12689.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 314)).isValuated ()) {
                    test_37 = GalgasBool::boolFalse ;
                  }
                  if (GalgasBool::boolTrue == test_37) {
                    GGS_uint joker_12855 ; // Joker input parameter
                    var_atomicEnumType_12730.readProperty_constantMap ().method_searchKey (var_actualTypeEnum_12537.readProperty_name (), joker_12855, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 315)) ;
                  }
                }
              }
              if (GalgasBool::boolFalse == test_37) {
                GenericArray <FixItDescription> fixItArray38 ;
                inCompiler->emitSemanticError (var_formalTypeEnum_12492.readProperty_name ().readProperty_location (), GGS_string ("this type name is not an enum"), fixItArray38  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 317)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_36) {
          GalgasBool test_39 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_39) {
            test_39 = GGS_bool (ComparisonKind::notEqual, enumerator_12298.current_mParameterType (HERE).objectCompare (enumerator_12238.current_mParameterType (HERE))).boolEnum () ;
            if (GalgasBool::boolTrue == test_39) {
              GenericArray <FixItDescription> fixItArray40 ;
              inCompiler->emitSemanticError (enumerator_12298.current_mParameterName (HERE).readProperty_location (), GGS_string ("the formal parameter requires ").add_operation (extensionGetter_string (enumerator_12238.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 320)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 320)).add_operation (GGS_string (", actual parameter is "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 320)).add_operation (extensionGetter_string (enumerator_12298.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 320)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 320)), fixItArray40  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 320)) ;
            }
          }
        }
        GalgasBool test_41 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_41) {
          const GGS_astAutoLayoutViewInstructionParameterValue_2E_string var_actualString_13146 = enumerator_12298.current_mParameter (HERE).getter_getString (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 322)).unwrappedValue () ;
          if (!enumerator_12298.current_mParameter (HERE).getter_getString (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 322)).isValuated ()) {
            test_41 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_41) {
            {
            var_actualParameterList_11993.setter_append (enumerator_12238.current_mParameterName (HERE).readProperty_string (), var_actualString_13146.readProperty_value (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 323)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_41) {
          GenericArray <FixItDescription> fixItArray42 ;
          inCompiler->emitSemanticError (enumerator_12298.current_mParameterName (HERE).readProperty_location (), GGS_string ("parameter value is not string convertible"), fixItArray42  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 325)) ;
        }
        enumerator_12238.gotoNextObject () ;
        enumerator_12298.gotoNextObject () ;
      }
    }
    GalgasBool test_43 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_43) {
      test_43 = GGS_bool (ComparisonKind::notEqual, enumerator_11415.current_mSortPropertyName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_43) {
        GGS_propertyKind var_sortPropertyKind_13512 ;
        GGS_actionMap joker_13538_2 ; // Joker input parameter
        GGS_bool joker_13538_1 ; // Joker input parameter
        var_propertyMap_9918.method_searchKey (enumerator_11415.current_mSortPropertyName (HERE), var_sortPropertyKind_13512, joker_13538_2, joker_13538_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 331)) ;
        GalgasBool test_44 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_44) {
          test_44 = extensionGetter_isComparable (var_sortPropertyKind_13512, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 336)).operator_not (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 336)).boolEnum () ;
          if (GalgasBool::boolTrue == test_44) {
            GenericArray <FixItDescription> fixItArray45 ;
            inCompiler->emitSemanticError (enumerator_11415.current_mSortPropertyName (HERE).readProperty_location (), GGS_string ("this property is not comparable"), fixItArray45  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 337)) ;
          }
        }
        {
        var_arrayControllerSortedColumnListForGeneration_11313.setter_append (enumerator_11415.current_mPropertyName (HERE).readProperty_string (), var_sortPropertyKind_13512, enumerator_11415.current_mSortPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 339)) ;
        }
      }
    }
    GGS_propertyKind var_propertyKind_13934 ;
    GGS_actionMap joker_13954_2 ; // Joker input parameter
    GGS_bool joker_13954_1 ; // Joker input parameter
    var_propertyMap_9918.method_searchKey (enumerator_11415.current_mPropertyName (HERE), var_propertyKind_13934, joker_13954_2, joker_13954_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 346)) ;
    {
    var_arrayControllerBoundColumnListForGeneration_11198.setter_append (enumerator_11415.current_mEditable (HERE), enumerator_11415.current_mSortPropertyName (HERE).readProperty_string (), enumerator_11415.current_mPropertyName (HERE).readProperty_string (), extensionGetter_swiftTypeName (var_propertyKind_13934, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 355)), GGS_string::makeEmptyString (), var_actualParameterList_11993, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 351)) ;
    }
    enumerator_11415.gotoNextObject () ;
  }
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_46 = this ;
  GGS_string temp_47 ;
  const GalgasBool test_48 = temp_46.readProperty_mIsRoot ().boolEnum () ;
  if (GalgasBool::boolTrue == test_48) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_49 = this ;
    temp_47 = GGS_string ("self.rootObject.").add_operation (temp_49.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 366)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 366)) ;
  }else if (GalgasBool::boolFalse == test_48) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_50 = this ;
    temp_47 = GGS_string ("self.").add_operation (temp_50.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 367)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 367)) ;
  }
  GGS_string var_modelString_14533 = temp_47 ;
  {
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_51 = this ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_52 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_autoLayoutTableViewControllerGeneration::init_21__21__21__21__21__21__21__21__21__21_ (temp_51.readProperty_mClassName ().readProperty_string (), temp_52.readProperty_mControllerName (), var_modelString_14533, var_arrayControllerBoundColumnListForGeneration_11198, var_arrayControllerSortedColumnListForGeneration_11313, GGS_string ("ReadWriteArrayOf_").add_operation (var_elementTypeName_10035, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 376)), var_arrayControllerModelKind_9976, var_elementTypeName_10035, var_graphic_10013, var_attributeListForGeneration_8667, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 370)) ;
  }
  {
  ioArgument_ioGeneration.mProperty_mGenerateClass_5F_StoredArrayOf_5F_.setter_insert (var_elementTypeName_10035, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 383)) ;
  }
  {
  ioArgument_ioGeneration.mProperty_mGenerateClass_5F_TransientArrayOf_5F_.setter_insert (var_elementTypeName_10035, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 384)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutTableViewControllerPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutTableViewControllerPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool constinArgument_inPreferences,
                                                                                                 const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                                                 const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inPreferences.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 405)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 405)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 405)) ;
      const GGS_autoLayoutTableViewControllerPropertyGeneration temp_1 = this ;
      result_result.plusAssignOperation(GGS_string ("//   Table View controller: ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 406)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 406)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 406)) ;
      result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 407)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 407)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 407)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 407)) ;
      const GGS_autoLayoutTableViewControllerPropertyGeneration temp_2 = this ;
      const GGS_autoLayoutTableViewControllerPropertyGeneration temp_3 = this ;
      const GGS_autoLayoutTableViewControllerPropertyGeneration temp_4 = this ;
      result_result.plusAssignOperation(GGS_string ("@MainActor let preferences_").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 408)).add_operation (GGS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 408)).add_operation (temp_3.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 408)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 408)).add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 408)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 408)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 408)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 410)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 410)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 410)) ;
    const GGS_autoLayoutTableViewControllerPropertyGeneration temp_5 = this ;
    result_result.plusAssignOperation(GGS_string ("  //   Array controller: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 411)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 411)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 411)) ;
    result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 412)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 412)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 412)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 412)) ;
    const GGS_autoLayoutTableViewControllerPropertyGeneration temp_6 = this ;
    const GGS_autoLayoutTableViewControllerPropertyGeneration temp_7 = this ;
    const GGS_autoLayoutTableViewControllerPropertyGeneration temp_8 = this ;
    result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 413)).add_operation (GGS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 413)).add_operation (temp_7.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 413)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 413)).add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 413)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 413)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 413)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutTableViewControllerPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutTableViewControllerPropertyGeneration::getter_configurationCode (const GGS_bool constinArgument_inPreferences,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GGS_string temp_0 ;
  const GalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_string ("self.") ;
  }
  GGS_string var_prefix_16960 = temp_0 ;
  const GGS_autoLayoutTableViewControllerPropertyGeneration temp_2 = this ;
  result_result = GGS_string ("  //--- Array controller property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 421)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 421)) ;
  const GGS_autoLayoutTableViewControllerPropertyGeneration temp_3 = this ;
  const GGS_autoLayoutTableViewControllerPropertyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_16960, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 422)).add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 422)).add_operation (GGS_string (".bind_model ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 422)).add_operation (var_prefix_16960, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 422)).add_operation (temp_4.readProperty_mModelString (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 422)).add_operation (GGS_string ("_property, self.undoManager)\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 422)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 422)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutTableViewControllerPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutTableViewControllerPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'autoLayoutTableViewControllerGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutTableViewControllerGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutTableViewControllerGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_autoLayoutTableViewControllerGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_autoLayoutTableViewControllerGenerationTemplate_0,
  0,
  gWrapperAllDirectories_autoLayoutTableViewControllerGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutTableViewControllerGenerationTemplate autoLayoutTableViewControllerImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_autoLayoutTableViewControllerGenerationTemplate_autoLayoutTableViewControllerImplementation (Compiler * /* inCompiler */,
                                                                                                                            const GGS_string & in_OWNER_5F_NAME,
                                                                                                                            const GGS_string & in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME,
                                                                                                                            const GGS_string & /* in_MODEL_5F_STRING */,
                                                                                                                            const GGS_autoLayoutTableViewControllerModelKind & in_MODEL_5F_KIND,
                                                                                                                            const GGS_string & in_MODEL_5F_TYPE_5F_NAME,
                                                                                                                            const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & in_BOUND_5F_COLUMNS,
                                                                                                                            const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & in_SORTED_5F_COLUMNS,
                                                                                                                            const GGS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                                            const GGS_stringset & in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING,
                                                                                                                            const GGS__32_stringlist & in_ATTRIBUTE_5F_VALUES
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//    Auto Layout Table View Controller ") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString (" ") ;
  result.appendString (in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nfinal class Controller_") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString (" : NSObject, AutoLayoutTableViewDelegate {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Constant properties\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_952_ (0) ;
  if (in_ATTRIBUTE_5F_VALUES.isValid ()) {
    UpEnumerator__32_stringlist enumerator_952 (in_ATTRIBUTE_5F_VALUES) ;
    while (enumerator_952.hasCurrentObject ()) {
      result.appendString ("  private let ") ;
      result.appendString (enumerator_952.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (enumerator_952.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_952.gotoNextObject () ;
      index_952_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Undo manager\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mUndoManager : UndoManager\? = nil // SHOULD BE WEAK\n  var undoManager : UndoManager\? { return self.mUndoManager }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Sorted Array\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  let sortedArray_property = TransientArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mSortDescriptorArray = [(") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (", ") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (") -> ComparisonResult] ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Model\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mModel : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? = nil // SHOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var objects : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n    if let objects = self.mModel\?.propval {\n      return objects\n    }else{\n      return EBReferenceArray ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_model (_ inModel : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (", _ inUndoManager : UndoManager\?) {\n    self.mModel = inModel\n    self.mUndoManager = inUndoManager\n    self.sortedArray_property.setDataProvider (\n      inModel,\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_SORTED_5F_COLUMNS.getter_count (SOURCE_FILE ("auto-layout-table-view-controller.swift.galgasTemplate", 62)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("      sortCallback: { [weak self] (left, right) in self\?.isOrderedBefore (left, right) \?\? true },\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("      sortCallback: nil,\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("      addSortObserversCallback: { (observer) in\n") ;
  GGS_uint index_3030_ (0) ;
  if (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING.isValid ()) {
    UpEnumerator_stringset enumerator_3030 (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING) ;
    while (enumerator_3030.hasCurrentObject ()) {
      result.appendString ("        inModel.toMany_") ;
      result.appendString (enumerator_3030.current_key (HERE).stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by: observer)\n") ;
      enumerator_3030.gotoNextObject () ;
      index_3030_.increment () ;
    }
  }
  result.appendString ("      },\n      removeSortObserversCallback: {(observer) in\n") ;
  GGS_uint index_3214_ (0) ;
  if (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING.isValid ()) {
    UpEnumerator_stringset enumerator_3214 (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING) ;
    while (enumerator_3214.hasCurrentObject ()) {
      result.appendString ("        inModel.toMany_") ;
      result.appendString (enumerator_3214.current_key (HERE).stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by: observer)\n") ;
      enumerator_3214.gotoNextObject () ;
      index_3214_.increment () ;
    }
  }
  result.appendString ("      }\n    )\n  }\n\n") ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, in_SORTED_5F_COLUMNS.getter_count (SOURCE_FILE ("auto-layout-table-view-controller.swift.galgasTemplate", 81)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func isOrderedBefore (_ left : ") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString (", _ right : ") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString (") -> Bool {\n    var order = ComparisonResult.orderedSame\n    for sortDescriptor in self.mSortDescriptorArray.reversed () {\n      order = sortDescriptor (left, right)\n      if order != .orderedSame {\n        break // Exit from for loop\n      }\n    }\n    return order == .orderedAscending\n  }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  /* final func unbind_model () {\n    self.sortedArray_property.resetDataProvider ()\n    self.mModel = nil\n    self.mUndoManager = nil\n  } */\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Selected Array\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mInternalSelectedArrayProperty = StandAloneArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedArray_property : ReadOnlyArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" { return self.mInternalSelectedArrayProperty }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedArray : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> { return self.selectedArray_property.propval }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedSet : EBReferenceSet <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> { return EBReferenceSet (self.selectedArray_property.propval.values) }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedIndexesSet : Set <Int> {\n    let selectedObjectSet = self.selectedSet\n    var result = Set <Int> ()\n    var idx = 0\n    if let model = self.mModel {\n      for object in model.propval.values {\n        if selectedObjectSet.contains (object) {\n          result.insert (idx)\n        }\n        idx += 1\n      }\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setSelection (_ inObjects : [") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("]) {\n    self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (inObjects))\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    sorted array observer\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mSortedArrayValuesObserver = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @MainActor override init () {\n    super.init ()\n    self.sortedArray_property.startsBeingObserved (by: self.mSortedArrayValuesObserver)\n") ;
  GGS_uint index_6424_ (0) ;
  if (in_BOUND_5F_COLUMNS.isValid ()) {
    UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration enumerator_6424 (in_BOUND_5F_COLUMNS) ;
    while (enumerator_6424.hasCurrentObject ()) {
      result.appendString ("  //--- Observe '") ;
      result.appendString (enumerator_6424.current_mDisplayedPropertyName (HERE).stringValue ()) ;
      result.appendString ("' column\n    self.sortedArray_property.toMany_") ;
      result.appendString (enumerator_6424.current_mDisplayedPropertyName (HERE).stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by: self.mSortedArrayValuesObserver)\n") ;
      const GalgasBool test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_6424.current_mSortPropertyName (HERE).objectCompare (GGS_string::makeEmptyString ())).operator_and (GGS_bool (ComparisonKind::notEqual, enumerator_6424.current_mSortPropertyName (HERE).objectCompare (enumerator_6424.current_mDisplayedPropertyName (HERE))) COMMA_SOURCE_FILE ("auto-layout-table-view-controller.swift.galgasTemplate", 161)).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString ("     self.sortedArray_property.toMany_") ;
        result.appendString (enumerator_6424.current_mSortPropertyName (HERE).stringValue ()) ;
        result.appendString ("_StartsBeingObserved (by: self.mSortedArrayValuesObserver)\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_6424.gotoNextObject () ;
      index_6424_.increment () ;
    }
  }
  result.appendString ("  //---\n    self.mSortedArrayValuesObserver.mEventCallBack = { [weak self] in\n       for tableView in self\?.mTableViewArray \?\? [] {\n        tableView.sortAndReloadData ()\n      }\n    }\n    noteObjectAllocation (self)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  deinit {\n    noteObjectDeallocation (self)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    bind_tableView\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mTableViewArray = [AutoLayoutTableView] ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_tableView (_ inTableView : AutoLayoutTableView) {\n    inTableView.configure (\n      allowsEmptySelection: allowsEmptySelection,\n      allowsMultipleSelection: allowsMultipleSelection,\n      rowCountCallBack: { [weak self] in self\?.sortedArray_property.propval.count \?\? 0 },\n      delegate: self\n    )\n") ;
  GGS_uint index_8024_ (0) ;
  if (in_BOUND_5F_COLUMNS.isValid ()) {
    UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration enumerator_8024 (in_BOUND_5F_COLUMNS) ;
    while (enumerator_8024.hasCurrentObject ()) {
      result.appendString ("  //--- Configure '") ;
      result.appendString (enumerator_8024.current_mDisplayedPropertyName (HERE).stringValue ()) ;
      result.appendString ("' column\n    inTableView.addColumn_") ;
      result.appendString (enumerator_8024.current_mColumnObjectTypeName (HERE).stringValue ()) ;
      result.appendString (" (\n      valueGetterDelegate: { [weak self] in return self\?.sortedArray_property.propval [$0].") ;
      result.appendString (enumerator_8024.current_mDisplayedPropertyName (HERE).stringValue ()) ;
      result.appendString (" },\n      valueSetterDelegate: ") ;
      const GalgasBool test_3 = enumerator_8024.current_mEditable (HERE).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("{ [weak self] (inRowIndex, inNewValue) in self\?.sortedArray_property.propval [inRowIndex].") ;
        result.appendString (enumerator_8024.current_mDisplayedPropertyName (HERE).stringValue ()) ;
        result.appendString (" = inNewValue }") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("nil") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (",\n      sortDelegate: ") ;
      const GalgasBool test_4 = GGS_bool (ComparisonKind::notEqual, enumerator_8024.current_mSortPropertyName (HERE).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("{ [weak self] (ascending) in\n        self\?.mSortDescriptorArray.append ({ (_ left : ") ;
        result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
        result.appendString (", _ right : ") ;
        result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
        result.appendString (") in return compare_") ;
        result.appendString (enumerator_8024.current_mColumnObjectTypeName (HERE).stringValue ()) ;
        result.appendString ("_properties (left.") ;
        result.appendString (enumerator_8024.current_mSortPropertyName (HERE).stringValue ()) ;
        result.appendString ("_property, ascending, right.") ;
        result.appendString (enumerator_8024.current_mSortPropertyName (HERE).stringValue ()) ;
        result.appendString ("_property) })\n      }") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("nil") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (",\n") ;
      GGS_uint index_8879_ (0) ;
      if (enumerator_8024.current_mActualParameterList (HERE).isValid ()) {
        UpEnumerator__32_stringlist enumerator_8879 (enumerator_8024.current_mActualParameterList (HERE)) ;
        while (enumerator_8879.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_8879.current_mValue_30_ (HERE).stringValue ()) ;
          result.appendString (": ") ;
          result.appendString (enumerator_8879.current_mValue_31_ (HERE).stringValue ()) ;
          enumerator_8879.gotoNextObject () ;
          if (enumerator_8879.hasCurrentObject ()) {
            result.appendString (",\n") ;
          }
          index_8879_.increment () ;
        }
      }
      result.appendString ("\n    )\n") ;
      enumerator_8024.gotoNextObject () ;
      index_8024_.increment () ;
    }
  }
  result.appendString ("  //---\n    self.mTableViewArray.append (inTableView)\n    inTableView.sortAndReloadData ()\n  }\n\n") ;
  switch (in_MODEL_5F_KIND.enumValue ()) {
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::invalid :
    break ;
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::enum_transientArray :
    {
    }
    break ;
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::enum_entityArray :
    {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Select a single object\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func select (object inObject: ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (") {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        ()\n      case .single (let objectArray) :\n        let array = EBReferenceArray (objectArray)\n        if array.contains (inObject) {\n          self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (inObject))\n        }\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    remove\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @objc func remove (_ _ : Any) {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        break\n      case .single (let model_prop) :\n      //------------- Find the object to be selected after selected object removing\n      //--- Dictionary of object sorted indexes\n        var sortedObjectDictionary = EBReferenceDictionary <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (", Int> ()\n        for (index, object) in model_prop.enumerated () {\n          sortedObjectDictionary [object] = index\n        }\n        var indexArrayOfSelectedObjects = [Int] ()\n        for object in self.selectedArray_property.propset.values {\n          let index = sortedObjectDictionary [object]\n          if let idx = index {\n            indexArrayOfSelectedObjects.append (idx)\n          }\n        }\n      //--- Sort\n        indexArrayOfSelectedObjects.sort { $0 < $1 }\n      //--- Find the first index of a non selected object\n        var newSelectionIndex = indexArrayOfSelectedObjects [0] + 1\n        for index in indexArrayOfSelectedObjects {\n          if newSelectionIndex < index {\n            break\n          }else{\n            newSelectionIndex = index + 1\n          }\n        }\n      //----------------------------------------- Remove selected object\n      //--- Dictionary of object absolute indexes\n        var objectDictionary = EBReferenceDictionary <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (", Int> ()\n        for (index, object) in model_prop.enumerated () {\n          objectDictionary [object] = index\n        }\n      //--- Build selected objects index array\n        var selectedObjectIndexArray = [Int] ()\n        for object in self.selectedArray_property.propset.values {\n          let index = objectDictionary [object]\n          if let idx = index {\n            selectedObjectIndexArray.append (idx)\n          }\n        }\n      //--- Sort in reverse order\n        selectedObjectIndexArray.sort { $1 < $0 }\n      //--- Remove objects, in reverse of order of their index\n        var newObjectArray = EBReferenceArray (model_prop)\n        for index in selectedObjectIndexArray {\n          newObjectArray.remove (at: index)\n        }\n      //----------------------------------------- Set new object array\n        model.setProp (newObjectArray)\n      }\n    }\n  }\n") ;
    }
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // IMPLEMENTATION OF AutoLayoutTableViewDelegate\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  \n  final func tableViewDelegate_selectionDidChange (selectedRows inSelectedRows : IndexSet) {\n    switch self.sortedArray_property.selection {\n    case .empty, .multiple :\n      ()\n    case .single (let v) :\n      var newSelectedObjects = EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> ()\n      for index in inSelectedRows {\n        newSelectedObjects.append (v [index])\n      }\n      self.mInternalSelectedArrayProperty.setProp (newSelectedObjects)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func tableViewDelegate_indexesOfSelectedObjects () -> IndexSet {\n    var indexSet = IndexSet ()\n    var idx = 0\n    let selectedObjectSet = EBReferenceSet (self.selectedArray_property.propval.values)\n    for object in self.sortedArray_property.propval.values {\n      if selectedObjectSet.contains (object) {\n        indexSet.insert (idx)\n      }\n      idx += 1\n    }\n    return indexSet\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  switch (in_MODEL_5F_KIND.enumValue ()) {
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::invalid :
    break ;
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::enum_transientArray :
    {
      result.appendString ("  final func tableViewDelegate_addEntry () { // Transient array cannot add entry\n  }\n") ;
    }
    break ;
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::enum_entityArray :
    {
      result.appendString ("  final func tableViewDelegate_addEntry () {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        ()\n      case .single (let v) :\n        let newObject = ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (" (self.undoManager)\n        var array = EBReferenceArray (v)\n        array.append (newObject)\n        model.setProp (array)\n      //--- New object is the selection\n        self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (newObject))\n      }\n    }\n  }\n") ;
    }
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  switch (in_MODEL_5F_KIND.enumValue ()) {
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::invalid :
    break ;
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::enum_transientArray :
    {
      result.appendString ("  final func tableViewDelegate_removeSelectedEntries () { // Transient array cannot remove entries\n  }\n") ;
    }
    break ;
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::enum_entityArray :
    {
      result.appendString ("  final func tableViewDelegate_removeSelectedEntries () {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        ()\n      case .single (let model_prop) :\n        switch self.sortedArray_property.selection {\n        case .empty, .multiple :\n          ()\n        case .single (let sortedArray_prop) :\n        //------------- Find the object to be selected after selected object removing\n        //--- Dictionary of object sorted indexes\n          var sortedObjectDictionary = EBReferenceDictionary <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (", Int> ()\n          for (index, object) in sortedArray_prop.enumerated () {\n            sortedObjectDictionary [object] = index\n          }\n          var indexArrayOfSelectedObjects = [Int] ()\n          for object in self.selectedSet.values {\n            let index = sortedObjectDictionary [object]\n            if let idx = index {\n              indexArrayOfSelectedObjects.append (idx)\n            }\n          }\n        //--- Sort\n          indexArrayOfSelectedObjects.sort { $0 < $1 }\n        //--- Find the first index of a non selected object\n          var newSelectionIndex = indexArrayOfSelectedObjects [0] + 1\n          for index in indexArrayOfSelectedObjects {\n            if newSelectionIndex < index {\n              ()\n            }else{\n              newSelectionIndex = index + 1\n            }\n          }\n          var newSelectedObject : ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString ("\? = nil\n          if (newSelectionIndex >= 0) && (newSelectionIndex < sortedArray_prop.count) {\n            newSelectedObject = sortedArray_prop [newSelectionIndex]\n          }\n        //----------------------------------------- Remove selected object\n        //--- Dictionary of object absolute indexes\n          var objectDictionary = EBReferenceDictionary <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (", Int> ()\n          for (index, object) in model_prop.enumerated () {\n            objectDictionary [object] = index\n          }\n        //--- Build selected objects index array\n          var selectedObjectIndexArray = [Int] ()\n          for object in self.selectedSet.values {\n            let index = objectDictionary [object]\n            if let idx = index {\n              selectedObjectIndexArray.append (idx)\n            }\n          }\n        //--- Sort in reverse order\n          selectedObjectIndexArray.sort { $1 < $0 }\n        //--- Remove objects, in reverse of order of their index\n          var newObjectArray = EBReferenceArray (model_prop)\n          for index in selectedObjectIndexArray {\n            newObjectArray.remove (at: index)\n          }\n        //----------------------------------------- Set new object array\n          model.setProp (newObjectArray)\n        //----------------------------------------- Set new selection\n          if let object = newSelectedObject {\n            self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (object))\n          }else{\n            self.mInternalSelectedArrayProperty.setProp (EBReferenceArray ())\n          }\n        }\n      }\n    }\n  }\n") ;
    }
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func tableViewDelegate_beginSorting () {\n    self.mSortDescriptorArray.removeAll ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func tableViewDelegate_endSorting () {\n    self.sortedArray_property.notifyModelDidChange ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutTableViewControllerGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                                                 const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                                 GGS_stringset & /* ioArgument_ioUsedProtocolSet */,
                                                                                 GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutTableViewControllerGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                                 const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                                 const GGS_stringset /* constinArgument_inUsedProtocolSet */,
                                                                                 GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 513)) ;
  GGS_stringset var_observedProperties_20986 = temp_0 ;
  const GGS_autoLayoutTableViewControllerGeneration temp_1 = this ;
  UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration enumerator_21021 (temp_1.readProperty_mTableViewControllerSortedColumnListForGeneration ()) ;
  while (enumerator_21021.hasCurrentObject ()) {
    {
    var_observedProperties_20986.setter_insert (enumerator_21021.current_mObservablePropertyForSorting (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 515)) ;
    }
    enumerator_21021.gotoNextObject () ;
  }
  const GGS_autoLayoutTableViewControllerGeneration temp_2 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_3 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_4 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_5 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_6 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_7 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_8 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_9 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_10 = this ;
  GGS_string var_s_21189 = GGS_string (filewrapperTemplate_autoLayoutTableViewControllerGenerationTemplate_autoLayoutTableViewControllerImplementation (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mControllerName ().readProperty_string (), temp_4.readProperty_mModelString (), temp_5.readProperty_mTableViewControllerModelKind (), temp_6.readProperty_mModelTypeName (), temp_7.readProperty_mTableViewControllerBoundColumnListForGeneration (), temp_8.readProperty_mTableViewControllerSortedColumnListForGeneration (), temp_9.readProperty_mElementTypeName (), var_observedProperties_20986, temp_10.readProperty_mAttributeListForGeneration () COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 517))) ;
  {
  const GGS_autoLayoutTableViewControllerGeneration temp_11 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_12 = this ;
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, GGS_string ("controller-table-view-").add_operation (temp_11.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 531)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 531)).add_operation (temp_12.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 531)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 531)), var_s_21189, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 529)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@atomicPropertyDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_atomicPropertyDeclarationAST temp_0 = this ;
  const GGS_atomicPropertyDeclarationAST temp_1 = this ;
  const GGS_atomicPropertyDeclarationAST temp_2 = this ;
  GGS_lstring var_node_1090 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 26)).add_operation (temp_1.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 26)), temp_2.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_atomicPropertyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1090, temp_3, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 27)) ;
  }
  {
  const GGS_atomicPropertyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1090, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("simple-stored-property.ggs", 28)) ;
  }
  {
  const GGS_atomicPropertyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1090, temp_5.readProperty_mPropertyTypeName () COMMA_SOURCE_FILE ("simple-stored-property.ggs", 29)) ;
  }
  const GGS_atomicPropertyDeclarationAST temp_6 = this ;
  callExtensionMethod_enterDefaultValuePrecedence ((cPtr_abstractDefaultValue *) temp_6.readProperty_mDefaultValue ().ptr (), var_node_1090, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 30)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_atomicPropertyDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_atomicPropertyDeclarationAST temp_0 = this ;
  const GGS_atomicPropertyDeclarationAST temp_1 = this ;
  const GGS_atomicPropertyDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 36)).add_operation (temp_1.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 36)), temp_2.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@atomicPropertyDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                   GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_atomicPropertyDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_6143 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_classKind var_classKind_6360 ;
  const GGS_atomicPropertyDeclarationAST temp_1 = this ;
  GGS_propertyMap joker_6371_3 ; // Joker input parameter
  GGS_actionMap joker_6371_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_6371_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mPropertyTypeName (), var_classKind_6360, joker_6371_3, joker_6371_2, joker_6371_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 161)) ;
  GGS_propertyMap var_preferencesPropertyMap_6480 ;
  GGS_classKind joker_6465 ; // Joker input parameter
  GGS_actionMap joker_6510_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_6510_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 163)), GGS_location::class_func_nowhere (SOURCE_FILE ("simple-stored-property.ggs", 163)), inCompiler COMMA_HERE), joker_6465, var_preferencesPropertyMap_6480, joker_6510_2, joker_6510_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 162)) ;
  switch (var_classKind_6360.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_atomicPropertyDeclarationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 170)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_6647_kind_0 ;
      var_classKind_6360.getAssociatedValuesFor_atomic (extractedValue_6647_kind_0) ;
      {
      const GGS_atomicPropertyDeclarationAST temp_4 = this ;
      var_entry_6143.mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mPropertyName (), GGS_propertyKind::class_func_property (extractedValue_6647_kind_0, GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("simple-stored-property.ggs", 172))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 172)), GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 172)) ;
      }
      GGS_string var_swiftDefaultValueAsString_6903 ;
      const GGS_atomicPropertyDeclarationAST temp_5 = this ;
      GGS_typeKindList temp_6 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 174)) ;
      temp_6.plusPlusAssignOperation (GGS_typeKindList_2E_element::init_21_ (extractedValue_6647_kind_0, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 174)) ;
      callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) temp_5.readProperty_mDefaultValue ().ptr (), temp_6, var_preferencesPropertyMap_6480, var_swiftDefaultValueAsString_6903, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 174)) ;
      {
      const GGS_atomicPropertyDeclarationAST temp_7 = this ;
      const GGS_atomicPropertyDeclarationAST temp_8 = this ;
      const GGS_atomicPropertyDeclarationAST temp_9 = this ;
      const GGS_atomicPropertyDeclarationAST temp_10 = this ;
      const GGS_atomicPropertyDeclarationAST temp_11 = this ;
      const GGS_atomicPropertyDeclarationAST temp_12 = this ;
      var_entry_6143.mProperty_mPropertyGenerationList.setter_append (GGS_atomicPropertyGeneration::init_21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone_21__21__21__21_ (temp_7.readProperty_mPropertyName ().readProperty_string (), temp_8.readProperty_generateResetMethod (), temp_9.readProperty_generateDirectRead (), temp_10.readProperty_generateDirectAccess (), temp_11.readProperty_standalone (), extractedValue_6647_kind_0, GGS_bool (false), var_swiftDefaultValueAsString_6903, GGS_bool (ComparisonKind::equal, temp_12.readProperty_mClassName ().readProperty_string ().objectCompare (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 185)))), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 176)) ;
      }
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_7422__0 ;
      var_classKind_6360.getAssociatedValuesFor_document (extractedValue_7422__0) ;
      const GGS_atomicPropertyDeclarationAST temp_13 = this ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray14  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 189)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_7517__0 ;
      GGS_bool extractedValue_7517__1 ;
      GGS_bool extractedValue_7517__2 ;
      GGS_bool extractedValue_7517__3 ;
      var_classKind_6360.getAssociatedValuesFor_entity (extractedValue_7517__0, extractedValue_7517__1, extractedValue_7517__2, extractedValue_7517__3) ;
      const GGS_atomicPropertyDeclarationAST temp_15 = this ;
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.readProperty_mPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray16  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 191)) ;
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_6143, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 193)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration prefKeyDefinitionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_prefKeyDefinitionCode (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_atomicPropertyGeneration temp_0 = this ;
  const GGS_atomicPropertyGeneration temp_1 = this ;
  result_result = GGS_string ("@MainActor let Preferences_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 221)).add_operation (GGS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 221)).add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 221)).add_operation (GGS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 221)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 227)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 227)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 227)) ;
  const GGS_atomicPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 228)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 228)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 228)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 229)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 229)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 229)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 229)) ;
  const GGS_atomicPropertyGeneration temp_1 = this ;
  const GGS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 230)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 230)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 230)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 230)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 230)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 230)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_bindPropertyInSelectionController (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 236)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 236)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 236)) ;
  const GGS_atomicPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 237)).add_operation (GGS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 237)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 237)) ;
  const GGS_atomicPropertyGeneration temp_1 = this ;
  const GGS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 238)).add_operation (GGS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 238)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 238)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 238)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 238)) ;
  const GGS_atomicPropertyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 239)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 239)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 239)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 240)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 241)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 242)) ;
  result_result.plusAssignOperation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 243)) ;
  result_result.plusAssignOperation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 244)) ;
  result_result.plusAssignOperation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 245)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 246)) ;
  const GGS_atomicPropertyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 247)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 247)).add_operation (GGS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 247)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 247)) ;
  result_result.plusAssignOperation(GGS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 248)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 249)) ;
  const GGS_atomicPropertyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 250)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 250)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 250)) ;
  result_result.plusAssignOperation(GGS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 251)) ;
  result_result.plusAssignOperation(GGS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 252)) ;
  result_result.plusAssignOperation(GGS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 253)) ;
  result_result.plusAssignOperation(GGS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 254)) ;
  result_result.plusAssignOperation(GGS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 255)) ;
  result_result.plusAssignOperation(GGS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 256)) ;
  result_result.plusAssignOperation(GGS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 257)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 258)) ;
  result_result.plusAssignOperation(GGS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 259)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 260)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 261)) ;
  result_result.plusAssignOperation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 262)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 263)) ;
  result_result.plusAssignOperation(GGS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 264)) ;
  result_result.plusAssignOperation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 265)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 266)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 267)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 268)) ;
  result_result.plusAssignOperation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 269)) ;
  result_result.plusAssignOperation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 270)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 271)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 272)) ;
  const GGS_atomicPropertyGeneration temp_6 = this ;
  const GGS_atomicPropertyGeneration temp_7 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 273)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 273)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 273)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 273)).add_operation (GGS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 273)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 273)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 274)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 275)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 276)) ;
  result_result.plusAssignOperation(GGS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 277)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 278)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 279)) ;
  const GGS_atomicPropertyGeneration temp_8 = this ;
  result_result.plusAssignOperation(GGS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 280)).add_operation (GGS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 280)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 280)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 281)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 282)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 283)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 284)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 285)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                          const GGS_bool constinArgument_inGenerationDirectAccess,
                                                                          const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_atomicPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mInPreferences ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 296)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 296)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 296)) ;
      const GGS_atomicPropertyGeneration temp_2 = this ;
      result_result.plusAssignOperation(GGS_string ("//   Atomic property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 297)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 297)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 297)) ;
      result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 298)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 298)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 298)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 298)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_atomicPropertyGeneration temp_4 = this ;
        test_3 = temp_4.readProperty_standalone ().boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_atomicPropertyGeneration temp_5 = this ;
          result_result.plusAssignOperation(GGS_string ("@MainActor let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 300)).add_operation (GGS_string ("_property = EBStandAloneProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 300)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 300)) ;
          const GGS_atomicPropertyGeneration temp_6 = this ;
          const GGS_atomicPropertyGeneration temp_7 = this ;
          result_result.plusAssignOperation(extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 301)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 301)).add_operation (temp_7.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 301)).add_operation (GGS_string (")\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 301)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 301)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        const GGS_atomicPropertyGeneration temp_8 = this ;
        result_result.plusAssignOperation(GGS_string ("@MainActor let preferences_").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 303)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 303)) ;
        const GGS_atomicPropertyGeneration temp_9 = this ;
        result_result.plusAssignOperation(GGS_string ("_property = EBPreferenceProperty_").add_operation (extensionGetter_swiftTypeName (temp_9.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 304)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 304)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 304)) ;
        const GGS_atomicPropertyGeneration temp_10 = this ;
        result_result.plusAssignOperation(GGS_string (" (defaultValue: ").add_operation (temp_10.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 305)).add_operation (GGS_string (", prefKey: Preferences_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 305)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 305)) ;
        const GGS_atomicPropertyGeneration temp_11 = this ;
        result_result.plusAssignOperation(temp_11.readProperty_mPropertyName ().add_operation (GGS_string (")\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 306)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 306)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 309)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 309)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 309)) ;
    const GGS_atomicPropertyGeneration temp_12 = this ;
    result_result.plusAssignOperation(GGS_string ("  //   Atomic property: ").add_operation (temp_12.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 310)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 310)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 310)) ;
    result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 311)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 311)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 311)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 311)) ;
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_atomicPropertyGeneration temp_14 = this ;
      test_13 = temp_14.readProperty_standalone ().boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        const GGS_atomicPropertyGeneration temp_15 = this ;
        const GGS_atomicPropertyGeneration temp_16 = this ;
        result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 313)).add_operation (GGS_string ("_property : EBStandAloneProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 313)).add_operation (extensionGetter_swiftTypeName (temp_16.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 313)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 313)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 313)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 313)) ;
      }
    }
    if (GalgasBool::boolFalse == test_13) {
      const GGS_atomicPropertyGeneration temp_17 = this ;
      const GGS_atomicPropertyGeneration temp_18 = this ;
      result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 315)).add_operation (GGS_string ("_property : EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 315)).add_operation (extensionGetter_swiftTypeName (temp_18.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 315)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 315)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 315)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 315)) ;
    }
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      const GGS_atomicPropertyGeneration temp_20 = this ;
      test_19 = temp_20.readProperty_generateResetMethod ().boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 318)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 318)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 318)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 318)) ;
        const GGS_atomicPropertyGeneration temp_21 = this ;
        result_result.plusAssignOperation(GGS_string ("  final func reset_").add_operation (temp_21.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 319)).add_operation (GGS_string ("_toDefaultValue () {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 319)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 319)) ;
        const GGS_atomicPropertyGeneration temp_22 = this ;
        const GGS_atomicPropertyGeneration temp_23 = this ;
        result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_22.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 320)).add_operation (GGS_string ("_property.setProp ("), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 320)).add_operation (temp_23.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 320)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 320)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 320)) ;
        result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 321)) ;
      }
    }
    GGS_bool test_24 = constinArgument_inGenerationDirectAccess ;
    if (GalgasBool::boolTrue != test_24.boolEnum ()) {
      const GGS_atomicPropertyGeneration temp_25 = this ;
      test_24 = temp_25.readProperty_generateDirectRead () ;
    }
    GGS_bool test_26 = test_24 ;
    if (GalgasBool::boolTrue != test_26.boolEnum ()) {
      const GGS_atomicPropertyGeneration temp_27 = this ;
      test_26 = temp_27.readProperty_generateDirectAccess () ;
    }
    GGS_bool var_generateAccess_14057 = test_26 ;
    GalgasBool test_28 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_28) {
      test_28 = var_generateAccess_14057.boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 325)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 325)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 325)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 325)) ;
        const GGS_atomicPropertyGeneration temp_29 = this ;
        const GGS_atomicPropertyGeneration temp_30 = this ;
        result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_29.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 326)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 326)).add_operation (extensionGetter_swiftTypeName (temp_30.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 326)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 326)).add_operation (GGS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 326)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 326)) ;
        const GGS_atomicPropertyGeneration temp_31 = this ;
        result_result.plusAssignOperation(GGS_string ("    get { return self.").add_operation (temp_31.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 327)).add_operation (GGS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 327)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 327)) ;
        GalgasBool test_32 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_32) {
          const GGS_atomicPropertyGeneration temp_33 = this ;
          test_32 = temp_33.readProperty_generateDirectAccess ().boolEnum () ;
          if (GalgasBool::boolTrue == test_32) {
            const GGS_atomicPropertyGeneration temp_34 = this ;
            result_result.plusAssignOperation(GGS_string ("    set { self.").add_operation (temp_34.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 329)).add_operation (GGS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 329)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 329)) ;
          }
        }
        result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 331)) ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_initCode (Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_atomicPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_standalone ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_atomicPropertyGeneration temp_2 = this ;
      const GGS_atomicPropertyGeneration temp_3 = this ;
      result_result = GGS_string ("    self.").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 340)).add_operation (GGS_string ("_property = EBStandAloneProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 340)).add_operation (extensionGetter_swiftTypeName (temp_3.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 340)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 340)) ;
      const GGS_atomicPropertyGeneration temp_4 = this ;
      result_result.plusAssignOperation(GGS_string (" (").add_operation (temp_4.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 341)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 341)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 341)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_atomicPropertyGeneration temp_5 = this ;
    const GGS_atomicPropertyGeneration temp_6 = this ;
    result_result = GGS_string ("    self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 343)).add_operation (GGS_string ("_property = EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 343)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 343)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 343)) ;
    const GGS_atomicPropertyGeneration temp_7 = this ;
    result_result.plusAssignOperation(GGS_string (" (defaultValue: ").add_operation (temp_7.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 344)).add_operation (GGS_string (", undoManager: inUndoManager, key: \""), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 344)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 344)) ;
    const GGS_atomicPropertyGeneration temp_8 = this ;
    result_result.plusAssignOperation(temp_8.readProperty_mPropertyName ().add_operation (GGS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 345)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 345)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_configurationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_atomicPropertyGeneration temp_1 = this ;
    GGS_bool test_2 = temp_1.readProperty_standalone () ;
    if (GalgasBool::boolTrue != test_2.boolEnum ()) {
      const GGS_atomicPropertyGeneration temp_3 = this ;
      test_2 = temp_3.readProperty_mInPreferences () ;
    }
    test_0 = test_2.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string::makeEmptyString () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_atomicPropertyGeneration temp_4 = this ;
    result_result = GGS_string ("    self.accumulateProperty (self.").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 355)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 355)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@proxyDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_proxyDeclarationAST temp_0 = this ;
  const GGS_proxyDeclarationAST temp_1 = this ;
  const GGS_proxyDeclarationAST temp_2 = this ;
  GGS_lstring var_node_830 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 23)).add_operation (temp_1.readProperty_mProxyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 23)), temp_2.readProperty_mProxyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_proxyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_830, temp_3, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 24)) ;
  }
  {
  const GGS_proxyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_830, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("proxy.ggs", 25)) ;
  }
  {
  const GGS_proxyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_830, temp_5.readProperty_mProxyTypeName () COMMA_SOURCE_FILE ("proxy.ggs", 26)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@proxyDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_proxyDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_proxyDeclarationAST temp_0 = this ;
  const GGS_proxyDeclarationAST temp_1 = this ;
  const GGS_proxyDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 32)).add_operation (temp_1.readProperty_mProxyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 32)), temp_2.readProperty_mProxyName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@proxyDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                          GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_proxyDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_3061 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_classKind var_proxyKind_3275 ;
  const GGS_proxyDeclarationAST temp_1 = this ;
  GGS_propertyMap joker_3286_3 ; // Joker input parameter
  GGS_actionMap joker_3286_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_3286_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mProxyTypeName (), var_proxyKind_3275, joker_3286_3, joker_3286_2, joker_3286_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 90)) ;
  switch (var_proxyKind_3275.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_proxyDeclarationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mProxyTypeName ().readProperty_location (), GGS_string ("an atomic type is required here"), fixItArray3  COMMA_SOURCE_FILE ("proxy.ggs", 93)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_3414__0 ;
      GGS_bool extractedValue_3423_isGraphic_1 ;
      GGS_bool extractedValue_3435__2 ;
      GGS_bool extractedValue_3435__3 ;
      var_proxyKind_3275.getAssociatedValuesFor_entity (extractedValue_3414__0, extractedValue_3423_isGraphic_1, extractedValue_3435__2, extractedValue_3435__3) ;
      const GGS_proxyDeclarationAST temp_4 = this ;
      switch (temp_4.readProperty_mProxyKind ().enumValue ()) {
      case GGS_proxyKind::Enumeration::invalid:
        break ;
      case GGS_proxyKind::Enumeration::enum_toManyProxy:
        {
          const GGS_proxyDeclarationAST temp_5 = this ;
          GGS_propertyKind var_k_3505 = GGS_propertyKind::class_func_toMany (temp_5.readProperty_mProxyTypeName (), GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("proxy.ggs", 99)), extractedValue_3423_isGraphic_1, GGS_toManyRelationshipOptionAST::class_func_none (SOURCE_FILE ("proxy.ggs", 101))  COMMA_SOURCE_FILE ("proxy.ggs", 97)) ;
          {
          const GGS_proxyDeclarationAST temp_6 = this ;
          var_entry_3061.mProperty_mPropertyMap.setter_insertKey (temp_6.readProperty_mProxyName (), var_k_3505, GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 103)) ;
          }
        }
        break ;
      case GGS_proxyKind::Enumeration::enum_propertyProxy:
        {
          const GGS_proxyDeclarationAST temp_7 = this ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mProxyTypeName ().readProperty_location (), GGS_string ("this type should be an entity"), fixItArray8  COMMA_SOURCE_FILE ("proxy.ggs", 105)) ;
        }
        break ;
      }
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_3862__0 ;
      var_proxyKind_3275.getAssociatedValuesFor_document (extractedValue_3862__0) ;
      const GGS_proxyDeclarationAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mProxyTypeName ().readProperty_location (), GGS_string ("an atomic type is required here"), fixItArray10  COMMA_SOURCE_FILE ("proxy.ggs", 108)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_3952_type_0 ;
      var_proxyKind_3275.getAssociatedValuesFor_atomic (extractedValue_3952_type_0) ;
      {
      const GGS_proxyDeclarationAST temp_11 = this ;
      var_entry_3061.mProperty_mPropertyMap.setter_insertKey (temp_11.readProperty_mProxyName (), GGS_propertyKind::class_func_property (extractedValue_3952_type_0, GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("proxy.ggs", 110))  COMMA_SOURCE_FILE ("proxy.ggs", 110)), GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 110)) ;
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_3061, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 112)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@proxyDeclarationAST secondAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::method_secondAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                           GGS_generationStruct & ioArgument_ioGeneration,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_proxyDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_4442 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_propertyKind var_relationshipKind_4655 ;
  const GGS_proxyDeclarationAST temp_1 = this ;
  GGS_actionMap joker_4673_2 ; // Joker input parameter
  GGS_bool joker_4673_1 ; // Joker input parameter
  var_entry_4442.readProperty_mPropertyMap ().method_searchKey (temp_1.readProperty_mToOneRelationshipName (), var_relationshipKind_4655, joker_4673_2, joker_4673_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 122)) ;
  switch (var_relationshipKind_4655.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_4733__0 ;
      GGS_bool extractedValue_4733__1 ;
      var_relationshipKind_4655.getAssociatedValuesFor_arrayController (extractedValue_4733__0, extractedValue_4733__1) ;
      const GGS_proxyDeclarationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("a toOne relationship is required here"), fixItArray3  COMMA_SOURCE_FILE ("proxy.ggs", 125)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_4850__0 ;
      var_relationshipKind_4655.getAssociatedValuesFor_selectionController (extractedValue_4850__0) ;
      const GGS_proxyDeclarationAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("a toOne relationship is required here"), fixItArray5  COMMA_SOURCE_FILE ("proxy.ggs", 127)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_4957__0 ;
      GGS_propertyAccessibility extractedValue_4957__1 ;
      var_relationshipKind_4655.getAssociatedValuesFor_property (extractedValue_4957__0, extractedValue_4957__1) ;
      const GGS_proxyDeclarationAST temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("a toOne relationship is required here"), fixItArray7  COMMA_SOURCE_FILE ("proxy.ggs", 129)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_5062__0 ;
      GGS_propertyAccessibility extractedValue_5062__1 ;
      GGS_bool extractedValue_5062__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_5062__3 ;
      var_relationshipKind_4655.getAssociatedValuesFor_toMany (extractedValue_5062__0, extractedValue_5062__1, extractedValue_5062__2, extractedValue_5062__3) ;
      const GGS_proxyDeclarationAST temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mToOneRelationshipName ().readProperty_location (), GGS_string ("a toOne relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("proxy.ggs", 131)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_5165_toOneTypeName_0 ;
      GGS_propertyAccessibility extractedValue_5181__1 ;
      GGS_bool extractedValue_5181__2 ;
      GGS_toOneOppositeRelationship extractedValue_5181__3 ;
      GGS_bool extractedValue_5181__4 ;
      var_relationshipKind_4655.getAssociatedValuesFor_toOne (extractedValue_5165_toOneTypeName_0, extractedValue_5181__1, extractedValue_5181__2, extractedValue_5181__3, extractedValue_5181__4) ;
      GGS_propertyMap var_propertyMap_5255 ;
      GGS_classKind joker_5246 ; // Joker input parameter
      GGS_actionMap joker_5268_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_5268_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_5165_toOneTypeName_0, joker_5246, var_propertyMap_5255, joker_5268_2, joker_5268_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 133)) ;
      GGS_propertyKind var_propertyKind_5327 ;
      const GGS_proxyDeclarationAST temp_10 = this ;
      GGS_actionMap joker_5341_2 ; // Joker input parameter
      GGS_bool joker_5341_1 ; // Joker input parameter
      var_propertyMap_5255.method_searchKey (temp_10.readProperty_mPropertyName (), var_propertyKind_5327, joker_5341_2, joker_5341_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 134)) ;
      switch (var_propertyKind_5327.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_5393_propertyType_0 ;
          GGS_propertyAccessibility extractedValue_5408__1 ;
          var_propertyKind_5327.getAssociatedValuesFor_property (extractedValue_5393_propertyType_0, extractedValue_5408__1) ;
          {
          const GGS_proxyDeclarationAST temp_11 = this ;
          const GGS_proxyDeclarationAST temp_12 = this ;
          const GGS_proxyDeclarationAST temp_13 = this ;
          const GGS_proxyDeclarationAST temp_14 = this ;
          var_entry_4442.mProperty_mPropertyGenerationList.setter_append (GGS_atomicProxyGeneration::init_21__21__21__21__21_ (temp_11.readProperty_mProxyName ().readProperty_string (), temp_12.readProperty_mProxyKind (), extractedValue_5393_propertyType_0, temp_13.readProperty_mToOneRelationshipName ().readProperty_string (), temp_14.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 137)) ;
          }
          GalgasBool test_15 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_15) {
            const GGS_proxyDeclarationAST temp_16 = this ;
            test_15 = GGS_bool (ComparisonKind::notEqual, temp_16.readProperty_mProxyKind ().objectCompare (GGS_proxyKind::class_func_propertyProxy (SOURCE_FILE ("proxy.ggs", 145)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              const GGS_proxyDeclarationAST temp_17 = this ;
              GenericArray <FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (temp_17.readProperty_mPropertyName ().readProperty_location (), GGS_string ("this property is not atomic"), fixItArray18  COMMA_SOURCE_FILE ("proxy.ggs", 146)) ;
            }
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_5821_toManyTypeName_0 ;
          GGS_propertyAccessibility extractedValue_5838__1 ;
          GGS_bool extractedValue_5838__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_5838__3 ;
          var_propertyKind_5327.getAssociatedValuesFor_toMany (extractedValue_5821_toManyTypeName_0, extractedValue_5838__1, extractedValue_5838__2, extractedValue_5838__3) ;
          GGS_classKind joker_5906_4 ; // Joker input parameter
          GGS_propertyMap joker_5906_3 ; // Joker input parameter
          GGS_actionMap joker_5906_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_5906_1 ; // Joker input parameter
          ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_5821_toManyTypeName_0, joker_5906_4, joker_5906_3, joker_5906_2, joker_5906_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 149)) ;
          {
          const GGS_proxyDeclarationAST temp_19 = this ;
          const GGS_proxyDeclarationAST temp_20 = this ;
          const GGS_proxyDeclarationAST temp_21 = this ;
          const GGS_proxyDeclarationAST temp_22 = this ;
          var_entry_4442.mProperty_mPropertyGenerationList.setter_append (GGS_toManyProxyGeneration::init_21__21__21__21__21_ (temp_19.readProperty_mProxyName ().readProperty_string (), temp_20.readProperty_mProxyKind (), extractedValue_5821_toManyTypeName_0.readProperty_string (), temp_21.readProperty_mToOneRelationshipName ().readProperty_string (), temp_22.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 150)) ;
          }
          {
          ioArgument_ioGeneration.mProperty_mGenerateClass_5F_ProxyArrayOf_5F_.setter_insert (extractedValue_5821_toManyTypeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 158)) ;
          }
          GalgasBool test_23 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_23) {
            const GGS_proxyDeclarationAST temp_24 = this ;
            test_23 = GGS_bool (ComparisonKind::notEqual, temp_24.readProperty_mProxyKind ().objectCompare (GGS_proxyKind::class_func_toManyProxy (SOURCE_FILE ("proxy.ggs", 159)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_23) {
              const GGS_proxyDeclarationAST temp_25 = this ;
              GenericArray <FixItDescription> fixItArray26 ;
              inCompiler->emitSemanticError (temp_25.readProperty_mPropertyName ().readProperty_location (), GGS_string ("this property is not atomic"), fixItArray26  COMMA_SOURCE_FILE ("proxy.ggs", 160)) ;
            }
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_6395__0 ;
          GGS_propertyAccessibility extractedValue_6395__1 ;
          GGS_bool extractedValue_6395__2 ;
          GGS_toOneOppositeRelationship extractedValue_6395__3 ;
          GGS_bool extractedValue_6395__4 ;
          var_propertyKind_5327.getAssociatedValuesFor_toOne (extractedValue_6395__0, extractedValue_6395__1, extractedValue_6395__2, extractedValue_6395__3, extractedValue_6395__4) ;
          const GGS_proxyDeclarationAST temp_27 = this ;
          switch (temp_27.readProperty_mProxyKind ().enumValue ()) {
          case GGS_proxyKind::Enumeration::invalid:
            break ;
          case GGS_proxyKind::Enumeration::enum_propertyProxy:
            {
              const GGS_proxyDeclarationAST temp_28 = this ;
              GenericArray <FixItDescription> fixItArray29 ;
              inCompiler->emitSemanticError (temp_28.readProperty_mPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray29  COMMA_SOURCE_FILE ("proxy.ggs", 165)) ;
            }
            break ;
          case GGS_proxyKind::Enumeration::enum_toManyProxy:
            {
              const GGS_proxyDeclarationAST temp_30 = this ;
              GenericArray <FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (temp_30.readProperty_mPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray31  COMMA_SOURCE_FILE ("proxy.ggs", 167)) ;
            }
            break ;
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_6677__0 ;
          GGS_bool extractedValue_6677__1 ;
          var_propertyKind_5327.getAssociatedValuesFor_arrayController (extractedValue_6677__0, extractedValue_6677__1) ;
          const GGS_proxyDeclarationAST temp_32 = this ;
          switch (temp_32.readProperty_mProxyKind ().enumValue ()) {
          case GGS_proxyKind::Enumeration::invalid:
            break ;
          case GGS_proxyKind::Enumeration::enum_propertyProxy:
            {
              const GGS_proxyDeclarationAST temp_33 = this ;
              GenericArray <FixItDescription> fixItArray34 ;
              inCompiler->emitSemanticError (temp_33.readProperty_mPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray34  COMMA_SOURCE_FILE ("proxy.ggs", 172)) ;
            }
            break ;
          case GGS_proxyKind::Enumeration::enum_toManyProxy:
            {
              const GGS_proxyDeclarationAST temp_35 = this ;
              GenericArray <FixItDescription> fixItArray36 ;
              inCompiler->emitSemanticError (temp_35.readProperty_mPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray36  COMMA_SOURCE_FILE ("proxy.ggs", 174)) ;
            }
            break ;
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_6962__0 ;
          var_propertyKind_5327.getAssociatedValuesFor_selectionController (extractedValue_6962__0) ;
          const GGS_proxyDeclarationAST temp_37 = this ;
          switch (temp_37.readProperty_mProxyKind ().enumValue ()) {
          case GGS_proxyKind::Enumeration::invalid:
            break ;
          case GGS_proxyKind::Enumeration::enum_propertyProxy:
            {
              const GGS_proxyDeclarationAST temp_38 = this ;
              GenericArray <FixItDescription> fixItArray39 ;
              inCompiler->emitSemanticError (temp_38.readProperty_mPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray39  COMMA_SOURCE_FILE ("proxy.ggs", 179)) ;
            }
            break ;
          case GGS_proxyKind::Enumeration::enum_toManyProxy:
            {
              const GGS_proxyDeclarationAST temp_40 = this ;
              GenericArray <FixItDescription> fixItArray41 ;
              inCompiler->emitSemanticError (temp_40.readProperty_mPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray41  COMMA_SOURCE_FILE ("proxy.ggs", 181)) ;
            }
            break ;
          }
        }
        break ;
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_4442, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 185)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyProxyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 209)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 209)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 209)) ;
  const GGS_toManyProxyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 210)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 210)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 210)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 211)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 211)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 211)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 211)) ;
  const GGS_toManyProxyGeneration temp_1 = this ;
  const GGS_toManyProxyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 212)).add_operation (GGS_string ("_property = ProxyArrayOf_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 212)).add_operation (temp_2.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 212)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 212)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 212)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyProxyGeneration::getter_initCode (Compiler */* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyProxyGeneration::getter_bindPropertyInSelectionController (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyProxyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                       const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                       const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 234)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 234)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 234)) ;
  const GGS_toManyProxyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 235)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 235)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 235)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 236)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 236)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 236)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 236)) ;
  const GGS_toManyProxyGeneration temp_1 = this ;
  result_result.plusAssignOperation(GGS_string ("  var ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 237)).add_operation (GGS_string ("_modelDidChangeController : EBObservablePropertyController\? = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 237)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 237)) ;
  const GGS_toManyProxyGeneration temp_2 = this ;
  const GGS_toManyProxyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)).add_operation (GGS_string ("_property = ProxyArrayOf_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)).add_operation (temp_3.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 238)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 239)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 239)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 239)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 239)) ;
  const GGS_toManyProxyGeneration temp_4 = this ;
  const GGS_toManyProxyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string ("  var ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 240)).add_operation (GGS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 240)).add_operation (temp_5.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 240)).add_operation (GGS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 240)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 240)) ;
  result_result.plusAssignOperation(GGS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 241)) ;
  const GGS_toManyProxyGeneration temp_6 = this ;
  result_result.plusAssignOperation(GGS_string ("      switch self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 242)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 242)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 242)) ;
  result_result.plusAssignOperation(GGS_string ("      case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 243)) ;
  result_result.plusAssignOperation(GGS_string ("        return EBReferenceArray ()\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 244)) ;
  result_result.plusAssignOperation(GGS_string ("      case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 245)) ;
  result_result.plusAssignOperation(GGS_string ("        return EBReferenceArray (v)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 246)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 247)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 248)) ;
  result_result.plusAssignOperation(GGS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 249)) ;
  const GGS_toManyProxyGeneration temp_7 = this ;
  result_result.plusAssignOperation(GGS_string ("      self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 250)).add_operation (GGS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 250)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 250)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 251)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 252)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyProxyGeneration::getter_configurationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_toManyProxyGeneration temp_0 = this ;
  result_result = GGS_string ("  //--- ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 258)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 258)) ;
  result_result.plusAssignOperation(GGS_string ("    do{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 259)) ;
  result_result.plusAssignOperation(GGS_string ("      let controller = EBObservablePropertyController (\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 260)) ;
  const GGS_toManyProxyGeneration temp_1 = this ;
  result_result.plusAssignOperation(GGS_string ("        observedObjects: [self.").add_operation (temp_1.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 261)).add_operation (GGS_string ("_property],\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 261)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 261)) ;
  result_result.plusAssignOperation(GGS_string ("        callBack: { [weak self] in\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 262)) ;
  const GGS_toManyProxyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("          if let me = self, let model = me.").add_operation (temp_2.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 263)).add_operation (GGS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 263)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 263)) ;
  const GGS_toManyProxyGeneration temp_3 = this ;
  const GGS_toManyProxyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("            me.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 264)).add_operation (GGS_string ("_property.setModel (model."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 264)).add_operation (temp_4.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 264)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 264)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 264)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 265)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 266)) ;
  result_result.plusAssignOperation(GGS_string ("      )\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 267)) ;
  const GGS_toManyProxyGeneration temp_5 = this ;
  const GGS_toManyProxyGeneration temp_6 = this ;
  result_result.plusAssignOperation(GGS_string ("      self.").add_operation (temp_5.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 268)).add_operation (GGS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 268)).add_operation (temp_6.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 268)).add_operation (GGS_string ("_StartsBeingObserved (by: controller)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 268)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 268)) ;
  const GGS_toManyProxyGeneration temp_7 = this ;
  result_result.plusAssignOperation(GGS_string ("      self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 269)).add_operation (GGS_string ("_modelDidChangeController = controller\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 269)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 269)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 270)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicProxyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 293)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 293)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 293)) ;
  const GGS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 294)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 294)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 294)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 295)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 295)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 295)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 295)) ;
  const GGS_atomicProxyGeneration temp_1 = this ;
  const GGS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 296)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 296)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 296)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 296)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 296)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 296)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicProxyGeneration::getter_initCode (Compiler */* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicProxyGeneration::getter_bindPropertyInSelectionController (Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 308)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 308)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 308)) ;
  const GGS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 309)).add_operation (GGS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 309)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 309)) ;
  const GGS_atomicProxyGeneration temp_1 = this ;
  const GGS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 310)).add_operation (GGS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 310)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 310)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 310)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 310)) ;
  const GGS_atomicProxyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 311)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 311)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 311)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 312)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 313)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 314)) ;
  result_result.plusAssignOperation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 315)) ;
  result_result.plusAssignOperation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 316)) ;
  result_result.plusAssignOperation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 317)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 318)) ;
  const GGS_atomicProxyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 319)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 319)).add_operation (GGS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 319)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 319)) ;
  result_result.plusAssignOperation(GGS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 320)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 321)) ;
  const GGS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 322)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 322)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 322)) ;
  result_result.plusAssignOperation(GGS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 323)) ;
  result_result.plusAssignOperation(GGS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 324)) ;
  result_result.plusAssignOperation(GGS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 325)) ;
  result_result.plusAssignOperation(GGS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 326)) ;
  result_result.plusAssignOperation(GGS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 327)) ;
  result_result.plusAssignOperation(GGS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 328)) ;
  result_result.plusAssignOperation(GGS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 329)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 330)) ;
  result_result.plusAssignOperation(GGS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 331)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 332)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 333)) ;
  result_result.plusAssignOperation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 334)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 335)) ;
  result_result.plusAssignOperation(GGS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 336)) ;
  result_result.plusAssignOperation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 337)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 338)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 339)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 340)) ;
  result_result.plusAssignOperation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 341)) ;
  result_result.plusAssignOperation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 342)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 343)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 344)) ;
  const GGS_atomicProxyGeneration temp_6 = this ;
  const GGS_atomicProxyGeneration temp_7 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 346)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 346)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 346)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 346)).add_operation (GGS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 346)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 346)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 347)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 348)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 349)) ;
  result_result.plusAssignOperation(GGS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 350)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 351)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 352)) ;
  const GGS_atomicProxyGeneration temp_8 = this ;
  result_result.plusAssignOperation(GGS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 353)).add_operation (GGS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 353)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 353)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 354)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 355)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 356)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 357)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 358)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicProxyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                       const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                       const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 368)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 368)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 368)) ;
  const GGS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 369)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 369)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 369)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 370)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 370)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 370)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 370)) ;
  const GGS_atomicProxyGeneration temp_1 = this ;
  const GGS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 371)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 371)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("proxy.ggs", 372)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 372)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 372)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 372)) ;
  const GGS_atomicProxyGeneration temp_3 = this ;
  const GGS_atomicProxyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("  var ").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 373)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 373)).add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 373)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 373)).add_operation (GGS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 373)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 373)) ;
  result_result.plusAssignOperation(GGS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 374)) ;
  const GGS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string ("      return self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 375)).add_operation (GGS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 375)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 375)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 376)) ;
  result_result.plusAssignOperation(GGS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 377)) ;
  result_result.plusAssignOperation(GGS_string ("      if let unwrappedNewValue = newValue {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 378)) ;
  const GGS_atomicProxyGeneration temp_6 = this ;
  result_result.plusAssignOperation(GGS_string ("        self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 379)).add_operation (GGS_string ("_property.setProp (unwrappedNewValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 379)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 379)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 380)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 381)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 382)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicProxyGeneration::getter_configurationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_atomicProxyGeneration temp_0 = this ;
  result_result = GGS_string ("  //--- Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 388)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 388)) ;
  const GGS_atomicProxyGeneration temp_1 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 389)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 389)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 389)) ;
  const GGS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("      if let object = self\?.").add_operation (temp_2.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 390)).add_operation (GGS_string ("_property {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 390)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 390)) ;
  const GGS_atomicProxyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("        switch object.").add_operation (temp_3.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 391)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 391)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 391)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 392)) ;
  result_result.plusAssignOperation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 393)) ;
  result_result.plusAssignOperation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 394)) ;
  result_result.plusAssignOperation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 395)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let optionalV) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 396)) ;
  result_result.plusAssignOperation(GGS_string ("          if let v = optionalV {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 397)) ;
  result_result.plusAssignOperation(GGS_string ("            return .single (v)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 398)) ;
  result_result.plusAssignOperation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 399)) ;
  result_result.plusAssignOperation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 400)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 401)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 402)) ;
  result_result.plusAssignOperation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 403)) ;
  result_result.plusAssignOperation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 404)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 405)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 406)) ;
  const GGS_atomicProxyGeneration temp_4 = this ;
  const GGS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 407)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] (_ inValue : "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 407)).add_operation (extensionGetter_swiftTypeName (temp_5.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 407)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 407)).add_operation (GGS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 407)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 407)) ;
  const GGS_atomicProxyGeneration temp_6 = this ;
  const GGS_atomicProxyGeneration temp_7 = this ;
  result_result.plusAssignOperation(GGS_string ("      self\?.").add_operation (temp_6.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)).add_operation (GGS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)).add_operation (temp_7.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)).add_operation (GGS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 408)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 409)) ;
  const GGS_atomicProxyGeneration temp_8 = this ;
  const GGS_atomicProxyGeneration temp_9 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_8.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 410)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 410)).add_operation (temp_9.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 410)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 410)) ;
  const GGS_atomicProxyGeneration temp_10 = this ;
  result_result.plusAssignOperation(GGS_string ("_property.startsBeingObserved (by: self.").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 411)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 411)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 411)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@boolAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_boolAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                              const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                              GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_3875 = GGS_bool (false) ;
  UpEnumerator_typeKindList enumerator_3896 (constinArgument_inAttributeActualTypeList) ;
  bool bool_0 = var_found_3875.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 113)).isValidAndTrue () ;
  if (enumerator_3896.hasCurrentObject () && bool_0) {
    while (enumerator_3896.hasCurrentObject () && bool_0) {
      switch (enumerator_3896.current_mType (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_boolType:
        {
          const GGS_boolAsDefaultValue temp_1 = this ;
          GGS_string temp_2 ;
          const GalgasBool test_3 = temp_1.readProperty_mValue ().readProperty_bool ().boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            temp_2 = GGS_string ("true") ;
          }else if (GalgasBool::boolFalse == test_3) {
            temp_2 = GGS_string ("false") ;
          }
          outArgument_outSwiftDefaultValueAsString = temp_2 ;
          var_found_3875 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_integerType:
      case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
      case GGS_typeKind::Enumeration::enum_dataType:
      case GGS_typeKind::Enumeration::enum_dateType:
      case GGS_typeKind::Enumeration::enum_doubleType:
      case GGS_typeKind::Enumeration::enum_stringType:
      case GGS_typeKind::Enumeration::enum_fontType:
      case GGS_typeKind::Enumeration::enum_colorType:
      case GGS_typeKind::Enumeration::enum_bezierPathType:
      case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
        break ;
      case GGS_typeKind::Enumeration::enum_entityType:
        break ;
      case GGS_typeKind::Enumeration::enum_classType:
        break ;
      case GGS_typeKind::Enumeration::enum_enumType:
        break ;
      case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
        break ;
      }
      enumerator_3896.gotoNextObject () ;
      if (enumerator_3896.hasCurrentObject ()) {
        bool_0 = var_found_3875.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 113)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_found_3875.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 126)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_boolAsDefaultValue temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mValue ().readProperty_location (), GGS_string ("only a boolean attribute can be initialized by YES or NO"), fixItArray6  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 127)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@integerAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_integerAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                 const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                 GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_4847 = GGS_bool (false) ;
  UpEnumerator_typeKindList enumerator_4868 (constinArgument_inAttributeActualTypeList) ;
  bool bool_0 = var_found_4847.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 141)).isValidAndTrue () ;
  if (enumerator_4868.hasCurrentObject () && bool_0) {
    while (enumerator_4868.hasCurrentObject () && bool_0) {
      switch (enumerator_4868.current_mType (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_integerType:
        {
          const GGS_integerAsDefaultValue temp_1 = this ;
          GGS_string temp_2 ;
          const GalgasBool test_3 = temp_1.readProperty_mNegative ().boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            temp_2 = GGS_string ("-") ;
          }else if (GalgasBool::boolFalse == test_3) {
            temp_2 = GGS_string::makeEmptyString () ;
          }
          const GGS_integerAsDefaultValue temp_4 = this ;
          outArgument_outSwiftDefaultValueAsString = temp_2.add_operation (temp_4.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.ggs", 144)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 144)) ;
          var_found_4847 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
        {
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            const GGS_integerAsDefaultValue temp_6 = this ;
            test_5 = temp_6.readProperty_mNegative ().boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              const GGS_integerAsDefaultValue temp_7 = this ;
              GenericArray <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (temp_7.readProperty_mValue ().readProperty_location (), GGS_string ("Uint32 value should be ≥ 0"), fixItArray8  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 148)) ;
            }
          }
          const GGS_integerAsDefaultValue temp_9 = this ;
          outArgument_outSwiftDefaultValueAsString = temp_9.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.ggs", 150)) ;
          var_found_4847 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_fontType:
        {
          const GGS_integerAsDefaultValue temp_10 = this ;
          outArgument_outSwiftDefaultValueAsString = GGS_string ("NSFont.systemFont (ofSize: ").add_operation (temp_10.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.ggs", 153)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 153)).add_operation (GGS_string (".0)"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 153)) ;
          var_found_4847 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_boolType:
      case GGS_typeKind::Enumeration::enum_dateType:
      case GGS_typeKind::Enumeration::enum_dataType:
      case GGS_typeKind::Enumeration::enum_doubleType:
      case GGS_typeKind::Enumeration::enum_stringType:
      case GGS_typeKind::Enumeration::enum_colorType:
      case GGS_typeKind::Enumeration::enum_bezierPathType:
      case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
        break ;
      case GGS_typeKind::Enumeration::enum_entityType:
        break ;
      case GGS_typeKind::Enumeration::enum_enumType:
        break ;
      case GGS_typeKind::Enumeration::enum_classType:
        break ;
      case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
        break ;
      }
      enumerator_4868.gotoNextObject () ;
      if (enumerator_4868.hasCurrentObject ()) {
        bool_0 = var_found_4847.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 141)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = var_found_4847.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 162)).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_integerAsDefaultValue temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mValue ().readProperty_location (), GGS_string ("only an integer attribute can be initialized by an integer constant"), fixItArray13  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 163)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@doubleAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_doubleAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_6145 = GGS_bool (false) ;
  UpEnumerator_typeKindList enumerator_6166 (constinArgument_inAttributeActualTypeList) ;
  bool bool_0 = var_found_6145.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 177)).isValidAndTrue () ;
  if (enumerator_6166.hasCurrentObject () && bool_0) {
    while (enumerator_6166.hasCurrentObject () && bool_0) {
      switch (enumerator_6166.current_mType (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_doubleType:
        {
          const GGS_doubleAsDefaultValue temp_1 = this ;
          outArgument_outSwiftDefaultValueAsString = temp_1.readProperty_mValue ().readProperty_double ().getter_string (SOURCE_FILE ("explicit-default-value.ggs", 180)) ;
          var_found_6145 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_boolType:
      case GGS_typeKind::Enumeration::enum_dateType:
      case GGS_typeKind::Enumeration::enum_dataType:
      case GGS_typeKind::Enumeration::enum_integerType:
      case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
      case GGS_typeKind::Enumeration::enum_stringType:
      case GGS_typeKind::Enumeration::enum_fontType:
      case GGS_typeKind::Enumeration::enum_colorType:
      case GGS_typeKind::Enumeration::enum_bezierPathType:
      case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
        break ;
      case GGS_typeKind::Enumeration::enum_entityType:
        break ;
      case GGS_typeKind::Enumeration::enum_enumType:
        break ;
      case GGS_typeKind::Enumeration::enum_classType:
        break ;
      case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
        break ;
      }
      enumerator_6166.gotoNextObject () ;
      if (enumerator_6166.hasCurrentObject ()) {
        bool_0 = var_found_6145.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 177)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_found_6145.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 190)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_doubleAsDefaultValue temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mValue ().readProperty_location (), GGS_string ("only a double attribute can be initialized by a floating point constant"), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 191)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@stringAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_stringAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_7108 = GGS_bool (false) ;
  UpEnumerator_typeKindList enumerator_7129 (constinArgument_inAttributeActualTypeList) ;
  bool bool_0 = var_found_7108.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 205)).isValidAndTrue () ;
  if (enumerator_7129.hasCurrentObject () && bool_0) {
    while (enumerator_7129.hasCurrentObject () && bool_0) {
      switch (enumerator_7129.current_mType (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_stringType:
        {
          const GGS_stringAsDefaultValue temp_1 = this ;
          outArgument_outSwiftDefaultValueAsString = GGS_string ("\"").add_operation (temp_1.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 208)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 208)) ;
          var_found_7108 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_boolType:
      case GGS_typeKind::Enumeration::enum_dateType:
      case GGS_typeKind::Enumeration::enum_dataType:
      case GGS_typeKind::Enumeration::enum_integerType:
      case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
      case GGS_typeKind::Enumeration::enum_doubleType:
      case GGS_typeKind::Enumeration::enum_fontType:
      case GGS_typeKind::Enumeration::enum_colorType:
      case GGS_typeKind::Enumeration::enum_bezierPathType:
      case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
        break ;
      case GGS_typeKind::Enumeration::enum_entityType:
        break ;
      case GGS_typeKind::Enumeration::enum_enumType:
        break ;
      case GGS_typeKind::Enumeration::enum_classType:
        break ;
      case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
        break ;
      }
      enumerator_7129.gotoNextObject () ;
      if (enumerator_7129.hasCurrentObject ()) {
        bool_0 = var_found_7108.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 205)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_found_7108.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 218)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_stringAsDefaultValue temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mValue ().readProperty_location (), GGS_string ("only a string attribute can be initialized by a string constant"), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 219)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'predefinedDates'
//
//--------------------------------------------------------------------------------------------------

static GGS_stringset onceFunction_predefinedDates (Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result_result ; // Returned variable
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 227)) ;
  result_result = temp_0 ;
  {
  result_result.setter_insert (GGS_string ("now"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 228)) ;
  }
  {
  result_result.setter_insert (GGS_string ("distantPast"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 229)) ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_predefinedDates = false ;
static GGS_stringset gOnceFunctionResult_predefinedDates ;

//--------------------------------------------------------------------------------------------------

GGS_stringset function_predefinedDates (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_predefinedDates) {
    gOnceFunctionResult_predefinedDates = onceFunction_predefinedDates (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_predefinedDates = true ;
  }
  return gOnceFunctionResult_predefinedDates ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_predefinedDates (void) {
  gOnceFunctionResult_predefinedDates.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_predefinedDates (nullptr,
                                                           releaseOnceFunctionResult_predefinedDates) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_predefinedDates [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_predefinedDates (Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GGS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_predefinedDates (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_predefinedDates ("predefinedDates",
                                                                 functionWithGenericHeader_predefinedDates,
                                                                 & kTypeDescriptor_GALGAS_stringset,
                                                                 0,
                                                                 functionArgs_predefinedDates) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'predefinedColors'
//
//--------------------------------------------------------------------------------------------------

static GGS_stringset onceFunction_predefinedColors (Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result_result ; // Returned variable
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 235)) ;
  result_result = temp_0 ;
  {
  result_result.setter_insert (GGS_string ("black"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 236)) ;
  }
  {
  result_result.setter_insert (GGS_string ("blue"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 237)) ;
  }
  {
  result_result.setter_insert (GGS_string ("brown"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 238)) ;
  }
  {
  result_result.setter_insert (GGS_string ("clear"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 239)) ;
  }
  {
  result_result.setter_insert (GGS_string ("control"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 240)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlDarkShadow"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 241)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlHighlight"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 242)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlLightHighlight"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 243)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlShadow"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 244)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 245)) ;
  }
  {
  result_result.setter_insert (GGS_string ("cyan"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 246)) ;
  }
  {
  result_result.setter_insert (GGS_string ("darkGray"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 247)) ;
  }
  {
  result_result.setter_insert (GGS_string ("disabledControlText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 248)) ;
  }
  {
  result_result.setter_insert (GGS_string ("gray"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 249)) ;
  }
  {
  result_result.setter_insert (GGS_string ("green"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 250)) ;
  }
  {
  result_result.setter_insert (GGS_string ("grid"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 251)) ;
  }
  {
  result_result.setter_insert (GGS_string ("header"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 252)) ;
  }
  {
  result_result.setter_insert (GGS_string ("headerText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 253)) ;
  }
  {
  result_result.setter_insert (GGS_string ("highlight"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 254)) ;
  }
  {
  result_result.setter_insert (GGS_string ("keyboardFocusIndicator"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 255)) ;
  }
  {
  result_result.setter_insert (GGS_string ("knob"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 256)) ;
  }
  {
  result_result.setter_insert (GGS_string ("lightGray"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 257)) ;
  }
  {
  result_result.setter_insert (GGS_string ("magenta"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 258)) ;
  }
  {
  result_result.setter_insert (GGS_string ("orange"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 259)) ;
  }
  {
  result_result.setter_insert (GGS_string ("purple"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 260)) ;
  }
  {
  result_result.setter_insert (GGS_string ("red"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 261)) ;
  }
  {
  result_result.setter_insert (GGS_string ("scrollBar"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 262)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedControl"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 263)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedControlText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 264)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedKnob"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 265)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedMenuItem"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 266)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedMenuItemText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 267)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedTextBackground"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 268)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 269)) ;
  }
  {
  result_result.setter_insert (GGS_string ("shadow"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 270)) ;
  }
  {
  result_result.setter_insert (GGS_string ("textBackground"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 271)) ;
  }
  {
  result_result.setter_insert (GGS_string ("white"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 272)) ;
  }
  {
  result_result.setter_insert (GGS_string ("windowBackground"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 273)) ;
  }
  {
  result_result.setter_insert (GGS_string ("windowFrame"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 274)) ;
  }
  {
  result_result.setter_insert (GGS_string ("windowFrameText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 275)) ;
  }
  {
  result_result.setter_insert (GGS_string ("yellow"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 276)) ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_predefinedColors = false ;
static GGS_stringset gOnceFunctionResult_predefinedColors ;

//--------------------------------------------------------------------------------------------------

GGS_stringset function_predefinedColors (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_predefinedColors) {
    gOnceFunctionResult_predefinedColors = onceFunction_predefinedColors (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_predefinedColors = true ;
  }
  return gOnceFunctionResult_predefinedColors ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_predefinedColors (void) {
  gOnceFunctionResult_predefinedColors.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_predefinedColors (nullptr,
                                                            releaseOnceFunctionResult_predefinedColors) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_predefinedColors [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_predefinedColors (Compiler * inCompiler,
                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                              const GGS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  return function_predefinedColors (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_predefinedColors ("predefinedColors",
                                                                  functionWithGenericHeader_predefinedColors,
                                                                  & kTypeDescriptor_GALGAS_stringset,
                                                                  0,
                                                                  functionArgs_predefinedColors) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@identifierAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_identifierAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                    const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                    GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_9828 = GGS_bool (false) ;
  UpEnumerator_typeKindList enumerator_9849 (constinArgument_inAttributeActualTypeList) ;
  bool bool_0 = var_found_9828.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 287)).isValidAndTrue () ;
  if (enumerator_9849.hasCurrentObject () && bool_0) {
    while (enumerator_9849.hasCurrentObject () && bool_0) {
      switch (enumerator_9849.current_mType (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_dateType:
        {
          var_found_9828 = GGS_bool (true) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            const GGS_identifierAsDefaultValue temp_2 = this ;
            test_1 = function_predefinedDates (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 291)).getter_hasKey (temp_2.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.ggs", 291)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GalgasBool test_3 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_3) {
                const GGS_identifierAsDefaultValue temp_4 = this ;
                test_3 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("now"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_3) {
                  outArgument_outSwiftDefaultValueAsString = GGS_string ("Date ()") ;
                }
              }
              if (GalgasBool::boolFalse == test_3) {
                GalgasBool test_5 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_5) {
                  const GGS_identifierAsDefaultValue temp_6 = this ;
                  test_5 = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("distantPast"))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_5) {
                    outArgument_outSwiftDefaultValueAsString = GGS_string ("Date.distantPast") ;
                  }
                }
                if (GalgasBool::boolFalse == test_5) {
                  const GGS_identifierAsDefaultValue temp_7 = this ;
                  GenericArray <FixItDescription> fixItArray8 ;
                  inCompiler->emitSemanticError (temp_7.readProperty_mValue ().readProperty_location (), GGS_string ("unknown predefined date"), fixItArray8  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 297)) ;
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_1) {
            const GGS_identifierAsDefaultValue temp_9 = this ;
            GenericArray <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (temp_9.readProperty_mValue ().readProperty_location (), GGS_string ("unknown predefined date"), fixItArray10  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 300)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_bezierPathType:
        {
          var_found_9828 = GGS_bool (true) ;
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            const GGS_identifierAsDefaultValue temp_12 = this ;
            test_11 = GGS_bool (ComparisonKind::equal, temp_12.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              outArgument_outSwiftDefaultValueAsString = GGS_string ("NSBezierPath ()") ;
            }
          }
          if (GalgasBool::boolFalse == test_11) {
            const GGS_identifierAsDefaultValue temp_13 = this ;
            GenericArray <FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (temp_13.readProperty_mValue ().readProperty_location (), GGS_string ("only 'empty' is accepted as default NSBezierPath"), fixItArray14  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 307)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
        {
          var_found_9828 = GGS_bool (true) ;
          GalgasBool test_15 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_15) {
            const GGS_identifierAsDefaultValue temp_16 = this ;
            test_15 = GGS_bool (ComparisonKind::equal, temp_16.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              outArgument_outSwiftDefaultValueAsString = GGS_string ("BezierPathArray ()") ;
            }
          }
          if (GalgasBool::boolFalse == test_15) {
            const GGS_identifierAsDefaultValue temp_17 = this ;
            GenericArray <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (temp_17.readProperty_mValue ().readProperty_location (), GGS_string ("only 'empty' is accepted as default BezierPathArray"), fixItArray18  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 314)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_enumType:
        {
          GGS_string extractedValue_10926_enumTypeName_0 ;
          GGS_enumConstantMap extractedValue_10957_constantMap_1 ;
          GGS_enumFuncMap extractedValue_10970__2 ;
          enumerator_9849.current_mType (HERE).getAssociatedValuesFor_enumType (extractedValue_10926_enumTypeName_0, extractedValue_10957_constantMap_1, extractedValue_10970__2) ;
          var_found_9828 = GGS_bool (true) ;
          GalgasBool test_19 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_19) {
            const GGS_identifierAsDefaultValue temp_20 = this ;
            test_19 = extractedValue_10957_constantMap_1.getter_hasKey (temp_20.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.ggs", 318)).boolEnum () ;
            if (GalgasBool::boolTrue == test_19) {
              const GGS_identifierAsDefaultValue temp_21 = this ;
              outArgument_outSwiftDefaultValueAsString = extractedValue_10926_enumTypeName_0.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 319)).add_operation (temp_21.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 319)) ;
            }
          }
          if (GalgasBool::boolFalse == test_19) {
            const GGS_identifierAsDefaultValue temp_22 = this ;
            const GGS_identifierAsDefaultValue temp_23 = this ;
            GenericArray <FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_22.readProperty_mValue ().readProperty_location (), GGS_string ("the '").add_operation (extractedValue_10926_enumTypeName_0, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 322)).add_operation (GGS_string ("' enumeration does not define '"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 322)).add_operation (temp_23.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 322)).add_operation (GGS_string ("' constant"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 322)), fixItArray24  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 321)) ;
            outArgument_outSwiftDefaultValueAsString.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_entityType:
        {
          GGS_string extractedValue_11341__0 ;
          GGS_bool extractedValue_11341__1 ;
          enumerator_9849.current_mType (HERE).getAssociatedValuesFor_entityType (extractedValue_11341__0, extractedValue_11341__1) ;
          const GGS_identifierAsDefaultValue temp_25 = this ;
          GenericArray <FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (temp_25.readProperty_mValue ().readProperty_location (), GGS_string ("invalid entity type"), fixItArray26  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 326)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_classType:
        {
          GGS_string extractedValue_11416__0 ;
          enumerator_9849.current_mType (HERE).getAssociatedValuesFor_classType (extractedValue_11416__0) ;
          const GGS_identifierAsDefaultValue temp_27 = this ;
          GenericArray <FixItDescription> fixItArray28 ;
          inCompiler->emitSemanticError (temp_27.readProperty_mValue ().readProperty_location (), GGS_string ("invalid class type"), fixItArray28  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 328)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_boolType:
        {
          const GGS_identifierAsDefaultValue temp_29 = this ;
          GenericArray <FixItDescription> fixItArray30 ;
          inCompiler->emitSemanticError (temp_29.readProperty_mValue ().readProperty_location (), GGS_string ("invalid bool type"), fixItArray30  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 330)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_dataType:
        {
          var_found_9828 = GGS_bool (true) ;
          GalgasBool test_31 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_31) {
            const GGS_identifierAsDefaultValue temp_32 = this ;
            test_31 = GGS_bool (ComparisonKind::equal, temp_32.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_31) {
              outArgument_outSwiftDefaultValueAsString = GGS_string ("Data ()") ;
            }
          }
          if (GalgasBool::boolFalse == test_31) {
            const GGS_identifierAsDefaultValue temp_33 = this ;
            GenericArray <FixItDescription> fixItArray34 ;
            inCompiler->emitSemanticError (temp_33.readProperty_mValue ().readProperty_location (), GGS_string ("only 'empty' is accepted as default Data"), fixItArray34  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 336)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_doubleType:
        {
          const GGS_identifierAsDefaultValue temp_35 = this ;
          GenericArray <FixItDescription> fixItArray36 ;
          inCompiler->emitSemanticError (temp_35.readProperty_mValue ().readProperty_location (), GGS_string ("invalid double type"), fixItArray36  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 339)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_integerType:
        {
          const GGS_identifierAsDefaultValue temp_37 = this ;
          GenericArray <FixItDescription> fixItArray38 ;
          inCompiler->emitSemanticError (temp_37.readProperty_mValue ().readProperty_location (), GGS_string ("invalid integer type"), fixItArray38  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 341)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
        {
          const GGS_identifierAsDefaultValue temp_39 = this ;
          GenericArray <FixItDescription> fixItArray40 ;
          inCompiler->emitSemanticError (temp_39.readProperty_mValue ().readProperty_location (), GGS_string ("invalid UInt32 type"), fixItArray40  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 343)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_stringType:
        {
          const GGS_identifierAsDefaultValue temp_41 = this ;
          GenericArray <FixItDescription> fixItArray42 ;
          inCompiler->emitSemanticError (temp_41.readProperty_mValue ().readProperty_location (), GGS_string ("invalid string type"), fixItArray42  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 345)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_fontType:
        {
          const GGS_identifierAsDefaultValue temp_43 = this ;
          GenericArray <FixItDescription> fixItArray44 ;
          inCompiler->emitSemanticError (temp_43.readProperty_mValue ().readProperty_location (), GGS_string ("invalid font type"), fixItArray44  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 347)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_colorType:
        {
          GalgasBool test_45 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_45) {
            const GGS_identifierAsDefaultValue temp_46 = this ;
            test_45 = function_predefinedColors (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 349)).getter_hasKey (temp_46.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.ggs", 349)).boolEnum () ;
            if (GalgasBool::boolTrue == test_45) {
              const GGS_identifierAsDefaultValue temp_47 = this ;
              outArgument_outSwiftDefaultValueAsString = GGS_string ("NSColor.").add_operation (temp_47.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 350)) ;
              var_found_9828 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_45) {
            const GGS_identifierAsDefaultValue temp_48 = this ;
            GenericArray <FixItDescription> fixItArray49 ;
            inCompiler->emitSemanticError (temp_48.readProperty_mValue ().readProperty_location (), GGS_string ("unknown predefined color"), fixItArray49  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 353)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
        {
          GGS_string extractedValue_12411__0 ;
          enumerator_9849.current_mType (HERE).getAssociatedValuesFor_transientPropertyExternType (extractedValue_12411__0) ;
          const GGS_identifierAsDefaultValue temp_50 = this ;
          GenericArray <FixItDescription> fixItArray51 ;
          inCompiler->emitSemanticError (temp_50.readProperty_mValue ().readProperty_location (), GGS_string ("invalid image type"), fixItArray51  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 356)) ;
        }
        break ;
      }
      enumerator_9849.gotoNextObject () ;
      if (enumerator_9849.hasCurrentObject ()) {
        bool_0 = var_found_9828.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 287)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_52 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_52) {
    test_52 = var_found_9828.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 359)).boolEnum () ;
    if (GalgasBool::boolTrue == test_52) {
      const GGS_identifierAsDefaultValue temp_53 = this ;
      GenericArray <FixItDescription> fixItArray54 ;
      inCompiler->emitSemanticError (temp_53.readProperty_mValue ().readProperty_location (), GGS_string ("unknow type for this identifier"), fixItArray54  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 360)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@prefsAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_prefsAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                               const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                               GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind var_kind_12950 ;
  const GGS_prefsAsDefaultValue temp_0 = this ;
  GGS_actionMap joker_12956_2 ; // Joker input parameter
  GGS_bool joker_12956_1 ; // Joker input parameter
  constinArgument_inPreferencesPropertyMap.method_searchKey (temp_0.readProperty_mPrefPropertyName (), var_kind_12950, joker_12956_2, joker_12956_1, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 372)) ;
  switch (var_kind_12950.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_13002_type_0 ;
      GGS_propertyAccessibility extractedValue_13008__1 ;
      var_kind_12950.getAssociatedValuesFor_property (extractedValue_13002_type_0, extractedValue_13008__1) ;
      GGS_bool var_found_13021 = GGS_bool (false) ;
      UpEnumerator_typeKindList enumerator_13044 (constinArgument_inAttributeActualTypeList) ;
      bool bool_1 = var_found_13021.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 376)).isValidAndTrue () ;
      if (enumerator_13044.hasCurrentObject () && bool_1) {
        while (enumerator_13044.hasCurrentObject () && bool_1) {
          var_found_13021 = GGS_bool (ComparisonKind::equal, extractedValue_13002_type_0.objectCompare (enumerator_13044.current_mType (HERE))) ;
          enumerator_13044.gotoNextObject () ;
          if (enumerator_13044.hasCurrentObject ()) {
            bool_1 = var_found_13021.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 376)).isValidAndTrue () ;
          }
        }
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_found_13021.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 379)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_prefsAsDefaultValue temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("the atomic property type is not compatible"), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 380)) ;
        }
      }
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_13255__0 ;
      GGS_propertyAccessibility extractedValue_13255__1 ;
      GGS_bool extractedValue_13255__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_13255__3 ;
      var_kind_12950.getAssociatedValuesFor_toMany (extractedValue_13255__0, extractedValue_13255__1, extractedValue_13255__2, extractedValue_13255__3) ;
      const GGS_prefsAsDefaultValue temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray6  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 383)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_13348__0 ;
      GGS_propertyAccessibility extractedValue_13348__1 ;
      GGS_bool extractedValue_13348__2 ;
      GGS_toOneOppositeRelationship extractedValue_13348__3 ;
      GGS_bool extractedValue_13348__4 ;
      var_kind_12950.getAssociatedValuesFor_toOne (extractedValue_13348__0, extractedValue_13348__1, extractedValue_13348__2, extractedValue_13348__3, extractedValue_13348__4) ;
      const GGS_prefsAsDefaultValue temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray8  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 385)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_13451__0 ;
      GGS_bool extractedValue_13451__1 ;
      var_kind_12950.getAssociatedValuesFor_arrayController (extractedValue_13451__0, extractedValue_13451__1) ;
      const GGS_prefsAsDefaultValue temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray10  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 387)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_13557__0 ;
      var_kind_12950.getAssociatedValuesFor_selectionController (extractedValue_13557__0) ;
      const GGS_prefsAsDefaultValue temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray12  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 389)) ;
    }
    break ;
  }
  const GGS_prefsAsDefaultValue temp_13 = this ;
  outArgument_outSwiftDefaultValueAsString = GGS_string ("preferences_").add_operation (temp_13.readProperty_mPrefPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 391)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@prefsAsDefaultValue enterDefaultValuePrecedence'
//--------------------------------------------------------------------------------------------------

void cPtr_prefsAsDefaultValue::method_enterDefaultValuePrecedence (const GGS_lstring constinArgument_inNode,
                                                                   GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_prefsAsDefaultValue temp_0 = this ;
  const GGS_prefsAsDefaultValue temp_1 = this ;
  GGS_lstring var_p_13955 = GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 400)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 400)).add_operation (temp_0.readProperty_mPrefPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 400)), temp_1.readProperty_mPrefPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inNode, var_p_13955 COMMA_SOURCE_FILE ("explicit-default-value.ggs", 401)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildAutoLayoutBindingSpecificationMap&?'
//
//--------------------------------------------------------------------------------------------------

void routine_buildAutoLayoutBindingSpecificationMap_26__3F_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                             const GGS_autoLayoutViewClassBindingSpecificationList constinArgument_inBindingSpecificationListMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_autoLayoutViewClassBindingSpecificationList enumerator_3666 (constinArgument_inBindingSpecificationListMap) ;
  while (enumerator_3666.hasCurrentObject ()) {
    GGS_outletBindingSpecificationModelList temp_0 = GGS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 98)) ;
    GGS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_3767 = temp_0 ;
    UpEnumerator_outletClassBindingSpecificationModelList enumerator_3833 (enumerator_3666.current_mOutletClassBindingSpecificationModelList (HERE)) ;
    while (enumerator_3833.hasCurrentObject ()) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, enumerator_3833.current_mModelTypeName (HERE).readProperty_string ().objectCompare (GGS_string ("enum"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          var_outletBindingSpecificationModelList_3767.setter_append (GGS_typeKind::class_func_enumType (GGS_string::makeEmptyString (), GGS_enumConstantMap::init (inCompiler COMMA_HERE), GGS_enumFuncMap::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 102)), enumerator_3833.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 101)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GGS_classKind var_classKind_4247 ;
        GGS_propertyMap joker_4258_3 ; // Joker input parameter
        GGS_actionMap joker_4258_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_4258_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_3833.current_mModelTypeName (HERE), var_classKind_4247, joker_4258_3, joker_4258_2, joker_4258_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 106)) ;
        GGS_typeKind var_typeKind_4285 ;
        switch (var_classKind_4247.enumValue ()) {
        case GGS_classKind::Enumeration::invalid:
          break ;
        case GGS_classKind::Enumeration::enum_prefs:
          {
            GenericArray <FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_3833.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 110)) ;
            var_typeKind_4285.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_atomic:
          {
            GGS_typeKind extractedValue_4456_kind_0 ;
            var_classKind_4247.getAssociatedValuesFor_atomic (extractedValue_4456_kind_0) ;
            var_typeKind_4285 = extractedValue_4456_kind_0 ;
          }
          break ;
        case GGS_classKind::Enumeration::enum_document:
          {
            GGS_lstring extractedValue_4513__0 ;
            var_classKind_4247.getAssociatedValuesFor_document (extractedValue_4513__0) ;
            GenericArray <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_3833.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 114)) ;
            var_typeKind_4285.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_entity:
          {
            GGS_string extractedValue_4625__0 ;
            GGS_bool extractedValue_4625__1 ;
            GGS_bool extractedValue_4625__2 ;
            GGS_bool extractedValue_4625__3 ;
            var_classKind_4247.getAssociatedValuesFor_entity (extractedValue_4625__0, extractedValue_4625__1, extractedValue_4625__2, extractedValue_4625__3) ;
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_3833.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 116)) ;
            var_typeKind_4285.drop () ; // Release error dropped variable
          }
          break ;
        }
        {
        var_outletBindingSpecificationModelList_3767.setter_append (var_typeKind_4285, enumerator_3833.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 118)) ;
        }
      }
      enumerator_3833.gotoNextObject () ;
    }
    GGS_controllerBindingOptionDecoratedList temp_5 = GGS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 121)) ;
    GGS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_4887 = temp_5 ;
    UpEnumerator_controllerBindingOptionList enumerator_4951 (enumerator_3666.current_mBindingOptionList (HERE)) ;
    while (enumerator_4951.hasCurrentObject ()) {
      GGS_classKind var_classKind_5071 ;
      GGS_propertyMap joker_5082_3 ; // Joker input parameter
      GGS_actionMap joker_5082_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_5082_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_4951.current_mOptionTypeName (HERE), var_classKind_5071, joker_5082_3, joker_5082_2, joker_5082_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 123)) ;
      GGS_typeKind var_typeKind_5107 ;
      switch (var_classKind_5071.enumValue ()) {
      case GGS_classKind::Enumeration::invalid:
        break ;
      case GGS_classKind::Enumeration::enum_prefs:
        {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_4951.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 127)) ;
          var_typeKind_5107.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_atomic:
        {
          GGS_typeKind extractedValue_5271_kind_0 ;
          var_classKind_5071.getAssociatedValuesFor_atomic (extractedValue_5271_kind_0) ;
          var_typeKind_5107 = extractedValue_5271_kind_0 ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_document:
        {
          GGS_lstring extractedValue_5324__0 ;
          var_classKind_5071.getAssociatedValuesFor_document (extractedValue_5324__0) ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_4951.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray7  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 131)) ;
          var_typeKind_5107.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_entity:
        {
          GGS_string extractedValue_5433__0 ;
          GGS_bool extractedValue_5433__1 ;
          GGS_bool extractedValue_5433__2 ;
          GGS_bool extractedValue_5433__3 ;
          var_classKind_5071.getAssociatedValuesFor_entity (extractedValue_5433__0, extractedValue_5433__1, extractedValue_5433__2, extractedValue_5433__3) ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_4951.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 133)) ;
          var_typeKind_5107.drop () ; // Release error dropped variable
        }
        break ;
      }
      {
      var_controllerBindingOptionDecoratedList_4887.setter_append (var_typeKind_5107, enumerator_4951.current_mOptionName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 135)) ;
      }
      enumerator_4951.gotoNextObject () ;
    }
    GGS_autoLayoutViewBindingSpecificationMap var_bindingMap_5692 ;
    GGS_lstring var_outletSuperClassName_5720 ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = ioArgument_ioSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().getter_hasKey (enumerator_3666.current_mOutletClassName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 140)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        {
        ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_removeKey (enumerator_3666.current_mOutletClassName (HERE), var_outletSuperClassName_5720, var_bindingMap_5692, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 141)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      var_bindingMap_5692 = GGS_autoLayoutViewBindingSpecificationMap::init (inCompiler COMMA_HERE) ;
      GGS_bool joker_6096_8 ; // Joker input parameter
      GGS_bool joker_6096_7 ; // Joker input parameter
      GGS_bool joker_6096_6 ; // Joker input parameter
      GGS_bool joker_6096_5 ; // Joker input parameter
      GGS_bool joker_6096_4 ; // Joker input parameter
      GGS_bool joker_6096_3 ; // Joker input parameter
      GGS_autoLayoutClassParameterList joker_6096_2 ; // Joker input parameter
      GGS_astAutoLayoutViewFunctionMap joker_6096_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (enumerator_3666.current_mOutletClassName (HERE), var_outletSuperClassName_5720, joker_6096_8, joker_6096_7, joker_6096_6, joker_6096_5, joker_6096_4, joker_6096_3, joker_6096_2, joker_6096_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 144)) ;
    }
    {
    var_bindingMap_5692.setter_insertKey (enumerator_3666.current_mBindingName (HERE), var_outletBindingSpecificationModelList_3767, var_controllerBindingOptionDecoratedList_4887, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 146)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_insertKey (enumerator_3666.current_mOutletClassName (HERE), var_outletSuperClassName_5720, var_bindingMap_5692, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 151)) ;
    }
    enumerator_3666.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'sortProperties??!'
//
//--------------------------------------------------------------------------------------------------

void routine_sortProperties_3F__3F__21_ (const GGS_string constinArgument_inSourceFile,
                                         const GGS_declarationListAST constinArgument_inDeclarationListAST,
                                         GGS_declarationListAST & outArgument_outSortedDeclarationListAST,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSortedDeclarationListAST.drop () ; // Release 'out' argument
  GGS_declarationPrecedenceGraph var_declarationPrecedenceGraph_2415 = GGS_declarationPrecedenceGraph::init (inCompiler COMMA_HERE) ;
  UpEnumerator_declarationListAST enumerator_2455 (constinArgument_inDeclarationListAST) ;
  while (enumerator_2455.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) enumerator_2455.current_mPropertyDeclaration (HERE).ptr (), var_declarationPrecedenceGraph_2415, inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 69)) ;
    enumerator_2455.gotoNextObject () ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_easyBindings_5F_options_outputDeclarationDependencyGraph.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_s_2694 = var_declarationPrecedenceGraph_2415.getter_graphviz (SOURCE_FILE ("declaration-graph.ggs", 73)) ;
      GGS_string var_path_2742 = constinArgument_inSourceFile.add_operation (GGS_string (".declarationDependancy.dot"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 74)) ;
      GGS_bool joker_2839 ; // Joker input parameter
      var_s_2694.method_writeToFileWhenDifferentContents (var_path_2742, joker_2839, inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 75)) ;
    }
  }
  GGS_declarationListAST temp_1 = GGS_declarationListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 78)) ;
  outArgument_outSortedDeclarationListAST = temp_1 ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_declarationPrecedenceGraph_2415.getter_undefinedNodeCount (SOURCE_FILE ("declaration-graph.ggs", 79)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      UpEnumerator_lstringlist enumerator_3009 (var_declarationPrecedenceGraph_2415.getter_undefinedNodeReferenceList (SOURCE_FILE ("declaration-graph.ggs", 80))) ;
      while (enumerator_3009.hasCurrentObject ()) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_3009.current_mValue (HERE).readProperty_location (), GGS_string ("the property ").add_operation (enumerator_3009.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 81)).add_operation (GGS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 81)), fixItArray3  COMMA_SOURCE_FILE ("declaration-graph.ggs", 81)) ;
        enumerator_3009.gotoNextObject () ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GGS_declarationListAST var_unsortedSemanticDeclarationListAST_3271 ;
    GGS_lstringlist joker_3256 ; // Joker input parameter
    GGS_lstringlist joker_3313 ; // Joker input parameter
    var_declarationPrecedenceGraph_2415.method_topologicalSort (outArgument_outSortedDeclarationListAST, joker_3256, var_unsortedSemanticDeclarationListAST_3271, joker_3313, inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 84)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, var_unsortedSemanticDeclarationListAST_3271.getter_count (SOURCE_FILE ("declaration-graph.ggs", 90)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_string var_s_3389 = GGS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_3271.getter_count (SOURCE_FILE ("declaration-graph.ggs", 92)).getter_string (SOURCE_FILE ("declaration-graph.ggs", 91)), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 91)).add_operation (GGS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 92)) ;
        UpEnumerator_declarationListAST enumerator_3562 (var_unsortedSemanticDeclarationListAST_3271) ;
        while (enumerator_3562.hasCurrentObject ()) {
          var_s_3389.plusAssignOperation(GGS_string ("\n-  ").add_operation (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3562.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 95)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 95)), inCompiler  COMMA_SOURCE_FILE ("declaration-graph.ggs", 95)) ;
          enumerator_3562.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-graph.ggs", 97)), var_s_3389, fixItArray5  COMMA_SOURCE_FILE ("declaration-graph.ggs", 97)) ;
        UpEnumerator_declarationListAST enumerator_3706 (var_unsortedSemanticDeclarationListAST_3271) ;
        while (enumerator_3706.hasCurrentObject ()) {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3706.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)).readProperty_location (), GGS_string ("the ").add_operation (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3706.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)).add_operation (GGS_string (" property is declared here"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)), fixItArray6  COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)) ;
          enumerator_3706.gotoNextObject () ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'xcodeProjectGenerationFilewrapper'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_xcodeProjectGenerationFilewrapper_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_xcodeProjectGenerationFilewrapper (
  "",
  0,
  gWrapperAllFiles_xcodeProjectGenerationFilewrapper_0,
  0,
  gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'xcodeProjectGenerationFilewrapper xcodeproj'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (Compiler * /* inCompiler */,
                                                                            const GGS_string & in_PROJECT_5F_REF,
                                                                            const GGS_string & in_MAIN_5F_GROUP_5F_REF,
                                                                            const GGS_XCodeGroupList & in_GROUPS,
                                                                            const GGS_stringlist & in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS,
                                                                            const GGS_XCodeToolTargetList & in_TOOL_5F_TARGET_5F_LIST,
                                                                            const GGS_XCodeAppTargetList & in_APP_5F_TARGET_5F_LIST,
                                                                            const GGS__32_stringlist & in_CPP_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_M_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_MM_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_SWIFT_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_FRAMEWORK_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_HEADER_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_PLIST_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_TIFF_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_ICNS_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_XIB_5F_FILE_5F_LIST,
                                                                            const GGS_BuildFileList & in_BUILD_5F_FILE_5F_LIST,
                                                                            const GGS_string & in_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                            const GGS_stringlist & in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST,
                                                                            const GGS_string & in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("// !$*UTF8*$!\n{\n  archiveVersion = 1;\n  classes = {\n  };\n  objectVersion = 42;\n  objects = {\n\n  /*------------------------------------------------------------------ PBXBuildFile */\n") ;
  GGS_uint index_249_ (0) ;
  if (in_BUILD_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator_BuildFileList enumerator_249 (in_BUILD_5F_FILE_5F_LIST) ;
    while (enumerator_249.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_249.current_mBuildReference (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_249.current_mFileName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXBuildFile;\n    fileRef = ") ;
      result.appendString (enumerator_249.current_mFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    settings = {ATTRIBUTES = (); };\n  };\n\n") ;
      enumerator_249.gotoNextObject () ;
      index_249_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXFileReference */\n") ;
  GGS_uint index_554_ (0) ;
  if (in_CPP_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_554 (in_CPP_5F_FILE_5F_LIST) ;
    while (enumerator_554.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_554.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_554.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.cpp.cpp;\n    name = ") ;
      result.appendString (enumerator_554.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_554.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_554.gotoNextObject () ;
      index_554_.increment () ;
    }
  }
  GGS_uint index_901_ (0) ;
  if (in_M_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_901 (in_M_5F_FILE_5F_LIST) ;
    while (enumerator_901.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_901.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_901.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.obj;\n    name = ") ;
      result.appendString (enumerator_901.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_901.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 36)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_901.gotoNextObject () ;
      index_901_.increment () ;
    }
  }
  GGS_uint index_1247_ (0) ;
  if (in_MM_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_1247 (in_MM_5F_FILE_5F_LIST) ;
    while (enumerator_1247.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1247.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1247.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.cpp.objcpp;\n    name = ") ;
      result.appendString (enumerator_1247.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1247.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 46)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_1247.gotoNextObject () ;
      index_1247_.increment () ;
    }
  }
  GGS_uint index_1601_ (0) ;
  if (in_SWIFT_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_1601 (in_SWIFT_5F_FILE_5F_LIST) ;
    while (enumerator_1601.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1601.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1601.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.swift;\n    name = ") ;
      result.appendString (enumerator_1601.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1601.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 56)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_1601.gotoNextObject () ;
      index_1601_.increment () ;
    }
  }
  GGS_uint index_1951_ (0) ;
  if (in_HEADER_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_1951 (in_HEADER_5F_FILE_5F_LIST) ;
    while (enumerator_1951.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1951.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1951.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.h;\n    name = ") ;
      result.appendString (enumerator_1951.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1951.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 66)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_1951.gotoNextObject () ;
      index_1951_.increment () ;
    }
  }
  GGS_uint index_2302_ (0) ;
  if (in_FRAMEWORK_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_2302 (in_FRAMEWORK_5F_FILE_5F_LIST) ;
    while (enumerator_2302.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2302.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_2302.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    lastKnownFileType = wrapper.framework;\n    name = ") ;
      result.appendString (enumerator_2302.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_2302.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 75)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_2302.gotoNextObject () ;
      index_2302_.increment () ;
    }
  }
  GGS_uint index_2835_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_2835 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_2835.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2835.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = ") ;
      result.appendString (enumerator_2835.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 84)).stringValue ()) ;
      result.appendString (";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n") ;
      enumerator_2835.gotoNextObject () ;
      index_2835_.increment () ;
    }
  }
  GGS_uint index_3426_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_3426 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_3426.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_3426.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = ") ;
      result.appendString (enumerator_3426.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 93)).stringValue ()) ;
      result.appendString (";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n") ;
      enumerator_3426.gotoNextObject () ;
      index_3426_.increment () ;
    }
  }
  GGS_uint index_3735_ (0) ;
  if (in_PLIST_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_3735 (in_PLIST_5F_FILE_5F_LIST) ;
    while (enumerator_3735.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_3735.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = text.plist;\n    name = ") ;
      result.appendString (enumerator_3735.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_3735.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 103)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_3735.gotoNextObject () ;
      index_3735_.increment () ;
    }
  }
  GGS_uint index_4059_ (0) ;
  if (in_XIB_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_4059 (in_XIB_5F_FILE_5F_LIST) ;
    while (enumerator_4059.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4059.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = wrapper.xib;\n    name = ") ;
      result.appendString (enumerator_4059.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4059.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 113)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_4059.gotoNextObject () ;
      index_4059_.increment () ;
    }
  }
  GGS_uint index_4385_ (0) ;
  if (in_TIFF_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_4385 (in_TIFF_5F_FILE_5F_LIST) ;
    while (enumerator_4385.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4385.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.tiff;\n    name = ") ;
      result.appendString (enumerator_4385.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4385.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 122)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_4385.gotoNextObject () ;
      index_4385_.increment () ;
    }
  }
  GGS_uint index_4684_ (0) ;
  if (in_ICNS_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_4684 (in_ICNS_5F_FILE_5F_LIST) ;
    while (enumerator_4684.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4684.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.icns;\n    name = ") ;
      result.appendString (enumerator_4684.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4684.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 131)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_4684.gotoNextObject () ;
      index_4684_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXFrameworksBuildPhase */\n\n") ;
  GGS_uint index_5295_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_5295 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_5295.hasCurrentObject ()) {
      const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_5295.current_mFrameworksFileRefList (HERE).getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 139)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("  ") ;
        result.appendString (enumerator_5295.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
        result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
        GGS_uint index_5534_ (0) ;
        if (enumerator_5295.current_mFrameworksFileRefList (HERE).isValid ()) {
          UpEnumerator_stringlist enumerator_5534 (enumerator_5295.current_mFrameworksFileRefList (HERE)) ;
          while (enumerator_5534.hasCurrentObject ()) {
            result.appendString ("      ") ;
            result.appendString (enumerator_5534.current_mValue (HERE).stringValue ()) ;
            result.appendString (",\n") ;
            enumerator_5534.gotoNextObject () ;
            index_5534_.increment () ;
          }
        }
        result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_5295.gotoNextObject () ;
      index_5295_.increment () ;
    }
  }
  GGS_uint index_5987_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_5987 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_5987.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_5987.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GGS_uint index_6171_ (0) ;
      if (enumerator_5987.current_mFrameworksFileRefList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_6171 (enumerator_5987.current_mFrameworksFileRefList (HERE)) ;
        while (enumerator_6171.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_6171.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_6171.gotoNextObject () ;
          index_6171_.increment () ;
        }
      }
      result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
      enumerator_5987.gotoNextObject () ;
      index_5987_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXGroup section */\n") ;
  GGS_uint index_6447_ (0) ;
  if (in_GROUPS.isValid ()) {
    UpEnumerator_XCodeGroupList enumerator_6447 (in_GROUPS) ;
    while (enumerator_6447.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_6447.current_mGroupReference (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_6447.current_mGroupName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXGroup;\n    children = (\n") ;
      GGS_uint index_6574_ (0) ;
      if (enumerator_6447.current_mChildrenRefs (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_6574 (enumerator_6447.current_mChildrenRefs (HERE)) ;
        while (enumerator_6574.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_6574.current_mValue (HERE).stringValue ()) ;
          result.appendString (", \n") ;
          enumerator_6574.gotoNextObject () ;
          index_6574_.increment () ;
        }
      }
      result.appendString ("    );\n    name = ") ;
      result.appendString (enumerator_6447.current_mGroupName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 174)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_6447.current_mGroupPath (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 175)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n") ;
      enumerator_6447.gotoNextObject () ;
      index_6447_.increment () ;
    }
  }
  result.appendString ("\n  ") ;
  result.appendString (in_MAIN_5F_GROUP_5F_REF.stringValue ()) ;
  result.appendString (" /* Main Group */ = {\n    isa = PBXGroup;\n    children = (\n") ;
  GGS_uint index_6886_ (0) ;
  if (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS.isValid ()) {
    UpEnumerator_stringlist enumerator_6886 (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS) ;
    while (enumerator_6886.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_6886.current_mValue (HERE).stringValue ()) ;
      result.appendString (",\n") ;
      enumerator_6886.gotoNextObject () ;
      index_6886_.increment () ;
    }
  }
  result.appendString ("    );\n    sourceTree = \"<group>\";\n  };\n\n  /*------------------------------------------------------------------ PBXNativeTarget */\n") ;
  GGS_uint index_7300_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_7300 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_7300.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_7300.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_7300.current_mTargetName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = ") ;
      result.appendString (enumerator_7300.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" ;\n    buildPhases = (\n      ") ;
      result.appendString (enumerator_7300.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" ,\n") ;
      const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_7300.current_mFrameworksFileRefList (HERE).getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 200)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("      ") ;
        result.appendString (enumerator_7300.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
        result.appendString (" , /* Frameworks */\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("    );\n    buildRules = (\n    );\n    dependencies = (\n    );\n    name = ") ;
      result.appendString (enumerator_7300.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 208)).stringValue ()) ;
      result.appendString (";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = ") ;
      result.appendString (enumerator_7300.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 210)).stringValue ()) ;
      result.appendString (";\n    productReference = ") ;
      result.appendString (enumerator_7300.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    productType = \"com.apple.product-type.tool\";\n  };\n \n") ;
      enumerator_7300.gotoNextObject () ;
      index_7300_.increment () ;
    }
  }
  GGS_uint index_8232_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_8232 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_8232.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_8232.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_8232.current_mTargetName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = ") ;
      result.appendString (enumerator_8232.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" ;\n    buildPhases = (\n      ") ;
      result.appendString (enumerator_8232.current_mResourceBuildRef (HERE).stringValue ()) ;
      result.appendString (" , /* Resources */\n      ") ;
      result.appendString (enumerator_8232.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" , /* Frameworks */\n      ") ;
      result.appendString (enumerator_8232.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" , /* Sources */\n    );\n    buildRules = (\n    );\n    dependencies = (\n") ;
      GGS_uint index_8621_ (0) ;
      if (enumerator_8232.current_mDependentTargets (HERE).isValid ()) {
        UpEnumerator__32_stringlist enumerator_8621 (enumerator_8232.current_mDependentTargets (HERE)) ;
        while (enumerator_8621.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_8621.current_mValue_30_ (HERE).stringValue ()) ;
          result.appendString (" ,\n") ;
          enumerator_8621.gotoNextObject () ;
          index_8621_.increment () ;
        }
      }
      result.appendString ("    );\n    name = ") ;
      result.appendString (enumerator_8232.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 234)).stringValue ()) ;
      result.appendString (";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = ") ;
      result.appendString (enumerator_8232.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 236)).stringValue ()) ;
      result.appendString (";\n    productReference = ") ;
      result.appendString (enumerator_8232.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    productType = \"com.apple.product-type.application\";\n  };\n\n") ;
      enumerator_8232.gotoNextObject () ;
      index_8232_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXProject */\n  ") ;
  result.appendString (in_PROJECT_5F_REF.stringValue ()) ;
  result.appendString (" /* Project object */ = {\n   isa = PBXProject;\n   attributes = {\n     LastSwiftUpdateCheck = 0700;\n     LastUpgradeCheck = 0700;\n   };\n   buildConfigurationList = ") ;
  result.appendString (in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Build configuration list for PBXProject */;\n   compatibilityVersion = \"Xcode 2.4\";\n   hasScannedForEncodings = 1;\n   mainGroup = ") ;
  result.appendString (in_MAIN_5F_GROUP_5F_REF.stringValue ()) ;
  result.appendString (";\n   projectDirPath = \"\";\n   projectRoot = \"\";\n   targets = (\n") ;
  GGS_uint index_9693_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_9693 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_9693.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_9693.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (", \n") ;
      enumerator_9693.gotoNextObject () ;
      index_9693_.increment () ;
    }
  }
  GGS_uint index_10047_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_10047 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_10047.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_10047.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (", \n") ;
      enumerator_10047.gotoNextObject () ;
      index_10047_.increment () ;
    }
  }
  result.appendString ("   );\n  };\n\n  /*------------------------------------------------------------------ PBXResourcesBuildPhase */\n\n") ;
  GGS_uint index_10514_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_10514 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_10514.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_10514.current_mResourceBuildRef (HERE).stringValue ()) ;
      result.appendString (" /* Resources */ = {\n    isa = PBXResourcesBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GGS_uint index_10697_ (0) ;
      if (enumerator_10514.current_mResourceFileBuildRefs (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_10697 (enumerator_10514.current_mResourceFileBuildRefs (HERE)) ;
        while (enumerator_10697.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_10697.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_10697.gotoNextObject () ;
          index_10697_.increment () ;
        }
      }
      result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
      enumerator_10514.gotoNextObject () ;
      index_10514_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXSourcesBuildPhase */\n") ;
  GGS_uint index_11147_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_11147 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_11147.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_11147.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GGS_uint index_11314_ (0) ;
      if (enumerator_11147.current_mBuildPhaseRefList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_11314 (enumerator_11147.current_mBuildPhaseRefList (HERE)) ;
        while (enumerator_11314.hasCurrentObject ()) {
          result.appendString ("        ") ;
          result.appendString (enumerator_11314.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_11314.gotoNextObject () ;
          index_11314_.increment () ;
        }
      }
      result.appendString ("      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n") ;
      enumerator_11147.gotoNextObject () ;
      index_11147_.increment () ;
    }
  }
  GGS_uint index_11735_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_11735 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_11735.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_11735.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GGS_uint index_11902_ (0) ;
      if (enumerator_11735.current_mBuildPhaseRefList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_11902 (enumerator_11735.current_mBuildPhaseRefList (HERE)) ;
        while (enumerator_11902.hasCurrentObject ()) {
          result.appendString ("        ") ;
          result.appendString (enumerator_11902.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_11902.gotoNextObject () ;
          index_11902_.increment () ;
        }
      }
      result.appendString ("      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n") ;
      enumerator_11735.gotoNextObject () ;
      index_11735_.increment () ;
    }
  }
  result.appendString ("\n\n  /*------------------------------------------------------------------ PBXTargetDependency */\n \n") ;
  GGS_uint index_12424_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_12424 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_12424.hasCurrentObject ()) {
      GGS_uint index_12472_ (0) ;
      if (enumerator_12424.current_mDependentTargets (HERE).isValid ()) {
        UpEnumerator__32_stringlist enumerator_12472 (enumerator_12424.current_mDependentTargets (HERE)) ;
        while (enumerator_12472.hasCurrentObject ()) {
          result.appendString ("  ") ;
          result.appendString (enumerator_12472.current_mValue_30_ (HERE).stringValue ()) ;
          result.appendString (" = {\n    isa = PBXTargetDependency;\n    target = ") ;
          result.appendString (enumerator_12472.current_mValue_31_ (HERE).stringValue ()) ;
          result.appendString (";\n  };\n\n") ;
          enumerator_12472.gotoNextObject () ;
          index_12472_.increment () ;
        }
      }
      enumerator_12424.gotoNextObject () ;
      index_12424_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXVariantGroup */\n \n  /*------------------------------------------------------------------ XCBuildConfiguration */\n    ") ;
  result.appendString (in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
  GGS_uint index_12949_ (0) ;
  if (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_12949 (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST) ;
    while (enumerator_12949.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_12949.current_mValue (HERE).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_12949.gotoNextObject () ;
      index_12949_.increment () ;
    }
  }
  result.appendString ("    };\n    name = Default;\n  };\n\n") ;
  GGS_uint index_13264_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_13264 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_13264.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_13264.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
      GGS_uint index_13432_ (0) ;
      if (enumerator_13264.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_13432 (enumerator_13264.current_mBuildConfigurationSettingList (HERE)) ;
        while (enumerator_13432.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_13432.current_mValue (HERE).stringValue ()) ;
          result.appendString (" ;\n") ;
          enumerator_13432.gotoNextObject () ;
          index_13432_.increment () ;
        }
      }
      result.appendString ("      PRODUCT_NAME = ") ;
      result.appendString (enumerator_13264.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 347)).stringValue ()) ;
      result.appendString (" ;\n    };\n    name = Default;\n  };\n\n") ;
      enumerator_13264.gotoNextObject () ;
      index_13264_.increment () ;
    }
  }
  GGS_uint index_13902_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_13902 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_13902.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_13902.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
      GGS_uint index_14070_ (0) ;
      if (enumerator_13902.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_14070 (enumerator_13902.current_mBuildConfigurationSettingList (HERE)) ;
        while (enumerator_14070.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_14070.current_mValue (HERE).stringValue ()) ;
          result.appendString (" ;\n") ;
          enumerator_14070.gotoNextObject () ;
          index_14070_.increment () ;
        }
      }
      result.appendString ("      INFOPLIST_FILE = ") ;
      result.appendString (enumerator_13902.current_mInfoPListFile (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 359)).stringValue ()) ;
      result.appendString (";\n      PRODUCT_NAME = ") ;
      result.appendString (enumerator_13902.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 360)).stringValue ()) ;
      result.appendString (" ;\n    };\n    name = Default;\n  };\n\n") ;
      enumerator_13902.gotoNextObject () ;
      index_13902_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ XCConfigurationList section */\n\n    ") ;
  result.appendString (in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Build configuration list for PBXProject */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
  result.appendString (in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
  GGS_uint index_14952_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_14952 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_14952.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_14952.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
      result.appendString (enumerator_14952.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
      enumerator_14952.gotoNextObject () ;
      index_14952_.increment () ;
    }
  }
  GGS_uint index_15549_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_15549 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_15549.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_15549.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
      result.appendString (enumerator_15549.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
      enumerator_15549.gotoNextObject () ;
      index_15549_.increment () ;
    }
  }
  result.appendString ("/*------------------------------------------------------------------ End */\n  };\n\n  rootObject = ") ;
  result.appendString (in_PROJECT_5F_REF.stringValue ()) ;
  result.appendString (" /* Project object */;\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalIntMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_literalIntMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool /* constinArgument_inPreferences */,
                                                                                              const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                                              const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                                              const GGS_propertyMap /* constinArgument_inCurrentObservablePropertyMap */,
                                                                                              const GGS_propertyMap /* constinArgument_inPreferencesObservablePropertyMap */,
                                                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GGS_typeKind & outArgument_outType,
                                                                                              GGS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalIntMultipleBindingExpressionAST temp_0 = this ;
  outArgument_outEnableExpression = GGS_booleanMultipleBindingLiteralIntForGeneration::init_21_ (temp_0.readProperty_mValue ().readProperty_uint (), inCompiler COMMA_HERE) ;
  outArgument_outType = GGS_typeKind::class_func_integerType (SOURCE_FILE ("multiple-binding.ggs", 274)) ;
  const GGS_literalIntMultipleBindingExpressionAST temp_1 = this ;
  outArgument_outErrorLocation = temp_1.readProperty_mValue ().readProperty_location () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@observablePropertyInMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_observablePropertyInMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                                        const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                        const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                        const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                                        GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                        GGS_typeKind & outArgument_outType,
                                                                                                        GGS_location & outArgument_outErrorLocation,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind var_kind_12428 ;
  GGS_string var_swiftTypeStringForTransientFunctionArgument_12458 ;
  GGS_string var_protocolTypeName_12527 ;
  GGS_string var_defaultValueAsString_12569 ;
  const GGS_observablePropertyInMultipleBindingExpressionAST temp_0 = this ;
  GGS_propertyMap temp_1 ;
  const GalgasBool test_2 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = constinArgument_inPreferencesObservablePropertyMap ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = constinArgument_inCurrentObservablePropertyMap ;
  }
  extensionMethod_analyzeObservableProperty (temp_0.readProperty_mProperty (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, temp_1, var_kind_12428, var_swiftTypeStringForTransientFunctionArgument_12458, var_protocolTypeName_12527, var_defaultValueAsString_12569, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 290)) ;
  switch (var_kind_12428.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_12625_type_0 ;
      GGS_propertyAccessibility extractedValue_12631__1 ;
      var_kind_12428.getAssociatedValuesFor_property (extractedValue_12625_type_0, extractedValue_12631__1) ;
      outArgument_outType = extractedValue_12625_type_0 ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_12671__0 ;
      GGS_propertyAccessibility extractedValue_12671__1 ;
      GGS_bool extractedValue_12671__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_12671__3 ;
      var_kind_12428.getAssociatedValuesFor_toMany (extractedValue_12671__0, extractedValue_12671__1, extractedValue_12671__2, extractedValue_12671__3) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_3.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 303)), GGS_string ("only an atomic property can be observed"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.ggs", 303)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_12785__0 ;
      GGS_propertyAccessibility extractedValue_12785__1 ;
      GGS_bool extractedValue_12785__2 ;
      GGS_toOneOppositeRelationship extractedValue_12785__3 ;
      GGS_bool extractedValue_12785__4 ;
      var_kind_12428.getAssociatedValuesFor_toOne (extractedValue_12785__0, extractedValue_12785__1, extractedValue_12785__2, extractedValue_12785__3, extractedValue_12785__4) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_5.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 305)), GGS_string ("only an atomic property can be observed"), fixItArray6  COMMA_SOURCE_FILE ("multiple-binding.ggs", 305)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_12909__0 ;
      GGS_bool extractedValue_12909__1 ;
      var_kind_12428.getAssociatedValuesFor_arrayController (extractedValue_12909__0, extractedValue_12909__1) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_7.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 307)), GGS_string ("only an atomic property can be observed"), fixItArray8  COMMA_SOURCE_FILE ("multiple-binding.ggs", 307)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_13036__0 ;
      var_kind_12428.getAssociatedValuesFor_selectionController (extractedValue_13036__0) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_9.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 309)), GGS_string ("only an atomic property can be observed"), fixItArray10  COMMA_SOURCE_FILE ("multiple-binding.ggs", 309)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GGS_observablePropertyInMultipleBindingExpressionAST temp_11 = this ;
  GGS_string temp_12 ;
  const GalgasBool test_13 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_13) {
    temp_12 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_13) {
    temp_12 = GGS_string ("self.") ;
  }
  outArgument_outEnableExpression = GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::init_21_ (extensionGetter_modelStringForSelf (temp_11.readProperty_mProperty (), temp_12, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 312)), inCompiler COMMA_HERE) ;
  const GGS_observablePropertyInMultipleBindingExpressionAST temp_14 = this ;
  outArgument_outErrorLocation = extensionGetter_location (temp_14.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 314)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@negateBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_negateBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                                 const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                 const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                 const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                 const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                                 GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                 GGS_typeKind & outArgument_outType,
                                                                                                 GGS_location & outArgument_outErrorLocation,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_expression_14217 ;
  const GGS_negateBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_expression_14217, outArgument_outType, outArgument_outErrorLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 329)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = outArgument_outType.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 339)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 339)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (outArgument_outErrorLocation, GGS_string ("cannot apply negation: operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 340)) ;
    }
  }
  outArgument_outEnableExpression = GGS_negateBooleanMultipleBindingExpressionForGeneration::init_21_ (var_expression_14217, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@orBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_orBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                             const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                             const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                             const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                             const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                             GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                             GGS_typeKind & outArgument_outType,
                                                                                             GGS_location & outArgument_outErrorLocation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_15315 ;
  GGS_typeKind var_outLeftType_15340 ;
  GGS_location var_outLeftLocation_15362 ;
  const GGS_orBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_15315, var_outLeftType_15340, var_outLeftLocation_15362, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 357)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_outLeftType_15340.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 367)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 367)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_15362, GGS_string ("cannot apply 'or': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 368)) ;
    }
  }
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_15783 ;
  GGS_typeKind var_outRightType_15809 ;
  GGS_location var_outRightLocation_15832 ;
  const GGS_orBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_15783, var_outRightType_15809, var_outRightLocation_15832, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 370)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_outRightType_15809.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 380)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 380)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_15832, GGS_string ("cannot apply 'or': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.ggs", 381)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.ggs", 383)) ;
  outArgument_outErrorLocation = var_outRightLocation_15832 ;
  outArgument_outEnableExpression = GGS_orBooleanMultipleBindingExpressionForGeneration::init_21__21_ (var_leftExpression_15315, var_rightExpression_15783, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@xorBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_xorBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                              const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                              const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                              const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                              const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GGS_typeKind & outArgument_outType,
                                                                                              GGS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_16984 ;
  GGS_typeKind var_outLeftType_17009 ;
  GGS_location var_outLeftLocation_17031 ;
  const GGS_xorBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_16984, var_outLeftType_17009, var_outLeftLocation_17031, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 400)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_outLeftType_17009.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 410)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 410)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_17031, GGS_string ("cannot apply 'or': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 411)) ;
    }
  }
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_17452 ;
  GGS_typeKind var_outRightType_17478 ;
  GGS_location var_outRightLocation_17501 ;
  const GGS_xorBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_17452, var_outRightType_17478, var_outRightLocation_17501, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 413)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_outRightType_17478.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 423)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 423)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_17501, GGS_string ("cannot apply 'or': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.ggs", 424)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.ggs", 426)) ;
  outArgument_outErrorLocation = var_outRightLocation_17501 ;
  outArgument_outEnableExpression = GGS_xorBooleanMultipleBindingExpressionForGeneration::init_21__21_ (var_leftExpression_16984, var_rightExpression_17452, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@andBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_andBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                              const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                              const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                              const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                              const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GGS_typeKind & outArgument_outType,
                                                                                              GGS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_18654 ;
  GGS_typeKind var_outLeftType_18679 ;
  GGS_location var_outLeftLocation_18701 ;
  const GGS_andBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_18654, var_outLeftType_18679, var_outLeftLocation_18701, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 443)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_outLeftType_18679.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 453)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 453)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_18701, GGS_string ("cannot apply 'and': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 454)) ;
    }
  }
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_19123 ;
  GGS_typeKind var_outRightType_19149 ;
  GGS_location var_outRightLocation_19172 ;
  const GGS_andBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_19123, var_outRightType_19149, var_outRightLocation_19172, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 456)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_outRightType_19149.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 466)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 466)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_19172, GGS_string ("cannot apply 'and': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.ggs", 467)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.ggs", 469)) ;
  outArgument_outErrorLocation = var_outRightLocation_19172 ;
  outArgument_outEnableExpression = GGS_andBooleanMultipleBindingExpressionForGeneration::init_21__21_ (var_leftExpression_18654, var_rightExpression_19123, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@comparisonMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                              const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                              const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                              const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                              const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GGS_typeKind & outArgument_outType,
                                                                                              GGS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_20326 ;
  GGS_typeKind var_outLeftType_20351 ;
  GGS_location var_outLeftLocation_20373 ;
  const GGS_comparisonMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_20326, var_outLeftType_20351, var_outLeftLocation_20373, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 486)) ;
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_20674 ;
  GGS_typeKind var_outRightType_20700 ;
  GGS_location var_outRightLocation_20723 ;
  const GGS_comparisonMultipleBindingExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_1.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_20674, var_outRightType_20700, var_outRightLocation_20723, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 496)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_bool test_3 = var_outLeftType_20351.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 506)) ;
    if (GalgasBool::boolTrue != test_3.boolEnum ()) {
      test_3 = var_outLeftType_20351.getter_isIntegerType (SOURCE_FILE ("multiple-binding.ggs", 506)) ;
    }
    test_2 = test_3.operator_not (SOURCE_FILE ("multiple-binding.ggs", 506)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_outLeftLocation_20373, GGS_string ("cannot compare: left operand is neither boolean nor integer"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.ggs", 507)) ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_outRightType_20700.objectCompare (var_outLeftType_20351)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (var_outRightLocation_20723, GGS_string ("cannot compare: right operand type is different than left operand type"), fixItArray6  COMMA_SOURCE_FILE ("multiple-binding.ggs", 510)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.ggs", 512)) ;
  outArgument_outErrorLocation = var_outRightLocation_20723 ;
  const GGS_comparisonMultipleBindingExpressionAST temp_7 = this ;
  outArgument_outEnableExpression = GGS_comparisonMultipleBindingExpressionForGeneration::init_21__21__21_ (var_leftExpression_20326, temp_7.readProperty_mOperator (), var_rightExpression_20674, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@booleanMultipleBindingLiteralIntForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_booleanMultipleBindingLiteralIntForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_booleanMultipleBindingLiteralIntForGeneration temp_0 = this ;
  result_outExpressionString = GGS_string (".literalInt (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("multiple-binding.ggs", 529)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 529)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 529)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@observablePropertyAsBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  result_outExpressionString = GGS_string (".prop (").add_operation (temp_0.readProperty_mObservedModelString (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 536)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 536)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@negateBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_negateBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_negateBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  result_outExpressionString = GGS_string (".not (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 543)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 543)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 543)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@orBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_orBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_orBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  const GGS_orBooleanMultipleBindingExpressionForGeneration temp_1 = this ;
  result_outExpressionString = GGS_string (".boolcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 550)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 550)).add_operation (GGS_string (", .or, "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 550)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_1.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 550)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 550)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 550)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@xorBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_xorBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_xorBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  const GGS_xorBooleanMultipleBindingExpressionForGeneration temp_1 = this ;
  result_outExpressionString = GGS_string (".boolcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 557)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 557)).add_operation (GGS_string (", .xor, "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 557)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_1.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 557)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 557)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 557)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@andBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_andBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_andBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  const GGS_andBooleanMultipleBindingExpressionForGeneration temp_1 = this ;
  result_outExpressionString = GGS_string (".boolcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 564)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 564)).add_operation (GGS_string (", .and, "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 564)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_1.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 564)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 564)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 564)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@comparisonMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_comparisonMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_comparisonMultipleBindingExpressionForGeneration temp_0 = this ;
  result_outExpressionString = GGS_string (".intcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 571)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 571)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 571)) ;
  const GGS_comparisonMultipleBindingExpressionForGeneration temp_1 = this ;
  switch (temp_1.readProperty_mOperator ().enumValue ()) {
  case GGS_multipleBindingComparisonAST::Enumeration::invalid:
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_equal:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".eq"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 573)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_notEqual:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".ne"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 574)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_lower:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".lt"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 575)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_lowerOrEqual:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".le"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 576)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_greater:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".gt"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 577)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_greaterOrEqual:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".ge"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 578)) ;
    }
    break ;
  }
  const GGS_comparisonMultipleBindingExpressionForGeneration temp_2 = this ;
  result_outExpressionString.plusAssignOperation(GGS_string (", ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_2.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 580)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 580)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 580)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 580)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'validationStubExtension'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_validationStubExtension (
  "controllers",
  0,
  gWrapperAllFiles_validationStubExtension_3,
  0,
  gWrapperAllDirectories_validationStubExtension_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_validationStubExtension (
  "standard-properties",
  0,
  gWrapperAllFiles_validationStubExtension_1,
  0,
  gWrapperAllDirectories_validationStubExtension_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_validationStubExtension (
  "xcode-project",
  0,
  gWrapperAllFiles_validationStubExtension_2,
  0,
  gWrapperAllDirectories_validationStubExtension_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_0 [4] = {
  & gWrapperDirectory_3_validationStubExtension,
  & gWrapperDirectory_1_validationStubExtension,
  & gWrapperDirectory_2_validationStubExtension,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_validationStubExtension (
  "",
  0,
  gWrapperAllFiles_validationStubExtension_0,
  3,
  gWrapperAllDirectories_validationStubExtension_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'validationStubExtension actionGeneration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_validationStubExtension_actionGeneration (Compiler * /* inCompiler */,
                                                                         const GGS_string & in_OBJECT_5F_TYPE_5F_NAME,
                                                                         const GGS_string & in_MODEL_5F_NAME,
                                                                         const GGS_string & in_MODEL_5F_TYPE_5F_NAME
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n\nextension ") ;
  result.appendString (in_OBJECT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  func validate_") ;
  result.appendString (in_MODEL_5F_NAME.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("currentValue : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (",\n                 ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("proposedValue : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (") -> EBValidationResult <") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateValidationRoutineStubs??&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateValidationRoutineStubs_3F__3F__26_ (const GGS_string constinArgument_inOutputDirectory,
                                                         const GGS_validationStubRoutineListForGeneration constinArgument_inValidationStubRoutineListForGeneration,
                                                         GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_validationStubRoutineListForGeneration enumerator_1212 (constinArgument_inValidationStubRoutineListForGeneration) ;
  while (enumerator_1212.hasCurrentObject ()) {
    GGS_string var_s_1283 = GGS_string (filewrapperTemplate_validationStubExtension_actionGeneration (inCompiler, enumerator_1212.current_mObjectTypeName (HERE), enumerator_1212.current_mModelName (HERE), enumerator_1212.current_mModelTypeName (HERE) COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 33))) ;
    GGS_string var_fileName_1418 = GGS_string ("validation-").add_operation (enumerator_1212.current_mObjectTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 38)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 38)).add_operation (enumerator_1212.current_mModelName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 38)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 38)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_1418, inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 39)) ;
    }
    GGS_string var_defaultUserZone_32__1542 = GGS_string ("    var result : EBValidationResult <").add_operation (enumerator_1212.current_mModelTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 41)).add_operation (GGS_string (">\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 41)).add_operation (GGS_string ("    let validates = false // Add your validation condition here\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 41)).add_operation (GGS_string ("    if validates {\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 42)).add_operation (GGS_string ("      result = .ok (proposedValue)\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 43)).add_operation (GGS_string ("    }else{\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 44)).add_operation (GGS_string ("      result = .rejectWithAlert (\"Rejected in \\(#file), line \\(#line)\")\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 45)).add_operation (GGS_string ("    }\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 46)).add_operation (GGS_string ("    return result\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 47)) ;
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_1418, GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_s_1283, var_defaultUserZone_32__1542, GGS_string ("  }\n},\n\n//---------------------------------------------------------------------------------------------------------------------*\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 49)) ;
    }
    enumerator_1212.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@arrayControllerDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  const GGS_arrayControllerDeclarationAST temp_1 = this ;
  const GGS_arrayControllerDeclarationAST temp_2 = this ;
  GGS_lstring var_node_1115 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 28)).add_operation (temp_1.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 28)), temp_2.readProperty_mControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_arrayControllerDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1115, temp_3, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 29)) ;
  }
  {
  const GGS_arrayControllerDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1115, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("array-controller.ggs", 30)) ;
  }
  const GGS_arrayControllerDeclarationAST temp_5 = this ;
  switch (temp_5.readProperty_mModel ().enumValue ()) {
  case GGS_arrayControllerBoundModelAST::Enumeration::invalid:
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_rootToManyRelationship:
    {
      GGS_lstring extractedValue_1367_rootEntityName_0 ;
      temp_5.readProperty_mModel ().getAssociatedValuesFor_rootToManyRelationship (extractedValue_1367_rootEntityName_0) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, extractedValue_1367_rootEntityName_0.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          {
          const GGS_arrayControllerDeclarationAST temp_7 = this ;
          const GGS_arrayControllerDeclarationAST temp_8 = this ;
          ioArgument_ioGraph.setter_addEdge (var_node_1115, GGS_lstring::init_21__21_ (extractedValue_1367_rootEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 34)).add_operation (temp_7.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 34)), temp_8.readProperty_mToManyPropertyName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("array-controller.ggs", 34)) ;
          }
        }
      }
    }
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_selfToManyRelationship:
    {
      {
      const GGS_arrayControllerDeclarationAST temp_9 = this ;
      const GGS_arrayControllerDeclarationAST temp_10 = this ;
      const GGS_arrayControllerDeclarationAST temp_11 = this ;
      ioArgument_ioGraph.setter_addEdge (var_node_1115, GGS_lstring::init_21__21_ (temp_9.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 37)).add_operation (temp_10.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 37)), temp_11.readProperty_mToManyPropertyName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("array-controller.ggs", 37)) ;
      }
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_arrayControllerDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  const GGS_arrayControllerDeclarationAST temp_1 = this ;
  const GGS_arrayControllerDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 44)).add_operation (temp_1.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 44)), temp_2.readProperty_mControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@arrayControllerDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                    GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_4145 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_actionMap var_controllerActions_4309 = GGS_actionMap::init (inCompiler COMMA_HERE) ;
  {
  var_controllerActions_4309.setter_insertKey (GGS_string ("add").getter_nowhere (SOURCE_FILE ("array-controller.ggs", 111)), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 111)) ;
  }
  {
  var_controllerActions_4309.setter_insertKey (GGS_string ("remove").getter_nowhere (SOURCE_FILE ("array-controller.ggs", 112)), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 112)) ;
  }
  const GGS_arrayControllerDeclarationAST temp_1 = this ;
  switch (temp_1.readProperty_mModel ().enumValue ()) {
  case GGS_arrayControllerBoundModelAST::Enumeration::invalid:
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_rootToManyRelationship:
    {
      GGS_lstring extractedValue_4500_rootEntityName_0 ;
      temp_1.readProperty_mModel ().getAssociatedValuesFor_rootToManyRelationship (extractedValue_4500_rootEntityName_0) ;
      GGS_propertyMap var_rootProperties_4588 ;
      GGS_classKind joker_4579 ; // Joker input parameter
      GGS_actionMap joker_4604_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_4604_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_4500_rootEntityName_0, joker_4579, var_rootProperties_4588, joker_4604_2, joker_4604_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 115)) ;
      GGS_propertyKind var_classKind_4672 ;
      const GGS_arrayControllerDeclarationAST temp_2 = this ;
      GGS_actionMap joker_4683_2 ; // Joker input parameter
      GGS_bool joker_4683_1 ; // Joker input parameter
      var_rootProperties_4588.method_searchKey (temp_2.readProperty_mToManyPropertyName (), var_classKind_4672, joker_4683_2, joker_4683_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 116)) ;
      switch (var_classKind_4672.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_4733__0 ;
          GGS_propertyAccessibility extractedValue_4733__1 ;
          var_classKind_4672.getAssociatedValuesFor_property (extractedValue_4733__0, extractedValue_4733__1) ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extractedValue_4500_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray3  COMMA_SOURCE_FILE ("array-controller.ggs", 119)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_4829_typeName_0 ;
          GGS_propertyAccessibility extractedValue_4839__1 ;
          GGS_bool extractedValue_4842_graphic_2 ;
          GGS_toManyRelationshipOptionAST extractedValue_4851__3 ;
          var_classKind_4672.getAssociatedValuesFor_toMany (extractedValue_4829_typeName_0, extractedValue_4839__1, extractedValue_4842_graphic_2, extractedValue_4851__3) ;
          GGS_propertyKind var_kind_4868 = GGS_propertyKind::class_func_arrayController (extractedValue_4829_typeName_0, extractedValue_4842_graphic_2  COMMA_SOURCE_FILE ("array-controller.ggs", 121)) ;
          {
          const GGS_arrayControllerDeclarationAST temp_4 = this ;
          var_entry_4145.mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mControllerName (), var_kind_4868, var_controllerActions_4309, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 125)) ;
          }
          {
          const GGS_arrayControllerDeclarationAST temp_5 = this ;
          const GGS_arrayControllerDeclarationAST temp_6 = this ;
          const GGS_arrayControllerDeclarationAST temp_7 = this ;
          var_entry_4145.mProperty_mPropertyGenerationList.setter_append (GGS_arrayControllerPropertyGeneration::init_21__21__21_ (temp_5.readProperty_mControllerName ().readProperty_string (), GGS_string ("rootObject.").add_operation (temp_6.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 129)), temp_7.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 127)) ;
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_5324__0 ;
          GGS_propertyAccessibility extractedValue_5324__1 ;
          GGS_bool extractedValue_5324__2 ;
          GGS_toOneOppositeRelationship extractedValue_5324__3 ;
          GGS_bool extractedValue_5324__4 ;
          var_classKind_4672.getAssociatedValuesFor_toOne (extractedValue_5324__0, extractedValue_5324__1, extractedValue_5324__2, extractedValue_5324__3, extractedValue_5324__4) ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_4500_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray8  COMMA_SOURCE_FILE ("array-controller.ggs", 134)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_5430__0 ;
          GGS_bool extractedValue_5430__1 ;
          var_classKind_4672.getAssociatedValuesFor_arrayController (extractedValue_5430__0, extractedValue_5430__1) ;
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (extractedValue_4500_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("array-controller.ggs", 136)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_5539__0 ;
          var_classKind_4672.getAssociatedValuesFor_selectionController (extractedValue_5539__0) ;
          GenericArray <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_4500_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray10  COMMA_SOURCE_FILE ("array-controller.ggs", 138)) ;
        }
        break ;
      }
    }
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_selfToManyRelationship:
    {
      GGS_propertyKind var_classKind_5727 ;
      const GGS_arrayControllerDeclarationAST temp_11 = this ;
      GGS_actionMap joker_5738_2 ; // Joker input parameter
      GGS_bool joker_5738_1 ; // Joker input parameter
      var_entry_4145.readProperty_mPropertyMap ().method_searchKey (temp_11.readProperty_mToManyPropertyName (), var_classKind_5727, joker_5738_2, joker_5738_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 141)) ;
      switch (var_classKind_5727.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_5788__0 ;
          GGS_propertyAccessibility extractedValue_5788__1 ;
          var_classKind_5727.getAssociatedValuesFor_property (extractedValue_5788__0, extractedValue_5788__1) ;
          const GGS_arrayControllerDeclarationAST temp_12 = this ;
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray13  COMMA_SOURCE_FILE ("array-controller.ggs", 144)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_5894_typeName_0 ;
          GGS_propertyAccessibility extractedValue_5904__1 ;
          GGS_bool extractedValue_5907_graphic_2 ;
          GGS_toManyRelationshipOptionAST extractedValue_5916__3 ;
          var_classKind_5727.getAssociatedValuesFor_toMany (extractedValue_5894_typeName_0, extractedValue_5904__1, extractedValue_5907_graphic_2, extractedValue_5916__3) ;
          GGS_propertyKind var_kind_5933 = GGS_propertyKind::class_func_arrayController (extractedValue_5894_typeName_0, extractedValue_5907_graphic_2  COMMA_SOURCE_FILE ("array-controller.ggs", 146)) ;
          {
          const GGS_arrayControllerDeclarationAST temp_14 = this ;
          var_entry_4145.mProperty_mPropertyMap.setter_insertKey (temp_14.readProperty_mControllerName (), var_kind_5933, var_controllerActions_4309, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 150)) ;
          }
          {
          const GGS_arrayControllerDeclarationAST temp_15 = this ;
          const GGS_arrayControllerDeclarationAST temp_16 = this ;
          const GGS_arrayControllerDeclarationAST temp_17 = this ;
          var_entry_4145.mProperty_mPropertyGenerationList.setter_append (GGS_arrayControllerPropertyGeneration::init_21__21__21_ (temp_15.readProperty_mControllerName ().readProperty_string (), temp_16.readProperty_mToManyPropertyName ().readProperty_string (), temp_17.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 152)) ;
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_6373__0 ;
          GGS_propertyAccessibility extractedValue_6373__1 ;
          GGS_bool extractedValue_6373__2 ;
          GGS_toOneOppositeRelationship extractedValue_6373__3 ;
          GGS_bool extractedValue_6373__4 ;
          var_classKind_5727.getAssociatedValuesFor_toOne (extractedValue_6373__0, extractedValue_6373__1, extractedValue_6373__2, extractedValue_6373__3, extractedValue_6373__4) ;
          const GGS_arrayControllerDeclarationAST temp_18 = this ;
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray19  COMMA_SOURCE_FILE ("array-controller.ggs", 159)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_6489__0 ;
          GGS_bool extractedValue_6489__1 ;
          var_classKind_5727.getAssociatedValuesFor_arrayController (extractedValue_6489__0, extractedValue_6489__1) ;
          const GGS_arrayControllerDeclarationAST temp_20 = this ;
          GenericArray <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (temp_20.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray21  COMMA_SOURCE_FILE ("array-controller.ggs", 161)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_6608__0 ;
          var_classKind_5727.getAssociatedValuesFor_selectionController (extractedValue_6608__0) ;
          const GGS_arrayControllerDeclarationAST temp_22 = this ;
          GenericArray <FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (temp_22.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray23  COMMA_SOURCE_FILE ("array-controller.ggs", 163)) ;
        }
        break ;
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_4145, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 167)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@arrayControllerDeclarationAST thirdAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::method_thirdAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                    GGS_generationStruct & ioArgument_ioGeneration,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap var_boundModelPropertyMap_7187 ;
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  switch (temp_0.readProperty_mModel ().enumValue ()) {
  case GGS_arrayControllerBoundModelAST::Enumeration::invalid:
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_rootToManyRelationship:
    {
      GGS_lstring extractedValue_7270_rootEntityName_0 ;
      temp_0.readProperty_mModel ().getAssociatedValuesFor_rootToManyRelationship (extractedValue_7270_rootEntityName_0) ;
      GGS_classKind joker_7361 ; // Joker input parameter
      GGS_actionMap joker_7403_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_7403_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_7270_rootEntityName_0, joker_7361, var_boundModelPropertyMap_7187, joker_7403_2, joker_7403_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 183)) ;
    }
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_selfToManyRelationship:
    {
      const GGS_arrayControllerDeclarationAST temp_1 = this ;
      GGS_classKind joker_7519 ; // Joker input parameter
      GGS_actionMap joker_7561_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_7561_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mClassName (), joker_7519, var_boundModelPropertyMap_7187, joker_7561_2, joker_7561_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 190)) ;
    }
    break ;
  }
  GGS_propertyKind var_boundModelClassKind_7656 ;
  const GGS_arrayControllerDeclarationAST temp_2 = this ;
  GGS_actionMap joker_7682_2 ; // Joker input parameter
  GGS_bool joker_7682_1 ; // Joker input parameter
  var_boundModelPropertyMap_7187.method_searchKey (temp_2.readProperty_mToManyPropertyName (), var_boundModelClassKind_7656, joker_7682_2, joker_7682_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 197)) ;
  GGS_arrayControllerModelKind var_arrayControllerModelKind_7809 ;
  GGS_bool var_graphic_7846 ;
  GGS_string var_elementTypeName_7868 ;
  switch (var_boundModelClassKind_7656.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_7931__0 ;
      GGS_propertyAccessibility extractedValue_7931__1 ;
      var_boundModelClassKind_7656.getAssociatedValuesFor_property (extractedValue_7931__0, extractedValue_7931__1) ;
      const GGS_arrayControllerDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray4  COMMA_SOURCE_FILE ("array-controller.ggs", 208)) ;
      var_graphic_7846.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7809.drop () ; // Release error dropped variable
      var_elementTypeName_7868.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_8096_typeName_0 ;
      GGS_propertyAccessibility extractedValue_8106_accessibility_1 ;
      GGS_bool extractedValue_8121_isGraphic_2 ;
      GGS_toManyRelationshipOptionAST extractedValue_8132__3 ;
      var_boundModelClassKind_7656.getAssociatedValuesFor_toMany (extractedValue_8096_typeName_0, extractedValue_8106_accessibility_1, extractedValue_8121_isGraphic_2, extractedValue_8132__3) ;
      var_elementTypeName_7868 = extractedValue_8096_typeName_0.readProperty_string () ;
      var_graphic_7846 = extractedValue_8121_isGraphic_2 ;
      GGS_arrayControllerModelKind temp_5 ;
      const GalgasBool test_6 = extractedValue_8106_accessibility_1.getter_isTransient (SOURCE_FILE ("array-controller.ggs", 214)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        temp_5 = GGS_arrayControllerModelKind::class_func_transientArray (SOURCE_FILE ("array-controller.ggs", 215)) ;
      }else if (GalgasBool::boolFalse == test_6) {
        temp_5 = GGS_arrayControllerModelKind::class_func_entityArray (SOURCE_FILE ("array-controller.ggs", 216)) ;
      }
      var_arrayControllerModelKind_7809 = temp_5 ;
      GGS_classKind joker_8364 ; // Joker input parameter
      GGS_propertyMap joker_8368_3 ; // Joker input parameter
      GGS_actionMap joker_8368_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_8368_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_8096_typeName_0, joker_8364, joker_8368_3, joker_8368_2, joker_8368_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 218)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_8388__0 ;
      GGS_propertyAccessibility extractedValue_8388__1 ;
      GGS_bool extractedValue_8388__2 ;
      GGS_toOneOppositeRelationship extractedValue_8388__3 ;
      GGS_bool extractedValue_8388__4 ;
      var_boundModelClassKind_7656.getAssociatedValuesFor_toOne (extractedValue_8388__0, extractedValue_8388__1, extractedValue_8388__2, extractedValue_8388__3, extractedValue_8388__4) ;
      const GGS_arrayControllerDeclarationAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray8  COMMA_SOURCE_FILE ("array-controller.ggs", 220)) ;
      var_graphic_7846.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7809.drop () ; // Release error dropped variable
      var_elementTypeName_7868.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_8563__0 ;
      GGS_bool extractedValue_8563__1 ;
      var_boundModelClassKind_7656.getAssociatedValuesFor_arrayController (extractedValue_8563__0, extractedValue_8563__1) ;
      const GGS_arrayControllerDeclarationAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray10  COMMA_SOURCE_FILE ("array-controller.ggs", 224)) ;
      var_graphic_7846.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7809.drop () ; // Release error dropped variable
      var_elementTypeName_7868.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_8741__0 ;
      var_boundModelClassKind_7656.getAssociatedValuesFor_selectionController (extractedValue_8741__0) ;
      const GGS_arrayControllerDeclarationAST temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray12  COMMA_SOURCE_FILE ("array-controller.ggs", 228)) ;
      var_graphic_7846.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7809.drop () ; // Release error dropped variable
      var_elementTypeName_7868.drop () ; // Release error dropped variable
    }
    break ;
  }
  {
  const GGS_arrayControllerDeclarationAST temp_13 = this ;
  const GGS_arrayControllerDeclarationAST temp_14 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_arrayControllerGeneration::init_21__21__21__21__21__21_ (temp_13.readProperty_mClassName ().readProperty_string (), temp_14.readProperty_mControllerName (), GGS_string ("ReadWriteArrayOf_").add_operation (var_elementTypeName_7868, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 236)), var_arrayControllerModelKind_7809, var_elementTypeName_7868, var_graphic_7846, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 233)) ;
  }
  {
  ioArgument_ioGeneration.mProperty_mGenerateClass_5F_StoredArrayOf_5F_.setter_insert (var_elementTypeName_7868, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 242)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_arrayControllerPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool constinArgument_inPreferences,
                                                                                   const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                                   const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inPreferences.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("array-controller.ggs", 261)), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 261)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 261)) ;
      const GGS_arrayControllerPropertyGeneration temp_1 = this ;
      result_result.plusAssignOperation(GGS_string ("//   Array controller: ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 262)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 262)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 262)) ;
      result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("array-controller.ggs", 263)), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 263)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 263)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 263)) ;
      const GGS_arrayControllerPropertyGeneration temp_2 = this ;
      const GGS_arrayControllerPropertyGeneration temp_3 = this ;
      const GGS_arrayControllerPropertyGeneration temp_4 = this ;
      result_result.plusAssignOperation(GGS_string ("@MainAction let preferences_").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 264)).add_operation (GGS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 264)).add_operation (temp_3.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 264)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 264)).add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 264)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 264)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 264)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("array-controller.ggs", 266)), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 266)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 266)) ;
    const GGS_arrayControllerPropertyGeneration temp_5 = this ;
    result_result.plusAssignOperation(GGS_string ("  //   Array controller: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 267)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 267)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 267)) ;
    result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("array-controller.ggs", 268)), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 268)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 268)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 268)) ;
    const GGS_arrayControllerPropertyGeneration temp_6 = this ;
    const GGS_arrayControllerPropertyGeneration temp_7 = this ;
    const GGS_arrayControllerPropertyGeneration temp_8 = this ;
    result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 269)).add_operation (GGS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 269)).add_operation (temp_7.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 269)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 269)).add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 269)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 269)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 269)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_arrayControllerPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_arrayControllerPropertyGeneration::getter_configurationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_arrayControllerPropertyGeneration temp_0 = this ;
  result_result = GGS_string ("  //--- Array controller property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 282)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 282)) ;
  const GGS_arrayControllerPropertyGeneration temp_1 = this ;
  const GGS_arrayControllerPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 283)).add_operation (GGS_string (".bind_model (self."), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 283)).add_operation (temp_2.readProperty_mModelString (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 283)).add_operation (GGS_string ("_property, self.undoManager)\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 283)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 283)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'arrayControllerGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_arrayControllerGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_arrayControllerGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_arrayControllerGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_arrayControllerGenerationTemplate_0,
  0,
  gWrapperAllDirectories_arrayControllerGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'arrayControllerGenerationTemplate arrayControllerImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_arrayControllerGenerationTemplate_arrayControllerImplementationInSwift (Compiler * inCompiler,
                                                                                                       const GGS_string & in_OWNER_5F_NAME,
                                                                                                       const GGS_string & in_ARRAY_5F_CONTROLLER_5F_NAME,
                                                                                                       const GGS_arrayControllerModelKind & in_MODEL_5F_KIND,
                                                                                                       const GGS_string & in_MODEL_5F_TYPE_5F_NAME,
                                                                                                       const GGS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                       const GGS_bool & in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("Array controller ").add_operation (in_OWNER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 8)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 8)).add_operation (in_ARRAY_5F_CONTROLLER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 8)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nfinal class Controller_") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_ARRAY_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString (" : EBReadOnlyAbstractGenericRelationshipProperty") ;
  const GalgasBool test_0 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString (", EBGraphicViewControllerProtocol") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (", HiddenEBProtocol {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Undo manager\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mUndoManager : UndoManager\? = nil // SHOULD BE WEAK\n  var undoManager : UndoManager\? { return self.mUndoManager }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Model\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mModel : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? = nil // SHOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var objects : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n    if let objects = self.mModel\?.propval {\n      return objects\n    }else{\n      return EBReferenceArray ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedSet : EBReferenceSet <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n    set {\n") ;
  const GalgasBool test_1 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("    //--- Add observers to newly selected set\n      for object in newValue.subtracting (self.mPrivateSelectedSet).values {\n        object.selectionDisplay_property.startsBeingObserved (by: self.mObjectSelectionObserver)\n      }\n    //--- Remove observers to deselected set\n      let deselectedSet = self.mPrivateSelectedSet.subtracting (newValue)\n      for object in deselectedSet.values {\n        object.selectionDisplay_property.stopsBeingObserved (by: self.mObjectSelectionObserver)\n      }\n      if deselectedSet.count > 0 {\n        self.mObjectSelectionObserver.observedObjectDidChange () // Required, as removing observer does not post event\n      }\n    //---\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("      self.mPrivateSelectedSet = newValue\n    }\n    get {\n      return self.selectedArray_property.propset\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mPrivateSelectedSet = EBReferenceSet <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> () {\n    didSet {\n      self.selectedArray_property.observedObjectDidChange ()\n      self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (Array (self.mPrivateSelectedSet.values)))\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Selected Array\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mInternalSelectedArrayProperty = StandAloneArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedArrayDidChange_property : EBObservedObserver { return self.mInternalSelectedArrayProperty } // EBGraphicViewControllerProtocol\n  var selectedArray_property : ReadOnlyArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" { return self.mInternalSelectedArrayProperty }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedArray : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> { return self.selectedArray_property.propval }\n\n") ;
  const GalgasBool test_2 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Init\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override init () {\n    super.init ()\n   //--- Selection observers\n    self.canBringForward_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canBringForward)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canBringToFront_property)\n  //---\n    self.canBringToFront_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canBringToFront)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canBringToFront_property)\n  //---\n    self.canSendBackward_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canSendBackward)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canSendBackward_property)\n  //---\n    self.canSendToBack_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canSendToBack)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canSendToBack_property)\n  //---\n    self.canFlipHorizontally_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canFlipHorizontally)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canFlipHorizontally_property)\n  //---\n    self.canFlipVertically_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canFlipVertically)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canFlipVertically_property)\n  //---\n    self.canRotate90_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canRotate90)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canRotate90_property)\n  }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var objectCount : Int {\n    if let n = self.mModel\?.propval.count {\n      return n\n    }else{\n      return 0\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_model (_ inModel : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (", _ inUndoManager : UndoManager\?) {\n    self.mModel = inModel\n    self.mUndoManager = inUndoManager\n    inModel.attachClient (self)\n") ;
  const GalgasBool test_3 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString ("    self.startObservingObjectShape ()\n    self.startObservingSelectionShape ()\n    self.inspectorViewManagerStartsObservingSelection ()\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func unbind_model () {\n") ;
  const GalgasBool test_4 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    result.appendString ("    self.stopObservingObjectShape ()\n    self.stopObservingSelectionShape ()\n    self.inspectorViewManagerStopsObservingSelection ()\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("    self.mModel\?.detachClient (self)\n    self.selectedSet = EBReferenceSet ()\n    self.mModel = nil\n    self.mUndoManager = nil\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n    super.notifyModelDidChange ()\n    let currentSelectedSet = self.selectedSet\n    let objectArray = self.objectArray\n    let newSelectedSet = currentSelectedSet.intersection (objectArray.values)\n    self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (Array (newSelectedSet.values)))\n  }\n\n   // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   var objectArray : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n     if let values = self.mModel\?.propval {\n       return values\n     }else{\n       return EBReferenceArray ()\n     }\n   }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   SELECTION\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedIndexesSet : Set <Int> {\n    var result = Set <Int> ()\n    var idx = 0\n    for object in self.objectArray.values {\n      if self.selectedArray_property.propset.contains (object) {\n        result.insert (idx)\n      }\n      idx += 1\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setSelection (_ inObjects : [") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("]) {\n    self.selectedSet = EBReferenceSet (inObjects)\n  }\n") ;
  const GalgasBool test_5 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Graphic view interface\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedGraphicObjectSet : EBReferenceSet <EBGraphicManagedObject> {\n    var result = EBReferenceSet <EBGraphicManagedObject> (minimumCapacity: self.selectedArray_property.propval.count)\n    for object in self.selectedArray_property.propval.values {\n      result.insert (object)\n    }\n    return result\n  }\n\n   // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   var graphicObjectArray : [EBGraphicManagedObject] {\n     if let v = self.mModel\?.propval {\n       return v.values\n     }else{\n       return []\n     }\n   }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // Compute selection shape\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mObjectSelectionObserver = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func startObservingSelectionShape () {\n    self.mModel\?.toMany_selectionDisplay_StartsBeingObserved (by: self.mObjectSelectionObserver)\n    self.mObjectSelectionObserver.mEventCallBack = { [weak self] in self\?.computeSelectionShape () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func computeSelectionShape () {\n    var selectionDisplayArray = [EBShape] ()\n    for object in self.objectArray.values {\n      if !self.selectedArray_property.propset.contains (object) {\n        selectionDisplayArray.append (EBShape ())\n      }else if let shape = object.selectionDisplay {\n        selectionDisplayArray.append (shape)\n      }else{\n        selectionDisplayArray.append (EBShape ())\n      }\n    }\n    for view in self.mEBGraphicViews {\n      view.updateSelectionShape (selectionDisplayArray)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func stopObservingSelectionShape () {\n    self.mModel\?.toMany_selectionDisplay_StopsBeingObserved (by: self.mObjectSelectionObserver)\n    self.mObjectSelectionObserver.mEventCallBack = nil\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // Compute object shape\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mObjectDisplayObserver = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func startObservingObjectShape () {\n    self.mModel\?.toMany_objectDisplay_StartsBeingObserved (by: self.mObjectDisplayObserver)\n    self.mObjectDisplayObserver.mEventCallBack = { [weak self] in self\?.updateObjectDisplay () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func stopObservingObjectShape () {\n    self.mModel\?.toMany_objectDisplay_StopsBeingObserved (by: self.mObjectDisplayObserver)\n    self.mObjectDisplayObserver.mEventCallBack = nil\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func updateObjectDisplay () {\n    var displayArray = [EBShape] ()\n    for object in self.objectArray.values {\n      if let shape = object.objectDisplay {\n        displayArray.append (shape)\n      }else{\n        displayArray.append (EBShape ())\n      }\n    }\n    for view in self.mEBGraphicViews {\n      view.updateObjectDisplay (displayArray)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func alignmentPointSetArray () -> [Set<CanariPoint>] {\n    var result = [Set<CanariPoint>] ()\n    for object in self.objectArray.values {\n      result.append (object.alignmentPoints ())\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // EBGraphicViews\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mEBGraphicViews = Set <EBGraphicView> ()\n  private var mPasteboardTypes = Set <NSPasteboard.PasteboardType> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func addPasteBoardType (_ inType : NSPasteboard.PasteboardType) {\n    if !self.mPasteboardTypes.contains (inType) {\n      self.mPasteboardTypes.insert (inType)\n      for ebView in self.mEBGraphicViews {\n        ebView.register (draggedTypes: [inType])\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func boundViews () -> [EBGraphicView] {\n    return Array (self.mEBGraphicViews)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func setBackgroundImageAffineTransform (_ inAffineTransform : NSAffineTransform) {\n     for ebView in self.mEBGraphicViews {\n       ebView.mBackgroundImageAffineTransform = inAffineTransform\n     }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func setForegroundImageAffineTransform (_ inAffineTransform : NSAffineTransform) {\n     for ebView in self.mEBGraphicViews {\n       ebView.mForegroundImageAffineTransform = inAffineTransform\n     }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_ebView (_ inEBView : EBGraphicView\?) {\n    if let ebView = inEBView {\n      ebView.register (draggedTypes: Array (self.mPasteboardTypes))\n      self.mEBGraphicViews.insert (ebView)\n      ebView.set (controller: self)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  /* final func unbind_ebView (_ inEBView : EBGraphicView\?) {\n    if let ebView = inEBView {\n      ebView.updateObjectDisplay ([])\n      ebView.updateSelectionShape ([])\n      self.mEBGraphicViews.remove (ebView)\n    }\n  } */\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func selectedObjectIndexSet () -> NSIndexSet {\n    let modelObjects = self.objectArray\n    let selectedObjects = self.selectedArray_property.propset\n    let indexSet = NSMutableIndexSet ()\n    for object in selectedObjects.values {\n      if let index = modelObjects.firstIndex (of: object) {\n        indexSet.add (index)\n      }\n    }\n    return indexSet\n  }\n\n") ;
  switch (in_MODEL_5F_KIND.enumValue ()) {
  case GGS_arrayControllerModelKind::Enumeration::invalid :
    break ;
  case GGS_arrayControllerModelKind::Enumeration::enum_transientArray :
    {
    }
    break ;
  case GGS_arrayControllerModelKind::Enumeration::enum_entityArray :
    {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    select\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func select (object inObject : ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (") {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        break\n      case .single (let objectArray) :\n       let array = EBReferenceArray (objectArray)\n       if array.contains (inObject) {\n           self.selectedSet = EBReferenceSet (inObject)\n        }\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    add\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   @objc func add (_ _ : Any) {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        break\n      case .single (let v) :\n        let newObject = ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (" (self.undoManager)\n        var array = EBReferenceArray (v)\n        array.append (newObject)\n      //--- New object is the selection\n        self.selectedSet = EBReferenceSet ([newObject])\n        model.setProp (array)\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    remove\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @objc func remove (_ _ : Any) {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        break\n      case .single (let model_prop) :\n      //------------- Find the object to be selected after selected object removing\n      //--- Dictionary of object sorted indexes\n        var sortedObjectDictionary = EBReferenceDictionary <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (", Int> ()\n        for (index, object) in model_prop.enumerated () {\n          sortedObjectDictionary [object] = index\n        }\n        var indexArrayOfSelectedObjects = [Int] ()\n        for object in self.selectedArray_property.propset.values {\n          let index = sortedObjectDictionary [object]\n          if let idx = index {\n            indexArrayOfSelectedObjects.append (idx)\n          }\n        }\n      //--- Sort\n        indexArrayOfSelectedObjects.sort { $0 < $1 }\n      //--- Find the first index of a non selected object\n        var newSelectionIndex = indexArrayOfSelectedObjects [0] + 1\n        for index in indexArrayOfSelectedObjects {\n          if newSelectionIndex < index {\n            break\n          }else{\n            newSelectionIndex = index + 1\n          }\n        }\n        var newSelectedObject : ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString ("\? = nil\n        if (newSelectionIndex >= 0) && (newSelectionIndex < model_prop.count) {\n          newSelectedObject = model_prop [newSelectionIndex]\n        }\n      //----------------------------------------- Remove selected object\n      //--- Dictionary of object absolute indexes\n        var objectDictionary = EBReferenceDictionary <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (", Int> ()\n        for (index, object) in model_prop.enumerated () {\n          objectDictionary [object] = index\n        }\n      //--- Build selected objects index array\n        var selectedObjectIndexArray = [Int] ()\n        for object in self.selectedArray_property.propset.values {\n          let index = objectDictionary [object]\n          if let idx = index {\n            selectedObjectIndexArray.append (idx)\n          }\n        }\n      //--- Sort in reverse order\n        selectedObjectIndexArray.sort { $1 < $0 }\n      //--- Remove objects, in reverse of order of their index\n        var newObjectArray = EBReferenceArray (model_prop)\n        for index in selectedObjectIndexArray {\n          newObjectArray.remove (at: index)\n        }\n      //----------------------------------------- Set new selection\n        var newSelectionSet = EBReferenceSet <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString ("> ()\n        if let object = newSelectedObject {\n          newSelectionSet.insert (object)\n        }\n        self.selectedSet = newSelectionSet\n      //----------------------------------------- Set new object array\n        model.setProp (newObjectArray)\n      }\n    }\n  }\n") ;
    }
    break ;
  }
  const GalgasBool test_6 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  DOCUMENT  \n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final weak var mDocument : EBAutoLayoutManagedDocument\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func set (document inDocument : EBAutoLayoutManagedDocument) {\n    self.mDocument = inDocument\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  SELECTION OPERATIONS\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func sortedIndexArrayOfSelectedObjects () -> [Int] {\n    var result = [Int] ()\n    let objects = self.objectArray\n    for object in self.selectedArray_property.propset.values {\n      let idx = objects.firstIndex (of: object)!\n      result.append (idx)\n    }\n    return result.sorted ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canCut (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n    if (inPasteboardType == nil) || (self.selectedArray_property.propset.count == 0) {\n      return false\n    }else{\n      for object in self.selectedArray_property.propset.values {\n        if !object.canCopyAndPaste () || !object.canBeDeleted () {\n          return false\n        }\n      }\n      return true\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func cutSelectedObjectsIntoPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?, pasteOffset : CanariPoint) {\n    self.copySelectedObjectsIntoPasteboard (inPasteboardType, pasteOffset: pasteOffset)\n    self.deleteSelectedObjects ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canCopy (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n    return self.canCut (inPasteboardType)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func copySelectedObjectsIntoPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?,\n                                          pasteOffset : CanariPoint) {\n    if let pasteboardType = inPasteboardType {\n    //--- Declare pasteboard types\n      let pb = NSPasteboard.general\n      pb.declareTypes ([pasteboardType, .pdf], owner: self)\n    //--- Build PDF representation\n      let indexArray = self.sortedIndexArrayOfSelectedObjects ()\n      let objects = self.objectArray\n      var shape = EBShape ()\n      for idx in indexArray {\n        let object = objects [idx]\n        if let s = object.objectDisplay {\n          shape.add (s)\n        }\n      }\n      let pdfData = buildPDFimageData (frame: shape.boundingBox, shape: shape)\n      pb.setData (pdfData, forType: .pdf)\n   //--- Build private representation\n      var objectDictionaryArray = [[String : Any]] ()\n      var objectAdditionalDictionaryArray = [[String : Any]] ()\n      for idx in indexArray {\n        let object = objects [idx]\n        var dict = [String : Any] ()\n        object.savePropertiesIntoDictionary (&dict)\n        objectDictionaryArray.append (dict)\n        var additionalDict = [String : Any] ()\n        object.saveIntoAdditionalDictionary (&additionalDict)\n        objectAdditionalDictionaryArray.append (additionalDict)\n      }\n    //--- Copy private representation\n      let dataDictionary : [String : Any] = [\n        OBJECT_DICTIONARY_KEY : objectDictionaryArray,\n        OBJECT_ADDITIONAL_DICTIONARY_KEY : objectAdditionalDictionaryArray,\n        X_KEY : pasteOffset.x,\n        Y_KEY : pasteOffset.y\n      ]\n      pb.setPropertyList (dataDictionary, forType: pasteboardType)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canPaste (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n    if let pasteboardType = inPasteboardType {\n      let pb = NSPasteboard.general\n      return pb.availableType (from: [pasteboardType]) != nil\n    }else{\n      return false\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   func pasteFromPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?, _ inWindow : NSWindow) {\n    let pb = NSPasteboard.general\n    if let pasteboardType = inPasteboardType,\n           pb.availableType (from: [pasteboardType]) != nil,\n           let dataDictionary = pb.propertyList (forType: pasteboardType) as\? [String : Any],\n           let dictionaryArray = dataDictionary [OBJECT_DICTIONARY_KEY] as\? [[String : Any]],\n           let additionalDictionaryArray = dataDictionary [OBJECT_ADDITIONAL_DICTIONARY_KEY] as\? [[String : Any]],\n           let X = dataDictionary [X_KEY] as\? Int,\n           let Y = dataDictionary [Y_KEY] as\? Int {\n      var newObjects = [") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("] ()\n      var userSet = EBReferenceSet <EBManagedObject> ()\n      var idx = -1\n      var errorMessage = \"\"\n      for dictionary in dictionaryArray {\n        idx += 1\n        if let object = makeManagedObjectFromDictionary (self.undoManager, dictionary) as\? ") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString (" {\n          if errorMessage.isEmpty {\n            errorMessage = object.operationAfterPasting (additionalDictionary: additionalDictionaryArray [idx],\n                                                         optionalDocument: self.mDocument,\n                                                         objectArray: self.objectArray.values)\n          }\n          if errorMessage.isEmpty {\n            object.translate (xBy: X, yBy: Y, userSet: &userSet)\n            newObjects.append (object)\n          }\n        }\n      }\n      if errorMessage.isEmpty {\n        var objects = self.objectArray\n        objects.append (objects: newObjects)\n        self.mModel\?.setProp (objects)\n        self.selectedSet = EBReferenceSet (newObjects)\n      }else{\n         let alert = NSAlert ()\n         alert.messageText = errorMessage\n         _ = alert.addButton (withTitle: \"Ok\")\n         alert.beginSheetModal (for: inWindow) { (inReturnCode : NSApplication.ModalResponse) in }\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canDelete () -> Bool {\n    if self.selectedArray_property.propset.count == 0 {\n      return false\n    }else{\n      for object in self.selectedArray_property.propset.values {\n        if !object.canBeDeleted () {\n          return false\n        }\n      }\n      return true\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final var mAfterObjectRemovingCallback : Optional < () -> Void > = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func deleteSelectedObjects () {\n    if self.canDelete (), let model = self.mModel {\n    //--- Remove selected objects\n      let objectsToRemove = self.selectedArray_property.propset\n      for object in objectsToRemove.values {\n        object.operationBeforeRemoving ()\n        var objects = model.propval\n        if let idx = objects.firstIndex (of: object) {\n          objects.remove (at: idx)\n          model.setProp (objects)\n        }\n      }\n    //---\n      self.mAfterObjectRemovingCallback\? ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func selectAllObjects () {\n    self.selectedSet = EBReferenceSet (self.objectArray.values)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // BRING FORWARD\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringForward_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringForward : Bool {\n    let objects = self.objectArray\n    var result = (objects.count > 1) && (self.selectedArray_property.propset.count > 0)\n    if result {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      result = sortedIndexArray.last! < (objects.count - 1)\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func bringForward () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    for idx in sortedIndexArray.reversed () {\n       let object = objects [idx]\n       objects.remove (at: idx)\n       objects.insert (object, at: idx+1)\n    }\n    self.mModel\?.setProp (objects)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // BRING TO FRONT\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringToFront_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringToFront : Bool {\n    let objects = self.objectArray\n    if (objects.count > 1) && (self.selectedArray_property.propset.count > 0) {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      var top = objects.count - 1\n      for idx in sortedIndexArray.reversed () {\n        if idx < top {\n          return true\n        }\n        top -= 1\n      }\n    }\n    return false\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func bringToFront () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    for idx in sortedIndexArray {\n      let object = objects [idx]\n      objects.remove (at: idx)\n      objects.append (object)\n    }\n    self.mModel\?.setProp (objects)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // SEND BACKWARD\n   // MARK: -\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendBackward_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendBackward : Bool {\n    let objects = self.objectArray\n    var result = (objects.count > 1) && (self.selectedArray_property.propset.count > 0)\n    if result {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      result = sortedIndexArray [0] > 0\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func sendBackward () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    for idx in sortedIndexArray.reversed () {\n      let object = objects [idx]\n      objects.remove (at: idx)\n      objects.insert (object, at: idx - 1)\n    }\n    self.mModel\?.setProp (objects)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // SEND TO BACK\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendToBack_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func sendToBack () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    var newObjectArray = EBReferenceArray <") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("> ()\n    for idx in sortedIndexArray.reversed () {\n      let object = objects [idx]\n      objects.remove (at: idx)\n      newObjectArray.append (object)\n    }\n    newObjectArray.reverse ()\n    newObjectArray.append (objects: objects)\n    self.mModel\?.setProp (newObjectArray)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendToBack : Bool {\n    let objects = self.objectArray\n    if (objects.count > 1) && (self.selectedArray_property.propset.count > 0) {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      var bottom = 0\n      for idx in sortedIndexArray {\n        if idx > bottom {\n          return true\n        }\n        bottom += 1\n      }\n    }\n    return false\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // SNAP TO GRID\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func snapToGrid (_ inGrid : Int) {\n    for object in self.selectedArray_property.propset.values {\n      object.snapToGrid (inGrid)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canSnapToGrid (_ inGrid : Int) -> Bool {\n    for object in self.selectedArray_property.propset.values {\n      if object.canSnapToGrid (inGrid) {\n        return true\n      }\n    }\n    return false\n  }\n\n\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // HORIZONTAL FLIP\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipHorizontally_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func flipHorizontally () {\n    for object in self.selectedArray_property.propset.values {\n      object.flipHorizontally ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipHorizontally : Bool {\n    for object in self.selectedArray_property.propset.values {\n      if !object.canFlipHorizontally () {\n        return false\n      }\n    }\n    return self.selectedArray_property.propset.count > 0\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // VERTICAL FLIP\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipVertically_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func flipVertically () {\n    for object in self.selectedArray_property.propset.values {\n      object.flipVertically ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipVertically : Bool {\n    for object in self.selectedArray_property.propset.values {\n      if !object.canFlipVertically () {\n        return false\n      }\n    }\n    return self.selectedArray_property.propset.count > 0\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // ROTATE 90\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canRotate90_property = EBTransientProperty <Bool> ()\n  private var mRotate90PointSet = Set <CanariPoint> ()\n\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canRotate90 : Bool {\n    self.mRotate90PointSet.removeAll ()\n    if self.selectedArray.count == 0 {\n      return false\n    }else{\n      for object in self.selectedArray.values {\n        if !object.canRotate90 (accumulatedPoints: &self.mRotate90PointSet) {\n          return false\n        }\n      }\n      return !self.mRotate90PointSet.isEmpty\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func rotate90Clockwise () {\n    let r = CanariRect (points: Array (self.mRotate90PointSet))\n    var userSet = EBReferenceSet <EBManagedObject> ()\n    for object in self.selectedArray.values {\n      object.rotate90Clockwise (from: r.center, userSet: &userSet)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func rotate90CounterClockwise () {\n    let r = CanariRect (points: Array (self.mRotate90PointSet))\n    var userSet = EBReferenceSet <EBManagedObject> ()\n    for object in self.selectedArray.values {\n      object.rotate90CounterClockwise (from: r.center, userSet: &userSet)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func addToSelection (objects inObjects : [") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("]) {\n    if let objectSet = self.mModel\?.propset {\n      var newSelectedSet = self.selectedArray_property.propset\n      for object in inObjects {\n        if objectSet.contains (object) {\n          newSelectedSet.insert (object)\n        }\n      }\n      self.selectedSet = newSelectedSet\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n /* func addToSelection (objectsWithIndex inIndexes : [Int]) {\n    let objects = self.objectArray\n    var newSelectedSet = self.selectedArray_property.propset\n    for idx in inIndexes {\n      let newSelectedObject = objects [idx]\n      newSelectedSet.insert (newSelectedObject)\n    }\n    self.selectedSet = newSelectedSet\n  } */\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n/*  func removeFromSelection (objectWithIndex inIndex : Int) {\n    let objects = self.objectArray\n    let object = objects [inIndex]\n    var newSelectedSet = self.selectedArray_property.propset\n    newSelectedSet.remove (object)\n    self.selectedSet = newSelectedSet\n  } */\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func clearSelection () {\n    self.selectedSet = EBReferenceSet ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setSelection (objectsWithIndexes inIndexes : [Int]) {\n    let objects = self.objectArray\n    var selectedObjects = [") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("] ()\n    for index in inIndexes {\n      let newSelectedObject = objects [index]\n      selectedObjects.append (newSelectedObject)\n    }\n    self.selectedSet = EBReferenceSet (selectedObjects)\n  }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  //  INSPECTOR\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mInspectorReceivingView : NSView\? = nil\n  private var mCurrentAttachedView : NSView\? = nil\n  private var mInspectorDictionary = [ObjectIdentifier : NSView] ()\n  private var mInspectorObserver = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func register (inspectorReceivingView : NSView\?) {\n    self.mInspectorReceivingView = inspectorReceivingView\n    self.updateInspectorViews ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func register (inspectorView : NSView\?, for inEntity : EBGraphicManagedObject.Type) {\n    self.mInspectorDictionary [ObjectIdentifier (inEntity)] = inspectorView\n    self.updateInspectorViews ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func inspectorViewManagerStartsObservingSelection () {\n    self.selectedArray_property.startsBeingObserved (by: self.mInspectorObserver)\n    self.mInspectorObserver.mEventCallBack = { [weak self] in self\?.updateInspectorViews () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func inspectorViewManagerStopsObservingSelection () {\n    self.mInspectorObserver.mEventCallBack = nil\n    self.selectedArray_property.stopsBeingObserved (by: self.mInspectorObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func updateInspectorViews () {\n    if let inspectorView = self.mInspectorReceivingView {\n    //--- Remove current attached view\n      self.mCurrentAttachedView\?.removeFromSuperview ()\n    //--- Add the new attached view\n      if self.mViewIsHidden {\n        self.mCurrentAttachedView = nil\n      }else if self.selectedArray.count == 0 {\n        let tf = self.textField (\"Empty Selection\", inspectorView.frame)\n        inspectorView.addSubview (tf)\n        self.mCurrentAttachedView = tf\n      }else{\n        var selectionTypes = Set <ObjectIdentifier> ()\n        for object in self.selectedArray.values {\n          let T = ObjectIdentifier (type (of: object))\n          selectionTypes.insert (T)\n        }\n        if selectionTypes.count > 1 {\n          let tf = self.textField (\"Multiple Selection\", inspectorView.frame)\n          inspectorView.addSubview (tf)\n          self.mCurrentAttachedView = tf\n        }else if let selectionInspectorView = self.mInspectorDictionary [selectionTypes.first!] {\n          selectionInspectorView.autoresizingMask = [.width, .minYMargin]\n          selectionInspectorView.frame = inspectorView.frame\n          inspectorView.addSubview (selectionInspectorView)\n          self.mCurrentAttachedView = selectionInspectorView\n        }else{\n          let tf = self.textField (\"No Inspector for this Selection\", inspectorView.frame)\n          inspectorView.addSubview (tf)\n          self.mCurrentAttachedView = tf\n        }\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func textField (_ inString : String, _ inspectorFrame : NSRect) -> NSTextField {\n    let textHeight : CGFloat = 30.0\n    let r = NSRect (\n      x: 0.0,\n      y: inspectorFrame.origin.y + (inspectorFrame.size.height - textHeight) / 2.0,\n      width: inspectorFrame.size.width,\n      height: textHeight\n    )\n    let tf = NSTextField (frame: r)\n    tf.alignment = .center\n    tf.isBezeled = false\n    tf.isBordered = false\n    tf.drawsBackground = false\n    tf.isEnabled = true\n    tf.isEditable = false\n    tf.autoresizingMask = [.width, .minYMargin, .maxYMargin]\n    tf.stringValue = inString\n    tf.font = NSFont.boldSystemFont (ofSize: NSFont.systemFontSize * 1.25)\n    tf.textColor = NSColor.lightGray\n    return tf\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mViewIsHidden = false {\n    didSet { self.updateInspectorViews () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var isHidden : Bool {\n    get { return self.mViewIsHidden }\n    set { self.mViewIsHidden = newValue }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@arrayControllerGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                                   const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                   GGS_stringset & /* ioArgument_ioUsedProtocolSet */,
                                                                   GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@arrayControllerGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                   const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                   const GGS_stringset /* constinArgument_inUsedProtocolSet */,
                                                                   GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayControllerGeneration temp_0 = this ;
  const GGS_arrayControllerGeneration temp_1 = this ;
  const GGS_arrayControllerGeneration temp_2 = this ;
  const GGS_arrayControllerGeneration temp_3 = this ;
  const GGS_arrayControllerGeneration temp_4 = this ;
  const GGS_arrayControllerGeneration temp_5 = this ;
  GGS_string var_s_13516 = GGS_string (filewrapperTemplate_arrayControllerGenerationTemplate_arrayControllerImplementationInSwift (inCompiler, temp_0.readProperty_mOwnerName (), temp_1.readProperty_mControllerName ().readProperty_string (), temp_2.readProperty_mArrayControllerModelKind (), temp_3.readProperty_mModelTypeName (), temp_4.readProperty_mElementTypeName (), temp_5.readProperty_mElementTypeIsGraphic () COMMA_SOURCE_FILE ("array-controller.ggs", 340))) ;
  {
  const GGS_arrayControllerGeneration temp_6 = this ;
  const GGS_arrayControllerGeneration temp_7 = this ;
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, GGS_string ("controller-array-").add_operation (temp_6.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 350)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 350)).add_operation (temp_7.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 350)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 350)), var_s_13516, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 348)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildBindingSpecificationMap&?'
//
//--------------------------------------------------------------------------------------------------

void routine_buildBindingSpecificationMap_26__3F_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                   const GGS_outletClassBindingSpecificationList constinArgument_inBindingSpecificationListMap,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_outletClassBindingSpecificationList enumerator_4526 (constinArgument_inBindingSpecificationListMap) ;
  while (enumerator_4526.hasCurrentObject ()) {
    GGS_outletBindingSpecificationModelList temp_0 = GGS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 130)) ;
    GGS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_4627 = temp_0 ;
    UpEnumerator_outletClassBindingSpecificationModelList enumerator_4693 (enumerator_4526.current_mOutletClassBindingSpecificationModelList (HERE)) ;
    while (enumerator_4693.hasCurrentObject ()) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, enumerator_4693.current_mModelTypeName (HERE).readProperty_string ().objectCompare (GGS_string ("enum"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          var_outletBindingSpecificationModelList_4627.setter_append (GGS_typeKind::class_func_enumType (GGS_string::makeEmptyString (), GGS_enumConstantMap::init (inCompiler COMMA_HERE), GGS_enumFuncMap::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 134)), enumerator_4693.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 133)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GGS_classKind var_classKind_5107 ;
        GGS_propertyMap joker_5118_3 ; // Joker input parameter
        GGS_actionMap joker_5118_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_5118_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_4693.current_mModelTypeName (HERE), var_classKind_5107, joker_5118_3, joker_5118_2, joker_5118_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 138)) ;
        GGS_typeKind var_typeKind_5145 ;
        switch (var_classKind_5107.enumValue ()) {
        case GGS_classKind::Enumeration::invalid:
          break ;
        case GGS_classKind::Enumeration::enum_prefs:
          {
            GenericArray <FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_4693.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 142)) ;
            var_typeKind_5145.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_atomic:
          {
            GGS_typeKind extractedValue_5316_kind_0 ;
            var_classKind_5107.getAssociatedValuesFor_atomic (extractedValue_5316_kind_0) ;
            var_typeKind_5145 = extractedValue_5316_kind_0 ;
          }
          break ;
        case GGS_classKind::Enumeration::enum_document:
          {
            GGS_lstring extractedValue_5373__0 ;
            var_classKind_5107.getAssociatedValuesFor_document (extractedValue_5373__0) ;
            GenericArray <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_4693.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 146)) ;
            var_typeKind_5145.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_entity:
          {
            GGS_string extractedValue_5485__0 ;
            GGS_bool extractedValue_5485__1 ;
            GGS_bool extractedValue_5485__2 ;
            GGS_bool extractedValue_5485__3 ;
            var_classKind_5107.getAssociatedValuesFor_entity (extractedValue_5485__0, extractedValue_5485__1, extractedValue_5485__2, extractedValue_5485__3) ;
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_4693.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 148)) ;
            var_typeKind_5145.drop () ; // Release error dropped variable
          }
          break ;
        }
        {
        var_outletBindingSpecificationModelList_4627.setter_append (var_typeKind_5145, enumerator_4693.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 150)) ;
        }
      }
      enumerator_4693.gotoNextObject () ;
    }
    GGS_controllerBindingOptionDecoratedList temp_5 = GGS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 153)) ;
    GGS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_5747 = temp_5 ;
    UpEnumerator_controllerBindingOptionList enumerator_5811 (enumerator_4526.current_mBindingOptionList (HERE)) ;
    while (enumerator_5811.hasCurrentObject ()) {
      GGS_classKind var_classKind_5931 ;
      GGS_propertyMap joker_5942_3 ; // Joker input parameter
      GGS_actionMap joker_5942_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_5942_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_5811.current_mOptionTypeName (HERE), var_classKind_5931, joker_5942_3, joker_5942_2, joker_5942_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 155)) ;
      GGS_typeKind var_typeKind_5967 ;
      switch (var_classKind_5931.enumValue ()) {
      case GGS_classKind::Enumeration::invalid:
        break ;
      case GGS_classKind::Enumeration::enum_prefs:
        {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_5811.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 159)) ;
          var_typeKind_5967.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_atomic:
        {
          GGS_typeKind extractedValue_6131_kind_0 ;
          var_classKind_5931.getAssociatedValuesFor_atomic (extractedValue_6131_kind_0) ;
          var_typeKind_5967 = extractedValue_6131_kind_0 ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_document:
        {
          GGS_lstring extractedValue_6184__0 ;
          var_classKind_5931.getAssociatedValuesFor_document (extractedValue_6184__0) ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_5811.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray7  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 163)) ;
          var_typeKind_5967.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_entity:
        {
          GGS_string extractedValue_6293__0 ;
          GGS_bool extractedValue_6293__1 ;
          GGS_bool extractedValue_6293__2 ;
          GGS_bool extractedValue_6293__3 ;
          var_classKind_5931.getAssociatedValuesFor_entity (extractedValue_6293__0, extractedValue_6293__1, extractedValue_6293__2, extractedValue_6293__3) ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_5811.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 165)) ;
          var_typeKind_5967.drop () ; // Release error dropped variable
        }
        break ;
      }
      {
      var_controllerBindingOptionDecoratedList_5747.setter_append (var_typeKind_5967, enumerator_5811.current_mOptionName (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 167)) ;
      }
      enumerator_5811.gotoNextObject () ;
    }
    GGS_outletBindingSpecificationMap var_bindingMap_6544 ;
    GGS_lstring var_outletSuperClassName_6572 ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = ioArgument_ioSemanticContext.readProperty_mBindingSpecificationMap ().getter_hasKey (enumerator_4526.current_mOutletClassName (HERE).readProperty_string () COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 172)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        {
        ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_removeKey (enumerator_4526.current_mOutletClassName (HERE), var_outletSuperClassName_6572, var_bindingMap_6544, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 173)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      var_bindingMap_6544 = GGS_outletBindingSpecificationMap::init (inCompiler COMMA_HERE) ;
      GGS_bool joker_6920_6 ; // Joker input parameter
      GGS_bool joker_6920_5 ; // Joker input parameter
      GGS_bool joker_6920_4 ; // Joker input parameter
      GGS_bool joker_6920_3 ; // Joker input parameter
      GGS_bool joker_6920_2 ; // Joker input parameter
      GGS_bool joker_6920_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (enumerator_4526.current_mOutletClassName (HERE), var_outletSuperClassName_6572, joker_6920_6, joker_6920_5, joker_6920_4, joker_6920_3, joker_6920_2, joker_6920_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 176)) ;
    }
    {
    var_bindingMap_6544.setter_insertKey (enumerator_4526.current_mBindingName (HERE), var_outletBindingSpecificationModelList_4627, var_controllerBindingOptionDecoratedList_5747, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 178)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_insertKey (enumerator_4526.current_mOutletClassName (HERE), var_outletSuperClassName_6572, var_bindingMap_6544, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 183)) ;
    }
    enumerator_4526.gotoNextObject () ;
  }
}



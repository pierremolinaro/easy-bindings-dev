#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//----------------------------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//----------------------------------------------------------------------------------------------------------------------

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"
#include "galgas2/cLexiqueIntrospection.h"

//----------------------------------------------------------------------------------------------------------------------

cTokenFor_easyBindings_5F_lexique::cTokenFor_easyBindings_5F_lexique (void) :
mLexicalAttribute_floatValue (),
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value () {
}

//----------------------------------------------------------------------------------------------------------------------

C_Lexique_easyBindings_5F_lexique::C_Lexique_easyBindings_5F_lexique (C_Compiler * inCallerCompiler,
                                                                      const C_String & inSourceFileName
                                                                      COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

C_Lexique_easyBindings_5F_lexique::C_Lexique_easyBindings_5F_lexique (C_Compiler * inCallerCompiler,
                                                                      const C_String & inSourceString,
                                                                      const C_String & inStringForError
                                                                      COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------
//                 I N D E X I N G    D I R E C T O R Y                                          
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_easyBindings_5F_lexique::indexingDirectory (void) const {
  return "" ;
}

//----------------------------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//----------------------------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_easyBindings_5F_lexique_attributeError = "in an attribute name, a letter, a digit or a dot should follow the '@' character" ;

static const char * gLexicalMessage_easyBindings_5F_lexique_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_easyBindings_5F_lexique_floatNumberConversionError = "invalid float number" ;

static const char * gLexicalMessage_easyBindings_5F_lexique_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_easyBindings_5F_lexique_internalError = "internal error" ;

//----------------------------------------------------------------------------------------------------------------------
//          Syntax error messages, for every terminal symbol                                     
//----------------------------------------------------------------------------------------------------------------------

//--- Syntax error message for terminal '$identifier$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_identifier = "an identifier (beginning with a lower-case letter)" ;

//--- Syntax error message for terminal '$Identifier$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_Identifier = "an identifier (beginning with a upper-case letter)" ;

//--- Syntax error message for terminal '$@attribute$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__40_attribute = "an attribute @..." ;

//--- Syntax error message for terminal '$bindingName$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_bindingName = "a binding name (identifier prefixed by '$')" ;

//--- Syntax error message for terminal '$controllerName$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_controllerName = "a controller name (identifier prefixed by '#')" ;

//--- Syntax error message for terminal '$literal_integer$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_literal_5F_integer = "a 32-bit unsigned decimal number" ;

//--- Syntax error message for terminal '$literal_double$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_literal_5F_double = "a float number" ;

//--- Syntax error message for terminal '$literal_string$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_literal_5F_string = "a character string constant \"...\"" ;

//--- Syntax error message for terminal '$comment$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_comment = "a comment" ;

//--- Syntax error message for terminal '$abstract$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_abstract = "the 'abstract' keyword" ;

//--- Syntax error message for terminal '$action$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_action = "the 'action' keyword" ;

//--- Syntax error message for terminal '$all$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_all = "the 'all' keyword" ;

//--- Syntax error message for terminal '$arrayController$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_arrayController = "the 'arrayController' keyword" ;

//--- Syntax error message for terminal '$autolayout$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_autolayout = "the 'autolayout' keyword" ;

//--- Syntax error message for terminal '$autoLayoutDocument$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_autoLayoutDocument = "the 'autoLayoutDocument' keyword" ;

//--- Syntax error message for terminal '$binding$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_binding = "the 'binding' keyword" ;

//--- Syntax error message for terminal '$calledBy$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_calledBy = "the 'calledBy' keyword" ;

//--- Syntax error message for terminal '$class$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_class = "the 'class' keyword" ;

//--- Syntax error message for terminal '$classForSwift$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_classForSwift = "the 'classForSwift' keyword" ;

//--- Syntax error message for terminal '$column$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_column = "the 'column' keyword" ;

//--- Syntax error message for terminal '$computed$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_computed = "the 'computed' keyword" ;

//--- Syntax error message for terminal '$configurator$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_configurator = "the 'configurator' keyword" ;

//--- Syntax error message for terminal '$default$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_default = "the 'default' keyword" ;

//--- Syntax error message for terminal '$dependsFrom$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_dependsFrom = "the 'dependsFrom' keyword" ;

//--- Syntax error message for terminal '$enum$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_enum = "the 'enum' keyword" ;

//--- Syntax error message for terminal '$editableColumn$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_editableColumn = "the 'editableColumn' keyword" ;

//--- Syntax error message for terminal '$entity$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_entity = "the 'entity' keyword" ;

//--- Syntax error message for terminal '$extern$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_extern = "the 'extern' keyword" ;

//--- Syntax error message for terminal '$externDelegate$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_externDelegate = "the 'externDelegate' keyword" ;

//--- Syntax error message for terminal '$externFunc$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_externFunc = "the 'externFunc' keyword" ;

//--- Syntax error message for terminal '$func$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_func = "the 'func' keyword" ;

//--- Syntax error message for terminal '$graphic$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_graphic = "the 'graphic' keyword" ;

//--- Syntax error message for terminal '$graphviz$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_graphviz = "the 'graphviz' keyword" ;

//--- Syntax error message for terminal '$handlingOpposite$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_handlingOpposite = "the 'handlingOpposite' keyword" ;

//--- Syntax error message for terminal '$hSplit$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_hSplit = "the 'hSplit' keyword" ;

//--- Syntax error message for terminal '$hStack$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_hStack = "the 'hStack' keyword" ;

//--- Syntax error message for terminal '$include$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_include = "the 'include' keyword" ;

//--- Syntax error message for terminal '$inverse$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_inverse = "the 'inverse' keyword" ;

//--- Syntax error message for terminal '$linker$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_linker = "the 'linker' keyword" ;

//--- Syntax error message for terminal '$mainxib$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_mainxib = "the 'mainxib' keyword" ;

//--- Syntax error message for terminal '$menuItem$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_menuItem = "the 'menuItem' keyword" ;

//--- Syntax error message for terminal '$no$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_no = "the 'no' keyword" ;

//--- Syntax error message for terminal '$none$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_none = "the 'none' keyword" ;

//--- Syntax error message for terminal '$one$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_one = "the 'one' keyword" ;

//--- Syntax error message for terminal '$outlet$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_outlet = "the 'outlet' keyword" ;

//--- Syntax error message for terminal '$override$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_override = "the 'override' keyword" ;

//--- Syntax error message for terminal '$prefs$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_prefs = "the 'prefs' keyword" ;

//--- Syntax error message for terminal '$property$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_property = "the 'property' keyword" ;

//--- Syntax error message for terminal '$proxy$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_proxy = "the 'proxy' keyword" ;

//--- Syntax error message for terminal '$root$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_root = "the 'root' keyword" ;

//--- Syntax error message for terminal '$selectionController$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_selectionController = "the 'selectionController' keyword" ;

//--- Syntax error message for terminal '$self$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_self = "the 'self' keyword" ;

//--- Syntax error message for terminal '$separator$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_separator = "the 'separator' keyword" ;

//--- Syntax error message for terminal '$signature$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_signature = "the 'signature' keyword" ;

//--- Syntax error message for terminal '$sortkey$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_sortkey = "the 'sortkey' keyword" ;

//--- Syntax error message for terminal '$space$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_space = "the 'space' keyword" ;

//--- Syntax error message for terminal '$stackView$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_stackView = "the 'stackView' keyword" ;

//--- Syntax error message for terminal '$stackViewRef$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_stackViewRef = "the 'stackViewRef' keyword" ;

//--- Syntax error message for terminal '$struct$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_struct = "the 'struct' keyword" ;

//--- Syntax error message for terminal '$super$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_super = "the 'super' keyword" ;

//--- Syntax error message for terminal '$tableViewController$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_tableViewController = "the 'tableViewController' keyword" ;

//--- Syntax error message for terminal '$toMany$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_toMany = "the 'toMany' keyword" ;

//--- Syntax error message for terminal '$toolbarItem$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_toolbarItem = "the 'toolbarItem' keyword" ;

//--- Syntax error message for terminal '$toOne$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_toOne = "the 'toOne' keyword" ;

//--- Syntax error message for terminal '$transient$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_transient = "the 'transient' keyword" ;

//--- Syntax error message for terminal '$version$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_version = "the 'version' keyword" ;

//--- Syntax error message for terminal '$vSplit$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_vSplit = "the 'vSplit' keyword" ;

//--- Syntax error message for terminal '$vStack$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_vStack = "the 'vStack' keyword" ;

//--- Syntax error message for terminal '$versionShouldChange$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_versionShouldChange = "the 'versionShouldChange' keyword" ;

//--- Syntax error message for terminal '$view$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_view = "the 'view' keyword" ;

//--- Syntax error message for terminal '$xcodeproject$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_xcodeproject = "the 'xcodeproject' keyword" ;

//--- Syntax error message for terminal '$yes$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_yes = "the 'yes' keyword" ;

//--- Syntax error message for terminal '$enabled$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_enabled = "the '$enabled' keyword" ;

//--- Syntax error message for terminal '$graphicController$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_graphicController = "the '$graphicController' keyword" ;

//--- Syntax error message for terminal '$hidden$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_hidden = "the '$hidden' keyword" ;

//--- Syntax error message for terminal '$tableValue$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_tableValue = "the '$tableValue' keyword" ;

//--- Syntax error message for terminal '$run$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_run = "the '$run' keyword" ;

//--- Syntax error message for terminal '$:$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__3A_ = "the ':' delimitor" ;

//--- Syntax error message for terminal '$,$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__2C_ = "the ',' delimitor" ;

//--- Syntax error message for terminal '$;$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__3B_ = "the ';' delimitor" ;

//--- Syntax error message for terminal '$!$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__21_ = "the '!' delimitor" ;

//--- Syntax error message for terminal '$[$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__5B_ = "the '[' delimitor" ;

//--- Syntax error message for terminal '$]$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__5D_ = "the ']' delimitor" ;

//--- Syntax error message for terminal '${$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__7B_ = "the '{' delimitor" ;

//--- Syntax error message for terminal '$}$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__7D_ = "the '}' delimitor" ;

//--- Syntax error message for terminal '$($' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__28_ = "the '(' delimitor" ;

//--- Syntax error message for terminal '$)$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__29_ = "the ')' delimitor" ;

//--- Syntax error message for terminal '$.$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__2E_ = "the '.' delimitor" ;

//--- Syntax error message for terminal '$|$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__7C_ = "the '|' delimitor" ;

//--- Syntax error message for terminal '$&$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__26_ = "the '&' delimitor" ;

//--- Syntax error message for terminal '$<$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__3C_ = "the '<' delimitor" ;

//--- Syntax error message for terminal '$>$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__3E_ = "the '>' delimitor" ;

//--- Syntax error message for terminal '$<=$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__3C__3D_ = "the '<=' delimitor" ;

//--- Syntax error message for terminal '$>=$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__3E__3D_ = "the '>=' delimitor" ;

//--- Syntax error message for terminal '$!=$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__21__3D_ = "the '!=' delimitor" ;

//--- Syntax error message for terminal '$==$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__3D__3D_ = "the '==' delimitor" ;

//--- Syntax error message for terminal '$^$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__5E_ = "the '^' delimitor" ;

//--- Syntax error message for terminal '$-$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__2D_ = "the '-' delimitor" ;

//----------------------------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_easyBindings_5F_lexique::getMessageForTerminal (const int16_t inTerminalIndex) const {
  C_String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 99)) {
    static const char * syntaxErrorMessageArray [99] = {kEndOfSourceLexicalErrorMessage,
        gSyntaxErrorMessage_easyBindings_5F_lexique_identifier,
        gSyntaxErrorMessage_easyBindings_5F_lexique_Identifier,
        gSyntaxErrorMessage_easyBindings_5F_lexique__40_attribute,
        gSyntaxErrorMessage_easyBindings_5F_lexique_bindingName,
        gSyntaxErrorMessage_easyBindings_5F_lexique_controllerName,
        gSyntaxErrorMessage_easyBindings_5F_lexique_literal_5F_integer,
        gSyntaxErrorMessage_easyBindings_5F_lexique_literal_5F_double,
        gSyntaxErrorMessage_easyBindings_5F_lexique_literal_5F_string,
        gSyntaxErrorMessage_easyBindings_5F_lexique_comment,
        gSyntaxErrorMessage_easyBindings_5F_lexique_abstract,
        gSyntaxErrorMessage_easyBindings_5F_lexique_action,
        gSyntaxErrorMessage_easyBindings_5F_lexique_all,
        gSyntaxErrorMessage_easyBindings_5F_lexique_arrayController,
        gSyntaxErrorMessage_easyBindings_5F_lexique_autolayout,
        gSyntaxErrorMessage_easyBindings_5F_lexique_autoLayoutDocument,
        gSyntaxErrorMessage_easyBindings_5F_lexique_binding,
        gSyntaxErrorMessage_easyBindings_5F_lexique_calledBy,
        gSyntaxErrorMessage_easyBindings_5F_lexique_class,
        gSyntaxErrorMessage_easyBindings_5F_lexique_classForSwift,
        gSyntaxErrorMessage_easyBindings_5F_lexique_column,
        gSyntaxErrorMessage_easyBindings_5F_lexique_computed,
        gSyntaxErrorMessage_easyBindings_5F_lexique_configurator,
        gSyntaxErrorMessage_easyBindings_5F_lexique_default,
        gSyntaxErrorMessage_easyBindings_5F_lexique_dependsFrom,
        gSyntaxErrorMessage_easyBindings_5F_lexique_enum,
        gSyntaxErrorMessage_easyBindings_5F_lexique_editableColumn,
        gSyntaxErrorMessage_easyBindings_5F_lexique_entity,
        gSyntaxErrorMessage_easyBindings_5F_lexique_extern,
        gSyntaxErrorMessage_easyBindings_5F_lexique_externDelegate,
        gSyntaxErrorMessage_easyBindings_5F_lexique_externFunc,
        gSyntaxErrorMessage_easyBindings_5F_lexique_func,
        gSyntaxErrorMessage_easyBindings_5F_lexique_graphic,
        gSyntaxErrorMessage_easyBindings_5F_lexique_graphviz,
        gSyntaxErrorMessage_easyBindings_5F_lexique_handlingOpposite,
        gSyntaxErrorMessage_easyBindings_5F_lexique_hSplit,
        gSyntaxErrorMessage_easyBindings_5F_lexique_hStack,
        gSyntaxErrorMessage_easyBindings_5F_lexique_include,
        gSyntaxErrorMessage_easyBindings_5F_lexique_inverse,
        gSyntaxErrorMessage_easyBindings_5F_lexique_linker,
        gSyntaxErrorMessage_easyBindings_5F_lexique_mainxib,
        gSyntaxErrorMessage_easyBindings_5F_lexique_menuItem,
        gSyntaxErrorMessage_easyBindings_5F_lexique_no,
        gSyntaxErrorMessage_easyBindings_5F_lexique_none,
        gSyntaxErrorMessage_easyBindings_5F_lexique_one,
        gSyntaxErrorMessage_easyBindings_5F_lexique_outlet,
        gSyntaxErrorMessage_easyBindings_5F_lexique_override,
        gSyntaxErrorMessage_easyBindings_5F_lexique_prefs,
        gSyntaxErrorMessage_easyBindings_5F_lexique_property,
        gSyntaxErrorMessage_easyBindings_5F_lexique_proxy,
        gSyntaxErrorMessage_easyBindings_5F_lexique_root,
        gSyntaxErrorMessage_easyBindings_5F_lexique_selectionController,
        gSyntaxErrorMessage_easyBindings_5F_lexique_self,
        gSyntaxErrorMessage_easyBindings_5F_lexique_separator,
        gSyntaxErrorMessage_easyBindings_5F_lexique_signature,
        gSyntaxErrorMessage_easyBindings_5F_lexique_sortkey,
        gSyntaxErrorMessage_easyBindings_5F_lexique_space,
        gSyntaxErrorMessage_easyBindings_5F_lexique_stackView,
        gSyntaxErrorMessage_easyBindings_5F_lexique_stackViewRef,
        gSyntaxErrorMessage_easyBindings_5F_lexique_struct,
        gSyntaxErrorMessage_easyBindings_5F_lexique_super,
        gSyntaxErrorMessage_easyBindings_5F_lexique_tableViewController,
        gSyntaxErrorMessage_easyBindings_5F_lexique_toMany,
        gSyntaxErrorMessage_easyBindings_5F_lexique_toolbarItem,
        gSyntaxErrorMessage_easyBindings_5F_lexique_toOne,
        gSyntaxErrorMessage_easyBindings_5F_lexique_transient,
        gSyntaxErrorMessage_easyBindings_5F_lexique_version,
        gSyntaxErrorMessage_easyBindings_5F_lexique_vSplit,
        gSyntaxErrorMessage_easyBindings_5F_lexique_vStack,
        gSyntaxErrorMessage_easyBindings_5F_lexique_versionShouldChange,
        gSyntaxErrorMessage_easyBindings_5F_lexique_view,
        gSyntaxErrorMessage_easyBindings_5F_lexique_xcodeproject,
        gSyntaxErrorMessage_easyBindings_5F_lexique_yes,
        gSyntaxErrorMessage_easyBindings_5F_lexique_enabled,
        gSyntaxErrorMessage_easyBindings_5F_lexique_graphicController,
        gSyntaxErrorMessage_easyBindings_5F_lexique_hidden,
        gSyntaxErrorMessage_easyBindings_5F_lexique_tableValue,
        gSyntaxErrorMessage_easyBindings_5F_lexique_run,
        gSyntaxErrorMessage_easyBindings_5F_lexique__3A_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__2C_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__3B_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__21_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__5B_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__5D_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__7B_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__7D_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__28_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__29_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__2E_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__7C_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__26_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__3C_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__3E_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__3C__3D_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__3E__3D_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__21__3D_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__3D__3D_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__5E_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__2D_
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//----------------------------------------------------------------------------------------------------------------------

//--- Unicode string for '$_21_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__21_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21__3D_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__21__3D_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__26_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_28_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__28_ [] = {
  TO_UNICODE ('('),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_29_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__29_ [] = {
  TO_UNICODE (')'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2C_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__2C_ [] = {
  TO_UNICODE (','),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__2D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__2E_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F__2F_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__2F__2F_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__3A_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3B_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__3B_ [] = {
  TO_UNICODE (';'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3C_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__3C_ [] = {
  TO_UNICODE ('<'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3C__3D_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__3C__3D_ [] = {
  TO_UNICODE ('<'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D__3D_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__3D__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E__3D_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__3E__3D_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5B_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__5B_ [] = {
  TO_UNICODE ('['),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C_n$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__5C_n [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C_u$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__5C_u [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('u'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5D_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__5D_ [] = {
  TO_UNICODE (']'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5E_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__5E_ [] = {
  TO_UNICODE ('^'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$abstract$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_abstract [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('b'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$action$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_action [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$all$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_all [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$arrayController$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_arrayController [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('y'),
  TO_UNICODE ('C'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$autoLayoutDocument$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_autoLayoutDocument [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('L'),
  TO_UNICODE ('a'),
  TO_UNICODE ('y'),
  TO_UNICODE ('o'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('D'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$autolayout$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_autolayout [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('y'),
  TO_UNICODE ('o'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$binding$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_binding [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$calledBy$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_calledBy [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE ('B'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$class$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_class [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$classForSwift$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_classForSwift [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE ('F'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('S'),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$column$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_column [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$computed$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_computed [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$configurator$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_configurator [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('g'),
  TO_UNICODE ('u'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$default$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_default [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$dependsFrom$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_dependsFrom [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('s'),
  TO_UNICODE ('F'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$editableColumn$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_editableColumn [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('C'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$enabled$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_enabled [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('a'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$entity$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_entity [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$enum$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_enum [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$extern$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_extern [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$externDelegate$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_externDelegate [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE ('D'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('g'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$externFunc$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_externFunc [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE ('F'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$func$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_func [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$graphic$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_graphic [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$graphicController$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_graphicController [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE ('C'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$graphviz$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_graphviz [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('h'),
  TO_UNICODE ('v'),
  TO_UNICODE ('i'),
  TO_UNICODE ('z'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$hSplit$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_hSplit [] = {
  TO_UNICODE ('h'),
  TO_UNICODE ('S'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$hStack$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_hStack [] = {
  TO_UNICODE ('h'),
  TO_UNICODE ('S'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$handlingOpposite$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_handlingOpposite [] = {
  TO_UNICODE ('h'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE ('O'),
  TO_UNICODE ('p'),
  TO_UNICODE ('p'),
  TO_UNICODE ('o'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$hidden$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_hidden [] = {
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('d'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$include$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_include [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$inverse$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_inverse [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$linker$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_linker [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$mainxib$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_mainxib [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('x'),
  TO_UNICODE ('i'),
  TO_UNICODE ('b'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$menuItem$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_menuItem [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('I'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$no$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_no [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$none$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_none [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$one$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_one [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$outlet$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_outlet [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$override$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_override [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$prefs$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_prefs [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$property$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_property [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$proxy$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_proxy [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('x'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$root$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_root [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$run$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_run [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$selectionController$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_selectionController [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('C'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$self$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_self [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$separator$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_separator [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$signature$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_signature [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('g'),
  TO_UNICODE ('n'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('u'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$sortkey$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_sortkey [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$space$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_space [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('p'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$stackView$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_stackView [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE ('V'),
  TO_UNICODE ('i'),
  TO_UNICODE ('e'),
  TO_UNICODE ('w'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$stackViewRef$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_stackViewRef [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE ('V'),
  TO_UNICODE ('i'),
  TO_UNICODE ('e'),
  TO_UNICODE ('w'),
  TO_UNICODE ('R'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$struct$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_struct [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$super$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_super [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('u'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$tableValue$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_tableValue [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('V'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$tableViewController$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_tableViewController [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('V'),
  TO_UNICODE ('i'),
  TO_UNICODE ('e'),
  TO_UNICODE ('w'),
  TO_UNICODE ('C'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$toMany$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_toMany [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('M'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$toOne$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_toOne [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('O'),
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$toolbarItem$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_toolbarItem [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('b'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('I'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$transient$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_transient [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$vSplit$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_vSplit [] = {
  TO_UNICODE ('v'),
  TO_UNICODE ('S'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$vStack$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_vStack [] = {
  TO_UNICODE ('v'),
  TO_UNICODE ('S'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$version$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_version [] = {
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$versionShouldChange$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_versionShouldChange [] = {
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('S'),
  TO_UNICODE ('h'),
  TO_UNICODE ('o'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('d'),
  TO_UNICODE ('C'),
  TO_UNICODE ('h'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$view$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_view [] = {
  TO_UNICODE ('v'),
  TO_UNICODE ('i'),
  TO_UNICODE ('e'),
  TO_UNICODE ('w'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$xcodeproject$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_xcodeproject [] = {
  TO_UNICODE ('x'),
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('j'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$yes$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_yes [] = {
  TO_UNICODE ('y'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7B_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__7B_ [] = {
  TO_UNICODE ('{'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7C_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__7C_ [] = {
  TO_UNICODE ('|'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7D_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__7D_ [] = {
  TO_UNICODE ('}'),
  TO_UNICODE (0)
} ;

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'delimitorsList'      
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_easyBindings_5F_lexique_delimitorsList = 21 ;

static const C_unicode_lexique_table_entry ktable_for_easyBindings_5F_lexique_delimitorsList [ktable_size_easyBindings_5F_lexique_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__21_, 1, C_Lexique_easyBindings_5F_lexique::kToken__21_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__26_, 1, C_Lexique_easyBindings_5F_lexique::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__28_, 1, C_Lexique_easyBindings_5F_lexique::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__29_, 1, C_Lexique_easyBindings_5F_lexique::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__2C_, 1, C_Lexique_easyBindings_5F_lexique::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__2D_, 1, C_Lexique_easyBindings_5F_lexique::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__2E_, 1, C_Lexique_easyBindings_5F_lexique::kToken__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3A_, 1, C_Lexique_easyBindings_5F_lexique::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3B_, 1, C_Lexique_easyBindings_5F_lexique::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3C_, 1, C_Lexique_easyBindings_5F_lexique::kToken__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3E_, 1, C_Lexique_easyBindings_5F_lexique::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__5B_, 1, C_Lexique_easyBindings_5F_lexique::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__5D_, 1, C_Lexique_easyBindings_5F_lexique::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__5E_, 1, C_Lexique_easyBindings_5F_lexique::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__7B_, 1, C_Lexique_easyBindings_5F_lexique::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__7C_, 1, C_Lexique_easyBindings_5F_lexique::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__7D_, 1, C_Lexique_easyBindings_5F_lexique::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__21__3D_, 2, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3C__3D_, 2, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3D__3D_, 2, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3E__3D_, 2, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_)
} ;

int16_t C_Lexique_easyBindings_5F_lexique::search_into_delimitorsList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_easyBindings_5F_lexique_delimitorsList, ktable_size_easyBindings_5F_lexique_delimitorsList) ;
}

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'lowerCaseKeyWordList'      
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_easyBindings_5F_lexique_lowerCaseKeyWordList = 63 ;

static const C_unicode_lexique_table_entry ktable_for_easyBindings_5F_lexique_lowerCaseKeyWordList [ktable_size_easyBindings_5F_lexique_lowerCaseKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_no, 2, C_Lexique_easyBindings_5F_lexique::kToken_no),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_all, 3, C_Lexique_easyBindings_5F_lexique::kToken_all),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_one, 3, C_Lexique_easyBindings_5F_lexique::kToken_one),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_yes, 3, C_Lexique_easyBindings_5F_lexique::kToken_yes),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_enum, 4, C_Lexique_easyBindings_5F_lexique::kToken_enum),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_func, 4, C_Lexique_easyBindings_5F_lexique::kToken_func),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_none, 4, C_Lexique_easyBindings_5F_lexique::kToken_none),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_root, 4, C_Lexique_easyBindings_5F_lexique::kToken_root),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_self, 4, C_Lexique_easyBindings_5F_lexique::kToken_self),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_view, 4, C_Lexique_easyBindings_5F_lexique::kToken_view),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_class, 5, C_Lexique_easyBindings_5F_lexique::kToken_class),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_prefs, 5, C_Lexique_easyBindings_5F_lexique::kToken_prefs),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_proxy, 5, C_Lexique_easyBindings_5F_lexique::kToken_proxy),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_space, 5, C_Lexique_easyBindings_5F_lexique::kToken_space),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_super, 5, C_Lexique_easyBindings_5F_lexique::kToken_super),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_toOne, 5, C_Lexique_easyBindings_5F_lexique::kToken_toOne),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_action, 6, C_Lexique_easyBindings_5F_lexique::kToken_action),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_column, 6, C_Lexique_easyBindings_5F_lexique::kToken_column),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_entity, 6, C_Lexique_easyBindings_5F_lexique::kToken_entity),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_extern, 6, C_Lexique_easyBindings_5F_lexique::kToken_extern),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_hSplit, 6, C_Lexique_easyBindings_5F_lexique::kToken_hSplit),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_hStack, 6, C_Lexique_easyBindings_5F_lexique::kToken_hStack),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_linker, 6, C_Lexique_easyBindings_5F_lexique::kToken_linker),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_outlet, 6, C_Lexique_easyBindings_5F_lexique::kToken_outlet),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_struct, 6, C_Lexique_easyBindings_5F_lexique::kToken_struct),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_toMany, 6, C_Lexique_easyBindings_5F_lexique::kToken_toMany),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_vSplit, 6, C_Lexique_easyBindings_5F_lexique::kToken_vSplit),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_vStack, 6, C_Lexique_easyBindings_5F_lexique::kToken_vStack),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_binding, 7, C_Lexique_easyBindings_5F_lexique::kToken_binding),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_default, 7, C_Lexique_easyBindings_5F_lexique::kToken_default),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_graphic, 7, C_Lexique_easyBindings_5F_lexique::kToken_graphic),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_include, 7, C_Lexique_easyBindings_5F_lexique::kToken_include),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_inverse, 7, C_Lexique_easyBindings_5F_lexique::kToken_inverse),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_mainxib, 7, C_Lexique_easyBindings_5F_lexique::kToken_mainxib),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_sortkey, 7, C_Lexique_easyBindings_5F_lexique::kToken_sortkey),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_version, 7, C_Lexique_easyBindings_5F_lexique::kToken_version),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_abstract, 8, C_Lexique_easyBindings_5F_lexique::kToken_abstract),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_calledBy, 8, C_Lexique_easyBindings_5F_lexique::kToken_calledBy),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_computed, 8, C_Lexique_easyBindings_5F_lexique::kToken_computed),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_graphviz, 8, C_Lexique_easyBindings_5F_lexique::kToken_graphviz),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_menuItem, 8, C_Lexique_easyBindings_5F_lexique::kToken_menuItem),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_override, 8, C_Lexique_easyBindings_5F_lexique::kToken_override),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_property, 8, C_Lexique_easyBindings_5F_lexique::kToken_property),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_separator, 9, C_Lexique_easyBindings_5F_lexique::kToken_separator),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_signature, 9, C_Lexique_easyBindings_5F_lexique::kToken_signature),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_stackView, 9, C_Lexique_easyBindings_5F_lexique::kToken_stackView),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_transient, 9, C_Lexique_easyBindings_5F_lexique::kToken_transient),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_autolayout, 10, C_Lexique_easyBindings_5F_lexique::kToken_autolayout),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_externFunc, 10, C_Lexique_easyBindings_5F_lexique::kToken_externFunc),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_dependsFrom, 11, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_toolbarItem, 11, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_configurator, 12, C_Lexique_easyBindings_5F_lexique::kToken_configurator),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_stackViewRef, 12, C_Lexique_easyBindings_5F_lexique::kToken_stackViewRef),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_xcodeproject, 12, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_classForSwift, 13, C_Lexique_easyBindings_5F_lexique::kToken_classForSwift),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_editableColumn, 14, C_Lexique_easyBindings_5F_lexique::kToken_editableColumn),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_externDelegate, 14, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_arrayController, 15, C_Lexique_easyBindings_5F_lexique::kToken_arrayController),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_handlingOpposite, 16, C_Lexique_easyBindings_5F_lexique::kToken_handlingOpposite),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_autoLayoutDocument, 18, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_selectionController, 19, C_Lexique_easyBindings_5F_lexique::kToken_selectionController),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_tableViewController, 19, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_versionShouldChange, 19, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange)
} ;

int16_t C_Lexique_easyBindings_5F_lexique::search_into_lowerCaseKeyWordList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_easyBindings_5F_lexique_lowerCaseKeyWordList, ktable_size_easyBindings_5F_lexique_lowerCaseKeyWordList) ;
}

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'reservedBindingNameKeyWordList'      
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_easyBindings_5F_lexique_reservedBindingNameKeyWordList = 5 ;

static const C_unicode_lexique_table_entry ktable_for_easyBindings_5F_lexique_reservedBindingNameKeyWordList [ktable_size_easyBindings_5F_lexique_reservedBindingNameKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_run, 3, C_Lexique_easyBindings_5F_lexique::kToken_run),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_hidden, 6, C_Lexique_easyBindings_5F_lexique::kToken_hidden),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_enabled, 7, C_Lexique_easyBindings_5F_lexique::kToken_enabled),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_tableValue, 10, C_Lexique_easyBindings_5F_lexique::kToken_tableValue),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_graphicController, 17, C_Lexique_easyBindings_5F_lexique::kToken_graphicController)
} ;

int16_t C_Lexique_easyBindings_5F_lexique::search_into_reservedBindingNameKeyWordList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_easyBindings_5F_lexique_reservedBindingNameKeyWordList, ktable_size_easyBindings_5F_lexique_reservedBindingNameKeyWordList) ;
}


//----------------------------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_easyBindings_5F_lexique::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_easyBindings_5F_lexique * ptr = (const cTokenFor_easyBindings_5F_lexique *) inTokenPtr ;
  C_String s ;
  if (ptr == NULL) {
    s.appendCString("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString("$$") ;
      break ;
    case kToken_identifier:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("identifier") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_Identifier:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("Identifier") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__40_attribute:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("@attribute") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_bindingName:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bindingName") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_controllerName:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("controllerName") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_literal_5F_integer:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("literal_integer") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnsigned (ptr->mLexicalAttribute_uint_33__32_value) ;
      break ;
    case kToken_literal_5F_double:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("literal_double") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendDouble (ptr->mLexicalAttribute_floatValue) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_literal_5F_string:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("literal_string") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("comment") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_abstract:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("abstract") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_action:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("action") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_all:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("all") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_arrayController:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("arrayController") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_autolayout:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("autolayout") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_autoLayoutDocument:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("autoLayoutDocument") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_binding:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("binding") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_calledBy:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("calledBy") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_class:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("class") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_classForSwift:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("classForSwift") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_column:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("column") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_computed:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("computed") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_configurator:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("configurator") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_default:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("default") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_dependsFrom:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("dependsFrom") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_enum:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("enum") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_editableColumn:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("editableColumn") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_entity:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("entity") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_extern:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("extern") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_externDelegate:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("externDelegate") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_externFunc:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("externFunc") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_func:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("func") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_graphic:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("graphic") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_graphviz:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("graphviz") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_handlingOpposite:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("handlingOpposite") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_hSplit:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("hSplit") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_hStack:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("hStack") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_include:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("include") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_inverse:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("inverse") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_linker:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("linker") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_mainxib:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("mainxib") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_menuItem:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("menuItem") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_no:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("no") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_none:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("none") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_one:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("one") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_outlet:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("outlet") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_override:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("override") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_prefs:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("prefs") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_property:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("property") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_proxy:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("proxy") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_root:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("root") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_selectionController:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("selectionController") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_self:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("self") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_separator:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("separator") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_signature:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("signature") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_sortkey:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("sortkey") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_space:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("space") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_stackView:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("stackView") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_stackViewRef:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("stackViewRef") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_struct:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("struct") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_super:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("super") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_tableViewController:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("tableViewController") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_toMany:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("toMany") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_toolbarItem:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("toolbarItem") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_toOne:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("toOne") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_transient:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("transient") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_version:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("version") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_vSplit:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("vSplit") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_vStack:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("vStack") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_versionShouldChange:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("versionShouldChange") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_view:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("view") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_xcodeproject:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("xcodeproject") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_yes:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("yes") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_enabled:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("enabled") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_graphicController:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("graphicController") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_hidden:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("hidden") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_tableValue:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("tableValue") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_run:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("run") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (":") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (",") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (";") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("[") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("]") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("{") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("}") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__28_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("(") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__29_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (")") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (".") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("|") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (">") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (">=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3D__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("==") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("^") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("-") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//----------------------------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                 
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//               INTERNAL PARSE LEXICAL TOKEN                                         
//----------------------------------------------------------------------------------------------------------------------

void C_Lexique_easyBindings_5F_lexique::internalParseLexicalToken (cTokenFor_easyBindings_5F_lexique & token) {
  bool loop = true ;
  token.mLexicalAttribute_floatValue = 0.0 ;
  token.mLexicalAttribute_tokenString.setLengthToZero () ;
  token.mLexicalAttribute_uint_33__32_value = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z'))) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_lowerCaseKeyWordList (token.mLexicalAttribute_tokenString) ;
      }
      if (token.mTokenCode == -1) {
        token.mTokenCode = kToken_identifier ;
      }
      enterToken (token) ;
    }else if (testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_Identifier ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (TO_UNICODE ('@'))) {
      if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('.'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else{
        lexicalError (gLexicalMessage_easyBindings_5F_lexique_attributeError COMMA_LINE_AND_SOURCE_FILE) ;
      }
      token.mTokenCode = kToken__40_attribute ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (TO_UNICODE ('$'))) {
      do {
        if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_reservedBindingNameKeyWordList (token.mLexicalAttribute_tokenString) ;
      }
      if (token.mTokenCode == -1) {
        token.mTokenCode = kToken_bindingName ;
      }
      enterToken (token) ;
    }else if (testForInputUTF32Char (TO_UNICODE ('#'))) {
      do {
        if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_controllerName ;
      enterToken (token) ;
    }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
      ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
      do {
        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (TO_UNICODE ('.'))) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('.')) ;
        do {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        ::scanner_routine_convertStringToDouble (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_floatValue, gLexicalMessage_easyBindings_5F_lexique_floatNumberConversionError) ;
        token.mTokenCode = kToken_literal_5F_double ;
        enterToken (token) ;
      }else{
        ::scanner_routine_convertDecimalStringIntoUInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_easyBindings_5F_lexique_decimalNumberTooLarge, gLexicalMessage_easyBindings_5F_lexique_internalError) ;
        token.mTokenCode = kToken_literal_5F_integer ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
      do {
        if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__5C_n, 2, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\n')) ;
        }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__5C_u, 2, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('u')) ;
        }else if (testForInputUTF32Char (TO_UNICODE (' ')) || testForInputUTF32Char (TO_UNICODE ('!')) || testForInputUTF32CharRange (TO_UNICODE ('#'), TO_UNICODE (65533))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
        token.mTokenCode = kToken_literal_5F_string ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_easyBindings_5F_lexique_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3E__3D_, 2, true)) {
      token.mTokenCode = kToken__3E__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3D__3D_, 2, true)) {
      token.mTokenCode = kToken__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3C__3D_, 2, true)) {
      token.mTokenCode = kToken__3C__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__21__3D_, 2, true)) {
      token.mTokenCode = kToken__21__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__7D_, 1, true)) {
      token.mTokenCode = kToken__7D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__7C_, 1, true)) {
      token.mTokenCode = kToken__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__7B_, 1, true)) {
      token.mTokenCode = kToken__7B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__5E_, 1, true)) {
      token.mTokenCode = kToken__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__5D_, 1, true)) {
      token.mTokenCode = kToken__5D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__5B_, 1, true)) {
      token.mTokenCode = kToken__5B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3E_, 1, true)) {
      token.mTokenCode = kToken__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3C_, 1, true)) {
      token.mTokenCode = kToken__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3B_, 1, true)) {
      token.mTokenCode = kToken__3B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3A_, 1, true)) {
      token.mTokenCode = kToken__3A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__2E_, 1, true)) {
      token.mTokenCode = kToken__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__2D_, 1, true)) {
      token.mTokenCode = kToken__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__2C_, 1, true)) {
      token.mTokenCode = kToken__2C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__29_, 1, true)) {
      token.mTokenCode = kToken__29_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__28_, 1, true)) {
      token.mTokenCode = kToken__28_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__26_, 1, true)) {
      token.mTokenCode = kToken__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__21_, 1, true)) {
      token.mTokenCode = kToken__21_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__2F__2F_, 2, true)) {
      do {
        if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      enterDroppedTerminal (kToken_comment) ;
    }else if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE (' '))) {
    }else if (testForInputUTF32Char (TO_UNICODE ('\0'))) { // End of source text ? 
      token.mTokenCode = kToken_ ; // Empty string code
    }else{ // Unknown input character
      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
  }catch (const C_lexicalErrorException &) {
    token.mTokenCode = -1 ; // No token
    advance () ; // ... go throught unknown character
  }
}

//----------------------------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//----------------------------------------------------------------------------------------------------------------------

bool C_Lexique_easyBindings_5F_lexique::parseLexicalToken (void) {
  cTokenFor_easyBindings_5F_lexique token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    internalParseLexicalToken (token) ;
  }
  if (UNICODE_VALUE (mCurrentChar) == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//----------------------------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                
//----------------------------------------------------------------------------------------------------------------------

void C_Lexique_easyBindings_5F_lexique::enterToken (cTokenFor_easyBindings_5F_lexique & ioToken) {
  cTokenFor_easyBindings_5F_lexique * ptr = NULL ;
  macroMyNew (ptr, cTokenFor_easyBindings_5F_lexique ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  // ptr->mIsOptional = ioToken.mIsOptional ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_floatValue = ioToken.mLexicalAttribute_floatValue ;
  ptr->mLexicalAttribute_tokenString = ioToken.mLexicalAttribute_tokenString ;
  ptr->mLexicalAttribute_uint_33__32_value = ioToken.mLexicalAttribute_uint_33__32_value ;
  enterTokenFromPointer (ptr) ;
}

//----------------------------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//----------------------------------------------------------------------------------------------------------------------

double C_Lexique_easyBindings_5F_lexique::attributeValue_floatValue (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_floatValue ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_easyBindings_5F_lexique::attributeValue_tokenString (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//----------------------------------------------------------------------------------------------------------------------

uint32_t C_Lexique_easyBindings_5F_lexique::attributeValue_uint_33__32_value (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//----------------------------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//----------------------------------------------------------------------------------------------------------------------

GALGAS_ldouble C_Lexique_easyBindings_5F_lexique::synthetizedAttribute_floatValue (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_easyBindings_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_double value (ptr->mLexicalAttribute_floatValue) ;
  GALGAS_ldouble result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_easyBindings_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_easyBindings_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint C_Lexique_easyBindings_5F_lexique::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_easyBindings_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GALGAS_luint result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist C_Lexique_easyBindings_5F_lexique::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("Identifier") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("@attribute") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bindingName") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("controllerName") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literal_integer") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literal_double") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literal_string") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("abstract") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("action") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("all") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("arrayController") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("autolayout") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("autoLayoutDocument") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("binding") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("calledBy") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("class") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("classForSwift") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("column") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("computed") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("configurator") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("default") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("dependsFrom") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("enum") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("editableColumn") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("entity") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("extern") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("externDelegate") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("externFunc") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("func") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("graphic") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("graphviz") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("handlingOpposite") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("hSplit") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("hStack") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("include") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("inverse") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("linker") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("mainxib") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("menuItem") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("no") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("none") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("one") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("outlet") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("override") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("prefs") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("property") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("proxy") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("root") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("selectionController") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("self") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("separator") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("signature") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sortkey") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("space") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("stackView") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("stackViewRef") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("struct") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("super") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("tableViewController") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("toMany") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("toolbarItem") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("toOne") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("transient") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("version") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("vSplit") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("vStack") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("versionShouldChange") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("view") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("xcodeproject") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("yes") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("enabled") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("graphicController") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("hidden") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("tableValue") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("run") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (",") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (";") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("[") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("]") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("{") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("}") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("(") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (")") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (".") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("|") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("==") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("^") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("-") COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordLists_easyBindings_5F_lexique (TC_UniqueArray <C_String> & ioList) {
  ioList.appendObject ("easyBindings_lexique:delimitorsList") ;
  ioList.appendObject ("easyBindings_lexique:lowerCaseKeyWordList") ;
  ioList.appendObject ("easyBindings_lexique:reservedBindingNameKeyWordList") ;
}

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_easyBindings_5F_lexique (const C_String & inIdentifier,
                                                              bool & ioFound,
                                                              TC_UniqueArray <C_String> & ioList) {
  if (inIdentifier == "easyBindings_lexique:delimitorsList") {
    ioFound = true ;
    ioList.appendObject ("!") ;
    ioList.appendObject ("&") ;
    ioList.appendObject ("(") ;
    ioList.appendObject (")") ;
    ioList.appendObject (",") ;
    ioList.appendObject ("-") ;
    ioList.appendObject (".") ;
    ioList.appendObject (":") ;
    ioList.appendObject (";") ;
    ioList.appendObject ("<") ;
    ioList.appendObject (">") ;
    ioList.appendObject ("[") ;
    ioList.appendObject ("]") ;
    ioList.appendObject ("^") ;
    ioList.appendObject ("{") ;
    ioList.appendObject ("|") ;
    ioList.appendObject ("}") ;
    ioList.appendObject ("!=") ;
    ioList.appendObject ("<=") ;
    ioList.appendObject ("==") ;
    ioList.appendObject (">=") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "easyBindings_lexique:lowerCaseKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("no") ;
    ioList.appendObject ("all") ;
    ioList.appendObject ("one") ;
    ioList.appendObject ("yes") ;
    ioList.appendObject ("enum") ;
    ioList.appendObject ("func") ;
    ioList.appendObject ("none") ;
    ioList.appendObject ("root") ;
    ioList.appendObject ("self") ;
    ioList.appendObject ("view") ;
    ioList.appendObject ("class") ;
    ioList.appendObject ("prefs") ;
    ioList.appendObject ("proxy") ;
    ioList.appendObject ("space") ;
    ioList.appendObject ("super") ;
    ioList.appendObject ("toOne") ;
    ioList.appendObject ("action") ;
    ioList.appendObject ("column") ;
    ioList.appendObject ("entity") ;
    ioList.appendObject ("extern") ;
    ioList.appendObject ("hSplit") ;
    ioList.appendObject ("hStack") ;
    ioList.appendObject ("linker") ;
    ioList.appendObject ("outlet") ;
    ioList.appendObject ("struct") ;
    ioList.appendObject ("toMany") ;
    ioList.appendObject ("vSplit") ;
    ioList.appendObject ("vStack") ;
    ioList.appendObject ("binding") ;
    ioList.appendObject ("default") ;
    ioList.appendObject ("graphic") ;
    ioList.appendObject ("include") ;
    ioList.appendObject ("inverse") ;
    ioList.appendObject ("mainxib") ;
    ioList.appendObject ("sortkey") ;
    ioList.appendObject ("version") ;
    ioList.appendObject ("abstract") ;
    ioList.appendObject ("calledBy") ;
    ioList.appendObject ("computed") ;
    ioList.appendObject ("graphviz") ;
    ioList.appendObject ("menuItem") ;
    ioList.appendObject ("override") ;
    ioList.appendObject ("property") ;
    ioList.appendObject ("separator") ;
    ioList.appendObject ("signature") ;
    ioList.appendObject ("stackView") ;
    ioList.appendObject ("transient") ;
    ioList.appendObject ("autolayout") ;
    ioList.appendObject ("externFunc") ;
    ioList.appendObject ("dependsFrom") ;
    ioList.appendObject ("toolbarItem") ;
    ioList.appendObject ("configurator") ;
    ioList.appendObject ("stackViewRef") ;
    ioList.appendObject ("xcodeproject") ;
    ioList.appendObject ("classForSwift") ;
    ioList.appendObject ("editableColumn") ;
    ioList.appendObject ("externDelegate") ;
    ioList.appendObject ("arrayController") ;
    ioList.appendObject ("handlingOpposite") ;
    ioList.appendObject ("autoLayoutDocument") ;
    ioList.appendObject ("selectionController") ;
    ioList.appendObject ("tableViewController") ;
    ioList.appendObject ("versionShouldChange") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "easyBindings_lexique:reservedBindingNameKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("run") ;
    ioList.appendObject ("hidden") ;
    ioList.appendObject ("enabled") ;
    ioList.appendObject ("tableValue") ;
    ioList.appendObject ("graphicController") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static cLexiqueIntrospection lexiqueIntrospection_easyBindings_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_easyBindings_5F_lexique, getKeywordsForIdentifier_easyBindings_5F_lexique) ;

//----------------------------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//----------------------------------------------------------------------------------------------------------------------

uint32_t C_Lexique_easyBindings_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [99] = {0,
    2 /* easyBindings_lexique_1_identifier */,
    3 /* easyBindings_lexique_1_Identifier */,
    4 /* easyBindings_lexique_1__40_attribute */,
    5 /* easyBindings_lexique_1_bindingName */,
    7 /* easyBindings_lexique_1_controllerName */,
    8 /* easyBindings_lexique_1_literal_5F_integer */,
    9 /* easyBindings_lexique_1_literal_5F_double */,
    10 /* easyBindings_lexique_1_literal_5F_string */,
    12 /* easyBindings_lexique_1_comment */,
    1 /* easyBindings_lexique_1_abstract */,
    1 /* easyBindings_lexique_1_action */,
    1 /* easyBindings_lexique_1_all */,
    1 /* easyBindings_lexique_1_arrayController */,
    1 /* easyBindings_lexique_1_autolayout */,
    1 /* easyBindings_lexique_1_autoLayoutDocument */,
    1 /* easyBindings_lexique_1_binding */,
    1 /* easyBindings_lexique_1_calledBy */,
    1 /* easyBindings_lexique_1_class */,
    1 /* easyBindings_lexique_1_classForSwift */,
    1 /* easyBindings_lexique_1_column */,
    1 /* easyBindings_lexique_1_computed */,
    1 /* easyBindings_lexique_1_configurator */,
    1 /* easyBindings_lexique_1_default */,
    1 /* easyBindings_lexique_1_dependsFrom */,
    1 /* easyBindings_lexique_1_enum */,
    1 /* easyBindings_lexique_1_editableColumn */,
    1 /* easyBindings_lexique_1_entity */,
    1 /* easyBindings_lexique_1_extern */,
    1 /* easyBindings_lexique_1_externDelegate */,
    1 /* easyBindings_lexique_1_externFunc */,
    1 /* easyBindings_lexique_1_func */,
    1 /* easyBindings_lexique_1_graphic */,
    1 /* easyBindings_lexique_1_graphviz */,
    1 /* easyBindings_lexique_1_handlingOpposite */,
    1 /* easyBindings_lexique_1_hSplit */,
    1 /* easyBindings_lexique_1_hStack */,
    1 /* easyBindings_lexique_1_include */,
    1 /* easyBindings_lexique_1_inverse */,
    1 /* easyBindings_lexique_1_linker */,
    1 /* easyBindings_lexique_1_mainxib */,
    1 /* easyBindings_lexique_1_menuItem */,
    1 /* easyBindings_lexique_1_no */,
    1 /* easyBindings_lexique_1_none */,
    1 /* easyBindings_lexique_1_one */,
    1 /* easyBindings_lexique_1_outlet */,
    1 /* easyBindings_lexique_1_override */,
    1 /* easyBindings_lexique_1_prefs */,
    1 /* easyBindings_lexique_1_property */,
    1 /* easyBindings_lexique_1_proxy */,
    1 /* easyBindings_lexique_1_root */,
    1 /* easyBindings_lexique_1_selectionController */,
    1 /* easyBindings_lexique_1_self */,
    1 /* easyBindings_lexique_1_separator */,
    1 /* easyBindings_lexique_1_signature */,
    1 /* easyBindings_lexique_1_sortkey */,
    1 /* easyBindings_lexique_1_space */,
    1 /* easyBindings_lexique_1_stackView */,
    1 /* easyBindings_lexique_1_stackViewRef */,
    1 /* easyBindings_lexique_1_struct */,
    1 /* easyBindings_lexique_1_super */,
    1 /* easyBindings_lexique_1_tableViewController */,
    1 /* easyBindings_lexique_1_toMany */,
    1 /* easyBindings_lexique_1_toolbarItem */,
    1 /* easyBindings_lexique_1_toOne */,
    1 /* easyBindings_lexique_1_transient */,
    1 /* easyBindings_lexique_1_version */,
    1 /* easyBindings_lexique_1_vSplit */,
    1 /* easyBindings_lexique_1_vStack */,
    1 /* easyBindings_lexique_1_versionShouldChange */,
    1 /* easyBindings_lexique_1_view */,
    1 /* easyBindings_lexique_1_xcodeproject */,
    1 /* easyBindings_lexique_1_yes */,
    6 /* easyBindings_lexique_1_enabled */,
    6 /* easyBindings_lexique_1_graphicController */,
    6 /* easyBindings_lexique_1_hidden */,
    6 /* easyBindings_lexique_1_tableValue */,
    6 /* easyBindings_lexique_1_run */,
    11 /* easyBindings_lexique_1__3A_ */,
    11 /* easyBindings_lexique_1__2C_ */,
    11 /* easyBindings_lexique_1__3B_ */,
    11 /* easyBindings_lexique_1__21_ */,
    11 /* easyBindings_lexique_1__5B_ */,
    11 /* easyBindings_lexique_1__5D_ */,
    11 /* easyBindings_lexique_1__7B_ */,
    11 /* easyBindings_lexique_1__7D_ */,
    11 /* easyBindings_lexique_1__28_ */,
    11 /* easyBindings_lexique_1__29_ */,
    11 /* easyBindings_lexique_1__2E_ */,
    11 /* easyBindings_lexique_1__7C_ */,
    11 /* easyBindings_lexique_1__26_ */,
    11 /* easyBindings_lexique_1__3C_ */,
    11 /* easyBindings_lexique_1__3E_ */,
    11 /* easyBindings_lexique_1__3C__3D_ */,
    11 /* easyBindings_lexique_1__3E__3D_ */,
    11 /* easyBindings_lexique_1__21__3D_ */,
    11 /* easyBindings_lexique_1__3D__3D_ */,
    11 /* easyBindings_lexique_1__5E_ */,
    11 /* easyBindings_lexique_1__2D_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//----------------------------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_easyBindings_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  C_String result ;
  if (inStyleIndex < 13) {
    static const char * kStyleArray [13] = {
      "",
      "keywordsStyle",
      "idfStyle",
      "IdfStyle",
      "attributeStyle",
      "bindingNameStyle",
      "reservedBindingNameStyle",
      "controllerNameStyle",
      "integerStyle",
      "floatStyle",
      "stringStyle",
      "delimitersStyle",
      "commentStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@declarationListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_declarationListAST : public cCollectionElement {
  public: GALGAS_declarationListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_declarationListAST (const GALGAS_abstractDeclarationAST & in_mPropertyDeclaration
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_declarationListAST (const GALGAS_declarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_declarationListAST::cCollectionElement_declarationListAST (const GALGAS_abstractDeclarationAST & in_mPropertyDeclaration
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyDeclaration) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_declarationListAST::cCollectionElement_declarationListAST (const GALGAS_declarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyDeclaration) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_declarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_declarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_declarationListAST (mObject.mProperty_mPropertyDeclaration COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_declarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyDeclaration" ":" ;
  mObject.mProperty_mPropertyDeclaration.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_declarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_declarationListAST * operand = (cCollectionElement_declarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_declarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationListAST::GALGAS_declarationListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationListAST::GALGAS_declarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationListAST GALGAS_declarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_declarationListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationListAST GALGAS_declarationListAST::constructor_listWithValue (const GALGAS_abstractDeclarationAST & inOperand0
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_declarationListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_declarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_declarationListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_abstractDeclarationAST & in_mPropertyDeclaration
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_declarationListAST (in_mPropertyDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::addAssign_operation (const GALGAS_abstractDeclarationAST & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_declarationListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::setter_append (GALGAS_declarationListAST_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_declarationListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::setter_insertAtIndex (const GALGAS_abstractDeclarationAST inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_declarationListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::setter_removeAtIndex (GALGAS_abstractDeclarationAST & outOperand0,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
        outOperand0 = p->mObject.mProperty_mPropertyDeclaration ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::setter_popFirst (GALGAS_abstractDeclarationAST & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyDeclaration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::setter_popLast (GALGAS_abstractDeclarationAST & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyDeclaration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::method_first (GALGAS_abstractDeclarationAST & outOperand0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyDeclaration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::method_last (GALGAS_abstractDeclarationAST & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyDeclaration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationListAST GALGAS_declarationListAST::add_operation (const GALGAS_declarationListAST & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_declarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationListAST GALGAS_declarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_declarationListAST result = GALGAS_declarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationListAST GALGAS_declarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_declarationListAST result = GALGAS_declarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationListAST GALGAS_declarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_declarationListAST result = GALGAS_declarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::plusAssign_operation (const GALGAS_declarationListAST inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::setter_setMPropertyDeclarationAtIndex (GALGAS_abstractDeclarationAST inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyDeclaration = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST GALGAS_declarationListAST::getter_mPropertyDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  GALGAS_abstractDeclarationAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    result = p->mObject.mProperty_mPropertyDeclaration ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_declarationListAST::cEnumerator_declarationListAST (const GALGAS_declarationListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationListAST_2D_element cEnumerator_declarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_declarationListAST * p = (const cCollectionElement_declarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST cEnumerator_declarationListAST::current_mPropertyDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_declarationListAST * p = (const cCollectionElement_declarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
  return p->mObject.mProperty_mPropertyDeclaration ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@declarationListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declarationListAST ("declarationListAST",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationListAST GALGAS_declarationListAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_declarationListAST result ;
  const GALGAS_declarationListAST * p = (const GALGAS_declarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@outletClassBindingSpecificationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_outletClassBindingSpecificationList : public cCollectionElement {
  public: GALGAS_outletClassBindingSpecificationList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_outletClassBindingSpecificationList (const GALGAS_lstring & in_mOutletClassName,
                                                                  const GALGAS_lstring & in_mBindingName,
                                                                  const GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                  const GALGAS_controllerBindingOptionList & in_mBindingOptionList
                                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_outletClassBindingSpecificationList (const GALGAS_outletClassBindingSpecificationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_outletClassBindingSpecificationList::cCollectionElement_outletClassBindingSpecificationList (const GALGAS_lstring & in_mOutletClassName,
                                                                                                                const GALGAS_lstring & in_mBindingName,
                                                                                                                const GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                                                                const GALGAS_controllerBindingOptionList & in_mBindingOptionList
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletClassName, in_mBindingName, in_mOutletClassBindingSpecificationModelList, in_mBindingOptionList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_outletClassBindingSpecificationList::cCollectionElement_outletClassBindingSpecificationList (const GALGAS_outletClassBindingSpecificationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletClassName, inElement.mProperty_mBindingName, inElement.mProperty_mOutletClassBindingSpecificationModelList, inElement.mProperty_mBindingOptionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_outletClassBindingSpecificationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_outletClassBindingSpecificationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_outletClassBindingSpecificationList (mObject.mProperty_mOutletClassName, mObject.mProperty_mBindingName, mObject.mProperty_mOutletClassBindingSpecificationModelList, mObject.mProperty_mBindingOptionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_outletClassBindingSpecificationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletClassName" ":" ;
  mObject.mProperty_mOutletClassName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBindingName" ":" ;
  mObject.mProperty_mBindingName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletClassBindingSpecificationModelList" ":" ;
  mObject.mProperty_mOutletClassBindingSpecificationModelList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBindingOptionList" ":" ;
  mObject.mProperty_mBindingOptionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_outletClassBindingSpecificationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_outletClassBindingSpecificationList * operand = (cCollectionElement_outletClassBindingSpecificationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_outletClassBindingSpecificationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationList::GALGAS_outletClassBindingSpecificationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationList::GALGAS_outletClassBindingSpecificationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationList GALGAS_outletClassBindingSpecificationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassBindingSpecificationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationList GALGAS_outletClassBindingSpecificationList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                                  const GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                                  const GALGAS_controllerBindingOptionList & inOperand3
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_outletClassBindingSpecificationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_outletClassBindingSpecificationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_lstring & in_mOutletClassName,
                                                                            const GALGAS_lstring & in_mBindingName,
                                                                            const GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                            const GALGAS_controllerBindingOptionList & in_mBindingOptionList
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_outletClassBindingSpecificationList * p = NULL ;
  macroMyNew (p, cCollectionElement_outletClassBindingSpecificationList (in_mOutletClassName,
                                                                         in_mBindingName,
                                                                         in_mOutletClassBindingSpecificationModelList,
                                                                         in_mBindingOptionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_lstring & inOperand1,
                                                                      const GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                                      const GALGAS_controllerBindingOptionList & inOperand3
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_outletClassBindingSpecificationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationList::setter_append (GALGAS_outletClassBindingSpecificationList_2D_element inElement,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_outletClassBindingSpecificationList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                       const GALGAS_lstring inOperand1,
                                                                       const GALGAS_outletClassBindingSpecificationModelList inOperand2,
                                                                       const GALGAS_controllerBindingOptionList inOperand3,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_outletClassBindingSpecificationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                       GALGAS_lstring & outOperand1,
                                                                       GALGAS_outletClassBindingSpecificationModelList & outOperand2,
                                                                       GALGAS_controllerBindingOptionList & outOperand3,
                                                                       const GALGAS_uint inRemoveIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
        outOperand0 = p->mObject.mProperty_mOutletClassName ;
        outOperand1 = p->mObject.mProperty_mBindingName ;
        outOperand2 = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
        outOperand3 = p->mObject.mProperty_mBindingOptionList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                  GALGAS_lstring & outOperand1,
                                                                  GALGAS_outletClassBindingSpecificationModelList & outOperand2,
                                                                  GALGAS_controllerBindingOptionList & outOperand3,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    outOperand0 = p->mObject.mProperty_mOutletClassName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
    outOperand3 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationList::setter_popLast (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 GALGAS_outletClassBindingSpecificationModelList & outOperand2,
                                                                 GALGAS_controllerBindingOptionList & outOperand3,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    outOperand0 = p->mObject.mProperty_mOutletClassName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
    outOperand3 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationList::method_first (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               GALGAS_outletClassBindingSpecificationModelList & outOperand2,
                                                               GALGAS_controllerBindingOptionList & outOperand3,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    outOperand0 = p->mObject.mProperty_mOutletClassName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
    outOperand3 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationList::method_last (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              GALGAS_outletClassBindingSpecificationModelList & outOperand2,
                                                              GALGAS_controllerBindingOptionList & outOperand3,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    outOperand0 = p->mObject.mProperty_mOutletClassName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
    outOperand3 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationList GALGAS_outletClassBindingSpecificationList::add_operation (const GALGAS_outletClassBindingSpecificationList & inOperand,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationList GALGAS_outletClassBindingSpecificationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationList result = GALGAS_outletClassBindingSpecificationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationList GALGAS_outletClassBindingSpecificationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationList result = GALGAS_outletClassBindingSpecificationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationList GALGAS_outletClassBindingSpecificationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationList result = GALGAS_outletClassBindingSpecificationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationList::plusAssign_operation (const GALGAS_outletClassBindingSpecificationList inOperand,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationList::setter_setMOutletClassNameAtIndex (GALGAS_lstring inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOutletClassName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_outletClassBindingSpecificationList::getter_mOutletClassNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    result = p->mObject.mProperty_mOutletClassName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationList::setter_setMBindingNameAtIndex (GALGAS_lstring inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBindingName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_outletClassBindingSpecificationList::getter_mBindingNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    result = p->mObject.mProperty_mBindingName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationList::setter_setMOutletClassBindingSpecificationModelListAtIndex (GALGAS_outletClassBindingSpecificationModelList inOperand,
                                                                                                             GALGAS_uint inIndex,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOutletClassBindingSpecificationModelList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationList::getter_mOutletClassBindingSpecificationModelListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                                     C_Compiler * inCompiler
                                                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  GALGAS_outletClassBindingSpecificationModelList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    result = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationList::setter_setMBindingOptionListAtIndex (GALGAS_controllerBindingOptionList inOperand,
                                                                                      GALGAS_uint inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBindingOptionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList GALGAS_outletClassBindingSpecificationList::getter_mBindingOptionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  GALGAS_controllerBindingOptionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    result = p->mObject.mProperty_mBindingOptionList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_outletClassBindingSpecificationList::cEnumerator_outletClassBindingSpecificationList (const GALGAS_outletClassBindingSpecificationList & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationList_2D_element cEnumerator_outletClassBindingSpecificationList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationList * p = (const cCollectionElement_outletClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_outletClassBindingSpecificationList::current_mOutletClassName (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationList * p = (const cCollectionElement_outletClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
  return p->mObject.mProperty_mOutletClassName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_outletClassBindingSpecificationList::current_mBindingName (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationList * p = (const cCollectionElement_outletClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
  return p->mObject.mProperty_mBindingName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList cEnumerator_outletClassBindingSpecificationList::current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationList * p = (const cCollectionElement_outletClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
  return p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList cEnumerator_outletClassBindingSpecificationList::current_mBindingOptionList (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationList * p = (const cCollectionElement_outletClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
  return p->mObject.mProperty_mBindingOptionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@outletClassBindingSpecificationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassBindingSpecificationList ("outletClassBindingSpecificationList",
                                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outletClassBindingSpecificationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outletClassBindingSpecificationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassBindingSpecificationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationList GALGAS_outletClassBindingSpecificationList::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationList result ;
  const GALGAS_outletClassBindingSpecificationList * p = (const GALGAS_outletClassBindingSpecificationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassBindingSpecificationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassBindingSpecificationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutViewClassBindingSpecificationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutViewClassBindingSpecificationList : public cCollectionElement {
  public: GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_autoLayoutViewClassBindingSpecificationList (const GALGAS_lstring & in_mOutletClassName,
                                                                          const GALGAS_lstring & in_mBindingName,
                                                                          const GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                          const GALGAS_controllerBindingOptionList & in_mBindingOptionList
                                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutViewClassBindingSpecificationList (const GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutViewClassBindingSpecificationList::cCollectionElement_autoLayoutViewClassBindingSpecificationList (const GALGAS_lstring & in_mOutletClassName,
                                                                                                                                const GALGAS_lstring & in_mBindingName,
                                                                                                                                const GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                                                                                const GALGAS_controllerBindingOptionList & in_mBindingOptionList
                                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletClassName, in_mBindingName, in_mOutletClassBindingSpecificationModelList, in_mBindingOptionList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutViewClassBindingSpecificationList::cCollectionElement_autoLayoutViewClassBindingSpecificationList (const GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletClassName, inElement.mProperty_mBindingName, inElement.mProperty_mOutletClassBindingSpecificationModelList, inElement.mProperty_mBindingOptionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutViewClassBindingSpecificationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutViewClassBindingSpecificationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_autoLayoutViewClassBindingSpecificationList (mObject.mProperty_mOutletClassName, mObject.mProperty_mBindingName, mObject.mProperty_mOutletClassBindingSpecificationModelList, mObject.mProperty_mBindingOptionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutViewClassBindingSpecificationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletClassName" ":" ;
  mObject.mProperty_mOutletClassName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBindingName" ":" ;
  mObject.mProperty_mBindingName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletClassBindingSpecificationModelList" ":" ;
  mObject.mProperty_mOutletClassBindingSpecificationModelList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBindingOptionList" ":" ;
  mObject.mProperty_mBindingOptionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_autoLayoutViewClassBindingSpecificationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * operand = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassBindingSpecificationList::GALGAS_autoLayoutViewClassBindingSpecificationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassBindingSpecificationList::GALGAS_autoLayoutViewClassBindingSpecificationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassBindingSpecificationList GALGAS_autoLayoutViewClassBindingSpecificationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutViewClassBindingSpecificationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassBindingSpecificationList GALGAS_autoLayoutViewClassBindingSpecificationList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                                                  const GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                                                  const GALGAS_controllerBindingOptionList & inOperand3
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewClassBindingSpecificationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_autoLayoutViewClassBindingSpecificationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_autoLayoutViewClassBindingSpecificationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassBindingSpecificationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                    const GALGAS_lstring & in_mOutletClassName,
                                                                                    const GALGAS_lstring & in_mBindingName,
                                                                                    const GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                                    const GALGAS_controllerBindingOptionList & in_mBindingOptionList
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = NULL ;
  macroMyNew (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList (in_mOutletClassName,
                                                                                 in_mBindingName,
                                                                                 in_mOutletClassBindingSpecificationModelList,
                                                                                 in_mBindingOptionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassBindingSpecificationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_lstring & inOperand1,
                                                                              const GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                                              const GALGAS_controllerBindingOptionList & inOperand3
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassBindingSpecificationList::setter_append (GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element inElement,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassBindingSpecificationList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                               const GALGAS_lstring inOperand1,
                                                                               const GALGAS_outletClassBindingSpecificationModelList inOperand2,
                                                                               const GALGAS_controllerBindingOptionList inOperand3,
                                                                               const GALGAS_uint inInsertionIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassBindingSpecificationList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                               GALGAS_lstring & outOperand1,
                                                                               GALGAS_outletClassBindingSpecificationModelList & outOperand2,
                                                                               GALGAS_controllerBindingOptionList & outOperand3,
                                                                               const GALGAS_uint inRemoveIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
        outOperand0 = p->mObject.mProperty_mOutletClassName ;
        outOperand1 = p->mObject.mProperty_mBindingName ;
        outOperand2 = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
        outOperand3 = p->mObject.mProperty_mBindingOptionList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassBindingSpecificationList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                          GALGAS_lstring & outOperand1,
                                                                          GALGAS_outletClassBindingSpecificationModelList & outOperand2,
                                                                          GALGAS_controllerBindingOptionList & outOperand3,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
    outOperand0 = p->mObject.mProperty_mOutletClassName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
    outOperand3 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassBindingSpecificationList::setter_popLast (GALGAS_lstring & outOperand0,
                                                                         GALGAS_lstring & outOperand1,
                                                                         GALGAS_outletClassBindingSpecificationModelList & outOperand2,
                                                                         GALGAS_controllerBindingOptionList & outOperand3,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
    outOperand0 = p->mObject.mProperty_mOutletClassName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
    outOperand3 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassBindingSpecificationList::method_first (GALGAS_lstring & outOperand0,
                                                                       GALGAS_lstring & outOperand1,
                                                                       GALGAS_outletClassBindingSpecificationModelList & outOperand2,
                                                                       GALGAS_controllerBindingOptionList & outOperand3,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
    outOperand0 = p->mObject.mProperty_mOutletClassName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
    outOperand3 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassBindingSpecificationList::method_last (GALGAS_lstring & outOperand0,
                                                                      GALGAS_lstring & outOperand1,
                                                                      GALGAS_outletClassBindingSpecificationModelList & outOperand2,
                                                                      GALGAS_controllerBindingOptionList & outOperand3,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
    outOperand0 = p->mObject.mProperty_mOutletClassName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
    outOperand3 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassBindingSpecificationList GALGAS_autoLayoutViewClassBindingSpecificationList::add_operation (const GALGAS_autoLayoutViewClassBindingSpecificationList & inOperand,
                                                                                                                      C_Compiler * /* inCompiler */
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewClassBindingSpecificationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassBindingSpecificationList GALGAS_autoLayoutViewClassBindingSpecificationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewClassBindingSpecificationList result = GALGAS_autoLayoutViewClassBindingSpecificationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassBindingSpecificationList GALGAS_autoLayoutViewClassBindingSpecificationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewClassBindingSpecificationList result = GALGAS_autoLayoutViewClassBindingSpecificationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassBindingSpecificationList GALGAS_autoLayoutViewClassBindingSpecificationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewClassBindingSpecificationList result = GALGAS_autoLayoutViewClassBindingSpecificationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassBindingSpecificationList::plusAssign_operation (const GALGAS_autoLayoutViewClassBindingSpecificationList inOperand,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassBindingSpecificationList::setter_setMOutletClassNameAtIndex (GALGAS_lstring inOperand,
                                                                                            GALGAS_uint inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOutletClassName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutViewClassBindingSpecificationList::getter_mOutletClassNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
    result = p->mObject.mProperty_mOutletClassName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassBindingSpecificationList::setter_setMBindingNameAtIndex (GALGAS_lstring inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBindingName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutViewClassBindingSpecificationList::getter_mBindingNameAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
    result = p->mObject.mProperty_mBindingName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassBindingSpecificationList::setter_setMOutletClassBindingSpecificationModelListAtIndex (GALGAS_outletClassBindingSpecificationModelList inOperand,
                                                                                                                     GALGAS_uint inIndex,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOutletClassBindingSpecificationModelList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList GALGAS_autoLayoutViewClassBindingSpecificationList::getter_mOutletClassBindingSpecificationModelListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                                             C_Compiler * inCompiler
                                                                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) attributes.ptr () ;
  GALGAS_outletClassBindingSpecificationModelList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
    result = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassBindingSpecificationList::setter_setMBindingOptionListAtIndex (GALGAS_controllerBindingOptionList inOperand,
                                                                                              GALGAS_uint inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBindingOptionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList GALGAS_autoLayoutViewClassBindingSpecificationList::getter_mBindingOptionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) attributes.ptr () ;
  GALGAS_controllerBindingOptionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
    result = p->mObject.mProperty_mBindingOptionList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutViewClassBindingSpecificationList::cEnumerator_autoLayoutViewClassBindingSpecificationList (const GALGAS_autoLayoutViewClassBindingSpecificationList & inEnumeratedObject,
                                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element cEnumerator_autoLayoutViewClassBindingSpecificationList::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (const cCollectionElement_autoLayoutViewClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autoLayoutViewClassBindingSpecificationList::current_mOutletClassName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (const cCollectionElement_autoLayoutViewClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
  return p->mObject.mProperty_mOutletClassName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autoLayoutViewClassBindingSpecificationList::current_mBindingName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (const cCollectionElement_autoLayoutViewClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
  return p->mObject.mProperty_mBindingName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList cEnumerator_autoLayoutViewClassBindingSpecificationList::current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (const cCollectionElement_autoLayoutViewClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
  return p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList cEnumerator_autoLayoutViewClassBindingSpecificationList::current_mBindingOptionList (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (const cCollectionElement_autoLayoutViewClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
  return p->mObject.mProperty_mBindingOptionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutViewClassBindingSpecificationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutViewClassBindingSpecificationList ("autoLayoutViewClassBindingSpecificationList",
                                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewClassBindingSpecificationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewClassBindingSpecificationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewClassBindingSpecificationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewClassBindingSpecificationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassBindingSpecificationList GALGAS_autoLayoutViewClassBindingSpecificationList::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewClassBindingSpecificationList result ;
  const GALGAS_autoLayoutViewClassBindingSpecificationList * p = (const GALGAS_autoLayoutViewClassBindingSpecificationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutViewClassBindingSpecificationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewClassBindingSpecificationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_astAutoLayoutViewFunctionMap::cMapElement_astAutoLayoutViewFunctionMap (const GALGAS_lstring & inKey,
                                                                                    const GALGAS_autoLayoutClassParameterList & in_mFomalParameterList
                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFomalParameterList (in_mFomalParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_astAutoLayoutViewFunctionMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFomalParameterList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_astAutoLayoutViewFunctionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_astAutoLayoutViewFunctionMap (mProperty_lkey, mProperty_mFomalParameterList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_astAutoLayoutViewFunctionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFomalParameterList" ":" ;
  mProperty_mFomalParameterList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_astAutoLayoutViewFunctionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_astAutoLayoutViewFunctionMap * operand = (cMapElement_astAutoLayoutViewFunctionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mFomalParameterList.objectCompare (operand->mProperty_mFomalParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap::GALGAS_astAutoLayoutViewFunctionMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap::GALGAS_astAutoLayoutViewFunctionMap (const GALGAS_astAutoLayoutViewFunctionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap & GALGAS_astAutoLayoutViewFunctionMap::operator = (const GALGAS_astAutoLayoutViewFunctionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap GALGAS_astAutoLayoutViewFunctionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewFunctionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap GALGAS_astAutoLayoutViewFunctionMap::constructor_mapWithMapToOverride (const GALGAS_astAutoLayoutViewFunctionMap & inMapToOverride
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewFunctionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap GALGAS_astAutoLayoutViewFunctionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutViewFunctionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                               const GALGAS_autoLayoutClassParameterList & inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_astAutoLayoutViewFunctionMap * p = NULL ;
  macroMyNew (p, cMapElement_astAutoLayoutViewFunctionMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@astAutoLayoutViewFunctionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionMap::setter_insertKey (GALGAS_lstring inKey,
                                                            GALGAS_autoLayoutClassParameterList inArgument0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_astAutoLayoutViewFunctionMap * p = NULL ;
  macroMyNew (p, cMapElement_astAutoLayoutViewFunctionMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' function is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_astAutoLayoutViewFunctionMap_searchKey = "there is no '%K' function" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionMap::method_searchKey (GALGAS_lstring inKey,
                                                            GALGAS_autoLayoutClassParameterList & outArgument0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_astAutoLayoutViewFunctionMap * p = (const cMapElement_astAutoLayoutViewFunctionMap *) performSearch (inKey,
                                                                                                                         inCompiler,
                                                                                                                         kSearchErrorMessage_astAutoLayoutViewFunctionMap_searchKey
                                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_astAutoLayoutViewFunctionMap) ;
    outArgument0 = p->mProperty_mFomalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList GALGAS_astAutoLayoutViewFunctionMap::getter_mFomalParameterListForKey (const GALGAS_string & inKey,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_astAutoLayoutViewFunctionMap * p = (const cMapElement_astAutoLayoutViewFunctionMap *) attributes ;
  GALGAS_autoLayoutClassParameterList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_astAutoLayoutViewFunctionMap) ;
    result = p->mProperty_mFomalParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionMap::setter_setMFomalParameterListForKey (GALGAS_autoLayoutClassParameterList inAttributeValue,
                                                                               GALGAS_string inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_astAutoLayoutViewFunctionMap * p = (cMapElement_astAutoLayoutViewFunctionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_astAutoLayoutViewFunctionMap) ;
    p->mProperty_mFomalParameterList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_astAutoLayoutViewFunctionMap * GALGAS_astAutoLayoutViewFunctionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                   const GALGAS_string & inKey
                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_astAutoLayoutViewFunctionMap * result = (cMapElement_astAutoLayoutViewFunctionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_astAutoLayoutViewFunctionMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_astAutoLayoutViewFunctionMap::cEnumerator_astAutoLayoutViewFunctionMap (const GALGAS_astAutoLayoutViewFunctionMap & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap_2D_element cEnumerator_astAutoLayoutViewFunctionMap::current (LOCATION_ARGS) const {
  const cMapElement_astAutoLayoutViewFunctionMap * p = (const cMapElement_astAutoLayoutViewFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_astAutoLayoutViewFunctionMap) ;
  return GALGAS_astAutoLayoutViewFunctionMap_2D_element (p->mProperty_lkey, p->mProperty_mFomalParameterList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_astAutoLayoutViewFunctionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList cEnumerator_astAutoLayoutViewFunctionMap::current_mFomalParameterList (LOCATION_ARGS) const {
  const cMapElement_astAutoLayoutViewFunctionMap * p = (const cMapElement_astAutoLayoutViewFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_astAutoLayoutViewFunctionMap) ;
  return p->mProperty_mFomalParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_astAutoLayoutViewFunctionMap::optional_searchKey (const GALGAS_string & inKey,
                                                              GALGAS_autoLayoutClassParameterList & outArgument0) const {
  const cMapElement_astAutoLayoutViewFunctionMap * p = (const cMapElement_astAutoLayoutViewFunctionMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_astAutoLayoutViewFunctionMap) ;
    outArgument0 = p->mProperty_mFomalParameterList ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@astAutoLayoutViewFunctionMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap ("astAutoLayoutViewFunctionMap",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAutoLayoutViewFunctionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAutoLayoutViewFunctionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAutoLayoutViewFunctionMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap GALGAS_astAutoLayoutViewFunctionMap::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewFunctionMap result ;
  const GALGAS_astAutoLayoutViewFunctionMap * p = (const GALGAS_astAutoLayoutViewFunctionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astAutoLayoutViewFunctionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewFunctionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@enumerationFunctionListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_enumerationFunctionListAST : public cCollectionElement {
  public: GALGAS_enumerationFunctionListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_enumerationFunctionListAST (const GALGAS_lstring & in_mEnumName,
                                                         const GALGAS_lstring & in_mFunctionName,
                                                         const GALGAS__32_lstringlist & in_mAssociationList
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_enumerationFunctionListAST (const GALGAS_enumerationFunctionListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_enumerationFunctionListAST::cCollectionElement_enumerationFunctionListAST (const GALGAS_lstring & in_mEnumName,
                                                                                              const GALGAS_lstring & in_mFunctionName,
                                                                                              const GALGAS__32_lstringlist & in_mAssociationList
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEnumName, in_mFunctionName, in_mAssociationList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_enumerationFunctionListAST::cCollectionElement_enumerationFunctionListAST (const GALGAS_enumerationFunctionListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEnumName, inElement.mProperty_mFunctionName, inElement.mProperty_mAssociationList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_enumerationFunctionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_enumerationFunctionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_enumerationFunctionListAST (mObject.mProperty_mEnumName, mObject.mProperty_mFunctionName, mObject.mProperty_mAssociationList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_enumerationFunctionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumName" ":" ;
  mObject.mProperty_mEnumName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFunctionName" ":" ;
  mObject.mProperty_mFunctionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAssociationList" ":" ;
  mObject.mProperty_mAssociationList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_enumerationFunctionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_enumerationFunctionListAST * operand = (cCollectionElement_enumerationFunctionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_enumerationFunctionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationFunctionListAST::GALGAS_enumerationFunctionListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationFunctionListAST::GALGAS_enumerationFunctionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationFunctionListAST GALGAS_enumerationFunctionListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumerationFunctionListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationFunctionListAST GALGAS_enumerationFunctionListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS__32_lstringlist & inOperand2
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_enumerationFunctionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_enumerationFunctionListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_enumerationFunctionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationFunctionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mEnumName,
                                                                   const GALGAS_lstring & in_mFunctionName,
                                                                   const GALGAS__32_lstringlist & in_mAssociationList
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationFunctionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_enumerationFunctionListAST (in_mEnumName,
                                                                in_mFunctionName,
                                                                in_mAssociationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationFunctionListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_lstring & inOperand1,
                                                             const GALGAS__32_lstringlist & inOperand2
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_enumerationFunctionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationFunctionListAST::setter_append (GALGAS_enumerationFunctionListAST_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_enumerationFunctionListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationFunctionListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                              const GALGAS_lstring inOperand1,
                                                              const GALGAS__32_lstringlist inOperand2,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_enumerationFunctionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationFunctionListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              GALGAS__32_lstringlist & outOperand2,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_enumerationFunctionListAST * p = (cCollectionElement_enumerationFunctionListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
        outOperand0 = p->mObject.mProperty_mEnumName ;
        outOperand1 = p->mObject.mProperty_mFunctionName ;
        outOperand2 = p->mObject.mProperty_mAssociationList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationFunctionListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS__32_lstringlist & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationFunctionListAST * p = (cCollectionElement_enumerationFunctionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
    outOperand0 = p->mObject.mProperty_mEnumName ;
    outOperand1 = p->mObject.mProperty_mFunctionName ;
    outOperand2 = p->mObject.mProperty_mAssociationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationFunctionListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS__32_lstringlist & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationFunctionListAST * p = (cCollectionElement_enumerationFunctionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
    outOperand0 = p->mObject.mProperty_mEnumName ;
    outOperand1 = p->mObject.mProperty_mFunctionName ;
    outOperand2 = p->mObject.mProperty_mAssociationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationFunctionListAST::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS__32_lstringlist & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationFunctionListAST * p = (cCollectionElement_enumerationFunctionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
    outOperand0 = p->mObject.mProperty_mEnumName ;
    outOperand1 = p->mObject.mProperty_mFunctionName ;
    outOperand2 = p->mObject.mProperty_mAssociationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationFunctionListAST::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS__32_lstringlist & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationFunctionListAST * p = (cCollectionElement_enumerationFunctionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
    outOperand0 = p->mObject.mProperty_mEnumName ;
    outOperand1 = p->mObject.mProperty_mFunctionName ;
    outOperand2 = p->mObject.mProperty_mAssociationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationFunctionListAST GALGAS_enumerationFunctionListAST::add_operation (const GALGAS_enumerationFunctionListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_enumerationFunctionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationFunctionListAST GALGAS_enumerationFunctionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationFunctionListAST result = GALGAS_enumerationFunctionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationFunctionListAST GALGAS_enumerationFunctionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationFunctionListAST result = GALGAS_enumerationFunctionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationFunctionListAST GALGAS_enumerationFunctionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationFunctionListAST result = GALGAS_enumerationFunctionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationFunctionListAST::plusAssign_operation (const GALGAS_enumerationFunctionListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationFunctionListAST::setter_setMEnumNameAtIndex (GALGAS_lstring inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationFunctionListAST * p = (cCollectionElement_enumerationFunctionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEnumName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumerationFunctionListAST::getter_mEnumNameAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationFunctionListAST * p = (cCollectionElement_enumerationFunctionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
    result = p->mObject.mProperty_mEnumName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationFunctionListAST::setter_setMFunctionNameAtIndex (GALGAS_lstring inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationFunctionListAST * p = (cCollectionElement_enumerationFunctionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFunctionName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumerationFunctionListAST::getter_mFunctionNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationFunctionListAST * p = (cCollectionElement_enumerationFunctionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
    result = p->mObject.mProperty_mFunctionName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationFunctionListAST::setter_setMAssociationListAtIndex (GALGAS__32_lstringlist inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationFunctionListAST * p = (cCollectionElement_enumerationFunctionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAssociationList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS_enumerationFunctionListAST::getter_mAssociationListAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationFunctionListAST * p = (cCollectionElement_enumerationFunctionListAST *) attributes.ptr () ;
  GALGAS__32_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
    result = p->mObject.mProperty_mAssociationList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_enumerationFunctionListAST::cEnumerator_enumerationFunctionListAST (const GALGAS_enumerationFunctionListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationFunctionListAST_2D_element cEnumerator_enumerationFunctionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_enumerationFunctionListAST * p = (const cCollectionElement_enumerationFunctionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_enumerationFunctionListAST::current_mEnumName (LOCATION_ARGS) const {
  const cCollectionElement_enumerationFunctionListAST * p = (const cCollectionElement_enumerationFunctionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
  return p->mObject.mProperty_mEnumName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_enumerationFunctionListAST::current_mFunctionName (LOCATION_ARGS) const {
  const cCollectionElement_enumerationFunctionListAST * p = (const cCollectionElement_enumerationFunctionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
  return p->mObject.mProperty_mFunctionName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist cEnumerator_enumerationFunctionListAST::current_mAssociationList (LOCATION_ARGS) const {
  const cCollectionElement_enumerationFunctionListAST * p = (const cCollectionElement_enumerationFunctionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
  return p->mObject.mProperty_mAssociationList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@enumerationFunctionListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationFunctionListAST ("enumerationFunctionListAST",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumerationFunctionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationFunctionListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumerationFunctionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationFunctionListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationFunctionListAST GALGAS_enumerationFunctionListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumerationFunctionListAST result ;
  const GALGAS_enumerationFunctionListAST * p = (const GALGAS_enumerationFunctionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumerationFunctionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationFunctionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_classMap::cMapElement_classMap (const GALGAS_lstring & inKey,
                                            const GALGAS_classKind & in_mClassKind,
                                            const GALGAS_propertyMap & in_mPropertyMap,
                                            const GALGAS_actionMap & in_mActionMap,
                                            const GALGAS_propertyGenerationList & in_mPropertyGenerationList
                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mClassKind (in_mClassKind),
mProperty_mPropertyMap (in_mPropertyMap),
mProperty_mActionMap (in_mActionMap),
mProperty_mPropertyGenerationList (in_mPropertyGenerationList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_classMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mClassKind.isValid () && mProperty_mPropertyMap.isValid () && mProperty_mActionMap.isValid () && mProperty_mPropertyGenerationList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_classMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_classMap (mProperty_lkey, mProperty_mClassKind, mProperty_mPropertyMap, mProperty_mActionMap, mProperty_mPropertyGenerationList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_classMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mClassKind" ":" ;
  mProperty_mClassKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyMap" ":" ;
  mProperty_mPropertyMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionMap" ":" ;
  mProperty_mActionMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyGenerationList" ":" ;
  mProperty_mPropertyGenerationList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_classMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_classMap * operand = (cMapElement_classMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassKind.objectCompare (operand->mProperty_mClassKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyMap.objectCompare (operand->mProperty_mPropertyMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionMap.objectCompare (operand->mProperty_mActionMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyGenerationList.objectCompare (operand->mProperty_mPropertyGenerationList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMap::GALGAS_classMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMap::GALGAS_classMap (const GALGAS_classMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMap & GALGAS_classMap::operator = (const GALGAS_classMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMap GALGAS_classMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_classMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMap GALGAS_classMap::constructor_mapWithMapToOverride (const GALGAS_classMap & inMapToOverride
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_classMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMap GALGAS_classMap::getter_overriddenMap (C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_classMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classMap::addAssign_operation (const GALGAS_lstring & inKey,
                                           const GALGAS_classKind & inArgument0,
                                           const GALGAS_propertyMap & inArgument1,
                                           const GALGAS_actionMap & inArgument2,
                                           const GALGAS_propertyGenerationList & inArgument3,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_classMap * p = NULL ;
  macroMyNew (p, cMapElement_classMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@classMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classMap::setter_insertKey (GALGAS_lstring inKey,
                                        GALGAS_classKind inArgument0,
                                        GALGAS_propertyMap inArgument1,
                                        GALGAS_actionMap inArgument2,
                                        GALGAS_propertyGenerationList inArgument3,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_classMap * p = NULL ;
  macroMyNew (p, cMapElement_classMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' class is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_classMap_searchKey = "there is no '%K' class" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classMap::method_searchKey (GALGAS_lstring inKey,
                                        GALGAS_classKind & outArgument0,
                                        GALGAS_propertyMap & outArgument1,
                                        GALGAS_actionMap & outArgument2,
                                        GALGAS_propertyGenerationList & outArgument3,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_classMap * p = (const cMapElement_classMap *) performSearch (inKey,
                                                                                 inCompiler,
                                                                                 kSearchErrorMessage_classMap_searchKey
                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_classMap) ;
    outArgument0 = p->mProperty_mClassKind ;
    outArgument1 = p->mProperty_mPropertyMap ;
    outArgument2 = p->mProperty_mActionMap ;
    outArgument3 = p->mProperty_mPropertyGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classKind GALGAS_classMap::getter_mClassKindForKey (const GALGAS_string & inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classMap * p = (const cMapElement_classMap *) attributes ;
  GALGAS_classKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    result = p->mProperty_mClassKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_classMap::getter_mPropertyMapForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classMap * p = (const cMapElement_classMap *) attributes ;
  GALGAS_propertyMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    result = p->mProperty_mPropertyMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionMap GALGAS_classMap::getter_mActionMapForKey (const GALGAS_string & inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classMap * p = (const cMapElement_classMap *) attributes ;
  GALGAS_actionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    result = p->mProperty_mActionMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_classMap::getter_mPropertyGenerationListForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classMap * p = (const cMapElement_classMap *) attributes ;
  GALGAS_propertyGenerationList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    result = p->mProperty_mPropertyGenerationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classMap::setter_setMClassKindForKey (GALGAS_classKind inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_classMap * p = (cMapElement_classMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    p->mProperty_mClassKind = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classMap::setter_setMPropertyMapForKey (GALGAS_propertyMap inAttributeValue,
                                                    GALGAS_string inKey,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_classMap * p = (cMapElement_classMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    p->mProperty_mPropertyMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classMap::setter_setMActionMapForKey (GALGAS_actionMap inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_classMap * p = (cMapElement_classMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    p->mProperty_mActionMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classMap::setter_setMPropertyGenerationListForKey (GALGAS_propertyGenerationList inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_classMap * p = (cMapElement_classMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    p->mProperty_mPropertyGenerationList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_classMap * GALGAS_classMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                           const GALGAS_string & inKey
                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_classMap * result = (cMapElement_classMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_classMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_classMap::cEnumerator_classMap (const GALGAS_classMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMap_2D_element cEnumerator_classMap::current (LOCATION_ARGS) const {
  const cMapElement_classMap * p = (const cMapElement_classMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMap) ;
  return GALGAS_classMap_2D_element (p->mProperty_lkey, p->mProperty_mClassKind, p->mProperty_mPropertyMap, p->mProperty_mActionMap, p->mProperty_mPropertyGenerationList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_classMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classKind cEnumerator_classMap::current_mClassKind (LOCATION_ARGS) const {
  const cMapElement_classMap * p = (const cMapElement_classMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMap) ;
  return p->mProperty_mClassKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap cEnumerator_classMap::current_mPropertyMap (LOCATION_ARGS) const {
  const cMapElement_classMap * p = (const cMapElement_classMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMap) ;
  return p->mProperty_mPropertyMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionMap cEnumerator_classMap::current_mActionMap (LOCATION_ARGS) const {
  const cMapElement_classMap * p = (const cMapElement_classMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMap) ;
  return p->mProperty_mActionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList cEnumerator_classMap::current_mPropertyGenerationList (LOCATION_ARGS) const {
  const cMapElement_classMap * p = (const cMapElement_classMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMap) ;
  return p->mProperty_mPropertyGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_classMap::optional_searchKey (const GALGAS_string & inKey,
                                          GALGAS_classKind & outArgument0,
                                          GALGAS_propertyMap & outArgument1,
                                          GALGAS_actionMap & outArgument2,
                                          GALGAS_propertyGenerationList & outArgument3) const {
  const cMapElement_classMap * p = (const cMapElement_classMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    outArgument0 = p->mProperty_mClassKind ;
    outArgument1 = p->mProperty_mPropertyMap ;
    outArgument2 = p->mProperty_mActionMap ;
    outArgument3 = p->mProperty_mPropertyGenerationList ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@classMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classMap ("classMap",
                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_classMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_classMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMap GALGAS_classMap::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_classMap result ;
  const GALGAS_classMap * p = (const GALGAS_classMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_outletClassMap::cMapElement_outletClassMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_lstring & in_mSuperClassName,
                                                        const GALGAS_bool & in_mHandlesRunAction,
                                                        const GALGAS_bool & in_mHandlesTableValueBinding,
                                                        const GALGAS_bool & in_mHandleEnabledBinding,
                                                        const GALGAS_bool & in_mHandleHiddenBinding,
                                                        const GALGAS_bool & in_mHandleGraphicControllerBinding,
                                                        const GALGAS_bool & in_mUserDefined
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mSuperClassName (in_mSuperClassName),
mProperty_mHandlesRunAction (in_mHandlesRunAction),
mProperty_mHandlesTableValueBinding (in_mHandlesTableValueBinding),
mProperty_mHandleEnabledBinding (in_mHandleEnabledBinding),
mProperty_mHandleHiddenBinding (in_mHandleHiddenBinding),
mProperty_mHandleGraphicControllerBinding (in_mHandleGraphicControllerBinding),
mProperty_mUserDefined (in_mUserDefined) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_outletClassMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSuperClassName.isValid () && mProperty_mHandlesRunAction.isValid () && mProperty_mHandlesTableValueBinding.isValid () && mProperty_mHandleEnabledBinding.isValid () && mProperty_mHandleHiddenBinding.isValid () && mProperty_mHandleGraphicControllerBinding.isValid () && mProperty_mUserDefined.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_outletClassMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_outletClassMap (mProperty_lkey, mProperty_mSuperClassName, mProperty_mHandlesRunAction, mProperty_mHandlesTableValueBinding, mProperty_mHandleEnabledBinding, mProperty_mHandleHiddenBinding, mProperty_mHandleGraphicControllerBinding, mProperty_mUserDefined COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_outletClassMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSuperClassName" ":" ;
  mProperty_mSuperClassName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHandlesRunAction" ":" ;
  mProperty_mHandlesRunAction.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHandlesTableValueBinding" ":" ;
  mProperty_mHandlesTableValueBinding.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHandleEnabledBinding" ":" ;
  mProperty_mHandleEnabledBinding.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHandleHiddenBinding" ":" ;
  mProperty_mHandleHiddenBinding.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHandleGraphicControllerBinding" ":" ;
  mProperty_mHandleGraphicControllerBinding.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mUserDefined" ":" ;
  mProperty_mUserDefined.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_outletClassMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_outletClassMap * operand = (cMapElement_outletClassMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mSuperClassName.objectCompare (operand->mProperty_mSuperClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandlesRunAction.objectCompare (operand->mProperty_mHandlesRunAction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandlesTableValueBinding.objectCompare (operand->mProperty_mHandlesTableValueBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandleEnabledBinding.objectCompare (operand->mProperty_mHandleEnabledBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandleHiddenBinding.objectCompare (operand->mProperty_mHandleHiddenBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandleGraphicControllerBinding.objectCompare (operand->mProperty_mHandleGraphicControllerBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (operand->mProperty_mUserDefined) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassMap::GALGAS_outletClassMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassMap::GALGAS_outletClassMap (const GALGAS_outletClassMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassMap & GALGAS_outletClassMap::operator = (const GALGAS_outletClassMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassMap GALGAS_outletClassMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_outletClassMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassMap GALGAS_outletClassMap::constructor_mapWithMapToOverride (const GALGAS_outletClassMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_outletClassMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassMap GALGAS_outletClassMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_lstring & inArgument0,
                                                 const GALGAS_bool & inArgument1,
                                                 const GALGAS_bool & inArgument2,
                                                 const GALGAS_bool & inArgument3,
                                                 const GALGAS_bool & inArgument4,
                                                 const GALGAS_bool & inArgument5,
                                                 const GALGAS_bool & inArgument6,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_outletClassMap * p = NULL ;
  macroMyNew (p, cMapElement_outletClassMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@outletClassMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_lstring inArgument0,
                                              GALGAS_bool inArgument1,
                                              GALGAS_bool inArgument2,
                                              GALGAS_bool inArgument3,
                                              GALGAS_bool inArgument4,
                                              GALGAS_bool inArgument5,
                                              GALGAS_bool inArgument6,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_outletClassMap * p = NULL ;
  macroMyNew (p, cMapElement_outletClassMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' outlet class is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_outletClassMap_searchKey = "there is no '%K' outlet class" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_lstring & outArgument0,
                                              GALGAS_bool & outArgument1,
                                              GALGAS_bool & outArgument2,
                                              GALGAS_bool & outArgument3,
                                              GALGAS_bool & outArgument4,
                                              GALGAS_bool & outArgument5,
                                              GALGAS_bool & outArgument6,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_outletClassMap_searchKey
                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    outArgument0 = p->mProperty_mSuperClassName ;
    outArgument1 = p->mProperty_mHandlesRunAction ;
    outArgument2 = p->mProperty_mHandlesTableValueBinding ;
    outArgument3 = p->mProperty_mHandleEnabledBinding ;
    outArgument4 = p->mProperty_mHandleHiddenBinding ;
    outArgument5 = p->mProperty_mHandleGraphicControllerBinding ;
    outArgument6 = p->mProperty_mUserDefined ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_outletClassMap::getter_mSuperClassNameForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    result = p->mProperty_mSuperClassName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassMap::getter_mHandlesRunActionForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    result = p->mProperty_mHandlesRunAction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassMap::getter_mHandlesTableValueBindingForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    result = p->mProperty_mHandlesTableValueBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassMap::getter_mHandleEnabledBindingForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    result = p->mProperty_mHandleEnabledBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassMap::getter_mHandleHiddenBindingForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    result = p->mProperty_mHandleHiddenBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassMap::getter_mHandleGraphicControllerBindingForKey (const GALGAS_string & inKey,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    result = p->mProperty_mHandleGraphicControllerBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassMap::getter_mUserDefinedForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    result = p->mProperty_mUserDefined ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassMap::setter_setMSuperClassNameForKey (GALGAS_lstring inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletClassMap * p = (cMapElement_outletClassMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    p->mProperty_mSuperClassName = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassMap::setter_setMHandlesRunActionForKey (GALGAS_bool inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletClassMap * p = (cMapElement_outletClassMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    p->mProperty_mHandlesRunAction = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassMap::setter_setMHandlesTableValueBindingForKey (GALGAS_bool inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletClassMap * p = (cMapElement_outletClassMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    p->mProperty_mHandlesTableValueBinding = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassMap::setter_setMHandleEnabledBindingForKey (GALGAS_bool inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletClassMap * p = (cMapElement_outletClassMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    p->mProperty_mHandleEnabledBinding = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassMap::setter_setMHandleHiddenBindingForKey (GALGAS_bool inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletClassMap * p = (cMapElement_outletClassMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    p->mProperty_mHandleHiddenBinding = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassMap::setter_setMHandleGraphicControllerBindingForKey (GALGAS_bool inAttributeValue,
                                                                             GALGAS_string inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletClassMap * p = (cMapElement_outletClassMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    p->mProperty_mHandleGraphicControllerBinding = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassMap::setter_setMUserDefinedForKey (GALGAS_bool inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletClassMap * p = (cMapElement_outletClassMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    p->mProperty_mUserDefined = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_outletClassMap * GALGAS_outletClassMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_outletClassMap * result = (cMapElement_outletClassMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_outletClassMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_outletClassMap::cEnumerator_outletClassMap (const GALGAS_outletClassMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassMap_2D_element cEnumerator_outletClassMap::current (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return GALGAS_outletClassMap_2D_element (p->mProperty_lkey, p->mProperty_mSuperClassName, p->mProperty_mHandlesRunAction, p->mProperty_mHandlesTableValueBinding, p->mProperty_mHandleEnabledBinding, p->mProperty_mHandleHiddenBinding, p->mProperty_mHandleGraphicControllerBinding, p->mProperty_mUserDefined) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_outletClassMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_outletClassMap::current_mSuperClassName (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return p->mProperty_mSuperClassName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_outletClassMap::current_mHandlesRunAction (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return p->mProperty_mHandlesRunAction ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_outletClassMap::current_mHandlesTableValueBinding (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return p->mProperty_mHandlesTableValueBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_outletClassMap::current_mHandleEnabledBinding (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return p->mProperty_mHandleEnabledBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_outletClassMap::current_mHandleHiddenBinding (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return p->mProperty_mHandleHiddenBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_outletClassMap::current_mHandleGraphicControllerBinding (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return p->mProperty_mHandleGraphicControllerBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_outletClassMap::current_mUserDefined (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return p->mProperty_mUserDefined ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_outletClassMap::optional_searchKey (const GALGAS_string & inKey,
                                                GALGAS_lstring & outArgument0,
                                                GALGAS_bool & outArgument1,
                                                GALGAS_bool & outArgument2,
                                                GALGAS_bool & outArgument3,
                                                GALGAS_bool & outArgument4,
                                                GALGAS_bool & outArgument5,
                                                GALGAS_bool & outArgument6) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    outArgument0 = p->mProperty_mSuperClassName ;
    outArgument1 = p->mProperty_mHandlesRunAction ;
    outArgument2 = p->mProperty_mHandlesTableValueBinding ;
    outArgument3 = p->mProperty_mHandleEnabledBinding ;
    outArgument4 = p->mProperty_mHandleHiddenBinding ;
    outArgument5 = p->mProperty_mHandleGraphicControllerBinding ;
    outArgument6 = p->mProperty_mUserDefined ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@outletClassMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassMap ("outletClassMap",
                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outletClassMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outletClassMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassMap GALGAS_outletClassMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_outletClassMap result ;
  const GALGAS_outletClassMap * p = (const GALGAS_outletClassMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_bindingSpecificationMap::cMapElement_bindingSpecificationMap (const GALGAS_lstring & inKey,
                                                                          const GALGAS_lstring & in_mOutletSuperClassName,
                                                                          const GALGAS_outletBindingSpecificationMap & in_mBindingMap
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mOutletSuperClassName (in_mOutletSuperClassName),
mProperty_mBindingMap (in_mBindingMap) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_bindingSpecificationMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletSuperClassName.isValid () && mProperty_mBindingMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_bindingSpecificationMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_bindingSpecificationMap (mProperty_lkey, mProperty_mOutletSuperClassName, mProperty_mBindingMap COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_bindingSpecificationMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletSuperClassName" ":" ;
  mProperty_mOutletSuperClassName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBindingMap" ":" ;
  mProperty_mBindingMap.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_bindingSpecificationMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_bindingSpecificationMap * operand = (cMapElement_bindingSpecificationMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mOutletSuperClassName.objectCompare (operand->mProperty_mOutletSuperClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBindingMap.objectCompare (operand->mProperty_mBindingMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bindingSpecificationMap::GALGAS_bindingSpecificationMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bindingSpecificationMap::GALGAS_bindingSpecificationMap (const GALGAS_bindingSpecificationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bindingSpecificationMap & GALGAS_bindingSpecificationMap::operator = (const GALGAS_bindingSpecificationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bindingSpecificationMap GALGAS_bindingSpecificationMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_bindingSpecificationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bindingSpecificationMap GALGAS_bindingSpecificationMap::constructor_mapWithMapToOverride (const GALGAS_bindingSpecificationMap & inMapToOverride
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_bindingSpecificationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bindingSpecificationMap GALGAS_bindingSpecificationMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_bindingSpecificationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bindingSpecificationMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                          const GALGAS_lstring & inArgument0,
                                                          const GALGAS_outletBindingSpecificationMap & inArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_bindingSpecificationMap * p = NULL ;
  macroMyNew (p, cMapElement_bindingSpecificationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@bindingSpecificationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bindingSpecificationMap::setter_insertKey (GALGAS_lstring inKey,
                                                       GALGAS_lstring inArgument0,
                                                       GALGAS_outletBindingSpecificationMap inArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_bindingSpecificationMap * p = NULL ;
  macroMyNew (p, cMapElement_bindingSpecificationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' binding is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_bindingSpecificationMap_searchKey = "there is no '%K' binding" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bindingSpecificationMap::method_searchKey (GALGAS_lstring inKey,
                                                       GALGAS_lstring & outArgument0,
                                                       GALGAS_outletBindingSpecificationMap & outArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cMapElement_bindingSpecificationMap * p = (const cMapElement_bindingSpecificationMap *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_bindingSpecificationMap_searchKey
                                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
    outArgument0 = p->mProperty_mOutletSuperClassName ;
    outArgument1 = p->mProperty_mBindingMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bindingSpecificationMap::setter_removeKey (GALGAS_lstring inKey,
                                                       GALGAS_lstring & outArgument0,
                                                       GALGAS_outletBindingSpecificationMap & outArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "there is no '%K' binding" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_bindingSpecificationMap * p = (cMapElement_bindingSpecificationMap *) attributes.ptr () ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
    outArgument0 = p->mProperty_mOutletSuperClassName ;
    outArgument1 = p->mProperty_mBindingMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_bindingSpecificationMap::getter_mOutletSuperClassNameForKey (const GALGAS_string & inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_bindingSpecificationMap * p = (const cMapElement_bindingSpecificationMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
    result = p->mProperty_mOutletSuperClassName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationMap GALGAS_bindingSpecificationMap::getter_mBindingMapForKey (const GALGAS_string & inKey,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_bindingSpecificationMap * p = (const cMapElement_bindingSpecificationMap *) attributes ;
  GALGAS_outletBindingSpecificationMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
    result = p->mProperty_mBindingMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bindingSpecificationMap::setter_setMOutletSuperClassNameForKey (GALGAS_lstring inAttributeValue,
                                                                            GALGAS_string inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_bindingSpecificationMap * p = (cMapElement_bindingSpecificationMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
    p->mProperty_mOutletSuperClassName = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bindingSpecificationMap::setter_setMBindingMapForKey (GALGAS_outletBindingSpecificationMap inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_bindingSpecificationMap * p = (cMapElement_bindingSpecificationMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
    p->mProperty_mBindingMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_bindingSpecificationMap * GALGAS_bindingSpecificationMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_bindingSpecificationMap * result = (cMapElement_bindingSpecificationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_bindingSpecificationMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_bindingSpecificationMap::cEnumerator_bindingSpecificationMap (const GALGAS_bindingSpecificationMap & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bindingSpecificationMap_2D_element cEnumerator_bindingSpecificationMap::current (LOCATION_ARGS) const {
  const cMapElement_bindingSpecificationMap * p = (const cMapElement_bindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
  return GALGAS_bindingSpecificationMap_2D_element (p->mProperty_lkey, p->mProperty_mOutletSuperClassName, p->mProperty_mBindingMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_bindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_bindingSpecificationMap::current_mOutletSuperClassName (LOCATION_ARGS) const {
  const cMapElement_bindingSpecificationMap * p = (const cMapElement_bindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
  return p->mProperty_mOutletSuperClassName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationMap cEnumerator_bindingSpecificationMap::current_mBindingMap (LOCATION_ARGS) const {
  const cMapElement_bindingSpecificationMap * p = (const cMapElement_bindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
  return p->mProperty_mBindingMap ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_bindingSpecificationMap::optional_searchKey (const GALGAS_string & inKey,
                                                         GALGAS_lstring & outArgument0,
                                                         GALGAS_outletBindingSpecificationMap & outArgument1) const {
  const cMapElement_bindingSpecificationMap * p = (const cMapElement_bindingSpecificationMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
    outArgument0 = p->mProperty_mOutletSuperClassName ;
    outArgument1 = p->mProperty_mBindingMap ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@bindingSpecificationMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bindingSpecificationMap ("bindingSpecificationMap",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bindingSpecificationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingSpecificationMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bindingSpecificationMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bindingSpecificationMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bindingSpecificationMap GALGAS_bindingSpecificationMap::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_bindingSpecificationMap result ;
  const GALGAS_bindingSpecificationMap * p = (const GALGAS_bindingSpecificationMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bindingSpecificationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingSpecificationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_autolayoutViewClassMap::cMapElement_autolayoutViewClassMap (const GALGAS_lstring & inKey,
                                                                        const GALGAS_lstring & in_mSuperClassName,
                                                                        const GALGAS_bool & in_mHandlesRunAction,
                                                                        const GALGAS_bool & in_mHandlesTableValueBinding,
                                                                        const GALGAS_bool & in_mHandleEnabledBinding,
                                                                        const GALGAS_bool & in_mHandleHiddenBinding,
                                                                        const GALGAS_bool & in_mHandleGraphicControllerBinding,
                                                                        const GALGAS_bool & in_mUserDefined,
                                                                        const GALGAS_autoLayoutClassParameterList & in_mParameterList,
                                                                        const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap
                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mSuperClassName (in_mSuperClassName),
mProperty_mHandlesRunAction (in_mHandlesRunAction),
mProperty_mHandlesTableValueBinding (in_mHandlesTableValueBinding),
mProperty_mHandleEnabledBinding (in_mHandleEnabledBinding),
mProperty_mHandleHiddenBinding (in_mHandleHiddenBinding),
mProperty_mHandleGraphicControllerBinding (in_mHandleGraphicControllerBinding),
mProperty_mUserDefined (in_mUserDefined),
mProperty_mParameterList (in_mParameterList),
mProperty_mAutoLayoutViewFunctionMap (in_mAutoLayoutViewFunctionMap) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_autolayoutViewClassMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSuperClassName.isValid () && mProperty_mHandlesRunAction.isValid () && mProperty_mHandlesTableValueBinding.isValid () && mProperty_mHandleEnabledBinding.isValid () && mProperty_mHandleHiddenBinding.isValid () && mProperty_mHandleGraphicControllerBinding.isValid () && mProperty_mUserDefined.isValid () && mProperty_mParameterList.isValid () && mProperty_mAutoLayoutViewFunctionMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_autolayoutViewClassMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_autolayoutViewClassMap (mProperty_lkey, mProperty_mSuperClassName, mProperty_mHandlesRunAction, mProperty_mHandlesTableValueBinding, mProperty_mHandleEnabledBinding, mProperty_mHandleHiddenBinding, mProperty_mHandleGraphicControllerBinding, mProperty_mUserDefined, mProperty_mParameterList, mProperty_mAutoLayoutViewFunctionMap COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_autolayoutViewClassMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSuperClassName" ":" ;
  mProperty_mSuperClassName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHandlesRunAction" ":" ;
  mProperty_mHandlesRunAction.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHandlesTableValueBinding" ":" ;
  mProperty_mHandlesTableValueBinding.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHandleEnabledBinding" ":" ;
  mProperty_mHandleEnabledBinding.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHandleHiddenBinding" ":" ;
  mProperty_mHandleHiddenBinding.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHandleGraphicControllerBinding" ":" ;
  mProperty_mHandleGraphicControllerBinding.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mUserDefined" ":" ;
  mProperty_mUserDefined.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterList" ":" ;
  mProperty_mParameterList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAutoLayoutViewFunctionMap" ":" ;
  mProperty_mAutoLayoutViewFunctionMap.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_autolayoutViewClassMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_autolayoutViewClassMap * operand = (cMapElement_autolayoutViewClassMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mSuperClassName.objectCompare (operand->mProperty_mSuperClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandlesRunAction.objectCompare (operand->mProperty_mHandlesRunAction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandlesTableValueBinding.objectCompare (operand->mProperty_mHandlesTableValueBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandleEnabledBinding.objectCompare (operand->mProperty_mHandleEnabledBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandleHiddenBinding.objectCompare (operand->mProperty_mHandleHiddenBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandleGraphicControllerBinding.objectCompare (operand->mProperty_mHandleGraphicControllerBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (operand->mProperty_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mParameterList.objectCompare (operand->mProperty_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAutoLayoutViewFunctionMap.objectCompare (operand->mProperty_mAutoLayoutViewFunctionMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autolayoutViewClassMap::GALGAS_autolayoutViewClassMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autolayoutViewClassMap::GALGAS_autolayoutViewClassMap (const GALGAS_autolayoutViewClassMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autolayoutViewClassMap & GALGAS_autolayoutViewClassMap::operator = (const GALGAS_autolayoutViewClassMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autolayoutViewClassMap GALGAS_autolayoutViewClassMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_autolayoutViewClassMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autolayoutViewClassMap GALGAS_autolayoutViewClassMap::constructor_mapWithMapToOverride (const GALGAS_autolayoutViewClassMap & inMapToOverride
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_autolayoutViewClassMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autolayoutViewClassMap GALGAS_autolayoutViewClassMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_autolayoutViewClassMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autolayoutViewClassMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                         const GALGAS_lstring & inArgument0,
                                                         const GALGAS_bool & inArgument1,
                                                         const GALGAS_bool & inArgument2,
                                                         const GALGAS_bool & inArgument3,
                                                         const GALGAS_bool & inArgument4,
                                                         const GALGAS_bool & inArgument5,
                                                         const GALGAS_bool & inArgument6,
                                                         const GALGAS_autoLayoutClassParameterList & inArgument7,
                                                         const GALGAS_astAutoLayoutViewFunctionMap & inArgument8,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_autolayoutViewClassMap * p = NULL ;
  macroMyNew (p, cMapElement_autolayoutViewClassMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@autolayoutViewClassMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autolayoutViewClassMap::setter_insertKey (GALGAS_lstring inKey,
                                                      GALGAS_lstring inArgument0,
                                                      GALGAS_bool inArgument1,
                                                      GALGAS_bool inArgument2,
                                                      GALGAS_bool inArgument3,
                                                      GALGAS_bool inArgument4,
                                                      GALGAS_bool inArgument5,
                                                      GALGAS_bool inArgument6,
                                                      GALGAS_autoLayoutClassParameterList inArgument7,
                                                      GALGAS_astAutoLayoutViewFunctionMap inArgument8,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_autolayoutViewClassMap * p = NULL ;
  macroMyNew (p, cMapElement_autolayoutViewClassMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' outlet class is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_autolayoutViewClassMap_searchKey = "there is no '%K' outlet class" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autolayoutViewClassMap::method_searchKey (GALGAS_lstring inKey,
                                                      GALGAS_lstring & outArgument0,
                                                      GALGAS_bool & outArgument1,
                                                      GALGAS_bool & outArgument2,
                                                      GALGAS_bool & outArgument3,
                                                      GALGAS_bool & outArgument4,
                                                      GALGAS_bool & outArgument5,
                                                      GALGAS_bool & outArgument6,
                                                      GALGAS_autoLayoutClassParameterList & outArgument7,
                                                      GALGAS_astAutoLayoutViewFunctionMap & outArgument8,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) performSearch (inKey,
                                                                                                             inCompiler,
                                                                                                             kSearchErrorMessage_autolayoutViewClassMap_searchKey
                                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
    outArgument7.drop () ;
    outArgument8.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    outArgument0 = p->mProperty_mSuperClassName ;
    outArgument1 = p->mProperty_mHandlesRunAction ;
    outArgument2 = p->mProperty_mHandlesTableValueBinding ;
    outArgument3 = p->mProperty_mHandleEnabledBinding ;
    outArgument4 = p->mProperty_mHandleHiddenBinding ;
    outArgument5 = p->mProperty_mHandleGraphicControllerBinding ;
    outArgument6 = p->mProperty_mUserDefined ;
    outArgument7 = p->mProperty_mParameterList ;
    outArgument8 = p->mProperty_mAutoLayoutViewFunctionMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autolayoutViewClassMap::getter_mSuperClassNameForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    result = p->mProperty_mSuperClassName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autolayoutViewClassMap::getter_mHandlesRunActionForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    result = p->mProperty_mHandlesRunAction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autolayoutViewClassMap::getter_mHandlesTableValueBindingForKey (const GALGAS_string & inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    result = p->mProperty_mHandlesTableValueBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autolayoutViewClassMap::getter_mHandleEnabledBindingForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    result = p->mProperty_mHandleEnabledBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autolayoutViewClassMap::getter_mHandleHiddenBindingForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    result = p->mProperty_mHandleHiddenBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autolayoutViewClassMap::getter_mHandleGraphicControllerBindingForKey (const GALGAS_string & inKey,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    result = p->mProperty_mHandleGraphicControllerBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autolayoutViewClassMap::getter_mUserDefinedForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    result = p->mProperty_mUserDefined ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList GALGAS_autolayoutViewClassMap::getter_mParameterListForKey (const GALGAS_string & inKey,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) attributes ;
  GALGAS_autoLayoutClassParameterList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    result = p->mProperty_mParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap GALGAS_autolayoutViewClassMap::getter_mAutoLayoutViewFunctionMapForKey (const GALGAS_string & inKey,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) attributes ;
  GALGAS_astAutoLayoutViewFunctionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    result = p->mProperty_mAutoLayoutViewFunctionMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autolayoutViewClassMap::setter_setMSuperClassNameForKey (GALGAS_lstring inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autolayoutViewClassMap * p = (cMapElement_autolayoutViewClassMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    p->mProperty_mSuperClassName = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autolayoutViewClassMap::setter_setMHandlesRunActionForKey (GALGAS_bool inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autolayoutViewClassMap * p = (cMapElement_autolayoutViewClassMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    p->mProperty_mHandlesRunAction = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autolayoutViewClassMap::setter_setMHandlesTableValueBindingForKey (GALGAS_bool inAttributeValue,
                                                                               GALGAS_string inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autolayoutViewClassMap * p = (cMapElement_autolayoutViewClassMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    p->mProperty_mHandlesTableValueBinding = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autolayoutViewClassMap::setter_setMHandleEnabledBindingForKey (GALGAS_bool inAttributeValue,
                                                                           GALGAS_string inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autolayoutViewClassMap * p = (cMapElement_autolayoutViewClassMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    p->mProperty_mHandleEnabledBinding = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autolayoutViewClassMap::setter_setMHandleHiddenBindingForKey (GALGAS_bool inAttributeValue,
                                                                          GALGAS_string inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autolayoutViewClassMap * p = (cMapElement_autolayoutViewClassMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    p->mProperty_mHandleHiddenBinding = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autolayoutViewClassMap::setter_setMHandleGraphicControllerBindingForKey (GALGAS_bool inAttributeValue,
                                                                                     GALGAS_string inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autolayoutViewClassMap * p = (cMapElement_autolayoutViewClassMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    p->mProperty_mHandleGraphicControllerBinding = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autolayoutViewClassMap::setter_setMUserDefinedForKey (GALGAS_bool inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autolayoutViewClassMap * p = (cMapElement_autolayoutViewClassMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    p->mProperty_mUserDefined = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autolayoutViewClassMap::setter_setMParameterListForKey (GALGAS_autoLayoutClassParameterList inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autolayoutViewClassMap * p = (cMapElement_autolayoutViewClassMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    p->mProperty_mParameterList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autolayoutViewClassMap::setter_setMAutoLayoutViewFunctionMapForKey (GALGAS_astAutoLayoutViewFunctionMap inAttributeValue,
                                                                                GALGAS_string inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autolayoutViewClassMap * p = (cMapElement_autolayoutViewClassMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    p->mProperty_mAutoLayoutViewFunctionMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_autolayoutViewClassMap * GALGAS_autolayoutViewClassMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                       const GALGAS_string & inKey
                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_autolayoutViewClassMap * result = (cMapElement_autolayoutViewClassMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_autolayoutViewClassMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_autolayoutViewClassMap::cEnumerator_autolayoutViewClassMap (const GALGAS_autolayoutViewClassMap & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autolayoutViewClassMap_2D_element cEnumerator_autolayoutViewClassMap::current (LOCATION_ARGS) const {
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
  return GALGAS_autolayoutViewClassMap_2D_element (p->mProperty_lkey, p->mProperty_mSuperClassName, p->mProperty_mHandlesRunAction, p->mProperty_mHandlesTableValueBinding, p->mProperty_mHandleEnabledBinding, p->mProperty_mHandleHiddenBinding, p->mProperty_mHandleGraphicControllerBinding, p->mProperty_mUserDefined, p->mProperty_mParameterList, p->mProperty_mAutoLayoutViewFunctionMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autolayoutViewClassMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autolayoutViewClassMap::current_mSuperClassName (LOCATION_ARGS) const {
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
  return p->mProperty_mSuperClassName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_autolayoutViewClassMap::current_mHandlesRunAction (LOCATION_ARGS) const {
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
  return p->mProperty_mHandlesRunAction ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_autolayoutViewClassMap::current_mHandlesTableValueBinding (LOCATION_ARGS) const {
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
  return p->mProperty_mHandlesTableValueBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_autolayoutViewClassMap::current_mHandleEnabledBinding (LOCATION_ARGS) const {
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
  return p->mProperty_mHandleEnabledBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_autolayoutViewClassMap::current_mHandleHiddenBinding (LOCATION_ARGS) const {
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
  return p->mProperty_mHandleHiddenBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_autolayoutViewClassMap::current_mHandleGraphicControllerBinding (LOCATION_ARGS) const {
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
  return p->mProperty_mHandleGraphicControllerBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_autolayoutViewClassMap::current_mUserDefined (LOCATION_ARGS) const {
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
  return p->mProperty_mUserDefined ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList cEnumerator_autolayoutViewClassMap::current_mParameterList (LOCATION_ARGS) const {
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
  return p->mProperty_mParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap cEnumerator_autolayoutViewClassMap::current_mAutoLayoutViewFunctionMap (LOCATION_ARGS) const {
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
  return p->mProperty_mAutoLayoutViewFunctionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autolayoutViewClassMap::optional_searchKey (const GALGAS_string & inKey,
                                                        GALGAS_lstring & outArgument0,
                                                        GALGAS_bool & outArgument1,
                                                        GALGAS_bool & outArgument2,
                                                        GALGAS_bool & outArgument3,
                                                        GALGAS_bool & outArgument4,
                                                        GALGAS_bool & outArgument5,
                                                        GALGAS_bool & outArgument6,
                                                        GALGAS_autoLayoutClassParameterList & outArgument7,
                                                        GALGAS_astAutoLayoutViewFunctionMap & outArgument8) const {
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    outArgument0 = p->mProperty_mSuperClassName ;
    outArgument1 = p->mProperty_mHandlesRunAction ;
    outArgument2 = p->mProperty_mHandlesTableValueBinding ;
    outArgument3 = p->mProperty_mHandleEnabledBinding ;
    outArgument4 = p->mProperty_mHandleHiddenBinding ;
    outArgument5 = p->mProperty_mHandleGraphicControllerBinding ;
    outArgument6 = p->mProperty_mUserDefined ;
    outArgument7 = p->mProperty_mParameterList ;
    outArgument8 = p->mProperty_mAutoLayoutViewFunctionMap ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
    outArgument7.drop () ;
    outArgument8.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@autolayoutViewClassMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autolayoutViewClassMap ("autolayoutViewClassMap",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autolayoutViewClassMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autolayoutViewClassMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autolayoutViewClassMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autolayoutViewClassMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autolayoutViewClassMap GALGAS_autolayoutViewClassMap::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_autolayoutViewClassMap result ;
  const GALGAS_autolayoutViewClassMap * p = (const GALGAS_autolayoutViewClassMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autolayoutViewClassMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autolayoutViewClassMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_autoLayoutBindingSpecificationMap::cMapElement_autoLayoutBindingSpecificationMap (const GALGAS_lstring & inKey,
                                                                                              const GALGAS_lstring & in_mOutletSuperClassName,
                                                                                              const GALGAS_autoLayoutViewBindingSpecificationMap & in_mBindingMap
                                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mOutletSuperClassName (in_mOutletSuperClassName),
mProperty_mBindingMap (in_mBindingMap) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_autoLayoutBindingSpecificationMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletSuperClassName.isValid () && mProperty_mBindingMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_autoLayoutBindingSpecificationMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_autoLayoutBindingSpecificationMap (mProperty_lkey, mProperty_mOutletSuperClassName, mProperty_mBindingMap COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_autoLayoutBindingSpecificationMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletSuperClassName" ":" ;
  mProperty_mOutletSuperClassName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBindingMap" ":" ;
  mProperty_mBindingMap.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_autoLayoutBindingSpecificationMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_autoLayoutBindingSpecificationMap * operand = (cMapElement_autoLayoutBindingSpecificationMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mOutletSuperClassName.objectCompare (operand->mProperty_mOutletSuperClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBindingMap.objectCompare (operand->mProperty_mBindingMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutBindingSpecificationMap::GALGAS_autoLayoutBindingSpecificationMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutBindingSpecificationMap::GALGAS_autoLayoutBindingSpecificationMap (const GALGAS_autoLayoutBindingSpecificationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutBindingSpecificationMap & GALGAS_autoLayoutBindingSpecificationMap::operator = (const GALGAS_autoLayoutBindingSpecificationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutBindingSpecificationMap GALGAS_autoLayoutBindingSpecificationMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_autoLayoutBindingSpecificationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutBindingSpecificationMap GALGAS_autoLayoutBindingSpecificationMap::constructor_mapWithMapToOverride (const GALGAS_autoLayoutBindingSpecificationMap & inMapToOverride
                                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutBindingSpecificationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutBindingSpecificationMap GALGAS_autoLayoutBindingSpecificationMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutBindingSpecificationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutBindingSpecificationMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                    const GALGAS_lstring & inArgument0,
                                                                    const GALGAS_autoLayoutViewBindingSpecificationMap & inArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_autoLayoutBindingSpecificationMap * p = NULL ;
  macroMyNew (p, cMapElement_autoLayoutBindingSpecificationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@autoLayoutBindingSpecificationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutBindingSpecificationMap::setter_insertKey (GALGAS_lstring inKey,
                                                                 GALGAS_lstring inArgument0,
                                                                 GALGAS_autoLayoutViewBindingSpecificationMap inArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_autoLayoutBindingSpecificationMap * p = NULL ;
  macroMyNew (p, cMapElement_autoLayoutBindingSpecificationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' binding is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_autoLayoutBindingSpecificationMap_searchKey = "there is no '%K' binding" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutBindingSpecificationMap::method_searchKey (GALGAS_lstring inKey,
                                                                 GALGAS_lstring & outArgument0,
                                                                 GALGAS_autoLayoutViewBindingSpecificationMap & outArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_autoLayoutBindingSpecificationMap * p = (const cMapElement_autoLayoutBindingSpecificationMap *) performSearch (inKey,
                                                                                                                                   inCompiler,
                                                                                                                                   kSearchErrorMessage_autoLayoutBindingSpecificationMap_searchKey
                                                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_autoLayoutBindingSpecificationMap) ;
    outArgument0 = p->mProperty_mOutletSuperClassName ;
    outArgument1 = p->mProperty_mBindingMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutBindingSpecificationMap::setter_removeKey (GALGAS_lstring inKey,
                                                                 GALGAS_lstring & outArgument0,
                                                                 GALGAS_autoLayoutViewBindingSpecificationMap & outArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "there is no '%K' binding" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_autoLayoutBindingSpecificationMap * p = (cMapElement_autoLayoutBindingSpecificationMap *) attributes.ptr () ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_autoLayoutBindingSpecificationMap) ;
    outArgument0 = p->mProperty_mOutletSuperClassName ;
    outArgument1 = p->mProperty_mBindingMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutBindingSpecificationMap::getter_mOutletSuperClassNameForKey (const GALGAS_string & inKey,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autoLayoutBindingSpecificationMap * p = (const cMapElement_autoLayoutBindingSpecificationMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autoLayoutBindingSpecificationMap) ;
    result = p->mProperty_mOutletSuperClassName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap GALGAS_autoLayoutBindingSpecificationMap::getter_mBindingMapForKey (const GALGAS_string & inKey,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autoLayoutBindingSpecificationMap * p = (const cMapElement_autoLayoutBindingSpecificationMap *) attributes ;
  GALGAS_autoLayoutViewBindingSpecificationMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autoLayoutBindingSpecificationMap) ;
    result = p->mProperty_mBindingMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutBindingSpecificationMap::setter_setMOutletSuperClassNameForKey (GALGAS_lstring inAttributeValue,
                                                                                      GALGAS_string inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autoLayoutBindingSpecificationMap * p = (cMapElement_autoLayoutBindingSpecificationMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autoLayoutBindingSpecificationMap) ;
    p->mProperty_mOutletSuperClassName = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutBindingSpecificationMap::setter_setMBindingMapForKey (GALGAS_autoLayoutViewBindingSpecificationMap inAttributeValue,
                                                                            GALGAS_string inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autoLayoutBindingSpecificationMap * p = (cMapElement_autoLayoutBindingSpecificationMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autoLayoutBindingSpecificationMap) ;
    p->mProperty_mBindingMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_autoLayoutBindingSpecificationMap * GALGAS_autoLayoutBindingSpecificationMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                             const GALGAS_string & inKey
                                                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_autoLayoutBindingSpecificationMap * result = (cMapElement_autoLayoutBindingSpecificationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_autoLayoutBindingSpecificationMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutBindingSpecificationMap::cEnumerator_autoLayoutBindingSpecificationMap (const GALGAS_autoLayoutBindingSpecificationMap & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutBindingSpecificationMap_2D_element cEnumerator_autoLayoutBindingSpecificationMap::current (LOCATION_ARGS) const {
  const cMapElement_autoLayoutBindingSpecificationMap * p = (const cMapElement_autoLayoutBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autoLayoutBindingSpecificationMap) ;
  return GALGAS_autoLayoutBindingSpecificationMap_2D_element (p->mProperty_lkey, p->mProperty_mOutletSuperClassName, p->mProperty_mBindingMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autoLayoutBindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autoLayoutBindingSpecificationMap::current_mOutletSuperClassName (LOCATION_ARGS) const {
  const cMapElement_autoLayoutBindingSpecificationMap * p = (const cMapElement_autoLayoutBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autoLayoutBindingSpecificationMap) ;
  return p->mProperty_mOutletSuperClassName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap cEnumerator_autoLayoutBindingSpecificationMap::current_mBindingMap (LOCATION_ARGS) const {
  const cMapElement_autoLayoutBindingSpecificationMap * p = (const cMapElement_autoLayoutBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autoLayoutBindingSpecificationMap) ;
  return p->mProperty_mBindingMap ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutBindingSpecificationMap::optional_searchKey (const GALGAS_string & inKey,
                                                                   GALGAS_lstring & outArgument0,
                                                                   GALGAS_autoLayoutViewBindingSpecificationMap & outArgument1) const {
  const cMapElement_autoLayoutBindingSpecificationMap * p = (const cMapElement_autoLayoutBindingSpecificationMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_autoLayoutBindingSpecificationMap) ;
    outArgument0 = p->mProperty_mOutletSuperClassName ;
    outArgument1 = p->mProperty_mBindingMap ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutBindingSpecificationMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap ("autoLayoutBindingSpecificationMap",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutBindingSpecificationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutBindingSpecificationMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutBindingSpecificationMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutBindingSpecificationMap GALGAS_autoLayoutBindingSpecificationMap::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutBindingSpecificationMap result ;
  const GALGAS_autoLayoutBindingSpecificationMap * p = (const GALGAS_autoLayoutBindingSpecificationMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutBindingSpecificationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutBindingSpecificationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractDeclarationAST_2D_weak::objectCompare (const GALGAS_abstractDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST_2D_weak::GALGAS_abstractDeclarationAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST_2D_weak & GALGAS_abstractDeclarationAST_2D_weak::operator = (const GALGAS_abstractDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST_2D_weak::GALGAS_abstractDeclarationAST_2D_weak (const GALGAS_abstractDeclarationAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST_2D_weak GALGAS_abstractDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST GALGAS_abstractDeclarationAST_2D_weak::bang_abstractDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractDeclarationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractDeclarationAST) ;
      result = GALGAS_abstractDeclarationAST ((cPtr_abstractDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak ("abstractDeclarationAST-weak",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST_2D_weak GALGAS_abstractDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractDeclarationAST_2D_weak result ;
  const GALGAS_abstractDeclarationAST_2D_weak * p = (const GALGAS_abstractDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//'@declarationPrecedenceGraph' graph
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationPrecedenceGraph::GALGAS_declarationPrecedenceGraph (void) :
AC_GALGAS_graph () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationPrecedenceGraph GALGAS_declarationPrecedenceGraph::constructor_emptyGraph (LOCATION_ARGS) {
  GALGAS_declarationPrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationPrecedenceGraph::setter_addNode (GALGAS_lstring inKey,
                                                        GALGAS_abstractDeclarationAST inArgument_0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GALGAS_declarationListAST::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' symbol is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}


//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationPrecedenceGraph::method_topologicalSort (GALGAS_declarationListAST & outSortedList,
                                                                GALGAS_lstringlist & outSortedKeyList,
                                                                GALGAS_declarationListAST & outUnsortedList,
                                                                GALGAS_lstringlist & outUnsortedKeyList,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_declarationListAST (sortedList) ;
  outUnsortedList = GALGAS_declarationListAST (unsortedList) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationPrecedenceGraph::method_depthFirstTopologicalSort (GALGAS_declarationListAST & outSortedList,
                                                                          GALGAS_lstringlist & outSortedKeyList,
                                                                          GALGAS_declarationListAST & outUnsortedList,
                                                                          GALGAS_lstringlist & outUnsortedKeyList,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_declarationListAST (sortedList) ;
  outUnsortedList = GALGAS_declarationListAST (unsortedList) ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationPrecedenceGraph GALGAS_declarationPrecedenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GALGAS_declarationPrecedenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationPrecedenceGraph::method_circularities (GALGAS_declarationListAST & outInfoList,
                                                              GALGAS_lstringlist & outKeyList
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationPrecedenceGraph::method_nodesWithNoSuccessor (GALGAS_declarationListAST & outInfoList,
                                                                     GALGAS_lstringlist & outKeyList
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationPrecedenceGraph::method_nodesWithNoPredecessor (GALGAS_declarationListAST & outInfoList,
                                                                       GALGAS_lstringlist & outKeyList
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationPrecedenceGraph GALGAS_declarationPrecedenceGraph::getter_subgraphFromNodes (const GALGAS_lstringlist & inStartKeyList,
                                                                                               const GALGAS_stringset & inKeysToExclude,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_declarationPrecedenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationListAST GALGAS_declarationPrecedenceGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_declarationListAST resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_declarationPrecedenceGraph::getter_accessibleNodesFrom (const GALGAS_lstringlist & inStartKeyList,
                                                                                  const GALGAS_stringset & inNodesToExclude,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  GALGAS_declarationPrecedenceGraph resultingGraph ;
  subGraph (resultingGraph,
            inStartKeyList,
            inNodesToExclude,
            inCompiler
            COMMA_THERE) ;
  if (resultingGraph.isValid ()) {
    result = resultingGraph.getter_lkeyList (THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@declarationPrecedenceGraph type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declarationPrecedenceGraph ("declarationPrecedenceGraph",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declarationPrecedenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationPrecedenceGraph ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declarationPrecedenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationPrecedenceGraph (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationPrecedenceGraph GALGAS_declarationPrecedenceGraph::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_declarationPrecedenceGraph result ;
  const GALGAS_declarationPrecedenceGraph * p = (const GALGAS_declarationPrecedenceGraph *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declarationPrecedenceGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationPrecedenceGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@externSwiftDelegateList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_externSwiftDelegateList : public cCollectionElement {
  public: GALGAS_externSwiftDelegateList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_externSwiftDelegateList (const GALGAS_lstring & in_mExternSwiftDelegateName
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_externSwiftDelegateList (const GALGAS_externSwiftDelegateList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_externSwiftDelegateList::cCollectionElement_externSwiftDelegateList (const GALGAS_lstring & in_mExternSwiftDelegateName
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExternSwiftDelegateName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_externSwiftDelegateList::cCollectionElement_externSwiftDelegateList (const GALGAS_externSwiftDelegateList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExternSwiftDelegateName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_externSwiftDelegateList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_externSwiftDelegateList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externSwiftDelegateList (mObject.mProperty_mExternSwiftDelegateName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_externSwiftDelegateList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExternSwiftDelegateName" ":" ;
  mObject.mProperty_mExternSwiftDelegateName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_externSwiftDelegateList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externSwiftDelegateList * operand = (cCollectionElement_externSwiftDelegateList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externSwiftDelegateList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList::GALGAS_externSwiftDelegateList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList::GALGAS_externSwiftDelegateList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList GALGAS_externSwiftDelegateList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externSwiftDelegateList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList GALGAS_externSwiftDelegateList::constructor_listWithValue (const GALGAS_lstring & inOperand0
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_externSwiftDelegateList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_externSwiftDelegateList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_externSwiftDelegateList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftDelegateList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mExternSwiftDelegateName
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_externSwiftDelegateList * p = NULL ;
  macroMyNew (p, cCollectionElement_externSwiftDelegateList (in_mExternSwiftDelegateName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftDelegateList::addAssign_operation (const GALGAS_lstring & inOperand0
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_externSwiftDelegateList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftDelegateList::setter_append (GALGAS_externSwiftDelegateList_2D_element inElement,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_externSwiftDelegateList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftDelegateList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_externSwiftDelegateList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftDelegateList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_externSwiftDelegateList * p = (cCollectionElement_externSwiftDelegateList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
        outOperand0 = p->mObject.mProperty_mExternSwiftDelegateName ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftDelegateList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftDelegateList * p = (cCollectionElement_externSwiftDelegateList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftDelegateName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftDelegateList::setter_popLast (GALGAS_lstring & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftDelegateList * p = (cCollectionElement_externSwiftDelegateList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftDelegateName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftDelegateList::method_first (GALGAS_lstring & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftDelegateList * p = (cCollectionElement_externSwiftDelegateList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftDelegateName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftDelegateList::method_last (GALGAS_lstring & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftDelegateList * p = (cCollectionElement_externSwiftDelegateList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftDelegateName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList GALGAS_externSwiftDelegateList::add_operation (const GALGAS_externSwiftDelegateList & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftDelegateList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList GALGAS_externSwiftDelegateList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_externSwiftDelegateList result = GALGAS_externSwiftDelegateList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList GALGAS_externSwiftDelegateList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_externSwiftDelegateList result = GALGAS_externSwiftDelegateList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList GALGAS_externSwiftDelegateList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_externSwiftDelegateList result = GALGAS_externSwiftDelegateList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftDelegateList::plusAssign_operation (const GALGAS_externSwiftDelegateList inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftDelegateList::setter_setMExternSwiftDelegateNameAtIndex (GALGAS_lstring inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_externSwiftDelegateList * p = (cCollectionElement_externSwiftDelegateList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExternSwiftDelegateName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externSwiftDelegateList::getter_mExternSwiftDelegateNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftDelegateList * p = (cCollectionElement_externSwiftDelegateList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
    result = p->mObject.mProperty_mExternSwiftDelegateName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_externSwiftDelegateList::cEnumerator_externSwiftDelegateList (const GALGAS_externSwiftDelegateList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList_2D_element cEnumerator_externSwiftDelegateList::current (LOCATION_ARGS) const {
  const cCollectionElement_externSwiftDelegateList * p = (const cCollectionElement_externSwiftDelegateList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externSwiftDelegateList::current_mExternSwiftDelegateName (LOCATION_ARGS) const {
  const cCollectionElement_externSwiftDelegateList * p = (const cCollectionElement_externSwiftDelegateList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
  return p->mObject.mProperty_mExternSwiftDelegateName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@externSwiftDelegateList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externSwiftDelegateList ("externSwiftDelegateList",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externSwiftDelegateList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externSwiftDelegateList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externSwiftDelegateList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externSwiftDelegateList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList GALGAS_externSwiftDelegateList::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externSwiftDelegateList result ;
  const GALGAS_externSwiftDelegateList * p = (const GALGAS_externSwiftDelegateList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externSwiftDelegateList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externSwiftDelegateList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@externSwiftFunctionList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_externSwiftFunctionList : public cCollectionElement {
  public: GALGAS_externSwiftFunctionList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_externSwiftFunctionList (const GALGAS_lstring & in_mExternSwiftFunctionName,
                                                      const GALGAS_lstring & in_mCallerName
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_externSwiftFunctionList (const GALGAS_externSwiftFunctionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_externSwiftFunctionList::cCollectionElement_externSwiftFunctionList (const GALGAS_lstring & in_mExternSwiftFunctionName,
                                                                                        const GALGAS_lstring & in_mCallerName
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExternSwiftFunctionName, in_mCallerName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_externSwiftFunctionList::cCollectionElement_externSwiftFunctionList (const GALGAS_externSwiftFunctionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExternSwiftFunctionName, inElement.mProperty_mCallerName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_externSwiftFunctionList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_externSwiftFunctionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externSwiftFunctionList (mObject.mProperty_mExternSwiftFunctionName, mObject.mProperty_mCallerName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_externSwiftFunctionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExternSwiftFunctionName" ":" ;
  mObject.mProperty_mExternSwiftFunctionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCallerName" ":" ;
  mObject.mProperty_mCallerName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_externSwiftFunctionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externSwiftFunctionList * operand = (cCollectionElement_externSwiftFunctionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externSwiftFunctionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftFunctionList::GALGAS_externSwiftFunctionList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftFunctionList::GALGAS_externSwiftFunctionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftFunctionList GALGAS_externSwiftFunctionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externSwiftFunctionList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftFunctionList GALGAS_externSwiftFunctionList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_externSwiftFunctionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_externSwiftFunctionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_externSwiftFunctionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftFunctionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mExternSwiftFunctionName,
                                                                const GALGAS_lstring & in_mCallerName
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_externSwiftFunctionList * p = NULL ;
  macroMyNew (p, cCollectionElement_externSwiftFunctionList (in_mExternSwiftFunctionName,
                                                             in_mCallerName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftFunctionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_lstring & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_externSwiftFunctionList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftFunctionList::setter_append (GALGAS_externSwiftFunctionList_2D_element inElement,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_externSwiftFunctionList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftFunctionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_lstring inOperand1,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_externSwiftFunctionList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftFunctionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
        outOperand0 = p->mObject.mProperty_mExternSwiftFunctionName ;
        outOperand1 = p->mObject.mProperty_mCallerName ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftFunctionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftFunctionName ;
    outOperand1 = p->mObject.mProperty_mCallerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftFunctionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftFunctionName ;
    outOperand1 = p->mObject.mProperty_mCallerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftFunctionList::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftFunctionName ;
    outOperand1 = p->mObject.mProperty_mCallerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftFunctionList::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftFunctionName ;
    outOperand1 = p->mObject.mProperty_mCallerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftFunctionList GALGAS_externSwiftFunctionList::add_operation (const GALGAS_externSwiftFunctionList & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftFunctionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftFunctionList GALGAS_externSwiftFunctionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_externSwiftFunctionList result = GALGAS_externSwiftFunctionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftFunctionList GALGAS_externSwiftFunctionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_externSwiftFunctionList result = GALGAS_externSwiftFunctionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftFunctionList GALGAS_externSwiftFunctionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_externSwiftFunctionList result = GALGAS_externSwiftFunctionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftFunctionList::plusAssign_operation (const GALGAS_externSwiftFunctionList inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftFunctionList::setter_setMExternSwiftFunctionNameAtIndex (GALGAS_lstring inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExternSwiftFunctionName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externSwiftFunctionList::getter_mExternSwiftFunctionNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
    result = p->mObject.mProperty_mExternSwiftFunctionName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftFunctionList::setter_setMCallerNameAtIndex (GALGAS_lstring inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCallerName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externSwiftFunctionList::getter_mCallerNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
    result = p->mObject.mProperty_mCallerName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_externSwiftFunctionList::cEnumerator_externSwiftFunctionList (const GALGAS_externSwiftFunctionList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftFunctionList_2D_element cEnumerator_externSwiftFunctionList::current (LOCATION_ARGS) const {
  const cCollectionElement_externSwiftFunctionList * p = (const cCollectionElement_externSwiftFunctionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externSwiftFunctionList::current_mExternSwiftFunctionName (LOCATION_ARGS) const {
  const cCollectionElement_externSwiftFunctionList * p = (const cCollectionElement_externSwiftFunctionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
  return p->mObject.mProperty_mExternSwiftFunctionName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externSwiftFunctionList::current_mCallerName (LOCATION_ARGS) const {
  const cCollectionElement_externSwiftFunctionList * p = (const cCollectionElement_externSwiftFunctionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
  return p->mObject.mProperty_mCallerName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@externSwiftFunctionList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externSwiftFunctionList ("externSwiftFunctionList",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externSwiftFunctionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externSwiftFunctionList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externSwiftFunctionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externSwiftFunctionList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftFunctionList GALGAS_externSwiftFunctionList::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externSwiftFunctionList result ;
  const GALGAS_externSwiftFunctionList * p = (const GALGAS_externSwiftFunctionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externSwiftFunctionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externSwiftFunctionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_externFunctionMap::cMapElement_externFunctionMap (const GALGAS_lstring & inKey
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_externFunctionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_externFunctionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_externFunctionMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_externFunctionMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_externFunctionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_externFunctionMap * operand = (cMapElement_externFunctionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionMap::GALGAS_externFunctionMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionMap::GALGAS_externFunctionMap (const GALGAS_externFunctionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionMap & GALGAS_externFunctionMap::operator = (const GALGAS_externFunctionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionMap GALGAS_externFunctionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_externFunctionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionMap GALGAS_externFunctionMap::constructor_mapWithMapToOverride (const GALGAS_externFunctionMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionMap GALGAS_externFunctionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_externFunctionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_externFunctionMap * p = NULL ;
  macroMyNew (p, cMapElement_externFunctionMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@externFunctionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionMap::setter_insertKey (GALGAS_lstring inKey,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_externFunctionMap * p = NULL ;
  macroMyNew (p, cMapElement_externFunctionMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' extern function is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_externFunctionMap * GALGAS_externFunctionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_externFunctionMap * result = (cMapElement_externFunctionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_externFunctionMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_externFunctionMap::cEnumerator_externFunctionMap (const GALGAS_externFunctionMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionMap_2D_element cEnumerator_externFunctionMap::current (LOCATION_ARGS) const {
  const cMapElement_externFunctionMap * p = (const cMapElement_externFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externFunctionMap) ;
  return GALGAS_externFunctionMap_2D_element (p->mProperty_lkey) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externFunctionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_externFunctionMap::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_externFunctionMap * p = (const cMapElement_externFunctionMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_externFunctionMap) ;
  }else{
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@externFunctionMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externFunctionMap ("externFunctionMap",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externFunctionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externFunctionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externFunctionMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionMap GALGAS_externFunctionMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionMap result ;
  const GALGAS_externFunctionMap * p = (const GALGAS_externFunctionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externFunctionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_transientClassDeclarationAST_2D_weak::objectCompare (const GALGAS_transientClassDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientClassDeclarationAST_2D_weak::GALGAS_transientClassDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientClassDeclarationAST_2D_weak & GALGAS_transientClassDeclarationAST_2D_weak::operator = (const GALGAS_transientClassDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientClassDeclarationAST_2D_weak::GALGAS_transientClassDeclarationAST_2D_weak (const GALGAS_transientClassDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientClassDeclarationAST_2D_weak GALGAS_transientClassDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_transientClassDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientClassDeclarationAST GALGAS_transientClassDeclarationAST_2D_weak::bang_transientClassDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_transientClassDeclarationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_transientClassDeclarationAST) ;
      result = GALGAS_transientClassDeclarationAST ((cPtr_transientClassDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@transientClassDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientClassDeclarationAST_2D_weak ("transientClassDeclarationAST-weak",
                                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientClassDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientClassDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientClassDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientClassDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientClassDeclarationAST_2D_weak GALGAS_transientClassDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_transientClassDeclarationAST_2D_weak result ;
  const GALGAS_transientClassDeclarationAST_2D_weak * p = (const GALGAS_transientClassDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientClassDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientClassDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumerationDeclarationAST_2D_weak::objectCompare (const GALGAS_enumerationDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST_2D_weak::GALGAS_enumerationDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST_2D_weak & GALGAS_enumerationDeclarationAST_2D_weak::operator = (const GALGAS_enumerationDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST_2D_weak::GALGAS_enumerationDeclarationAST_2D_weak (const GALGAS_enumerationDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST_2D_weak GALGAS_enumerationDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST_2D_weak::bang_enumerationDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationDeclarationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumerationDeclarationAST) ;
      result = GALGAS_enumerationDeclarationAST ((cPtr_enumerationDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@enumerationDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationDeclarationAST_2D_weak ("enumerationDeclarationAST-weak",
                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumerationDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumerationDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST_2D_weak GALGAS_enumerationDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST_2D_weak result ;
  const GALGAS_enumerationDeclarationAST_2D_weak * p = (const GALGAS_enumerationDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumerationDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_enumConstantMap::cMapElement_enumConstantMap (const GALGAS_lstring & inKey,
                                                          const GALGAS_uint & in_mIndex
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_enumConstantMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_enumConstantMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_enumConstantMap (mProperty_lkey, mProperty_mIndex COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_enumConstantMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mProperty_mIndex.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_enumConstantMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_enumConstantMap * operand = (cMapElement_enumConstantMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantMap::GALGAS_enumConstantMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantMap::GALGAS_enumConstantMap (const GALGAS_enumConstantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantMap & GALGAS_enumConstantMap::operator = (const GALGAS_enumConstantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantMap GALGAS_enumConstantMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_enumConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantMap GALGAS_enumConstantMap::constructor_mapWithMapToOverride (const GALGAS_enumConstantMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantMap GALGAS_enumConstantMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  const GALGAS_uint & inArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_enumConstantMap * p = NULL ;
  macroMyNew (p, cMapElement_enumConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@enumConstantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantMap::setter_insertKey (GALGAS_lstring inKey,
                                               GALGAS_uint inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_enumConstantMap * p = NULL ;
  macroMyNew (p, cMapElement_enumConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "there is already a '%K' constant" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_enumConstantMap_searchKey = "the '%K' constant is not defined" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantMap::method_searchKey (GALGAS_lstring inKey,
                                               GALGAS_uint & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_enumConstantMap * p = (const cMapElement_enumConstantMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_enumConstantMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_enumConstantMap) ;
    outArgument0 = p->mProperty_mIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_enumConstantMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_enumConstantMap * p = (const cMapElement_enumConstantMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_enumConstantMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_enumConstantMap * p = (cMapElement_enumConstantMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_enumConstantMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_enumConstantMap * GALGAS_enumConstantMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_enumConstantMap * result = (cMapElement_enumConstantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_enumConstantMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_enumConstantMap::cEnumerator_enumConstantMap (const GALGAS_enumConstantMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantMap_2D_element cEnumerator_enumConstantMap::current (LOCATION_ARGS) const {
  const cMapElement_enumConstantMap * p = (const cMapElement_enumConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_enumConstantMap) ;
  return GALGAS_enumConstantMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_enumConstantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_enumConstantMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_enumConstantMap * p = (const cMapElement_enumConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_enumConstantMap) ;
  return p->mProperty_mIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_enumConstantMap::optional_searchKey (const GALGAS_string & inKey,
                                                 GALGAS_uint & outArgument0) const {
  const cMapElement_enumConstantMap * p = (const cMapElement_enumConstantMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_enumConstantMap) ;
    outArgument0 = p->mProperty_mIndex ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@enumConstantMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantMap ("enumConstantMap",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantMap GALGAS_enumConstantMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantMap result ;
  const GALGAS_enumConstantMap * p = (const GALGAS_enumConstantMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumConstantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@enumFunAssociationSortedList' sorted list
//
//----------------------------------------------------------------------------------------------------------------------

class cSortedListElement_enumFunAssociationSortedList : public cSortedListElement {
  public: GALGAS_enumFunAssociationSortedList_2D_element mObject ;

//--- Constructor
  public: cSortedListElement_enumFunAssociationSortedList (const GALGAS_uint & in_mIndex,
                                                           const GALGAS_string & in_mAssociatedString
                                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public: virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement_enumFunAssociationSortedList::cSortedListElement_enumFunAssociationSortedList (const GALGAS_uint & in_mIndex,
                                                                                                  const GALGAS_string & in_mAssociatedString
                                                                                                  COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mIndex, in_mAssociatedString) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cSortedListElement_enumFunAssociationSortedList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement * cSortedListElement_enumFunAssociationSortedList::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_enumFunAssociationSortedList (mObject.mProperty_mIndex, mObject.mProperty_mAssociatedString COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cSortedListElement_enumFunAssociationSortedList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mObject.mProperty_mIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAssociatedString" ":" ;
  mObject.mProperty_mAssociatedString.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_enumFunAssociationSortedList::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_enumFunAssociationSortedList * operand = (cSortedListElement_enumFunAssociationSortedList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_enumFunAssociationSortedList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList::GALGAS_enumFunAssociationSortedList (void) :
AC_GALGAS_sortedlist () {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_enumFunAssociationSortedList::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_enumFunAssociationSortedList * operand = (const cSortedListElement_enumFunAssociationSortedList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_enumFunAssociationSortedList) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mIndex.objectCompare (operand->mObject.mProperty_mIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList GALGAS_enumFunAssociationSortedList::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_enumFunAssociationSortedList result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList GALGAS_enumFunAssociationSortedList::constructor_sortedListWithValue (const GALGAS_uint & inOperand0,
                                                                                                          const GALGAS_string & inOperand1
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_enumFunAssociationSortedList result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_enumFunAssociationSortedList (inOperand0, inOperand1 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumFunAssociationSortedList::addAssign_operation (const GALGAS_uint & inOperand0,
                                                               const GALGAS_string & inOperand1
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_enumFunAssociationSortedList (inOperand0, inOperand1 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumFunAssociationSortedList::plusAssign_operation (const GALGAS_enumFunAssociationSortedList inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumFunAssociationSortedList::setter_popSmallest (GALGAS_uint & outOperand0,
                                                              GALGAS_string & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_enumFunAssociationSortedList * p = (cSortedListElement_enumFunAssociationSortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_enumFunAssociationSortedList) ;
    outOperand0 = p->mObject.mProperty_mIndex ;
    outOperand1 = p->mObject.mProperty_mAssociatedString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumFunAssociationSortedList::setter_popGreatest (GALGAS_uint & outOperand0,
                                                              GALGAS_string & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_enumFunAssociationSortedList * p = (cSortedListElement_enumFunAssociationSortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_enumFunAssociationSortedList) ;
    outOperand0 = p->mObject.mProperty_mIndex ;
    outOperand1 = p->mObject.mProperty_mAssociatedString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumFunAssociationSortedList::method_smallest (GALGAS_uint & outOperand0,
                                                           GALGAS_string & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_enumFunAssociationSortedList * p = (cSortedListElement_enumFunAssociationSortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_enumFunAssociationSortedList) ;
    outOperand0 = p->mObject.mProperty_mIndex ;
    outOperand1 = p->mObject.mProperty_mAssociatedString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumFunAssociationSortedList::method_greatest (GALGAS_uint & outOperand0,
                                                           GALGAS_string & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_enumFunAssociationSortedList * p = (cSortedListElement_enumFunAssociationSortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_enumFunAssociationSortedList) ;
    outOperand0 = p->mObject.mProperty_mIndex ;
    outOperand1 = p->mObject.mProperty_mAssociatedString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_enumFunAssociationSortedList::cEnumerator_enumFunAssociationSortedList (const GALGAS_enumFunAssociationSortedList & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList_2D_element cEnumerator_enumFunAssociationSortedList::current (LOCATION_ARGS) const {
  const cSortedListElement_enumFunAssociationSortedList * p = (const cSortedListElement_enumFunAssociationSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_enumFunAssociationSortedList) ;
  return p->mObject ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_enumFunAssociationSortedList::current_mIndex (LOCATION_ARGS) const {
  const cSortedListElement_enumFunAssociationSortedList * p = (const cSortedListElement_enumFunAssociationSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_enumFunAssociationSortedList) ;
  return p->mObject.mProperty_mIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_enumFunAssociationSortedList::current_mAssociatedString (LOCATION_ARGS) const {
  const cSortedListElement_enumFunAssociationSortedList * p = (const cSortedListElement_enumFunAssociationSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_enumFunAssociationSortedList) ;
  return p->mObject.mProperty_mAssociatedString ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@enumFunAssociationSortedList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumFunAssociationSortedList ("enumFunAssociationSortedList",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumFunAssociationSortedList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumFunAssociationSortedList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumFunAssociationSortedList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumFunAssociationSortedList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList GALGAS_enumFunAssociationSortedList::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_enumFunAssociationSortedList result ;
  const GALGAS_enumFunAssociationSortedList * p = (const GALGAS_enumFunAssociationSortedList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumFunAssociationSortedList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumFunAssociationSortedList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_enumFuncMap::cMapElement_enumFuncMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_enumFunAssociationSortedList & in_mAssociationSortedList
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mAssociationSortedList (in_mAssociationSortedList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_enumFuncMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAssociationSortedList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_enumFuncMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_enumFuncMap (mProperty_lkey, mProperty_mAssociationSortedList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_enumFuncMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAssociationSortedList" ":" ;
  mProperty_mAssociationSortedList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_enumFuncMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_enumFuncMap * operand = (cMapElement_enumFuncMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mAssociationSortedList.objectCompare (operand->mProperty_mAssociationSortedList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFuncMap::GALGAS_enumFuncMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFuncMap::GALGAS_enumFuncMap (const GALGAS_enumFuncMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFuncMap & GALGAS_enumFuncMap::operator = (const GALGAS_enumFuncMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFuncMap GALGAS_enumFuncMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_enumFuncMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFuncMap GALGAS_enumFuncMap::constructor_mapWithMapToOverride (const GALGAS_enumFuncMap & inMapToOverride
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_enumFuncMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFuncMap GALGAS_enumFuncMap::getter_overriddenMap (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_enumFuncMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumFuncMap::addAssign_operation (const GALGAS_lstring & inKey,
                                              const GALGAS_enumFunAssociationSortedList & inArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_enumFuncMap * p = NULL ;
  macroMyNew (p, cMapElement_enumFuncMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@enumFuncMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumFuncMap::setter_insertKey (GALGAS_lstring inKey,
                                           GALGAS_enumFunAssociationSortedList inArgument0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_enumFuncMap * p = NULL ;
  macroMyNew (p, cMapElement_enumFuncMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "there is already a '%K' enum function" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_enumFuncMap_searchKey = "the '%K' enum function is not defined" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumFuncMap::method_searchKey (GALGAS_lstring inKey,
                                           GALGAS_enumFunAssociationSortedList & outArgument0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_enumFuncMap * p = (const cMapElement_enumFuncMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_enumFuncMap_searchKey
                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_enumFuncMap) ;
    outArgument0 = p->mProperty_mAssociationSortedList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList GALGAS_enumFuncMap::getter_mAssociationSortedListForKey (const GALGAS_string & inKey,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_enumFuncMap * p = (const cMapElement_enumFuncMap *) attributes ;
  GALGAS_enumFunAssociationSortedList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_enumFuncMap) ;
    result = p->mProperty_mAssociationSortedList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumFuncMap::setter_setMAssociationSortedListForKey (GALGAS_enumFunAssociationSortedList inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_enumFuncMap * p = (cMapElement_enumFuncMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_enumFuncMap) ;
    p->mProperty_mAssociationSortedList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_enumFuncMap * GALGAS_enumFuncMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_enumFuncMap * result = (cMapElement_enumFuncMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_enumFuncMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_enumFuncMap::cEnumerator_enumFuncMap (const GALGAS_enumFuncMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFuncMap_2D_element cEnumerator_enumFuncMap::current (LOCATION_ARGS) const {
  const cMapElement_enumFuncMap * p = (const cMapElement_enumFuncMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_enumFuncMap) ;
  return GALGAS_enumFuncMap_2D_element (p->mProperty_lkey, p->mProperty_mAssociationSortedList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_enumFuncMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList cEnumerator_enumFuncMap::current_mAssociationSortedList (LOCATION_ARGS) const {
  const cMapElement_enumFuncMap * p = (const cMapElement_enumFuncMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_enumFuncMap) ;
  return p->mProperty_mAssociationSortedList ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_enumFuncMap::optional_searchKey (const GALGAS_string & inKey,
                                             GALGAS_enumFunAssociationSortedList & outArgument0) const {
  const cMapElement_enumFuncMap * p = (const cMapElement_enumFuncMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_enumFuncMap) ;
    outArgument0 = p->mProperty_mAssociationSortedList ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@enumFuncMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumFuncMap ("enumFuncMap",
                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumFuncMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumFuncMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumFuncMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumFuncMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFuncMap GALGAS_enumFuncMap::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_enumFuncMap result ;
  const GALGAS_enumFuncMap * p = (const GALGAS_enumFuncMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumFuncMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumFuncMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @abstractFileGeneration reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractFileGeneration::objectCompare (const GALGAS_abstractFileGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFileGeneration::GALGAS_abstractFileGeneration (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFileGeneration::GALGAS_abstractFileGeneration (const cPtr_abstractFileGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractFileGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractFileGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractFileGeneration::cPtr_abstractFileGeneration (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractFileGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractFileGeneration ("abstractFileGeneration",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractFileGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractFileGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractFileGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractFileGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFileGeneration GALGAS_abstractFileGeneration::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractFileGeneration result ;
  const GALGAS_abstractFileGeneration * p = (const GALGAS_abstractFileGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractFileGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractFileGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractFileGeneration_2D_weak::objectCompare (const GALGAS_abstractFileGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFileGeneration_2D_weak::GALGAS_abstractFileGeneration_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFileGeneration_2D_weak & GALGAS_abstractFileGeneration_2D_weak::operator = (const GALGAS_abstractFileGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFileGeneration_2D_weak::GALGAS_abstractFileGeneration_2D_weak (const GALGAS_abstractFileGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFileGeneration_2D_weak GALGAS_abstractFileGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractFileGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFileGeneration GALGAS_abstractFileGeneration_2D_weak::bang_abstractFileGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractFileGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractFileGeneration) ;
      result = GALGAS_abstractFileGeneration ((cPtr_abstractFileGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractFileGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractFileGeneration_2D_weak ("abstractFileGeneration-weak",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractFileGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractFileGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractFileGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractFileGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFileGeneration_2D_weak GALGAS_abstractFileGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractFileGeneration_2D_weak result ;
  const GALGAS_abstractFileGeneration_2D_weak * p = (const GALGAS_abstractFileGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractFileGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractFileGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKind_enumType::cEnumAssociatedValues_typeKind_enumType (const GALGAS_string inAssociatedValue0,
                                                                                  const GALGAS_enumConstantMap inAssociatedValue1,
                                                                                  const GALGAS_enumFuncMap inAssociatedValue2
                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKind_enumType::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_typeKind_enumType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_enumType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_enumType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKind_entityType::cEnumAssociatedValues_typeKind_entityType (const GALGAS_string inAssociatedValue0,
                                                                                      const GALGAS_bool inAssociatedValue1
                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKind_entityType::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_typeKind_entityType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_entityType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_entityType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKind_classType::cEnumAssociatedValues_typeKind_classType (const GALGAS_string inAssociatedValue0
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKind_classType::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_typeKind_classType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_classType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_classType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKind_transientPropertyExternType::cEnumAssociatedValues_typeKind_transientPropertyExternType (const GALGAS_string inAssociatedValue0
                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKind_transientPropertyExternType::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_typeKind_transientPropertyExternType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_transientPropertyExternType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_transientPropertyExternType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind::GALGAS_typeKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_boolType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_boolType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_integerType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_integerType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_uint_33__32_Type (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_uint_33__32_Type ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_doubleType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_doubleType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_stringType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_stringType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_dataType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_dataType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_dateType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_dateType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_fontType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_fontType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_colorType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_colorType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_bezierPathType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_bezierPathType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_bezierPathArrayType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_bezierPathArrayType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_enumType (const GALGAS_string & inAssociatedValue0,
                                                       const GALGAS_enumConstantMap & inAssociatedValue1,
                                                       const GALGAS_enumFuncMap & inAssociatedValue2
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_enumType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_enumType (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_entityType (const GALGAS_string & inAssociatedValue0,
                                                         const GALGAS_bool & inAssociatedValue1
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_entityType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_entityType (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_classType (const GALGAS_string & inAssociatedValue0
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_classType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_classType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_transientPropertyExternType (const GALGAS_string & inAssociatedValue0
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_transientPropertyExternType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_transientPropertyExternType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKind::method_enumType (GALGAS_string & outAssociatedValue0,
                                       GALGAS_enumConstantMap & outAssociatedValue1,
                                       GALGAS_enumFuncMap & outAssociatedValue2,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_enumType) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @typeKind enumType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_enumType * ptr = (const cEnumAssociatedValues_typeKind_enumType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKind::method_entityType (GALGAS_string & outAssociatedValue0,
                                         GALGAS_bool & outAssociatedValue1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_entityType) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @typeKind entityType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_entityType * ptr = (const cEnumAssociatedValues_typeKind_entityType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKind::method_classType (GALGAS_string & outAssociatedValue0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_classType) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind classType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_classType * ptr = (const cEnumAssociatedValues_typeKind_classType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKind::method_transientPropertyExternType (GALGAS_string & outAssociatedValue0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_transientPropertyExternType) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind transientPropertyExternType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_transientPropertyExternType * ptr = (const cEnumAssociatedValues_typeKind_transientPropertyExternType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_boolType () const {
  const bool ok = mEnum == kEnum_boolType ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_integerType () const {
  const bool ok = mEnum == kEnum_integerType ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_uint_33__32_Type () const {
  const bool ok = mEnum == kEnum_uint_33__32_Type ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_doubleType () const {
  const bool ok = mEnum == kEnum_doubleType ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_stringType () const {
  const bool ok = mEnum == kEnum_stringType ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_dataType () const {
  const bool ok = mEnum == kEnum_dataType ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_dateType () const {
  const bool ok = mEnum == kEnum_dateType ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_fontType () const {
  const bool ok = mEnum == kEnum_fontType ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_colorType () const {
  const bool ok = mEnum == kEnum_colorType ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_bezierPathType () const {
  const bool ok = mEnum == kEnum_bezierPathType ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_bezierPathArrayType () const {
  const bool ok = mEnum == kEnum_bezierPathArrayType ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_enumType (GALGAS_string & outAssociatedValue0,
                                         GALGAS_enumConstantMap & outAssociatedValue1,
                                         GALGAS_enumFuncMap & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_enumType ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKind_enumType *) unsafePointer () ;
    // const cEnumAssociatedValues_typeKind_enumType * ptr = (const cEnumAssociatedValues_typeKind_enumType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_entityType (GALGAS_string & outAssociatedValue0,
                                           GALGAS_bool & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_entityType ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKind_entityType *) unsafePointer () ;
    // const cEnumAssociatedValues_typeKind_entityType * ptr = (const cEnumAssociatedValues_typeKind_entityType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_classType (GALGAS_string & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_classType ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKind_classType *) unsafePointer () ;
    // const cEnumAssociatedValues_typeKind_classType * ptr = (const cEnumAssociatedValues_typeKind_classType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_transientPropertyExternType (GALGAS_string & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_transientPropertyExternType ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKind_transientPropertyExternType *) unsafePointer () ;
    // const cEnumAssociatedValues_typeKind_transientPropertyExternType * ptr = (const cEnumAssociatedValues_typeKind_transientPropertyExternType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_typeKind [16] = {
  "(not built)",
  "boolType",
  "integerType",
  "uint32Type",
  "doubleType",
  "stringType",
  "dataType",
  "dateType",
  "fontType",
  "colorType",
  "bezierPathType",
  "bezierPathArrayType",
  "enumType",
  "entityType",
  "classType",
  "transientPropertyExternType"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isBoolType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isIntegerType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_integerType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isUint_33__32_Type (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uint_33__32_Type == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isDoubleType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_doubleType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isStringType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_stringType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isDataType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_dataType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isDateType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_dateType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isFontType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fontType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isColorType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_colorType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isBezierPathType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bezierPathType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isBezierPathArrayType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bezierPathArrayType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isEnumType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_enumType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isEntityType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_entityType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isClassType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_classType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isTransientPropertyExternType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_transientPropertyExternType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKind::description (C_String & ioString,
                                   const int32_t inIndentation) const {
  ioString << "<enum @typeKind: " << gEnumNameArrayFor_typeKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typeKind::objectCompare (const GALGAS_typeKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@typeKind type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeKind ("typeKind",
                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  const GALGAS_typeKind * p = (const GALGAS_typeKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_atomicClassDeclarationAST_2D_weak::objectCompare (const GALGAS_atomicClassDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicClassDeclarationAST_2D_weak::GALGAS_atomicClassDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicClassDeclarationAST_2D_weak & GALGAS_atomicClassDeclarationAST_2D_weak::operator = (const GALGAS_atomicClassDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicClassDeclarationAST_2D_weak::GALGAS_atomicClassDeclarationAST_2D_weak (const GALGAS_atomicClassDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicClassDeclarationAST_2D_weak GALGAS_atomicClassDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_atomicClassDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicClassDeclarationAST GALGAS_atomicClassDeclarationAST_2D_weak::bang_atomicClassDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_atomicClassDeclarationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_atomicClassDeclarationAST) ;
      result = GALGAS_atomicClassDeclarationAST ((cPtr_atomicClassDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@atomicClassDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicClassDeclarationAST_2D_weak ("atomicClassDeclarationAST-weak",
                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicClassDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicClassDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicClassDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicClassDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicClassDeclarationAST_2D_weak GALGAS_atomicClassDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_atomicClassDeclarationAST_2D_weak result ;
  const GALGAS_atomicClassDeclarationAST_2D_weak * p = (const GALGAS_atomicClassDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicClassDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicClassDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@simpleStoredPropertyList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_simpleStoredPropertyList : public cCollectionElement {
  public: GALGAS_simpleStoredPropertyList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_simpleStoredPropertyList (const GALGAS_lstring & in_mPropertyTypeName,
                                                       const GALGAS_lstring & in_mPropertyName,
                                                       const GALGAS_abstractDefaultValue & in_mDefaultValue
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_simpleStoredPropertyList (const GALGAS_simpleStoredPropertyList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_simpleStoredPropertyList::cCollectionElement_simpleStoredPropertyList (const GALGAS_lstring & in_mPropertyTypeName,
                                                                                          const GALGAS_lstring & in_mPropertyName,
                                                                                          const GALGAS_abstractDefaultValue & in_mDefaultValue
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyTypeName, in_mPropertyName, in_mDefaultValue) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_simpleStoredPropertyList::cCollectionElement_simpleStoredPropertyList (const GALGAS_simpleStoredPropertyList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyTypeName, inElement.mProperty_mPropertyName, inElement.mProperty_mDefaultValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_simpleStoredPropertyList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_simpleStoredPropertyList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_simpleStoredPropertyList (mObject.mProperty_mPropertyTypeName, mObject.mProperty_mPropertyName, mObject.mProperty_mDefaultValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_simpleStoredPropertyList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyTypeName" ":" ;
  mObject.mProperty_mPropertyTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyName" ":" ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDefaultValue" ":" ;
  mObject.mProperty_mDefaultValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_simpleStoredPropertyList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_simpleStoredPropertyList * operand = (cCollectionElement_simpleStoredPropertyList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_simpleStoredPropertyList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleStoredPropertyList::GALGAS_simpleStoredPropertyList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleStoredPropertyList::GALGAS_simpleStoredPropertyList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleStoredPropertyList GALGAS_simpleStoredPropertyList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_simpleStoredPropertyList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleStoredPropertyList GALGAS_simpleStoredPropertyList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_abstractDefaultValue & inOperand2
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_simpleStoredPropertyList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_simpleStoredPropertyList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_simpleStoredPropertyList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_simpleStoredPropertyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_lstring & in_mPropertyTypeName,
                                                                 const GALGAS_lstring & in_mPropertyName,
                                                                 const GALGAS_abstractDefaultValue & in_mDefaultValue
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_simpleStoredPropertyList * p = NULL ;
  macroMyNew (p, cCollectionElement_simpleStoredPropertyList (in_mPropertyTypeName,
                                                              in_mPropertyName,
                                                              in_mDefaultValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_simpleStoredPropertyList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                           const GALGAS_lstring & inOperand1,
                                                           const GALGAS_abstractDefaultValue & inOperand2
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_simpleStoredPropertyList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_simpleStoredPropertyList::setter_append (GALGAS_simpleStoredPropertyList_2D_element inElement,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_simpleStoredPropertyList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_simpleStoredPropertyList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_lstring inOperand1,
                                                            const GALGAS_abstractDefaultValue inOperand2,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_simpleStoredPropertyList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_simpleStoredPropertyList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_abstractDefaultValue & outOperand2,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
        outOperand0 = p->mObject.mProperty_mPropertyTypeName ;
        outOperand1 = p->mObject.mProperty_mPropertyName ;
        outOperand2 = p->mObject.mProperty_mDefaultValue ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_simpleStoredPropertyList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_abstractDefaultValue & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mDefaultValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_simpleStoredPropertyList::setter_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_abstractDefaultValue & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mDefaultValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_simpleStoredPropertyList::method_first (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_abstractDefaultValue & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mDefaultValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_simpleStoredPropertyList::method_last (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_abstractDefaultValue & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mDefaultValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleStoredPropertyList GALGAS_simpleStoredPropertyList::add_operation (const GALGAS_simpleStoredPropertyList & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleStoredPropertyList GALGAS_simpleStoredPropertyList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result = GALGAS_simpleStoredPropertyList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleStoredPropertyList GALGAS_simpleStoredPropertyList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result = GALGAS_simpleStoredPropertyList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleStoredPropertyList GALGAS_simpleStoredPropertyList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result = GALGAS_simpleStoredPropertyList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_simpleStoredPropertyList::plusAssign_operation (const GALGAS_simpleStoredPropertyList inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_simpleStoredPropertyList::setter_setMPropertyTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_simpleStoredPropertyList::getter_mPropertyTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    result = p->mObject.mProperty_mPropertyTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_simpleStoredPropertyList::setter_setMPropertyNameAtIndex (GALGAS_lstring inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_simpleStoredPropertyList::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_simpleStoredPropertyList::setter_setMDefaultValueAtIndex (GALGAS_abstractDefaultValue inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDefaultValue = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue GALGAS_simpleStoredPropertyList::getter_mDefaultValueAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  GALGAS_abstractDefaultValue result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    result = p->mObject.mProperty_mDefaultValue ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_simpleStoredPropertyList::cEnumerator_simpleStoredPropertyList (const GALGAS_simpleStoredPropertyList & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleStoredPropertyList_2D_element cEnumerator_simpleStoredPropertyList::current (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyList * p = (const cCollectionElement_simpleStoredPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_simpleStoredPropertyList::current_mPropertyTypeName (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyList * p = (const cCollectionElement_simpleStoredPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
  return p->mObject.mProperty_mPropertyTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_simpleStoredPropertyList::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyList * p = (const cCollectionElement_simpleStoredPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
  return p->mObject.mProperty_mPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue cEnumerator_simpleStoredPropertyList::current_mDefaultValue (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyList * p = (const cCollectionElement_simpleStoredPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
  return p->mObject.mProperty_mDefaultValue ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@simpleStoredPropertyList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_simpleStoredPropertyList ("simpleStoredPropertyList",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_simpleStoredPropertyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleStoredPropertyList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_simpleStoredPropertyList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_simpleStoredPropertyList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleStoredPropertyList GALGAS_simpleStoredPropertyList::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_simpleStoredPropertyList result ;
  const GALGAS_simpleStoredPropertyList * p = (const GALGAS_simpleStoredPropertyList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_simpleStoredPropertyList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleStoredPropertyList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_entityDeclarationAST_2D_weak::objectCompare (const GALGAS_entityDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST_2D_weak::GALGAS_entityDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST_2D_weak & GALGAS_entityDeclarationAST_2D_weak::operator = (const GALGAS_entityDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST_2D_weak::GALGAS_entityDeclarationAST_2D_weak (const GALGAS_entityDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST_2D_weak GALGAS_entityDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_entityDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST GALGAS_entityDeclarationAST_2D_weak::bang_entityDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_entityDeclarationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_entityDeclarationAST) ;
      result = GALGAS_entityDeclarationAST ((cPtr_entityDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@entityDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityDeclarationAST_2D_weak ("entityDeclarationAST-weak",
                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_entityDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_entityDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST_2D_weak GALGAS_entityDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_entityDeclarationAST_2D_weak result ;
  const GALGAS_entityDeclarationAST_2D_weak * p = (const GALGAS_entityDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@propertyGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_propertyGenerationList : public cCollectionElement {
  public: GALGAS_propertyGenerationList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_propertyGenerationList (const GALGAS_propertyGeneration & in_mProperty
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_propertyGenerationList (const GALGAS_propertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_propertyGenerationList::cCollectionElement_propertyGenerationList (const GALGAS_propertyGeneration & in_mProperty
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_propertyGenerationList::cCollectionElement_propertyGenerationList (const GALGAS_propertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_propertyGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_propertyGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_propertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_propertyGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProperty" ":" ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_propertyGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_propertyGenerationList * operand = (cCollectionElement_propertyGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_propertyGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList::GALGAS_propertyGenerationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList::GALGAS_propertyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_propertyGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyGenerationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_propertyGenerationList::constructor_listWithValue (const GALGAS_propertyGeneration & inOperand0
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_propertyGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_propertyGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_propertyGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_propertyGeneration & in_mProperty
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_propertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGenerationList::addAssign_operation (const GALGAS_propertyGeneration & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_propertyGenerationList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGenerationList::setter_append (GALGAS_propertyGenerationList_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_propertyGenerationList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGenerationList::setter_insertAtIndex (const GALGAS_propertyGeneration inOperand0,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_propertyGenerationList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGenerationList::setter_removeAtIndex (GALGAS_propertyGeneration & outOperand0,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_propertyGenerationList * p = (cCollectionElement_propertyGenerationList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
        outOperand0 = p->mObject.mProperty_mProperty ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGenerationList::setter_popFirst (GALGAS_propertyGeneration & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyGenerationList * p = (cCollectionElement_propertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGenerationList::setter_popLast (GALGAS_propertyGeneration & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyGenerationList * p = (cCollectionElement_propertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGenerationList::method_first (GALGAS_propertyGeneration & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyGenerationList * p = (cCollectionElement_propertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGenerationList::method_last (GALGAS_propertyGeneration & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyGenerationList * p = (cCollectionElement_propertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_propertyGenerationList::add_operation (const GALGAS_propertyGenerationList & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_propertyGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_propertyGenerationList result = GALGAS_propertyGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_propertyGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_propertyGenerationList result = GALGAS_propertyGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_propertyGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_propertyGenerationList result = GALGAS_propertyGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGenerationList::plusAssign_operation (const GALGAS_propertyGenerationList inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGenerationList::setter_setMPropertyAtIndex (GALGAS_propertyGeneration inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyGenerationList * p = (cCollectionElement_propertyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGeneration GALGAS_propertyGenerationList::getter_mPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyGenerationList * p = (cCollectionElement_propertyGenerationList *) attributes.ptr () ;
  GALGAS_propertyGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_propertyGenerationList::cEnumerator_propertyGenerationList (const GALGAS_propertyGenerationList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList_2D_element cEnumerator_propertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_propertyGenerationList * p = (const cCollectionElement_propertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGeneration cEnumerator_propertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_propertyGenerationList * p = (const cCollectionElement_propertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@propertyGenerationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyGenerationList ("propertyGenerationList",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyGenerationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_propertyGenerationList::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_propertyGenerationList result ;
  const GALGAS_propertyGenerationList * p = (const GALGAS_propertyGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_entityForGeneration_2D_weak::objectCompare (const GALGAS_entityForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration_2D_weak::GALGAS_entityForGeneration_2D_weak (void) :
GALGAS_abstractFileGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration_2D_weak & GALGAS_entityForGeneration_2D_weak::operator = (const GALGAS_entityForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration_2D_weak::GALGAS_entityForGeneration_2D_weak (const GALGAS_entityForGeneration & inSource) :
GALGAS_abstractFileGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration_2D_weak GALGAS_entityForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_entityForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration GALGAS_entityForGeneration_2D_weak::bang_entityForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_entityForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_entityForGeneration) ;
      result = GALGAS_entityForGeneration ((cPtr_entityForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@entityForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityForGeneration_2D_weak ("entityForGeneration-weak",
                                                    & kTypeDescriptor_GALGAS_abstractFileGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_entityForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_entityForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration_2D_weak GALGAS_entityForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_entityForGeneration_2D_weak result ;
  const GALGAS_entityForGeneration_2D_weak * p = (const GALGAS_entityForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@entityListForGeneratingEBManagedObjectContext' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_entityListForGeneratingEBManagedObjectContext : public cCollectionElement {
  public: GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_entityListForGeneratingEBManagedObjectContext (const GALGAS_string & in_mEntityName,
                                                                            const GALGAS_lstringlist & in_mObsoleteEntityNames
                                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_entityListForGeneratingEBManagedObjectContext (const GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_entityListForGeneratingEBManagedObjectContext::cCollectionElement_entityListForGeneratingEBManagedObjectContext (const GALGAS_string & in_mEntityName,
                                                                                                                                    const GALGAS_lstringlist & in_mObsoleteEntityNames
                                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEntityName, in_mObsoleteEntityNames) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_entityListForGeneratingEBManagedObjectContext::cCollectionElement_entityListForGeneratingEBManagedObjectContext (const GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEntityName, inElement.mProperty_mObsoleteEntityNames) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_entityListForGeneratingEBManagedObjectContext::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_entityListForGeneratingEBManagedObjectContext::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_entityListForGeneratingEBManagedObjectContext (mObject.mProperty_mEntityName, mObject.mProperty_mObsoleteEntityNames COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_entityListForGeneratingEBManagedObjectContext::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEntityName" ":" ;
  mObject.mProperty_mEntityName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObsoleteEntityNames" ":" ;
  mObject.mProperty_mObsoleteEntityNames.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_entityListForGeneratingEBManagedObjectContext::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * operand = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext::GALGAS_entityListForGeneratingEBManagedObjectContext (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext::GALGAS_entityListForGeneratingEBManagedObjectContext (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_entityListForGeneratingEBManagedObjectContext::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_entityListForGeneratingEBManagedObjectContext  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_entityListForGeneratingEBManagedObjectContext::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                                      const GALGAS_lstringlist & inOperand1
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_entityListForGeneratingEBManagedObjectContext result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_entityListForGeneratingEBManagedObjectContext (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_entityListForGeneratingEBManagedObjectContext::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityListForGeneratingEBManagedObjectContext::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                      const GALGAS_string & in_mEntityName,
                                                                                      const GALGAS_lstringlist & in_mObsoleteEntityNames
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = NULL ;
  macroMyNew (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext (in_mEntityName,
                                                                                   in_mObsoleteEntityNames COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityListForGeneratingEBManagedObjectContext::addAssign_operation (const GALGAS_string & inOperand0,
                                                                                const GALGAS_lstringlist & inOperand1
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityListForGeneratingEBManagedObjectContext::setter_append (GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element inElement,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityListForGeneratingEBManagedObjectContext::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                                 const GALGAS_lstringlist inOperand1,
                                                                                 const GALGAS_uint inInsertionIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityListForGeneratingEBManagedObjectContext::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                                 GALGAS_lstringlist & outOperand1,
                                                                                 const GALGAS_uint inRemoveIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
        outOperand0 = p->mObject.mProperty_mEntityName ;
        outOperand1 = p->mObject.mProperty_mObsoleteEntityNames ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityListForGeneratingEBManagedObjectContext::setter_popFirst (GALGAS_string & outOperand0,
                                                                            GALGAS_lstringlist & outOperand1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    outOperand0 = p->mObject.mProperty_mEntityName ;
    outOperand1 = p->mObject.mProperty_mObsoleteEntityNames ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityListForGeneratingEBManagedObjectContext::setter_popLast (GALGAS_string & outOperand0,
                                                                           GALGAS_lstringlist & outOperand1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    outOperand0 = p->mObject.mProperty_mEntityName ;
    outOperand1 = p->mObject.mProperty_mObsoleteEntityNames ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityListForGeneratingEBManagedObjectContext::method_first (GALGAS_string & outOperand0,
                                                                         GALGAS_lstringlist & outOperand1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    outOperand0 = p->mObject.mProperty_mEntityName ;
    outOperand1 = p->mObject.mProperty_mObsoleteEntityNames ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityListForGeneratingEBManagedObjectContext::method_last (GALGAS_string & outOperand0,
                                                                        GALGAS_lstringlist & outOperand1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    outOperand0 = p->mObject.mProperty_mEntityName ;
    outOperand1 = p->mObject.mProperty_mObsoleteEntityNames ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_entityListForGeneratingEBManagedObjectContext::add_operation (const GALGAS_entityListForGeneratingEBManagedObjectContext & inOperand,
                                                                                                                          C_Compiler * /* inCompiler */
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_entityListForGeneratingEBManagedObjectContext result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_entityListForGeneratingEBManagedObjectContext::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_entityListForGeneratingEBManagedObjectContext result = GALGAS_entityListForGeneratingEBManagedObjectContext::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_entityListForGeneratingEBManagedObjectContext::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_entityListForGeneratingEBManagedObjectContext result = GALGAS_entityListForGeneratingEBManagedObjectContext::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_entityListForGeneratingEBManagedObjectContext::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_entityListForGeneratingEBManagedObjectContext result = GALGAS_entityListForGeneratingEBManagedObjectContext::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityListForGeneratingEBManagedObjectContext::plusAssign_operation (const GALGAS_entityListForGeneratingEBManagedObjectContext inOperand,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityListForGeneratingEBManagedObjectContext::setter_setMEntityNameAtIndex (GALGAS_string inOperand,
                                                                                         GALGAS_uint inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEntityName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_entityListForGeneratingEBManagedObjectContext::getter_mEntityNameAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    result = p->mObject.mProperty_mEntityName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityListForGeneratingEBManagedObjectContext::setter_setMObsoleteEntityNamesAtIndex (GALGAS_lstringlist inOperand,
                                                                                                  GALGAS_uint inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mObsoleteEntityNames = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_entityListForGeneratingEBManagedObjectContext::getter_mObsoleteEntityNamesAtIndex (const GALGAS_uint & inIndex,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    result = p->mObject.mProperty_mObsoleteEntityNames ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_entityListForGeneratingEBManagedObjectContext::cEnumerator_entityListForGeneratingEBManagedObjectContext (const GALGAS_entityListForGeneratingEBManagedObjectContext & inEnumeratedObject,
                                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element cEnumerator_entityListForGeneratingEBManagedObjectContext::current (LOCATION_ARGS) const {
  const cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (const cCollectionElement_entityListForGeneratingEBManagedObjectContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_entityListForGeneratingEBManagedObjectContext::current_mEntityName (LOCATION_ARGS) const {
  const cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (const cCollectionElement_entityListForGeneratingEBManagedObjectContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
  return p->mObject.mProperty_mEntityName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_entityListForGeneratingEBManagedObjectContext::current_mObsoleteEntityNames (LOCATION_ARGS) const {
  const cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (const cCollectionElement_entityListForGeneratingEBManagedObjectContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
  return p->mObject.mProperty_mObsoleteEntityNames ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@entityListForGeneratingEBManagedObjectContext type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext ("entityListForGeneratingEBManagedObjectContext",
                                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_entityListForGeneratingEBManagedObjectContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_entityListForGeneratingEBManagedObjectContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityListForGeneratingEBManagedObjectContext (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_entityListForGeneratingEBManagedObjectContext::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_entityListForGeneratingEBManagedObjectContext result ;
  const GALGAS_entityListForGeneratingEBManagedObjectContext * p = (const GALGAS_entityListForGeneratingEBManagedObjectContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityListForGeneratingEBManagedObjectContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityListForGeneratingEBManagedObjectContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@outletDeclarationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_outletDeclarationList : public cCollectionElement {
  public: GALGAS_outletDeclarationList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_outletDeclarationList (const GALGAS_lstring & in_mOutletTypeName,
                                                    const GALGAS_lstring & in_mOutletName,
                                                    const GALGAS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                    const GALGAS_runActionDescriptor & in_mRunDescriptor,
                                                    const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                    const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                    const GALGAS_regularBindingList & in_mRegularBindingList,
                                                    const GALGAS_graphicController & in_mGraphicController
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_outletDeclarationList (const GALGAS_outletDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_outletDeclarationList::cCollectionElement_outletDeclarationList (const GALGAS_lstring & in_mOutletTypeName,
                                                                                    const GALGAS_lstring & in_mOutletName,
                                                                                    const GALGAS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                                                    const GALGAS_runActionDescriptor & in_mRunDescriptor,
                                                                                    const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                                                    const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                                                    const GALGAS_regularBindingList & in_mRegularBindingList,
                                                                                    const GALGAS_graphicController & in_mGraphicController
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletTypeName, in_mOutletName, in_mTableValueBindingDescriptor, in_mRunDescriptor, in_mEnabledBindingDescriptor, in_mHiddenBindingDescriptor, in_mRegularBindingList, in_mGraphicController) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_outletDeclarationList::cCollectionElement_outletDeclarationList (const GALGAS_outletDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletTypeName, inElement.mProperty_mOutletName, inElement.mProperty_mTableValueBindingDescriptor, inElement.mProperty_mRunDescriptor, inElement.mProperty_mEnabledBindingDescriptor, inElement.mProperty_mHiddenBindingDescriptor, inElement.mProperty_mRegularBindingList, inElement.mProperty_mGraphicController) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_outletDeclarationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_outletDeclarationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_outletDeclarationList (mObject.mProperty_mOutletTypeName, mObject.mProperty_mOutletName, mObject.mProperty_mTableValueBindingDescriptor, mObject.mProperty_mRunDescriptor, mObject.mProperty_mEnabledBindingDescriptor, mObject.mProperty_mHiddenBindingDescriptor, mObject.mProperty_mRegularBindingList, mObject.mProperty_mGraphicController COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_outletDeclarationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletTypeName" ":" ;
  mObject.mProperty_mOutletTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletName" ":" ;
  mObject.mProperty_mOutletName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTableValueBindingDescriptor" ":" ;
  mObject.mProperty_mTableValueBindingDescriptor.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRunDescriptor" ":" ;
  mObject.mProperty_mRunDescriptor.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnabledBindingDescriptor" ":" ;
  mObject.mProperty_mEnabledBindingDescriptor.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHiddenBindingDescriptor" ":" ;
  mObject.mProperty_mHiddenBindingDescriptor.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegularBindingList" ":" ;
  mObject.mProperty_mRegularBindingList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGraphicController" ":" ;
  mObject.mProperty_mGraphicController.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_outletDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_outletDeclarationList * operand = (cCollectionElement_outletDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_outletDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList::GALGAS_outletDeclarationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList::GALGAS_outletDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletDeclarationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1,
                                                                                      const GALGAS_tableValueBinding & inOperand2,
                                                                                      const GALGAS_runActionDescriptor & inOperand3,
                                                                                      const GALGAS_multipleBindingDescriptor & inOperand4,
                                                                                      const GALGAS_multipleBindingDescriptor & inOperand5,
                                                                                      const GALGAS_regularBindingList & inOperand6,
                                                                                      const GALGAS_graphicController & inOperand7
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_outletDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_outletDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_outletDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mOutletTypeName,
                                                              const GALGAS_lstring & in_mOutletName,
                                                              const GALGAS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                              const GALGAS_runActionDescriptor & in_mRunDescriptor,
                                                              const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                              const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                              const GALGAS_regularBindingList & in_mRegularBindingList,
                                                              const GALGAS_graphicController & in_mGraphicController
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = NULL ;
  macroMyNew (p, cCollectionElement_outletDeclarationList (in_mOutletTypeName,
                                                           in_mOutletName,
                                                           in_mTableValueBindingDescriptor,
                                                           in_mRunDescriptor,
                                                           in_mEnabledBindingDescriptor,
                                                           in_mHiddenBindingDescriptor,
                                                           in_mRegularBindingList,
                                                           in_mGraphicController COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_lstring & inOperand1,
                                                        const GALGAS_tableValueBinding & inOperand2,
                                                        const GALGAS_runActionDescriptor & inOperand3,
                                                        const GALGAS_multipleBindingDescriptor & inOperand4,
                                                        const GALGAS_multipleBindingDescriptor & inOperand5,
                                                        const GALGAS_regularBindingList & inOperand6,
                                                        const GALGAS_graphicController & inOperand7
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_outletDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_append (GALGAS_outletDeclarationList_2D_element inElement,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_outletDeclarationList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_lstring inOperand1,
                                                         const GALGAS_tableValueBinding inOperand2,
                                                         const GALGAS_runActionDescriptor inOperand3,
                                                         const GALGAS_multipleBindingDescriptor inOperand4,
                                                         const GALGAS_multipleBindingDescriptor inOperand5,
                                                         const GALGAS_regularBindingList inOperand6,
                                                         const GALGAS_graphicController inOperand7,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_outletDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_tableValueBinding & outOperand2,
                                                         GALGAS_runActionDescriptor & outOperand3,
                                                         GALGAS_multipleBindingDescriptor & outOperand4,
                                                         GALGAS_multipleBindingDescriptor & outOperand5,
                                                         GALGAS_regularBindingList & outOperand6,
                                                         GALGAS_graphicController & outOperand7,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
        outOperand6.drop () ;
        outOperand7.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
        outOperand0 = p->mObject.mProperty_mOutletTypeName ;
        outOperand1 = p->mObject.mProperty_mOutletName ;
        outOperand2 = p->mObject.mProperty_mTableValueBindingDescriptor ;
        outOperand3 = p->mObject.mProperty_mRunDescriptor ;
        outOperand4 = p->mObject.mProperty_mEnabledBindingDescriptor ;
        outOperand5 = p->mObject.mProperty_mHiddenBindingDescriptor ;
        outOperand6 = p->mObject.mProperty_mRegularBindingList ;
        outOperand7 = p->mObject.mProperty_mGraphicController ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      outOperand7.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_tableValueBinding & outOperand2,
                                                    GALGAS_runActionDescriptor & outOperand3,
                                                    GALGAS_multipleBindingDescriptor & outOperand4,
                                                    GALGAS_multipleBindingDescriptor & outOperand5,
                                                    GALGAS_regularBindingList & outOperand6,
                                                    GALGAS_graphicController & outOperand7,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mOutletTypeName ;
    outOperand1 = p->mObject.mProperty_mOutletName ;
    outOperand2 = p->mObject.mProperty_mTableValueBindingDescriptor ;
    outOperand3 = p->mObject.mProperty_mRunDescriptor ;
    outOperand4 = p->mObject.mProperty_mEnabledBindingDescriptor ;
    outOperand5 = p->mObject.mProperty_mHiddenBindingDescriptor ;
    outOperand6 = p->mObject.mProperty_mRegularBindingList ;
    outOperand7 = p->mObject.mProperty_mGraphicController ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_tableValueBinding & outOperand2,
                                                   GALGAS_runActionDescriptor & outOperand3,
                                                   GALGAS_multipleBindingDescriptor & outOperand4,
                                                   GALGAS_multipleBindingDescriptor & outOperand5,
                                                   GALGAS_regularBindingList & outOperand6,
                                                   GALGAS_graphicController & outOperand7,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mOutletTypeName ;
    outOperand1 = p->mObject.mProperty_mOutletName ;
    outOperand2 = p->mObject.mProperty_mTableValueBindingDescriptor ;
    outOperand3 = p->mObject.mProperty_mRunDescriptor ;
    outOperand4 = p->mObject.mProperty_mEnabledBindingDescriptor ;
    outOperand5 = p->mObject.mProperty_mHiddenBindingDescriptor ;
    outOperand6 = p->mObject.mProperty_mRegularBindingList ;
    outOperand7 = p->mObject.mProperty_mGraphicController ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_tableValueBinding & outOperand2,
                                                 GALGAS_runActionDescriptor & outOperand3,
                                                 GALGAS_multipleBindingDescriptor & outOperand4,
                                                 GALGAS_multipleBindingDescriptor & outOperand5,
                                                 GALGAS_regularBindingList & outOperand6,
                                                 GALGAS_graphicController & outOperand7,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mOutletTypeName ;
    outOperand1 = p->mObject.mProperty_mOutletName ;
    outOperand2 = p->mObject.mProperty_mTableValueBindingDescriptor ;
    outOperand3 = p->mObject.mProperty_mRunDescriptor ;
    outOperand4 = p->mObject.mProperty_mEnabledBindingDescriptor ;
    outOperand5 = p->mObject.mProperty_mHiddenBindingDescriptor ;
    outOperand6 = p->mObject.mProperty_mRegularBindingList ;
    outOperand7 = p->mObject.mProperty_mGraphicController ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_tableValueBinding & outOperand2,
                                                GALGAS_runActionDescriptor & outOperand3,
                                                GALGAS_multipleBindingDescriptor & outOperand4,
                                                GALGAS_multipleBindingDescriptor & outOperand5,
                                                GALGAS_regularBindingList & outOperand6,
                                                GALGAS_graphicController & outOperand7,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mOutletTypeName ;
    outOperand1 = p->mObject.mProperty_mOutletName ;
    outOperand2 = p->mObject.mProperty_mTableValueBindingDescriptor ;
    outOperand3 = p->mObject.mProperty_mRunDescriptor ;
    outOperand4 = p->mObject.mProperty_mEnabledBindingDescriptor ;
    outOperand5 = p->mObject.mProperty_mHiddenBindingDescriptor ;
    outOperand6 = p->mObject.mProperty_mRegularBindingList ;
    outOperand7 = p->mObject.mProperty_mGraphicController ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::add_operation (const GALGAS_outletDeclarationList & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result = GALGAS_outletDeclarationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result = GALGAS_outletDeclarationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result = GALGAS_outletDeclarationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::plusAssign_operation (const GALGAS_outletDeclarationList inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_setMOutletTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOutletTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_outletDeclarationList::getter_mOutletTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mOutletTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_setMOutletNameAtIndex (GALGAS_lstring inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOutletName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_outletDeclarationList::getter_mOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mOutletName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_setMTableValueBindingDescriptorAtIndex (GALGAS_tableValueBinding inOperand,
                                                                                  GALGAS_uint inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTableValueBindingDescriptor = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableValueBinding GALGAS_outletDeclarationList::getter_mTableValueBindingDescriptorAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_tableValueBinding result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mTableValueBindingDescriptor ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_setMRunDescriptorAtIndex (GALGAS_runActionDescriptor inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRunDescriptor = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_runActionDescriptor GALGAS_outletDeclarationList::getter_mRunDescriptorAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_runActionDescriptor result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mRunDescriptor ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_setMEnabledBindingDescriptorAtIndex (GALGAS_multipleBindingDescriptor inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEnabledBindingDescriptor = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor GALGAS_outletDeclarationList::getter_mEnabledBindingDescriptorAtIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_multipleBindingDescriptor result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mEnabledBindingDescriptor ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_setMHiddenBindingDescriptorAtIndex (GALGAS_multipleBindingDescriptor inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mHiddenBindingDescriptor = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor GALGAS_outletDeclarationList::getter_mHiddenBindingDescriptorAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_multipleBindingDescriptor result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mHiddenBindingDescriptor ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_setMRegularBindingListAtIndex (GALGAS_regularBindingList inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRegularBindingList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingList GALGAS_outletDeclarationList::getter_mRegularBindingListAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_regularBindingList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mRegularBindingList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_setMGraphicControllerAtIndex (GALGAS_graphicController inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGraphicController = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphicController GALGAS_outletDeclarationList::getter_mGraphicControllerAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_graphicController result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mGraphicController ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_outletDeclarationList::cEnumerator_outletDeclarationList (const GALGAS_outletDeclarationList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList_2D_element cEnumerator_outletDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_outletDeclarationList::current_mOutletTypeName (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mOutletTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_outletDeclarationList::current_mOutletName (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mOutletName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableValueBinding cEnumerator_outletDeclarationList::current_mTableValueBindingDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mTableValueBindingDescriptor ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_runActionDescriptor cEnumerator_outletDeclarationList::current_mRunDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mRunDescriptor ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor cEnumerator_outletDeclarationList::current_mEnabledBindingDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mEnabledBindingDescriptor ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor cEnumerator_outletDeclarationList::current_mHiddenBindingDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mHiddenBindingDescriptor ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingList cEnumerator_outletDeclarationList::current_mRegularBindingList (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mRegularBindingList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphicController cEnumerator_outletDeclarationList::current_mGraphicController (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mGraphicController ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@outletDeclarationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletDeclarationList ("outletDeclarationList",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outletDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletDeclarationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outletDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletDeclarationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_outletDeclarationList result ;
  const GALGAS_outletDeclarationList * p = (const GALGAS_outletDeclarationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@arrayControllerBindingListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_arrayControllerBindingListAST : public cCollectionElement {
  public: GALGAS_arrayControllerBindingListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_arrayControllerBindingListAST (const GALGAS_lstring & in_mControllerName,
                                                            const GALGAS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_arrayControllerBindingListAST (const GALGAS_arrayControllerBindingListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_arrayControllerBindingListAST::cCollectionElement_arrayControllerBindingListAST (const GALGAS_lstring & in_mControllerName,
                                                                                                    const GALGAS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mControllerName, in_mHiddenSelectionViewBindingDescriptor) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_arrayControllerBindingListAST::cCollectionElement_arrayControllerBindingListAST (const GALGAS_arrayControllerBindingListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mControllerName, inElement.mProperty_mHiddenSelectionViewBindingDescriptor) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_arrayControllerBindingListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_arrayControllerBindingListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arrayControllerBindingListAST (mObject.mProperty_mControllerName, mObject.mProperty_mHiddenSelectionViewBindingDescriptor COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_arrayControllerBindingListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mControllerName" ":" ;
  mObject.mProperty_mControllerName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHiddenSelectionViewBindingDescriptor" ":" ;
  mObject.mProperty_mHiddenSelectionViewBindingDescriptor.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_arrayControllerBindingListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arrayControllerBindingListAST * operand = (cCollectionElement_arrayControllerBindingListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arrayControllerBindingListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST::GALGAS_arrayControllerBindingListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST::GALGAS_arrayControllerBindingListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST GALGAS_arrayControllerBindingListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_arrayControllerBindingListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST GALGAS_arrayControllerBindingListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_multipleBindingDescriptor & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBindingListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_arrayControllerBindingListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_arrayControllerBindingListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_lstring & in_mControllerName,
                                                                      const GALGAS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerBindingListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_arrayControllerBindingListAST (in_mControllerName,
                                                                   in_mHiddenSelectionViewBindingDescriptor COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_multipleBindingDescriptor & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_arrayControllerBindingListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::setter_append (GALGAS_arrayControllerBindingListAST_2D_element inElement,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_arrayControllerBindingListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_multipleBindingDescriptor inOperand1,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_arrayControllerBindingListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                 GALGAS_multipleBindingDescriptor & outOperand1,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
        outOperand0 = p->mObject.mProperty_mControllerName ;
        outOperand1 = p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                            GALGAS_multipleBindingDescriptor & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    outOperand0 = p->mObject.mProperty_mControllerName ;
    outOperand1 = p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                           GALGAS_multipleBindingDescriptor & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    outOperand0 = p->mObject.mProperty_mControllerName ;
    outOperand1 = p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::method_first (GALGAS_lstring & outOperand0,
                                                         GALGAS_multipleBindingDescriptor & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    outOperand0 = p->mObject.mProperty_mControllerName ;
    outOperand1 = p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::method_last (GALGAS_lstring & outOperand0,
                                                        GALGAS_multipleBindingDescriptor & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    outOperand0 = p->mObject.mProperty_mControllerName ;
    outOperand1 = p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST GALGAS_arrayControllerBindingListAST::add_operation (const GALGAS_arrayControllerBindingListAST & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerBindingListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST GALGAS_arrayControllerBindingListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBindingListAST result = GALGAS_arrayControllerBindingListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST GALGAS_arrayControllerBindingListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBindingListAST result = GALGAS_arrayControllerBindingListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST GALGAS_arrayControllerBindingListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBindingListAST result = GALGAS_arrayControllerBindingListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::plusAssign_operation (const GALGAS_arrayControllerBindingListAST inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::setter_setMControllerNameAtIndex (GALGAS_lstring inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mControllerName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_arrayControllerBindingListAST::getter_mControllerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    result = p->mObject.mProperty_mControllerName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::setter_setMHiddenSelectionViewBindingDescriptorAtIndex (GALGAS_multipleBindingDescriptor inOperand,
                                                                                                   GALGAS_uint inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor GALGAS_arrayControllerBindingListAST::getter_mHiddenSelectionViewBindingDescriptorAtIndex (const GALGAS_uint & inIndex,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) attributes.ptr () ;
  GALGAS_multipleBindingDescriptor result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    result = p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_arrayControllerBindingListAST::cEnumerator_arrayControllerBindingListAST (const GALGAS_arrayControllerBindingListAST & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST_2D_element cEnumerator_arrayControllerBindingListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBindingListAST * p = (const cCollectionElement_arrayControllerBindingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_arrayControllerBindingListAST::current_mControllerName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBindingListAST * p = (const cCollectionElement_arrayControllerBindingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
  return p->mObject.mProperty_mControllerName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor cEnumerator_arrayControllerBindingListAST::current_mHiddenSelectionViewBindingDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBindingListAST * p = (const cCollectionElement_arrayControllerBindingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
  return p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@arrayControllerBindingListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerBindingListAST ("arrayControllerBindingListAST",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayControllerBindingListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBindingListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayControllerBindingListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerBindingListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST GALGAS_arrayControllerBindingListAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBindingListAST result ;
  const GALGAS_arrayControllerBindingListAST * p = (const GALGAS_arrayControllerBindingListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerBindingListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBindingListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@astViewDeclarationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_astViewDeclarationList : public cCollectionElement {
  public: GALGAS_astViewDeclarationList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_astViewDeclarationList (const GALGAS_lstring & in_mViewName,
                                                     const GALGAS_astAbstractViewDeclaration & in_mView
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_astViewDeclarationList (const GALGAS_astViewDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_astViewDeclarationList::cCollectionElement_astViewDeclarationList (const GALGAS_lstring & in_mViewName,
                                                                                      const GALGAS_astAbstractViewDeclaration & in_mView
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mViewName, in_mView) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_astViewDeclarationList::cCollectionElement_astViewDeclarationList (const GALGAS_astViewDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mViewName, inElement.mProperty_mView) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_astViewDeclarationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_astViewDeclarationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_astViewDeclarationList (mObject.mProperty_mViewName, mObject.mProperty_mView COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_astViewDeclarationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mViewName" ":" ;
  mObject.mProperty_mViewName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mView" ":" ;
  mObject.mProperty_mView.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_astViewDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_astViewDeclarationList * operand = (cCollectionElement_astViewDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_astViewDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList::GALGAS_astViewDeclarationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList::GALGAS_astViewDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList GALGAS_astViewDeclarationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_astViewDeclarationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList GALGAS_astViewDeclarationList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_astAbstractViewDeclaration & inOperand1
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astViewDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_astViewDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_astViewDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mViewName,
                                                               const GALGAS_astAbstractViewDeclaration & in_mView
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_astViewDeclarationList * p = NULL ;
  macroMyNew (p, cCollectionElement_astViewDeclarationList (in_mViewName,
                                                            in_mView COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_astAbstractViewDeclaration & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_astViewDeclarationList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::setter_append (GALGAS_astViewDeclarationList_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_astViewDeclarationList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_astAbstractViewDeclaration inOperand1,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_astViewDeclarationList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_astAbstractViewDeclaration & outOperand1,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
        outOperand0 = p->mObject.mProperty_mViewName ;
        outOperand1 = p->mObject.mProperty_mView ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_astAbstractViewDeclaration & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mViewName ;
    outOperand1 = p->mObject.mProperty_mView ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_astAbstractViewDeclaration & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mViewName ;
    outOperand1 = p->mObject.mProperty_mView ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_astAbstractViewDeclaration & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mViewName ;
    outOperand1 = p->mObject.mProperty_mView ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_astAbstractViewDeclaration & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mViewName ;
    outOperand1 = p->mObject.mProperty_mView ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList GALGAS_astViewDeclarationList::add_operation (const GALGAS_astViewDeclarationList & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_astViewDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList GALGAS_astViewDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_astViewDeclarationList result = GALGAS_astViewDeclarationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList GALGAS_astViewDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_astViewDeclarationList result = GALGAS_astViewDeclarationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList GALGAS_astViewDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_astViewDeclarationList result = GALGAS_astViewDeclarationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::plusAssign_operation (const GALGAS_astViewDeclarationList inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::setter_setMViewNameAtIndex (GALGAS_lstring inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mViewName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astViewDeclarationList::getter_mViewNameAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    result = p->mObject.mProperty_mViewName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::setter_setMViewAtIndex (GALGAS_astAbstractViewDeclaration inOperand,
                                                            GALGAS_uint inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mView = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewDeclaration GALGAS_astViewDeclarationList::getter_mViewAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) attributes.ptr () ;
  GALGAS_astAbstractViewDeclaration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    result = p->mObject.mProperty_mView ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_astViewDeclarationList::cEnumerator_astViewDeclarationList (const GALGAS_astViewDeclarationList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList_2D_element cEnumerator_astViewDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_astViewDeclarationList * p = (const cCollectionElement_astViewDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_astViewDeclarationList::current_mViewName (LOCATION_ARGS) const {
  const cCollectionElement_astViewDeclarationList * p = (const cCollectionElement_astViewDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
  return p->mObject.mProperty_mViewName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewDeclaration cEnumerator_astViewDeclarationList::current_mView (LOCATION_ARGS) const {
  const cCollectionElement_astViewDeclarationList * p = (const cCollectionElement_astViewDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
  return p->mObject.mProperty_mView ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@astViewDeclarationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astViewDeclarationList ("astViewDeclarationList",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astViewDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astViewDeclarationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astViewDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astViewDeclarationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList GALGAS_astViewDeclarationList::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_astViewDeclarationList result ;
  const GALGAS_astViewDeclarationList * p = (const GALGAS_astViewDeclarationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astViewDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astViewDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@astAutoLayoutToolbarItemList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_astAutoLayoutToolbarItemList : public cCollectionElement {
  public: GALGAS_astAutoLayoutToolbarItemList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_astAutoLayoutToolbarItemList (const GALGAS_astAutoLayoutToolbarItem & in_mItem
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_astAutoLayoutToolbarItemList (const GALGAS_astAutoLayoutToolbarItemList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_astAutoLayoutToolbarItemList::cCollectionElement_astAutoLayoutToolbarItemList (const GALGAS_astAutoLayoutToolbarItem & in_mItem
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mItem) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_astAutoLayoutToolbarItemList::cCollectionElement_astAutoLayoutToolbarItemList (const GALGAS_astAutoLayoutToolbarItemList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mItem) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_astAutoLayoutToolbarItemList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_astAutoLayoutToolbarItemList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_astAutoLayoutToolbarItemList (mObject.mProperty_mItem COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_astAutoLayoutToolbarItemList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mItem" ":" ;
  mObject.mProperty_mItem.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_astAutoLayoutToolbarItemList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_astAutoLayoutToolbarItemList * operand = (cCollectionElement_astAutoLayoutToolbarItemList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_astAutoLayoutToolbarItemList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList::GALGAS_astAutoLayoutToolbarItemList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList::GALGAS_astAutoLayoutToolbarItemList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList GALGAS_astAutoLayoutToolbarItemList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_astAutoLayoutToolbarItemList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList GALGAS_astAutoLayoutToolbarItemList::constructor_listWithValue (const GALGAS_astAutoLayoutToolbarItem & inOperand0
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutToolbarItemList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_astAutoLayoutToolbarItemList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_astAutoLayoutToolbarItemList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_astAutoLayoutToolbarItem & in_mItem
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutToolbarItemList * p = NULL ;
  macroMyNew (p, cCollectionElement_astAutoLayoutToolbarItemList (in_mItem COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList::addAssign_operation (const GALGAS_astAutoLayoutToolbarItem & inOperand0
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_astAutoLayoutToolbarItemList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList::setter_append (GALGAS_astAutoLayoutToolbarItemList_2D_element inElement,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_astAutoLayoutToolbarItemList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList::setter_insertAtIndex (const GALGAS_astAutoLayoutToolbarItem inOperand0,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_astAutoLayoutToolbarItemList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList::setter_removeAtIndex (GALGAS_astAutoLayoutToolbarItem & outOperand0,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_astAutoLayoutToolbarItemList * p = (cCollectionElement_astAutoLayoutToolbarItemList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_astAutoLayoutToolbarItemList) ;
        outOperand0 = p->mObject.mProperty_mItem ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList::setter_popFirst (GALGAS_astAutoLayoutToolbarItem & outOperand0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutToolbarItemList * p = (cCollectionElement_astAutoLayoutToolbarItemList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutToolbarItemList) ;
    outOperand0 = p->mObject.mProperty_mItem ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList::setter_popLast (GALGAS_astAutoLayoutToolbarItem & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutToolbarItemList * p = (cCollectionElement_astAutoLayoutToolbarItemList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutToolbarItemList) ;
    outOperand0 = p->mObject.mProperty_mItem ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList::method_first (GALGAS_astAutoLayoutToolbarItem & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutToolbarItemList * p = (cCollectionElement_astAutoLayoutToolbarItemList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutToolbarItemList) ;
    outOperand0 = p->mObject.mProperty_mItem ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList::method_last (GALGAS_astAutoLayoutToolbarItem & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutToolbarItemList * p = (cCollectionElement_astAutoLayoutToolbarItemList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutToolbarItemList) ;
    outOperand0 = p->mObject.mProperty_mItem ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList GALGAS_astAutoLayoutToolbarItemList::add_operation (const GALGAS_astAutoLayoutToolbarItemList & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutToolbarItemList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList GALGAS_astAutoLayoutToolbarItemList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutToolbarItemList result = GALGAS_astAutoLayoutToolbarItemList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList GALGAS_astAutoLayoutToolbarItemList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutToolbarItemList result = GALGAS_astAutoLayoutToolbarItemList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList GALGAS_astAutoLayoutToolbarItemList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutToolbarItemList result = GALGAS_astAutoLayoutToolbarItemList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList::plusAssign_operation (const GALGAS_astAutoLayoutToolbarItemList inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList::setter_setMItemAtIndex (GALGAS_astAutoLayoutToolbarItem inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutToolbarItemList * p = (cCollectionElement_astAutoLayoutToolbarItemList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutToolbarItemList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mItem = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItem GALGAS_astAutoLayoutToolbarItemList::getter_mItemAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutToolbarItemList * p = (cCollectionElement_astAutoLayoutToolbarItemList *) attributes.ptr () ;
  GALGAS_astAutoLayoutToolbarItem result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutToolbarItemList) ;
    result = p->mObject.mProperty_mItem ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_astAutoLayoutToolbarItemList::cEnumerator_astAutoLayoutToolbarItemList (const GALGAS_astAutoLayoutToolbarItemList & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList_2D_element cEnumerator_astAutoLayoutToolbarItemList::current (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutToolbarItemList * p = (const cCollectionElement_astAutoLayoutToolbarItemList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutToolbarItemList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItem cEnumerator_astAutoLayoutToolbarItemList::current_mItem (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutToolbarItemList * p = (const cCollectionElement_astAutoLayoutToolbarItemList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutToolbarItemList) ;
  return p->mObject.mProperty_mItem ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@astAutoLayoutToolbarItemList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astAutoLayoutToolbarItemList ("astAutoLayoutToolbarItemList",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAutoLayoutToolbarItemList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutToolbarItemList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAutoLayoutToolbarItemList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAutoLayoutToolbarItemList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList GALGAS_astAutoLayoutToolbarItemList::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutToolbarItemList result ;
  const GALGAS_astAutoLayoutToolbarItemList * p = (const GALGAS_astAutoLayoutToolbarItemList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astAutoLayoutToolbarItemList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutToolbarItemList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@astAutoLayoutOutletLinkerList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_astAutoLayoutOutletLinkerList : public cCollectionElement {
  public: GALGAS_astAutoLayoutOutletLinkerList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_astAutoLayoutOutletLinkerList (const GALGAS_lstring & in_mLinkerName,
                                                            const GALGAS_lstringlist & in_mOutletNameList
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_astAutoLayoutOutletLinkerList (const GALGAS_astAutoLayoutOutletLinkerList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_astAutoLayoutOutletLinkerList::cCollectionElement_astAutoLayoutOutletLinkerList (const GALGAS_lstring & in_mLinkerName,
                                                                                                    const GALGAS_lstringlist & in_mOutletNameList
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLinkerName, in_mOutletNameList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_astAutoLayoutOutletLinkerList::cCollectionElement_astAutoLayoutOutletLinkerList (const GALGAS_astAutoLayoutOutletLinkerList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLinkerName, inElement.mProperty_mOutletNameList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_astAutoLayoutOutletLinkerList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_astAutoLayoutOutletLinkerList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_astAutoLayoutOutletLinkerList (mObject.mProperty_mLinkerName, mObject.mProperty_mOutletNameList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_astAutoLayoutOutletLinkerList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLinkerName" ":" ;
  mObject.mProperty_mLinkerName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletNameList" ":" ;
  mObject.mProperty_mOutletNameList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_astAutoLayoutOutletLinkerList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_astAutoLayoutOutletLinkerList * operand = (cCollectionElement_astAutoLayoutOutletLinkerList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_astAutoLayoutOutletLinkerList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutOutletLinkerList::GALGAS_astAutoLayoutOutletLinkerList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutOutletLinkerList::GALGAS_astAutoLayoutOutletLinkerList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutOutletLinkerList GALGAS_astAutoLayoutOutletLinkerList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_astAutoLayoutOutletLinkerList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutOutletLinkerList GALGAS_astAutoLayoutOutletLinkerList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstringlist & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutOutletLinkerList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_astAutoLayoutOutletLinkerList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_astAutoLayoutOutletLinkerList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutOutletLinkerList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_lstring & in_mLinkerName,
                                                                      const GALGAS_lstringlist & in_mOutletNameList
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutOutletLinkerList * p = NULL ;
  macroMyNew (p, cCollectionElement_astAutoLayoutOutletLinkerList (in_mLinkerName,
                                                                   in_mOutletNameList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutOutletLinkerList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lstringlist & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_astAutoLayoutOutletLinkerList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutOutletLinkerList::setter_append (GALGAS_astAutoLayoutOutletLinkerList_2D_element inElement,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_astAutoLayoutOutletLinkerList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutOutletLinkerList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_lstringlist inOperand1,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_astAutoLayoutOutletLinkerList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutOutletLinkerList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lstringlist & outOperand1,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_astAutoLayoutOutletLinkerList * p = (cCollectionElement_astAutoLayoutOutletLinkerList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
        outOperand0 = p->mObject.mProperty_mLinkerName ;
        outOperand1 = p->mObject.mProperty_mOutletNameList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutOutletLinkerList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstringlist & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutOutletLinkerList * p = (cCollectionElement_astAutoLayoutOutletLinkerList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
    outOperand0 = p->mObject.mProperty_mLinkerName ;
    outOperand1 = p->mObject.mProperty_mOutletNameList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutOutletLinkerList::setter_popLast (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstringlist & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutOutletLinkerList * p = (cCollectionElement_astAutoLayoutOutletLinkerList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
    outOperand0 = p->mObject.mProperty_mLinkerName ;
    outOperand1 = p->mObject.mProperty_mOutletNameList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutOutletLinkerList::method_first (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstringlist & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutOutletLinkerList * p = (cCollectionElement_astAutoLayoutOutletLinkerList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
    outOperand0 = p->mObject.mProperty_mLinkerName ;
    outOperand1 = p->mObject.mProperty_mOutletNameList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutOutletLinkerList::method_last (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstringlist & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutOutletLinkerList * p = (cCollectionElement_astAutoLayoutOutletLinkerList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
    outOperand0 = p->mObject.mProperty_mLinkerName ;
    outOperand1 = p->mObject.mProperty_mOutletNameList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutOutletLinkerList GALGAS_astAutoLayoutOutletLinkerList::add_operation (const GALGAS_astAutoLayoutOutletLinkerList & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutOutletLinkerList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutOutletLinkerList GALGAS_astAutoLayoutOutletLinkerList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutOutletLinkerList result = GALGAS_astAutoLayoutOutletLinkerList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutOutletLinkerList GALGAS_astAutoLayoutOutletLinkerList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutOutletLinkerList result = GALGAS_astAutoLayoutOutletLinkerList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutOutletLinkerList GALGAS_astAutoLayoutOutletLinkerList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutOutletLinkerList result = GALGAS_astAutoLayoutOutletLinkerList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutOutletLinkerList::plusAssign_operation (const GALGAS_astAutoLayoutOutletLinkerList inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutOutletLinkerList::setter_setMLinkerNameAtIndex (GALGAS_lstring inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutOutletLinkerList * p = (cCollectionElement_astAutoLayoutOutletLinkerList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLinkerName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astAutoLayoutOutletLinkerList::getter_mLinkerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutOutletLinkerList * p = (cCollectionElement_astAutoLayoutOutletLinkerList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
    result = p->mObject.mProperty_mLinkerName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutOutletLinkerList::setter_setMOutletNameListAtIndex (GALGAS_lstringlist inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutOutletLinkerList * p = (cCollectionElement_astAutoLayoutOutletLinkerList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOutletNameList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_astAutoLayoutOutletLinkerList::getter_mOutletNameListAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutOutletLinkerList * p = (cCollectionElement_astAutoLayoutOutletLinkerList *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
    result = p->mObject.mProperty_mOutletNameList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_astAutoLayoutOutletLinkerList::cEnumerator_astAutoLayoutOutletLinkerList (const GALGAS_astAutoLayoutOutletLinkerList & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutOutletLinkerList_2D_element cEnumerator_astAutoLayoutOutletLinkerList::current (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutOutletLinkerList * p = (const cCollectionElement_astAutoLayoutOutletLinkerList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_astAutoLayoutOutletLinkerList::current_mLinkerName (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutOutletLinkerList * p = (const cCollectionElement_astAutoLayoutOutletLinkerList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
  return p->mObject.mProperty_mLinkerName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_astAutoLayoutOutletLinkerList::current_mOutletNameList (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutOutletLinkerList * p = (const cCollectionElement_astAutoLayoutOutletLinkerList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
  return p->mObject.mProperty_mOutletNameList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@astAutoLayoutOutletLinkerList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astAutoLayoutOutletLinkerList ("astAutoLayoutOutletLinkerList",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAutoLayoutOutletLinkerList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutOutletLinkerList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAutoLayoutOutletLinkerList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAutoLayoutOutletLinkerList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutOutletLinkerList GALGAS_astAutoLayoutOutletLinkerList::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutOutletLinkerList result ;
  const GALGAS_astAutoLayoutOutletLinkerList * p = (const GALGAS_astAutoLayoutOutletLinkerList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astAutoLayoutOutletLinkerList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutOutletLinkerList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}


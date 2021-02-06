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

//--- Syntax error message for terminal '$tableViewController$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_tableViewController = "the 'tableViewController' keyword" ;

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

//--- Syntax error message for terminal '$default$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_default = "the 'default' keyword" ;

//--- Syntax error message for terminal '$dependsFrom$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_dependsFrom = "the 'dependsFrom' keyword" ;

//--- Syntax error message for terminal '$autoLayoutDocument$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_autoLayoutDocument = "the 'autoLayoutDocument' keyword" ;

//--- Syntax error message for terminal '$xibdocument$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_xibdocument = "the 'xibdocument' keyword" ;

//--- Syntax error message for terminal '$enum$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_enum = "the 'enum' keyword" ;

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

//--- Syntax error message for terminal '$include$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_include = "the 'include' keyword" ;

//--- Syntax error message for terminal '$inverse$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_inverse = "the 'inverse' keyword" ;

//--- Syntax error message for terminal '$mainxib$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_mainxib = "the 'mainxib' keyword" ;

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

//--- Syntax error message for terminal '$signature$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_signature = "the 'signature' keyword" ;

//--- Syntax error message for terminal '$sort$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_sort = "the 'sort' keyword" ;

//--- Syntax error message for terminal '$space$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_space = "the 'space' keyword" ;

//--- Syntax error message for terminal '$struct$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_struct = "the 'struct' keyword" ;

//--- Syntax error message for terminal '$super$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_super = "the 'super' keyword" ;

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

//--- Syntax error message for terminal '$hStack$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_hStack = "the 'hStack' keyword" ;

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
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 90)) {
    static const char * syntaxErrorMessageArray [90] = {kEndOfSourceLexicalErrorMessage,
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
        gSyntaxErrorMessage_easyBindings_5F_lexique_tableViewController,
        gSyntaxErrorMessage_easyBindings_5F_lexique_binding,
        gSyntaxErrorMessage_easyBindings_5F_lexique_calledBy,
        gSyntaxErrorMessage_easyBindings_5F_lexique_class,
        gSyntaxErrorMessage_easyBindings_5F_lexique_classForSwift,
        gSyntaxErrorMessage_easyBindings_5F_lexique_column,
        gSyntaxErrorMessage_easyBindings_5F_lexique_computed,
        gSyntaxErrorMessage_easyBindings_5F_lexique_default,
        gSyntaxErrorMessage_easyBindings_5F_lexique_dependsFrom,
        gSyntaxErrorMessage_easyBindings_5F_lexique_autoLayoutDocument,
        gSyntaxErrorMessage_easyBindings_5F_lexique_xibdocument,
        gSyntaxErrorMessage_easyBindings_5F_lexique_enum,
        gSyntaxErrorMessage_easyBindings_5F_lexique_entity,
        gSyntaxErrorMessage_easyBindings_5F_lexique_extern,
        gSyntaxErrorMessage_easyBindings_5F_lexique_externDelegate,
        gSyntaxErrorMessage_easyBindings_5F_lexique_externFunc,
        gSyntaxErrorMessage_easyBindings_5F_lexique_func,
        gSyntaxErrorMessage_easyBindings_5F_lexique_graphic,
        gSyntaxErrorMessage_easyBindings_5F_lexique_graphviz,
        gSyntaxErrorMessage_easyBindings_5F_lexique_include,
        gSyntaxErrorMessage_easyBindings_5F_lexique_inverse,
        gSyntaxErrorMessage_easyBindings_5F_lexique_mainxib,
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
        gSyntaxErrorMessage_easyBindings_5F_lexique_signature,
        gSyntaxErrorMessage_easyBindings_5F_lexique_sort,
        gSyntaxErrorMessage_easyBindings_5F_lexique_space,
        gSyntaxErrorMessage_easyBindings_5F_lexique_struct,
        gSyntaxErrorMessage_easyBindings_5F_lexique_super,
        gSyntaxErrorMessage_easyBindings_5F_lexique_toMany,
        gSyntaxErrorMessage_easyBindings_5F_lexique_toolbarItem,
        gSyntaxErrorMessage_easyBindings_5F_lexique_toOne,
        gSyntaxErrorMessage_easyBindings_5F_lexique_transient,
        gSyntaxErrorMessage_easyBindings_5F_lexique_version,
        gSyntaxErrorMessage_easyBindings_5F_lexique_hStack,
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

//--- Unicode string for '$sort$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_sort [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
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

//--- Unicode string for '$xibdocument$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_xibdocument [] = {
  TO_UNICODE ('x'),
  TO_UNICODE ('i'),
  TO_UNICODE ('b'),
  TO_UNICODE ('d'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
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

static const int32_t ktable_size_easyBindings_5F_lexique_lowerCaseKeyWordList = 54 ;

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
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_sort, 4, C_Lexique_easyBindings_5F_lexique::kToken_sort),
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
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_hStack, 6, C_Lexique_easyBindings_5F_lexique::kToken_hStack),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_outlet, 6, C_Lexique_easyBindings_5F_lexique::kToken_outlet),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_struct, 6, C_Lexique_easyBindings_5F_lexique::kToken_struct),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_toMany, 6, C_Lexique_easyBindings_5F_lexique::kToken_toMany),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_vStack, 6, C_Lexique_easyBindings_5F_lexique::kToken_vStack),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_binding, 7, C_Lexique_easyBindings_5F_lexique::kToken_binding),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_default, 7, C_Lexique_easyBindings_5F_lexique::kToken_default),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_graphic, 7, C_Lexique_easyBindings_5F_lexique::kToken_graphic),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_include, 7, C_Lexique_easyBindings_5F_lexique::kToken_include),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_inverse, 7, C_Lexique_easyBindings_5F_lexique::kToken_inverse),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_mainxib, 7, C_Lexique_easyBindings_5F_lexique::kToken_mainxib),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_version, 7, C_Lexique_easyBindings_5F_lexique::kToken_version),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_abstract, 8, C_Lexique_easyBindings_5F_lexique::kToken_abstract),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_calledBy, 8, C_Lexique_easyBindings_5F_lexique::kToken_calledBy),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_computed, 8, C_Lexique_easyBindings_5F_lexique::kToken_computed),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_graphviz, 8, C_Lexique_easyBindings_5F_lexique::kToken_graphviz),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_override, 8, C_Lexique_easyBindings_5F_lexique::kToken_override),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_property, 8, C_Lexique_easyBindings_5F_lexique::kToken_property),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_signature, 9, C_Lexique_easyBindings_5F_lexique::kToken_signature),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_transient, 9, C_Lexique_easyBindings_5F_lexique::kToken_transient),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_autolayout, 10, C_Lexique_easyBindings_5F_lexique::kToken_autolayout),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_externFunc, 10, C_Lexique_easyBindings_5F_lexique::kToken_externFunc),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_dependsFrom, 11, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_toolbarItem, 11, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_xibdocument, 11, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_xcodeproject, 12, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_classForSwift, 13, C_Lexique_easyBindings_5F_lexique::kToken_classForSwift),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_externDelegate, 14, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_arrayController, 15, C_Lexique_easyBindings_5F_lexique::kToken_arrayController),
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
    case kToken_tableViewController:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("tableViewController") ;
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
    case kToken_autoLayoutDocument:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("autoLayoutDocument") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_xibdocument:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("xibdocument") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_enum:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("enum") ;
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
    case kToken_mainxib:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("mainxib") ;
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
    case kToken_signature:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("signature") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_sort:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("sort") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_space:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("space") ;
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
    case kToken_hStack:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("hStack") ;
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
//            Unicode test functions                                                             
//----------------------------------------------------------------------------------------------------------------------
 
//----------------------------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//----------------------------------------------------------------------------------------------------------------------

bool C_Lexique_easyBindings_5F_lexique::parseLexicalToken (void) {
  cTokenFor_easyBindings_5F_lexique token ;
  mLoop = true ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
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
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
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
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        token.mTokenCode = kToken_Identifier ;
        enterToken (token) ;
      }else if (testForInputUTF32Char (TO_UNICODE ('@'))) {
        if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('.'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
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
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
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
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        token.mTokenCode = kToken_controllerName ;
        enterToken (token) ;
      }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        do {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (testForInputUTF32Char (TO_UNICODE ('.'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('.')) ;
          do {
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
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
          if (testForInputUTF32Char (TO_UNICODE (' ')) || testForInputUTF32Char (TO_UNICODE ('!')) || testForInputUTF32CharRange (TO_UNICODE ('#'), TO_UNICODE (65533))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
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
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
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
  result.addAssign_operation (GALGAS_string ("tableViewController") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("binding") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("calledBy") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("class") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("classForSwift") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("column") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("computed") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("default") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("dependsFrom") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("autoLayoutDocument") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("xibdocument") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("enum") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("entity") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("extern") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("externDelegate") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("externFunc") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("func") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("graphic") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("graphviz") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("include") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("inverse") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("mainxib") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("signature") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sort") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("space") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("struct") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("super") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("toMany") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("toolbarItem") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("toOne") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("transient") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("version") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("hStack") COMMA_THERE) ;
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
    ioList.appendObject ("sort") ;
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
    ioList.appendObject ("hStack") ;
    ioList.appendObject ("outlet") ;
    ioList.appendObject ("struct") ;
    ioList.appendObject ("toMany") ;
    ioList.appendObject ("vStack") ;
    ioList.appendObject ("binding") ;
    ioList.appendObject ("default") ;
    ioList.appendObject ("graphic") ;
    ioList.appendObject ("include") ;
    ioList.appendObject ("inverse") ;
    ioList.appendObject ("mainxib") ;
    ioList.appendObject ("version") ;
    ioList.appendObject ("abstract") ;
    ioList.appendObject ("calledBy") ;
    ioList.appendObject ("computed") ;
    ioList.appendObject ("graphviz") ;
    ioList.appendObject ("override") ;
    ioList.appendObject ("property") ;
    ioList.appendObject ("signature") ;
    ioList.appendObject ("transient") ;
    ioList.appendObject ("autolayout") ;
    ioList.appendObject ("externFunc") ;
    ioList.appendObject ("dependsFrom") ;
    ioList.appendObject ("toolbarItem") ;
    ioList.appendObject ("xibdocument") ;
    ioList.appendObject ("xcodeproject") ;
    ioList.appendObject ("classForSwift") ;
    ioList.appendObject ("externDelegate") ;
    ioList.appendObject ("arrayController") ;
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
  static const uint32_t kTerminalSymbolStyles [90] = {0,
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
    1 /* easyBindings_lexique_1_tableViewController */,
    1 /* easyBindings_lexique_1_binding */,
    1 /* easyBindings_lexique_1_calledBy */,
    1 /* easyBindings_lexique_1_class */,
    1 /* easyBindings_lexique_1_classForSwift */,
    1 /* easyBindings_lexique_1_column */,
    1 /* easyBindings_lexique_1_computed */,
    1 /* easyBindings_lexique_1_default */,
    1 /* easyBindings_lexique_1_dependsFrom */,
    1 /* easyBindings_lexique_1_autoLayoutDocument */,
    1 /* easyBindings_lexique_1_xibdocument */,
    1 /* easyBindings_lexique_1_enum */,
    1 /* easyBindings_lexique_1_entity */,
    1 /* easyBindings_lexique_1_extern */,
    1 /* easyBindings_lexique_1_externDelegate */,
    1 /* easyBindings_lexique_1_externFunc */,
    1 /* easyBindings_lexique_1_func */,
    1 /* easyBindings_lexique_1_graphic */,
    1 /* easyBindings_lexique_1_graphviz */,
    1 /* easyBindings_lexique_1_include */,
    1 /* easyBindings_lexique_1_inverse */,
    1 /* easyBindings_lexique_1_mainxib */,
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
    1 /* easyBindings_lexique_1_signature */,
    1 /* easyBindings_lexique_1_sort */,
    1 /* easyBindings_lexique_1_space */,
    1 /* easyBindings_lexique_1_struct */,
    1 /* easyBindings_lexique_1_super */,
    1 /* easyBindings_lexique_1_toMany */,
    1 /* easyBindings_lexique_1_toolbarItem */,
    1 /* easyBindings_lexique_1_toOne */,
    1 /* easyBindings_lexique_1_transient */,
    1 /* easyBindings_lexique_1_version */,
    1 /* easyBindings_lexique_1_hStack */,
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



//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_start_5F_symbol_i0_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                      GALGAS_location & outArgument_outEndOfFile,
                                                                                      C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outEndOfFile.drop () ; // Release 'out' argument
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_include COMMA_SOURCE_FILE ("grammar-syntax.galgas", 42)) ;
      GALGAS_lstring var_filePath_1809 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("grammar-syntax.galgas", 43)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("grammar-syntax.galgas", 44)) ;
      GALGAS_lstring var_sourceFile_1840 = GALGAS_lstring::constructor_new (var_filePath_1809.getter_string (HERE).getter_absolutePathFromPath (GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("grammar-syntax.galgas", 46)).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("grammar-syntax.galgas", 46)) COMMA_SOURCE_FILE ("grammar-syntax.galgas", 46)), var_filePath_1809.getter_location (HERE)  COMMA_SOURCE_FILE ("grammar-syntax.galgas", 45)) ;
      GALGAS_location joker_2096 ; // Joker input parameter
      cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (inCompiler, var_sourceFile_1840, ioArgument_ioDeclarationAST, joker_2096  COMMA_SOURCE_FILE ("grammar-syntax.galgas", 49)) ;
    } break ;
    case 3: {
      nt_autolayout_5F_class_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 4: {
      nt_graphviz_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 5: {
      nt_enum_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 6: {
      nt_enum_5F_function_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 7: {
      nt_entity_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 8: {
      nt_class_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 9: {
      nt_preferences_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 10: {
      nt_document_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 11: {
      nt_outlet_5F_class_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 12: {
      nt_outlet_5F_binding_5F_specification_ (ioArgument_ioDeclarationAST.mProperty_mBindingSpecificationListMap, inCompiler) ;
    } break ;
    case 13: {
      nt_xcode_5F_project_ (ioArgument_ioDeclarationAST.mProperty_mXcodeProject, inCompiler) ;
    } break ;
    case 14: {
      nt_main_5F_xib_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mMainXibDescriptorList, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outEndOfFile = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("grammar-syntax.galgas", 77)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_include COMMA_SOURCE_FILE ("grammar-syntax.galgas", 42)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("grammar-syntax.galgas", 43)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("grammar-syntax.galgas", 44)) ;
    } break ;
    case 3: {
      nt_autolayout_5F_class_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_graphviz_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_enum_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_enum_5F_function_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_entity_5F_declaration_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_class_5F_declaration_parse (inCompiler) ;
    } break ;
    case 9: {
      nt_preferences_5F_declaration_parse (inCompiler) ;
    } break ;
    case 10: {
      nt_document_5F_declaration_parse (inCompiler) ;
    } break ;
    case 11: {
      nt_outlet_5F_class_5F_declaration_parse (inCompiler) ;
    } break ;
    case 12: {
      nt_outlet_5F_binding_5F_specification_parse (inCompiler) ;
    } break ;
    case 13: {
      nt_xcode_5F_project_parse (inCompiler) ;
    } break ;
    case 14: {
      nt_main_5F_xib_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_ (GALGAS_externSwiftDelegateList & ioArgument_ioExternSwiftDelegateList,
                                                                                                  C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_externDelegate COMMA_SOURCE_FILE ("extern-delegate.galgas", 20)) ;
  GALGAS_lstring var_externDelegateName_904 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("extern-delegate.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-delegate.galgas", 22)) ;
  ioArgument_ioExternSwiftDelegateList.addAssign_operation (var_externDelegateName_904  COMMA_SOURCE_FILE ("extern-delegate.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_externDelegate COMMA_SOURCE_FILE ("extern-delegate.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("extern-delegate.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-delegate.galgas", 22)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_ (GALGAS_externSwiftFunctionList & ioArgument_ioExternSwiftFunctionList,
                                                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_externFunc COMMA_SOURCE_FILE ("extern-swift-func.galgas", 21)) ;
  GALGAS_lstring var_externFunctionName_919 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_calledBy COMMA_SOURCE_FILE ("extern-swift-func.galgas", 24)) ;
  GALGAS_lstring var_callerName_1031 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-swift-func.galgas", 26)) ;
  ioArgument_ioExternSwiftFunctionList.addAssign_operation (var_externFunctionName_919, var_callerName_1031  COMMA_SOURCE_FILE ("extern-swift-func.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_externFunc COMMA_SOURCE_FILE ("extern-swift-func.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_calledBy COMMA_SOURCE_FILE ("extern-swift-func.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-swift-func.galgas", 26)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i3_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property-class.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("transient-property-class.galgas", 31)) ;
  GALGAS_bool var_isClass_1382 ;
  switch (select_easyBindings_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("transient-property-class.galgas", 34)) ;
    var_isClass_1382 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("transient-property-class.galgas", 37)) ;
    var_isClass_1382 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_propertyTypeName_1528 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property-class.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property-class.galgas", 41)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_transientClassDeclarationAST::constructor_new (var_propertyTypeName_1528, var_isClass_1382  COMMA_SOURCE_FILE ("transient-property-class.galgas", 42))  COMMA_SOURCE_FILE ("transient-property-class.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i3_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property-class.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("transient-property-class.galgas", 31)) ;
  switch (select_easyBindings_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("transient-property-class.galgas", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("transient-property-class.galgas", 37)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property-class.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property-class.galgas", 41)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_declaration_i4_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.galgas", 38)) ;
  GALGAS_lstring var_enumName_1613 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.galgas", 40)) ;
  GALGAS_lstringlist var_enumConstants_1652 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("enumeration.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_constantName_1714 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.galgas", 43)) ;
    var_enumConstants_1652.addAssign_operation (var_constantName_1714  COMMA_SOURCE_FILE ("enumeration.galgas", 44)) ;
    switch (select_easyBindings_5F_syntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("enumeration.galgas", 46)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.galgas", 48)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_enumerationDeclarationAST::constructor_new (var_enumName_1613, var_enumConstants_1652  COMMA_SOURCE_FILE ("enumeration.galgas", 49))  COMMA_SOURCE_FILE ("enumeration.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_declaration_i4_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.galgas", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.galgas", 43)) ;
    switch (select_easyBindings_5F_syntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("enumeration.galgas", 46)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.galgas", 48)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i5_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                      C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("enumeration.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.galgas", 56)) ;
  GALGAS_lstring var_enumName_2163 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("enumeration.galgas", 58)) ;
  GALGAS_lstring var_funcName_2215 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.galgas", 60)) ;
  GALGAS__32_lstringlist var_associationList_2257 = GALGAS__32_lstringlist::constructor_emptyList (SOURCE_FILE ("enumeration.galgas", 61)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_3 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_constantName_2329 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.galgas", 64)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("enumeration.galgas", 65)) ;
      GALGAS_lstring var_associatedString_2393 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("enumeration.galgas", 66)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("enumeration.galgas", 67)) ;
      var_associationList_2257.addAssign_operation (var_constantName_2329, var_associatedString_2393  COMMA_SOURCE_FILE ("enumeration.galgas", 68)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.galgas", 70)) ;
  ioArgument_ioDeclarationAST.mProperty_mEnumerationFunctionListAST.addAssign_operation (var_enumName_2163, var_funcName_2215, var_associationList_2257  COMMA_SOURCE_FILE ("enumeration.galgas", 71)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i5_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("enumeration.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("enumeration.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.galgas", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.galgas", 64)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("enumeration.galgas", 65)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("enumeration.galgas", 66)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("enumeration.galgas", 67)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.galgas", 70)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_entity_5F_declaration_i6_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                            C_Lexique_easyBindings_5F_lexique * inCompiler) {
  GALGAS_bool var_isAbstract_1675 ;
  switch (select_easyBindings_5F_syntax_4 (inCompiler)) {
  case 1: {
    var_isAbstract_1675 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("entity.galgas", 44)) ;
    var_isAbstract_1675 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_graphicEntity_1791 ;
  switch (select_easyBindings_5F_syntax_5 (inCompiler)) {
  case 1: {
    var_graphicEntity_1791 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.galgas", 51)) ;
    var_graphicEntity_1791 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("entity.galgas", 54)) ;
  GALGAS_lstring var_entityName_1943 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas", 55)) ;
  GALGAS_lstringlist var_obsoleteEntityNames_1980 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("entity.galgas", 56)) ;
  switch (select_easyBindings_5F_syntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("entity.galgas", 59)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_obsoleteName_2074 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas", 61)) ;
      var_obsoleteEntityNames_1980.addAssign_operation (var_obsoleteName_2074  COMMA_SOURCE_FILE ("entity.galgas", 62)) ;
      switch (select_easyBindings_5F_syntax_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("entity.galgas", 64)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("entity.galgas", 66)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_superEntityName_2200 ;
  switch (select_easyBindings_5F_syntax_8 (inCompiler)) {
  case 1: {
    var_superEntityName_2200 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("entity.galgas", 70)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("entity.galgas", 72)) ;
    var_superEntityName_2200 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas", 73)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("entity.galgas", 75)) ;
  GALGAS_simpleStoredPropertyList var_simpleStoredPropertyList_2373 = GALGAS_simpleStoredPropertyList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 76)) ;
  GALGAS_stringset var_signatureList_2407 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("entity.galgas", 77)) ;
  GALGAS_lstringlist var_actionDeclarationList_2451 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("entity.galgas", 78)) ;
  GALGAS_externSwiftDelegateList var_externSwiftDelegateList_2509 = GALGAS_externSwiftDelegateList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 79)) ;
  GALGAS_arrayControllerBindingListAST var_arrayControllerBindingListAST_2579 = GALGAS_arrayControllerBindingListAST::constructor_emptyList (SOURCE_FILE ("entity.galgas", 80)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_9 (inCompiler)) {
    case 2: {
      nt_simple_5F_stored_5F_declaration_ (var_entityName_1943, var_simpleStoredPropertyList_2373, var_signatureList_2407, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 3: {
      nt_transient_5F_declaration_ (var_entityName_1943, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("entity.galgas", 85)), ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 4: {
      nt_toMany_5F_relationship_ (var_entityName_1943, var_signatureList_2407, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 5: {
      nt_toOne_5F_relationship_ (var_entityName_1943, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 6: {
      nt_action_5F_declaration_ (var_actionDeclarationList_2451, inCompiler) ;
    } break ;
    case 7: {
      nt_controller_5F_declaration_ (var_entityName_1943, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("entity.galgas", 93)), var_arrayControllerBindingListAST_2579, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 8: {
      nt_extern_5F_swift_5F_delegate_ (var_externSwiftDelegateList_2509, inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("entity.galgas", 97)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_entityDeclarationAST::constructor_new (var_entityName_1943, var_isAbstract_1675, var_superEntityName_2200, var_simpleStoredPropertyList_2373, var_signatureList_2407, var_actionDeclarationList_2451, var_obsoleteEntityNames_1980, var_graphicEntity_1791, var_externSwiftDelegateList_2509  COMMA_SOURCE_FILE ("entity.galgas", 98))  COMMA_SOURCE_FILE ("entity.galgas", 98)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_bool test_3 = var_isAbstract_1675 ;
    if (kBoolTrue == test_3.boolEnum ()) {
      test_3 = var_graphicEntity_1791 ;
    }
    test_2 = test_3.boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_transientDeclarationAST::constructor_new (var_entityName_1943, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas", 112)), GALGAS_string ("EBShape").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas", 113)), GALGAS_string ("selectionDisplay").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas", 114)), GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 115)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("entity.galgas", 110))  COMMA_SOURCE_FILE ("entity.galgas", 110)) ;
      ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_transientDeclarationAST::constructor_new (var_entityName_1943, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas", 120)), GALGAS_string ("EBShape").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas", 121)), GALGAS_string ("objectDisplay").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas", 122)), GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 123)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("entity.galgas", 118))  COMMA_SOURCE_FILE ("entity.galgas", 118)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_entity_5F_declaration_i6_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("entity.galgas", 44)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("entity.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas", 55)) ;
  switch (select_easyBindings_5F_syntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("entity.galgas", 59)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas", 61)) ;
      switch (select_easyBindings_5F_syntax_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("entity.galgas", 64)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("entity.galgas", 66)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("entity.galgas", 72)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas", 73)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("entity.galgas", 75)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_9 (inCompiler)) {
    case 2: {
      nt_simple_5F_stored_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_transient_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_toMany_5F_relationship_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_toOne_5F_relationship_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_action_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_controller_5F_declaration_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_extern_5F_swift_5F_delegate_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("entity.galgas", 97)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_document_5F_declaration_i7_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_xibdocument COMMA_SOURCE_FILE ("document-xib.galgas", 34)) ;
  GALGAS_lstring var_documentName_1577 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-xib.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("document-xib.galgas", 36)) ;
  GALGAS_lstring var_rootEntityName_1634 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-xib.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("document-xib.galgas", 38)) ;
  GALGAS_outletDeclarationList var_outletDeclarationList_1691 = GALGAS_outletDeclarationList::constructor_emptyList (SOURCE_FILE ("document-xib.galgas", 39)) ;
  GALGAS_regularBindingList var_bindingList_1732 = GALGAS_regularBindingList::constructor_emptyList (SOURCE_FILE ("document-xib.galgas", 40)) ;
  GALGAS_lstringlist var_actionDeclarationList_1776 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("document-xib.galgas", 41)) ;
  GALGAS_stringset var_signatureList_1810 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("document-xib.galgas", 42)) ;
  GALGAS_arrayControllerBindingListAST var_arrayControllerBindingListAST_1880 = GALGAS_arrayControllerBindingListAST::constructor_emptyList (SOURCE_FILE ("document-xib.galgas", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_10 (inCompiler)) {
    case 2: {
      nt_action_5F_declaration_ (var_actionDeclarationList_1776, inCompiler) ;
    } break ;
    case 3: {
      nt_transient_5F_declaration_ (var_documentName_1577, var_rootEntityName_1634, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 4: {
      nt_outlet_5F_declaration_ (var_outletDeclarationList_1691, inCompiler) ;
    } break ;
    case 5: {
      nt_controller_5F_declaration_ (var_documentName_1577, var_rootEntityName_1634, var_arrayControllerBindingListAST_1880, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("document-xib.galgas", 54)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_xibDocumentDeclarationAST::constructor_new (var_documentName_1577, var_rootEntityName_1634, var_outletDeclarationList_1691, var_actionDeclarationList_1776, var_arrayControllerBindingListAST_1880  COMMA_SOURCE_FILE ("document-xib.galgas", 55))  COMMA_SOURCE_FILE ("document-xib.galgas", 55)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_transientDeclarationAST::constructor_new (var_documentName_1577, var_rootEntityName_1634, GALGAS_string ("String").getter_here (inCompiler COMMA_SOURCE_FILE ("document-xib.galgas", 65)), GALGAS_string ("documentFilePath").getter_here (inCompiler COMMA_SOURCE_FILE ("document-xib.galgas", 66)), GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("document-xib.galgas", 67)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("document-xib.galgas", 62))  COMMA_SOURCE_FILE ("document-xib.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_document_5F_declaration_i7_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_xibdocument COMMA_SOURCE_FILE ("document-xib.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-xib.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("document-xib.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-xib.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("document-xib.galgas", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_10 (inCompiler)) {
    case 2: {
      nt_action_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_transient_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_outlet_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_controller_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("document-xib.galgas", 54)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_document_5F_declaration_i8_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument COMMA_SOURCE_FILE ("document-auto-layout.galgas", 50)) ;
  GALGAS_lstring var_documentName_2172 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("document-auto-layout.galgas", 52)) ;
  GALGAS_lstring var_rootEntityName_2229 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("document-auto-layout.galgas", 54)) ;
  GALGAS_lstring var_mainViewName_2284 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("document-auto-layout.galgas", 56)) ;
  GALGAS_outletDeclarationList var_outletDeclarationList_2341 = GALGAS_outletDeclarationList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.galgas", 57)) ;
  GALGAS_regularBindingList var_bindingList_2382 = GALGAS_regularBindingList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.galgas", 58)) ;
  GALGAS_lstringlist var_actionDeclarationList_2426 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("document-auto-layout.galgas", 59)) ;
  GALGAS_stringset var_signatureList_2460 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("document-auto-layout.galgas", 60)) ;
  GALGAS_arrayControllerBindingListAST var_arrayControllerBindingListAST_2530 = GALGAS_arrayControllerBindingListAST::constructor_emptyList (SOURCE_FILE ("document-auto-layout.galgas", 61)) ;
  GALGAS_astViewDeclarationList var_viewDeclarationList_2583 = GALGAS_astViewDeclarationList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.galgas", 62)) ;
  GALGAS_astAutoLayoutToolbarItemList var_autoLayoutToolbarItemList_2648 = GALGAS_astAutoLayoutToolbarItemList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.galgas", 63)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_11 (inCompiler)) {
    case 2: {
      nt_view_5F_declaration_ (var_viewDeclarationList_2583, inCompiler) ;
    } break ;
    case 3: {
      nt_action_5F_declaration_ (var_actionDeclarationList_2426, inCompiler) ;
    } break ;
    case 4: {
      nt_transient_5F_declaration_ (var_documentName_2172, var_rootEntityName_2229, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 5: {
      nt_outlet_5F_declaration_ (var_outletDeclarationList_2341, inCompiler) ;
    } break ;
    case 6: {
      nt_controller_5F_declaration_ (var_documentName_2172, var_rootEntityName_2229, var_arrayControllerBindingListAST_2530, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem COMMA_SOURCE_FILE ("document-auto-layout.galgas", 76)) ;
      switch (select_easyBindings_5F_syntax_12 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_space COMMA_SOURCE_FILE ("document-auto-layout.galgas", 78)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("document-auto-layout.galgas", 79)) ;
        var_autoLayoutToolbarItemList_2648.addAssign_operation (GALGAS_astAutoLayoutToolbarItem::constructor_space (SOURCE_FILE ("document-auto-layout.galgas", 80))  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 80)) ;
      } break ;
      case 2: {
        GALGAS_lstring var_title_3215 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("document-auto-layout.galgas", 82)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("document-auto-layout.galgas", 83)) ;
        GALGAS_astComputedViewInstruction var_instruction_3280 ;
        nt_computed_5F_view_5F_instruction_ (var_instruction_3280, inCompiler) ;
        var_autoLayoutToolbarItemList_2648.addAssign_operation (GALGAS_astAutoLayoutToolbarItem::constructor_view (var_title_3215, var_instruction_3280  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 85))  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 85)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("document-auto-layout.galgas", 88)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_autoLayoutDocumentDeclarationAST::constructor_new (var_documentName_2172, var_rootEntityName_2229, var_mainViewName_2284, var_outletDeclarationList_2341, var_actionDeclarationList_2426, var_arrayControllerBindingListAST_2530, var_viewDeclarationList_2583, var_autoLayoutToolbarItemList_2648  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 89))  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 89)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_transientDeclarationAST::constructor_new (var_documentName_2172, var_rootEntityName_2229, GALGAS_string ("String").getter_here (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 102)), GALGAS_string ("documentFilePath").getter_here (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas", 103)), GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.galgas", 104)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 99))  COMMA_SOURCE_FILE ("document-auto-layout.galgas", 99)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_document_5F_declaration_i8_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument COMMA_SOURCE_FILE ("document-auto-layout.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("document-auto-layout.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("document-auto-layout.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("document-auto-layout.galgas", 56)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_11 (inCompiler)) {
    case 2: {
      nt_view_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_action_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_transient_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_outlet_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_controller_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem COMMA_SOURCE_FILE ("document-auto-layout.galgas", 76)) ;
      switch (select_easyBindings_5F_syntax_12 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_space COMMA_SOURCE_FILE ("document-auto-layout.galgas", 78)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("document-auto-layout.galgas", 79)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("document-auto-layout.galgas", 82)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("document-auto-layout.galgas", 83)) ;
        nt_computed_5F_view_5F_instruction_parse (inCompiler) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("document-auto-layout.galgas", 88)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_preferences_5F_declaration_i9_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("preferences.galgas", 47)) ;
  GALGAS_lstring var_prefs_1956 = GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 48)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 48))  COMMA_SOURCE_FILE ("preferences.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("preferences.galgas", 49)) ;
  GALGAS_stringset var_signatureList_2037 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("preferences.galgas", 50)) ;
  GALGAS_arrayControllerBindingListAST var_arrayControllerBindingListAST_2107 = GALGAS_arrayControllerBindingListAST::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 51)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_13 (inCompiler)) {
    case 2: {
      nt_action_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mActionDeclarationList, inCompiler) ;
    } break ;
    case 3: {
      GALGAS_simpleStoredPropertyList var_simpleStoredPropertyList_2282 = GALGAS_simpleStoredPropertyList::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 56)) ;
      nt_simple_5F_stored_5F_declaration_ (var_prefs_1956, var_simpleStoredPropertyList_2282, var_signatureList_2037, ioArgument_ioDeclarationAST, inCompiler) ;
      ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mSimpleStoredAttributeList.plusAssign_operation(var_simpleStoredPropertyList_2282, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 62)) ;
    } break ;
    case 4: {
      nt_outlet_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mOutletDeclarationList, inCompiler) ;
    } break ;
    case 5: {
      nt_transient_5F_declaration_ (var_prefs_1956, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("preferences.galgas", 66)), ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 6: {
      nt_extern_5F_swift_5F_func_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mExternSwiftFunctionList, inCompiler) ;
    } break ;
    case 7: {
      GALGAS_stringset joker_2826 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("preferences.galgas", 70)) ;
      nt_toMany_5F_relationship_ (var_prefs_1956, joker_2826, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 8: {
      nt_controller_5F_declaration_ (var_prefs_1956, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("preferences.galgas", 72)), var_arrayControllerBindingListAST_2107, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mSignatureList.plusAssign_operation(var_signatureList_2037, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 74)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("preferences.galgas", 75)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_preferences_5F_declaration_i9_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("preferences.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("preferences.galgas", 49)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_13 (inCompiler)) {
    case 2: {
      nt_action_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_simple_5F_stored_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_outlet_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_transient_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_extern_5F_swift_5F_func_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_toMany_5F_relationship_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_controller_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("preferences.galgas", 75)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_graphviz_5F_declaration_i10_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                               C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphviz COMMA_SOURCE_FILE ("graphviz.galgas", 10)) ;
  GALGAS_lstring var_entityName_546 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("graphviz.galgas", 11)) ;
  ioArgument_ioDeclarationAST.mProperty_mGraphvizList.addAssign_operation (var_entityName_546  COMMA_SOURCE_FILE ("graphviz.galgas", 12)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("graphviz.galgas", 13)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_graphviz_5F_declaration_i10_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphviz COMMA_SOURCE_FILE ("graphviz.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("graphviz.galgas", 11)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("graphviz.galgas", 13)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 79)) ;
  GALGAS_lstring var_functionName_2998 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 80)) ;
  GALGAS_autoLayoutClassParameterList var_parameterList_3070 ;
  GALGAS_lstring var_mangledName_3087 ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_ (var_functionName_2998, var_parameterList_3070, var_mangledName_3087, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 82)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mAutoLayoutVStackFunctionMap.setter_insertKey (var_mangledName_3087, var_parameterList_3070, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 83)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 80)) ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 82)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 89)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 90)) ;
  GALGAS_lstring var_functionName_3457 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 91)) ;
  GALGAS_autoLayoutClassParameterList var_parameterList_3529 ;
  GALGAS_lstring var_mangledName_3546 ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_ (var_functionName_3457, var_parameterList_3529, var_mangledName_3546, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 93)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mAutoLayoutHStackFunctionMap.setter_insertKey (var_mangledName_3546, var_parameterList_3529, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 94)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 89)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 90)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 91)) ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 93)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i13_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) {
  GALGAS_bool var_userDefined_3880 ;
  switch (select_easyBindings_5F_syntax_14 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 102)) ;
    var_userDefined_3880 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    var_userDefined_3880 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_autolayout COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 107)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 108)) ;
  GALGAS_lstring var_outletClassName_4048 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 109)) ;
  GALGAS_autoLayoutClassParameterList var_parameterList_4120 ;
  GALGAS_lstring joker_4122 ; // Joker input parameter
  nt_autolayout_5F_formal_5F_parameter_5F_list_ (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view-class.galgas", 110)), var_parameterList_4120, joker_4122, inCompiler) ;
  joker_4122.drop () ; // Release temporary input variables (joker in source)
  GALGAS_lstring var_superClassName_4151 ;
  switch (select_easyBindings_5F_syntax_15 (inCompiler)) {
  case 1: {
    var_superClassName_4151 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 113)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 115)) ;
    var_superClassName_4151 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 116)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_hasRunAction_4278 = GALGAS_bool (false) ;
  GALGAS_bool var_hasEnabled_4307 = GALGAS_bool (false) ;
  GALGAS_bool var_hasHidden_4335 = GALGAS_bool (false) ;
  GALGAS_bool var_handlesTableViewBinding_4377 = GALGAS_bool (false) ;
  GALGAS_bool var_handlesGraphicControllerBinding_4427 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 125)) ;
      var_handlesTableViewBinding_4377 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 128)) ;
      var_hasRunAction_4278 = GALGAS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 131)) ;
      var_hasEnabled_4307 = GALGAS_bool (true) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 134)) ;
      var_hasHidden_4335 = GALGAS_bool (true) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 137)) ;
      var_handlesGraphicControllerBinding_4427 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_astAutoLayoutViewFunctionMap var_astAutoLayoutViewFunctionMap_4810 = GALGAS_astAutoLayoutViewFunctionMap::constructor_emptyMap (SOURCE_FILE ("auto-layout-view-class.galgas", 140)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 141)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 144)) ;
      GALGAS_lstring var_functionName_4894 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 145)) ;
      GALGAS_autoLayoutClassParameterList var_parameterList_4968 ;
      GALGAS_lstring var_mangledName_4985 ;
      nt_autolayout_5F_formal_5F_parameter_5F_list_ (var_functionName_4894, var_parameterList_4968, var_mangledName_4985, inCompiler) ;
      {
      var_astAutoLayoutViewFunctionMap_4810.setter_insertKey (var_mangledName_4985, var_parameterList_4968, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 147)) ;
      }
    } break ;
    case 3: {
      nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (var_outletClassName_4048, ioArgument_ioDeclarationAST.mProperty_mAutoLayoutBindingSpecificationList, inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 151)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_autoLayoutViewClassDeclarationAST::constructor_new (var_outletClassName_4048, var_userDefined_3880, var_superClassName_4151, var_hasRunAction_4278, var_hasEnabled_4307, var_handlesTableViewBinding_4377, var_handlesGraphicControllerBinding_4427, var_hasHidden_4335, var_parameterList_4120, var_astAutoLayoutViewFunctionMap_4810  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 152))  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 152)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i13_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_14 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 102)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_autolayout COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 107)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 109)) ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_parse (inCompiler) ;
  switch (select_easyBindings_5F_syntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 115)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 116)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 125)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 128)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 131)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 134)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 137)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 141)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 144)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 145)) ;
      nt_autolayout_5F_formal_5F_parameter_5F_list_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_auto_5F_layout_5F_view_5F_binding_5F_specification_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 151)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i14_ (const GALGAS_lstring constinArgument_inFunctionName,
                                                                                                                 GALGAS_autoLayoutClassParameterList & outArgument_ioParameterList,
                                                                                                                 GALGAS_lstring & outArgument_outMangledName,
                                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_ioParameterList.drop () ; // Release 'out' argument
  outArgument_outMangledName.drop () ; // Release 'out' argument
  outArgument_ioParameterList = GALGAS_autoLayoutClassParameterList::constructor_emptyList (SOURCE_FILE ("auto-layout-view-class.galgas", 171)) ;
  GALGAS_string var_mangledName_5951 = constinArgument_inFunctionName.getter_string (HERE).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 172)) ;
  switch (select_easyBindings_5F_syntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 175)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_parameterName_6062 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 177)) ;
      var_mangledName_5951.plusAssign_operation(var_parameterName_6062.getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 178)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 179)) ;
      switch (select_easyBindings_5F_syntax_20 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 181)) ;
        outArgument_ioParameterList.addAssign_operation (var_parameterName_6062, GALGAS_autoLayoutClassParameterType::constructor_typeView (SOURCE_FILE ("auto-layout-view-class.galgas", 182))  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 182)) ;
      } break ;
      case 2: {
        GALGAS_lstring var_parameterTypeName_6267 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 184)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsEqual, var_parameterTypeName_6267.getter_string (HERE).objectCompare (GALGAS_string ("String"))).boolEnum () ;
          if (kBoolTrue == test_1) {
            outArgument_ioParameterList.addAssign_operation (var_parameterName_6062, GALGAS_autoLayoutClassParameterType::constructor_typeString (SOURCE_FILE ("auto-layout-view-class.galgas", 186))  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 186)) ;
          }
        }
        if (kBoolFalse == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (kIsEqual, var_parameterTypeName_6267.getter_string (HERE).objectCompare (GALGAS_string ("StringArray"))).boolEnum () ;
            if (kBoolTrue == test_2) {
              outArgument_ioParameterList.addAssign_operation (var_parameterName_6062, GALGAS_autoLayoutClassParameterType::constructor_typeStringArray (SOURCE_FILE ("auto-layout-view-class.galgas", 188))  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 188)) ;
            }
          }
          if (kBoolFalse == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (kIsEqual, var_parameterTypeName_6267.getter_string (HERE).objectCompare (GALGAS_string ("Int"))).boolEnum () ;
              if (kBoolTrue == test_3) {
                outArgument_ioParameterList.addAssign_operation (var_parameterName_6062, GALGAS_autoLayoutClassParameterType::constructor_typeInt (SOURCE_FILE ("auto-layout-view-class.galgas", 190))  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 190)) ;
              }
            }
            if (kBoolFalse == test_3) {
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = GALGAS_bool (kIsEqual, var_parameterTypeName_6267.getter_string (HERE).objectCompare (GALGAS_string ("Bool"))).boolEnum () ;
                if (kBoolTrue == test_4) {
                  outArgument_ioParameterList.addAssign_operation (var_parameterName_6062, GALGAS_autoLayoutClassParameterType::constructor_typeBool (SOURCE_FILE ("auto-layout-view-class.galgas", 192))  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 192)) ;
                }
              }
              if (kBoolFalse == test_4) {
                TC_Array <C_FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (var_parameterTypeName_6267.getter_location (SOURCE_FILE ("auto-layout-view-class.galgas", 194)), GALGAS_string ("the type 'String', 'Int' or 'Bool' is required here"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 194)) ;
              }
            }
          }
        }
      } break ;
      default:
        break ;
      }
      switch (select_easyBindings_5F_syntax_19 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 198)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 200)) ;
  } break ;
  default:
    break ;
  }
  var_mangledName_5951.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 202)) ;
  outArgument_outMangledName = GALGAS_lstring::constructor_new (var_mangledName_5951, constinArgument_inFunctionName.getter_location (HERE)  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 203)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i14_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 175)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 177)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 179)) ;
      switch (select_easyBindings_5F_syntax_20 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 181)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 184)) ;
      } break ;
      default:
        break ;
      }
      switch (select_easyBindings_5F_syntax_19 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 198)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas", 200)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i15_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                          GALGAS_autoLayoutViewClassBindingSpecificationList & ioArgument_ioBindingList,
                                                                                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) {
  GALGAS_lstring var_bindingName_1140 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 22)) ;
  GALGAS_outletClassBindingSpecificationModelList var_outletClassBindingSpecificationModelList_1227 = GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 23)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_bool var_modelShouldBeWritableProperty_1285 ;
    switch (select_easyBindings_5F_syntax_22 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 27)) ;
      var_modelShouldBeWritableProperty_1285 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 30)) ;
      var_modelShouldBeWritableProperty_1285 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_modelTypeName_1476 ;
    switch (select_easyBindings_5F_syntax_23 (inCompiler)) {
    case 1: {
      var_modelTypeName_1476 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 35)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 37)) ;
      var_modelTypeName_1476 = GALGAS_lstring::constructor_new (GALGAS_string ("enum"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 38))  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 38)) ;
    } break ;
    default:
      break ;
    }
    var_outletClassBindingSpecificationModelList_1227.addAssign_operation (var_modelTypeName_1476, var_modelShouldBeWritableProperty_1285  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 40)) ;
    switch (select_easyBindings_5F_syntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 42)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_controllerBindingOptionList var_bindingOptionList_1780 = GALGAS_controllerBindingOptionList::constructor_emptyList (SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 44)) ;
  switch (select_easyBindings_5F_syntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 47)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_optionName_1872 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 49)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 50)) ;
      GALGAS_lstring var_optionType_1930 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 51)) ;
      var_bindingOptionList_1780.addAssign_operation (var_optionName_1872, var_optionType_1930  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 52)) ;
      switch (select_easyBindings_5F_syntax_25 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 54)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 56)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioBindingList.addAssign_operation (constinArgument_inClassName, var_bindingName_1140, var_outletClassBindingSpecificationModelList_1227, var_bindingOptionList_1780  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i15_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_22 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 27)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 30)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_23 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 35)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 37)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 42)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_easyBindings_5F_syntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 47)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 49)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 50)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 51)) ;
      switch (select_easyBindings_5F_syntax_25 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 54)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas", 56)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_declaration_i16_ (GALGAS_astViewDeclarationList & ioArgument_ioViewDeclarationList,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.galgas", 121)) ;
  GALGAS_lstring var_viewName_5028 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas", 122)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 123)) ;
  switch (select_easyBindings_5F_syntax_26 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.galgas", 125)) ;
    GALGAS_astAutoLayoutViewFunctionCallList var_functionCallList_5119 ;
    nt_auto_5F_layout_5F_func_5F_call_5F_list_ (var_functionCallList_5119, inCompiler) ;
    ioArgument_ioViewDeclarationList.addAssign_operation (var_viewName_5028, GALGAS_astHorizontalStackViewDeclaration::constructor_new (var_functionCallList_5119  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 127))  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 127)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.galgas", 129)) ;
    GALGAS_astAutoLayoutViewFunctionCallList var_functionCallList_5299 ;
    nt_auto_5F_layout_5F_func_5F_call_5F_list_ (var_functionCallList_5299, inCompiler) ;
    ioArgument_ioViewDeclarationList.addAssign_operation (var_viewName_5028, GALGAS_astVerticalStackViewDeclaration::constructor_new (var_functionCallList_5299  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 131))  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 131)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 133)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_declaration_i16_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.galgas", 121)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas", 122)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 123)) ;
  switch (select_easyBindings_5F_syntax_26 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.galgas", 125)) ;
    nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.galgas", 129)) ;
    nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 133)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_declaration_i17_ (GALGAS_astViewDeclarationList & ioArgument_ioViewDeclarationList,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.galgas", 139)) ;
  GALGAS_lstring var_viewName_5662 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas", 140)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.galgas", 141)) ;
  GALGAS_astAutoLayoutViewFunctionCallList var_functionCallList_5730 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (var_functionCallList_5730, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 143)) ;
  GALGAS_astViewInstructionList var_instructionList_5762 = GALGAS_astViewInstructionList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 144)) ;
  nt_view_5F_instruction_5F_list_ (var_instructionList_5762, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 146)) ;
  ioArgument_ioViewDeclarationList.addAssign_operation (var_viewName_5662, GALGAS_astComputedVerticalViewDeclaration::constructor_new (var_functionCallList_5730, var_instructionList_5762  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 149))  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 147)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_declaration_i17_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.galgas", 139)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas", 140)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.galgas", 141)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 143)) ;
  nt_view_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 146)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i18_ (GALGAS_astAutoLayoutViewFunctionCallList & outArgument_outFunctionCallList,
                                                                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outFunctionCallList.drop () ; // Release 'out' argument
  outArgument_outFunctionCallList = GALGAS_astAutoLayoutViewFunctionCallList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 155)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_27 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_functionName_6284 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas", 158)) ;
      GALGAS_astAutoLayoutViewInstructionParameterList var_actualParameterList_6345 ;
      nt_view_5F_actual_5F_parameter_5F_list_ (var_actualParameterList_6345, inCompiler) ;
      outArgument_outFunctionCallList.addAssign_operation (var_functionName_6284, var_actualParameterList_6345  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 160)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i18_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas", 158)) ;
      nt_view_5F_actual_5F_parameter_5F_list_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_declaration_i19_ (GALGAS_astViewDeclarationList & ioArgument_ioViewDeclarationList,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.galgas", 167)) ;
  GALGAS_lstring var_viewName_6668 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas", 168)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.galgas", 169)) ;
  GALGAS_astAutoLayoutViewFunctionCallList var_functionCallList_6736 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (var_functionCallList_6736, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 171)) ;
  GALGAS_astViewInstructionList var_instructionList_6768 = GALGAS_astViewInstructionList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 172)) ;
  nt_view_5F_instruction_5F_list_ (var_instructionList_6768, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 174)) ;
  ioArgument_ioViewDeclarationList.addAssign_operation (var_viewName_6668, GALGAS_astComputedHorizontalViewDeclaration::constructor_new (var_functionCallList_6736, var_instructionList_6768  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 177))  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 175)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_declaration_i19_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.galgas", 167)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas", 168)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.galgas", 169)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 171)) ;
  nt_view_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 174)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i20_ (GALGAS_astViewInstructionList & ioArgument_ioInstructionList,
                                                                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_28 (inCompiler)) {
    case 2: {
      GALGAS_astAbstractViewInstructionDeclaration var_instruction_7251 ;
      nt_view_5F_instruction_ (var_instruction_7251, inCompiler) ;
      ioArgument_ioInstructionList.addAssign_operation (var_instruction_7251  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 186)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i20_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_28 (inCompiler)) {
    case 2: {
      nt_view_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i21_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_space COMMA_SOURCE_FILE ("auto-layout-view.galgas", 193)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 194)) ;
  outArgument_outInstruction = GALGAS_astSpaceViewInstruction::constructor_new (SOURCE_FILE ("auto-layout-view.galgas", 195)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i21_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_space COMMA_SOURCE_FILE ("auto-layout-view.galgas", 193)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 194)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i22_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.galgas", 201)) ;
  GALGAS_lstring var_localViewName_7842 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas", 202)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 203)) ;
  outArgument_outInstruction = GALGAS_astLocalViewInstruction::constructor_new (var_localViewName_7842  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 204)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i22_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.galgas", 201)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas", 202)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 203)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i23_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_astComputedViewInstruction var_instruction_8178 ;
  nt_computed_5F_view_5F_instruction_ (var_instruction_8178, inCompiler) ;
  outArgument_outInstruction = var_instruction_8178 ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i23_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_computed_5F_view_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i24_ (GALGAS_astComputedViewInstruction & outArgument_outInstruction,
                                                                                                       C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_viewClassName_8459 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas", 217)) ;
  GALGAS_astAutoLayoutViewInstructionParameterList var_instanciationParameterList_8524 ;
  nt_view_5F_actual_5F_parameter_5F_list_ (var_instanciationParameterList_8524, inCompiler) ;
  GALGAS_astAutoLayoutViewFunctionCallList var_autoLayoutViewFunctionCallList_8593 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (var_autoLayoutViewFunctionCallList_8593, inCompiler) ;
  GALGAS_tableValueBinding var_tableValueBinding_8656 ;
  GALGAS_runActionDescriptor var_runActionDescriptor_8723 ;
  GALGAS_multipleBindingDescriptor var_enabledBindingDescriptor_8801 ;
  GALGAS_multipleBindingDescriptor var_hiddenBindingDescriptor_8878 ;
  GALGAS_graphicController var_graphicController_8941 ;
  GALGAS_regularBindingList var_regularBindingList_9006 ;
  nt_outlet_5F_binding_ (var_tableValueBinding_8656, var_runActionDescriptor_8723, var_enabledBindingDescriptor_8801, var_hiddenBindingDescriptor_8878, var_graphicController_8941, var_regularBindingList_9006, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 226)) ;
  outArgument_outInstruction = GALGAS_astComputedViewInstruction::constructor_new (var_viewClassName_8459, var_instanciationParameterList_8524, var_autoLayoutViewFunctionCallList_8593, var_tableValueBinding_8656, var_runActionDescriptor_8723, var_enabledBindingDescriptor_8801, var_hiddenBindingDescriptor_8878, var_graphicController_8941, var_regularBindingList_9006  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 227)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i24_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas", 217)) ;
  nt_view_5F_actual_5F_parameter_5F_list_parse (inCompiler) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
  nt_outlet_5F_binding_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 226)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i25_ (GALGAS_astAutoLayoutViewInstructionParameterList & outArgument_outParameterList,
                                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outParameterList.drop () ; // Release 'out' argument
  outArgument_outParameterList = GALGAS_astAutoLayoutViewInstructionParameterList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 243)) ;
  switch (select_easyBindings_5F_syntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 246)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_parameterName_9669 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas", 248)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 249)) ;
      switch (select_easyBindings_5F_syntax_31 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.galgas", 251)) ;
        GALGAS_lstring var_viewName_9750 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas", 252)) ;
        outArgument_outParameterList.addAssign_operation (var_parameterName_9669, GALGAS_autoLayoutClassParameterType::constructor_typeView (SOURCE_FILE ("auto-layout-view.galgas", 253)), GALGAS_astAutoLayoutViewInstructionParameterValue::constructor_string (GALGAS_string ("self.").add_operation (var_viewName_9750.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 253))  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 253))  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 253)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("auto-layout-view.galgas", 255)) ;
        outArgument_outParameterList.addAssign_operation (var_parameterName_9669, GALGAS_autoLayoutClassParameterType::constructor_typeBool (SOURCE_FILE ("auto-layout-view.galgas", 256)), GALGAS_astAutoLayoutViewInstructionParameterValue::constructor_string (GALGAS_string ("true")  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 256))  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 256)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("auto-layout-view.galgas", 258)) ;
        outArgument_outParameterList.addAssign_operation (var_parameterName_9669, GALGAS_autoLayoutClassParameterType::constructor_typeBool (SOURCE_FILE ("auto-layout-view.galgas", 259)), GALGAS_astAutoLayoutViewInstructionParameterValue::constructor_string (GALGAS_string ("false")  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 259))  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 259)) ;
      } break ;
      case 4: {
        GALGAS_luint var_uint_33__32__10120 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.galgas", 261)) ;
        outArgument_outParameterList.addAssign_operation (var_parameterName_9669, GALGAS_autoLayoutClassParameterType::constructor_typeInt (SOURCE_FILE ("auto-layout-view.galgas", 262)), GALGAS_astAutoLayoutViewInstructionParameterValue::constructor_string (var_uint_33__32__10120.getter_uint (HERE).getter_string (SOURCE_FILE ("auto-layout-view.galgas", 262))  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 262))  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 262)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 264)) ;
        GALGAS_luint var_uint_33__32__10280 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.galgas", 265)) ;
        outArgument_outParameterList.addAssign_operation (var_parameterName_9669, GALGAS_autoLayoutClassParameterType::constructor_typeInt (SOURCE_FILE ("auto-layout-view.galgas", 266)), GALGAS_astAutoLayoutViewInstructionParameterValue::constructor_string (GALGAS_string ("-").add_operation (var_uint_33__32__10280.getter_uint (HERE).getter_string (SOURCE_FILE ("auto-layout-view.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas", 266))  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 266))  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 266)) ;
      } break ;
      case 6: {
        GALGAS_lstring var_literalString_10438 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.galgas", 268)) ;
        outArgument_outParameterList.addAssign_operation (var_parameterName_9669, GALGAS_autoLayoutClassParameterType::constructor_typeString (SOURCE_FILE ("auto-layout-view.galgas", 269)), GALGAS_astAutoLayoutViewInstructionParameterValue::constructor_string (var_literalString_10438.getter_string (HERE).getter_cStringRepresentation (SOURCE_FILE ("auto-layout-view.galgas", 269))  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 269))  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 269)) ;
      } break ;
      case 7: {
        GALGAS_lstring var_enumTypeName_10612 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas", 271)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 272)) ;
        GALGAS_lstring var_enumFuncName_10667 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas", 273)) ;
        outArgument_outParameterList.addAssign_operation (var_parameterName_9669, GALGAS_autoLayoutClassParameterType::constructor_typeStringArray (SOURCE_FILE ("auto-layout-view.galgas", 274)), GALGAS_astAutoLayoutViewInstructionParameterValue::constructor_enumFunc (var_enumTypeName_10612, var_enumFuncName_10667  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 274))  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 274)) ;
      } break ;
      default:
        break ;
      }
      switch (select_easyBindings_5F_syntax_30 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 277)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 279)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i25_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 246)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas", 248)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 249)) ;
      switch (select_easyBindings_5F_syntax_31 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.galgas", 251)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas", 252)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("auto-layout-view.galgas", 255)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("auto-layout-view.galgas", 258)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.galgas", 261)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 264)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.galgas", 265)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.galgas", 268)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas", 271)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 272)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas", 273)) ;
      } break ;
      default:
        break ;
      }
      switch (select_easyBindings_5F_syntax_30 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 277)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 279)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i26_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.galgas", 286)) ;
  GALGAS_astAutoLayoutViewFunctionCallList var_functionCallList_11144 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (var_functionCallList_11144, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 288)) ;
  GALGAS_astViewInstructionList var_instructionList_11176 = GALGAS_astViewInstructionList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 289)) ;
  nt_view_5F_instruction_5F_list_ (var_instructionList_11176, inCompiler) ;
  outArgument_outInstruction = GALGAS_astVStackViewInstructionDeclaration::constructor_new (var_functionCallList_11144, var_instructionList_11176  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 291)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 292)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i26_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.galgas", 286)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 288)) ;
  nt_view_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 292)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i27_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.galgas", 298)) ;
  GALGAS_astAutoLayoutViewFunctionCallList var_functionCallList_11639 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (var_functionCallList_11639, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 300)) ;
  GALGAS_astViewInstructionList var_instructionList_11671 = GALGAS_astViewInstructionList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.galgas", 301)) ;
  nt_view_5F_instruction_5F_list_ (var_instructionList_11671, inCompiler) ;
  outArgument_outInstruction = GALGAS_astHStackViewInstructionDeclaration::constructor_new (var_functionCallList_11639, var_instructionList_11671  COMMA_SOURCE_FILE ("auto-layout-view.galgas", 303)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 304)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i27_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.galgas", 298)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 300)) ;
  nt_view_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas", 304)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i28_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                      C_Lexique_easyBindings_5F_lexique * inCompiler) {
  GALGAS_bool var_userDefined_1598 ;
  switch (select_easyBindings_5F_syntax_32 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("outlet-class.galgas", 41)) ;
    var_userDefined_1598 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    var_userDefined_1598 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-class.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("outlet-class.galgas", 47)) ;
  GALGAS_lstring var_outletClassName_1762 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.galgas", 48)) ;
  GALGAS_lstring var_superClassName_1790 ;
  switch (select_easyBindings_5F_syntax_33 (inCompiler)) {
  case 1: {
    var_superClassName_1790 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-class.galgas", 53)) ;
    var_superClassName_1790 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.galgas", 54)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_hasRunAction_1917 = GALGAS_bool (false) ;
  GALGAS_bool var_hasEnabled_1946 = GALGAS_bool (false) ;
  GALGAS_bool var_hasHidden_1974 = GALGAS_bool (false) ;
  GALGAS_bool var_handlesTableViewBinding_2016 = GALGAS_bool (false) ;
  GALGAS_bool var_handlesGraphicControllerBinding_2066 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_34 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-class.galgas", 63)) ;
      var_handlesTableViewBinding_2016 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-class.galgas", 66)) ;
      var_hasRunAction_1917 = GALGAS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-class.galgas", 69)) ;
      var_hasEnabled_1946 = GALGAS_bool (true) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-class.galgas", 72)) ;
      var_hasHidden_1974 = GALGAS_bool (true) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-class.galgas", 75)) ;
      var_handlesGraphicControllerBinding_2066 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-class.galgas", 78)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_outletClassDeclarationAST::constructor_new (var_outletClassName_1762, var_userDefined_1598, var_superClassName_1790, var_hasRunAction_1917, var_hasEnabled_1946, var_handlesTableViewBinding_2016, var_handlesGraphicControllerBinding_2066, var_hasHidden_1974  COMMA_SOURCE_FILE ("outlet-class.galgas", 79))  COMMA_SOURCE_FILE ("outlet-class.galgas", 79)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i28_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_32 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("outlet-class.galgas", 41)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-class.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("outlet-class.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.galgas", 48)) ;
  switch (select_easyBindings_5F_syntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-class.galgas", 53)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.galgas", 54)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_34 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-class.galgas", 63)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-class.galgas", 66)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-class.galgas", 69)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-class.galgas", 72)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-class.galgas", 75)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-class.galgas", 78)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i29_ (GALGAS_outletClassBindingSpecificationList & ioArgument_ioControllerTemplateList,
                                                                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_binding COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 36)) ;
  GALGAS_lstring var_outletClassName_1518 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 37)) ;
  GALGAS_lstring var_bindingName_1562 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 39)) ;
  GALGAS_outletClassBindingSpecificationModelList var_outletClassBindingSpecificationModelList_1657 = GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("outlet-binding-specification.galgas", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_bool var_modelShouldBeWritableProperty_1715 ;
    switch (select_easyBindings_5F_syntax_36 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 44)) ;
      var_modelShouldBeWritableProperty_1715 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 47)) ;
      var_modelShouldBeWritableProperty_1715 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_modelTypeName_1906 ;
    switch (select_easyBindings_5F_syntax_37 (inCompiler)) {
    case 1: {
      var_modelTypeName_1906 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 52)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 54)) ;
      var_modelTypeName_1906 = GALGAS_lstring::constructor_new (GALGAS_string ("enum"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 55))  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 55)) ;
    } break ;
    default:
      break ;
    }
    var_outletClassBindingSpecificationModelList_1657.addAssign_operation (var_modelTypeName_1906, var_modelShouldBeWritableProperty_1715  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 57)) ;
    switch (select_easyBindings_5F_syntax_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 59)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_controllerBindingOptionList var_bindingOptionList_2210 = GALGAS_controllerBindingOptionList::constructor_emptyList (SOURCE_FILE ("outlet-binding-specification.galgas", 61)) ;
  switch (select_easyBindings_5F_syntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 64)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_optionName_2302 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 66)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 67)) ;
      GALGAS_lstring var_optionType_2360 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 68)) ;
      var_bindingOptionList_2210.addAssign_operation (var_optionName_2302, var_optionType_2360  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 69)) ;
      switch (select_easyBindings_5F_syntax_39 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 71)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 73)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 75)) ;
  ioArgument_ioControllerTemplateList.addAssign_operation (var_outletClassName_1518, var_bindingName_1562, var_outletClassBindingSpecificationModelList_1657, var_bindingOptionList_2210  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 76)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i29_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_binding COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_36 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 44)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 47)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_37 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 52)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 54)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 59)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_easyBindings_5F_syntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 64)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 66)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 68)) ;
      switch (select_easyBindings_5F_syntax_39 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 71)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 73)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas", 75)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_declaration_i30_ (GALGAS_outletDeclarationList & ioArgument_ioOutletDeclarationList,
                                                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-declaration.galgas", 46)) ;
  GALGAS_lstring var_outletTypeName_1821 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 47)) ;
  GALGAS_lstring var_outletName_1854 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 48)) ;
  GALGAS_tableValueBinding var_tableValueBinding_1917 ;
  GALGAS_runActionDescriptor var_runActionDescriptor_1984 ;
  GALGAS_multipleBindingDescriptor var_enabledBindingDescriptor_2062 ;
  GALGAS_multipleBindingDescriptor var_hiddenBindingDescriptor_2139 ;
  GALGAS_graphicController var_graphicController_2202 ;
  GALGAS_regularBindingList var_regularBindingList_2267 ;
  nt_outlet_5F_binding_ (var_tableValueBinding_1917, var_runActionDescriptor_1984, var_enabledBindingDescriptor_2062, var_hiddenBindingDescriptor_2139, var_graphicController_2202, var_regularBindingList_2267, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 55)) ;
  ioArgument_ioOutletDeclarationList.addAssign_operation (var_outletTypeName_1821, var_outletName_1854, var_tableValueBinding_1917, var_runActionDescriptor_1984, var_enabledBindingDescriptor_2062, var_hiddenBindingDescriptor_2139, var_regularBindingList_2267, var_graphicController_2202  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_declaration_i30_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-declaration.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 48)) ;
  nt_outlet_5F_binding_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 55)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_i31_ (GALGAS_tableValueBinding & outArgument_tableValueBinding,
                                                                                         GALGAS_runActionDescriptor & outArgument_runActionDescriptor,
                                                                                         GALGAS_multipleBindingDescriptor & outArgument_enabledBindingDescriptor,
                                                                                         GALGAS_multipleBindingDescriptor & outArgument_hiddenBindingDescriptor,
                                                                                         GALGAS_graphicController & outArgument_graphicController,
                                                                                         GALGAS_regularBindingList & outArgument_regularBindingList,
                                                                                         C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_tableValueBinding.drop () ; // Release 'out' argument
  outArgument_runActionDescriptor.drop () ; // Release 'out' argument
  outArgument_enabledBindingDescriptor.drop () ; // Release 'out' argument
  outArgument_hiddenBindingDescriptor.drop () ; // Release 'out' argument
  outArgument_graphicController.drop () ; // Release 'out' argument
  outArgument_regularBindingList.drop () ; // Release 'out' argument
  outArgument_tableValueBinding = GALGAS_tableValueBinding::constructor_noTableValueBinding (SOURCE_FILE ("outlet-declaration.galgas", 75)) ;
  outArgument_runActionDescriptor = GALGAS_runActionDescriptor::constructor_noAction (SOURCE_FILE ("outlet-declaration.galgas", 76)) ;
  outArgument_enabledBindingDescriptor = GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("outlet-declaration.galgas", 77)) ;
  outArgument_hiddenBindingDescriptor = GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("outlet-declaration.galgas", 78)) ;
  outArgument_graphicController = GALGAS_graphicController::constructor_none (SOURCE_FILE ("outlet-declaration.galgas", 79)) ;
  outArgument_regularBindingList = GALGAS_regularBindingList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 80)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-declaration.galgas", 83)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, outArgument_tableValueBinding.objectCompare (GALGAS_tableValueBinding::constructor_noTableValueBinding (SOURCE_FILE ("outlet-declaration.galgas", 84)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 85)), GALGAS_string ("duplicated $tableValue binding"), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 85)) ;
        }
      }
      GALGAS_lstring var_controllerName_3595 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.galgas", 87)) ;
      outArgument_tableValueBinding = GALGAS_tableValueBinding::constructor_tableValueBinding (var_controllerName_3595  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 88)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-declaration.galgas", 90)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, outArgument_runActionDescriptor.objectCompare (GALGAS_runActionDescriptor::constructor_noAction (SOURCE_FILE ("outlet-declaration.galgas", 91)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 92)), GALGAS_string ("duplicated $run binding"), fixItArray4  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 92)) ;
        }
      }
      GALGAS_lstring var_runTargetName_3829 ;
      switch (select_easyBindings_5F_syntax_41 (inCompiler)) {
      case 1: {
        var_runTargetName_3829 = GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 96))  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 96)) ;
      } break ;
      case 2: {
        var_runTargetName_3829 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.galgas", 98)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 99)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_runActionName_4014 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 101)) ;
      outArgument_runActionDescriptor = GALGAS_runActionDescriptor::constructor_action (var_runTargetName_3829, var_runActionName_4014  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 102)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-declaration.galgas", 105)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsNotEqual, outArgument_enabledBindingDescriptor.objectCompare (GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("outlet-declaration.galgas", 106)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 107)), GALGAS_string ("duplicated $enabled binding"), fixItArray6  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 107)) ;
        }
      }
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_4361 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_4361, inCompiler) ;
      outArgument_enabledBindingDescriptor = GALGAS_multipleBindingDescriptor::constructor_binding (var_bindingExpression_4361  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 110)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-declaration.galgas", 113)) ;
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsNotEqual, outArgument_hiddenBindingDescriptor.objectCompare (GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("outlet-declaration.galgas", 114)))).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 115)), GALGAS_string ("duplicated $hidden binding"), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 115)) ;
        }
      }
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_4696 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_4696, inCompiler) ;
      outArgument_hiddenBindingDescriptor = GALGAS_multipleBindingDescriptor::constructor_binding (var_bindingExpression_4696  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 118)) ;
    } break ;
    case 6: {
      GALGAS_lstring var_bindingName_4848 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-declaration.galgas", 121)) ;
      GALGAS_observablePropertyList var_observablePropertyList_4901 = GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 122)) ;
      bool repeatFlag_9 = true ;
      while (repeatFlag_9) {
        GALGAS_observablePropertyAST var_observableProperty_4996 ;
        nt_observable_5F_property_ (var_observableProperty_4996, inCompiler) ;
        var_observablePropertyList_4901.addAssign_operation (var_observableProperty_4996  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 125)) ;
        switch (select_easyBindings_5F_syntax_42 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 127)) ;
        } break ;
        default:
          repeatFlag_9 = false ;
          break ;
        }
      }
      GALGAS_bindingOptionList var_bindingOptions_5132 ;
      nt_binding_5F_option_5F_list_ (var_bindingOptions_5132, inCompiler) ;
      outArgument_regularBindingList.addAssign_operation (var_bindingName_4848, var_observablePropertyList_4901, var_bindingOptions_5132  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 130)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-declaration.galgas", 136)) ;
      GALGAS_lstring var_graphicControllerName_5366 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.galgas", 137)) ;
      GALGAS_lstring var_propertyName_5394 ;
      switch (select_easyBindings_5F_syntax_43 (inCompiler)) {
      case 1: {
        var_propertyName_5394 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 140)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 142)) ;
        var_propertyName_5394 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 143)) ;
      } break ;
      default:
        break ;
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = outArgument_graphicController.getter_isNone (SOURCE_FILE ("outlet-declaration.galgas", 145)).boolEnum () ;
        if (kBoolTrue == test_10) {
          outArgument_graphicController = GALGAS_graphicController::constructor_defined (var_graphicControllerName_5366, var_propertyName_5394  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 146)) ;
        }
      }
      if (kBoolFalse == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (var_graphicControllerName_5366.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 148)), GALGAS_string ("binding already defined"), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 148)) ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_i31_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-declaration.galgas", 83)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.galgas", 87)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-declaration.galgas", 90)) ;
      switch (select_easyBindings_5F_syntax_41 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.galgas", 98)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 99)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 101)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-declaration.galgas", 105)) ;
      nt_booleanMultipleBindingExpression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-declaration.galgas", 113)) ;
      nt_booleanMultipleBindingExpression_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-declaration.galgas", 121)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        nt_observable_5F_property_parse (inCompiler) ;
        switch (select_easyBindings_5F_syntax_42 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 127)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      nt_binding_5F_option_5F_list_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-declaration.galgas", 136)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.galgas", 137)) ;
      switch (select_easyBindings_5F_syntax_43 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 142)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 143)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_observable_5F_property_i32_ (GALGAS_observablePropertyAST & outArgument_outObservablePropertyAST,
                                                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outObservablePropertyAST.drop () ; // Release 'out' argument
  switch (select_easyBindings_5F_syntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("observable-property.galgas", 44)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 45)) ;
    GALGAS_lstring var_propertyName_2292 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 46)) ;
    switch (select_easyBindings_5F_syntax_45 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_rootProperty (var_propertyName_2292  COMMA_SOURCE_FILE ("observable-property.galgas", 48)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 50)) ;
      switch (select_easyBindings_5F_syntax_46 (inCompiler)) {
      case 1: {
        GALGAS_lstring var_optionName_2458 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 52)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_rootPropertyWithOption (var_propertyName_2292, var_optionName_2458  COMMA_SOURCE_FILE ("observable-property.galgas", 53)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas", 55)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 56)) ;
        GALGAS_lstring var_observablePropertyName_2663 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 57)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_rootPropertyRelationship (var_propertyName_2292, var_observablePropertyName_2663  COMMA_SOURCE_FILE ("observable-property.galgas", 58)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.galgas", 62)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_rootPropertyNone (var_propertyName_2292  COMMA_SOURCE_FILE ("observable-property.galgas", 63)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("observable-property.galgas", 67)) ;
    switch (select_easyBindings_5F_syntax_47 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfWithoutProperty (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.galgas", 69))  COMMA_SOURCE_FILE ("observable-property.galgas", 69)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 71)) ;
      GALGAS_lstring var_propertyName_3131 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 72)) ;
      switch (select_easyBindings_5F_syntax_48 (inCompiler)) {
      case 1: {
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfProperty (var_propertyName_3131  COMMA_SOURCE_FILE ("observable-property.galgas", 74)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 76)) ;
        switch (select_easyBindings_5F_syntax_49 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas", 78)) ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 79)) ;
          GALGAS_lstring var_elementPropertyName_3354 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 80)) ;
          outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfPropertyArray (var_propertyName_3131, var_elementPropertyName_3354  COMMA_SOURCE_FILE ("observable-property.galgas", 81)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.galgas", 86)) ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 87)) ;
          GALGAS_lstring var_elementPropertyName_3621 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 88)) ;
          outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfPropertyObject (var_propertyName_3131, var_elementPropertyName_3621  COMMA_SOURCE_FILE ("observable-property.galgas", 89)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.galgas", 94)) ;
          outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfPropertyNone (var_propertyName_3131  COMMA_SOURCE_FILE ("observable-property.galgas", 95)) ;
        } break ;
        case 4: {
          GALGAS_lstring var_optionName_3964 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 97)) ;
          outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfPropertyWithOption (var_propertyName_3131, var_optionName_3964  COMMA_SOURCE_FILE ("observable-property.galgas", 98)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("observable-property.galgas", 103)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 104)) ;
    GALGAS_lstring var_propertyName_4183 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 105)) ;
    switch (select_easyBindings_5F_syntax_50 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_prefsProperty (var_propertyName_4183  COMMA_SOURCE_FILE ("observable-property.galgas", 107)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 109)) ;
      GALGAS_lstring var_optionName_4335 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 110)) ;
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_prefsPropertyWithOption (var_propertyName_4183, var_optionName_4335  COMMA_SOURCE_FILE ("observable-property.galgas", 111)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    GALGAS_lstring var_controllerName_4507 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("observable-property.galgas", 114)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 115)) ;
    switch (select_easyBindings_5F_syntax_51 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.galgas", 117)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 118)) ;
      GALGAS_lstring var_propertyName_4595 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 119)) ;
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfControllerOneProperty (var_controllerName_4507, var_propertyName_4595  COMMA_SOURCE_FILE ("observable-property.galgas", 120)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_propertyName_4765 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 122)) ;
      switch (select_easyBindings_5F_syntax_52 (inCompiler)) {
      case 1: {
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfControllerProperty (var_controllerName_4507, var_propertyName_4765  COMMA_SOURCE_FILE ("observable-property.galgas", 124)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 126)) ;
        GALGAS_lstring var_secondaryPropertyName_4976 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 127)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfControllerSecondaryProperty (var_controllerName_4507, var_propertyName_4765, var_secondaryPropertyName_4976  COMMA_SOURCE_FILE ("observable-property.galgas", 128)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 134)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas", 135)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 136)) ;
        GALGAS_lstring var_secondaryPropertyName_5304 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 137)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfControllerAllProperties (var_controllerName_4507, var_propertyName_4765, var_secondaryPropertyName_5304  COMMA_SOURCE_FILE ("observable-property.galgas", 138)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_signature COMMA_SOURCE_FILE ("observable-property.galgas", 146)) ;
    outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_signatureProperty (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.galgas", 147))  COMMA_SOURCE_FILE ("observable-property.galgas", 147)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_version COMMA_SOURCE_FILE ("observable-property.galgas", 149)) ;
    outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_versionProperty (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.galgas", 150))  COMMA_SOURCE_FILE ("observable-property.galgas", 150)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange COMMA_SOURCE_FILE ("observable-property.galgas", 152)) ;
    outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_versionShouldChangeProperty (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.galgas", 153))  COMMA_SOURCE_FILE ("observable-property.galgas", 153)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_super COMMA_SOURCE_FILE ("observable-property.galgas", 155)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 156)) ;
    GALGAS_lstring var_superEntityName_5920 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("observable-property.galgas", 157)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 158)) ;
    GALGAS_lstring var_propertyName_5967 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 159)) ;
    outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_superProperty (var_superEntityName_5920, var_propertyName_5967  COMMA_SOURCE_FILE ("observable-property.galgas", 160)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_observable_5F_property_i32_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("observable-property.galgas", 44)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 45)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 46)) ;
    switch (select_easyBindings_5F_syntax_45 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 50)) ;
      switch (select_easyBindings_5F_syntax_46 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 52)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas", 55)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 56)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 57)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.galgas", 62)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("observable-property.galgas", 67)) ;
    switch (select_easyBindings_5F_syntax_47 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 71)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 72)) ;
      switch (select_easyBindings_5F_syntax_48 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 76)) ;
        switch (select_easyBindings_5F_syntax_49 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas", 78)) ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 79)) ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 80)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.galgas", 86)) ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 87)) ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 88)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.galgas", 94)) ;
        } break ;
        case 4: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 97)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("observable-property.galgas", 103)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 104)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 105)) ;
    switch (select_easyBindings_5F_syntax_50 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 109)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 110)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("observable-property.galgas", 114)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 115)) ;
    switch (select_easyBindings_5F_syntax_51 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.galgas", 117)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 118)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 119)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 122)) ;
      switch (select_easyBindings_5F_syntax_52 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 126)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 127)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 134)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas", 135)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 136)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 137)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_signature COMMA_SOURCE_FILE ("observable-property.galgas", 146)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_version COMMA_SOURCE_FILE ("observable-property.galgas", 149)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange COMMA_SOURCE_FILE ("observable-property.galgas", 152)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_super COMMA_SOURCE_FILE ("observable-property.galgas", 155)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 156)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("observable-property.galgas", 157)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 158)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 159)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i33_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                const GALGAS_lstring constinArgument_inRootEntity,
                                                                                                GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("computed-property.galgas", 118)) ;
  GALGAS_lstring var_transientTypeName_5866 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("computed-property.galgas", 119)) ;
  GALGAS_lstring var_transientName_5911 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("computed-property.galgas", 120)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("computed-property.galgas", 121)) ;
  GALGAS_observablePropertyList var_dependanceList_5972 = GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("computed-property.galgas", 122)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_observablePropertyAST var_observablePropertyAST_6066 ;
    nt_observable_5F_property_ (var_observablePropertyAST_6066, inCompiler) ;
    var_dependanceList_5972.addAssign_operation (var_observablePropertyAST_6066  COMMA_SOURCE_FILE ("computed-property.galgas", 125)) ;
    switch (select_easyBindings_5F_syntax_53 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("computed-property.galgas", 127)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("computed-property.galgas", 129)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_computedPropertyDeclarationAST::constructor_new (constinArgument_inCurrentEntity, constinArgument_inRootEntity, var_transientTypeName_5866, var_transientName_5911, var_dependanceList_5972  COMMA_SOURCE_FILE ("computed-property.galgas", 130))  COMMA_SOURCE_FILE ("computed-property.galgas", 130)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i33_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("computed-property.galgas", 118)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("computed-property.galgas", 119)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("computed-property.galgas", 120)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("computed-property.galgas", 121)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_observable_5F_property_parse (inCompiler) ;
    switch (select_easyBindings_5F_syntax_53 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("computed-property.galgas", 127)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("computed-property.galgas", 129)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i34_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                const GALGAS_lstring constinArgument_inRootEntity,
                                                                                                GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("transient-property.galgas", 90)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.galgas", 91)) ;
  GALGAS_lstring var_transientTypeName_5050 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.galgas", 92)) ;
  GALGAS_lstring var_transientName_5095 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.galgas", 93)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.galgas", 94)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_transientDeclarationAST::constructor_new (constinArgument_inCurrentEntity, constinArgument_inRootEntity, var_transientTypeName_5050, var_transientName_5095, GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 100)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("transient-property.galgas", 95))  COMMA_SOURCE_FILE ("transient-property.galgas", 95)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i34_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("transient-property.galgas", 90)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.galgas", 91)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.galgas", 92)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.galgas", 93)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.galgas", 94)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i35_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                const GALGAS_lstring constinArgument_inRootEntity,
                                                                                                GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                C_Lexique_easyBindings_5F_lexique * inCompiler) {
  GALGAS_bool var_isOverriding_5622 ;
  switch (select_easyBindings_5F_syntax_54 (inCompiler)) {
  case 1: {
    var_isOverriding_5622 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_override COMMA_SOURCE_FILE ("transient-property.galgas", 116)) ;
    var_isOverriding_5622 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.galgas", 119)) ;
  GALGAS_lstring var_transientTypeName_5774 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.galgas", 120)) ;
  GALGAS_lstring var_transientName_5819 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.galgas", 121)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("transient-property.galgas", 122)) ;
  GALGAS_observablePropertyList var_dependanceList_5880 = GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 123)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_observablePropertyAST var_observablePropertyAST_5974 ;
    nt_observable_5F_property_ (var_observablePropertyAST_5974, inCompiler) ;
    var_dependanceList_5880.addAssign_operation (var_observablePropertyAST_5974  COMMA_SOURCE_FILE ("transient-property.galgas", 126)) ;
    switch (select_easyBindings_5F_syntax_55 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("transient-property.galgas", 128)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.galgas", 130)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_transientDeclarationAST::constructor_new (constinArgument_inCurrentEntity, constinArgument_inRootEntity, var_transientTypeName_5774, var_transientName_5819, var_dependanceList_5880, var_isOverriding_5622  COMMA_SOURCE_FILE ("transient-property.galgas", 131))  COMMA_SOURCE_FILE ("transient-property.galgas", 131)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i35_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_override COMMA_SOURCE_FILE ("transient-property.galgas", 116)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.galgas", 119)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.galgas", 120)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.galgas", 121)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("transient-property.galgas", 122)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_observable_5F_property_parse (inCompiler) ;
    switch (select_easyBindings_5F_syntax_55 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("transient-property.galgas", 128)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.galgas", 130)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i36_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                 const GALGAS_lstring /* constinArgument_inRootEntity */,
                                                                                                 GALGAS_arrayControllerBindingListAST & /* ioArgument_ioArrayControllerBindingListAST */,
                                                                                                 GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  GALGAS_proxyKind var_proxyKind_2024 ;
  switch (select_easyBindings_5F_syntax_56 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("proxy.galgas", 51)) ;
    var_proxyKind_2024 = GALGAS_proxyKind::constructor_propertyProxy (SOURCE_FILE ("proxy.galgas", 52)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("proxy.galgas", 54)) ;
    var_proxyKind_2024 = GALGAS_proxyKind::constructor_toManyProxy (SOURCE_FILE ("proxy.galgas", 55)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_proxy COMMA_SOURCE_FILE ("proxy.galgas", 57)) ;
  GALGAS_lstring var_proxyTypeName_2203 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("proxy.galgas", 58)) ;
  GALGAS_lstring var_proxyName_2244 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("proxy.galgas", 60)) ;
  GALGAS_lstring var_toOnePropertyName_2301 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("proxy.galgas", 62)) ;
  GALGAS_lstring var_propertyName_2353 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("proxy.galgas", 64)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_proxyDeclarationAST::constructor_new (constinArgument_inCurrentEntity, var_proxyKind_2024, var_proxyTypeName_2203, var_proxyName_2244, var_toOnePropertyName_2301, var_propertyName_2353  COMMA_SOURCE_FILE ("proxy.galgas", 65))  COMMA_SOURCE_FILE ("proxy.galgas", 65)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i36_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_56 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("proxy.galgas", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("proxy.galgas", 54)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_proxy COMMA_SOURCE_FILE ("proxy.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("proxy.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("proxy.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("proxy.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("proxy.galgas", 64)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i37_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                       GALGAS_simpleStoredPropertyList & ioArgument_ioAttributeList,
                                                                                                       GALGAS_stringset & ioArgument_ioSignatureList,
                                                                                                       GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                       C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.galgas", 51)) ;
  GALGAS_bool var_usedForSignature_2160 = GALGAS_bool (false) ;
  GALGAS_bool var_needsValidation_2194 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_57 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attributeName_2261 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("simple-stored-property.galgas", 56)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_attributeName_2261.getter_string (HERE).objectCompare (GALGAS_string ("signature"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = var_needsValidation_2194.boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attributeName_2261.getter_location (SOURCE_FILE ("simple-stored-property.galgas", 59)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 59)) ;
            }
          }
          var_usedForSignature_2160 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, var_attributeName_2261.getter_string (HERE).objectCompare (GALGAS_string ("validation"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_needsValidation_2194.boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                fixItArray6.appendObject (C_FixItDescription (kFixItRemove, "")) ;
                inCompiler->emitSemanticError (var_attributeName_2261.getter_location (SOURCE_FILE ("simple-stored-property.galgas", 64)), GALGAS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 64)) ;
              }
            }
            var_needsValidation_2194 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@signature")) ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@validation")) ;
          inCompiler->emitSemanticError (var_attributeName_2261.getter_location (SOURCE_FILE ("simple-stored-property.galgas", 68)), GALGAS_string ("unknow attribute"), fixItArray7  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 68)) ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_attributeTypeName_2840 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas", 71)) ;
  GALGAS_lstring var_attributeName_2885 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas", 72)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_usedForSignature_2160.boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioSignatureList.addAssign_operation (var_attributeName_2885.getter_string (HERE)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 74)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.galgas", 76)) ;
  GALGAS_abstractDefaultValue var_defaultValue_3044 ;
  nt_explicit_5F_value_ (var_defaultValue_3044, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.galgas", 78)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_atomicPropertyDeclarationAST::constructor_new (constinArgument_inClassName, var_attributeTypeName_2840, var_attributeName_2885, var_defaultValue_3044, var_needsValidation_2194  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 79))  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 79)) ;
  ioArgument_ioAttributeList.addAssign_operation (var_attributeTypeName_2840, var_attributeName_2885, var_defaultValue_3044, var_needsValidation_2194  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 87)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i37_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.galgas", 51)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_57 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("simple-stored-property.galgas", 56)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.galgas", 76)) ;
  nt_explicit_5F_value_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.galgas", 78)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toOne_5F_relationship_i38_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                             GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.galgas", 44)) ;
  GALGAS_bool var_usedForSignature_2047 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_58 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attributeName_2114 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-one-relationship.galgas", 48)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_attributeName_2114.getter_string (HERE).objectCompare (GALGAS_string ("signature"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = var_usedForSignature_2047.boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attributeName_2114.getter_location (SOURCE_FILE ("to-one-relationship.galgas", 51)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 51)) ;
            }
          }
          var_usedForSignature_2047 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        appendFixItActions (fixItArray4, kFixItReplace, GALGAS_string ("@signature")) ;
        inCompiler->emitSemanticError (var_attributeName_2114.getter_location (SOURCE_FILE ("to-one-relationship.galgas", 55)), GALGAS_string ("unknow attribute"), fixItArray4  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 55)) ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_destinationEntityName_2475 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-one-relationship.galgas", 58)) ;
  GALGAS_lstring var_relationshipName_2523 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.galgas", 59)) ;
  GALGAS_toOneOppositeRelationship var_opposite_2563 ;
  switch (select_easyBindings_5F_syntax_59 (inCompiler)) {
  case 1: {
    var_opposite_2563 = GALGAS_toOneOppositeRelationship::constructor_none (SOURCE_FILE ("to-one-relationship.galgas", 62)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-one-relationship.galgas", 64)) ;
    switch (select_easyBindings_5F_syntax_60 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.galgas", 66)) ;
      GALGAS_lstring var_inverseRelationshipName_2699 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.galgas", 67)) ;
      var_opposite_2563 = GALGAS_toOneOppositeRelationship::constructor_oppositeIsToOne (var_inverseRelationshipName_2699  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 68)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-one-relationship.galgas", 70)) ;
      GALGAS_lstring var_inverseRelationshipName_2864 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.galgas", 71)) ;
      var_opposite_2563 = GALGAS_toOneOppositeRelationship::constructor_oppositeIsToMany (var_inverseRelationshipName_2864  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 72)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-one-relationship.galgas", 75)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_toOneRelationshipAST::constructor_new (constinArgument_inCurrentEntity, var_destinationEntityName_2475, var_relationshipName_2523, var_opposite_2563, var_usedForSignature_2047  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 76))  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 76)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toOne_5F_relationship_i38_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.galgas", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_58 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-one-relationship.galgas", 48)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-one-relationship.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.galgas", 59)) ;
  switch (select_easyBindings_5F_syntax_59 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-one-relationship.galgas", 64)) ;
    switch (select_easyBindings_5F_syntax_60 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.galgas", 66)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.galgas", 67)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-one-relationship.galgas", 70)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.galgas", 71)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-one-relationship.galgas", 75)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toMany_5F_relationship_i39_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                              GALGAS_stringset & ioArgument_ioSignatureList,
                                                                                              GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-many-relationship.galgas", 56)) ;
  GALGAS_bool var_usedForSignature_2391 = GALGAS_bool (false) ;
  GALGAS_bool var_customStore_2421 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_61 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attributeName_2488 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-many-relationship.galgas", 61)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_attributeName_2488.getter_string (HERE).objectCompare (GALGAS_string ("signature"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = var_usedForSignature_2391.boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attributeName_2488.getter_location (SOURCE_FILE ("to-many-relationship.galgas", 64)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 64)) ;
            }
          }
          var_usedForSignature_2391 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, var_attributeName_2488.getter_string (HERE).objectCompare (GALGAS_string ("customStore"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_customStore_2421.boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                fixItArray6.appendObject (C_FixItDescription (kFixItRemove, "")) ;
                inCompiler->emitSemanticError (var_attributeName_2488.getter_location (SOURCE_FILE ("to-many-relationship.galgas", 69)), GALGAS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 69)) ;
              }
            }
            var_customStore_2421 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@signature")) ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@customStore")) ;
          inCompiler->emitSemanticError (var_attributeName_2488.getter_location (SOURCE_FILE ("to-many-relationship.galgas", 73)), GALGAS_string ("unknow attribute"), fixItArray7  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 73)) ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_destinationEntityName_3057 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas", 76)) ;
  GALGAS_lstring var_relationshipName_3096 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas", 77)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_usedForSignature_2391.boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioSignatureList.addAssign_operation (var_relationshipName_3096.getter_string (HERE)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 79)) ;
    }
  }
  GALGAS_toManyRelationshipOptionAST var_toManyRelationshipOption_3241 ;
  switch (select_easyBindings_5F_syntax_62 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-many-relationship.galgas", 83)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-many-relationship.galgas", 84)) ;
    GALGAS_lstring var_inserseRelationshipName_3330 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas", 85)) ;
    var_toManyRelationshipOption_3241 = GALGAS_toManyRelationshipOptionAST::constructor_hasOpposite (var_inserseRelationshipName_3330  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 86)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("to-many-relationship.galgas", 88)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("to-many-relationship.galgas", 89)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("to-many-relationship.galgas", 90)) ;
    GALGAS_lstring var_masterPropertyName_3510 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas", 91)) ;
    var_toManyRelationshipOption_3241 = GALGAS_toManyRelationshipOptionAST::constructor_hasDependance (var_masterPropertyName_3510  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 92)) ;
  } break ;
  case 3: {
    var_toManyRelationshipOption_3241 = GALGAS_toManyRelationshipOptionAST::constructor_none (SOURCE_FILE ("to-many-relationship.galgas", 94)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-many-relationship.galgas", 96)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_toManyRelationshipAST::constructor_new (constinArgument_inCurrentEntity, var_destinationEntityName_3057, var_relationshipName_3096, var_toManyRelationshipOption_3241, var_customStore_2421, var_usedForSignature_2391  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 97))  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 97)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toMany_5F_relationship_i39_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-many-relationship.galgas", 56)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_61 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-many-relationship.galgas", 61)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas", 76)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas", 77)) ;
  switch (select_easyBindings_5F_syntax_62 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-many-relationship.galgas", 83)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-many-relationship.galgas", 84)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas", 85)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("to-many-relationship.galgas", 88)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("to-many-relationship.galgas", 89)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("to-many-relationship.galgas", 90)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas", 91)) ;
  } break ;
  case 3: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-many-relationship.galgas", 96)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_action_5F_declaration_i40_ (GALGAS_lstringlist & ioArgument_ioActionDeclarationList,
                                                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_action COMMA_SOURCE_FILE ("run-action.galgas", 19)) ;
  GALGAS_lstring var_actionName_891 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("run-action.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("run-action.galgas", 21)) ;
  ioArgument_ioActionDeclarationList.addAssign_operation (var_actionName_891  COMMA_SOURCE_FILE ("run-action.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_action_5F_declaration_i40_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_action COMMA_SOURCE_FILE ("run-action.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("run-action.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("run-action.galgas", 21)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i41_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingComparison_ (outArgument_outBinding, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_63 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 75)) ;
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_binding_3134 ;
      nt_booleanMultipleBindingComparison_ (var_binding_3134, inCompiler) ;
      outArgument_outBinding = GALGAS_andBooleanMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, var_binding_3134  COMMA_SOURCE_FILE ("multiple-binding.galgas", 77)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i41_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingComparison_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_63 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 75)) ;
      nt_booleanMultipleBindingComparison_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i42_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingTerm_ (outArgument_outBinding, inCompiler) ;
  switch (select_easyBindings_5F_syntax_64 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 87)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_3589 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_3589, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_greater (SOURCE_FILE ("multiple-binding.galgas", 89)), var_rightBinding_3589  COMMA_SOURCE_FILE ("multiple-binding.galgas", 89)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 91)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_3761 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_3761, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_greaterOrEqual (SOURCE_FILE ("multiple-binding.galgas", 93)), var_rightBinding_3761  COMMA_SOURCE_FILE ("multiple-binding.galgas", 93)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 95)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_3940 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_3940, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_lowerOrEqual (SOURCE_FILE ("multiple-binding.galgas", 97)), var_rightBinding_3940  COMMA_SOURCE_FILE ("multiple-binding.galgas", 97)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 99)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4116 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4116, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_lower (SOURCE_FILE ("multiple-binding.galgas", 101)), var_rightBinding_4116  COMMA_SOURCE_FILE ("multiple-binding.galgas", 101)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 103)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4286 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4286, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_equal (SOURCE_FILE ("multiple-binding.galgas", 105)), var_rightBinding_4286  COMMA_SOURCE_FILE ("multiple-binding.galgas", 105)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 107)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4456 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4456, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_notEqual (SOURCE_FILE ("multiple-binding.galgas", 109)), var_rightBinding_4456  COMMA_SOURCE_FILE ("multiple-binding.galgas", 109)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i42_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  switch (select_easyBindings_5F_syntax_64 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 87)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 91)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 95)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 99)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 103)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 107)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i43_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                  C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingOperand_ (outArgument_outBinding, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_65 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 121)) ;
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_binding_4974 ;
      nt_booleanMultipleBindingOperand_ (var_binding_4974, inCompiler) ;
      outArgument_outBinding = GALGAS_orBooleanMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, var_binding_4974  COMMA_SOURCE_FILE ("multiple-binding.galgas", 123)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 125)) ;
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_binding_5177 ;
      nt_booleanMultipleBindingOperand_ (var_binding_5177, inCompiler) ;
      outArgument_outBinding = GALGAS_xorBooleanMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, var_binding_5177  COMMA_SOURCE_FILE ("multiple-binding.galgas", 127)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i43_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingOperand_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_65 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 121)) ;
      nt_booleanMultipleBindingOperand_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 125)) ;
      nt_booleanMultipleBindingOperand_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i44_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  GALGAS_observablePropertyAST var_observablePropertyAST_5585 ;
  nt_observable_5F_property_ (var_observablePropertyAST_5585, inCompiler) ;
  outArgument_outBinding = GALGAS_observablePropertyInMultipleBindingExpressionAST::constructor_new (var_observablePropertyAST_5585  COMMA_SOURCE_FILE ("multiple-binding.galgas", 137)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i44_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_observable_5F_property_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i45_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 145)) ;
  GALGAS_abstractBooleanMultipleBindingExpressionAST var_binding_6020 ;
  nt_booleanMultipleBindingOperand_ (var_binding_6020, inCompiler) ;
  outArgument_outBinding = GALGAS_negateBooleanMultipleBindingExpressionAST::constructor_new (var_binding_6020  COMMA_SOURCE_FILE ("multiple-binding.galgas", 147)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i45_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 145)) ;
  nt_booleanMultipleBindingOperand_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i46_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 155)) ;
  nt_booleanMultipleBindingExpression_ (outArgument_outBinding, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 157)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i46_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 155)) ;
  nt_booleanMultipleBindingExpression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 157)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i47_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  GALGAS_luint var_value_6667 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("multiple-binding.galgas", 165)) ;
  outArgument_outBinding = GALGAS_literalIntMultipleBindingExpressionAST::constructor_new (var_value_6667  COMMA_SOURCE_FILE ("multiple-binding.galgas", 166)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i47_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("multiple-binding.galgas", 165)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i48_ (GALGAS_bindingOptionList & outArgument_outBindingOptions,
                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBindingOptions.drop () ; // Release 'out' argument
  outArgument_outBindingOptions = GALGAS_bindingOptionList::constructor_emptyList (SOURCE_FILE ("regular-binding.galgas", 20)) ;
  switch (select_easyBindings_5F_syntax_66 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("regular-binding.galgas", 23)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_optionName_997 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("regular-binding.galgas", 25)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("regular-binding.galgas", 26)) ;
      GALGAS_abstractDefaultValue var_optionValue_1073 ;
      nt_explicit_5F_value_ (var_optionValue_1073, inCompiler) ;
      outArgument_outBindingOptions.addAssign_operation (var_optionName_997, var_optionValue_1073  COMMA_SOURCE_FILE ("regular-binding.galgas", 28)) ;
      switch (select_easyBindings_5F_syntax_67 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("regular-binding.galgas", 30)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("regular-binding.galgas", 32)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i48_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_66 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("regular-binding.galgas", 23)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("regular-binding.galgas", 25)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("regular-binding.galgas", 26)) ;
      nt_explicit_5F_value_parse (inCompiler) ;
      switch (select_easyBindings_5F_syntax_67 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("regular-binding.galgas", 30)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("regular-binding.galgas", 32)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i49_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                 const GALGAS_lstring constinArgument_inRootEntity,
                                                                                                 GALGAS_arrayControllerBindingListAST & ioArgument_ioArrayControllerBindingListAST,
                                                                                                 GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_arrayController COMMA_SOURCE_FILE ("array-controller.galgas", 61)) ;
  GALGAS_lstring var_controllerName_2748 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("array-controller.galgas", 62)) ;
  GALGAS_arrayControllerBoundModelAST var_model_2801 ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("array-controller.galgas", 65)) ;
  switch (select_easyBindings_5F_syntax_68 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("array-controller.galgas", 67)) ;
    var_model_2801 = GALGAS_arrayControllerBoundModelAST::constructor_rootToManyRelationship (constinArgument_inRootEntity  COMMA_SOURCE_FILE ("array-controller.galgas", 68)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("array-controller.galgas", 70)) ;
    var_model_2801 = GALGAS_arrayControllerBoundModelAST::constructor_selfToManyRelationship (SOURCE_FILE ("array-controller.galgas", 71)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.galgas", 73)) ;
  GALGAS_lstring var_relationshipName_3025 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 74)) ;
  switch (select_easyBindings_5F_syntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("array-controller.galgas", 78)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_3192 ;
    nt_booleanMultipleBindingExpression_ (var_bindingExpression_3192, inCompiler) ;
    GALGAS_multipleBindingDescriptor var_hiddenSelectionViewBindingDescriptor_3239 = GALGAS_multipleBindingDescriptor::constructor_binding (var_bindingExpression_3192  COMMA_SOURCE_FILE ("array-controller.galgas", 80)) ;
    ioArgument_ioArrayControllerBindingListAST.addAssign_operation (var_controllerName_2748, var_hiddenSelectionViewBindingDescriptor_3239  COMMA_SOURCE_FILE ("array-controller.galgas", 81)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("array-controller.galgas", 85)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_arrayControllerDeclarationAST::constructor_new (constinArgument_inCurrentEntity, var_controllerName_2748, var_model_2801, var_relationshipName_3025  COMMA_SOURCE_FILE ("array-controller.galgas", 86))  COMMA_SOURCE_FILE ("array-controller.galgas", 86)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i49_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_arrayController COMMA_SOURCE_FILE ("array-controller.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("array-controller.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("array-controller.galgas", 65)) ;
  switch (select_easyBindings_5F_syntax_68 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("array-controller.galgas", 67)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("array-controller.galgas", 70)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.galgas", 73)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 74)) ;
  switch (select_easyBindings_5F_syntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("array-controller.galgas", 78)) ;
    nt_booleanMultipleBindingExpression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("array-controller.galgas", 85)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i50_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                 const GALGAS_lstring constinArgument_inRootEntity,
                                                                                                 GALGAS_arrayControllerBindingListAST & /* ioArgument_ioArrayControllerBindingListAST */,
                                                                                                 GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableViewController COMMA_SOURCE_FILE ("table-view-controller.galgas", 72)) ;
  GALGAS_lstring var_controllerName_3240 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("table-view-controller.galgas", 73)) ;
  GALGAS_tableViewControllerAttributListAST var_arrayControllerAttributListAST_3311 = GALGAS_tableViewControllerAttributListAST::constructor_emptyList (SOURCE_FILE ("table-view-controller.galgas", 74)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_attributeName_3382 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 77)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 78)) ;
    GALGAS_abstractDefaultValue var_attributeValue_3457 ;
    nt_explicit_5F_value_ (var_attributeValue_3457, inCompiler) ;
    var_arrayControllerAttributListAST_3311.addAssign_operation (var_attributeName_3382, var_attributeValue_3457  COMMA_SOURCE_FILE ("table-view-controller.galgas", 80)) ;
    switch (select_easyBindings_5F_syntax_70 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 82)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 84)) ;
  GALGAS_bool var_isRoot_3594 ;
  switch (select_easyBindings_5F_syntax_71 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("table-view-controller.galgas", 88)) ;
    var_isRoot_3594 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("table-view-controller.galgas", 91)) ;
    var_isRoot_3594 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 94)) ;
  GALGAS_lstring var_relationshipName_3743 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 95)) ;
  GALGAS_tableViewControllerBoundColumnListAST var_arrayControllerBoundColumnListAST_3820 = GALGAS_tableViewControllerBoundColumnListAST::constructor_emptyList (SOURCE_FILE ("table-view-controller.galgas", 96)) ;
  switch (select_easyBindings_5F_syntax_72 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 98)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 100)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_easyBindings_5F_syntax_73 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_column COMMA_SOURCE_FILE ("table-view-controller.galgas", 103)) ;
        GALGAS_lstring var_columnName_3946 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("table-view-controller.galgas", 104)) ;
        GALGAS_lstring var_sortPropertyName_3980 ;
        switch (select_easyBindings_5F_syntax_74 (inCompiler)) {
        case 1: {
          var_sortPropertyName_3980 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("table-view-controller.galgas", 107)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_sort COMMA_SOURCE_FILE ("table-view-controller.galgas", 109)) ;
          var_sortPropertyName_3980 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 110)) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_columnOutletTypeName_4165 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 112)) ;
        GALGAS_tableViewColumnBindingAST var_columnBindingAST_4240 ;
        nt_column_5F_bindings_ (var_columnBindingAST_4240, inCompiler) ;
        var_arrayControllerBoundColumnListAST_3820.addAssign_operation (var_columnName_3946, var_columnOutletTypeName_4165, var_columnBindingAST_4240, var_sortPropertyName_3980  COMMA_SOURCE_FILE ("table-view-controller.galgas", 114)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 120)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_tableViewControllerDeclarationAST::constructor_new (constinArgument_inCurrentEntity, var_controllerName_3240, var_isRoot_3594, constinArgument_inRootEntity, var_relationshipName_3743, var_arrayControllerBoundColumnListAST_3820, var_arrayControllerAttributListAST_3311  COMMA_SOURCE_FILE ("table-view-controller.galgas", 122))  COMMA_SOURCE_FILE ("table-view-controller.galgas", 122)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i50_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableViewController COMMA_SOURCE_FILE ("table-view-controller.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("table-view-controller.galgas", 73)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 77)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 78)) ;
    nt_explicit_5F_value_parse (inCompiler) ;
    switch (select_easyBindings_5F_syntax_70 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 82)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 84)) ;
  switch (select_easyBindings_5F_syntax_71 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("table-view-controller.galgas", 88)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("table-view-controller.galgas", 91)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 95)) ;
  switch (select_easyBindings_5F_syntax_72 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 98)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 100)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_easyBindings_5F_syntax_73 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_column COMMA_SOURCE_FILE ("table-view-controller.galgas", 103)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("table-view-controller.galgas", 104)) ;
        switch (select_easyBindings_5F_syntax_74 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_sort COMMA_SOURCE_FILE ("table-view-controller.galgas", 109)) ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 110)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 112)) ;
        nt_column_5F_bindings_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 120)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_column_5F_bindings_i51_ (GALGAS_tableViewColumnBindingAST & outArgument_outColumnBindingAST,
                                                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outColumnBindingAST.drop () ; // Release 'out' argument
  GALGAS_lstring var_runActionDescriptor_4936 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("table-view-controller.galgas", 136)) ;
  GALGAS_multipleBindingDescriptor var_enabledBindingDescriptor_4984 = GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("table-view-controller.galgas", 137)) ;
  GALGAS_multipleBindingDescriptor var_hiddenBindingDescriptor_5055 = GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("table-view-controller.galgas", 138)) ;
  GALGAS_regularBindingList var_regularBindingList_5137 = GALGAS_regularBindingList::constructor_emptyList (SOURCE_FILE ("table-view-controller.galgas", 139)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_75 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("table-view-controller.galgas", 142)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, var_runActionDescriptor_4936.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("table-view-controller.galgas", 144)), GALGAS_string ("duplicated $run binding"), fixItArray2  COMMA_SOURCE_FILE ("table-view-controller.galgas", 144)) ;
        }
      }
      var_runActionDescriptor_4936 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 146)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("table-view-controller.galgas", 149)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, var_enabledBindingDescriptor_4984.objectCompare (GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("table-view-controller.galgas", 150)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("table-view-controller.galgas", 151)), GALGAS_string ("duplicated $enabled binding"), fixItArray4  COMMA_SOURCE_FILE ("table-view-controller.galgas", 151)) ;
        }
      }
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_5585 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_5585, inCompiler) ;
      var_enabledBindingDescriptor_4984 = GALGAS_multipleBindingDescriptor::constructor_binding (var_bindingExpression_5585  COMMA_SOURCE_FILE ("table-view-controller.galgas", 154)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("table-view-controller.galgas", 157)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsNotEqual, var_hiddenBindingDescriptor_5055.objectCompare (GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("table-view-controller.galgas", 158)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("table-view-controller.galgas", 159)), GALGAS_string ("duplicated $hidden binding"), fixItArray6  COMMA_SOURCE_FILE ("table-view-controller.galgas", 159)) ;
        }
      }
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_5920 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_5920, inCompiler) ;
      var_hiddenBindingDescriptor_5055 = GALGAS_multipleBindingDescriptor::constructor_binding (var_bindingExpression_5920  COMMA_SOURCE_FILE ("table-view-controller.galgas", 162)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_bindingName_6072 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("table-view-controller.galgas", 165)) ;
      GALGAS_observablePropertyList var_observablePropertyList_6125 = GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("table-view-controller.galgas", 166)) ;
      bool repeatFlag_7 = true ;
      while (repeatFlag_7) {
        GALGAS_observablePropertyAST var_observableProperty_6220 ;
        nt_observable_5F_property_ (var_observableProperty_6220, inCompiler) ;
        var_observablePropertyList_6125.addAssign_operation (var_observableProperty_6220  COMMA_SOURCE_FILE ("table-view-controller.galgas", 169)) ;
        switch (select_easyBindings_5F_syntax_76 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 171)) ;
        } break ;
        default:
          repeatFlag_7 = false ;
          break ;
        }
      }
      GALGAS_bindingOptionList var_bindingOptions_6356 ;
      nt_binding_5F_option_5F_list_ (var_bindingOptions_6356, inCompiler) ;
      var_regularBindingList_5137.addAssign_operation (var_bindingName_6072, var_observablePropertyList_6125, var_bindingOptions_6356  COMMA_SOURCE_FILE ("table-view-controller.galgas", 174)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outColumnBindingAST = GALGAS_tableViewColumnBindingAST::constructor_new (var_runActionDescriptor_4936, var_enabledBindingDescriptor_4984, var_hiddenBindingDescriptor_5055, var_regularBindingList_5137  COMMA_SOURCE_FILE ("table-view-controller.galgas", 180)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_column_5F_bindings_i51_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_75 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("table-view-controller.galgas", 142)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 146)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("table-view-controller.galgas", 149)) ;
      nt_booleanMultipleBindingExpression_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("table-view-controller.galgas", 157)) ;
      nt_booleanMultipleBindingExpression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("table-view-controller.galgas", 165)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        nt_observable_5F_property_parse (inCompiler) ;
        switch (select_easyBindings_5F_syntax_76 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 171)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      nt_binding_5F_option_5F_list_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i52_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                 const GALGAS_lstring /* constinArgument_inRootEntity */,
                                                                                                 GALGAS_arrayControllerBindingListAST & /* ioArgument_ioArrayControllerBindingListAST */,
                                                                                                 GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_selectionController COMMA_SOURCE_FILE ("selection-controller.galgas", 40)) ;
  GALGAS_lstring var_selectionEntityName_2034 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 41)) ;
  GALGAS_lstring var_selectionControllerName_2093 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("selection-controller.galgas", 43)) ;
  GALGAS_lstring var_modelControllerName_2147 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("selection-controller.galgas", 45)) ;
  GALGAS_lstring var_propertyName_2199 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("selection-controller.galgas", 47)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_selectionControllerDeclarationAST::constructor_new (constinArgument_inCurrentEntity, var_selectionControllerName_2093, var_modelControllerName_2147, var_propertyName_2199, var_selectionEntityName_2034  COMMA_SOURCE_FILE ("selection-controller.galgas", 48))  COMMA_SOURCE_FILE ("selection-controller.galgas", 48)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i52_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_selectionController COMMA_SOURCE_FILE ("selection-controller.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("selection-controller.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("selection-controller.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("selection-controller.galgas", 47)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_explicit_5F_value_i53_ (GALGAS_abstractDefaultValue & outArgument_outDefaultValue,
                                                                                         C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outDefaultValue.drop () ; // Release 'out' argument
  switch (select_easyBindings_5F_syntax_77 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("explicit-default-value.galgas", 55)) ;
    outArgument_outDefaultValue = GALGAS_boolAsDefaultValue::constructor_new (GALGAS_lbool::constructor_new (GALGAS_bool (true), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 56))  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 56))  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 56)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("explicit-default-value.galgas", 58)) ;
    outArgument_outDefaultValue = GALGAS_boolAsDefaultValue::constructor_new (GALGAS_lbool::constructor_new (GALGAS_bool (false), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 59))  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 59))  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 59)) ;
  } break ;
  case 3: {
    GALGAS_luint var_integerValue_2227 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.galgas", 61)) ;
    outArgument_outDefaultValue = GALGAS_integerAsDefaultValue::constructor_new (var_integerValue_2227, GALGAS_bool (false)  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 62)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 64)) ;
    GALGAS_luint var_integerValue_2367 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.galgas", 65)) ;
    outArgument_outDefaultValue = GALGAS_integerAsDefaultValue::constructor_new (var_integerValue_2367, GALGAS_bool (true)  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 66)) ;
  } break ;
  case 5: {
    GALGAS_ldouble var_doubleValue_2496 = inCompiler->synthetizedAttribute_floatValue () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double COMMA_SOURCE_FILE ("explicit-default-value.galgas", 68)) ;
    outArgument_outDefaultValue = GALGAS_doubleAsDefaultValue::constructor_new (var_doubleValue_2496  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 69)) ;
  } break ;
  case 6: {
    GALGAS_lstring var_stringValue_2620 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("explicit-default-value.galgas", 71)) ;
    outArgument_outDefaultValue = GALGAS_stringAsDefaultValue::constructor_new (var_stringValue_2620  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 72)) ;
  } break ;
  case 7: {
    GALGAS_lstring var_stringValue_2737 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.galgas", 74)) ;
    outArgument_outDefaultValue = GALGAS_identifierAsDefaultValue::constructor_new (var_stringValue_2737  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 75)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("explicit-default-value.galgas", 77)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 78)) ;
    GALGAS_lstring var_name_2866 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.galgas", 79)) ;
    outArgument_outDefaultValue = GALGAS_prefsAsDefaultValue::constructor_new (var_name_2866  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 80)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_explicit_5F_value_i53_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_77 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("explicit-default-value.galgas", 55)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("explicit-default-value.galgas", 58)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.galgas", 61)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 64)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.galgas", 65)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double COMMA_SOURCE_FILE ("explicit-default-value.galgas", 68)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("explicit-default-value.galgas", 71)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.galgas", 74)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("explicit-default-value.galgas", 77)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 78)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.galgas", 79)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_xcode_5F_project_i54_ (GALGAS_lstring & ioArgument_ioXcodeProjectString,
                                                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject COMMA_SOURCE_FILE ("xcode-project.galgas", 12)) ;
  GALGAS_lstring var_xcodeProjectString_434 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("xcode-project.galgas", 13)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("xcode-project.galgas", 14)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_xcodeProjectString_434.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_xcodeProjectString_434.getter_location (SOURCE_FILE ("xcode-project.galgas", 16)), GALGAS_string ("string should not be empty"), fixItArray1  COMMA_SOURCE_FILE ("xcode-project.galgas", 16)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioXcodeProjectString.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_xcodeProjectString_434.getter_location (SOURCE_FILE ("xcode-project.galgas", 18)), GALGAS_string ("Xcode project already defined"), fixItArray3  COMMA_SOURCE_FILE ("xcode-project.galgas", 18)) ;
      }
    }
    if (kBoolFalse == test_2) {
      ioArgument_ioXcodeProjectString = var_xcodeProjectString_434 ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_xcode_5F_project_i54_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject COMMA_SOURCE_FILE ("xcode-project.galgas", 12)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("xcode-project.galgas", 13)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("xcode-project.galgas", 14)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_i55_ (GALGAS_mainXibDescriptorList & ioArgument_ioElementList,
                                                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_mainxib COMMA_SOURCE_FILE ("main-xib.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.galgas", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_79 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_outletType_1313 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.galgas", 37)) ;
      GALGAS_lstring var_outletName_1359 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.galgas", 38)) ;
      GALGAS_mainXibLineDescriptorList temp_1 = GALGAS_mainXibLineDescriptorList::constructor_emptyList (SOURCE_FILE ("main-xib.galgas", 40)) ;
      temp_1.addAssign_operation (GALGAS_mainXibElement::constructor_outlet (var_outletType_1313, var_outletName_1359  COMMA_SOURCE_FILE ("main-xib.galgas", 40))  COMMA_SOURCE_FILE ("main-xib.galgas", 40)) ;
      ioArgument_ioElementList.addAssign_operation (temp_1  COMMA_SOURCE_FILE ("main-xib.galgas", 39)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_s_1514 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.galgas", 43)) ;
      GALGAS_mainXibLineDescriptorList temp_2 = GALGAS_mainXibLineDescriptorList::constructor_emptyList (SOURCE_FILE ("main-xib.galgas", 44)) ;
      temp_2.addAssign_operation (GALGAS_mainXibElement::constructor_text (var_s_1514  COMMA_SOURCE_FILE ("main-xib.galgas", 44))  COMMA_SOURCE_FILE ("main-xib.galgas", 44)) ;
      ioArgument_ioElementList.addAssign_operation (temp_2  COMMA_SOURCE_FILE ("main-xib.galgas", 44)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.galgas", 46)) ;
      GALGAS_mainXibLineDescriptorList var_lineDescription_1652 ;
      nt_main_5F_xib_5F_line_ (var_lineDescription_1652, inCompiler) ;
      ioArgument_ioElementList.addAssign_operation (var_lineDescription_1652  COMMA_SOURCE_FILE ("main-xib.galgas", 48)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.galgas", 49)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_78 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.galgas", 52)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.galgas", 54)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_i55_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_mainxib COMMA_SOURCE_FILE ("main-xib.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.galgas", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_79 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.galgas", 38)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.galgas", 43)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.galgas", 46)) ;
      nt_main_5F_xib_5F_line_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.galgas", 49)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_78 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.galgas", 52)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.galgas", 54)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i56_ (GALGAS_mainXibLineDescriptorList & outArgument_outLineDescription,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outLineDescription.drop () ; // Release 'out' argument
  outArgument_outLineDescription = GALGAS_mainXibLineDescriptorList::constructor_emptyList (SOURCE_FILE ("main-xib.galgas", 62)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_81 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_outletType_2057 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.galgas", 65)) ;
      GALGAS_lstring var_outletName_2103 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.galgas", 66)) ;
      outArgument_outLineDescription.addAssign_operation (GALGAS_mainXibElement::constructor_outlet (var_outletType_2057, var_outletName_2103  COMMA_SOURCE_FILE ("main-xib.galgas", 68))  COMMA_SOURCE_FILE ("main-xib.galgas", 67)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_s_2250 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.galgas", 70)) ;
      outArgument_outLineDescription.addAssign_operation (GALGAS_mainXibElement::constructor_text (var_s_2250  COMMA_SOURCE_FILE ("main-xib.galgas", 71))  COMMA_SOURCE_FILE ("main-xib.galgas", 71)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_80 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.galgas", 74)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i56_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_81 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.galgas", 65)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.galgas", 66)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.galgas", 70)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_80 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.galgas", 74)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@declarationListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_declarationListAST : public cCollectionElement {
  public : GALGAS_declarationListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_declarationListAST (const GALGAS_abstractDeclarationAST & in_mPropertyDeclaration
                                                  COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_declarationListAST (const GALGAS_declarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_declarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::setter_append (GALGAS_declarationListAST_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_declarationListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::setter_insertAtIndex (const GALGAS_abstractDeclarationAST inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_declarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::setter_removeAtIndex (GALGAS_abstractDeclarationAST & outOperand0,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
      outOperand0 = p->mObject.mProperty_mPropertyDeclaration ;
    }
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
  public : GALGAS_outletClassBindingSpecificationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_outletClassBindingSpecificationList (const GALGAS_lstring & in_mOutletClassName,
                                                                   const GALGAS_lstring & in_mBindingName,
                                                                   const GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                   const GALGAS_controllerBindingOptionList & in_mBindingOptionList
                                                                   COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_outletClassBindingSpecificationList (const GALGAS_outletClassBindingSpecificationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletClassBindingSpecificationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationList::setter_append (GALGAS_outletClassBindingSpecificationList_2D_element inElement,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletClassBindingSpecificationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
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
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletClassBindingSpecificationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
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
  public : GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_autoLayoutViewClassBindingSpecificationList (const GALGAS_lstring & in_mOutletClassName,
                                                                           const GALGAS_lstring & in_mBindingName,
                                                                           const GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                           const GALGAS_controllerBindingOptionList & in_mBindingOptionList
                                                                           COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_autoLayoutViewClassBindingSpecificationList (const GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassBindingSpecificationList::setter_append (GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element inElement,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
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
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
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
  public : GALGAS_enumerationFunctionListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_enumerationFunctionListAST (const GALGAS_lstring & in_mEnumName,
                                                          const GALGAS_lstring & in_mFunctionName,
                                                          const GALGAS__32_lstringlist & in_mAssociationList
                                                          COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_enumerationFunctionListAST (const GALGAS_enumerationFunctionListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumerationFunctionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationFunctionListAST::setter_append (GALGAS_enumerationFunctionListAST_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumerationFunctionListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationFunctionListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                              const GALGAS_lstring inOperand1,
                                                              const GALGAS__32_lstringlist inOperand2,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumerationFunctionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationFunctionListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              GALGAS__32_lstringlist & outOperand2,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
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
  public : GALGAS_externSwiftDelegateList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_externSwiftDelegateList (const GALGAS_lstring & in_mExternSwiftDelegateName
                                                       COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_externSwiftDelegateList (const GALGAS_externSwiftDelegateList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externSwiftDelegateList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftDelegateList::setter_append (GALGAS_externSwiftDelegateList_2D_element inElement,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externSwiftDelegateList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftDelegateList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externSwiftDelegateList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftDelegateList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_externSwiftDelegateList * p = (cCollectionElement_externSwiftDelegateList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
      outOperand0 = p->mObject.mProperty_mExternSwiftDelegateName ;
    }
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
  public : GALGAS_externSwiftFunctionList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_externSwiftFunctionList (const GALGAS_lstring & in_mExternSwiftFunctionName,
                                                       const GALGAS_lstring & in_mCallerName
                                                       COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_externSwiftFunctionList (const GALGAS_externSwiftFunctionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externSwiftFunctionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftFunctionList::setter_append (GALGAS_externSwiftFunctionList_2D_element inElement,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externSwiftFunctionList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftFunctionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_lstring inOperand1,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externSwiftFunctionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externSwiftFunctionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
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
  public : GALGAS_enumFunAssociationSortedList_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_enumFunAssociationSortedList (const GALGAS_uint & in_mIndex,
                                                            const GALGAS_string & in_mAssociatedString
                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public : virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
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
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractFileGeneration::objectCompare (const GALGAS_abstractFileGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFileGeneration::GALGAS_abstractFileGeneration (void) :
AC_GALGAS_class (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFileGeneration::GALGAS_abstractFileGeneration (const cPtr_abstractFileGeneration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractFileGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractFileGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractFileGeneration::cPtr_abstractFileGeneration (LOCATION_ARGS) :
acPtr_class (THERE) {
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

cEnumAssociatedValues_typeKind_enumType::cEnumAssociatedValues_typeKind_enumType (const GALGAS_string & inAssociatedValue0,
                                                                                  const GALGAS_enumConstantMap & inAssociatedValue1,
                                                                                  const GALGAS_enumFuncMap & inAssociatedValue2
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

cEnumAssociatedValues_typeKind_entityType::cEnumAssociatedValues_typeKind_entityType (const GALGAS_string & inAssociatedValue0,
                                                                                      const GALGAS_bool & inAssociatedValue1
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

cEnumAssociatedValues_typeKind_classType::cEnumAssociatedValues_typeKind_classType (const GALGAS_string & inAssociatedValue0
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

cEnumAssociatedValues_typeKind_transientPropertyExternType::cEnumAssociatedValues_typeKind_transientPropertyExternType (const GALGAS_string & inAssociatedValue0
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


#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-0.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//     L E X I Q U E                                                                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"
#include "galgas2/cLexiqueIntrospection.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cTokenFor_easyBindings_5F_lexique::cTokenFor_easyBindings_5F_lexique (void) :
mLexicalAttribute_floatValue (),
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_Lexique_easyBindings_5F_lexique::C_Lexique_easyBindings_5F_lexique (C_Compiler * inCallerCompiler,
                                                                      const C_String & inSourceFileName
                                                                      COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_Lexique_easyBindings_5F_lexique::C_Lexique_easyBindings_5F_lexique (C_Compiler * inCallerCompiler,
                                                                      const C_String & inSourceString,
                                                                      const C_String & inStringForError
                                                                      COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                 I N D E X I N G    D I R E C T O R Y                                                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_String C_Lexique_easyBindings_5F_lexique::indexingDirectory (void) const {
  return "" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                        Lexical error message list                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gLexicalMessage_easyBindings_5F_lexique_attributeError = "in an attribute name, a letter, a digit or a dot should follow the '@' character" ;

static const char * gLexicalMessage_easyBindings_5F_lexique_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_easyBindings_5F_lexique_floatNumberConversionError = "invalid float number" ;

static const char * gLexicalMessage_easyBindings_5F_lexique_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_easyBindings_5F_lexique_internalError = "internal error" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//          Syntax error messages, for every terminal symbol                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- Syntax error message for terminal '$identifier$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_identifier = "an identifier (beginning with a lower-case letter)" ;

//--- Syntax error message for terminal '$Identifier$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_Identifier = "an identifier (beginning with a upper-case letter)" ;

//--- Syntax error message for terminal '$@attribute$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__40_attribute = "an attribute @..." ;

//--- Syntax error message for terminal '$bindingName$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_bindingName = "a binding name (identifier prefixed by '$')" ;

//--- Syntax error message for terminal '$literal_integer$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_literal_5F_integer = "a 32-bit unsigned decimal number" ;

//--- Syntax error message for terminal '$literal_double$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_literal_5F_double = "a float number" ;

//--- Syntax error message for terminal '$literal_string$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_literal_5F_string = "a character string constant \"...\"" ;

//--- Syntax error message for terminal '$comment$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_comment = "a comment" ;

//--- Syntax error message for terminal '$action$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_action = "the 'action' keyword" ;

//--- Syntax error message for terminal '$all$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_all = "the 'all' keyword" ;

//--- Syntax error message for terminal '$arrayController$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_arrayController = "the 'arrayController' keyword" ;

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

//--- Syntax error message for terminal '$default$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_default = "the 'default' keyword" ;

//--- Syntax error message for terminal '$dependsFrom$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_dependsFrom = "the 'dependsFrom' keyword" ;

//--- Syntax error message for terminal '$document$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_document = "the 'document' keyword" ;

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

//--- Syntax error message for terminal '$graphic$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_graphic = "the 'graphic' keyword" ;

//--- Syntax error message for terminal '$filter$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_filter = "the 'filter' keyword" ;

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

//--- Syntax error message for terminal '$objectController$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_objectController = "the 'objectController' keyword" ;

//--- Syntax error message for terminal '$one$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_one = "the 'one' keyword" ;

//--- Syntax error message for terminal '$outlet$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_outlet = "the 'outlet' keyword" ;

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

//--- Syntax error message for terminal '$struct$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_struct = "the 'struct' keyword" ;

//--- Syntax error message for terminal '$to$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_to = "the 'to' keyword" ;

//--- Syntax error message for terminal '$toMany$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_toMany = "the 'toMany' keyword" ;

//--- Syntax error message for terminal '$toOne$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_toOne = "the 'toOne' keyword" ;

//--- Syntax error message for terminal '$transient$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_transient = "the 'transient' keyword" ;

//--- Syntax error message for terminal '$version$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_version = "the 'version' keyword" ;

//--- Syntax error message for terminal '$versionShouldChange$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_versionShouldChange = "the 'versionShouldChange' keyword" ;

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                getMessageForTerminal                                                                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_String C_Lexique_easyBindings_5F_lexique::getMessageForTerminal (const int16_t inTerminalIndex) const {
  C_String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 77)) {
    static const char * syntaxErrorMessageArray [77] = {kEndOfSourceLexicalErrorMessage,
        gSyntaxErrorMessage_easyBindings_5F_lexique_identifier,
        gSyntaxErrorMessage_easyBindings_5F_lexique_Identifier,
        gSyntaxErrorMessage_easyBindings_5F_lexique__40_attribute,
        gSyntaxErrorMessage_easyBindings_5F_lexique_bindingName,
        gSyntaxErrorMessage_easyBindings_5F_lexique_literal_5F_integer,
        gSyntaxErrorMessage_easyBindings_5F_lexique_literal_5F_double,
        gSyntaxErrorMessage_easyBindings_5F_lexique_literal_5F_string,
        gSyntaxErrorMessage_easyBindings_5F_lexique_comment,
        gSyntaxErrorMessage_easyBindings_5F_lexique_action,
        gSyntaxErrorMessage_easyBindings_5F_lexique_all,
        gSyntaxErrorMessage_easyBindings_5F_lexique_arrayController,
        gSyntaxErrorMessage_easyBindings_5F_lexique_binding,
        gSyntaxErrorMessage_easyBindings_5F_lexique_calledBy,
        gSyntaxErrorMessage_easyBindings_5F_lexique_class,
        gSyntaxErrorMessage_easyBindings_5F_lexique_classForSwift,
        gSyntaxErrorMessage_easyBindings_5F_lexique_column,
        gSyntaxErrorMessage_easyBindings_5F_lexique_default,
        gSyntaxErrorMessage_easyBindings_5F_lexique_dependsFrom,
        gSyntaxErrorMessage_easyBindings_5F_lexique_document,
        gSyntaxErrorMessage_easyBindings_5F_lexique_enum,
        gSyntaxErrorMessage_easyBindings_5F_lexique_entity,
        gSyntaxErrorMessage_easyBindings_5F_lexique_extern,
        gSyntaxErrorMessage_easyBindings_5F_lexique_externDelegate,
        gSyntaxErrorMessage_easyBindings_5F_lexique_externFunc,
        gSyntaxErrorMessage_easyBindings_5F_lexique_graphic,
        gSyntaxErrorMessage_easyBindings_5F_lexique_filter,
        gSyntaxErrorMessage_easyBindings_5F_lexique_include,
        gSyntaxErrorMessage_easyBindings_5F_lexique_inverse,
        gSyntaxErrorMessage_easyBindings_5F_lexique_mainxib,
        gSyntaxErrorMessage_easyBindings_5F_lexique_no,
        gSyntaxErrorMessage_easyBindings_5F_lexique_none,
        gSyntaxErrorMessage_easyBindings_5F_lexique_objectController,
        gSyntaxErrorMessage_easyBindings_5F_lexique_one,
        gSyntaxErrorMessage_easyBindings_5F_lexique_outlet,
        gSyntaxErrorMessage_easyBindings_5F_lexique_prefs,
        gSyntaxErrorMessage_easyBindings_5F_lexique_property,
        gSyntaxErrorMessage_easyBindings_5F_lexique_proxy,
        gSyntaxErrorMessage_easyBindings_5F_lexique_root,
        gSyntaxErrorMessage_easyBindings_5F_lexique_selectionController,
        gSyntaxErrorMessage_easyBindings_5F_lexique_self,
        gSyntaxErrorMessage_easyBindings_5F_lexique_signature,
        gSyntaxErrorMessage_easyBindings_5F_lexique_sort,
        gSyntaxErrorMessage_easyBindings_5F_lexique_struct,
        gSyntaxErrorMessage_easyBindings_5F_lexique_to,
        gSyntaxErrorMessage_easyBindings_5F_lexique_toMany,
        gSyntaxErrorMessage_easyBindings_5F_lexique_toOne,
        gSyntaxErrorMessage_easyBindings_5F_lexique_transient,
        gSyntaxErrorMessage_easyBindings_5F_lexique_version,
        gSyntaxErrorMessage_easyBindings_5F_lexique_versionShouldChange,
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
        gSyntaxErrorMessage_easyBindings_5F_lexique__5E_
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                      U N I C O D E    S T R I N G S                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//--- Unicode string for '$_2E_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__2E_ [] = {
  TO_UNICODE ('.'),
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

//--- Unicode string for '$document$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_document [] = {
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

//--- Unicode string for '$filter$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_filter [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
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

//--- Unicode string for '$objectController$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_objectController [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('b'),
  TO_UNICODE ('j'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
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

//--- Unicode string for '$to$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_to [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//             Key words table 'delimitorsList'                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const int32_t ktable_size_easyBindings_5F_lexique_delimitorsList = 20 ;

static const C_unicode_lexique_table_entry ktable_for_easyBindings_5F_lexique_delimitorsList [ktable_size_easyBindings_5F_lexique_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__21_, 1, C_Lexique_easyBindings_5F_lexique::kToken__21_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__26_, 1, C_Lexique_easyBindings_5F_lexique::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__28_, 1, C_Lexique_easyBindings_5F_lexique::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__29_, 1, C_Lexique_easyBindings_5F_lexique::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__2C_, 1, C_Lexique_easyBindings_5F_lexique::kToken__2C_),
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//             Key words table 'lowerCaseKeyWordList'                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const int32_t ktable_size_easyBindings_5F_lexique_lowerCaseKeyWordList = 43 ;

static const C_unicode_lexique_table_entry ktable_for_easyBindings_5F_lexique_lowerCaseKeyWordList [ktable_size_easyBindings_5F_lexique_lowerCaseKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_no, 2, C_Lexique_easyBindings_5F_lexique::kToken_no),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_to, 2, C_Lexique_easyBindings_5F_lexique::kToken_to),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_all, 3, C_Lexique_easyBindings_5F_lexique::kToken_all),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_one, 3, C_Lexique_easyBindings_5F_lexique::kToken_one),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_yes, 3, C_Lexique_easyBindings_5F_lexique::kToken_yes),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_enum, 4, C_Lexique_easyBindings_5F_lexique::kToken_enum),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_none, 4, C_Lexique_easyBindings_5F_lexique::kToken_none),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_root, 4, C_Lexique_easyBindings_5F_lexique::kToken_root),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_self, 4, C_Lexique_easyBindings_5F_lexique::kToken_self),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_sort, 4, C_Lexique_easyBindings_5F_lexique::kToken_sort),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_class, 5, C_Lexique_easyBindings_5F_lexique::kToken_class),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_prefs, 5, C_Lexique_easyBindings_5F_lexique::kToken_prefs),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_proxy, 5, C_Lexique_easyBindings_5F_lexique::kToken_proxy),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_toOne, 5, C_Lexique_easyBindings_5F_lexique::kToken_toOne),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_action, 6, C_Lexique_easyBindings_5F_lexique::kToken_action),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_column, 6, C_Lexique_easyBindings_5F_lexique::kToken_column),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_entity, 6, C_Lexique_easyBindings_5F_lexique::kToken_entity),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_extern, 6, C_Lexique_easyBindings_5F_lexique::kToken_extern),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_filter, 6, C_Lexique_easyBindings_5F_lexique::kToken_filter),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_outlet, 6, C_Lexique_easyBindings_5F_lexique::kToken_outlet),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_struct, 6, C_Lexique_easyBindings_5F_lexique::kToken_struct),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_toMany, 6, C_Lexique_easyBindings_5F_lexique::kToken_toMany),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_binding, 7, C_Lexique_easyBindings_5F_lexique::kToken_binding),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_default, 7, C_Lexique_easyBindings_5F_lexique::kToken_default),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_graphic, 7, C_Lexique_easyBindings_5F_lexique::kToken_graphic),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_include, 7, C_Lexique_easyBindings_5F_lexique::kToken_include),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_inverse, 7, C_Lexique_easyBindings_5F_lexique::kToken_inverse),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_mainxib, 7, C_Lexique_easyBindings_5F_lexique::kToken_mainxib),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_version, 7, C_Lexique_easyBindings_5F_lexique::kToken_version),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_calledBy, 8, C_Lexique_easyBindings_5F_lexique::kToken_calledBy),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_document, 8, C_Lexique_easyBindings_5F_lexique::kToken_document),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_property, 8, C_Lexique_easyBindings_5F_lexique::kToken_property),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_signature, 9, C_Lexique_easyBindings_5F_lexique::kToken_signature),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_transient, 9, C_Lexique_easyBindings_5F_lexique::kToken_transient),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_externFunc, 10, C_Lexique_easyBindings_5F_lexique::kToken_externFunc),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_dependsFrom, 11, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_xcodeproject, 12, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_classForSwift, 13, C_Lexique_easyBindings_5F_lexique::kToken_classForSwift),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_externDelegate, 14, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_arrayController, 15, C_Lexique_easyBindings_5F_lexique::kToken_arrayController),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_objectController, 16, C_Lexique_easyBindings_5F_lexique::kToken_objectController),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_selectionController, 19, C_Lexique_easyBindings_5F_lexique::kToken_selectionController),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_versionShouldChange, 19, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange)
} ;

int16_t C_Lexique_easyBindings_5F_lexique::search_into_lowerCaseKeyWordList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_easyBindings_5F_lexique_lowerCaseKeyWordList, ktable_size_easyBindings_5F_lexique_lowerCaseKeyWordList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//             Key words table 'reservedBindingNameKeyWordList'                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                          getCurrentTokenString                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    case kToken_document:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("document") ;
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
    case kToken_graphic:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("graphic") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_filter:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("filter") ;
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
    case kToken_objectController:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("objectController") ;
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
    case kToken_struct:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("struct") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_to:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("to") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_toMany:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("toMany") ;
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
    case kToken_versionShouldChange:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("versionShouldChange") ;
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
    default:
      break ;
    }
  }
  return s ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Template Delimiters                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Template Replacements                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//            Terminal Symbols as end of script in template mark                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//            Unicode test functions                                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
 
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//               P A R S E    L E X I C A L    T O K E N                                                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
      }else if (testForInputUTF32Char (TO_UNICODE ('#'))) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                         E N T E R    T O K E N                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//               A T T R I B U T E   A C C E S S                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

double C_Lexique_easyBindings_5F_lexique::attributeValue_floatValue (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_floatValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_String C_Lexique_easyBindings_5F_lexique::attributeValue_tokenString (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

uint32_t C_Lexique_easyBindings_5F_lexique::attributeValue_uint_33__32_value (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//         A S S I G N    F R O M    A T T R I B U T E                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ldouble C_Lexique_easyBindings_5F_lexique::synthetizedAttribute_floatValue (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_easyBindings_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_double value (ptr->mLexicalAttribute_floatValue) ;
  GALGAS_ldouble result (value, currentLocation) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring C_Lexique_easyBindings_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_easyBindings_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_luint C_Lexique_easyBindings_5F_lexique::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_easyBindings_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GALGAS_luint result (value, currentLocation) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                         I N T R O S P E C T I O N                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist C_Lexique_easyBindings_5F_lexique::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("Identifier") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("@attribute") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bindingName") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literal_integer") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literal_double") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literal_string") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("action") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("all") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("arrayController") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("binding") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("calledBy") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("class") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("classForSwift") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("column") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("default") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("dependsFrom") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("document") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("enum") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("entity") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("extern") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("externDelegate") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("externFunc") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("graphic") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("filter") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("include") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("inverse") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("mainxib") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("no") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("none") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("objectController") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("one") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("outlet") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("prefs") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("property") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("proxy") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("root") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("selectionController") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("self") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("signature") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sort") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("struct") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("to") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("toMany") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("toOne") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("transient") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("version") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("versionShouldChange") COMMA_THERE) ;
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
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void getKeywordLists_easyBindings_5F_lexique (TC_UniqueArray <C_String> & ioList) {
  ioList.appendObject ("easyBindings_lexique:delimitorsList") ;
  ioList.appendObject ("easyBindings_lexique:lowerCaseKeyWordList") ;
  ioList.appendObject ("easyBindings_lexique:reservedBindingNameKeyWordList") ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    ioList.appendObject ("to") ;
    ioList.appendObject ("all") ;
    ioList.appendObject ("one") ;
    ioList.appendObject ("yes") ;
    ioList.appendObject ("enum") ;
    ioList.appendObject ("none") ;
    ioList.appendObject ("root") ;
    ioList.appendObject ("self") ;
    ioList.appendObject ("sort") ;
    ioList.appendObject ("class") ;
    ioList.appendObject ("prefs") ;
    ioList.appendObject ("proxy") ;
    ioList.appendObject ("toOne") ;
    ioList.appendObject ("action") ;
    ioList.appendObject ("column") ;
    ioList.appendObject ("entity") ;
    ioList.appendObject ("extern") ;
    ioList.appendObject ("filter") ;
    ioList.appendObject ("outlet") ;
    ioList.appendObject ("struct") ;
    ioList.appendObject ("toMany") ;
    ioList.appendObject ("binding") ;
    ioList.appendObject ("default") ;
    ioList.appendObject ("graphic") ;
    ioList.appendObject ("include") ;
    ioList.appendObject ("inverse") ;
    ioList.appendObject ("mainxib") ;
    ioList.appendObject ("version") ;
    ioList.appendObject ("calledBy") ;
    ioList.appendObject ("document") ;
    ioList.appendObject ("property") ;
    ioList.appendObject ("signature") ;
    ioList.appendObject ("transient") ;
    ioList.appendObject ("externFunc") ;
    ioList.appendObject ("dependsFrom") ;
    ioList.appendObject ("xcodeproject") ;
    ioList.appendObject ("classForSwift") ;
    ioList.appendObject ("externDelegate") ;
    ioList.appendObject ("arrayController") ;
    ioList.appendObject ("objectController") ;
    ioList.appendObject ("selectionController") ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static cLexiqueIntrospection lexiqueIntrospection_easyBindings_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_easyBindings_5F_lexique, getKeywordsForIdentifier_easyBindings_5F_lexique) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

uint32_t C_Lexique_easyBindings_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [77] = {0,
    2 /* easyBindings_lexique_1_identifier */,
    3 /* easyBindings_lexique_1_Identifier */,
    4 /* easyBindings_lexique_1__40_attribute */,
    5 /* easyBindings_lexique_1_bindingName */,
    7 /* easyBindings_lexique_1_literal_5F_integer */,
    8 /* easyBindings_lexique_1_literal_5F_double */,
    9 /* easyBindings_lexique_1_literal_5F_string */,
    11 /* easyBindings_lexique_1_comment */,
    1 /* easyBindings_lexique_1_action */,
    1 /* easyBindings_lexique_1_all */,
    1 /* easyBindings_lexique_1_arrayController */,
    1 /* easyBindings_lexique_1_binding */,
    1 /* easyBindings_lexique_1_calledBy */,
    1 /* easyBindings_lexique_1_class */,
    1 /* easyBindings_lexique_1_classForSwift */,
    1 /* easyBindings_lexique_1_column */,
    1 /* easyBindings_lexique_1_default */,
    1 /* easyBindings_lexique_1_dependsFrom */,
    1 /* easyBindings_lexique_1_document */,
    1 /* easyBindings_lexique_1_enum */,
    1 /* easyBindings_lexique_1_entity */,
    1 /* easyBindings_lexique_1_extern */,
    1 /* easyBindings_lexique_1_externDelegate */,
    1 /* easyBindings_lexique_1_externFunc */,
    1 /* easyBindings_lexique_1_graphic */,
    1 /* easyBindings_lexique_1_filter */,
    1 /* easyBindings_lexique_1_include */,
    1 /* easyBindings_lexique_1_inverse */,
    1 /* easyBindings_lexique_1_mainxib */,
    1 /* easyBindings_lexique_1_no */,
    1 /* easyBindings_lexique_1_none */,
    1 /* easyBindings_lexique_1_objectController */,
    1 /* easyBindings_lexique_1_one */,
    1 /* easyBindings_lexique_1_outlet */,
    1 /* easyBindings_lexique_1_prefs */,
    1 /* easyBindings_lexique_1_property */,
    1 /* easyBindings_lexique_1_proxy */,
    1 /* easyBindings_lexique_1_root */,
    1 /* easyBindings_lexique_1_selectionController */,
    1 /* easyBindings_lexique_1_self */,
    1 /* easyBindings_lexique_1_signature */,
    1 /* easyBindings_lexique_1_sort */,
    1 /* easyBindings_lexique_1_struct */,
    1 /* easyBindings_lexique_1_to */,
    1 /* easyBindings_lexique_1_toMany */,
    1 /* easyBindings_lexique_1_toOne */,
    1 /* easyBindings_lexique_1_transient */,
    1 /* easyBindings_lexique_1_version */,
    1 /* easyBindings_lexique_1_versionShouldChange */,
    1 /* easyBindings_lexique_1_xcodeproject */,
    1 /* easyBindings_lexique_1_yes */,
    6 /* easyBindings_lexique_1_enabled */,
    6 /* easyBindings_lexique_1_graphicController */,
    6 /* easyBindings_lexique_1_hidden */,
    6 /* easyBindings_lexique_1_tableValue */,
    6 /* easyBindings_lexique_1_run */,
    10 /* easyBindings_lexique_1__3A_ */,
    10 /* easyBindings_lexique_1__2C_ */,
    10 /* easyBindings_lexique_1__3B_ */,
    10 /* easyBindings_lexique_1__21_ */,
    10 /* easyBindings_lexique_1__5B_ */,
    10 /* easyBindings_lexique_1__5D_ */,
    10 /* easyBindings_lexique_1__7B_ */,
    10 /* easyBindings_lexique_1__7D_ */,
    10 /* easyBindings_lexique_1__28_ */,
    10 /* easyBindings_lexique_1__29_ */,
    10 /* easyBindings_lexique_1__2E_ */,
    10 /* easyBindings_lexique_1__7C_ */,
    10 /* easyBindings_lexique_1__26_ */,
    10 /* easyBindings_lexique_1__3C_ */,
    10 /* easyBindings_lexique_1__3E_ */,
    10 /* easyBindings_lexique_1__3C__3D_ */,
    10 /* easyBindings_lexique_1__3E__3D_ */,
    10 /* easyBindings_lexique_1__21__3D_ */,
    10 /* easyBindings_lexique_1__3D__3D_ */,
    10 /* easyBindings_lexique_1__5E_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_String C_Lexique_easyBindings_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  C_String result ;
  if (inStyleIndex < 12) {
    static const char * kStyleArray [12] = {
      "",
      "keywordsStyle",
      "idfStyle",
      "IdfStyle",
      "attributeStyle",
      "bindingNameStyle",
      "reservedBindingNameStyle",
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_start_5F_symbol_i0_ (const GALGAS_bool constinArgument_inIsUserDefined,
                                                                                      GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                      GALGAS_location & outArgument_outEndOfFile,
                                                                                      C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outEndOfFile.drop () ; // Release 'out' argument
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_include COMMA_SOURCE_FILE ("grammar-syntax.galgas", 64)) ;
      GALGAS_lstring var_filePath_2441 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("grammar-syntax.galgas", 65)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("grammar-syntax.galgas", 66)) ;
      GALGAS_lstring var_sourceFile_2472 = GALGAS_lstring::constructor_new (var_filePath_2441.getter_string (HERE).getter_absolutePathFromPath (GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("grammar-syntax.galgas", 68)).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("grammar-syntax.galgas", 68)) COMMA_SOURCE_FILE ("grammar-syntax.galgas", 68)), var_filePath_2441.getter_location (HERE)  COMMA_SOURCE_FILE ("grammar-syntax.galgas", 67)) ;
      GALGAS_location joker_2765 ; // Joker input parameter
      cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (inCompiler, var_sourceFile_2472, constinArgument_inIsUserDefined, ioArgument_ioDeclarationAST, joker_2765  COMMA_SOURCE_FILE ("grammar-syntax.galgas", 71)) ;
    } break ;
    case 3: {
      nt_enum_5F_declaration_ (constinArgument_inIsUserDefined, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 4: {
      nt_entity_5F_declaration_ (constinArgument_inIsUserDefined, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 5: {
      nt_class_5F_declaration_ (constinArgument_inIsUserDefined, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 6: {
      nt_preferences_5F_declaration_ (constinArgument_inIsUserDefined, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 7: {
      nt_document_5F_declaration_ (constinArgument_inIsUserDefined, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 8: {
      nt_outlet_5F_class_5F_declaration_ (constinArgument_inIsUserDefined, ioArgument_ioDeclarationAST.mProperty_mOutletClassDeclarationList, inCompiler) ;
    } break ;
    case 9: {
      nt_binding_5F_specification_ (constinArgument_inIsUserDefined, ioArgument_ioDeclarationAST.mProperty_mBindingSpecificationListMap, inCompiler) ;
    } break ;
    case 10: {
      nt_xcode_5F_project_ (ioArgument_ioDeclarationAST.mProperty_mXcodeProject, inCompiler) ;
    } break ;
    case 11: {
      nt_main_5F_xib_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mMainXibDescriptorList, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outEndOfFile = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("grammar-syntax.galgas", 94)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_include COMMA_SOURCE_FILE ("grammar-syntax.galgas", 64)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("grammar-syntax.galgas", 65)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("grammar-syntax.galgas", 66)) ;
    } break ;
    case 3: {
      nt_enum_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_entity_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_class_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_preferences_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_document_5F_declaration_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_outlet_5F_class_5F_declaration_parse (inCompiler) ;
    } break ;
    case 9: {
      nt_binding_5F_specification_parse (inCompiler) ;
    } break ;
    case 10: {
      nt_xcode_5F_project_parse (inCompiler) ;
    } break ;
    case 11: {
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
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_calledBy COMMA_SOURCE_FILE ("extern-swift-func.galgas", 23)) ;
  GALGAS_lstring var_callerName_976 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-swift-func.galgas", 25)) ;
  ioArgument_ioExternSwiftFunctionList.addAssign_operation (var_externFunctionName_919, var_callerName_976  COMMA_SOURCE_FILE ("extern-swift-func.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_externFunc COMMA_SOURCE_FILE ("extern-swift-func.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_calledBy COMMA_SOURCE_FILE ("extern-swift-func.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-swift-func.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i3_ (const GALGAS_bool constinArgument_inIsUserDefined,
                                                                                           GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property-class.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("transient-property-class.galgas", 23)) ;
  GALGAS_bool var_isClass_954 ;
  switch (select_easyBindings_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("transient-property-class.galgas", 26)) ;
    var_isClass_954 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("transient-property-class.galgas", 29)) ;
    var_isClass_954 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_propertyTypeName_1100 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property-class.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property-class.galgas", 33)) ;
  ioArgument_ioDeclarationAST.mProperty_mDeclarationList.addAssign_operation (GALGAS_transientPropertyTypeDeclaration::constructor_new (constinArgument_inIsUserDefined, var_propertyTypeName_1100, var_isClass_954  COMMA_SOURCE_FILE ("transient-property-class.galgas", 34))  COMMA_SOURCE_FILE ("transient-property-class.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i3_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property-class.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("transient-property-class.galgas", 23)) ;
  switch (select_easyBindings_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("transient-property-class.galgas", 26)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("transient-property-class.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property-class.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property-class.galgas", 33)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_declaration_i4_ (const GALGAS_bool constinArgument_inIsUserDefined,
                                                                                          GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.galgas", 21)) ;
  GALGAS_lstring var_enumName_933 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.galgas", 23)) ;
  GALGAS_lstringlist var_enumConstants_963 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("enumeration.galgas", 24)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_constantName_1046 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.galgas", 26)) ;
    var_enumConstants_963.addAssign_operation (var_constantName_1046  COMMA_SOURCE_FILE ("enumeration.galgas", 27)) ;
    switch (select_easyBindings_5F_syntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("enumeration.galgas", 29)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.galgas", 31)) ;
  ioArgument_ioDeclarationAST.mProperty_mDeclarationList.addAssign_operation (GALGAS_enumDeclaration::constructor_new (constinArgument_inIsUserDefined, var_enumName_933, var_enumConstants_963  COMMA_SOURCE_FILE ("enumeration.galgas", 32))  COMMA_SOURCE_FILE ("enumeration.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_declaration_i4_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.galgas", 23)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.galgas", 26)) ;
    switch (select_easyBindings_5F_syntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("enumeration.galgas", 29)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.galgas", 31)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toMany_5F_relationship_i5_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                             GALGAS_toManyRelationshipList & ioArgument_ioToManyRelationshipList,
                                                                                             GALGAS_stringset & ioArgument_ioSignatureList,
                                                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("relationships.galgas", 37)) ;
  GALGAS_bool var_usedForSignature_1482 = GALGAS_bool (false) ;
  GALGAS_bool var_cascading_1510 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_3 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attributeName_1577 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("relationships.galgas", 42)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_attributeName_1577.getter_string (HERE).objectCompare (GALGAS_string ("signature"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_usedForSignature_1482.boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (var_attributeName_1577.getter_location (SOURCE_FILE ("relationships.galgas", 45)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("relationships.galgas", 45)) ;
        }
        var_usedForSignature_1482 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_attributeName_1577.getter_string (HERE).objectCompare (GALGAS_string ("cascading"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const enumGalgasBool test_5 = var_cascading_1510.boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            fixItArray6.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (var_attributeName_1577.getter_location (SOURCE_FILE ("relationships.galgas", 50)), GALGAS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("relationships.galgas", 50)) ;
          }
          var_cascading_1510 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@signature")) ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@cascading")) ;
          inCompiler->emitSemanticError (var_attributeName_1577.getter_location (SOURCE_FILE ("relationships.galgas", 54)), GALGAS_string ("unknow attribute"), fixItArray7  COMMA_SOURCE_FILE ("relationships.galgas", 54)) ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_destinationEntityName_2138 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("relationships.galgas", 57)) ;
  GALGAS_lstring var_relationshipName_2177 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("relationships.galgas", 58)) ;
  const enumGalgasBool test_8 = var_usedForSignature_1482.boolEnum () ;
  if (kBoolTrue == test_8) {
    ioArgument_ioSignatureList.addAssign_operation (var_relationshipName_2177.getter_string (HERE)  COMMA_SOURCE_FILE ("relationships.galgas", 60)) ;
  }
  GALGAS_lstring var_inserseRelationshipName_2301 ;
  switch (select_easyBindings_5F_syntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("relationships.galgas", 64)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("relationships.galgas", 65)) ;
    var_inserseRelationshipName_2301 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("relationships.galgas", 66)) ;
  } break ;
  case 2: {
    var_inserseRelationshipName_2301 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), var_relationshipName_2177.getter_location (HERE)  COMMA_SOURCE_FILE ("relationships.galgas", 68)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("relationships.galgas", 70)) ;
  ioArgument_ioToManyRelationshipList.addAssign_operation (constinArgument_inCurrentEntity, var_destinationEntityName_2138, var_relationshipName_2177, var_inserseRelationshipName_2301, var_cascading_1510  COMMA_SOURCE_FILE ("relationships.galgas", 71)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toMany_5F_relationship_i5_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("relationships.galgas", 37)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("relationships.galgas", 42)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("relationships.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("relationships.galgas", 58)) ;
  switch (select_easyBindings_5F_syntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("relationships.galgas", 64)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("relationships.galgas", 65)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("relationships.galgas", 66)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("relationships.galgas", 70)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toOne_5F_relationship_i6_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                            GALGAS_toOneRelationshipList & ioArgument_ioToOneRelationshipList,
                                                                                            C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("relationships.galgas", 85)) ;
  GALGAS_bool var_cascading_2931 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_5 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attributeName_2998 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("relationships.galgas", 89)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_attributeName_2998.getter_string (HERE).objectCompare (GALGAS_string ("cascading"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_cascading_2931.boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (var_attributeName_2998.getter_location (SOURCE_FILE ("relationships.galgas", 92)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("relationships.galgas", 92)) ;
        }
        var_cascading_2931 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        appendFixItActions (fixItArray4, kFixItReplace, GALGAS_string ("@cascading")) ;
        inCompiler->emitSemanticError (var_attributeName_2998.getter_location (SOURCE_FILE ("relationships.galgas", 96)), GALGAS_string ("unknow attribute"), fixItArray4  COMMA_SOURCE_FILE ("relationships.galgas", 96)) ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_destinationEntityName_3345 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("relationships.galgas", 99)) ;
  GALGAS_lstring var_relationshipName_3393 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("relationships.galgas", 100)) ;
  GALGAS_propertyMultiplicity var_inverseRelationMultiplicity_3447 ;
  GALGAS_lstring var_inverseRelationshipName_3484 ;
  switch (select_easyBindings_5F_syntax_6 (inCompiler)) {
  case 1: {
    var_inverseRelationMultiplicity_3447 = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("relationships.galgas", 104)) ;
    var_inverseRelationshipName_3484 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 105)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("relationships.galgas", 107)) ;
    switch (select_easyBindings_5F_syntax_7 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("relationships.galgas", 109)) ;
      var_inverseRelationMultiplicity_3447 = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("relationships.galgas", 110)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("relationships.galgas", 112)) ;
      var_inverseRelationMultiplicity_3447 = GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("relationships.galgas", 113)) ;
    } break ;
    default:
      break ;
    }
    var_inverseRelationshipName_3484 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("relationships.galgas", 115)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("relationships.galgas", 117)) ;
  ioArgument_ioToOneRelationshipList.addAssign_operation (constinArgument_inCurrentEntity, var_destinationEntityName_3345, var_relationshipName_3393, var_inverseRelationshipName_3484, var_inverseRelationMultiplicity_3447, var_cascading_2931  COMMA_SOURCE_FILE ("relationships.galgas", 118)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toOne_5F_relationship_i6_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("relationships.galgas", 85)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("relationships.galgas", 89)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("relationships.galgas", 99)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("relationships.galgas", 100)) ;
  switch (select_easyBindings_5F_syntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("relationships.galgas", 107)) ;
    switch (select_easyBindings_5F_syntax_7 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("relationships.galgas", 109)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("relationships.galgas", 112)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("relationships.galgas", 115)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("relationships.galgas", 117)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i7_ (const GALGAS_bool constinArgument_inIsUserDefined,
                                                                                           GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("class.galgas", 26)) ;
  GALGAS_lstring var_entityName_1142 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("class.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("class.galgas", 28)) ;
  GALGAS_secondaryPropertyList var_secondaryPropertyList_1199 = GALGAS_secondaryPropertyList::constructor_emptyList (SOURCE_FILE ("class.galgas", 29)) ;
  GALGAS_simpleStoredPropertyList var_simpleStoredAttributeList_1260 = GALGAS_simpleStoredPropertyList::constructor_emptyList (SOURCE_FILE ("class.galgas", 30)) ;
  GALGAS_toOneRelationshipList var_toOneRelationshipList_1314 = GALGAS_toOneRelationshipList::constructor_emptyList (SOURCE_FILE ("class.galgas", 31)) ;
  GALGAS_toManyRelationshipList var_toManyRelationshipList_1370 = GALGAS_toManyRelationshipList::constructor_emptyList (SOURCE_FILE ("class.galgas", 32)) ;
  GALGAS_stringset var_signatureList_1404 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("class.galgas", 33)) ;
  GALGAS_externSwiftFunctionList var_externSwiftFunctionList_1462 = GALGAS_externSwiftFunctionList::constructor_emptyList (SOURCE_FILE ("class.galgas", 34)) ;
  GALGAS_externSwiftDelegateList var_externSwiftDelegateList_1520 = GALGAS_externSwiftDelegateList::constructor_emptyList (SOURCE_FILE ("class.galgas", 35)) ;
  GALGAS_lstringlist var_actionDeclarationList_1564 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("class.galgas", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_8 (inCompiler)) {
    case 2: {
      nt_simple_5F_stored_5F_declaration_ (var_simpleStoredAttributeList_1260, var_signatureList_1404, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 3: {
      nt_transient_5F_declaration_ (var_secondaryPropertyList_1199, inCompiler) ;
    } break ;
    case 4: {
      nt_extern_5F_swift_5F_func_ (var_externSwiftFunctionList_1462, inCompiler) ;
    } break ;
    case 5: {
      nt_extern_5F_swift_5F_delegate_ (var_externSwiftDelegateList_1520, inCompiler) ;
    } break ;
    case 6: {
      nt_action_5F_declaration_ (var_actionDeclarationList_1564, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("class.galgas", 49)) ;
  ioArgument_ioDeclarationAST.mProperty_mDeclarationList.addAssign_operation (GALGAS_classDeclaration::constructor_new (constinArgument_inIsUserDefined, var_entityName_1142, var_simpleStoredAttributeList_1260, var_secondaryPropertyList_1199, var_externSwiftFunctionList_1462, var_externSwiftDelegateList_1520, var_actionDeclarationList_1564  COMMA_SOURCE_FILE ("class.galgas", 50))  COMMA_SOURCE_FILE ("class.galgas", 50)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i7_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("class.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("class.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("class.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_8 (inCompiler)) {
    case 2: {
      nt_simple_5F_stored_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_transient_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_extern_5F_swift_5F_func_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_extern_5F_swift_5F_delegate_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_action_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("class.galgas", 49)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_entity_5F_declaration_i8_ (const GALGAS_bool constinArgument_inIsUserDefined,
                                                                                            GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                            C_Lexique_easyBindings_5F_lexique * inCompiler) {
  GALGAS_bool var_graphicEntity_1219 ;
  switch (select_easyBindings_5F_syntax_9 (inCompiler)) {
  case 1: {
    var_graphicEntity_1219 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.galgas", 31)) ;
    var_graphicEntity_1219 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("entity.galgas", 34)) ;
  GALGAS_lstringlist var_obsoleteEntityNames_1366 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("entity.galgas", 35)) ;
  switch (select_easyBindings_5F_syntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("entity.galgas", 38)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_obsoleteName_1460 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas", 40)) ;
      var_obsoleteEntityNames_1366.addAssign_operation (var_obsoleteName_1460  COMMA_SOURCE_FILE ("entity.galgas", 41)) ;
      switch (select_easyBindings_5F_syntax_11 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("entity.galgas", 43)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("entity.galgas", 45)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_entityName_1599 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas", 47)) ;
  GALGAS_lstring var_superEntityName_1628 ;
  switch (select_easyBindings_5F_syntax_12 (inCompiler)) {
  case 1: {
    var_superEntityName_1628 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("entity.galgas", 50)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("entity.galgas", 52)) ;
    var_superEntityName_1628 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("entity.galgas", 55)) ;
  GALGAS_secondaryPropertyList var_secondaryPropertyList_1795 = GALGAS_secondaryPropertyList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 56)) ;
  GALGAS_simpleStoredPropertyList var_simpleStoredAttributeList_1856 = GALGAS_simpleStoredPropertyList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 57)) ;
  GALGAS_toOneRelationshipList var_toOneRelationshipList_1910 = GALGAS_toOneRelationshipList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 58)) ;
  GALGAS_toManyRelationshipList var_toManyRelationshipList_1966 = GALGAS_toManyRelationshipList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 59)) ;
  GALGAS_stringset var_signatureList_2000 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("entity.galgas", 60)) ;
  GALGAS_lstringlist var_actionDeclarationList_2044 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("entity.galgas", 61)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_13 (inCompiler)) {
    case 2: {
      nt_simple_5F_stored_5F_declaration_ (var_simpleStoredAttributeList_1856, var_signatureList_2000, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 3: {
      nt_transient_5F_declaration_ (var_secondaryPropertyList_1795, inCompiler) ;
    } break ;
    case 4: {
      nt_toMany_5F_relationship_ (var_entityName_1599, var_toManyRelationshipList_1966, var_signatureList_2000, inCompiler) ;
    } break ;
    case 5: {
      nt_toOne_5F_relationship_ (var_entityName_1599, var_toOneRelationshipList_1910, inCompiler) ;
    } break ;
    case 6: {
      nt_action_5F_declaration_ (var_actionDeclarationList_2044, inCompiler) ;
    } break ;
    case 7: {
      nt_controller_5F_declaration_ (var_secondaryPropertyList_1795, inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("entity.galgas", 76)) ;
  ioArgument_ioDeclarationAST.mProperty_mDeclarationList.addAssign_operation (GALGAS_entityDeclaration::constructor_new (constinArgument_inIsUserDefined, var_entityName_1599, var_superEntityName_1628, var_simpleStoredAttributeList_1856, var_toOneRelationshipList_1910, var_toManyRelationshipList_1966, var_secondaryPropertyList_1795, var_signatureList_2000, var_actionDeclarationList_2044, var_obsoleteEntityNames_1366, var_graphicEntity_1219  COMMA_SOURCE_FILE ("entity.galgas", 77))  COMMA_SOURCE_FILE ("entity.galgas", 77)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_entity_5F_declaration_i8_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("entity.galgas", 34)) ;
  switch (select_easyBindings_5F_syntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("entity.galgas", 38)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas", 40)) ;
      switch (select_easyBindings_5F_syntax_11 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("entity.galgas", 43)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("entity.galgas", 45)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas", 47)) ;
  switch (select_easyBindings_5F_syntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("entity.galgas", 52)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("entity.galgas", 55)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_13 (inCompiler)) {
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
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("entity.galgas", 76)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_document_5F_declaration_i9_ (const GALGAS_bool constinArgument_inIsUserDefined,
                                                                                              GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_document COMMA_SOURCE_FILE ("document.galgas", 26)) ;
  GALGAS_lstring var_documentName_1127 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("document.galgas", 28)) ;
  GALGAS_lstring var_rootEntityName_1184 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("document.galgas", 30)) ;
  GALGAS_secondaryPropertyList var_secondaryPropertyList_1241 = GALGAS_secondaryPropertyList::constructor_emptyList (SOURCE_FILE ("document.galgas", 31)) ;
  GALGAS_outletDeclarationList var_outletDeclarationList_1295 = GALGAS_outletDeclarationList::constructor_emptyList (SOURCE_FILE ("document.galgas", 32)) ;
  GALGAS_regularBindingList var_bindingList_1336 = GALGAS_regularBindingList::constructor_emptyList (SOURCE_FILE ("document.galgas", 33)) ;
  GALGAS_lstringlist var_actionDeclarationList_1380 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("document.galgas", 34)) ;
  GALGAS_simpleStoredPropertyList var_simpleStoredPropertyList_1440 = GALGAS_simpleStoredPropertyList::constructor_emptyList (SOURCE_FILE ("document.galgas", 35)) ;
  GALGAS_stringset var_signatureList_1474 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("document.galgas", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_14 (inCompiler)) {
    case 2: {
      nt_simple_5F_stored_5F_declaration_ (var_simpleStoredPropertyList_1440, var_signatureList_1474, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 3: {
      nt_action_5F_declaration_ (var_actionDeclarationList_1380, inCompiler) ;
    } break ;
    case 4: {
      nt_transient_5F_declaration_ (var_secondaryPropertyList_1241, inCompiler) ;
    } break ;
    case 5: {
      nt_outlet_5F_declaration_ (var_outletDeclarationList_1295, inCompiler) ;
    } break ;
    case 6: {
      nt_controller_5F_declaration_ (var_secondaryPropertyList_1241, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("document.galgas", 49)) ;
  var_secondaryPropertyList_1241.addAssign_operation (GALGAS_transientAST::constructor_new (GALGAS_string ("String").getter_here (inCompiler COMMA_SOURCE_FILE ("document.galgas", 52)), GALGAS_string ("documentFilePath").getter_here (inCompiler COMMA_SOURCE_FILE ("document.galgas", 53)), GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("document.galgas", 54)), GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("document.galgas", 55))  COMMA_SOURCE_FILE ("document.galgas", 51))  COMMA_SOURCE_FILE ("document.galgas", 51)) ;
  ioArgument_ioDeclarationAST.mProperty_mDeclarationList.addAssign_operation (GALGAS_documentDeclaration::constructor_new (constinArgument_inIsUserDefined, var_documentName_1127, var_rootEntityName_1184, var_outletDeclarationList_1295, var_simpleStoredPropertyList_1440, var_actionDeclarationList_1380, var_secondaryPropertyList_1241  COMMA_SOURCE_FILE ("document.galgas", 58))  COMMA_SOURCE_FILE ("document.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_document_5F_declaration_i9_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_document COMMA_SOURCE_FILE ("document.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("document.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("document.galgas", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_14 (inCompiler)) {
    case 2: {
      nt_simple_5F_stored_5F_declaration_parse (inCompiler) ;
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
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("document.galgas", 49)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_preferences_5F_declaration_i10_ (const GALGAS_bool /* constinArgument_inIsUserDefined */,
                                                                                                  GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                  C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("preferences.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("preferences.galgas", 30)) ;
  GALGAS_stringset var_signatureList_1291 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("preferences.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_15 (inCompiler)) {
    case 2: {
      nt_action_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mActionDeclarationList, inCompiler) ;
    } break ;
    case 3: {
      GALGAS_simpleStoredPropertyList var_simpleStoredPropertyList_1466 = GALGAS_simpleStoredPropertyList::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 36)) ;
      nt_simple_5F_stored_5F_declaration_ (var_simpleStoredPropertyList_1466, var_signatureList_1291, ioArgument_ioDeclarationAST, inCompiler) ;
      ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mSimpleStoredAttributeList.plusAssign_operation(var_simpleStoredPropertyList_1466, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 41)) ;
    } break ;
    case 4: {
      nt_outlet_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mOutletDeclarationList, inCompiler) ;
    } break ;
    case 5: {
      nt_transient_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mSecondaryPropertyList, inCompiler) ;
    } break ;
    case 6: {
      nt_extern_5F_swift_5F_func_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mExternSwiftFunctionList, inCompiler) ;
    } break ;
    case 7: {
      nt_stored_5F_array_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mStoredArrayList, inCompiler) ;
    } break ;
    case 8: {
      nt_controller_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mSecondaryPropertyList, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mSignatureList.plusAssign_operation(var_signatureList_1291, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("preferences.galgas", 54)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_preferences_5F_declaration_i10_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("preferences.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("preferences.galgas", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_15 (inCompiler)) {
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
      nt_stored_5F_array_5F_declaration_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_controller_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("preferences.galgas", 54)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i11_ (const GALGAS_bool constinArgument_inIsUserDefined,
                                                                                                      GALGAS_outletClassDeclarationList & ioArgument_ioOutletClassDeclarationList,
                                                                                                      C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("outlet-class.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-class.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("outlet-class.galgas", 27)) ;
  GALGAS_lstring var_outletClassName_1127 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.galgas", 28)) ;
  GALGAS_lstring var_superClassName_1155 ;
  switch (select_easyBindings_5F_syntax_16 (inCompiler)) {
  case 1: {
    var_superClassName_1155 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 31)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-class.galgas", 33)) ;
    var_superClassName_1155 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.galgas", 34)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_hasRunAction_1282 = GALGAS_bool (false) ;
  GALGAS_bool var_hasEnabled_1311 = GALGAS_bool (false) ;
  GALGAS_bool var_hasHidden_1339 = GALGAS_bool (false) ;
  GALGAS_bool var_handlesTableViewBinding_1381 = GALGAS_bool (false) ;
  GALGAS_bool var_handlesGraphicControllerBinding_1431 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-class.galgas", 43)) ;
      var_handlesTableViewBinding_1381 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-class.galgas", 46)) ;
      var_hasRunAction_1282 = GALGAS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-class.galgas", 49)) ;
      var_hasEnabled_1311 = GALGAS_bool (true) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-class.galgas", 52)) ;
      var_hasHidden_1339 = GALGAS_bool (true) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-class.galgas", 55)) ;
      var_handlesGraphicControllerBinding_1431 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-class.galgas", 58)) ;
  ioArgument_ioOutletClassDeclarationList.addAssign_operation (constinArgument_inIsUserDefined, var_outletClassName_1127, var_superClassName_1155, var_hasRunAction_1282, var_hasEnabled_1311, var_handlesTableViewBinding_1381, var_handlesGraphicControllerBinding_1431, var_hasHidden_1339  COMMA_SOURCE_FILE ("outlet-class.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i11_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("outlet-class.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-class.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("outlet-class.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.galgas", 28)) ;
  switch (select_easyBindings_5F_syntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-class.galgas", 33)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.galgas", 34)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-class.galgas", 43)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-class.galgas", 46)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-class.galgas", 49)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-class.galgas", 52)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-class.galgas", 55)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-class.galgas", 58)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_specification_i12_ (const GALGAS_bool constinArgument_inIsUserDefined,
                                                                                                GALGAS_outletClassBindingSpecificationList & ioArgument_ioControllerTemplateList,
                                                                                                C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_binding COMMA_SOURCE_FILE ("binding-specification.galgas", 40)) ;
  GALGAS_lstring var_outletClassName_1571 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 41)) ;
  GALGAS_lstring var_bindingName_1615 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("binding-specification.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("binding-specification.galgas", 43)) ;
  GALGAS_outletClassBindingSpecificationModelList var_outletClassBindingSpecificationModelList_1710 = GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("binding-specification.galgas", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_bool var_modelShouldBeWritableProperty_1768 ;
    switch (select_easyBindings_5F_syntax_19 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("binding-specification.galgas", 48)) ;
      var_modelShouldBeWritableProperty_1768 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("binding-specification.galgas", 51)) ;
      var_modelShouldBeWritableProperty_1768 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_modelTypeName_1959 ;
    switch (select_easyBindings_5F_syntax_20 (inCompiler)) {
    case 1: {
      var_modelTypeName_1959 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 56)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("binding-specification.galgas", 58)) ;
      var_modelTypeName_1959 = GALGAS_lstring::constructor_new (GALGAS_string ("enum"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("binding-specification.galgas", 59))  COMMA_SOURCE_FILE ("binding-specification.galgas", 59)) ;
    } break ;
    default:
      break ;
    }
    var_outletClassBindingSpecificationModelList_1710.addAssign_operation (var_modelTypeName_1959, var_modelShouldBeWritableProperty_1768  COMMA_SOURCE_FILE ("binding-specification.galgas", 61)) ;
    switch (select_easyBindings_5F_syntax_18 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("binding-specification.galgas", 63)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_controllerBindingOptionList var_bindingOptionList_2263 = GALGAS_controllerBindingOptionList::constructor_emptyList (SOURCE_FILE ("binding-specification.galgas", 65)) ;
  switch (select_easyBindings_5F_syntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("binding-specification.galgas", 68)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_optionName_2355 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 70)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("binding-specification.galgas", 71)) ;
      GALGAS_lstring var_optionType_2413 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 72)) ;
      var_bindingOptionList_2263.addAssign_operation (var_optionName_2355, var_optionType_2413  COMMA_SOURCE_FILE ("binding-specification.galgas", 73)) ;
      switch (select_easyBindings_5F_syntax_22 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("binding-specification.galgas", 75)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("binding-specification.galgas", 77)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("binding-specification.galgas", 79)) ;
  ioArgument_ioControllerTemplateList.addAssign_operation (var_outletClassName_1571, constinArgument_inIsUserDefined, var_bindingName_1615, var_outletClassBindingSpecificationModelList_1710, var_bindingOptionList_2263  COMMA_SOURCE_FILE ("binding-specification.galgas", 80)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_specification_i12_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_binding COMMA_SOURCE_FILE ("binding-specification.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("binding-specification.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("binding-specification.galgas", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_19 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("binding-specification.galgas", 48)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("binding-specification.galgas", 51)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_20 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 56)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("binding-specification.galgas", 58)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_18 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("binding-specification.galgas", 63)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_easyBindings_5F_syntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("binding-specification.galgas", 68)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 70)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("binding-specification.galgas", 71)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 72)) ;
      switch (select_easyBindings_5F_syntax_22 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("binding-specification.galgas", 75)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("binding-specification.galgas", 77)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("binding-specification.galgas", 79)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_declaration_i13_ (GALGAS_outletDeclarationList & ioArgument_ioOutletDeclarationList,
                                                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-declaration.galgas", 46)) ;
  GALGAS_lstring var_outletTypeName_1821 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 47)) ;
  GALGAS_lstring var_outletName_1854 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 48)) ;
  GALGAS_tableValueBinding var_tableValueBinding_1880 = GALGAS_tableValueBinding::constructor_noTableValueBinding (SOURCE_FILE ("outlet-declaration.galgas", 49)) ;
  GALGAS_runActionDescriptor var_runActionDescriptor_1950 = GALGAS_runActionDescriptor::constructor_noAction (SOURCE_FILE ("outlet-declaration.galgas", 50)) ;
  GALGAS_multipleBindingDescriptor var_enabledBindingDescriptor_2016 = GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("outlet-declaration.galgas", 51)) ;
  GALGAS_multipleBindingDescriptor var_hiddenBindingDescriptor_2087 = GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("outlet-declaration.galgas", 52)) ;
  GALGAS_graphicController var_graphicController_2152 = GALGAS_graphicController::constructor_none (SOURCE_FILE ("outlet-declaration.galgas", 53)) ;
  GALGAS_regularBindingList var_regularBindingList_2221 = GALGAS_regularBindingList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 54)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-declaration.galgas", 57)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_tableValueBinding_1880.objectCompare (GALGAS_tableValueBinding::constructor_noTableValueBinding (SOURCE_FILE ("outlet-declaration.galgas", 58)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 59)), GALGAS_string ("duplicated $tableValue binding"), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 59)) ;
      }
      GALGAS_lstring var_controllerName_2435 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 61)) ;
      var_tableValueBinding_1880 = GALGAS_tableValueBinding::constructor_tableValueBinding (var_controllerName_2435  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 62)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-declaration.galgas", 64)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_runActionDescriptor_1950.objectCompare (GALGAS_runActionDescriptor::constructor_noAction (SOURCE_FILE ("outlet-declaration.galgas", 65)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 66)), GALGAS_string ("duplicated $run binding"), fixItArray4  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 66)) ;
      }
      GALGAS_lstring var_runTargetName_2669 ;
      switch (select_easyBindings_5F_syntax_24 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("outlet-declaration.galgas", 70)) ;
        var_runTargetName_2669 = GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 71))  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 71)) ;
      } break ;
      case 2: {
        var_runTargetName_2669 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 73)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 75)) ;
      GALGAS_lstring var_runActionName_2863 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 76)) ;
      var_runActionDescriptor_1950 = GALGAS_runActionDescriptor::constructor_action (var_runTargetName_2669, var_runActionName_2863  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 77)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-declaration.galgas", 80)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_enabledBindingDescriptor_2016.objectCompare (GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("outlet-declaration.galgas", 81)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 82)), GALGAS_string ("duplicated $enabled binding"), fixItArray6  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 82)) ;
      }
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_3210 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_3210, inCompiler) ;
      var_enabledBindingDescriptor_2016 = GALGAS_multipleBindingDescriptor::constructor_binding (var_bindingExpression_3210  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 85)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-declaration.galgas", 88)) ;
      const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_hiddenBindingDescriptor_2087.objectCompare (GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("outlet-declaration.galgas", 89)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 90)), GALGAS_string ("duplicated $hidden binding"), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 90)) ;
      }
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_3545 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_3545, inCompiler) ;
      var_hiddenBindingDescriptor_2087 = GALGAS_multipleBindingDescriptor::constructor_binding (var_bindingExpression_3545  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 93)) ;
    } break ;
    case 6: {
      GALGAS_lstring var_bindingName_3697 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-declaration.galgas", 96)) ;
      GALGAS_observablePropertyList var_observablePropertyList_3750 = GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 97)) ;
      bool repeatFlag_9 = true ;
      while (repeatFlag_9) {
        GALGAS_observablePropertyAST var_observableProperty_3845 ;
        nt_observable_5F_property_ (var_observableProperty_3845, inCompiler) ;
        var_observablePropertyList_3750.addAssign_operation (var_observableProperty_3845  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 100)) ;
        switch (select_easyBindings_5F_syntax_25 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 102)) ;
        } break ;
        default:
          repeatFlag_9 = false ;
          break ;
        }
      }
      GALGAS_bindingOptionList var_bindingOptions_3981 ;
      nt_binding_5F_option_5F_list_ (var_bindingOptions_3981, inCompiler) ;
      var_regularBindingList_2221.addAssign_operation (var_bindingName_3697, var_observablePropertyList_3750, var_bindingOptions_3981  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 105)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-declaration.galgas", 111)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("outlet-declaration.galgas", 112)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 113)) ;
      GALGAS_lstring var_graphicControllerName_4234 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 114)) ;
      GALGAS_lstring var_propertyName_4262 ;
      switch (select_easyBindings_5F_syntax_26 (inCompiler)) {
      case 1: {
        var_propertyName_4262 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 117)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 119)) ;
        var_propertyName_4262 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 120)) ;
      } break ;
      default:
        break ;
      }
      const enumGalgasBool test_10 = var_graphicController_2152.getter_isNone (SOURCE_FILE ("outlet-declaration.galgas", 122)).boolEnum () ;
      if (kBoolTrue == test_10) {
        var_graphicController_2152 = GALGAS_graphicController::constructor_defined (var_graphicControllerName_4234, var_propertyName_4262  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 123)) ;
      }else if (kBoolFalse == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (var_graphicControllerName_4234.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 125)), GALGAS_string ("binding already defined"), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 125)) ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 129)) ;
  ioArgument_ioOutletDeclarationList.addAssign_operation (var_outletTypeName_1821, var_outletName_1854, var_tableValueBinding_1880, var_runActionDescriptor_1950, var_enabledBindingDescriptor_2016, var_hiddenBindingDescriptor_2087, var_regularBindingList_2221, var_graphicController_2152  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 130)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_declaration_i13_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-declaration.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-declaration.galgas", 57)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 61)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-declaration.galgas", 64)) ;
      switch (select_easyBindings_5F_syntax_24 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("outlet-declaration.galgas", 70)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 73)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 75)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 76)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-declaration.galgas", 80)) ;
      nt_booleanMultipleBindingExpression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-declaration.galgas", 88)) ;
      nt_booleanMultipleBindingExpression_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-declaration.galgas", 96)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        nt_observable_5F_property_parse (inCompiler) ;
        switch (select_easyBindings_5F_syntax_25 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 102)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      nt_binding_5F_option_5F_list_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-declaration.galgas", 111)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("outlet-declaration.galgas", 112)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 113)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 114)) ;
      switch (select_easyBindings_5F_syntax_26 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 119)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 120)) ;
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
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 129)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_observable_5F_property_i14_ (GALGAS_observablePropertyAST & outArgument_outObservablePropertyAST,
                                                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outObservablePropertyAST.drop () ; // Release 'out' argument
  switch (select_easyBindings_5F_syntax_27 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("observable-property.galgas", 40)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 41)) ;
    GALGAS_lstring var_propertyName_1966 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 42)) ;
    switch (select_easyBindings_5F_syntax_28 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_rootProperty (var_propertyName_1966  COMMA_SOURCE_FILE ("observable-property.galgas", 44)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 46)) ;
      switch (select_easyBindings_5F_syntax_29 (inCompiler)) {
      case 1: {
        GALGAS_lstring var_optionName_2132 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 48)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_rootPropertyWithOption (var_propertyName_1966, var_optionName_2132  COMMA_SOURCE_FILE ("observable-property.galgas", 49)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas", 51)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 52)) ;
        GALGAS_lstring var_observablePropertyName_2337 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 53)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_rootPropertyRelationship (var_propertyName_1966, var_observablePropertyName_2337  COMMA_SOURCE_FILE ("observable-property.galgas", 54)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.galgas", 58)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_rootPropertyNone (var_propertyName_1966  COMMA_SOURCE_FILE ("observable-property.galgas", 59)) ;
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
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("observable-property.galgas", 63)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 64)) ;
    GALGAS_lstring var_propertyName_2699 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 65)) ;
    switch (select_easyBindings_5F_syntax_30 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfProperty (var_propertyName_2699  COMMA_SOURCE_FILE ("observable-property.galgas", 67)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 69)) ;
      switch (select_easyBindings_5F_syntax_31 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas", 71)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 72)) ;
        GALGAS_lstring var_elementPropertyName_2906 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 73)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfPropertyArray (var_propertyName_2699, var_elementPropertyName_2906  COMMA_SOURCE_FILE ("observable-property.galgas", 74)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.galgas", 76)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 77)) ;
        GALGAS_lstring var_elementPropertyName_3121 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 78)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfPropertyObject (var_propertyName_2699, var_elementPropertyName_3121  COMMA_SOURCE_FILE ("observable-property.galgas", 79)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.galgas", 81)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfPropertyNone (var_propertyName_2699  COMMA_SOURCE_FILE ("observable-property.galgas", 82)) ;
      } break ;
      case 4: {
        GALGAS_lstring var_optionName_3410 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 84)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfPropertyWithOption (var_propertyName_2699, var_optionName_3410  COMMA_SOURCE_FILE ("observable-property.galgas", 85)) ;
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
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("observable-property.galgas", 89)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 90)) ;
    GALGAS_lstring var_propertyName_3613 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 91)) ;
    switch (select_easyBindings_5F_syntax_32 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_prefsProperty (var_propertyName_3613  COMMA_SOURCE_FILE ("observable-property.galgas", 93)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 95)) ;
      GALGAS_lstring var_optionName_3765 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 96)) ;
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_prefsPropertyWithOption (var_propertyName_3613, var_optionName_3765  COMMA_SOURCE_FILE ("observable-property.galgas", 97)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    GALGAS_lstring var_controllerName_3933 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 100)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 101)) ;
    GALGAS_lstring var_propertyName_3980 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 102)) ;
    switch (select_easyBindings_5F_syntax_33 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_controllerProperty (var_controllerName_3933, var_propertyName_3980  COMMA_SOURCE_FILE ("observable-property.galgas", 104)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 106)) ;
      GALGAS_lstring var_secondaryPropertyName_4177 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 107)) ;
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_controllerSecondaryProperty (var_controllerName_3933, var_propertyName_3980, var_secondaryPropertyName_4177  COMMA_SOURCE_FILE ("observable-property.galgas", 108)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_signature COMMA_SOURCE_FILE ("observable-property.galgas", 115)) ;
    outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_signatureProperty (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.galgas", 116))  COMMA_SOURCE_FILE ("observable-property.galgas", 116)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_version COMMA_SOURCE_FILE ("observable-property.galgas", 118)) ;
    outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_versionProperty (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.galgas", 119))  COMMA_SOURCE_FILE ("observable-property.galgas", 119)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange COMMA_SOURCE_FILE ("observable-property.galgas", 121)) ;
    outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_versionShouldChangeProperty (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.galgas", 122))  COMMA_SOURCE_FILE ("observable-property.galgas", 122)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_observable_5F_property_i14_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_27 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("observable-property.galgas", 40)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 41)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 42)) ;
    switch (select_easyBindings_5F_syntax_28 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 46)) ;
      switch (select_easyBindings_5F_syntax_29 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 48)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas", 51)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 52)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 53)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.galgas", 58)) ;
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
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("observable-property.galgas", 63)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 64)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 65)) ;
    switch (select_easyBindings_5F_syntax_30 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 69)) ;
      switch (select_easyBindings_5F_syntax_31 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas", 71)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 72)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 73)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.galgas", 76)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 77)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 78)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.galgas", 81)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 84)) ;
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
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("observable-property.galgas", 89)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 90)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 91)) ;
    switch (select_easyBindings_5F_syntax_32 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 95)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 96)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 100)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 101)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 102)) ;
    switch (select_easyBindings_5F_syntax_33 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 106)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 107)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_signature COMMA_SOURCE_FILE ("observable-property.galgas", 115)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_version COMMA_SOURCE_FILE ("observable-property.galgas", 118)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange COMMA_SOURCE_FILE ("observable-property.galgas", 121)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i15_ (GALGAS_secondaryPropertyList & ioArgument_ioSecondaryPropertyList,
                                                                                                C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.galgas", 21)) ;
  GALGAS_lstring var_transientTypeName_991 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.galgas", 22)) ;
  GALGAS_lstring var_transientName_1036 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.galgas", 23)) ;
  GALGAS_lstring var_externFunctionName_1068 ;
  switch (select_easyBindings_5F_syntax_34 (inCompiler)) {
  case 1: {
    var_externFunctionName_1068 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 26)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_externFunc COMMA_SOURCE_FILE ("transient-property.galgas", 28)) ;
    var_externFunctionName_1068 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("transient-property.galgas", 31)) ;
  GALGAS_observablePropertyList var_dependanceList_1270 = GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_observablePropertyAST var_observablePropertyAST_1364 ;
    nt_observable_5F_property_ (var_observablePropertyAST_1364, inCompiler) ;
    var_dependanceList_1270.addAssign_operation (var_observablePropertyAST_1364  COMMA_SOURCE_FILE ("transient-property.galgas", 35)) ;
    switch (select_easyBindings_5F_syntax_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("transient-property.galgas", 37)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.galgas", 39)) ;
  ioArgument_ioSecondaryPropertyList.addAssign_operation (GALGAS_transientAST::constructor_new (var_transientTypeName_991, var_transientName_1036, var_dependanceList_1270, var_externFunctionName_1068  COMMA_SOURCE_FILE ("transient-property.galgas", 40))  COMMA_SOURCE_FILE ("transient-property.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i15_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.galgas", 23)) ;
  switch (select_easyBindings_5F_syntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_externFunc COMMA_SOURCE_FILE ("transient-property.galgas", 28)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("transient-property.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_observable_5F_property_parse (inCompiler) ;
    switch (select_easyBindings_5F_syntax_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("transient-property.galgas", 37)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.galgas", 39)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i16_ (GALGAS_simpleStoredPropertyList & ioArgument_ioAttributeList,
                                                                                                       GALGAS_stringset & ioArgument_ioSignatureList,
                                                                                                       GALGAS_astDeclarationStruct & /* ioArgument_ioDeclarationAST */,
                                                                                                       C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.galgas", 47)) ;
  GALGAS_bool var_usedForSignature_1983 = GALGAS_bool (false) ;
  GALGAS_bool var_needsValidation_2017 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_36 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attributeName_2084 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("simple-stored-property.galgas", 52)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_attributeName_2084.getter_string (HERE).objectCompare (GALGAS_string ("signature"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_needsValidation_2017.boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (var_attributeName_2084.getter_location (SOURCE_FILE ("simple-stored-property.galgas", 55)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 55)) ;
        }
        var_usedForSignature_1983 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_attributeName_2084.getter_string (HERE).objectCompare (GALGAS_string ("validation"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const enumGalgasBool test_5 = var_needsValidation_2017.boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            fixItArray6.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (var_attributeName_2084.getter_location (SOURCE_FILE ("simple-stored-property.galgas", 60)), GALGAS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 60)) ;
          }
          var_needsValidation_2017 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@signature")) ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@validation")) ;
          inCompiler->emitSemanticError (var_attributeName_2084.getter_location (SOURCE_FILE ("simple-stored-property.galgas", 64)), GALGAS_string ("unknow attribute"), fixItArray7  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 64)) ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_attributeTypeName_2663 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas", 67)) ;
  GALGAS_lstring var_attributeName_2708 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas", 68)) ;
  const enumGalgasBool test_8 = var_usedForSignature_1983.boolEnum () ;
  if (kBoolTrue == test_8) {
    ioArgument_ioSignatureList.addAssign_operation (var_attributeName_2708.getter_string (HERE)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 70)) ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.galgas", 72)) ;
  GALGAS_abstractDefaultValue var_defaultValue_2867 ;
  nt_explicit_5F_value_ (var_defaultValue_2867, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.galgas", 74)) ;
  ioArgument_ioAttributeList.addAssign_operation (var_attributeTypeName_2663, var_attributeName_2708, var_defaultValue_2867, var_needsValidation_2017  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 75)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i16_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.galgas", 47)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_36 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("simple-stored-property.galgas", 52)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.galgas", 72)) ;
  nt_explicit_5F_value_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.galgas", 74)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stored_5F_array_5F_declaration_i17_ (GALGAS_storedArrayPropertyList & ioArgument_ioStoredArrayList,
                                                                                                      C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("stored-array-property.galgas", 21)) ;
  GALGAS_lstring var_elementClassName_918 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("stored-array-property.galgas", 22)) ;
  GALGAS_lstring var_storedArrayPropertyName_973 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("stored-array-property.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("stored-array-property.galgas", 24)) ;
  ioArgument_ioStoredArrayList.addAssign_operation (var_elementClassName_918, var_storedArrayPropertyName_973  COMMA_SOURCE_FILE ("stored-array-property.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stored_5F_array_5F_declaration_i17_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("stored-array-property.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("stored-array-property.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("stored-array-property.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("stored-array-property.galgas", 24)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_action_5F_declaration_i18_ (GALGAS_lstringlist & ioArgument_ioActionDeclarationList,
                                                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_action COMMA_SOURCE_FILE ("run-action.galgas", 20)) ;
  GALGAS_lstring var_actionName_895 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("run-action.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("run-action.galgas", 22)) ;
  ioArgument_ioActionDeclarationList.addAssign_operation (var_actionName_895  COMMA_SOURCE_FILE ("run-action.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_action_5F_declaration_i18_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_action COMMA_SOURCE_FILE ("run-action.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("run-action.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("run-action.galgas", 22)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i19_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingComparison_ (outArgument_outBinding, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_37 (inCompiler)) {
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i19_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingComparison_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_37 (inCompiler)) {
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i20_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingTerm_ (outArgument_outBinding, inCompiler) ;
  switch (select_easyBindings_5F_syntax_38 (inCompiler)) {
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i20_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  switch (select_easyBindings_5F_syntax_38 (inCompiler)) {
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i21_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                  C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingOperand_ (outArgument_outBinding, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_39 (inCompiler)) {
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i21_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingOperand_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_39 (inCompiler)) {
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i22_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  GALGAS_observablePropertyAST var_observablePropertyAST_5585 ;
  nt_observable_5F_property_ (var_observablePropertyAST_5585, inCompiler) ;
  outArgument_outBinding = GALGAS_observablePropertyInMultipleBindingExpressionAST::constructor_new (var_observablePropertyAST_5585  COMMA_SOURCE_FILE ("multiple-binding.galgas", 137)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i22_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_observable_5F_property_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 145)) ;
  GALGAS_abstractBooleanMultipleBindingExpressionAST var_binding_6020 ;
  nt_booleanMultipleBindingOperand_ (var_binding_6020, inCompiler) ;
  outArgument_outBinding = GALGAS_negateBooleanMultipleBindingExpressionAST::constructor_new (var_binding_6020  COMMA_SOURCE_FILE ("multiple-binding.galgas", 147)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 145)) ;
  nt_booleanMultipleBindingOperand_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 155)) ;
  nt_booleanMultipleBindingExpression_ (outArgument_outBinding, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 157)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 155)) ;
  nt_booleanMultipleBindingExpression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 157)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i25_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  GALGAS_luint var_value_6667 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("multiple-binding.galgas", 165)) ;
  outArgument_outBinding = GALGAS_literalIntMultipleBindingExpressionAST::constructor_new (var_value_6667  COMMA_SOURCE_FILE ("multiple-binding.galgas", 166)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i25_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("multiple-binding.galgas", 165)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i26_ (GALGAS_bindingOptionList & outArgument_outBindingOptions,
                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBindingOptions.drop () ; // Release 'out' argument
  outArgument_outBindingOptions = GALGAS_bindingOptionList::constructor_emptyList (SOURCE_FILE ("regular-binding.galgas", 20)) ;
  switch (select_easyBindings_5F_syntax_40 (inCompiler)) {
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
      switch (select_easyBindings_5F_syntax_41 (inCompiler)) {
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i26_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("regular-binding.galgas", 23)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("regular-binding.galgas", 25)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("regular-binding.galgas", 26)) ;
      nt_explicit_5F_value_parse (inCompiler) ;
      switch (select_easyBindings_5F_syntax_41 (inCompiler)) {
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i27_ (GALGAS_secondaryPropertyList & ioArgument_ioSecondaryPropertyList,
                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_arrayController COMMA_SOURCE_FILE ("array-controller.galgas", 50)) ;
  GALGAS_lstring var_controllerName_2019 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 51)) ;
  GALGAS_arrayControllerAttributListAST var_arrayControllerAttributListAST_2086 = GALGAS_arrayControllerAttributListAST::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("array-controller.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_attributeName_2157 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 55)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("array-controller.galgas", 56)) ;
    GALGAS_abstractDefaultValue var_attributeValue_2232 ;
    nt_explicit_5F_value_ (var_attributeValue_2232, inCompiler) ;
    var_arrayControllerAttributListAST_2086.addAssign_operation (var_attributeName_2157, var_attributeValue_2232  COMMA_SOURCE_FILE ("array-controller.galgas", 58)) ;
    switch (select_easyBindings_5F_syntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("array-controller.galgas", 60)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("array-controller.galgas", 62)) ;
  GALGAS_bool var_isRoot_2369 ;
  switch (select_easyBindings_5F_syntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("array-controller.galgas", 66)) ;
    var_isRoot_2369 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("array-controller.galgas", 69)) ;
    var_isRoot_2369 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.galgas", 72)) ;
  GALGAS_lstring var_relationshipName_2518 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 73)) ;
  GALGAS_lstringlist var_filterProperties_2552 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 74)) ;
  switch (select_easyBindings_5F_syntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_filter COMMA_SOURCE_FILE ("array-controller.galgas", 77)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_filterProperty_2653 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 79)) ;
      var_filterProperties_2552.addAssign_operation (var_filterProperty_2653  COMMA_SOURCE_FILE ("array-controller.galgas", 80)) ;
      switch (select_easyBindings_5F_syntax_45 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("array-controller.galgas", 82)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_arrayControllerBoundColumnListAST var_arrayControllerBoundColumnListAST_2812 = GALGAS_arrayControllerBoundColumnListAST::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 85)) ;
  switch (select_easyBindings_5F_syntax_46 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("array-controller.galgas", 87)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("array-controller.galgas", 89)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      switch (select_easyBindings_5F_syntax_47 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_column COMMA_SOURCE_FILE ("array-controller.galgas", 92)) ;
        GALGAS_lstring var_columnName_2938 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("array-controller.galgas", 93)) ;
        GALGAS_lstring var_sortPropertyName_2972 ;
        switch (select_easyBindings_5F_syntax_48 (inCompiler)) {
        case 1: {
          var_sortPropertyName_2972 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("array-controller.galgas", 96)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_sort COMMA_SOURCE_FILE ("array-controller.galgas", 98)) ;
          var_sortPropertyName_2972 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 99)) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_columnOutletTypeName_3157 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("array-controller.galgas", 101)) ;
        GALGAS_columnBindingAST var_columnBindingAST_3223 ;
        nt_column_5F_bindings_ (var_columnBindingAST_3223, inCompiler) ;
        var_arrayControllerBoundColumnListAST_2812.addAssign_operation (var_columnName_2938, var_columnOutletTypeName_3157, var_columnBindingAST_3223, var_sortPropertyName_2972  COMMA_SOURCE_FILE ("array-controller.galgas", 103)) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("array-controller.galgas", 109)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioSecondaryPropertyList.addAssign_operation (GALGAS_arrayControllerDeclaration::constructor_new (var_controllerName_2019, var_isRoot_2369, var_relationshipName_2518, var_filterProperties_2552, var_arrayControllerBoundColumnListAST_2812, var_arrayControllerAttributListAST_2086  COMMA_SOURCE_FILE ("array-controller.galgas", 111))  COMMA_SOURCE_FILE ("array-controller.galgas", 111)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i27_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_arrayController COMMA_SOURCE_FILE ("array-controller.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("array-controller.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 55)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("array-controller.galgas", 56)) ;
    nt_explicit_5F_value_parse (inCompiler) ;
    switch (select_easyBindings_5F_syntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("array-controller.galgas", 60)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("array-controller.galgas", 62)) ;
  switch (select_easyBindings_5F_syntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("array-controller.galgas", 66)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("array-controller.galgas", 69)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 73)) ;
  switch (select_easyBindings_5F_syntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_filter COMMA_SOURCE_FILE ("array-controller.galgas", 77)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 79)) ;
      switch (select_easyBindings_5F_syntax_45 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("array-controller.galgas", 82)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_46 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("array-controller.galgas", 87)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("array-controller.galgas", 89)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      switch (select_easyBindings_5F_syntax_47 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_column COMMA_SOURCE_FILE ("array-controller.galgas", 92)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("array-controller.galgas", 93)) ;
        switch (select_easyBindings_5F_syntax_48 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_sort COMMA_SOURCE_FILE ("array-controller.galgas", 98)) ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 99)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("array-controller.galgas", 101)) ;
        nt_column_5F_bindings_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("array-controller.galgas", 109)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_column_5F_bindings_i28_ (GALGAS_columnBindingAST & outArgument_outColumnBindingAST,
                                                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outColumnBindingAST.drop () ; // Release 'out' argument
  GALGAS_lstring var_runActionDescriptor_3867 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("array-controller.galgas", 124)) ;
  GALGAS_multipleBindingDescriptor var_enabledBindingDescriptor_3915 = GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("array-controller.galgas", 125)) ;
  GALGAS_multipleBindingDescriptor var_hiddenBindingDescriptor_3986 = GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("array-controller.galgas", 126)) ;
  GALGAS_regularBindingList var_regularBindingList_4068 = GALGAS_regularBindingList::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 127)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_49 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("array-controller.galgas", 130)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_runActionDescriptor_3867.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 132)), GALGAS_string ("duplicated $run binding"), fixItArray2  COMMA_SOURCE_FILE ("array-controller.galgas", 132)) ;
      }
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("array-controller.galgas", 134)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.galgas", 135)) ;
      var_runActionDescriptor_3867 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 136)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("array-controller.galgas", 139)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_enabledBindingDescriptor_3915.objectCompare (GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("array-controller.galgas", 140)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 141)), GALGAS_string ("duplicated $enabled binding"), fixItArray4  COMMA_SOURCE_FILE ("array-controller.galgas", 141)) ;
      }
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_4539 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_4539, inCompiler) ;
      var_enabledBindingDescriptor_3915 = GALGAS_multipleBindingDescriptor::constructor_binding (var_bindingExpression_4539  COMMA_SOURCE_FILE ("array-controller.galgas", 144)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("array-controller.galgas", 147)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_hiddenBindingDescriptor_3986.objectCompare (GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("array-controller.galgas", 148)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 149)), GALGAS_string ("duplicated $hidden binding"), fixItArray6  COMMA_SOURCE_FILE ("array-controller.galgas", 149)) ;
      }
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_4874 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_4874, inCompiler) ;
      var_hiddenBindingDescriptor_3986 = GALGAS_multipleBindingDescriptor::constructor_binding (var_bindingExpression_4874  COMMA_SOURCE_FILE ("array-controller.galgas", 152)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_bindingName_5026 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("array-controller.galgas", 155)) ;
      GALGAS_observablePropertyList var_observablePropertyList_5079 = GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 156)) ;
      bool repeatFlag_7 = true ;
      while (repeatFlag_7) {
        GALGAS_observablePropertyAST var_observableProperty_5174 ;
        nt_observable_5F_property_ (var_observableProperty_5174, inCompiler) ;
        var_observablePropertyList_5079.addAssign_operation (var_observableProperty_5174  COMMA_SOURCE_FILE ("array-controller.galgas", 159)) ;
        switch (select_easyBindings_5F_syntax_50 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("array-controller.galgas", 161)) ;
        } break ;
        default:
          repeatFlag_7 = false ;
          break ;
        }
      }
      GALGAS_bindingOptionList var_bindingOptions_5310 ;
      nt_binding_5F_option_5F_list_ (var_bindingOptions_5310, inCompiler) ;
      var_regularBindingList_4068.addAssign_operation (var_bindingName_5026, var_observablePropertyList_5079, var_bindingOptions_5310  COMMA_SOURCE_FILE ("array-controller.galgas", 164)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outColumnBindingAST = GALGAS_columnBindingAST::constructor_new (var_runActionDescriptor_3867, var_enabledBindingDescriptor_3915, var_hiddenBindingDescriptor_3986, var_regularBindingList_4068  COMMA_SOURCE_FILE ("array-controller.galgas", 170)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_column_5F_bindings_i28_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_49 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("array-controller.galgas", 130)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("array-controller.galgas", 134)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.galgas", 135)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 136)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("array-controller.galgas", 139)) ;
      nt_booleanMultipleBindingExpression_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("array-controller.galgas", 147)) ;
      nt_booleanMultipleBindingExpression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("array-controller.galgas", 155)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        nt_observable_5F_property_parse (inCompiler) ;
        switch (select_easyBindings_5F_syntax_50 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("array-controller.galgas", 161)) ;
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i29_ (GALGAS_secondaryPropertyList & ioArgument_ioSecondaryPropertyList,
                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_selectionController COMMA_SOURCE_FILE ("selection-controller.galgas", 20)) ;
  GALGAS_lstring var_selectionControllerName_1014 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("selection-controller.galgas", 22)) ;
  GALGAS_lstring var_modelControllerName_1055 ;
  switch (select_easyBindings_5F_syntax_51 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("selection-controller.galgas", 25)) ;
    var_modelControllerName_1055 = GALGAS_string ("self").getter_here (inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 26)) ;
  } break ;
  case 2: {
    var_modelControllerName_1055 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 28)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("selection-controller.galgas", 30)) ;
  GALGAS_lstring var_propertyName_1228 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("selection-controller.galgas", 32)) ;
  ioArgument_ioSecondaryPropertyList.addAssign_operation (GALGAS_selectionControllerDeclaration::constructor_new (var_selectionControllerName_1014, var_modelControllerName_1055, var_propertyName_1228  COMMA_SOURCE_FILE ("selection-controller.galgas", 33))  COMMA_SOURCE_FILE ("selection-controller.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i29_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_selectionController COMMA_SOURCE_FILE ("selection-controller.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("selection-controller.galgas", 22)) ;
  switch (select_easyBindings_5F_syntax_51 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("selection-controller.galgas", 25)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 28)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("selection-controller.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("selection-controller.galgas", 32)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i30_ (GALGAS_secondaryPropertyList & ioArgument_ioSecondaryPropertyList,
                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_proxy COMMA_SOURCE_FILE ("proxy.galgas", 21)) ;
  GALGAS_lstring var_proxyName_998 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.galgas", 23)) ;
  GALGAS_arrayControllerAttributListAST var_arrayControllerAttributListAST_1065 = GALGAS_arrayControllerAttributListAST::constructor_emptyList (SOURCE_FILE ("proxy.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("proxy.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("proxy.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("proxy.galgas", 27)) ;
  GALGAS_lstring var_controllerName_1143 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("proxy.galgas", 29)) ;
  GALGAS_lstring var_propertyName_1195 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("proxy.galgas", 31)) ;
  ioArgument_ioSecondaryPropertyList.addAssign_operation (GALGAS_proxyDeclaration::constructor_new (var_proxyName_998, var_controllerName_1143, var_propertyName_1195  COMMA_SOURCE_FILE ("proxy.galgas", 32))  COMMA_SOURCE_FILE ("proxy.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i30_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_proxy COMMA_SOURCE_FILE ("proxy.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("proxy.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("proxy.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("proxy.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("proxy.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("proxy.galgas", 31)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_explicit_5F_value_i31_ (GALGAS_abstractDefaultValue & outArgument_outDefaultValue,
                                                                                         C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outDefaultValue.drop () ; // Release 'out' argument
  switch (select_easyBindings_5F_syntax_52 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("explicit-default-value.galgas", 61)) ;
    outArgument_outDefaultValue = GALGAS_boolAsDefaultValue::constructor_new (GALGAS_lbool::constructor_new (GALGAS_bool (true), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 62))  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 62))  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 62)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("explicit-default-value.galgas", 64)) ;
    outArgument_outDefaultValue = GALGAS_boolAsDefaultValue::constructor_new (GALGAS_lbool::constructor_new (GALGAS_bool (false), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 65))  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 65))  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 65)) ;
  } break ;
  case 3: {
    GALGAS_luint var_integerValue_2433 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.galgas", 67)) ;
    outArgument_outDefaultValue = GALGAS_integerAsDefaultValue::constructor_new (var_integerValue_2433  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 68)) ;
  } break ;
  case 4: {
    GALGAS_ldouble var_doubleValue_2557 = inCompiler->synthetizedAttribute_floatValue () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double COMMA_SOURCE_FILE ("explicit-default-value.galgas", 70)) ;
    outArgument_outDefaultValue = GALGAS_doubleAsDefaultValue::constructor_new (var_doubleValue_2557  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 71)) ;
  } break ;
  case 5: {
    GALGAS_lstring var_stringValue_2681 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("explicit-default-value.galgas", 73)) ;
    outArgument_outDefaultValue = GALGAS_stringAsDefaultValue::constructor_new (var_stringValue_2681  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 74)) ;
  } break ;
  case 6: {
    GALGAS_lstring var_stringValue_2798 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.galgas", 76)) ;
    outArgument_outDefaultValue = GALGAS_identifierAsDefaultValue::constructor_new (var_stringValue_2798  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 77)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 79)) ;
    GALGAS_location var_startLocation_2908 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 80)) ;
    GALGAS_defaultValueList var_defaultValueList_2966 = GALGAS_defaultValueList::constructor_emptyList (SOURCE_FILE ("explicit-default-value.galgas", 81)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_abstractDefaultValue var_defaultValue_3049 ;
      nt_explicit_5F_value_ (var_defaultValue_3049, inCompiler) ;
      var_defaultValueList_2966.addAssign_operation (var_defaultValue_3049  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 84)) ;
      switch (select_easyBindings_5F_syntax_53 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 86)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 88)) ;
    outArgument_outDefaultValue = GALGAS_listAsDefaultValue::constructor_new (var_startLocation_2908, var_defaultValueList_2966  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 89)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_explicit_5F_value_i31_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_52 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("explicit-default-value.galgas", 61)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("explicit-default-value.galgas", 64)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.galgas", 67)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double COMMA_SOURCE_FILE ("explicit-default-value.galgas", 70)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("explicit-default-value.galgas", 73)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.galgas", 76)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 79)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_explicit_5F_value_parse (inCompiler) ;
      switch (select_easyBindings_5F_syntax_53 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 86)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 88)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_xcode_5F_project_i32_ (GALGAS_lstring & ioArgument_ioXcodeProjectString,
                                                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject COMMA_SOURCE_FILE ("xcode-project.galgas", 12)) ;
  GALGAS_lstring var_xcodeProjectString_552 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("xcode-project.galgas", 13)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("xcode-project.galgas", 14)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_xcodeProjectString_552.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_xcodeProjectString_552.getter_location (SOURCE_FILE ("xcode-project.galgas", 16)), GALGAS_string ("string should not be empty"), fixItArray1  COMMA_SOURCE_FILE ("xcode-project.galgas", 16)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioXcodeProjectString.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_xcodeProjectString_552.getter_location (SOURCE_FILE ("xcode-project.galgas", 18)), GALGAS_string ("Xcode project already defined"), fixItArray3  COMMA_SOURCE_FILE ("xcode-project.galgas", 18)) ;
    }else if (kBoolFalse == test_2) {
      ioArgument_ioXcodeProjectString = var_xcodeProjectString_552 ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_xcode_5F_project_i32_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject COMMA_SOURCE_FILE ("xcode-project.galgas", 12)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("xcode-project.galgas", 13)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("xcode-project.galgas", 14)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_i33_ (GALGAS_mainXibDescriptorList & ioArgument_ioElementList,
                                                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_mainxib COMMA_SOURCE_FILE ("main-xib.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.galgas", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_55 (inCompiler)) {
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
    switch (select_easyBindings_5F_syntax_54 (inCompiler)) {
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_i33_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_mainxib COMMA_SOURCE_FILE ("main-xib.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.galgas", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_55 (inCompiler)) {
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
    switch (select_easyBindings_5F_syntax_54 (inCompiler)) {
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i34_ (GALGAS_mainXibLineDescriptorList & outArgument_outLineDescription,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outLineDescription.drop () ; // Release 'out' argument
  outArgument_outLineDescription = GALGAS_mainXibLineDescriptorList::constructor_emptyList (SOURCE_FILE ("main-xib.galgas", 62)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_57 (inCompiler)) {
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
    switch (select_easyBindings_5F_syntax_56 (inCompiler)) {
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i34_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_57 (inCompiler)) {
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
    switch (select_easyBindings_5F_syntax_56 (inCompiler)) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@astDeclarationList' list                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_astDeclarationList : public cCollectionElement {
  public : GALGAS_astDeclarationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_astDeclarationList (const GALGAS_astDeclaration & in_mDeclaration
                                                  COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_astDeclarationList (const GALGAS_astDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_astDeclarationList::cCollectionElement_astDeclarationList (const GALGAS_astDeclaration & in_mDeclaration
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclaration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_astDeclarationList::cCollectionElement_astDeclarationList (const GALGAS_astDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDeclaration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_astDeclarationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_astDeclarationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_astDeclarationList (mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_astDeclarationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclaration" ":" ;
  mObject.mProperty_mDeclaration.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_astDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_astDeclarationList * operand = (cCollectionElement_astDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_astDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationList::GALGAS_astDeclarationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationList::GALGAS_astDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationList GALGAS_astDeclarationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_astDeclarationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationList GALGAS_astDeclarationList::constructor_listWithValue (const GALGAS_astDeclaration & inOperand0
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_astDeclarationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_astDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_astDeclarationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_astDeclaration & in_mDeclaration
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_astDeclarationList * p = NULL ;
  macroMyNew (p, cCollectionElement_astDeclarationList (in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationList::addAssign_operation (const GALGAS_astDeclaration & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_astDeclarationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationList::setter_append (GALGAS_astDeclarationList_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_astDeclarationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationList::setter_insertAtIndex (const GALGAS_astDeclaration inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_astDeclarationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationList::setter_removeAtIndex (GALGAS_astDeclaration & outOperand0,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_astDeclarationList * p = (cCollectionElement_astDeclarationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_astDeclarationList) ;
      outOperand0 = p->mObject.mProperty_mDeclaration ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationList::setter_popFirst (GALGAS_astDeclaration & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astDeclarationList * p = (cCollectionElement_astDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationList::setter_popLast (GALGAS_astDeclaration & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astDeclarationList * p = (cCollectionElement_astDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationList::method_first (GALGAS_astDeclaration & outOperand0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astDeclarationList * p = (cCollectionElement_astDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationList::method_last (GALGAS_astDeclaration & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astDeclarationList * p = (cCollectionElement_astDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationList GALGAS_astDeclarationList::add_operation (const GALGAS_astDeclarationList & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_astDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationList GALGAS_astDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_astDeclarationList result = GALGAS_astDeclarationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationList GALGAS_astDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_astDeclarationList result = GALGAS_astDeclarationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationList GALGAS_astDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_astDeclarationList result = GALGAS_astDeclarationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationList::plusAssign_operation (const GALGAS_astDeclarationList inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclaration GALGAS_astDeclarationList::getter_mDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astDeclarationList * p = (cCollectionElement_astDeclarationList *) attributes.ptr () ;
  GALGAS_astDeclaration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astDeclarationList) ;
    result = p->mObject.mProperty_mDeclaration ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_astDeclarationList::cEnumerator_astDeclarationList (const GALGAS_astDeclarationList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationList_2D_element cEnumerator_astDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_astDeclarationList * p = (const cCollectionElement_astDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astDeclarationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclaration cEnumerator_astDeclarationList::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_astDeclarationList * p = (const cCollectionElement_astDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astDeclarationList) ;
  return p->mObject.mProperty_mDeclaration ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @astDeclarationList type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astDeclarationList ("astDeclarationList",
                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_astDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_astDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astDeclarationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationList GALGAS_astDeclarationList::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_astDeclarationList result ;
  const GALGAS_astDeclarationList * p = (const GALGAS_astDeclarationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Class for element of '@propertyDeclarationListAST' list                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_propertyDeclarationListAST : public cCollectionElement {
  public : GALGAS_propertyDeclarationListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_propertyDeclarationListAST (const GALGAS_propertyAbstractDeclarationAST & in_mPropertyDeclaration
                                                          COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_propertyDeclarationListAST (const GALGAS_propertyDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_propertyDeclarationListAST::cCollectionElement_propertyDeclarationListAST (const GALGAS_propertyAbstractDeclarationAST & in_mPropertyDeclaration
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyDeclaration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_propertyDeclarationListAST::cCollectionElement_propertyDeclarationListAST (const GALGAS_propertyDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyDeclaration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_propertyDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_propertyDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_propertyDeclarationListAST (mObject.mProperty_mPropertyDeclaration COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_propertyDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyDeclaration" ":" ;
  mObject.mProperty_mPropertyDeclaration.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_propertyDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_propertyDeclarationListAST * operand = (cCollectionElement_propertyDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_propertyDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyDeclarationListAST::GALGAS_propertyDeclarationListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyDeclarationListAST::GALGAS_propertyDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyDeclarationListAST GALGAS_propertyDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyDeclarationListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyDeclarationListAST GALGAS_propertyDeclarationListAST::constructor_listWithValue (const GALGAS_propertyAbstractDeclarationAST & inOperand0
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_propertyDeclarationListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_propertyDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_propertyDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_propertyAbstractDeclarationAST & in_mPropertyDeclaration
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_propertyDeclarationListAST (in_mPropertyDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyDeclarationListAST::addAssign_operation (const GALGAS_propertyAbstractDeclarationAST & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_propertyDeclarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyDeclarationListAST::setter_append (GALGAS_propertyDeclarationListAST_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_propertyDeclarationListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyDeclarationListAST::setter_insertAtIndex (const GALGAS_propertyAbstractDeclarationAST inOperand0,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_propertyDeclarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyDeclarationListAST::setter_removeAtIndex (GALGAS_propertyAbstractDeclarationAST & outOperand0,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_propertyDeclarationListAST * p = (cCollectionElement_propertyDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_propertyDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mPropertyDeclaration ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyDeclarationListAST::setter_popFirst (GALGAS_propertyAbstractDeclarationAST & outOperand0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyDeclarationListAST * p = (cCollectionElement_propertyDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyDeclarationListAST::setter_popLast (GALGAS_propertyAbstractDeclarationAST & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyDeclarationListAST * p = (cCollectionElement_propertyDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyDeclarationListAST::method_first (GALGAS_propertyAbstractDeclarationAST & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyDeclarationListAST * p = (cCollectionElement_propertyDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyDeclarationListAST::method_last (GALGAS_propertyAbstractDeclarationAST & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyDeclarationListAST * p = (cCollectionElement_propertyDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyDeclarationListAST GALGAS_propertyDeclarationListAST::add_operation (const GALGAS_propertyDeclarationListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyDeclarationListAST GALGAS_propertyDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_propertyDeclarationListAST result = GALGAS_propertyDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyDeclarationListAST GALGAS_propertyDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_propertyDeclarationListAST result = GALGAS_propertyDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyDeclarationListAST GALGAS_propertyDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_propertyDeclarationListAST result = GALGAS_propertyDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyDeclarationListAST::plusAssign_operation (const GALGAS_propertyDeclarationListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAbstractDeclarationAST GALGAS_propertyDeclarationListAST::getter_mPropertyDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyDeclarationListAST * p = (cCollectionElement_propertyDeclarationListAST *) attributes.ptr () ;
  GALGAS_propertyAbstractDeclarationAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_propertyDeclarationListAST) ;
    result = p->mObject.mProperty_mPropertyDeclaration ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_propertyDeclarationListAST::cEnumerator_propertyDeclarationListAST (const GALGAS_propertyDeclarationListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyDeclarationListAST_2D_element cEnumerator_propertyDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_propertyDeclarationListAST * p = (const cCollectionElement_propertyDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyDeclarationListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAbstractDeclarationAST cEnumerator_propertyDeclarationListAST::current_mPropertyDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_propertyDeclarationListAST * p = (const cCollectionElement_propertyDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyDeclarationListAST) ;
  return p->mObject.mProperty_mPropertyDeclaration ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @propertyDeclarationListAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyDeclarationListAST ("propertyDeclarationListAST",
                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyDeclarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyDeclarationListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyDeclarationListAST GALGAS_propertyDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_propertyDeclarationListAST result ;
  const GALGAS_propertyDeclarationListAST * p = (const GALGAS_propertyDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Class for element of '@outletClassDeclarationList' list                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_outletClassDeclarationList : public cCollectionElement {
  public : GALGAS_outletClassDeclarationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_outletClassDeclarationList (const GALGAS_bool & in_mUserDefined,
                                                          const GALGAS_lstring & in_mOutletClassName,
                                                          const GALGAS_lstring & in_mSuperClassName,
                                                          const GALGAS_bool & in_mHasRunAction,
                                                          const GALGAS_bool & in_mHasEnabled,
                                                          const GALGAS_bool & in_mHandlesTableValueBinding,
                                                          const GALGAS_bool & in_mHandlesGraphicControllerBinding,
                                                          const GALGAS_bool & in_mHasHidden
                                                          COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_outletClassDeclarationList (const GALGAS_outletClassDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_outletClassDeclarationList::cCollectionElement_outletClassDeclarationList (const GALGAS_bool & in_mUserDefined,
                                                                                              const GALGAS_lstring & in_mOutletClassName,
                                                                                              const GALGAS_lstring & in_mSuperClassName,
                                                                                              const GALGAS_bool & in_mHasRunAction,
                                                                                              const GALGAS_bool & in_mHasEnabled,
                                                                                              const GALGAS_bool & in_mHandlesTableValueBinding,
                                                                                              const GALGAS_bool & in_mHandlesGraphicControllerBinding,
                                                                                              const GALGAS_bool & in_mHasHidden
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mUserDefined, in_mOutletClassName, in_mSuperClassName, in_mHasRunAction, in_mHasEnabled, in_mHandlesTableValueBinding, in_mHandlesGraphicControllerBinding, in_mHasHidden) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_outletClassDeclarationList::cCollectionElement_outletClassDeclarationList (const GALGAS_outletClassDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mUserDefined, inElement.mProperty_mOutletClassName, inElement.mProperty_mSuperClassName, inElement.mProperty_mHasRunAction, inElement.mProperty_mHasEnabled, inElement.mProperty_mHandlesTableValueBinding, inElement.mProperty_mHandlesGraphicControllerBinding, inElement.mProperty_mHasHidden) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_outletClassDeclarationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_outletClassDeclarationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_outletClassDeclarationList (mObject.mProperty_mUserDefined, mObject.mProperty_mOutletClassName, mObject.mProperty_mSuperClassName, mObject.mProperty_mHasRunAction, mObject.mProperty_mHasEnabled, mObject.mProperty_mHandlesTableValueBinding, mObject.mProperty_mHandlesGraphicControllerBinding, mObject.mProperty_mHasHidden COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_outletClassDeclarationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mUserDefined" ":" ;
  mObject.mProperty_mUserDefined.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletClassName" ":" ;
  mObject.mProperty_mOutletClassName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSuperClassName" ":" ;
  mObject.mProperty_mSuperClassName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasRunAction" ":" ;
  mObject.mProperty_mHasRunAction.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasEnabled" ":" ;
  mObject.mProperty_mHasEnabled.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHandlesTableValueBinding" ":" ;
  mObject.mProperty_mHandlesTableValueBinding.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHandlesGraphicControllerBinding" ":" ;
  mObject.mProperty_mHandlesGraphicControllerBinding.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasHidden" ":" ;
  mObject.mProperty_mHasHidden.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_outletClassDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_outletClassDeclarationList * operand = (cCollectionElement_outletClassDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_outletClassDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationList::GALGAS_outletClassDeclarationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationList::GALGAS_outletClassDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationList GALGAS_outletClassDeclarationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassDeclarationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationList GALGAS_outletClassDeclarationList::constructor_listWithValue (const GALGAS_bool & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_lstring & inOperand2,
                                                                                                const GALGAS_bool & inOperand3,
                                                                                                const GALGAS_bool & inOperand4,
                                                                                                const GALGAS_bool & inOperand5,
                                                                                                const GALGAS_bool & inOperand6,
                                                                                                const GALGAS_bool & inOperand7
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_outletClassDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_outletClassDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_bool & in_mUserDefined,
                                                                   const GALGAS_lstring & in_mOutletClassName,
                                                                   const GALGAS_lstring & in_mSuperClassName,
                                                                   const GALGAS_bool & in_mHasRunAction,
                                                                   const GALGAS_bool & in_mHasEnabled,
                                                                   const GALGAS_bool & in_mHandlesTableValueBinding,
                                                                   const GALGAS_bool & in_mHandlesGraphicControllerBinding,
                                                                   const GALGAS_bool & in_mHasHidden
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_outletClassDeclarationList * p = NULL ;
  macroMyNew (p, cCollectionElement_outletClassDeclarationList (in_mUserDefined,
                                                                in_mOutletClassName,
                                                                in_mSuperClassName,
                                                                in_mHasRunAction,
                                                                in_mHasEnabled,
                                                                in_mHandlesTableValueBinding,
                                                                in_mHandlesGraphicControllerBinding,
                                                                in_mHasHidden COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassDeclarationList::addAssign_operation (const GALGAS_bool & inOperand0,
                                                             const GALGAS_lstring & inOperand1,
                                                             const GALGAS_lstring & inOperand2,
                                                             const GALGAS_bool & inOperand3,
                                                             const GALGAS_bool & inOperand4,
                                                             const GALGAS_bool & inOperand5,
                                                             const GALGAS_bool & inOperand6,
                                                             const GALGAS_bool & inOperand7
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletClassDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassDeclarationList::setter_append (GALGAS_outletClassDeclarationList_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletClassDeclarationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassDeclarationList::setter_insertAtIndex (const GALGAS_bool inOperand0,
                                                              const GALGAS_lstring inOperand1,
                                                              const GALGAS_lstring inOperand2,
                                                              const GALGAS_bool inOperand3,
                                                              const GALGAS_bool inOperand4,
                                                              const GALGAS_bool inOperand5,
                                                              const GALGAS_bool inOperand6,
                                                              const GALGAS_bool inOperand7,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletClassDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassDeclarationList::setter_removeAtIndex (GALGAS_bool & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              GALGAS_lstring & outOperand2,
                                                              GALGAS_bool & outOperand3,
                                                              GALGAS_bool & outOperand4,
                                                              GALGAS_bool & outOperand5,
                                                              GALGAS_bool & outOperand6,
                                                              GALGAS_bool & outOperand7,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_outletClassDeclarationList * p = (cCollectionElement_outletClassDeclarationList *) attributes.ptr () ;
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
      macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
      outOperand0 = p->mObject.mProperty_mUserDefined ;
      outOperand1 = p->mObject.mProperty_mOutletClassName ;
      outOperand2 = p->mObject.mProperty_mSuperClassName ;
      outOperand3 = p->mObject.mProperty_mHasRunAction ;
      outOperand4 = p->mObject.mProperty_mHasEnabled ;
      outOperand5 = p->mObject.mProperty_mHandlesTableValueBinding ;
      outOperand6 = p->mObject.mProperty_mHandlesGraphicControllerBinding ;
      outOperand7 = p->mObject.mProperty_mHasHidden ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassDeclarationList::setter_popFirst (GALGAS_bool & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_bool & outOperand3,
                                                         GALGAS_bool & outOperand4,
                                                         GALGAS_bool & outOperand5,
                                                         GALGAS_bool & outOperand6,
                                                         GALGAS_bool & outOperand7,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassDeclarationList * p = (cCollectionElement_outletClassDeclarationList *) attributes.ptr () ;
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
    macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mUserDefined ;
    outOperand1 = p->mObject.mProperty_mOutletClassName ;
    outOperand2 = p->mObject.mProperty_mSuperClassName ;
    outOperand3 = p->mObject.mProperty_mHasRunAction ;
    outOperand4 = p->mObject.mProperty_mHasEnabled ;
    outOperand5 = p->mObject.mProperty_mHandlesTableValueBinding ;
    outOperand6 = p->mObject.mProperty_mHandlesGraphicControllerBinding ;
    outOperand7 = p->mObject.mProperty_mHasHidden ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassDeclarationList::setter_popLast (GALGAS_bool & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_lstring & outOperand2,
                                                        GALGAS_bool & outOperand3,
                                                        GALGAS_bool & outOperand4,
                                                        GALGAS_bool & outOperand5,
                                                        GALGAS_bool & outOperand6,
                                                        GALGAS_bool & outOperand7,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassDeclarationList * p = (cCollectionElement_outletClassDeclarationList *) attributes.ptr () ;
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
    macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mUserDefined ;
    outOperand1 = p->mObject.mProperty_mOutletClassName ;
    outOperand2 = p->mObject.mProperty_mSuperClassName ;
    outOperand3 = p->mObject.mProperty_mHasRunAction ;
    outOperand4 = p->mObject.mProperty_mHasEnabled ;
    outOperand5 = p->mObject.mProperty_mHandlesTableValueBinding ;
    outOperand6 = p->mObject.mProperty_mHandlesGraphicControllerBinding ;
    outOperand7 = p->mObject.mProperty_mHasHidden ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassDeclarationList::method_first (GALGAS_bool & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lstring & outOperand2,
                                                      GALGAS_bool & outOperand3,
                                                      GALGAS_bool & outOperand4,
                                                      GALGAS_bool & outOperand5,
                                                      GALGAS_bool & outOperand6,
                                                      GALGAS_bool & outOperand7,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassDeclarationList * p = (cCollectionElement_outletClassDeclarationList *) attributes.ptr () ;
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
    macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mUserDefined ;
    outOperand1 = p->mObject.mProperty_mOutletClassName ;
    outOperand2 = p->mObject.mProperty_mSuperClassName ;
    outOperand3 = p->mObject.mProperty_mHasRunAction ;
    outOperand4 = p->mObject.mProperty_mHasEnabled ;
    outOperand5 = p->mObject.mProperty_mHandlesTableValueBinding ;
    outOperand6 = p->mObject.mProperty_mHandlesGraphicControllerBinding ;
    outOperand7 = p->mObject.mProperty_mHasHidden ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassDeclarationList::method_last (GALGAS_bool & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     GALGAS_bool & outOperand3,
                                                     GALGAS_bool & outOperand4,
                                                     GALGAS_bool & outOperand5,
                                                     GALGAS_bool & outOperand6,
                                                     GALGAS_bool & outOperand7,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassDeclarationList * p = (cCollectionElement_outletClassDeclarationList *) attributes.ptr () ;
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
    macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mUserDefined ;
    outOperand1 = p->mObject.mProperty_mOutletClassName ;
    outOperand2 = p->mObject.mProperty_mSuperClassName ;
    outOperand3 = p->mObject.mProperty_mHasRunAction ;
    outOperand4 = p->mObject.mProperty_mHasEnabled ;
    outOperand5 = p->mObject.mProperty_mHandlesTableValueBinding ;
    outOperand6 = p->mObject.mProperty_mHandlesGraphicControllerBinding ;
    outOperand7 = p->mObject.mProperty_mHasHidden ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationList GALGAS_outletClassDeclarationList::add_operation (const GALGAS_outletClassDeclarationList & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_outletClassDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationList GALGAS_outletClassDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassDeclarationList result = GALGAS_outletClassDeclarationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationList GALGAS_outletClassDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassDeclarationList result = GALGAS_outletClassDeclarationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationList GALGAS_outletClassDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassDeclarationList result = GALGAS_outletClassDeclarationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassDeclarationList::plusAssign_operation (const GALGAS_outletClassDeclarationList inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationList::getter_mUserDefinedAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassDeclarationList * p = (cCollectionElement_outletClassDeclarationList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
    result = p->mObject.mProperty_mUserDefined ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletClassDeclarationList::getter_mOutletClassNameAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassDeclarationList * p = (cCollectionElement_outletClassDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
    result = p->mObject.mProperty_mOutletClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletClassDeclarationList::getter_mSuperClassNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassDeclarationList * p = (cCollectionElement_outletClassDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
    result = p->mObject.mProperty_mSuperClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationList::getter_mHasRunActionAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassDeclarationList * p = (cCollectionElement_outletClassDeclarationList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
    result = p->mObject.mProperty_mHasRunAction ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationList::getter_mHasEnabledAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassDeclarationList * p = (cCollectionElement_outletClassDeclarationList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
    result = p->mObject.mProperty_mHasEnabled ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationList::getter_mHandlesTableValueBindingAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassDeclarationList * p = (cCollectionElement_outletClassDeclarationList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
    result = p->mObject.mProperty_mHandlesTableValueBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationList::getter_mHandlesGraphicControllerBindingAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassDeclarationList * p = (cCollectionElement_outletClassDeclarationList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
    result = p->mObject.mProperty_mHandlesGraphicControllerBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationList::getter_mHasHiddenAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassDeclarationList * p = (cCollectionElement_outletClassDeclarationList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
    result = p->mObject.mProperty_mHasHidden ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_outletClassDeclarationList::cEnumerator_outletClassDeclarationList (const GALGAS_outletClassDeclarationList & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationList_2D_element cEnumerator_outletClassDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletClassDeclarationList * p = (const cCollectionElement_outletClassDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_outletClassDeclarationList::current_mUserDefined (LOCATION_ARGS) const {
  const cCollectionElement_outletClassDeclarationList * p = (const cCollectionElement_outletClassDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
  return p->mObject.mProperty_mUserDefined ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_outletClassDeclarationList::current_mOutletClassName (LOCATION_ARGS) const {
  const cCollectionElement_outletClassDeclarationList * p = (const cCollectionElement_outletClassDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
  return p->mObject.mProperty_mOutletClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_outletClassDeclarationList::current_mSuperClassName (LOCATION_ARGS) const {
  const cCollectionElement_outletClassDeclarationList * p = (const cCollectionElement_outletClassDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
  return p->mObject.mProperty_mSuperClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_outletClassDeclarationList::current_mHasRunAction (LOCATION_ARGS) const {
  const cCollectionElement_outletClassDeclarationList * p = (const cCollectionElement_outletClassDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
  return p->mObject.mProperty_mHasRunAction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_outletClassDeclarationList::current_mHasEnabled (LOCATION_ARGS) const {
  const cCollectionElement_outletClassDeclarationList * p = (const cCollectionElement_outletClassDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
  return p->mObject.mProperty_mHasEnabled ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_outletClassDeclarationList::current_mHandlesTableValueBinding (LOCATION_ARGS) const {
  const cCollectionElement_outletClassDeclarationList * p = (const cCollectionElement_outletClassDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
  return p->mObject.mProperty_mHandlesTableValueBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_outletClassDeclarationList::current_mHandlesGraphicControllerBinding (LOCATION_ARGS) const {
  const cCollectionElement_outletClassDeclarationList * p = (const cCollectionElement_outletClassDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
  return p->mObject.mProperty_mHandlesGraphicControllerBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_outletClassDeclarationList::current_mHasHidden (LOCATION_ARGS) const {
  const cCollectionElement_outletClassDeclarationList * p = (const cCollectionElement_outletClassDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
  return p->mObject.mProperty_mHasHidden ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @outletClassDeclarationList type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassDeclarationList ("outletClassDeclarationList",
                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletClassDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletClassDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassDeclarationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationList GALGAS_outletClassDeclarationList::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationList result ;
  const GALGAS_outletClassDeclarationList * p = (const GALGAS_outletClassDeclarationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Class for element of '@outletClassBindingSpecificationList' list                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_outletClassBindingSpecificationList : public cCollectionElement {
  public : GALGAS_outletClassBindingSpecificationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_outletClassBindingSpecificationList (const GALGAS_lstring & in_mOutletClassName,
                                                                   const GALGAS_bool & in_mIsUserDefined,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_outletClassBindingSpecificationList::cCollectionElement_outletClassBindingSpecificationList (const GALGAS_lstring & in_mOutletClassName,
                                                                                                                const GALGAS_bool & in_mIsUserDefined,
                                                                                                                const GALGAS_lstring & in_mBindingName,
                                                                                                                const GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                                                                const GALGAS_controllerBindingOptionList & in_mBindingOptionList
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletClassName, in_mIsUserDefined, in_mBindingName, in_mOutletClassBindingSpecificationModelList, in_mBindingOptionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_outletClassBindingSpecificationList::cCollectionElement_outletClassBindingSpecificationList (const GALGAS_outletClassBindingSpecificationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletClassName, inElement.mProperty_mIsUserDefined, inElement.mProperty_mBindingName, inElement.mProperty_mOutletClassBindingSpecificationModelList, inElement.mProperty_mBindingOptionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_outletClassBindingSpecificationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_outletClassBindingSpecificationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_outletClassBindingSpecificationList (mObject.mProperty_mOutletClassName, mObject.mProperty_mIsUserDefined, mObject.mProperty_mBindingName, mObject.mProperty_mOutletClassBindingSpecificationModelList, mObject.mProperty_mBindingOptionList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_outletClassBindingSpecificationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletClassName" ":" ;
  mObject.mProperty_mOutletClassName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsUserDefined" ":" ;
  mObject.mProperty_mIsUserDefined.description (ioString, inIndentation) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_outletClassBindingSpecificationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_outletClassBindingSpecificationList * operand = (cCollectionElement_outletClassBindingSpecificationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_outletClassBindingSpecificationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList::GALGAS_outletClassBindingSpecificationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList::GALGAS_outletClassBindingSpecificationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList GALGAS_outletClassBindingSpecificationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassBindingSpecificationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList GALGAS_outletClassBindingSpecificationList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_bool & inOperand1,
                                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                                  const GALGAS_outletClassBindingSpecificationModelList & inOperand3,
                                                                                                                  const GALGAS_controllerBindingOptionList & inOperand4
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_outletClassBindingSpecificationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_outletClassBindingSpecificationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_lstring & in_mOutletClassName,
                                                                            const GALGAS_bool & in_mIsUserDefined,
                                                                            const GALGAS_lstring & in_mBindingName,
                                                                            const GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                            const GALGAS_controllerBindingOptionList & in_mBindingOptionList
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_outletClassBindingSpecificationList * p = NULL ;
  macroMyNew (p, cCollectionElement_outletClassBindingSpecificationList (in_mOutletClassName,
                                                                         in_mIsUserDefined,
                                                                         in_mBindingName,
                                                                         in_mOutletClassBindingSpecificationModelList,
                                                                         in_mBindingOptionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_bool & inOperand1,
                                                                      const GALGAS_lstring & inOperand2,
                                                                      const GALGAS_outletClassBindingSpecificationModelList & inOperand3,
                                                                      const GALGAS_controllerBindingOptionList & inOperand4
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletClassBindingSpecificationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                       const GALGAS_bool inOperand1,
                                                                       const GALGAS_lstring inOperand2,
                                                                       const GALGAS_outletClassBindingSpecificationModelList inOperand3,
                                                                       const GALGAS_controllerBindingOptionList inOperand4,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletClassBindingSpecificationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                       GALGAS_bool & outOperand1,
                                                                       GALGAS_lstring & outOperand2,
                                                                       GALGAS_outletClassBindingSpecificationModelList & outOperand3,
                                                                       GALGAS_controllerBindingOptionList & outOperand4,
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
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
      outOperand0 = p->mObject.mProperty_mOutletClassName ;
      outOperand1 = p->mObject.mProperty_mIsUserDefined ;
      outOperand2 = p->mObject.mProperty_mBindingName ;
      outOperand3 = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
      outOperand4 = p->mObject.mProperty_mBindingOptionList ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                  GALGAS_bool & outOperand1,
                                                                  GALGAS_lstring & outOperand2,
                                                                  GALGAS_outletClassBindingSpecificationModelList & outOperand3,
                                                                  GALGAS_controllerBindingOptionList & outOperand4,
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
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    outOperand0 = p->mObject.mProperty_mOutletClassName ;
    outOperand1 = p->mObject.mProperty_mIsUserDefined ;
    outOperand2 = p->mObject.mProperty_mBindingName ;
    outOperand3 = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
    outOperand4 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList::setter_popLast (GALGAS_lstring & outOperand0,
                                                                 GALGAS_bool & outOperand1,
                                                                 GALGAS_lstring & outOperand2,
                                                                 GALGAS_outletClassBindingSpecificationModelList & outOperand3,
                                                                 GALGAS_controllerBindingOptionList & outOperand4,
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
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    outOperand0 = p->mObject.mProperty_mOutletClassName ;
    outOperand1 = p->mObject.mProperty_mIsUserDefined ;
    outOperand2 = p->mObject.mProperty_mBindingName ;
    outOperand3 = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
    outOperand4 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList::method_first (GALGAS_lstring & outOperand0,
                                                               GALGAS_bool & outOperand1,
                                                               GALGAS_lstring & outOperand2,
                                                               GALGAS_outletClassBindingSpecificationModelList & outOperand3,
                                                               GALGAS_controllerBindingOptionList & outOperand4,
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
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    outOperand0 = p->mObject.mProperty_mOutletClassName ;
    outOperand1 = p->mObject.mProperty_mIsUserDefined ;
    outOperand2 = p->mObject.mProperty_mBindingName ;
    outOperand3 = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
    outOperand4 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList::method_last (GALGAS_lstring & outOperand0,
                                                              GALGAS_bool & outOperand1,
                                                              GALGAS_lstring & outOperand2,
                                                              GALGAS_outletClassBindingSpecificationModelList & outOperand3,
                                                              GALGAS_controllerBindingOptionList & outOperand4,
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
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    outOperand0 = p->mObject.mProperty_mOutletClassName ;
    outOperand1 = p->mObject.mProperty_mIsUserDefined ;
    outOperand2 = p->mObject.mProperty_mBindingName ;
    outOperand3 = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
    outOperand4 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList GALGAS_outletClassBindingSpecificationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationList result = GALGAS_outletClassBindingSpecificationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList GALGAS_outletClassBindingSpecificationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationList result = GALGAS_outletClassBindingSpecificationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList GALGAS_outletClassBindingSpecificationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationList result = GALGAS_outletClassBindingSpecificationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList::plusAssign_operation (const GALGAS_outletClassBindingSpecificationList inOperand,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassBindingSpecificationList::getter_mIsUserDefinedAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    result = p->mObject.mProperty_mIsUserDefined ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_outletClassBindingSpecificationList::cEnumerator_outletClassBindingSpecificationList (const GALGAS_outletClassBindingSpecificationList & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList_2D_element cEnumerator_outletClassBindingSpecificationList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationList * p = (const cCollectionElement_outletClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_outletClassBindingSpecificationList::current_mOutletClassName (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationList * p = (const cCollectionElement_outletClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
  return p->mObject.mProperty_mOutletClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_outletClassBindingSpecificationList::current_mIsUserDefined (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationList * p = (const cCollectionElement_outletClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
  return p->mObject.mProperty_mIsUserDefined ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_outletClassBindingSpecificationList::current_mBindingName (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationList * p = (const cCollectionElement_outletClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
  return p->mObject.mProperty_mBindingName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList cEnumerator_outletClassBindingSpecificationList::current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationList * p = (const cCollectionElement_outletClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
  return p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList cEnumerator_outletClassBindingSpecificationList::current_mBindingOptionList (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationList * p = (const cCollectionElement_outletClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
  return p->mObject.mProperty_mBindingOptionList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @outletClassBindingSpecificationList type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassBindingSpecificationList ("outletClassBindingSpecificationList",
                                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletClassBindingSpecificationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletClassBindingSpecificationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassBindingSpecificationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_abstractSecondaryProperty::objectCompare (const GALGAS_abstractSecondaryProperty & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractSecondaryProperty::GALGAS_abstractSecondaryProperty (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractSecondaryProperty::GALGAS_abstractSecondaryProperty (const cPtr_abstractSecondaryProperty * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractSecondaryProperty) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @abstractSecondaryProperty class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_abstractSecondaryProperty::cPtr_abstractSecondaryProperty (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @abstractSecondaryProperty type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractSecondaryProperty ("abstractSecondaryProperty",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_abstractSecondaryProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractSecondaryProperty ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_abstractSecondaryProperty::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractSecondaryProperty (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractSecondaryProperty GALGAS_abstractSecondaryProperty::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_abstractSecondaryProperty result ;
  const GALGAS_abstractSecondaryProperty * p = (const GALGAS_abstractSecondaryProperty *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractSecondaryProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractSecondaryProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@secondaryPropertyList' list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_secondaryPropertyList : public cCollectionElement {
  public : GALGAS_secondaryPropertyList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_secondaryPropertyList (const GALGAS_abstractSecondaryProperty & in_mSecondaryProperty
                                                     COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_secondaryPropertyList (const GALGAS_secondaryPropertyList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_secondaryPropertyList::cCollectionElement_secondaryPropertyList (const GALGAS_abstractSecondaryProperty & in_mSecondaryProperty
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSecondaryProperty) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_secondaryPropertyList::cCollectionElement_secondaryPropertyList (const GALGAS_secondaryPropertyList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSecondaryProperty) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_secondaryPropertyList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_secondaryPropertyList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_secondaryPropertyList (mObject.mProperty_mSecondaryProperty COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_secondaryPropertyList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSecondaryProperty" ":" ;
  mObject.mProperty_mSecondaryProperty.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_secondaryPropertyList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_secondaryPropertyList * operand = (cCollectionElement_secondaryPropertyList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_secondaryPropertyList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList::GALGAS_secondaryPropertyList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList::GALGAS_secondaryPropertyList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList GALGAS_secondaryPropertyList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_secondaryPropertyList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList GALGAS_secondaryPropertyList::constructor_listWithValue (const GALGAS_abstractSecondaryProperty & inOperand0
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_secondaryPropertyList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_secondaryPropertyList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_secondaryPropertyList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryPropertyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_abstractSecondaryProperty & in_mSecondaryProperty
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_secondaryPropertyList * p = NULL ;
  macroMyNew (p, cCollectionElement_secondaryPropertyList (in_mSecondaryProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryPropertyList::addAssign_operation (const GALGAS_abstractSecondaryProperty & inOperand0
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_secondaryPropertyList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryPropertyList::setter_append (GALGAS_secondaryPropertyList_2D_element inElement,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_secondaryPropertyList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryPropertyList::setter_insertAtIndex (const GALGAS_abstractSecondaryProperty inOperand0,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_secondaryPropertyList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryPropertyList::setter_removeAtIndex (GALGAS_abstractSecondaryProperty & outOperand0,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_secondaryPropertyList * p = (cCollectionElement_secondaryPropertyList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_secondaryPropertyList) ;
      outOperand0 = p->mObject.mProperty_mSecondaryProperty ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryPropertyList::setter_popFirst (GALGAS_abstractSecondaryProperty & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryPropertyList * p = (cCollectionElement_secondaryPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_secondaryPropertyList) ;
    outOperand0 = p->mObject.mProperty_mSecondaryProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryPropertyList::setter_popLast (GALGAS_abstractSecondaryProperty & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryPropertyList * p = (cCollectionElement_secondaryPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_secondaryPropertyList) ;
    outOperand0 = p->mObject.mProperty_mSecondaryProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryPropertyList::method_first (GALGAS_abstractSecondaryProperty & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryPropertyList * p = (cCollectionElement_secondaryPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_secondaryPropertyList) ;
    outOperand0 = p->mObject.mProperty_mSecondaryProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryPropertyList::method_last (GALGAS_abstractSecondaryProperty & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryPropertyList * p = (cCollectionElement_secondaryPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_secondaryPropertyList) ;
    outOperand0 = p->mObject.mProperty_mSecondaryProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList GALGAS_secondaryPropertyList::add_operation (const GALGAS_secondaryPropertyList & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_secondaryPropertyList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList GALGAS_secondaryPropertyList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_secondaryPropertyList result = GALGAS_secondaryPropertyList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList GALGAS_secondaryPropertyList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_secondaryPropertyList result = GALGAS_secondaryPropertyList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList GALGAS_secondaryPropertyList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_secondaryPropertyList result = GALGAS_secondaryPropertyList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryPropertyList::plusAssign_operation (const GALGAS_secondaryPropertyList inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractSecondaryProperty GALGAS_secondaryPropertyList::getter_mSecondaryPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryPropertyList * p = (cCollectionElement_secondaryPropertyList *) attributes.ptr () ;
  GALGAS_abstractSecondaryProperty result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_secondaryPropertyList) ;
    result = p->mObject.mProperty_mSecondaryProperty ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_secondaryPropertyList::cEnumerator_secondaryPropertyList (const GALGAS_secondaryPropertyList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList_2D_element cEnumerator_secondaryPropertyList::current (LOCATION_ARGS) const {
  const cCollectionElement_secondaryPropertyList * p = (const cCollectionElement_secondaryPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_secondaryPropertyList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractSecondaryProperty cEnumerator_secondaryPropertyList::current_mSecondaryProperty (LOCATION_ARGS) const {
  const cCollectionElement_secondaryPropertyList * p = (const cCollectionElement_secondaryPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_secondaryPropertyList) ;
  return p->mObject.mProperty_mSecondaryProperty ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @secondaryPropertyList type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_secondaryPropertyList ("secondaryPropertyList",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_secondaryPropertyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_secondaryPropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_secondaryPropertyList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_secondaryPropertyList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList GALGAS_secondaryPropertyList::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_secondaryPropertyList result ;
  const GALGAS_secondaryPropertyList * p = (const GALGAS_secondaryPropertyList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_secondaryPropertyList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("secondaryPropertyList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Abstract extension method '@abstractSecondaryProperty typeInventory'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractSecondaryProperty_typeInventory> gExtensionMethodTable_abstractSecondaryProperty_typeInventory ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_typeInventory (const int32_t inClassIndex,
                                         extensionMethodSignature_abstractSecondaryProperty_typeInventory inMethod) {
  gExtensionMethodTable_abstractSecondaryProperty_typeInventory.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractSecondaryProperty_typeInventory (void) {
  gExtensionMethodTable_abstractSecondaryProperty_typeInventory.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractSecondaryProperty_typeInventory (NULL,
                                                                    freeExtensionMethod_abstractSecondaryProperty_typeInventory) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_typeInventory (const cPtr_abstractSecondaryProperty * inObject,
                                        GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractSecondaryProperty) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractSecondaryProperty_typeInventory f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractSecondaryProperty_typeInventory.count ()) {
      f = gExtensionMethodTable_abstractSecondaryProperty_typeInventory (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractSecondaryProperty_typeInventory.count ()) {
          f = gExtensionMethodTable_abstractSecondaryProperty_typeInventory (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractSecondaryProperty_typeInventory.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Abstract extension method '@abstractSecondaryProperty secondaryPropertySemanticAnalysis'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractSecondaryProperty_secondaryPropertySemanticAnalysis> gExtensionMethodTable_abstractSecondaryProperty_secondaryPropertySemanticAnalysis ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_secondaryPropertySemanticAnalysis (const int32_t inClassIndex,
                                                             extensionMethodSignature_abstractSecondaryProperty_secondaryPropertySemanticAnalysis inMethod) {
  gExtensionMethodTable_abstractSecondaryProperty_secondaryPropertySemanticAnalysis.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractSecondaryProperty_secondaryPropertySemanticAnalysis (void) {
  gExtensionMethodTable_abstractSecondaryProperty_secondaryPropertySemanticAnalysis.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractSecondaryProperty_secondaryPropertySemanticAnalysis (NULL,
                                                                                        freeExtensionMethod_abstractSecondaryProperty_secondaryPropertySemanticAnalysis) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_secondaryPropertySemanticAnalysis (const cPtr_abstractSecondaryProperty * inObject,
                                                            const GALGAS_string constin_inOwnerName,
                                                            const GALGAS_string constin_inRootEntityName,
                                                            const GALGAS_observablePropertyMap constin_inRootObservableProperties,
                                                            const GALGAS_semanticContext constin_inSemanticContext,
                                                            const GALGAS_observablePropertyMap constin_inObservableProperties,
                                                            GALGAS_transientDefinitionListForGeneration & io_ioTransientDefinitionListForGeneration,
                                                            GALGAS_arrayControllerForGeneration & io_ioArrayControllerForGeneration,
                                                            GALGAS_selectionControllerForGeneration & io_ioSelectionControllerForGeneration,
                                                            GALGAS_stringset & io_ioNeededOutletClasses,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractSecondaryProperty) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractSecondaryProperty_secondaryPropertySemanticAnalysis f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractSecondaryProperty_secondaryPropertySemanticAnalysis.count ()) {
      f = gExtensionMethodTable_abstractSecondaryProperty_secondaryPropertySemanticAnalysis (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractSecondaryProperty_secondaryPropertySemanticAnalysis.count ()) {
          f = gExtensionMethodTable_abstractSecondaryProperty_secondaryPropertySemanticAnalysis (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractSecondaryProperty_secondaryPropertySemanticAnalysis.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inOwnerName, constin_inRootEntityName, constin_inRootObservableProperties, constin_inSemanticContext, constin_inObservableProperties, io_ioTransientDefinitionListForGeneration, io_ioArrayControllerForGeneration, io_ioSelectionControllerForGeneration, io_ioNeededOutletClasses, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Class for element of '@externSwiftDelegateList' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_externSwiftDelegateList::cCollectionElement_externSwiftDelegateList (const GALGAS_lstring & in_mExternSwiftDelegateName
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExternSwiftDelegateName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_externSwiftDelegateList::cCollectionElement_externSwiftDelegateList (const GALGAS_externSwiftDelegateList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExternSwiftDelegateName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_externSwiftDelegateList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_externSwiftDelegateList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externSwiftDelegateList (mObject.mProperty_mExternSwiftDelegateName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_externSwiftDelegateList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExternSwiftDelegateName" ":" ;
  mObject.mProperty_mExternSwiftDelegateName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_externSwiftDelegateList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externSwiftDelegateList * operand = (cCollectionElement_externSwiftDelegateList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externSwiftDelegateList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList::GALGAS_externSwiftDelegateList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList::GALGAS_externSwiftDelegateList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList GALGAS_externSwiftDelegateList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externSwiftDelegateList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftDelegateList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mExternSwiftDelegateName
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_externSwiftDelegateList * p = NULL ;
  macroMyNew (p, cCollectionElement_externSwiftDelegateList (in_mExternSwiftDelegateName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList GALGAS_externSwiftDelegateList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_externSwiftDelegateList result = GALGAS_externSwiftDelegateList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList GALGAS_externSwiftDelegateList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_externSwiftDelegateList result = GALGAS_externSwiftDelegateList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList GALGAS_externSwiftDelegateList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_externSwiftDelegateList result = GALGAS_externSwiftDelegateList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftDelegateList::plusAssign_operation (const GALGAS_externSwiftDelegateList inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_externSwiftDelegateList::cEnumerator_externSwiftDelegateList (const GALGAS_externSwiftDelegateList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList_2D_element cEnumerator_externSwiftDelegateList::current (LOCATION_ARGS) const {
  const cCollectionElement_externSwiftDelegateList * p = (const cCollectionElement_externSwiftDelegateList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_externSwiftDelegateList::current_mExternSwiftDelegateName (LOCATION_ARGS) const {
  const cCollectionElement_externSwiftDelegateList * p = (const cCollectionElement_externSwiftDelegateList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
  return p->mObject.mProperty_mExternSwiftDelegateName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @externSwiftDelegateList type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externSwiftDelegateList ("externSwiftDelegateList",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_externSwiftDelegateList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externSwiftDelegateList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_externSwiftDelegateList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externSwiftDelegateList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Class for element of '@externSwiftFunctionList' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_externSwiftFunctionList::cCollectionElement_externSwiftFunctionList (const GALGAS_lstring & in_mExternSwiftFunctionName,
                                                                                        const GALGAS_lstring & in_mCallerName
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExternSwiftFunctionName, in_mCallerName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_externSwiftFunctionList::cCollectionElement_externSwiftFunctionList (const GALGAS_externSwiftFunctionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExternSwiftFunctionName, inElement.mProperty_mCallerName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_externSwiftFunctionList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_externSwiftFunctionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externSwiftFunctionList (mObject.mProperty_mExternSwiftFunctionName, mObject.mProperty_mCallerName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_externSwiftFunctionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externSwiftFunctionList * operand = (cCollectionElement_externSwiftFunctionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externSwiftFunctionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList::GALGAS_externSwiftFunctionList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList::GALGAS_externSwiftFunctionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_externSwiftFunctionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externSwiftFunctionList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_externSwiftFunctionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_externSwiftFunctionList result = GALGAS_externSwiftFunctionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_externSwiftFunctionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_externSwiftFunctionList result = GALGAS_externSwiftFunctionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_externSwiftFunctionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_externSwiftFunctionList result = GALGAS_externSwiftFunctionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftFunctionList::plusAssign_operation (const GALGAS_externSwiftFunctionList inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_externSwiftFunctionList::cEnumerator_externSwiftFunctionList (const GALGAS_externSwiftFunctionList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList_2D_element cEnumerator_externSwiftFunctionList::current (LOCATION_ARGS) const {
  const cCollectionElement_externSwiftFunctionList * p = (const cCollectionElement_externSwiftFunctionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_externSwiftFunctionList::current_mExternSwiftFunctionName (LOCATION_ARGS) const {
  const cCollectionElement_externSwiftFunctionList * p = (const cCollectionElement_externSwiftFunctionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
  return p->mObject.mProperty_mExternSwiftFunctionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_externSwiftFunctionList::current_mCallerName (LOCATION_ARGS) const {
  const cCollectionElement_externSwiftFunctionList * p = (const cCollectionElement_externSwiftFunctionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
  return p->mObject.mProperty_mCallerName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @externSwiftFunctionList type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externSwiftFunctionList ("externSwiftFunctionList",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_externSwiftFunctionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externSwiftFunctionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_externSwiftFunctionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externSwiftFunctionList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_externFunctionMap::cMapElement_externFunctionMap (const GALGAS_lstring & inKey
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_externFunctionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_externFunctionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_externFunctionMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_externFunctionMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_externFunctionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_externFunctionMap * operand = (cMapElement_externFunctionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap::GALGAS_externFunctionMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap::GALGAS_externFunctionMap (const GALGAS_externFunctionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap & GALGAS_externFunctionMap::operator = (const GALGAS_externFunctionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap GALGAS_externFunctionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_externFunctionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap GALGAS_externFunctionMap::constructor_mapWithMapToOverride (const GALGAS_externFunctionMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap GALGAS_externFunctionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_externFunctionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_externFunctionMap * GALGAS_externFunctionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_externFunctionMap * result = (cMapElement_externFunctionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_externFunctionMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_externFunctionMap::cEnumerator_externFunctionMap (const GALGAS_externFunctionMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap_2D_element cEnumerator_externFunctionMap::current (LOCATION_ARGS) const {
  const cMapElement_externFunctionMap * p = (const cMapElement_externFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externFunctionMap) ;
  return GALGAS_externFunctionMap_2D_element (p->mProperty_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_externFunctionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @externFunctionMap type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externFunctionMap ("externFunctionMap",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_externFunctionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_externFunctionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externFunctionMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_enumConstantMap::cMapElement_enumConstantMap (const GALGAS_lstring & inKey
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_enumConstantMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_enumConstantMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_enumConstantMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_enumConstantMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_enumConstantMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_enumConstantMap * operand = (cMapElement_enumConstantMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap::GALGAS_enumConstantMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap::GALGAS_enumConstantMap (const GALGAS_enumConstantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap & GALGAS_enumConstantMap::operator = (const GALGAS_enumConstantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap GALGAS_enumConstantMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_enumConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap GALGAS_enumConstantMap::constructor_mapWithMapToOverride (const GALGAS_enumConstantMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap GALGAS_enumConstantMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumConstantMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_enumConstantMap * p = NULL ;
  macroMyNew (p, cMapElement_enumConstantMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@enumConstantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumConstantMap::setter_insertKey (GALGAS_lstring inKey,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_enumConstantMap * p = NULL ;
  macroMyNew (p, cMapElement_enumConstantMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "there is already a '%K' constant" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_enumConstantMap_searchKey = "the '%K' constant is not defined" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumConstantMap::method_searchKey (GALGAS_lstring inKey,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_enumConstantMap * p = (const cMapElement_enumConstantMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_enumConstantMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_enumConstantMap) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_enumConstantMap * GALGAS_enumConstantMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_enumConstantMap * result = (cMapElement_enumConstantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_enumConstantMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_enumConstantMap::cEnumerator_enumConstantMap (const GALGAS_enumConstantMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap_2D_element cEnumerator_enumConstantMap::current (LOCATION_ARGS) const {
  const cMapElement_enumConstantMap * p = (const cMapElement_enumConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_enumConstantMap) ;
  return GALGAS_enumConstantMap_2D_element (p->mProperty_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_enumConstantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @enumConstantMap type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantMap ("enumConstantMap",
                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@enumListForGeneration' list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_enumListForGeneration : public cCollectionElement {
  public : GALGAS_enumListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_enumListForGeneration (const GALGAS_string & in_mEnumName,
                                                     const GALGAS_lstringlist & in_mEnumConstantList
                                                     COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_enumListForGeneration (const GALGAS_enumListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_enumListForGeneration::cCollectionElement_enumListForGeneration (const GALGAS_string & in_mEnumName,
                                                                                    const GALGAS_lstringlist & in_mEnumConstantList
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEnumName, in_mEnumConstantList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_enumListForGeneration::cCollectionElement_enumListForGeneration (const GALGAS_enumListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEnumName, inElement.mProperty_mEnumConstantList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_enumListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_enumListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_enumListForGeneration (mObject.mProperty_mEnumName, mObject.mProperty_mEnumConstantList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_enumListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumName" ":" ;
  mObject.mProperty_mEnumName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumConstantList" ":" ;
  mObject.mProperty_mEnumConstantList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_enumListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_enumListForGeneration * operand = (cCollectionElement_enumListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_enumListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration::GALGAS_enumListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration::GALGAS_enumListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration GALGAS_enumListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration GALGAS_enumListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                      const GALGAS_lstringlist & inOperand1
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_enumListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_enumListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_string & in_mEnumName,
                                                              const GALGAS_lstringlist & in_mEnumConstantList
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_enumListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_enumListForGeneration (in_mEnumName,
                                                           in_mEnumConstantList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                        const GALGAS_lstringlist & inOperand1
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumListForGeneration::setter_append (GALGAS_enumListForGeneration_2D_element inElement,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                         const GALGAS_lstringlist inOperand1,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                         GALGAS_lstringlist & outOperand1,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_enumListForGeneration * p = (cCollectionElement_enumListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_enumListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mEnumName ;
      outOperand1 = p->mObject.mProperty_mEnumConstantList ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                    GALGAS_lstringlist & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumListForGeneration * p = (cCollectionElement_enumListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumName ;
    outOperand1 = p->mObject.mProperty_mEnumConstantList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                   GALGAS_lstringlist & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumListForGeneration * p = (cCollectionElement_enumListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumName ;
    outOperand1 = p->mObject.mProperty_mEnumConstantList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumListForGeneration::method_first (GALGAS_string & outOperand0,
                                                 GALGAS_lstringlist & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumListForGeneration * p = (cCollectionElement_enumListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumName ;
    outOperand1 = p->mObject.mProperty_mEnumConstantList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumListForGeneration::method_last (GALGAS_string & outOperand0,
                                                GALGAS_lstringlist & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumListForGeneration * p = (cCollectionElement_enumListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumName ;
    outOperand1 = p->mObject.mProperty_mEnumConstantList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration GALGAS_enumListForGeneration::add_operation (const GALGAS_enumListForGeneration & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_enumListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration GALGAS_enumListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_enumListForGeneration result = GALGAS_enumListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration GALGAS_enumListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_enumListForGeneration result = GALGAS_enumListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration GALGAS_enumListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_enumListForGeneration result = GALGAS_enumListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumListForGeneration::plusAssign_operation (const GALGAS_enumListForGeneration inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_enumListForGeneration::getter_mEnumNameAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumListForGeneration * p = (cCollectionElement_enumListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumListForGeneration) ;
    result = p->mObject.mProperty_mEnumName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_enumListForGeneration::getter_mEnumConstantListAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumListForGeneration * p = (cCollectionElement_enumListForGeneration *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumListForGeneration) ;
    result = p->mObject.mProperty_mEnumConstantList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_enumListForGeneration::cEnumerator_enumListForGeneration (const GALGAS_enumListForGeneration & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration_2D_element cEnumerator_enumListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_enumListForGeneration * p = (const cCollectionElement_enumListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_enumListForGeneration::current_mEnumName (LOCATION_ARGS) const {
  const cCollectionElement_enumListForGeneration * p = (const cCollectionElement_enumListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumListForGeneration) ;
  return p->mObject.mProperty_mEnumName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_enumListForGeneration::current_mEnumConstantList (LOCATION_ARGS) const {
  const cCollectionElement_enumListForGeneration * p = (const cCollectionElement_enumListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumListForGeneration) ;
  return p->mObject.mProperty_mEnumConstantList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @enumListForGeneration type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumListForGeneration ("enumListForGeneration",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration GALGAS_enumListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_enumListForGeneration result ;
  const GALGAS_enumListForGeneration * p = (const GALGAS_enumListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@toOneRelationshipList' list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_toOneRelationshipList : public cCollectionElement {
  public : GALGAS_toOneRelationshipList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_toOneRelationshipList (const GALGAS_lstring & in_mCurrentEntityName,
                                                     const GALGAS_lstring & in_mDestinationEntityName,
                                                     const GALGAS_lstring & in_mToOneRelationshipName,
                                                     const GALGAS_lstring & in_mInverseRelationshipName,
                                                     const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                     const GALGAS_bool & in_mCascading
                                                     COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_toOneRelationshipList (const GALGAS_toOneRelationshipList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_toOneRelationshipList::cCollectionElement_toOneRelationshipList (const GALGAS_lstring & in_mCurrentEntityName,
                                                                                    const GALGAS_lstring & in_mDestinationEntityName,
                                                                                    const GALGAS_lstring & in_mToOneRelationshipName,
                                                                                    const GALGAS_lstring & in_mInverseRelationshipName,
                                                                                    const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                                                    const GALGAS_bool & in_mCascading
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCurrentEntityName, in_mDestinationEntityName, in_mToOneRelationshipName, in_mInverseRelationshipName, in_mInverseRelationMultiplicity, in_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_toOneRelationshipList::cCollectionElement_toOneRelationshipList (const GALGAS_toOneRelationshipList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mCurrentEntityName, inElement.mProperty_mDestinationEntityName, inElement.mProperty_mToOneRelationshipName, inElement.mProperty_mInverseRelationshipName, inElement.mProperty_mInverseRelationMultiplicity, inElement.mProperty_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_toOneRelationshipList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_toOneRelationshipList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_toOneRelationshipList (mObject.mProperty_mCurrentEntityName, mObject.mProperty_mDestinationEntityName, mObject.mProperty_mToOneRelationshipName, mObject.mProperty_mInverseRelationshipName, mObject.mProperty_mInverseRelationMultiplicity, mObject.mProperty_mCascading COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_toOneRelationshipList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCurrentEntityName" ":" ;
  mObject.mProperty_mCurrentEntityName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDestinationEntityName" ":" ;
  mObject.mProperty_mDestinationEntityName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mToOneRelationshipName" ":" ;
  mObject.mProperty_mToOneRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInverseRelationshipName" ":" ;
  mObject.mProperty_mInverseRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInverseRelationMultiplicity" ":" ;
  mObject.mProperty_mInverseRelationMultiplicity.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCascading" ":" ;
  mObject.mProperty_mCascading.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_toOneRelationshipList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_toOneRelationshipList * operand = (cCollectionElement_toOneRelationshipList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_toOneRelationshipList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipList::GALGAS_toOneRelationshipList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipList::GALGAS_toOneRelationshipList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipList GALGAS_toOneRelationshipList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_toOneRelationshipList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipList GALGAS_toOneRelationshipList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1,
                                                                                      const GALGAS_lstring & inOperand2,
                                                                                      const GALGAS_lstring & inOperand3,
                                                                                      const GALGAS_propertyMultiplicity & inOperand4,
                                                                                      const GALGAS_bool & inOperand5
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_toOneRelationshipList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_toOneRelationshipList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_toOneRelationshipList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneRelationshipList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mCurrentEntityName,
                                                              const GALGAS_lstring & in_mDestinationEntityName,
                                                              const GALGAS_lstring & in_mToOneRelationshipName,
                                                              const GALGAS_lstring & in_mInverseRelationshipName,
                                                              const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                              const GALGAS_bool & in_mCascading
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_toOneRelationshipList * p = NULL ;
  macroMyNew (p, cCollectionElement_toOneRelationshipList (in_mCurrentEntityName,
                                                           in_mDestinationEntityName,
                                                           in_mToOneRelationshipName,
                                                           in_mInverseRelationshipName,
                                                           in_mInverseRelationMultiplicity,
                                                           in_mCascading COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneRelationshipList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_lstring & inOperand1,
                                                        const GALGAS_lstring & inOperand2,
                                                        const GALGAS_lstring & inOperand3,
                                                        const GALGAS_propertyMultiplicity & inOperand4,
                                                        const GALGAS_bool & inOperand5
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toOneRelationshipList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneRelationshipList::setter_append (GALGAS_toOneRelationshipList_2D_element inElement,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toOneRelationshipList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneRelationshipList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_lstring inOperand1,
                                                         const GALGAS_lstring inOperand2,
                                                         const GALGAS_lstring inOperand3,
                                                         const GALGAS_propertyMultiplicity inOperand4,
                                                         const GALGAS_bool inOperand5,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toOneRelationshipList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneRelationshipList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_lstring & outOperand3,
                                                         GALGAS_propertyMultiplicity & outOperand4,
                                                         GALGAS_bool & outOperand5,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_toOneRelationshipList * p = (cCollectionElement_toOneRelationshipList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
      outOperand0 = p->mObject.mProperty_mCurrentEntityName ;
      outOperand1 = p->mObject.mProperty_mDestinationEntityName ;
      outOperand2 = p->mObject.mProperty_mToOneRelationshipName ;
      outOperand3 = p->mObject.mProperty_mInverseRelationshipName ;
      outOperand4 = p->mObject.mProperty_mInverseRelationMultiplicity ;
      outOperand5 = p->mObject.mProperty_mCascading ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneRelationshipList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_lstring & outOperand2,
                                                    GALGAS_lstring & outOperand3,
                                                    GALGAS_propertyMultiplicity & outOperand4,
                                                    GALGAS_bool & outOperand5,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneRelationshipList * p = (cCollectionElement_toOneRelationshipList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
    outOperand0 = p->mObject.mProperty_mCurrentEntityName ;
    outOperand1 = p->mObject.mProperty_mDestinationEntityName ;
    outOperand2 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationshipName ;
    outOperand4 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand5 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneRelationshipList::setter_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_lstring & outOperand2,
                                                   GALGAS_lstring & outOperand3,
                                                   GALGAS_propertyMultiplicity & outOperand4,
                                                   GALGAS_bool & outOperand5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneRelationshipList * p = (cCollectionElement_toOneRelationshipList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
    outOperand0 = p->mObject.mProperty_mCurrentEntityName ;
    outOperand1 = p->mObject.mProperty_mDestinationEntityName ;
    outOperand2 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationshipName ;
    outOperand4 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand5 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneRelationshipList::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 GALGAS_lstring & outOperand3,
                                                 GALGAS_propertyMultiplicity & outOperand4,
                                                 GALGAS_bool & outOperand5,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneRelationshipList * p = (cCollectionElement_toOneRelationshipList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
    outOperand0 = p->mObject.mProperty_mCurrentEntityName ;
    outOperand1 = p->mObject.mProperty_mDestinationEntityName ;
    outOperand2 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationshipName ;
    outOperand4 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand5 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneRelationshipList::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_lstring & outOperand2,
                                                GALGAS_lstring & outOperand3,
                                                GALGAS_propertyMultiplicity & outOperand4,
                                                GALGAS_bool & outOperand5,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneRelationshipList * p = (cCollectionElement_toOneRelationshipList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
    outOperand0 = p->mObject.mProperty_mCurrentEntityName ;
    outOperand1 = p->mObject.mProperty_mDestinationEntityName ;
    outOperand2 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationshipName ;
    outOperand4 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand5 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipList GALGAS_toOneRelationshipList::add_operation (const GALGAS_toOneRelationshipList & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_toOneRelationshipList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipList GALGAS_toOneRelationshipList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_toOneRelationshipList result = GALGAS_toOneRelationshipList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipList GALGAS_toOneRelationshipList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_toOneRelationshipList result = GALGAS_toOneRelationshipList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipList GALGAS_toOneRelationshipList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_toOneRelationshipList result = GALGAS_toOneRelationshipList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneRelationshipList::plusAssign_operation (const GALGAS_toOneRelationshipList inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toOneRelationshipList::getter_mCurrentEntityNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneRelationshipList * p = (cCollectionElement_toOneRelationshipList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
    result = p->mObject.mProperty_mCurrentEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toOneRelationshipList::getter_mDestinationEntityNameAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneRelationshipList * p = (cCollectionElement_toOneRelationshipList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
    result = p->mObject.mProperty_mDestinationEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toOneRelationshipList::getter_mToOneRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneRelationshipList * p = (cCollectionElement_toOneRelationshipList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
    result = p->mObject.mProperty_mToOneRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toOneRelationshipList::getter_mInverseRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneRelationshipList * p = (cCollectionElement_toOneRelationshipList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
    result = p->mObject.mProperty_mInverseRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_toOneRelationshipList::getter_mInverseRelationMultiplicityAtIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneRelationshipList * p = (cCollectionElement_toOneRelationshipList *) attributes.ptr () ;
  GALGAS_propertyMultiplicity result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
    result = p->mObject.mProperty_mInverseRelationMultiplicity ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_toOneRelationshipList::getter_mCascadingAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneRelationshipList * p = (cCollectionElement_toOneRelationshipList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
    result = p->mObject.mProperty_mCascading ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_toOneRelationshipList::cEnumerator_toOneRelationshipList (const GALGAS_toOneRelationshipList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipList_2D_element cEnumerator_toOneRelationshipList::current (LOCATION_ARGS) const {
  const cCollectionElement_toOneRelationshipList * p = (const cCollectionElement_toOneRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_toOneRelationshipList::current_mCurrentEntityName (LOCATION_ARGS) const {
  const cCollectionElement_toOneRelationshipList * p = (const cCollectionElement_toOneRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
  return p->mObject.mProperty_mCurrentEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_toOneRelationshipList::current_mDestinationEntityName (LOCATION_ARGS) const {
  const cCollectionElement_toOneRelationshipList * p = (const cCollectionElement_toOneRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
  return p->mObject.mProperty_mDestinationEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_toOneRelationshipList::current_mToOneRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toOneRelationshipList * p = (const cCollectionElement_toOneRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
  return p->mObject.mProperty_mToOneRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_toOneRelationshipList::current_mInverseRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toOneRelationshipList * p = (const cCollectionElement_toOneRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
  return p->mObject.mProperty_mInverseRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity cEnumerator_toOneRelationshipList::current_mInverseRelationMultiplicity (LOCATION_ARGS) const {
  const cCollectionElement_toOneRelationshipList * p = (const cCollectionElement_toOneRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
  return p->mObject.mProperty_mInverseRelationMultiplicity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_toOneRelationshipList::current_mCascading (LOCATION_ARGS) const {
  const cCollectionElement_toOneRelationshipList * p = (const cCollectionElement_toOneRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
  return p->mObject.mProperty_mCascading ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @toOneRelationshipList type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOneRelationshipList ("toOneRelationshipList",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toOneRelationshipList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneRelationshipList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toOneRelationshipList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneRelationshipList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipList GALGAS_toOneRelationshipList::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_toOneRelationshipList result ;
  const GALGAS_toOneRelationshipList * p = (const GALGAS_toOneRelationshipList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOneRelationshipList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneRelationshipList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity::GALGAS_propertyMultiplicity (void) :
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_propertyMultiplicity::constructor_single (UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMultiplicity result ;
  result.mEnum = kEnum_single ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_propertyMultiplicity::constructor_collection (UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMultiplicity result ;
  result.mEnum = kEnum_collection ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_propertyMultiplicity [3] = {
  "(not built)",
  "single",
  "collection"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_propertyMultiplicity::getter_isSingle (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_single == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_propertyMultiplicity::getter_isCollection (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_collection == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyMultiplicity::description (C_String & ioString,
                                               const int32_t /* inIndentation */) const {
  ioString << "<enum @propertyMultiplicity: " << gEnumNameArrayFor_propertyMultiplicity [mEnum] ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_propertyMultiplicity::objectCompare (const GALGAS_propertyMultiplicity & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @propertyMultiplicity type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyMultiplicity ("propertyMultiplicity",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyMultiplicity::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMultiplicity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyMultiplicity::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyMultiplicity (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_propertyMultiplicity::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_propertyMultiplicity result ;
  const GALGAS_propertyMultiplicity * p = (const GALGAS_propertyMultiplicity *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyMultiplicity *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMultiplicity", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@toManyRelationshipList' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_toManyRelationshipList : public cCollectionElement {
  public : GALGAS_toManyRelationshipList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_toManyRelationshipList (const GALGAS_lstring & in_mCurrentEntityName,
                                                      const GALGAS_lstring & in_mDestinationEntityName,
                                                      const GALGAS_lstring & in_mToManyRelationshipName,
                                                      const GALGAS_lstring & in_mInverseRelationshipName,
                                                      const GALGAS_bool & in_mCascading
                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_toManyRelationshipList (const GALGAS_toManyRelationshipList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_toManyRelationshipList::cCollectionElement_toManyRelationshipList (const GALGAS_lstring & in_mCurrentEntityName,
                                                                                      const GALGAS_lstring & in_mDestinationEntityName,
                                                                                      const GALGAS_lstring & in_mToManyRelationshipName,
                                                                                      const GALGAS_lstring & in_mInverseRelationshipName,
                                                                                      const GALGAS_bool & in_mCascading
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCurrentEntityName, in_mDestinationEntityName, in_mToManyRelationshipName, in_mInverseRelationshipName, in_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_toManyRelationshipList::cCollectionElement_toManyRelationshipList (const GALGAS_toManyRelationshipList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mCurrentEntityName, inElement.mProperty_mDestinationEntityName, inElement.mProperty_mToManyRelationshipName, inElement.mProperty_mInverseRelationshipName, inElement.mProperty_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_toManyRelationshipList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_toManyRelationshipList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_toManyRelationshipList (mObject.mProperty_mCurrentEntityName, mObject.mProperty_mDestinationEntityName, mObject.mProperty_mToManyRelationshipName, mObject.mProperty_mInverseRelationshipName, mObject.mProperty_mCascading COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_toManyRelationshipList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCurrentEntityName" ":" ;
  mObject.mProperty_mCurrentEntityName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDestinationEntityName" ":" ;
  mObject.mProperty_mDestinationEntityName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mToManyRelationshipName" ":" ;
  mObject.mProperty_mToManyRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInverseRelationshipName" ":" ;
  mObject.mProperty_mInverseRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCascading" ":" ;
  mObject.mProperty_mCascading.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_toManyRelationshipList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_toManyRelationshipList * operand = (cCollectionElement_toManyRelationshipList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_toManyRelationshipList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipList::GALGAS_toManyRelationshipList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipList::GALGAS_toManyRelationshipList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipList GALGAS_toManyRelationshipList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_toManyRelationshipList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipList GALGAS_toManyRelationshipList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_lstring & inOperand2,
                                                                                        const GALGAS_lstring & inOperand3,
                                                                                        const GALGAS_bool & inOperand4
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_toManyRelationshipList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_toManyRelationshipList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyRelationshipList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mCurrentEntityName,
                                                               const GALGAS_lstring & in_mDestinationEntityName,
                                                               const GALGAS_lstring & in_mToManyRelationshipName,
                                                               const GALGAS_lstring & in_mInverseRelationshipName,
                                                               const GALGAS_bool & in_mCascading
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_toManyRelationshipList * p = NULL ;
  macroMyNew (p, cCollectionElement_toManyRelationshipList (in_mCurrentEntityName,
                                                            in_mDestinationEntityName,
                                                            in_mToManyRelationshipName,
                                                            in_mInverseRelationshipName,
                                                            in_mCascading COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyRelationshipList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_lstring & inOperand1,
                                                         const GALGAS_lstring & inOperand2,
                                                         const GALGAS_lstring & inOperand3,
                                                         const GALGAS_bool & inOperand4
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toManyRelationshipList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyRelationshipList::setter_append (GALGAS_toManyRelationshipList_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toManyRelationshipList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyRelationshipList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_lstring inOperand1,
                                                          const GALGAS_lstring inOperand2,
                                                          const GALGAS_lstring inOperand3,
                                                          const GALGAS_bool inOperand4,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toManyRelationshipList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyRelationshipList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          GALGAS_lstring & outOperand3,
                                                          GALGAS_bool & outOperand4,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_toManyRelationshipList * p = (cCollectionElement_toManyRelationshipList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
      outOperand0 = p->mObject.mProperty_mCurrentEntityName ;
      outOperand1 = p->mObject.mProperty_mDestinationEntityName ;
      outOperand2 = p->mObject.mProperty_mToManyRelationshipName ;
      outOperand3 = p->mObject.mProperty_mInverseRelationshipName ;
      outOperand4 = p->mObject.mProperty_mCascading ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyRelationshipList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     GALGAS_lstring & outOperand3,
                                                     GALGAS_bool & outOperand4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyRelationshipList * p = (cCollectionElement_toManyRelationshipList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
    outOperand0 = p->mObject.mProperty_mCurrentEntityName ;
    outOperand1 = p->mObject.mProperty_mDestinationEntityName ;
    outOperand2 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationshipName ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyRelationshipList::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_lstring & outOperand2,
                                                    GALGAS_lstring & outOperand3,
                                                    GALGAS_bool & outOperand4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyRelationshipList * p = (cCollectionElement_toManyRelationshipList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
    outOperand0 = p->mObject.mProperty_mCurrentEntityName ;
    outOperand1 = p->mObject.mProperty_mDestinationEntityName ;
    outOperand2 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationshipName ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyRelationshipList::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_lstring & outOperand2,
                                                  GALGAS_lstring & outOperand3,
                                                  GALGAS_bool & outOperand4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyRelationshipList * p = (cCollectionElement_toManyRelationshipList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
    outOperand0 = p->mObject.mProperty_mCurrentEntityName ;
    outOperand1 = p->mObject.mProperty_mDestinationEntityName ;
    outOperand2 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationshipName ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyRelationshipList::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 GALGAS_lstring & outOperand3,
                                                 GALGAS_bool & outOperand4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyRelationshipList * p = (cCollectionElement_toManyRelationshipList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
    outOperand0 = p->mObject.mProperty_mCurrentEntityName ;
    outOperand1 = p->mObject.mProperty_mDestinationEntityName ;
    outOperand2 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationshipName ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipList GALGAS_toManyRelationshipList::add_operation (const GALGAS_toManyRelationshipList & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_toManyRelationshipList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipList GALGAS_toManyRelationshipList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_toManyRelationshipList result = GALGAS_toManyRelationshipList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipList GALGAS_toManyRelationshipList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_toManyRelationshipList result = GALGAS_toManyRelationshipList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipList GALGAS_toManyRelationshipList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_toManyRelationshipList result = GALGAS_toManyRelationshipList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyRelationshipList::plusAssign_operation (const GALGAS_toManyRelationshipList inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toManyRelationshipList::getter_mCurrentEntityNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyRelationshipList * p = (cCollectionElement_toManyRelationshipList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
    result = p->mObject.mProperty_mCurrentEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toManyRelationshipList::getter_mDestinationEntityNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyRelationshipList * p = (cCollectionElement_toManyRelationshipList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
    result = p->mObject.mProperty_mDestinationEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toManyRelationshipList::getter_mToManyRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyRelationshipList * p = (cCollectionElement_toManyRelationshipList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
    result = p->mObject.mProperty_mToManyRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toManyRelationshipList::getter_mInverseRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyRelationshipList * p = (cCollectionElement_toManyRelationshipList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
    result = p->mObject.mProperty_mInverseRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_toManyRelationshipList::getter_mCascadingAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyRelationshipList * p = (cCollectionElement_toManyRelationshipList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
    result = p->mObject.mProperty_mCascading ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_toManyRelationshipList::cEnumerator_toManyRelationshipList (const GALGAS_toManyRelationshipList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipList_2D_element cEnumerator_toManyRelationshipList::current (LOCATION_ARGS) const {
  const cCollectionElement_toManyRelationshipList * p = (const cCollectionElement_toManyRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_toManyRelationshipList::current_mCurrentEntityName (LOCATION_ARGS) const {
  const cCollectionElement_toManyRelationshipList * p = (const cCollectionElement_toManyRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
  return p->mObject.mProperty_mCurrentEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_toManyRelationshipList::current_mDestinationEntityName (LOCATION_ARGS) const {
  const cCollectionElement_toManyRelationshipList * p = (const cCollectionElement_toManyRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
  return p->mObject.mProperty_mDestinationEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_toManyRelationshipList::current_mToManyRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toManyRelationshipList * p = (const cCollectionElement_toManyRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
  return p->mObject.mProperty_mToManyRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_toManyRelationshipList::current_mInverseRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toManyRelationshipList * p = (const cCollectionElement_toManyRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
  return p->mObject.mProperty_mInverseRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_toManyRelationshipList::current_mCascading (LOCATION_ARGS) const {
  const cCollectionElement_toManyRelationshipList * p = (const cCollectionElement_toManyRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
  return p->mObject.mProperty_mCascading ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @toManyRelationshipList type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyRelationshipList ("toManyRelationshipList",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toManyRelationshipList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toManyRelationshipList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyRelationshipList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipList GALGAS_toManyRelationshipList::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipList result ;
  const GALGAS_toManyRelationshipList * p = (const GALGAS_toManyRelationshipList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyRelationshipList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension method '@toOneRelationshipList typeInventory'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_typeInventory (const GALGAS_toOneRelationshipList inObject,
                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                    C_Compiler * /* inCompiler */
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toOneRelationshipList temp_0 = inObject ;
  cEnumerator_toOneRelationshipList enumerator_4535 (temp_0, kENUMERATION_UP) ;
  while (enumerator_4535.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_4638 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_4535.current_mDestinationEntityName (HERE), joker_4638 COMMA_SOURCE_FILE ("relationships.galgas", 139)) ;
    }
    enumerator_4535.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Extension method '@toManyRelationshipList typeInventory'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_typeInventory (const GALGAS_toManyRelationshipList inObject,
                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                    C_Compiler * /* inCompiler */
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toManyRelationshipList temp_0 = inObject ;
  cEnumerator_toManyRelationshipList enumerator_4877 (temp_0, kENUMERATION_UP) ;
  while (enumerator_4877.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_4980 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_4877.current_mDestinationEntityName (HERE), joker_4980 COMMA_SOURCE_FILE ("relationships.galgas", 153)) ;
    }
    enumerator_4877.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Extension method '@toOneRelationshipList buildObservablePropertyMap'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_buildObservablePropertyMap (const GALGAS_toOneRelationshipList inObject,
                                                 const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                 GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toOneRelationshipList temp_0 = inObject ;
  cEnumerator_toOneRelationshipList enumerator_5448 (temp_0, kENUMERATION_UP) ;
  while (enumerator_5448.hasCurrentObject ()) {
    GALGAS_typeKind var_type_5538 ;
    GALGAS_actionMap var_actionMap_5553 ;
    constinArgument_inUnifiedTypeMap.method_searchKey (enumerator_5448.current_mDestinationEntityName (HERE), var_type_5538, var_actionMap_5553, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 171)) ;
    GALGAS_bool var_graphic_5590 ;
    switch (var_type_5538.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
    case GALGAS_typeKind::kEnum_fontType:
    case GALGAS_typeKind::kEnum_colorType:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_5448.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 176)), GALGAS_string ("a simple type cannot be used as entitytype"), fixItArray1  COMMA_SOURCE_FILE ("relationships.galgas", 176)) ;
        var_graphic_5590.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5448.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 178)), GALGAS_string ("an enumeration type cannot be used as entitytype"), fixItArray2  COMMA_SOURCE_FILE ("relationships.galgas", 178)) ;
        var_graphic_5590.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_classType:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_5448.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 180)), GALGAS_string ("a class type cannot be used as entitytype"), fixItArray3  COMMA_SOURCE_FILE ("relationships.galgas", 180)) ;
        var_graphic_5590.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_transientPropertyExternType:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_5448.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 182)), GALGAS_string ("the opposite type cannot be used as entity type"), fixItArray4  COMMA_SOURCE_FILE ("relationships.galgas", 182)) ;
        var_graphic_5590.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        const cEnumAssociatedValues_typeKind_entityType * extractPtr_6231 = (const cEnumAssociatedValues_typeKind_entityType *) (var_type_5538.unsafePointer ()) ;
        const GALGAS_bool extractedValue_isGraphic = extractPtr_6231->mAssociatedValue1 ;
        var_graphic_5590 = extractedValue_isGraphic ;
      }
      break ;
    }
    {
    ioArgument_ioObservableProperties.setter_insertKey (enumerator_5448.current_mToOneRelationshipName (HERE), GALGAS_propertyKind::constructor_toOne (var_type_5538, enumerator_5448.current_mDestinationEntityName (HERE), GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("relationships.galgas", 189)), var_graphic_5590  COMMA_SOURCE_FILE ("relationships.galgas", 189)), enumerator_5448.current_mInverseRelationshipName (HERE).getter_string (HERE), var_actionMap_5553, enumerator_5448.current_mCascading (HERE), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 187)) ;
    }
    enumerator_5448.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Extension method '@toManyRelationshipList buildObservablePropertyMap'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_buildObservablePropertyMap (const GALGAS_toManyRelationshipList inObject,
                                                 const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                 GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toManyRelationshipList temp_0 = inObject ;
  cEnumerator_toManyRelationshipList enumerator_6820 (temp_0, kENUMERATION_UP) ;
  while (enumerator_6820.hasCurrentObject ()) {
    GALGAS_typeKind var_type_6910 ;
    GALGAS_actionMap var_actionMap_6925 ;
    constinArgument_inUnifiedTypeMap.method_searchKey (enumerator_6820.current_mDestinationEntityName (HERE), var_type_6910, var_actionMap_6925, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 205)) ;
    GALGAS_bool var_graphic_6962 ;
    switch (var_type_6910.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
    case GALGAS_typeKind::kEnum_fontType:
    case GALGAS_typeKind::kEnum_colorType:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_6820.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 210)), GALGAS_string ("a simple type cannot be used as entitytype"), fixItArray1  COMMA_SOURCE_FILE ("relationships.galgas", 210)) ;
        var_graphic_6962.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_6820.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 212)), GALGAS_string ("an enumeration type cannot be used as entitytype"), fixItArray2  COMMA_SOURCE_FILE ("relationships.galgas", 212)) ;
        var_graphic_6962.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_classType:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_6820.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 214)), GALGAS_string ("a class type cannot be used as entitytype"), fixItArray3  COMMA_SOURCE_FILE ("relationships.galgas", 214)) ;
        var_graphic_6962.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_transientPropertyExternType:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_6820.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 216)), GALGAS_string ("the opposite type cannot be used as entity type"), fixItArray4  COMMA_SOURCE_FILE ("relationships.galgas", 216)) ;
        var_graphic_6962.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        const cEnumAssociatedValues_typeKind_entityType * extractPtr_7603 = (const cEnumAssociatedValues_typeKind_entityType *) (var_type_6910.unsafePointer ()) ;
        const GALGAS_bool extractedValue_isGraphic = extractPtr_7603->mAssociatedValue1 ;
        var_graphic_6962 = extractedValue_isGraphic ;
      }
      break ;
    }
    {
    ioArgument_ioObservableProperties.setter_insertKey (enumerator_6820.current_mToManyRelationshipName (HERE), GALGAS_propertyKind::constructor_toMany (var_type_6910, enumerator_6820.current_mDestinationEntityName (HERE), GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("relationships.galgas", 223)), var_graphic_6962, GALGAS_bool (true)  COMMA_SOURCE_FILE ("relationships.galgas", 223)), enumerator_6820.current_mInverseRelationshipName (HERE).getter_string (HERE), var_actionMap_6925, enumerator_6820.current_mCascading (HERE), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 221)) ;
    }
    enumerator_6820.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@toOneRelationshipList semanticAnalysis'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_semanticAnalysis (const GALGAS_toOneRelationshipList inObject,
                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                       GALGAS_toOneEntityRelationshipListForGeneration & outArgument_outToOneEntityRelationshipListForGeneration,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outToOneEntityRelationshipListForGeneration.drop () ; // Release 'out' argument
  outArgument_outToOneEntityRelationshipListForGeneration = GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (SOURCE_FILE ("relationships.galgas", 239)) ;
  const GALGAS_toOneRelationshipList temp_0 = inObject ;
  cEnumerator_toOneRelationshipList enumerator_8455 (temp_0, kENUMERATION_UP) ;
  while (enumerator_8455.hasCurrentObject ()) {
    GALGAS_typeKind var_type_8541 ;
    GALGAS_actionMap joker_8543 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mUnifiedTypeMap (HERE).method_searchKey (enumerator_8455.current_mDestinationEntityName (HERE), var_type_8541, joker_8543, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 241)) ;
    GALGAS_observablePropertyMap var_destinationEntityObservablePropertyMap_8706 ;
    GALGAS_objectKind joker_8714 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mEntityObservablePropertyMap (HERE).method_searchKey (enumerator_8455.current_mDestinationEntityName (HERE), var_destinationEntityObservablePropertyMap_8706, joker_8714, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 242)) ;
    outArgument_outToOneEntityRelationshipListForGeneration.addAssign_operation (enumerator_8455.current_mToOneRelationshipName (HERE).getter_string (HERE), var_type_8541, enumerator_8455.current_mInverseRelationshipName (HERE).getter_string (HERE), enumerator_8455.current_mInverseRelationMultiplicity (HERE), var_destinationEntityObservablePropertyMap_8706, enumerator_8455.current_mCascading (HERE)  COMMA_SOURCE_FILE ("relationships.galgas", 247)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_8455.current_mInverseRelationshipName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_propertyKind var_oppositeKind_9195 ;
      GALGAS_string var_oppositeOfOpposite_9236 ;
      GALGAS_actionMap joker_9247_2 ; // Joker input parameter
      GALGAS_bool joker_9247_1 ; // Joker input parameter
      var_destinationEntityObservablePropertyMap_8706.method_searchForInverseRelationship (enumerator_8455.current_mInverseRelationshipName (HERE), var_oppositeKind_9195, var_oppositeOfOpposite_9236, joker_9247_2, joker_9247_1, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 256)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_swiftTypeName (var_oppositeKind_9195, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 263)).objectCompare (enumerator_8455.current_mCurrentEntityName (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_8455.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 264)), GALGAS_string ("the type of the opposite property '").add_operation (enumerator_8455.current_mInverseRelationshipName (HERE).getter_string (SOURCE_FILE ("relationships.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 265)).add_operation (GALGAS_string ("' should be '"), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 265)).add_operation (enumerator_8455.current_mCurrentEntityName (HERE).getter_string (SOURCE_FILE ("relationships.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 266)).add_operation (GALGAS_string ("' (found '"), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 266)).add_operation (extensionGetter_swiftTypeName (var_oppositeKind_9195, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 266)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 266)), fixItArray3  COMMA_SOURCE_FILE ("relationships.galgas", 264)) ;
      }
      switch (var_oppositeKind_9195.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_8455.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 270)), GALGAS_string ("a property cannot be an opposite of a relationship"), fixItArray4  COMMA_SOURCE_FILE ("relationships.galgas", 270)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          const cEnumAssociatedValues_propertyKind_toMany * extractPtr_10102 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_oppositeKind_9195.unsafePointer ()) ;
          const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_10102->mAssociatedValue2 ;
          const enumGalgasBool test_5 = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("relationships.galgas", 272)).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (enumerator_8455.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 273)), GALGAS_string ("this relationship is transient, should be stored"), fixItArray6  COMMA_SOURCE_FILE ("relationships.galgas", 273)) ;
          }
          const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_8455.current_mInverseRelationMultiplicity (HERE).objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("relationships.galgas", 275)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_8455.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 276)), GALGAS_string ("inverse relationship multiplicity error (toMany <-> toOne)"), fixItArray8  COMMA_SOURCE_FILE ("relationships.galgas", 276)) ;
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          const cEnumAssociatedValues_propertyKind_toOne * extractPtr_10464 = (const cEnumAssociatedValues_propertyKind_toOne *) (var_oppositeKind_9195.unsafePointer ()) ;
          const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_10464->mAssociatedValue2 ;
          const enumGalgasBool test_9 = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("relationships.galgas", 279)).boolEnum () ;
          if (kBoolTrue == test_9) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_8455.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 280)), GALGAS_string ("this relationship is transient, should be stored"), fixItArray10  COMMA_SOURCE_FILE ("relationships.galgas", 280)) ;
          }
          const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, enumerator_8455.current_mInverseRelationMultiplicity (HERE).objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("relationships.galgas", 282)))).boolEnum () ;
          if (kBoolTrue == test_11) {
            TC_Array <C_FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (enumerator_8455.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 283)), GALGAS_string ("inverse relationship multiplicity error (toMany <-> toOne)"), fixItArray12  COMMA_SOURCE_FILE ("relationships.galgas", 283)) ;
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_8455.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 286)), GALGAS_string ("an array controller cannot be an opposite of a relationship"), fixItArray13  COMMA_SOURCE_FILE ("relationships.galgas", 286)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_8455.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 288)), GALGAS_string ("a selection controller cannot be an opposite of a relationship"), fixItArray14  COMMA_SOURCE_FILE ("relationships.galgas", 288)) ;
        }
        break ;
      }
      const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, var_oppositeOfOpposite_9236.objectCompare (enumerator_8455.current_mToOneRelationshipName (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_15) {
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_8455.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 291)), GALGAS_string ("inverse relationship does not name '").add_operation (enumerator_8455.current_mToOneRelationshipName (HERE).getter_string (SOURCE_FILE ("relationships.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 291)).add_operation (GALGAS_string ("' as opposite"), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 292)), fixItArray16  COMMA_SOURCE_FILE ("relationships.galgas", 291)) ;
      }
    }
    enumerator_8455.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@toManyRelationshipList semanticAnalysis'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_semanticAnalysis (const GALGAS_toManyRelationshipList inObject,
                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                       GALGAS_toManyEntityRelationshipListForGeneration & outArgument_outToManyEntityRelationshipListForGeneration,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outToManyEntityRelationshipListForGeneration.drop () ; // Release 'out' argument
  outArgument_outToManyEntityRelationshipListForGeneration = GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (SOURCE_FILE ("relationships.galgas", 304)) ;
  const GALGAS_toManyRelationshipList temp_0 = inObject ;
  cEnumerator_toManyRelationshipList enumerator_11358 (temp_0, kENUMERATION_UP) ;
  while (enumerator_11358.hasCurrentObject ()) {
    GALGAS_typeKind var_type_11444 ;
    GALGAS_actionMap joker_11446 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mUnifiedTypeMap (HERE).method_searchKey (enumerator_11358.current_mDestinationEntityName (HERE), var_type_11444, joker_11446, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 306)) ;
    GALGAS_observablePropertyMap var_destinationEntityObservablePropertyMap_11609 ;
    GALGAS_objectKind joker_11617 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mEntityObservablePropertyMap (HERE).method_searchKey (enumerator_11358.current_mDestinationEntityName (HERE), var_destinationEntityObservablePropertyMap_11609, joker_11617, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 307)) ;
    outArgument_outToManyEntityRelationshipListForGeneration.addAssign_operation (enumerator_11358.current_mToManyRelationshipName (HERE).getter_string (HERE), var_type_11444, enumerator_11358.current_mInverseRelationshipName (HERE).getter_string (HERE), var_destinationEntityObservablePropertyMap_11609, enumerator_11358.current_mCascading (HERE)  COMMA_SOURCE_FILE ("relationships.galgas", 312)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_11358.current_mInverseRelationshipName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_propertyKind var_oppositeKind_12064 ;
      GALGAS_string var_oppositeOfOpposite_12105 ;
      GALGAS_actionMap joker_12116_2 ; // Joker input parameter
      GALGAS_bool joker_12116_1 ; // Joker input parameter
      var_destinationEntityObservablePropertyMap_11609.method_searchForInverseRelationship (enumerator_11358.current_mInverseRelationshipName (HERE), var_oppositeKind_12064, var_oppositeOfOpposite_12105, joker_12116_2, joker_12116_1, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 320)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_swiftTypeName (var_oppositeKind_12064, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 326)).objectCompare (enumerator_11358.current_mCurrentEntityName (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_11358.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 327)), GALGAS_string ("the type of the opposite property '").add_operation (enumerator_11358.current_mInverseRelationshipName (HERE).getter_string (SOURCE_FILE ("relationships.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 328)).add_operation (GALGAS_string ("' should be '"), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 328)).add_operation (enumerator_11358.current_mCurrentEntityName (HERE).getter_string (SOURCE_FILE ("relationships.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 329)).add_operation (GALGAS_string ("' (found '"), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 329)).add_operation (extensionGetter_swiftTypeName (var_oppositeKind_12064, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 329)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 329)), fixItArray3  COMMA_SOURCE_FILE ("relationships.galgas", 327)) ;
      }
      switch (var_oppositeKind_12064.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_11358.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 333)), GALGAS_string ("a property cannot be an opposite of a relationship"), fixItArray4  COMMA_SOURCE_FILE ("relationships.galgas", 333)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          const cEnumAssociatedValues_propertyKind_toMany * extractPtr_12764 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_oppositeKind_12064.unsafePointer ()) ;
          const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_12764->mAssociatedValue2 ;
          const enumGalgasBool test_5 = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("relationships.galgas", 335)).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (enumerator_11358.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 336)), GALGAS_string ("this relationship is transient, should be stored"), fixItArray6  COMMA_SOURCE_FILE ("relationships.galgas", 336)) ;
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          const cEnumAssociatedValues_propertyKind_toOne * extractPtr_12954 = (const cEnumAssociatedValues_propertyKind_toOne *) (var_oppositeKind_12064.unsafePointer ()) ;
          const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_12954->mAssociatedValue2 ;
          const enumGalgasBool test_7 = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("relationships.galgas", 339)).boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_11358.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 340)), GALGAS_string ("this relationship is transient, should be stored"), fixItArray8  COMMA_SOURCE_FILE ("relationships.galgas", 340)) ;
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_11358.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 343)), GALGAS_string ("an array controller cannot be an opposite of a relationship"), fixItArray9  COMMA_SOURCE_FILE ("relationships.galgas", 343)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_11358.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 345)), GALGAS_string ("a selection controller cannot be an opposite of a relationship"), fixItArray10  COMMA_SOURCE_FILE ("relationships.galgas", 345)) ;
        }
        break ;
      }
      const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, var_oppositeOfOpposite_12105.objectCompare (enumerator_11358.current_mToManyRelationshipName (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_11358.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 348)), GALGAS_string ("inverse relationship does not name '").add_operation (enumerator_11358.current_mToManyRelationshipName (HERE).getter_string (SOURCE_FILE ("relationships.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 348)).add_operation (GALGAS_string ("' as opposite"), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 349)), fixItArray12  COMMA_SOURCE_FILE ("relationships.galgas", 348)) ;
      }
    }
    enumerator_11358.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Class for element of '@toOneEntityRelationshipListForGeneration' list                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_toOneEntityRelationshipListForGeneration : public cCollectionElement {
  public : GALGAS_toOneEntityRelationshipListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_toOneEntityRelationshipListForGeneration (const GALGAS_string & in_mToOneRelationshipName,
                                                                        const GALGAS_typeKind & in_mRelationshipType,
                                                                        const GALGAS_string & in_mOppositeRelationshipName,
                                                                        const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                                        const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                        const GALGAS_bool & in_mCascading
                                                                        COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_toOneEntityRelationshipListForGeneration (const GALGAS_toOneEntityRelationshipListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_toOneEntityRelationshipListForGeneration::cCollectionElement_toOneEntityRelationshipListForGeneration (const GALGAS_string & in_mToOneRelationshipName,
                                                                                                                          const GALGAS_typeKind & in_mRelationshipType,
                                                                                                                          const GALGAS_string & in_mOppositeRelationshipName,
                                                                                                                          const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                                                                                          const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                                                                          const GALGAS_bool & in_mCascading
                                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mToOneRelationshipName, in_mRelationshipType, in_mOppositeRelationshipName, in_mInverseRelationMultiplicity, in_mDestinationEntityObservablePropertyMap, in_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_toOneEntityRelationshipListForGeneration::cCollectionElement_toOneEntityRelationshipListForGeneration (const GALGAS_toOneEntityRelationshipListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mToOneRelationshipName, inElement.mProperty_mRelationshipType, inElement.mProperty_mOppositeRelationshipName, inElement.mProperty_mInverseRelationMultiplicity, inElement.mProperty_mDestinationEntityObservablePropertyMap, inElement.mProperty_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_toOneEntityRelationshipListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_toOneEntityRelationshipListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_toOneEntityRelationshipListForGeneration (mObject.mProperty_mToOneRelationshipName, mObject.mProperty_mRelationshipType, mObject.mProperty_mOppositeRelationshipName, mObject.mProperty_mInverseRelationMultiplicity, mObject.mProperty_mDestinationEntityObservablePropertyMap, mObject.mProperty_mCascading COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_toOneEntityRelationshipListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mToOneRelationshipName" ":" ;
  mObject.mProperty_mToOneRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRelationshipType" ":" ;
  mObject.mProperty_mRelationshipType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOppositeRelationshipName" ":" ;
  mObject.mProperty_mOppositeRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInverseRelationMultiplicity" ":" ;
  mObject.mProperty_mInverseRelationMultiplicity.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDestinationEntityObservablePropertyMap" ":" ;
  mObject.mProperty_mDestinationEntityObservablePropertyMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCascading" ":" ;
  mObject.mProperty_mCascading.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_toOneEntityRelationshipListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_toOneEntityRelationshipListForGeneration * operand = (cCollectionElement_toOneEntityRelationshipListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration::GALGAS_toOneEntityRelationshipListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration::GALGAS_toOneEntityRelationshipListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_toOneEntityRelationshipListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                            const GALGAS_typeKind & inOperand1,
                                                                                                                            const GALGAS_string & inOperand2,
                                                                                                                            const GALGAS_propertyMultiplicity & inOperand3,
                                                                                                                            const GALGAS_observablePropertyMap & inOperand4,
                                                                                                                            const GALGAS_bool & inOperand5
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_toOneEntityRelationshipListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_toOneEntityRelationshipListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_toOneEntityRelationshipListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                 const GALGAS_string & in_mToOneRelationshipName,
                                                                                 const GALGAS_typeKind & in_mRelationshipType,
                                                                                 const GALGAS_string & in_mOppositeRelationshipName,
                                                                                 const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                                                 const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                                 const GALGAS_bool & in_mCascading
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_toOneEntityRelationshipListForGeneration (in_mToOneRelationshipName,
                                                                              in_mRelationshipType,
                                                                              in_mOppositeRelationshipName,
                                                                              in_mInverseRelationMultiplicity,
                                                                              in_mDestinationEntityObservablePropertyMap,
                                                                              in_mCascading COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                           const GALGAS_typeKind & inOperand1,
                                                                           const GALGAS_string & inOperand2,
                                                                           const GALGAS_propertyMultiplicity & inOperand3,
                                                                           const GALGAS_observablePropertyMap & inOperand4,
                                                                           const GALGAS_bool & inOperand5
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toOneEntityRelationshipListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::setter_append (GALGAS_toOneEntityRelationshipListForGeneration_2D_element inElement,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toOneEntityRelationshipListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                            const GALGAS_typeKind inOperand1,
                                                                            const GALGAS_string inOperand2,
                                                                            const GALGAS_propertyMultiplicity inOperand3,
                                                                            const GALGAS_observablePropertyMap inOperand4,
                                                                            const GALGAS_bool inOperand5,
                                                                            const GALGAS_uint inInsertionIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toOneEntityRelationshipListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                            GALGAS_typeKind & outOperand1,
                                                                            GALGAS_string & outOperand2,
                                                                            GALGAS_propertyMultiplicity & outOperand3,
                                                                            GALGAS_observablePropertyMap & outOperand4,
                                                                            GALGAS_bool & outOperand5,
                                                                            const GALGAS_uint inRemoveIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mToOneRelationshipName ;
      outOperand1 = p->mObject.mProperty_mRelationshipType ;
      outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
      outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
      outOperand4 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
      outOperand5 = p->mObject.mProperty_mCascading ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                       GALGAS_typeKind & outOperand1,
                                                                       GALGAS_string & outOperand2,
                                                                       GALGAS_propertyMultiplicity & outOperand3,
                                                                       GALGAS_observablePropertyMap & outOperand4,
                                                                       GALGAS_bool & outOperand5,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand4 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand5 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                      GALGAS_typeKind & outOperand1,
                                                                      GALGAS_string & outOperand2,
                                                                      GALGAS_propertyMultiplicity & outOperand3,
                                                                      GALGAS_observablePropertyMap & outOperand4,
                                                                      GALGAS_bool & outOperand5,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand4 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand5 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                    GALGAS_typeKind & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    GALGAS_propertyMultiplicity & outOperand3,
                                                                    GALGAS_observablePropertyMap & outOperand4,
                                                                    GALGAS_bool & outOperand5,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand4 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand5 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                   GALGAS_typeKind & outOperand1,
                                                                   GALGAS_string & outOperand2,
                                                                   GALGAS_propertyMultiplicity & outOperand3,
                                                                   GALGAS_observablePropertyMap & outOperand4,
                                                                   GALGAS_bool & outOperand5,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand4 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand5 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::add_operation (const GALGAS_toOneEntityRelationshipListForGeneration & inOperand,
                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_toOneEntityRelationshipListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_toOneEntityRelationshipListForGeneration result = GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_toOneEntityRelationshipListForGeneration result = GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_toOneEntityRelationshipListForGeneration result = GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::plusAssign_operation (const GALGAS_toOneEntityRelationshipListForGeneration inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toOneEntityRelationshipListForGeneration::getter_mToOneRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mToOneRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_toOneEntityRelationshipListForGeneration::getter_mRelationshipTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mRelationshipType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toOneEntityRelationshipListForGeneration::getter_mOppositeRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mOppositeRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_toOneEntityRelationshipListForGeneration::getter_mInverseRelationMultiplicityAtIndex (const GALGAS_uint & inIndex,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_propertyMultiplicity result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mInverseRelationMultiplicity ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_toOneEntityRelationshipListForGeneration::getter_mDestinationEntityObservablePropertyMapAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                     C_Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_observablePropertyMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_toOneEntityRelationshipListForGeneration::getter_mCascadingAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mCascading ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_toOneEntityRelationshipListForGeneration::cEnumerator_toOneEntityRelationshipListForGeneration (const GALGAS_toOneEntityRelationshipListForGeneration & inEnumeratedObject,
                                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration_2D_element cEnumerator_toOneEntityRelationshipListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_toOneEntityRelationshipListForGeneration::current_mToOneRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mToOneRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cEnumerator_toOneEntityRelationshipListForGeneration::current_mRelationshipType (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mRelationshipType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_toOneEntityRelationshipListForGeneration::current_mOppositeRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mOppositeRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity cEnumerator_toOneEntityRelationshipListForGeneration::current_mInverseRelationMultiplicity (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mInverseRelationMultiplicity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap cEnumerator_toOneEntityRelationshipListForGeneration::current_mDestinationEntityObservablePropertyMap (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_toOneEntityRelationshipListForGeneration::current_mCascading (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mCascading ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @toOneEntityRelationshipListForGeneration type                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOneEntityRelationshipListForGeneration ("toOneEntityRelationshipListForGeneration",
                                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toOneEntityRelationshipListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneEntityRelationshipListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toOneEntityRelationshipListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneEntityRelationshipListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toOneEntityRelationshipListForGeneration result ;
  const GALGAS_toOneEntityRelationshipListForGeneration * p = (const GALGAS_toOneEntityRelationshipListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOneEntityRelationshipListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneEntityRelationshipListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_enumType::cEnumAssociatedValues_typeKind_enumType (const GALGAS_string & inAssociatedValue0,
                                                                                  const GALGAS_enumConstantMap & inAssociatedValue1
                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_enumType::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_entityType::cEnumAssociatedValues_typeKind_entityType (const GALGAS_string & inAssociatedValue0,
                                                                                      const GALGAS_bool & inAssociatedValue1
                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_entityType::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_classType::cEnumAssociatedValues_typeKind_classType (const GALGAS_string & inAssociatedValue0
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_classType::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_classType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_classType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_classType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_transientPropertyExternType::cEnumAssociatedValues_typeKind_transientPropertyExternType (const GALGAS_string & inAssociatedValue0
                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_transientPropertyExternType::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_transientPropertyExternType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_transientPropertyExternType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_transientPropertyExternType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind::GALGAS_typeKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_boolType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_boolType ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_integerType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_integerType ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_doubleType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_doubleType ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_stringType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_stringType ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_dateType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_dateType ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_fontType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_fontType ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_colorType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_colorType ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_enumType (const GALGAS_string & inAssociatedValue0,
                                                       const GALGAS_enumConstantMap & inAssociatedValue1
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_enumType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_enumType (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_enumType (GALGAS_string & outAssociatedValue0,
                                       GALGAS_enumConstantMap & outAssociatedValue1,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_enumType) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @typeKind enumType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_enumType * ptr = (const cEnumAssociatedValues_typeKind_enumType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_typeKind [12] = {
  "(not built)",
  "boolType",
  "integerType",
  "doubleType",
  "stringType",
  "dateType",
  "fontType",
  "colorType",
  "enumType",
  "entityType",
  "classType",
  "transientPropertyExternType"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isBoolType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isIntegerType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_integerType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isDoubleType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_doubleType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isStringType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_stringType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isDateType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_dateType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isFontType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fontType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isColorType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_colorType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isEnumType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_enumType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isEntityType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_entityType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isClassType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_classType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isTransientPropertyExternType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_transientPropertyExternType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::description (C_String & ioString,
                                   const int32_t inIndentation) const {
  ioString << "<enum @typeKind: " << gEnumNameArrayFor_typeKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @typeKind type                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeKind ("typeKind",
                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_typeKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_typeKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKind (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_observablePropertyMap::cMapElement_observablePropertyMap (const GALGAS_lstring & inKey,
                                                                      const GALGAS_propertyKind & in_mKind,
                                                                      const GALGAS_string & in_mInverseRelationshipName,
                                                                      const GALGAS_actionMap & in_mActionMap,
                                                                      const GALGAS_bool & in_mCascade
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mKind (in_mKind),
mProperty_mInverseRelationshipName (in_mInverseRelationshipName),
mProperty_mActionMap (in_mActionMap),
mProperty_mCascade (in_mCascade) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_observablePropertyMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mKind.isValid () && mProperty_mInverseRelationshipName.isValid () && mProperty_mActionMap.isValid () && mProperty_mCascade.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_observablePropertyMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_observablePropertyMap (mProperty_lkey, mProperty_mKind, mProperty_mInverseRelationshipName, mProperty_mActionMap, mProperty_mCascade COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_observablePropertyMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKind" ":" ;
  mProperty_mKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInverseRelationshipName" ":" ;
  mProperty_mInverseRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionMap" ":" ;
  mProperty_mActionMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCascade" ":" ;
  mProperty_mCascade.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_observablePropertyMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_observablePropertyMap * operand = (cMapElement_observablePropertyMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (operand->mProperty_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInverseRelationshipName.objectCompare (operand->mProperty_mInverseRelationshipName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionMap.objectCompare (operand->mProperty_mActionMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCascade.objectCompare (operand->mProperty_mCascade) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap::GALGAS_observablePropertyMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap::GALGAS_observablePropertyMap (const GALGAS_observablePropertyMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap & GALGAS_observablePropertyMap::operator = (const GALGAS_observablePropertyMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_observablePropertyMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_observablePropertyMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_observablePropertyMap::constructor_mapWithMapToOverride (const GALGAS_observablePropertyMap & inMapToOverride
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_observablePropertyMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_observablePropertyMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                        const GALGAS_propertyKind & inArgument0,
                                                        const GALGAS_string & inArgument1,
                                                        const GALGAS_actionMap & inArgument2,
                                                        const GALGAS_bool & inArgument3,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_observablePropertyMap * p = NULL ;
  macroMyNew (p, cMapElement_observablePropertyMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@observablePropertyMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::setter_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_propertyKind inArgument0,
                                                     GALGAS_string inArgument1,
                                                     GALGAS_actionMap inArgument2,
                                                     GALGAS_bool inArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_observablePropertyMap * p = NULL ;
  macroMyNew (p, cMapElement_observablePropertyMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' property is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_observablePropertyMap_searchKey = "the '%K' property is not declared" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::method_searchKey (GALGAS_lstring inKey,
                                                     GALGAS_propertyKind & outArgument0,
                                                     GALGAS_string & outArgument1,
                                                     GALGAS_actionMap & outArgument2,
                                                     GALGAS_bool & outArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_observablePropertyMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    outArgument0 = p->mProperty_mKind ;
    outArgument1 = p->mProperty_mInverseRelationshipName ;
    outArgument2 = p->mProperty_mActionMap ;
    outArgument3 = p->mProperty_mCascade ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_observablePropertyMap_searchForInverseRelationship = "the destination entity does not define the '%K' relationship" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::method_searchForInverseRelationship (GALGAS_lstring inKey,
                                                                        GALGAS_propertyKind & outArgument0,
                                                                        GALGAS_string & outArgument1,
                                                                        GALGAS_actionMap & outArgument2,
                                                                        GALGAS_bool & outArgument3,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_observablePropertyMap_searchForInverseRelationship
                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    outArgument0 = p->mProperty_mKind ;
    outArgument1 = p->mProperty_mInverseRelationshipName ;
    outArgument2 = p->mProperty_mActionMap ;
    outArgument3 = p->mProperty_mCascade ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_observablePropertyMap::getter_mKindForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) attributes ;
  GALGAS_propertyKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_observablePropertyMap::getter_mInverseRelationshipNameForKey (const GALGAS_string & inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    result = p->mProperty_mInverseRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap GALGAS_observablePropertyMap::getter_mActionMapForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) attributes ;
  GALGAS_actionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    result = p->mProperty_mActionMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_observablePropertyMap::getter_mCascadeForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    result = p->mProperty_mCascade ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::setter_setMKindForKey (GALGAS_propertyKind inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_observablePropertyMap * p = (cMapElement_observablePropertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    p->mProperty_mKind = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::setter_setMInverseRelationshipNameForKey (GALGAS_string inAttributeValue,
                                                                             GALGAS_string inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_observablePropertyMap * p = (cMapElement_observablePropertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    p->mProperty_mInverseRelationshipName = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::setter_setMActionMapForKey (GALGAS_actionMap inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_observablePropertyMap * p = (cMapElement_observablePropertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    p->mProperty_mActionMap = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::setter_setMCascadeForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_observablePropertyMap * p = (cMapElement_observablePropertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    p->mProperty_mCascade = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_observablePropertyMap * GALGAS_observablePropertyMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_observablePropertyMap * result = (cMapElement_observablePropertyMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_observablePropertyMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_observablePropertyMap::cEnumerator_observablePropertyMap (const GALGAS_observablePropertyMap & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap_2D_element cEnumerator_observablePropertyMap::current (LOCATION_ARGS) const {
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
  return GALGAS_observablePropertyMap_2D_element (p->mProperty_lkey, p->mProperty_mKind, p->mProperty_mInverseRelationshipName, p->mProperty_mActionMap, p->mProperty_mCascade) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_observablePropertyMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind cEnumerator_observablePropertyMap::current_mKind (LOCATION_ARGS) const {
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
  return p->mProperty_mKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_observablePropertyMap::current_mInverseRelationshipName (LOCATION_ARGS) const {
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
  return p->mProperty_mInverseRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap cEnumerator_observablePropertyMap::current_mActionMap (LOCATION_ARGS) const {
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
  return p->mProperty_mActionMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_observablePropertyMap::current_mCascade (LOCATION_ARGS) const {
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
  return p->mProperty_mCascade ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @observablePropertyMap type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyMap ("observablePropertyMap",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_observablePropertyMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_observablePropertyMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_observablePropertyMap::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyMap result ;
  const GALGAS_observablePropertyMap * p = (const GALGAS_observablePropertyMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_observablePropertyMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Class for element of '@toManyEntityRelationshipListForGeneration' list                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_toManyEntityRelationshipListForGeneration : public cCollectionElement {
  public : GALGAS_toManyEntityRelationshipListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_toManyEntityRelationshipListForGeneration (const GALGAS_string & in_mToManyRelationshipName,
                                                                         const GALGAS_typeKind & in_mRelationshipType,
                                                                         const GALGAS_string & in_mOppositeRelationshipName,
                                                                         const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                         const GALGAS_bool & in_mCascading
                                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_toManyEntityRelationshipListForGeneration (const GALGAS_toManyEntityRelationshipListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_toManyEntityRelationshipListForGeneration::cCollectionElement_toManyEntityRelationshipListForGeneration (const GALGAS_string & in_mToManyRelationshipName,
                                                                                                                            const GALGAS_typeKind & in_mRelationshipType,
                                                                                                                            const GALGAS_string & in_mOppositeRelationshipName,
                                                                                                                            const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                                                                            const GALGAS_bool & in_mCascading
                                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mToManyRelationshipName, in_mRelationshipType, in_mOppositeRelationshipName, in_mDestinationEntityObservablePropertyMap, in_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_toManyEntityRelationshipListForGeneration::cCollectionElement_toManyEntityRelationshipListForGeneration (const GALGAS_toManyEntityRelationshipListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mToManyRelationshipName, inElement.mProperty_mRelationshipType, inElement.mProperty_mOppositeRelationshipName, inElement.mProperty_mDestinationEntityObservablePropertyMap, inElement.mProperty_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_toManyEntityRelationshipListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_toManyEntityRelationshipListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_toManyEntityRelationshipListForGeneration (mObject.mProperty_mToManyRelationshipName, mObject.mProperty_mRelationshipType, mObject.mProperty_mOppositeRelationshipName, mObject.mProperty_mDestinationEntityObservablePropertyMap, mObject.mProperty_mCascading COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_toManyEntityRelationshipListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mToManyRelationshipName" ":" ;
  mObject.mProperty_mToManyRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRelationshipType" ":" ;
  mObject.mProperty_mRelationshipType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOppositeRelationshipName" ":" ;
  mObject.mProperty_mOppositeRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDestinationEntityObservablePropertyMap" ":" ;
  mObject.mProperty_mDestinationEntityObservablePropertyMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCascading" ":" ;
  mObject.mProperty_mCascading.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_toManyEntityRelationshipListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_toManyEntityRelationshipListForGeneration * operand = (cCollectionElement_toManyEntityRelationshipListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration::GALGAS_toManyEntityRelationshipListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration::GALGAS_toManyEntityRelationshipListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_toManyEntityRelationshipListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                              const GALGAS_typeKind & inOperand1,
                                                                                                                              const GALGAS_string & inOperand2,
                                                                                                                              const GALGAS_observablePropertyMap & inOperand3,
                                                                                                                              const GALGAS_bool & inOperand4
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_toManyEntityRelationshipListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_toManyEntityRelationshipListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_toManyEntityRelationshipListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                  const GALGAS_string & in_mToManyRelationshipName,
                                                                                  const GALGAS_typeKind & in_mRelationshipType,
                                                                                  const GALGAS_string & in_mOppositeRelationshipName,
                                                                                  const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                                  const GALGAS_bool & in_mCascading
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_toManyEntityRelationshipListForGeneration (in_mToManyRelationshipName,
                                                                               in_mRelationshipType,
                                                                               in_mOppositeRelationshipName,
                                                                               in_mDestinationEntityObservablePropertyMap,
                                                                               in_mCascading COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                            const GALGAS_typeKind & inOperand1,
                                                                            const GALGAS_string & inOperand2,
                                                                            const GALGAS_observablePropertyMap & inOperand3,
                                                                            const GALGAS_bool & inOperand4
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toManyEntityRelationshipListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::setter_append (GALGAS_toManyEntityRelationshipListForGeneration_2D_element inElement,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toManyEntityRelationshipListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                             const GALGAS_typeKind inOperand1,
                                                                             const GALGAS_string inOperand2,
                                                                             const GALGAS_observablePropertyMap inOperand3,
                                                                             const GALGAS_bool inOperand4,
                                                                             const GALGAS_uint inInsertionIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toManyEntityRelationshipListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                             GALGAS_typeKind & outOperand1,
                                                                             GALGAS_string & outOperand2,
                                                                             GALGAS_observablePropertyMap & outOperand3,
                                                                             GALGAS_bool & outOperand4,
                                                                             const GALGAS_uint inRemoveIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mToManyRelationshipName ;
      outOperand1 = p->mObject.mProperty_mRelationshipType ;
      outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
      outOperand3 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
      outOperand4 = p->mObject.mProperty_mCascading ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                        GALGAS_typeKind & outOperand1,
                                                                        GALGAS_string & outOperand2,
                                                                        GALGAS_observablePropertyMap & outOperand3,
                                                                        GALGAS_bool & outOperand4,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                       GALGAS_typeKind & outOperand1,
                                                                       GALGAS_string & outOperand2,
                                                                       GALGAS_observablePropertyMap & outOperand3,
                                                                       GALGAS_bool & outOperand4,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                     GALGAS_typeKind & outOperand1,
                                                                     GALGAS_string & outOperand2,
                                                                     GALGAS_observablePropertyMap & outOperand3,
                                                                     GALGAS_bool & outOperand4,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                    GALGAS_typeKind & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    GALGAS_observablePropertyMap & outOperand3,
                                                                    GALGAS_bool & outOperand4,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::add_operation (const GALGAS_toManyEntityRelationshipListForGeneration & inOperand,
                                                                                                                  C_Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_toManyEntityRelationshipListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_toManyEntityRelationshipListForGeneration result = GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_toManyEntityRelationshipListForGeneration result = GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_toManyEntityRelationshipListForGeneration result = GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::plusAssign_operation (const GALGAS_toManyEntityRelationshipListForGeneration inOperand,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toManyEntityRelationshipListForGeneration::getter_mToManyRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mToManyRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_toManyEntityRelationshipListForGeneration::getter_mRelationshipTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mRelationshipType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toManyEntityRelationshipListForGeneration::getter_mOppositeRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mOppositeRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_toManyEntityRelationshipListForGeneration::getter_mDestinationEntityObservablePropertyMapAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_observablePropertyMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_toManyEntityRelationshipListForGeneration::getter_mCascadingAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mCascading ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_toManyEntityRelationshipListForGeneration::cEnumerator_toManyEntityRelationshipListForGeneration (const GALGAS_toManyEntityRelationshipListForGeneration & inEnumeratedObject,
                                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration_2D_element cEnumerator_toManyEntityRelationshipListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_toManyEntityRelationshipListForGeneration::current_mToManyRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mToManyRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cEnumerator_toManyEntityRelationshipListForGeneration::current_mRelationshipType (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mRelationshipType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_toManyEntityRelationshipListForGeneration::current_mOppositeRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mOppositeRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap cEnumerator_toManyEntityRelationshipListForGeneration::current_mDestinationEntityObservablePropertyMap (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_toManyEntityRelationshipListForGeneration::current_mCascading (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mCascading ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @toManyEntityRelationshipListForGeneration type                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyEntityRelationshipListForGeneration ("toManyEntityRelationshipListForGeneration",
                                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toManyEntityRelationshipListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyEntityRelationshipListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toManyEntityRelationshipListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyEntityRelationshipListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_toManyEntityRelationshipListForGeneration result ;
  const GALGAS_toManyEntityRelationshipListForGeneration * p = (const GALGAS_toManyEntityRelationshipListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyEntityRelationshipListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyEntityRelationshipListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Class for element of '@simpleStoredPropertyList' list                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_simpleStoredPropertyList : public cCollectionElement {
  public : GALGAS_simpleStoredPropertyList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_simpleStoredPropertyList (const GALGAS_lstring & in_mPropertyTypeName,
                                                        const GALGAS_lstring & in_mPropertyName,
                                                        const GALGAS_abstractDefaultValue & in_mDefaultValue,
                                                        const GALGAS_bool & in_mNeedsValidation
                                                        COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_simpleStoredPropertyList (const GALGAS_simpleStoredPropertyList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_simpleStoredPropertyList::cCollectionElement_simpleStoredPropertyList (const GALGAS_lstring & in_mPropertyTypeName,
                                                                                          const GALGAS_lstring & in_mPropertyName,
                                                                                          const GALGAS_abstractDefaultValue & in_mDefaultValue,
                                                                                          const GALGAS_bool & in_mNeedsValidation
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyTypeName, in_mPropertyName, in_mDefaultValue, in_mNeedsValidation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_simpleStoredPropertyList::cCollectionElement_simpleStoredPropertyList (const GALGAS_simpleStoredPropertyList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyTypeName, inElement.mProperty_mPropertyName, inElement.mProperty_mDefaultValue, inElement.mProperty_mNeedsValidation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_simpleStoredPropertyList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_simpleStoredPropertyList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_simpleStoredPropertyList (mObject.mProperty_mPropertyTypeName, mObject.mProperty_mPropertyName, mObject.mProperty_mDefaultValue, mObject.mProperty_mNeedsValidation COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNeedsValidation" ":" ;
  mObject.mProperty_mNeedsValidation.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_simpleStoredPropertyList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_simpleStoredPropertyList * operand = (cCollectionElement_simpleStoredPropertyList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_simpleStoredPropertyList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList::GALGAS_simpleStoredPropertyList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList::GALGAS_simpleStoredPropertyList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList GALGAS_simpleStoredPropertyList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_simpleStoredPropertyList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList GALGAS_simpleStoredPropertyList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_abstractDefaultValue & inOperand2,
                                                                                            const GALGAS_bool & inOperand3
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_simpleStoredPropertyList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_simpleStoredPropertyList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_simpleStoredPropertyList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_lstring & in_mPropertyTypeName,
                                                                 const GALGAS_lstring & in_mPropertyName,
                                                                 const GALGAS_abstractDefaultValue & in_mDefaultValue,
                                                                 const GALGAS_bool & in_mNeedsValidation
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_simpleStoredPropertyList * p = NULL ;
  macroMyNew (p, cCollectionElement_simpleStoredPropertyList (in_mPropertyTypeName,
                                                              in_mPropertyName,
                                                              in_mDefaultValue,
                                                              in_mNeedsValidation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                           const GALGAS_lstring & inOperand1,
                                                           const GALGAS_abstractDefaultValue & inOperand2,
                                                           const GALGAS_bool & inOperand3
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_simpleStoredPropertyList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyList::setter_append (GALGAS_simpleStoredPropertyList_2D_element inElement,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_simpleStoredPropertyList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_lstring inOperand1,
                                                            const GALGAS_abstractDefaultValue inOperand2,
                                                            const GALGAS_bool inOperand3,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_simpleStoredPropertyList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_abstractDefaultValue & outOperand2,
                                                            GALGAS_bool & outOperand3,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
      outOperand0 = p->mObject.mProperty_mPropertyTypeName ;
      outOperand1 = p->mObject.mProperty_mPropertyName ;
      outOperand2 = p->mObject.mProperty_mDefaultValue ;
      outOperand3 = p->mObject.mProperty_mNeedsValidation ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_abstractDefaultValue & outOperand2,
                                                       GALGAS_bool & outOperand3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mDefaultValue ;
    outOperand3 = p->mObject.mProperty_mNeedsValidation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyList::setter_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_abstractDefaultValue & outOperand2,
                                                      GALGAS_bool & outOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mDefaultValue ;
    outOperand3 = p->mObject.mProperty_mNeedsValidation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyList::method_first (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_abstractDefaultValue & outOperand2,
                                                    GALGAS_bool & outOperand3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mDefaultValue ;
    outOperand3 = p->mObject.mProperty_mNeedsValidation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyList::method_last (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_abstractDefaultValue & outOperand2,
                                                   GALGAS_bool & outOperand3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mDefaultValue ;
    outOperand3 = p->mObject.mProperty_mNeedsValidation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList GALGAS_simpleStoredPropertyList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result = GALGAS_simpleStoredPropertyList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList GALGAS_simpleStoredPropertyList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result = GALGAS_simpleStoredPropertyList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList GALGAS_simpleStoredPropertyList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result = GALGAS_simpleStoredPropertyList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyList::plusAssign_operation (const GALGAS_simpleStoredPropertyList inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_simpleStoredPropertyList::getter_mNeedsValidationAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    result = p->mObject.mProperty_mNeedsValidation ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_simpleStoredPropertyList::cEnumerator_simpleStoredPropertyList (const GALGAS_simpleStoredPropertyList & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList_2D_element cEnumerator_simpleStoredPropertyList::current (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyList * p = (const cCollectionElement_simpleStoredPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_simpleStoredPropertyList::current_mPropertyTypeName (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyList * p = (const cCollectionElement_simpleStoredPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
  return p->mObject.mProperty_mPropertyTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_simpleStoredPropertyList::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyList * p = (const cCollectionElement_simpleStoredPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
  return p->mObject.mProperty_mPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue cEnumerator_simpleStoredPropertyList::current_mDefaultValue (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyList * p = (const cCollectionElement_simpleStoredPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
  return p->mObject.mProperty_mDefaultValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_simpleStoredPropertyList::current_mNeedsValidation (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyList * p = (const cCollectionElement_simpleStoredPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
  return p->mObject.mProperty_mNeedsValidation ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @simpleStoredPropertyList type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_simpleStoredPropertyList ("simpleStoredPropertyList",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_simpleStoredPropertyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleStoredPropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_simpleStoredPropertyList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_simpleStoredPropertyList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


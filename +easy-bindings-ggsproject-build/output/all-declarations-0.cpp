#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@_32_lstringlist' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement__32_lstringlist : public cCollectionElement {
  public: GGS__32_lstringlist_2E_element mObject ;

//--- Class functions
  public: cCollectionElement__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                              const GGS_lstring & in_mValue_31_
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement__32_lstringlist::cCollectionElement__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                                                        const GGS_lstring & in_mValue_31_
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue_30_, in_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement__32_lstringlist::cCollectionElement__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mValue_30_, inElement.mProperty_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement__32_lstringlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement__32_lstringlist::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement__32_lstringlist (mObject.mProperty_mValue_30_, mObject.mProperty_mValue_31_ COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement__32_lstringlist::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue0" ":") ;
  mObject.mProperty_mValue_30_.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue1" ":") ;
  mObject.mProperty_mValue_31_.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS__32_lstringlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS__32_lstringlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::enterElement (const GGS__32_lstringlist_2E_element & inValue,
                                        Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement__32_lstringlist (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                   const GGS_lstring & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS__32_lstringlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS__32_lstringlist::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GGS_lstring & in_mValue_30_,
                                                     const GGS_lstring & in_mValue_31_
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = nullptr ;
  macroMyNew (p, cCollectionElement__32_lstringlist (in_mValue_30_,
                                                     in_mValue_31_ COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::addAssign_operation (const GGS_lstring & inOperand0,
                                               const GGS_lstring & inOperand1
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement__32_lstringlist (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_append (const GGS_lstring inOperand0,
                                         const GGS_lstring inOperand1,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement__32_lstringlist (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                const GGS_lstring inOperand1,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement__32_lstringlist (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
      outOperand0 = p->mObject.mProperty_mValue_30_ ;
      outOperand1 = p->mObject.mProperty_mValue_31_ ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_popFirst (GGS_lstring & outOperand0,
                                           GGS_lstring & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_popLast (GGS_lstring & outOperand0,
                                          GGS_lstring & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::method_first (GGS_lstring & outOperand0,
                                        GGS_lstring & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::method_last (GGS_lstring & outOperand0,
                                       GGS_lstring & outOperand1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::add_operation (const GGS__32_lstringlist & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result = GGS__32_lstringlist::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result = GGS__32_lstringlist::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result = GGS__32_lstringlist::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::plusAssign_operation (const GGS__32_lstringlist inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_setMValue_30_AtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue_30_ = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS__32_lstringlist::getter_mValue_30_AtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    result = p->mObject.mProperty_mValue_30_ ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_setMValue_31_AtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue_31_ = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS__32_lstringlist::getter_mValue_31_AtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    result = p->mObject.mProperty_mValue_31_ ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator__32_lstringlist::cEnumerator__32_lstringlist (const GGS__32_lstringlist & inEnumeratedObject,
                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element cEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject.mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject.mProperty_mValue_31_ ;
}




//--------------------------------------------------------------------------------------------------
//
//     @2lstringlist generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist ("2lstringlist",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS__32_lstringlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__32_lstringlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__32_lstringlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist result ;
  const GGS__32_lstringlist * p = (const GGS__32_lstringlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__32_lstringlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "unicode_character_cpp.h"
#include "scanner_actions.h"
#include "cLexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

cTokenFor_easyBindings_5F_lexique::cTokenFor_easyBindings_5F_lexique (void) :
mLexicalAttribute_floatValue (),
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value () {
}

//--------------------------------------------------------------------------------------------------

Lexique_easyBindings_5F_lexique::Lexique_easyBindings_5F_lexique (Compiler * inCallerCompiler,
                                                                  const String & inSourceFileName
                                                                  COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

Lexique_easyBindings_5F_lexique::Lexique_easyBindings_5F_lexique (Compiler * inCallerCompiler,
                                                                  const String & inSourceString,
                                                                  const String & inStringForError
                                                                  COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//--------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_easyBindings_5F_lexique_attributeError = "in an attribute name, a letter, a digit or a dot should follow the '@' character" ;

static const char * gLexicalMessage_easyBindings_5F_lexique_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_easyBindings_5F_lexique_floatNumberConversionError = "invalid float number" ;

static const char * gLexicalMessage_easyBindings_5F_lexique_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_easyBindings_5F_lexique_internalError = "internal error" ;

//--------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//--------------------------------------------------------------------------------------------------

String Lexique_easyBindings_5F_lexique::getMessageForTerminal (const int32_t inTerminalIndex) const {
  String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 102)) {
    static const char * syntaxErrorMessageArray [102] = {kEndOfSourceLexicalErrorMessage,
        "an identifier (beginning with a lower-case letter)",
        "an identifier (beginning with a upper-case letter)",
        "an attribute @...",
        "a binding name (identifier prefixed by '$')",
        "a controller name (identifier prefixed by '#')",
        "a view name (identifier prefixed by '\\')",
        "a 32-bit unsigned decimal number",
        "a float number",
        "a character string constant \"...\"",
        "a comment",
        "the 'abstract' keyword",
        "the 'action' keyword",
        "the 'all' keyword",
        "the 'arrayController' keyword",
        "the 'autolayout' keyword",
        "the 'autoLayoutDocument' keyword",
        "the 'binding' keyword",
        "the 'calledBy' keyword",
        "the 'class' keyword",
        "the 'classForSwift' keyword",
        "the 'column' keyword",
        "the 'computed' keyword",
        "the 'configurator' keyword",
        "the 'default' keyword",
        "the 'dependsFrom' keyword",
        "the 'divider' keyword",
        "the 'enum' keyword",
        "the 'editableColumn' keyword",
        "the 'entity' keyword",
        "the 'extern' keyword",
        "the 'externDelegate' keyword",
        "the 'externFunc' keyword",
        "the 'func' keyword",
        "the 'graphic' keyword",
        "the 'graphviz' keyword",
        "the 'handlingOpposite' keyword",
        "the 'hStack' keyword",
        "the 'include' keyword",
        "the 'inverse' keyword",
        "the 'linker' keyword",
        "the 'mainxib' keyword",
        "the 'menuItem' keyword",
        "the 'no' keyword",
        "the 'newView' keyword",
        "the 'none' keyword",
        "the 'one' keyword",
        "the 'outlet' keyword",
        "the 'outletArray' keyword",
        "the 'override' keyword",
        "the 'prefs' keyword",
        "the 'property' keyword",
        "the 'proxy' keyword",
        "the 'root' keyword",
        "the 'selectionController' keyword",
        "the 'self' keyword",
        "the 'separator' keyword",
        "the 'signature' keyword",
        "the 'sortkey' keyword",
        "the 'space' keyword",
        "the 'stackView' keyword",
        "the 'struct' keyword",
        "the 'super' keyword",
        "the 'tableViewController' keyword",
        "the 'toMany' keyword",
        "the 'toOne' keyword",
        "the 'transient' keyword",
        "the 'typeView' keyword",
        "the 'version' keyword",
        "the 'vStack' keyword",
        "the 'versionShouldChange' keyword",
        "the 'view' keyword",
        "the 'weak' keyword",
        "the 'xcodeproject' keyword",
        "the 'yes' keyword",
        "the '$enabled' keyword",
        "the '$graphicController' keyword",
        "the '$hidden' keyword",
        "the '$tableValue' keyword",
        "the '$run' keyword",
        "the ':' delimitor",
        "the ',' delimitor",
        "the ';' delimitor",
        "the '!' delimitor",
        "the '[' delimitor",
        "the ']' delimitor",
        "the '{' delimitor",
        "the '}' delimitor",
        "the '(' delimitor",
        "the ')' delimitor",
        "the '.' delimitor",
        "the '|' delimitor",
        "the '&' delimitor",
        "the '<' delimitor",
        "the '>' delimitor",
        "the '<=' delimitor",
        "the '>=' delimitor",
        "the '!=' delimitor",
        "the '==' delimitor",
        "the '^' delimitor",
        "the '-' delimitor",
        "the '=' delimitor"
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$!$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__21_ = {
  TO_UNICODE ('!'),
} ;

//--- Unicode string for '$!=$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__21__3D_ = {
  TO_UNICODE ('!'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$&$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__26_ = {
  TO_UNICODE ('&'),
} ;

//--- Unicode string for '$($'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__28_ = {
  TO_UNICODE ('('),
} ;

//--- Unicode string for '$)$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__29_ = {
  TO_UNICODE (')'),
} ;

//--- Unicode string for '$,$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__2C_ = {
  TO_UNICODE (','),
} ;

//--- Unicode string for '$-$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__2D_ = {
  TO_UNICODE ('-'),
} ;

//--- Unicode string for '$.$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__2E_ = {
  TO_UNICODE ('.'),
} ;

//--- Unicode string for '$//$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__2F__2F_ = {
  TO_UNICODE ('/'),
  TO_UNICODE ('/'),
} ;

//--- Unicode string for '$:$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__3A_ = {
  TO_UNICODE (':'),
} ;

//--- Unicode string for '$;$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__3B_ = {
  TO_UNICODE (';'),
} ;

//--- Unicode string for '$<$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__3C_ = {
  TO_UNICODE ('<'),
} ;

//--- Unicode string for '$<=$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__3C__3D_ = {
  TO_UNICODE ('<'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$=$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__3D_ = {
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$==$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__3D__3D_ = {
  TO_UNICODE ('='),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$>$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__3E_ = {
  TO_UNICODE ('>'),
} ;

//--- Unicode string for '$>=$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__3E__3D_ = {
  TO_UNICODE ('>'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$[$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__5B_ = {
  TO_UNICODE ('['),
} ;

//--- Unicode string for '$\\\"$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__5C__22_ = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('\"'),
} ;

//--- Unicode string for '$\\n$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__5C_n = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$]$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__5D_ = {
  TO_UNICODE (']'),
} ;

//--- Unicode string for '$^$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__5E_ = {
  TO_UNICODE ('^'),
} ;

//--- Unicode string for '$abstract$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_abstract = {
  TO_UNICODE ('a'),
  TO_UNICODE ('b'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$action$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_action = {
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$all$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_all = {
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
} ;

//--- Unicode string for '$arrayController$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_arrayController = {
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
} ;

//--- Unicode string for '$autoLayoutDocument$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_autoLayoutDocument = {
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
} ;

//--- Unicode string for '$autolayout$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_autolayout = {
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
} ;

//--- Unicode string for '$binding$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_binding = {
  TO_UNICODE ('b'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
} ;

//--- Unicode string for '$calledBy$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_calledBy = {
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE ('B'),
  TO_UNICODE ('y'),
} ;

//--- Unicode string for '$class$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_class = {
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
} ;

//--- Unicode string for '$classForSwift$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_classForSwift = {
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
} ;

//--- Unicode string for '$column$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_column = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$computed$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_computed = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
} ;

//--- Unicode string for '$configurator$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_configurator = {
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
} ;

//--- Unicode string for '$default$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_default = {
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$dependsFrom$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_dependsFrom = {
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
} ;

//--- Unicode string for '$divider$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_divider = {
  TO_UNICODE ('d'),
  TO_UNICODE ('i'),
  TO_UNICODE ('v'),
  TO_UNICODE ('i'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$editableColumn$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_editableColumn = {
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
} ;

//--- Unicode string for '$enabled$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_enabled = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('a'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
} ;

//--- Unicode string for '$entity$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_entity = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('y'),
} ;

//--- Unicode string for '$enum$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_enum = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
} ;

//--- Unicode string for '$extern$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_extern = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$externDelegate$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_externDelegate = {
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
} ;

//--- Unicode string for '$externFunc$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_externFunc = {
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
} ;

//--- Unicode string for '$func$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_func = {
  TO_UNICODE ('f'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
} ;

//--- Unicode string for '$graphic$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_graphic = {
  TO_UNICODE ('g'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
} ;

//--- Unicode string for '$graphicController$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_graphicController = {
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
} ;

//--- Unicode string for '$graphviz$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_graphviz = {
  TO_UNICODE ('g'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('h'),
  TO_UNICODE ('v'),
  TO_UNICODE ('i'),
  TO_UNICODE ('z'),
} ;

//--- Unicode string for '$hStack$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_hStack = {
  TO_UNICODE ('h'),
  TO_UNICODE ('S'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
} ;

//--- Unicode string for '$handlingOpposite$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_handlingOpposite = {
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
} ;

//--- Unicode string for '$hidden$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_hidden = {
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('d'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$include$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_include = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$inverse$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_inverse = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$linker$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_linker = {
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$mainxib$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_mainxib = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('x'),
  TO_UNICODE ('i'),
  TO_UNICODE ('b'),
} ;

//--- Unicode string for '$menuItem$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_menuItem = {
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('I'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
} ;

//--- Unicode string for '$newView$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_newView = {
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
  TO_UNICODE ('w'),
  TO_UNICODE ('V'),
  TO_UNICODE ('i'),
  TO_UNICODE ('e'),
  TO_UNICODE ('w'),
} ;

//--- Unicode string for '$no$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_no = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
} ;

//--- Unicode string for '$none$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_none = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$one$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_one = {
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$outlet$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_outlet = {
  TO_UNICODE ('o'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$outletArray$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_outletArray = {
  TO_UNICODE ('o'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('A'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('y'),
} ;

//--- Unicode string for '$override$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_override = {
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$prefs$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_prefs = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('s'),
} ;

//--- Unicode string for '$property$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_property = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE ('y'),
} ;

//--- Unicode string for '$proxy$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_proxy = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('x'),
  TO_UNICODE ('y'),
} ;

//--- Unicode string for '$root$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_root = {
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$run$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_run = {
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$selectionController$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_selectionController = {
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
} ;

//--- Unicode string for '$self$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_self = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$separator$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_separator = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$signature$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_signature = {
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('g'),
  TO_UNICODE ('n'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('u'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$sortkey$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_sortkey = {
  TO_UNICODE ('s'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('y'),
} ;

//--- Unicode string for '$space$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_space = {
  TO_UNICODE ('s'),
  TO_UNICODE ('p'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$stackView$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_stackView = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE ('V'),
  TO_UNICODE ('i'),
  TO_UNICODE ('e'),
  TO_UNICODE ('w'),
} ;

//--- Unicode string for '$struct$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_struct = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$super$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_super = {
  TO_UNICODE ('s'),
  TO_UNICODE ('u'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$tableValue$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_tableValue = {
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
} ;

//--- Unicode string for '$tableViewController$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_tableViewController = {
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
} ;

//--- Unicode string for '$toMany$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_toMany = {
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('M'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('y'),
} ;

//--- Unicode string for '$toOne$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_toOne = {
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('O'),
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$transient$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_transient = {
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$typeView$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_typeView = {
  TO_UNICODE ('t'),
  TO_UNICODE ('y'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('V'),
  TO_UNICODE ('i'),
  TO_UNICODE ('e'),
  TO_UNICODE ('w'),
} ;

//--- Unicode string for '$vStack$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_vStack = {
  TO_UNICODE ('v'),
  TO_UNICODE ('S'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
} ;

//--- Unicode string for '$version$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_version = {
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$versionShouldChange$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_versionShouldChange = {
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
} ;

//--- Unicode string for '$view$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_view = {
  TO_UNICODE ('v'),
  TO_UNICODE ('i'),
  TO_UNICODE ('e'),
  TO_UNICODE ('w'),
} ;

//--- Unicode string for '$weak$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_weak = {
  TO_UNICODE ('w'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('k'),
} ;

//--- Unicode string for '$xcodeproject$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_xcodeproject = {
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
} ;

//--- Unicode string for '$yes$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_yes = {
  TO_UNICODE ('y'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
} ;

//--- Unicode string for '${$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__7B_ = {
  TO_UNICODE ('{'),
} ;

//--- Unicode string for '$|$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__7C_ = {
  TO_UNICODE ('|'),
} ;

//--- Unicode string for '$}$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__7D_ = {
  TO_UNICODE ('}'),
} ;

//--------------------------------------------------------------------------------------------------
//             Key words table 'delimitorsList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_easyBindings_5F_lexique_delimitorsList = 22 ;

static const C_unicode_lexique_table_entry ktable_for_easyBindings_5F_lexique_delimitorsList [ktable_size_easyBindings_5F_lexique_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__21_, Lexique_easyBindings_5F_lexique::kToken__21_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__26_, Lexique_easyBindings_5F_lexique::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__28_, Lexique_easyBindings_5F_lexique::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__29_, Lexique_easyBindings_5F_lexique::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__2C_, Lexique_easyBindings_5F_lexique::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__2D_, Lexique_easyBindings_5F_lexique::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__2E_, Lexique_easyBindings_5F_lexique::kToken__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3A_, Lexique_easyBindings_5F_lexique::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3B_, Lexique_easyBindings_5F_lexique::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3C_, Lexique_easyBindings_5F_lexique::kToken__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3D_, Lexique_easyBindings_5F_lexique::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3E_, Lexique_easyBindings_5F_lexique::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__5B_, Lexique_easyBindings_5F_lexique::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__5D_, Lexique_easyBindings_5F_lexique::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__5E_, Lexique_easyBindings_5F_lexique::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__7B_, Lexique_easyBindings_5F_lexique::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__7C_, Lexique_easyBindings_5F_lexique::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__7D_, Lexique_easyBindings_5F_lexique::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__21__3D_, Lexique_easyBindings_5F_lexique::kToken__21__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3C__3D_, Lexique_easyBindings_5F_lexique::kToken__3C__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3D__3D_, Lexique_easyBindings_5F_lexique::kToken__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3E__3D_, Lexique_easyBindings_5F_lexique::kToken__3E__3D_)
} ;

int32_t Lexique_easyBindings_5F_lexique::search_into_delimitorsList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_easyBindings_5F_lexique_delimitorsList, ktable_size_easyBindings_5F_lexique_delimitorsList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'lowerCaseKeyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_easyBindings_5F_lexique_lowerCaseKeyWordList = 64 ;

static const C_unicode_lexique_table_entry ktable_for_easyBindings_5F_lexique_lowerCaseKeyWordList [ktable_size_easyBindings_5F_lexique_lowerCaseKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_no, Lexique_easyBindings_5F_lexique::kToken_no),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_all, Lexique_easyBindings_5F_lexique::kToken_all),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_one, Lexique_easyBindings_5F_lexique::kToken_one),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_yes, Lexique_easyBindings_5F_lexique::kToken_yes),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_enum, Lexique_easyBindings_5F_lexique::kToken_enum),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_func, Lexique_easyBindings_5F_lexique::kToken_func),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_none, Lexique_easyBindings_5F_lexique::kToken_none),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_root, Lexique_easyBindings_5F_lexique::kToken_root),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_self, Lexique_easyBindings_5F_lexique::kToken_self),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_view, Lexique_easyBindings_5F_lexique::kToken_view),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_weak, Lexique_easyBindings_5F_lexique::kToken_weak),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_class, Lexique_easyBindings_5F_lexique::kToken_class),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_prefs, Lexique_easyBindings_5F_lexique::kToken_prefs),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_proxy, Lexique_easyBindings_5F_lexique::kToken_proxy),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_space, Lexique_easyBindings_5F_lexique::kToken_space),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_super, Lexique_easyBindings_5F_lexique::kToken_super),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_toOne, Lexique_easyBindings_5F_lexique::kToken_toOne),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_action, Lexique_easyBindings_5F_lexique::kToken_action),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_column, Lexique_easyBindings_5F_lexique::kToken_column),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_entity, Lexique_easyBindings_5F_lexique::kToken_entity),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_extern, Lexique_easyBindings_5F_lexique::kToken_extern),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_hStack, Lexique_easyBindings_5F_lexique::kToken_hStack),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_linker, Lexique_easyBindings_5F_lexique::kToken_linker),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_outlet, Lexique_easyBindings_5F_lexique::kToken_outlet),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_struct, Lexique_easyBindings_5F_lexique::kToken_struct),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_toMany, Lexique_easyBindings_5F_lexique::kToken_toMany),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_vStack, Lexique_easyBindings_5F_lexique::kToken_vStack),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_binding, Lexique_easyBindings_5F_lexique::kToken_binding),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_default, Lexique_easyBindings_5F_lexique::kToken_default),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_divider, Lexique_easyBindings_5F_lexique::kToken_divider),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_graphic, Lexique_easyBindings_5F_lexique::kToken_graphic),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_include, Lexique_easyBindings_5F_lexique::kToken_include),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_inverse, Lexique_easyBindings_5F_lexique::kToken_inverse),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_mainxib, Lexique_easyBindings_5F_lexique::kToken_mainxib),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_newView, Lexique_easyBindings_5F_lexique::kToken_newView),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_sortkey, Lexique_easyBindings_5F_lexique::kToken_sortkey),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_version, Lexique_easyBindings_5F_lexique::kToken_version),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_abstract, Lexique_easyBindings_5F_lexique::kToken_abstract),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_calledBy, Lexique_easyBindings_5F_lexique::kToken_calledBy),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_computed, Lexique_easyBindings_5F_lexique::kToken_computed),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_graphviz, Lexique_easyBindings_5F_lexique::kToken_graphviz),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_menuItem, Lexique_easyBindings_5F_lexique::kToken_menuItem),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_override, Lexique_easyBindings_5F_lexique::kToken_override),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_property, Lexique_easyBindings_5F_lexique::kToken_property),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_typeView, Lexique_easyBindings_5F_lexique::kToken_typeView),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_separator, Lexique_easyBindings_5F_lexique::kToken_separator),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_signature, Lexique_easyBindings_5F_lexique::kToken_signature),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_stackView, Lexique_easyBindings_5F_lexique::kToken_stackView),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_transient, Lexique_easyBindings_5F_lexique::kToken_transient),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_autolayout, Lexique_easyBindings_5F_lexique::kToken_autolayout),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_externFunc, Lexique_easyBindings_5F_lexique::kToken_externFunc),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_dependsFrom, Lexique_easyBindings_5F_lexique::kToken_dependsFrom),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_outletArray, Lexique_easyBindings_5F_lexique::kToken_outletArray),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_configurator, Lexique_easyBindings_5F_lexique::kToken_configurator),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_xcodeproject, Lexique_easyBindings_5F_lexique::kToken_xcodeproject),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_classForSwift, Lexique_easyBindings_5F_lexique::kToken_classForSwift),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_editableColumn, Lexique_easyBindings_5F_lexique::kToken_editableColumn),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_externDelegate, Lexique_easyBindings_5F_lexique::kToken_externDelegate),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_arrayController, Lexique_easyBindings_5F_lexique::kToken_arrayController),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_handlingOpposite, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_autoLayoutDocument, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_selectionController, Lexique_easyBindings_5F_lexique::kToken_selectionController),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_tableViewController, Lexique_easyBindings_5F_lexique::kToken_tableViewController),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_versionShouldChange, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange)
} ;

int32_t Lexique_easyBindings_5F_lexique::search_into_lowerCaseKeyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_easyBindings_5F_lexique_lowerCaseKeyWordList, ktable_size_easyBindings_5F_lexique_lowerCaseKeyWordList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'reservedBindingNameKeyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_easyBindings_5F_lexique_reservedBindingNameKeyWordList = 5 ;

static const C_unicode_lexique_table_entry ktable_for_easyBindings_5F_lexique_reservedBindingNameKeyWordList [ktable_size_easyBindings_5F_lexique_reservedBindingNameKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_run, Lexique_easyBindings_5F_lexique::kToken_run),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_hidden, Lexique_easyBindings_5F_lexique::kToken_hidden),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_enabled, Lexique_easyBindings_5F_lexique::kToken_enabled),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_tableValue, Lexique_easyBindings_5F_lexique::kToken_tableValue),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_graphicController, Lexique_easyBindings_5F_lexique::kToken_graphicController)
} ;

int32_t Lexique_easyBindings_5F_lexique::search_into_reservedBindingNameKeyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_easyBindings_5F_lexique_reservedBindingNameKeyWordList, ktable_size_easyBindings_5F_lexique_reservedBindingNameKeyWordList) ;
}


//--------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//--------------------------------------------------------------------------------------------------

String Lexique_easyBindings_5F_lexique::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_easyBindings_5F_lexique * ptr = (const cTokenFor_easyBindings_5F_lexique *) inTokenPtr ;
  String s ;
  if (ptr == nullptr) {
    s.appendCString ("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString ("$$") ;
      break ;
    case kToken_identifier:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("identifier") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_Identifier:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("Identifier") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__40_attribute:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("@attribute") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_bindingName:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("bindingName") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_controllerName:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("controllerName") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_viewName:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("viewName") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_literal_5F_integer:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("literal_integer") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendUnsigned (ptr->mLexicalAttribute_uint_33__32_value) ;
      break ;
    case kToken_literal_5F_double:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("literal_double") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendDouble (ptr->mLexicalAttribute_floatValue) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_literal_5F_string:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("literal_string") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("comment") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_abstract:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("abstract") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_action:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("action") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_all:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("all") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_arrayController:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("arrayController") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_autolayout:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("autolayout") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_autoLayoutDocument:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("autoLayoutDocument") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_binding:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("binding") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_calledBy:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("calledBy") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_class:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("class") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_classForSwift:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("classForSwift") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_column:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("column") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_computed:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("computed") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_configurator:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("configurator") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_default:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("default") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_dependsFrom:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("dependsFrom") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_divider:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("divider") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_enum:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("enum") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_editableColumn:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("editableColumn") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_entity:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("entity") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_extern:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("extern") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_externDelegate:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("externDelegate") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_externFunc:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("externFunc") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_func:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("func") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_graphic:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("graphic") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_graphviz:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("graphviz") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_handlingOpposite:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("handlingOpposite") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_hStack:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("hStack") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_include:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("include") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_inverse:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("inverse") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_linker:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("linker") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_mainxib:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("mainxib") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_menuItem:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("menuItem") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_no:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("no") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_newView:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("newView") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_none:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("none") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_one:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("one") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_outlet:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("outlet") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_outletArray:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("outletArray") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_override:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("override") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_prefs:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("prefs") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_property:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("property") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_proxy:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("proxy") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_root:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("root") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_selectionController:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("selectionController") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_self:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("self") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_separator:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("separator") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_signature:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("signature") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_sortkey:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("sortkey") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_space:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("space") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_stackView:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("stackView") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_struct:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("struct") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_super:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("super") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_tableViewController:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("tableViewController") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_toMany:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("toMany") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_toOne:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("toOne") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_transient:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("transient") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_typeView:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("typeView") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_version:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("version") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_vStack:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("vStack") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_versionShouldChange:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("versionShouldChange") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_view:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("view") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_weak:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("weak") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_xcodeproject:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("xcodeproject") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_yes:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("yes") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_enabled:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("enabled") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_graphicController:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("graphicController") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_hidden:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("hidden") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_tableValue:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("tableValue") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_run:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("run") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3A_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (":") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (",") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (";") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__21_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("!") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__5B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("[") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__5D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("]") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("{") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("}") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__28_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("(") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__29_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (")") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (".") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("|") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__26_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("&") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("<") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (">") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3C__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("<=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3E__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (">=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__21__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("!=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3D__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("==") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__5E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("^") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("-") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//               INTERNAL PARSE LEXICAL TOKEN                                         
//--------------------------------------------------------------------------------------------------

void Lexique_easyBindings_5F_lexique::internalParseLexicalToken (cTokenFor_easyBindings_5F_lexique & token) {
  bool loop = true ;
  token.mLexicalAttribute_floatValue = 0.0 ;
  token.mLexicalAttribute_tokenString.removeAllKeepingCapacity () ;
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
    }else if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
      do {
        if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_viewName ;
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
        if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__5C_n, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\n')) ;
        }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__5C__22_, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\"')) ;
        }else if (testForInputUTF32Char (TO_UNICODE (' ')) || testForInputUTF32Char (TO_UNICODE ('!')) || testForInputUTF32CharRange (TO_UNICODE ('#'), TO_UNICODE (65533))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else if (testForInputUTF32CharRange (TO_UNICODE (65536), TO_UNICODE (1114111))) {
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
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3E__3D_, true)) {
      token.mTokenCode = kToken__3E__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3D__3D_, true)) {
      token.mTokenCode = kToken__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3C__3D_, true)) {
      token.mTokenCode = kToken__3C__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__21__3D_, true)) {
      token.mTokenCode = kToken__21__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__7D_, true)) {
      token.mTokenCode = kToken__7D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__7C_, true)) {
      token.mTokenCode = kToken__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__7B_, true)) {
      token.mTokenCode = kToken__7B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__5E_, true)) {
      token.mTokenCode = kToken__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__5D_, true)) {
      token.mTokenCode = kToken__5D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__5B_, true)) {
      token.mTokenCode = kToken__5B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3E_, true)) {
      token.mTokenCode = kToken__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3D_, true)) {
      token.mTokenCode = kToken__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3C_, true)) {
      token.mTokenCode = kToken__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3B_, true)) {
      token.mTokenCode = kToken__3B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3A_, true)) {
      token.mTokenCode = kToken__3A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__2E_, true)) {
      token.mTokenCode = kToken__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__2D_, true)) {
      token.mTokenCode = kToken__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__2C_, true)) {
      token.mTokenCode = kToken__2C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__29_, true)) {
      token.mTokenCode = kToken__29_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__28_, true)) {
      token.mTokenCode = kToken__28_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__26_, true)) {
      token.mTokenCode = kToken__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__21_, true)) {
      token.mTokenCode = kToken__21_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__2F__2F_, true)) {
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

//--------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//--------------------------------------------------------------------------------------------------

bool Lexique_easyBindings_5F_lexique::parseLexicalToken (void) {
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

//--------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                
//--------------------------------------------------------------------------------------------------

void Lexique_easyBindings_5F_lexique::enterToken (cTokenFor_easyBindings_5F_lexique & ioToken) {
  cTokenFor_easyBindings_5F_lexique * ptr = nullptr ;
  macroMyNew (ptr, cTokenFor_easyBindings_5F_lexique ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_floatValue = ioToken.mLexicalAttribute_floatValue ;
  ptr->mLexicalAttribute_tokenString = ioToken.mLexicalAttribute_tokenString ;
  ptr->mLexicalAttribute_uint_33__32_value = ioToken.mLexicalAttribute_uint_33__32_value ;
  enterTokenFromPointer (ptr) ;
}

//--------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//--------------------------------------------------------------------------------------------------

double Lexique_easyBindings_5F_lexique::attributeValue_floatValue (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_floatValue ;
}

//--------------------------------------------------------------------------------------------------

String Lexique_easyBindings_5F_lexique::attributeValue_tokenString (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//--------------------------------------------------------------------------------------------------

uint32_t Lexique_easyBindings_5F_lexique::attributeValue_uint_33__32_value (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//--------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//--------------------------------------------------------------------------------------------------

GGS_ldouble Lexique_easyBindings_5F_lexique::synthetizedAttribute_floatValue (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_easyBindings_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_double value (ptr->mLexicalAttribute_floatValue) ;
  GGS_ldouble result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring Lexique_easyBindings_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_easyBindings_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_string value (ptr->mLexicalAttribute_tokenString) ;
  GGS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint Lexique_easyBindings_5F_lexique::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_easyBindings_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GGS_luint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

GGS_stringlist Lexique_easyBindings_5F_lexique::symbols (LOCATION_ARGS) {
  GGS_stringlist result = GGS_stringlist::class_func_emptyList (THERE) ;
  result.addAssign_operation (GGS_string ("identifier") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("Identifier") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("@attribute") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("bindingName") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("controllerName") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("viewName") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("literal_integer") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("literal_double") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("literal_string") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("comment") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("abstract") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("action") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("all") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("arrayController") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("autolayout") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("autoLayoutDocument") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("binding") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("calledBy") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("class") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("classForSwift") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("column") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("computed") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("configurator") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("default") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("dependsFrom") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("divider") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("enum") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("editableColumn") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("entity") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("extern") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("externDelegate") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("externFunc") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("func") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("graphic") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("graphviz") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("handlingOpposite") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("hStack") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("include") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("inverse") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("linker") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("mainxib") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("menuItem") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("no") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("newView") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("none") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("one") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("outlet") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("outletArray") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("override") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("prefs") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("property") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("proxy") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("root") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("selectionController") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("self") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("separator") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("signature") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("sortkey") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("space") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("stackView") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("struct") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("super") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("tableViewController") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("toMany") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("toOne") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("transient") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("typeView") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("version") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("vStack") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("versionShouldChange") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("view") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("weak") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("xcodeproject") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("yes") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("enabled") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("graphicController") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("hidden") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("tableValue") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("run") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (":") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (",") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (";") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("!") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("[") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("]") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("{") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("}") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("(") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (")") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (".") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("|") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("&") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("<") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (">") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("<=") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (">=") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("!=") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("==") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("^") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("-") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("=") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_easyBindings_5F_lexique (TC_UniqueArray <String> & ioList) {
  ioList.appendObject ("easyBindings_lexique:delimitorsList") ;
  ioList.appendObject ("easyBindings_lexique:lowerCaseKeyWordList") ;
  ioList.appendObject ("easyBindings_lexique:reservedBindingNameKeyWordList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_easyBindings_5F_lexique (const String & inIdentifier,
                                                              bool & ioFound,
                                                              TC_UniqueArray <String> & ioList) {
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
    ioList.appendObject ("=") ;
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
    ioList.appendObject ("weak") ;
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
    ioList.appendObject ("linker") ;
    ioList.appendObject ("outlet") ;
    ioList.appendObject ("struct") ;
    ioList.appendObject ("toMany") ;
    ioList.appendObject ("vStack") ;
    ioList.appendObject ("binding") ;
    ioList.appendObject ("default") ;
    ioList.appendObject ("divider") ;
    ioList.appendObject ("graphic") ;
    ioList.appendObject ("include") ;
    ioList.appendObject ("inverse") ;
    ioList.appendObject ("mainxib") ;
    ioList.appendObject ("newView") ;
    ioList.appendObject ("sortkey") ;
    ioList.appendObject ("version") ;
    ioList.appendObject ("abstract") ;
    ioList.appendObject ("calledBy") ;
    ioList.appendObject ("computed") ;
    ioList.appendObject ("graphviz") ;
    ioList.appendObject ("menuItem") ;
    ioList.appendObject ("override") ;
    ioList.appendObject ("property") ;
    ioList.appendObject ("typeView") ;
    ioList.appendObject ("separator") ;
    ioList.appendObject ("signature") ;
    ioList.appendObject ("stackView") ;
    ioList.appendObject ("transient") ;
    ioList.appendObject ("autolayout") ;
    ioList.appendObject ("externFunc") ;
    ioList.appendObject ("dependsFrom") ;
    ioList.appendObject ("outletArray") ;
    ioList.appendObject ("configurator") ;
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

//--------------------------------------------------------------------------------------------------

static cLexiqueIntrospection lexiqueIntrospection_easyBindings_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_easyBindings_5F_lexique, getKeywordsForIdentifier_easyBindings_5F_lexique) ;

//--------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//--------------------------------------------------------------------------------------------------

uint32_t Lexique_easyBindings_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [102] = {0,
    2 /* easyBindings_lexique_1_identifier */,
    3 /* easyBindings_lexique_1_Identifier */,
    4 /* easyBindings_lexique_1__40_attribute */,
    5 /* easyBindings_lexique_1_bindingName */,
    7 /* easyBindings_lexique_1_controllerName */,
    8 /* easyBindings_lexique_1_viewName */,
    9 /* easyBindings_lexique_1_literal_5F_integer */,
    10 /* easyBindings_lexique_1_literal_5F_double */,
    11 /* easyBindings_lexique_1_literal_5F_string */,
    13 /* easyBindings_lexique_1_comment */,
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
    1 /* easyBindings_lexique_1_divider */,
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
    1 /* easyBindings_lexique_1_hStack */,
    1 /* easyBindings_lexique_1_include */,
    1 /* easyBindings_lexique_1_inverse */,
    1 /* easyBindings_lexique_1_linker */,
    1 /* easyBindings_lexique_1_mainxib */,
    1 /* easyBindings_lexique_1_menuItem */,
    1 /* easyBindings_lexique_1_no */,
    1 /* easyBindings_lexique_1_newView */,
    1 /* easyBindings_lexique_1_none */,
    1 /* easyBindings_lexique_1_one */,
    1 /* easyBindings_lexique_1_outlet */,
    1 /* easyBindings_lexique_1_outletArray */,
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
    1 /* easyBindings_lexique_1_struct */,
    1 /* easyBindings_lexique_1_super */,
    1 /* easyBindings_lexique_1_tableViewController */,
    1 /* easyBindings_lexique_1_toMany */,
    1 /* easyBindings_lexique_1_toOne */,
    1 /* easyBindings_lexique_1_transient */,
    1 /* easyBindings_lexique_1_typeView */,
    1 /* easyBindings_lexique_1_version */,
    1 /* easyBindings_lexique_1_vStack */,
    1 /* easyBindings_lexique_1_versionShouldChange */,
    1 /* easyBindings_lexique_1_view */,
    1 /* easyBindings_lexique_1_weak */,
    1 /* easyBindings_lexique_1_xcodeproject */,
    1 /* easyBindings_lexique_1_yes */,
    6 /* easyBindings_lexique_1_enabled */,
    6 /* easyBindings_lexique_1_graphicController */,
    6 /* easyBindings_lexique_1_hidden */,
    6 /* easyBindings_lexique_1_tableValue */,
    6 /* easyBindings_lexique_1_run */,
    12 /* easyBindings_lexique_1__3A_ */,
    12 /* easyBindings_lexique_1__2C_ */,
    12 /* easyBindings_lexique_1__3B_ */,
    12 /* easyBindings_lexique_1__21_ */,
    12 /* easyBindings_lexique_1__5B_ */,
    12 /* easyBindings_lexique_1__5D_ */,
    12 /* easyBindings_lexique_1__7B_ */,
    12 /* easyBindings_lexique_1__7D_ */,
    12 /* easyBindings_lexique_1__28_ */,
    12 /* easyBindings_lexique_1__29_ */,
    12 /* easyBindings_lexique_1__2E_ */,
    12 /* easyBindings_lexique_1__7C_ */,
    12 /* easyBindings_lexique_1__26_ */,
    12 /* easyBindings_lexique_1__3C_ */,
    12 /* easyBindings_lexique_1__3E_ */,
    12 /* easyBindings_lexique_1__3C__3D_ */,
    12 /* easyBindings_lexique_1__3E__3D_ */,
    12 /* easyBindings_lexique_1__21__3D_ */,
    12 /* easyBindings_lexique_1__3D__3D_ */,
    12 /* easyBindings_lexique_1__5E_ */,
    12 /* easyBindings_lexique_1__2D_ */,
    12 /* easyBindings_lexique_1__3D_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//--------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//--------------------------------------------------------------------------------------------------

String Lexique_easyBindings_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  String result ;
  if (inStyleIndex < 14) {
    static const char * kStyleArray [14] = {
      "",
      "keywordsStyle",
      "idfStyle",
      "IdfStyle",
      "attributeStyle",
      "bindingNameStyle",
      "reservedBindingNameStyle",
      "controllerNameStyle",
      "viewNameStyle",
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

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@declarationListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_declarationListAST : public cCollectionElement {
  public: GGS_declarationListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_declarationListAST (const GGS_abstractDeclarationAST & in_mPropertyDeclaration
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_declarationListAST (const GGS_declarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_declarationListAST::cCollectionElement_declarationListAST (const GGS_abstractDeclarationAST & in_mPropertyDeclaration
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyDeclaration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_declarationListAST::cCollectionElement_declarationListAST (const GGS_declarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyDeclaration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_declarationListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_declarationListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_declarationListAST (mObject.mProperty_mPropertyDeclaration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_declarationListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPropertyDeclaration" ":") ;
  mObject.mProperty_mPropertyDeclaration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST::GGS_declarationListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST::GGS_declarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_declarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_declarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::enterElement (const GGS_declarationListAST_2E_element & inValue,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_declarationListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::class_func_listWithValue (const GGS_abstractDeclarationAST & inOperand0
                                                                         COMMA_LOCATION_ARGS) {
  GGS_declarationListAST result ;
  if (inOperand0.isValid ()) {
    result = GGS_declarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_declarationListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GGS_abstractDeclarationAST & in_mPropertyDeclaration
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_declarationListAST (in_mPropertyDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::addAssign_operation (const GGS_abstractDeclarationAST & inOperand0
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_declarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::setter_append (const GGS_abstractDeclarationAST inOperand0,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_declarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::setter_insertAtIndex (const GGS_abstractDeclarationAST inOperand0,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_declarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::setter_removeAtIndex (GGS_abstractDeclarationAST & outOperand0,
                                                   const GGS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
      outOperand0 = p->mObject.mProperty_mPropertyDeclaration ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::setter_popFirst (GGS_abstractDeclarationAST & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::setter_popLast (GGS_abstractDeclarationAST & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::method_first (GGS_abstractDeclarationAST & outOperand0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::method_last (GGS_abstractDeclarationAST & outOperand0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::add_operation (const GGS_declarationListAST & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_declarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_declarationListAST result = GGS_declarationListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_declarationListAST result = GGS_declarationListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_declarationListAST result = GGS_declarationListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::plusAssign_operation (const GGS_declarationListAST inOperand,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::setter_setMPropertyDeclarationAtIndex (GGS_abstractDeclarationAST inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyDeclaration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST GGS_declarationListAST::getter_mPropertyDeclarationAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  GGS_abstractDeclarationAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    result = p->mObject.mProperty_mPropertyDeclaration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_declarationListAST::cEnumerator_declarationListAST (const GGS_declarationListAST & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element cEnumerator_declarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_declarationListAST * p = (const cCollectionElement_declarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST cEnumerator_declarationListAST::current_mPropertyDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_declarationListAST * p = (const cCollectionElement_declarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
  return p->mObject.mProperty_mPropertyDeclaration ;
}




//--------------------------------------------------------------------------------------------------
//
//     @declarationListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationListAST ("declarationListAST",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_declarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declarationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_declarationListAST result ;
  const GGS_declarationListAST * p = (const GGS_declarationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@outletClassBindingSpecificationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_outletClassBindingSpecificationList : public cCollectionElement {
  public: GGS_outletClassBindingSpecificationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_outletClassBindingSpecificationList (const GGS_lstring & in_mOutletClassName,
                                                                  const GGS_lstring & in_mBindingName,
                                                                  const GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                  const GGS_controllerBindingOptionList & in_mBindingOptionList
                                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_outletClassBindingSpecificationList (const GGS_outletClassBindingSpecificationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_outletClassBindingSpecificationList::cCollectionElement_outletClassBindingSpecificationList (const GGS_lstring & in_mOutletClassName,
                                                                                                                const GGS_lstring & in_mBindingName,
                                                                                                                const GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                                                                const GGS_controllerBindingOptionList & in_mBindingOptionList
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletClassName, in_mBindingName, in_mOutletClassBindingSpecificationModelList, in_mBindingOptionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_outletClassBindingSpecificationList::cCollectionElement_outletClassBindingSpecificationList (const GGS_outletClassBindingSpecificationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletClassName, inElement.mProperty_mBindingName, inElement.mProperty_mOutletClassBindingSpecificationModelList, inElement.mProperty_mBindingOptionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_outletClassBindingSpecificationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_outletClassBindingSpecificationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_outletClassBindingSpecificationList (mObject.mProperty_mOutletClassName, mObject.mProperty_mBindingName, mObject.mProperty_mOutletClassBindingSpecificationModelList, mObject.mProperty_mBindingOptionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_outletClassBindingSpecificationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOutletClassName" ":") ;
  mObject.mProperty_mOutletClassName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBindingName" ":") ;
  mObject.mProperty_mBindingName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOutletClassBindingSpecificationModelList" ":") ;
  mObject.mProperty_mOutletClassBindingSpecificationModelList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBindingOptionList" ":") ;
  mObject.mProperty_mBindingOptionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList::GGS_outletClassBindingSpecificationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList::GGS_outletClassBindingSpecificationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_outletClassBindingSpecificationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_outletClassBindingSpecificationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::enterElement (const GGS_outletClassBindingSpecificationList_2E_element & inValue,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_outletClassBindingSpecificationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                           const GGS_lstring & inOperand1,
                                                                                                           const GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                           const GGS_controllerBindingOptionList & inOperand3
                                                                                                           COMMA_LOCATION_ARGS) {
  GGS_outletClassBindingSpecificationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_outletClassBindingSpecificationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_outletClassBindingSpecificationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GGS_lstring & in_mOutletClassName,
                                                                         const GGS_lstring & in_mBindingName,
                                                                         const GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                         const GGS_controllerBindingOptionList & in_mBindingOptionList
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_outletClassBindingSpecificationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_outletClassBindingSpecificationList (in_mOutletClassName,
                                                                         in_mBindingName,
                                                                         in_mOutletClassBindingSpecificationModelList,
                                                                         in_mBindingOptionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::addAssign_operation (const GGS_lstring & inOperand0,
                                                                   const GGS_lstring & inOperand1,
                                                                   const GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                   const GGS_controllerBindingOptionList & inOperand3
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_outletClassBindingSpecificationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::setter_append (const GGS_lstring inOperand0,
                                                             const GGS_lstring inOperand1,
                                                             const GGS_outletClassBindingSpecificationModelList inOperand2,
                                                             const GGS_controllerBindingOptionList inOperand3,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_outletClassBindingSpecificationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                    const GGS_lstring inOperand1,
                                                                    const GGS_outletClassBindingSpecificationModelList inOperand2,
                                                                    const GGS_controllerBindingOptionList inOperand3,
                                                                    const GGS_uint inInsertionIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_outletClassBindingSpecificationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                    GGS_lstring & outOperand1,
                                                                    GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                                    GGS_controllerBindingOptionList & outOperand3,
                                                                    const GGS_uint inRemoveIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
      outOperand0 = p->mObject.mProperty_mOutletClassName ;
      outOperand1 = p->mObject.mProperty_mBindingName ;
      outOperand2 = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
      outOperand3 = p->mObject.mProperty_mBindingOptionList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::setter_popFirst (GGS_lstring & outOperand0,
                                                               GGS_lstring & outOperand1,
                                                               GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                               GGS_controllerBindingOptionList & outOperand3,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::setter_popLast (GGS_lstring & outOperand0,
                                                              GGS_lstring & outOperand1,
                                                              GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                              GGS_controllerBindingOptionList & outOperand3,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::method_first (GGS_lstring & outOperand0,
                                                            GGS_lstring & outOperand1,
                                                            GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                            GGS_controllerBindingOptionList & outOperand3,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::method_last (GGS_lstring & outOperand0,
                                                           GGS_lstring & outOperand1,
                                                           GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                           GGS_controllerBindingOptionList & outOperand3,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::add_operation (const GGS_outletClassBindingSpecificationList & inOperand,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationList result = GGS_outletClassBindingSpecificationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationList result = GGS_outletClassBindingSpecificationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationList result = GGS_outletClassBindingSpecificationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::plusAssign_operation (const GGS_outletClassBindingSpecificationList inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::setter_setMOutletClassNameAtIndex (GGS_lstring inOperand,
                                                                                 GGS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOutletClassName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_outletClassBindingSpecificationList::getter_mOutletClassNameAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    result = p->mObject.mProperty_mOutletClassName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::setter_setMBindingNameAtIndex (GGS_lstring inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBindingName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_outletClassBindingSpecificationList::getter_mBindingNameAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    result = p->mObject.mProperty_mBindingName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::setter_setMOutletClassBindingSpecificationModelListAtIndex (GGS_outletClassBindingSpecificationModelList inOperand,
                                                                                                          GGS_uint inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOutletClassBindingSpecificationModelList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList GGS_outletClassBindingSpecificationList::getter_mOutletClassBindingSpecificationModelListAtIndex (const GGS_uint & inIndex,
                                                                                                                                               Compiler * inCompiler
                                                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  GGS_outletClassBindingSpecificationModelList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    result = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::setter_setMBindingOptionListAtIndex (GGS_controllerBindingOptionList inOperand,
                                                                                   GGS_uint inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBindingOptionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList GGS_outletClassBindingSpecificationList::getter_mBindingOptionListAtIndex (const GGS_uint & inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  GGS_controllerBindingOptionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    result = p->mObject.mProperty_mBindingOptionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_outletClassBindingSpecificationList::cEnumerator_outletClassBindingSpecificationList (const GGS_outletClassBindingSpecificationList & inEnumeratedObject,
                                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList_2E_element cEnumerator_outletClassBindingSpecificationList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationList * p = (const cCollectionElement_outletClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_outletClassBindingSpecificationList::current_mOutletClassName (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationList * p = (const cCollectionElement_outletClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
  return p->mObject.mProperty_mOutletClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_outletClassBindingSpecificationList::current_mBindingName (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationList * p = (const cCollectionElement_outletClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
  return p->mObject.mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList cEnumerator_outletClassBindingSpecificationList::current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationList * p = (const cCollectionElement_outletClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
  return p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList cEnumerator_outletClassBindingSpecificationList::current_mBindingOptionList (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationList * p = (const cCollectionElement_outletClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
  return p->mObject.mProperty_mBindingOptionList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @outletClassBindingSpecificationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationList ("outletClassBindingSpecificationList",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outletClassBindingSpecificationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletClassBindingSpecificationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletClassBindingSpecificationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_outletClassBindingSpecificationList result ;
  const GGS_outletClassBindingSpecificationList * p = (const GGS_outletClassBindingSpecificationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletClassBindingSpecificationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassBindingSpecificationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutViewClassBindingSpecificationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutViewClassBindingSpecificationList : public cCollectionElement {
  public: GGS_autoLayoutViewClassBindingSpecificationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_autoLayoutViewClassBindingSpecificationList (const GGS_lstring & in_mOutletClassName,
                                                                          const GGS_lstring & in_mBindingName,
                                                                          const GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                          const GGS_controllerBindingOptionList & in_mBindingOptionList
                                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutViewClassBindingSpecificationList (const GGS_autoLayoutViewClassBindingSpecificationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutViewClassBindingSpecificationList::cCollectionElement_autoLayoutViewClassBindingSpecificationList (const GGS_lstring & in_mOutletClassName,
                                                                                                                                const GGS_lstring & in_mBindingName,
                                                                                                                                const GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                                                                                const GGS_controllerBindingOptionList & in_mBindingOptionList
                                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletClassName, in_mBindingName, in_mOutletClassBindingSpecificationModelList, in_mBindingOptionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutViewClassBindingSpecificationList::cCollectionElement_autoLayoutViewClassBindingSpecificationList (const GGS_autoLayoutViewClassBindingSpecificationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletClassName, inElement.mProperty_mBindingName, inElement.mProperty_mOutletClassBindingSpecificationModelList, inElement.mProperty_mBindingOptionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutViewClassBindingSpecificationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutViewClassBindingSpecificationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_autoLayoutViewClassBindingSpecificationList (mObject.mProperty_mOutletClassName, mObject.mProperty_mBindingName, mObject.mProperty_mOutletClassBindingSpecificationModelList, mObject.mProperty_mBindingOptionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutViewClassBindingSpecificationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOutletClassName" ":") ;
  mObject.mProperty_mOutletClassName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBindingName" ":") ;
  mObject.mProperty_mBindingName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOutletClassBindingSpecificationModelList" ":") ;
  mObject.mProperty_mOutletClassBindingSpecificationModelList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBindingOptionList" ":") ;
  mObject.mProperty_mBindingOptionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList::GGS_autoLayoutViewClassBindingSpecificationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList::GGS_autoLayoutViewClassBindingSpecificationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList GGS_autoLayoutViewClassBindingSpecificationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_autoLayoutViewClassBindingSpecificationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList GGS_autoLayoutViewClassBindingSpecificationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_autoLayoutViewClassBindingSpecificationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::enterElement (const GGS_autoLayoutViewClassBindingSpecificationList_2E_element & inValue,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList GGS_autoLayoutViewClassBindingSpecificationList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                                           const GGS_lstring & inOperand1,
                                                                                                                           const GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                                           const GGS_controllerBindingOptionList & inOperand3
                                                                                                                           COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewClassBindingSpecificationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_autoLayoutViewClassBindingSpecificationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_autoLayoutViewClassBindingSpecificationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                 const GGS_lstring & in_mOutletClassName,
                                                                                 const GGS_lstring & in_mBindingName,
                                                                                 const GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                                 const GGS_controllerBindingOptionList & in_mBindingOptionList
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList (in_mOutletClassName,
                                                                                 in_mBindingName,
                                                                                 in_mOutletClassBindingSpecificationModelList,
                                                                                 in_mBindingOptionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::addAssign_operation (const GGS_lstring & inOperand0,
                                                                           const GGS_lstring & inOperand1,
                                                                           const GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                           const GGS_controllerBindingOptionList & inOperand3
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::setter_append (const GGS_lstring inOperand0,
                                                                     const GGS_lstring inOperand1,
                                                                     const GGS_outletClassBindingSpecificationModelList inOperand2,
                                                                     const GGS_controllerBindingOptionList inOperand3,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                            const GGS_lstring inOperand1,
                                                                            const GGS_outletClassBindingSpecificationModelList inOperand2,
                                                                            const GGS_controllerBindingOptionList inOperand3,
                                                                            const GGS_uint inInsertionIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                            GGS_lstring & outOperand1,
                                                                            GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                                            GGS_controllerBindingOptionList & outOperand3,
                                                                            const GGS_uint inRemoveIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
      outOperand0 = p->mObject.mProperty_mOutletClassName ;
      outOperand1 = p->mObject.mProperty_mBindingName ;
      outOperand2 = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
      outOperand3 = p->mObject.mProperty_mBindingOptionList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::setter_popFirst (GGS_lstring & outOperand0,
                                                                       GGS_lstring & outOperand1,
                                                                       GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                                       GGS_controllerBindingOptionList & outOperand3,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::setter_popLast (GGS_lstring & outOperand0,
                                                                      GGS_lstring & outOperand1,
                                                                      GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                                      GGS_controllerBindingOptionList & outOperand3,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::method_first (GGS_lstring & outOperand0,
                                                                    GGS_lstring & outOperand1,
                                                                    GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                                    GGS_controllerBindingOptionList & outOperand3,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::method_last (GGS_lstring & outOperand0,
                                                                   GGS_lstring & outOperand1,
                                                                   GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                                   GGS_controllerBindingOptionList & outOperand3,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList GGS_autoLayoutViewClassBindingSpecificationList::add_operation (const GGS_autoLayoutViewClassBindingSpecificationList & inOperand,
                                                                                                                Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutViewClassBindingSpecificationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList GGS_autoLayoutViewClassBindingSpecificationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewClassBindingSpecificationList result = GGS_autoLayoutViewClassBindingSpecificationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList GGS_autoLayoutViewClassBindingSpecificationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewClassBindingSpecificationList result = GGS_autoLayoutViewClassBindingSpecificationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList GGS_autoLayoutViewClassBindingSpecificationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewClassBindingSpecificationList result = GGS_autoLayoutViewClassBindingSpecificationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::plusAssign_operation (const GGS_autoLayoutViewClassBindingSpecificationList inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::setter_setMOutletClassNameAtIndex (GGS_lstring inOperand,
                                                                                         GGS_uint inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOutletClassName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutViewClassBindingSpecificationList::getter_mOutletClassNameAtIndex (const GGS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
    result = p->mObject.mProperty_mOutletClassName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::setter_setMBindingNameAtIndex (GGS_lstring inOperand,
                                                                                     GGS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBindingName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutViewClassBindingSpecificationList::getter_mBindingNameAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
    result = p->mObject.mProperty_mBindingName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::setter_setMOutletClassBindingSpecificationModelListAtIndex (GGS_outletClassBindingSpecificationModelList inOperand,
                                                                                                                  GGS_uint inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOutletClassBindingSpecificationModelList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList GGS_autoLayoutViewClassBindingSpecificationList::getter_mOutletClassBindingSpecificationModelListAtIndex (const GGS_uint & inIndex,
                                                                                                                                                       Compiler * inCompiler
                                                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) attributes.ptr () ;
  GGS_outletClassBindingSpecificationModelList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
    result = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::setter_setMBindingOptionListAtIndex (GGS_controllerBindingOptionList inOperand,
                                                                                           GGS_uint inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBindingOptionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList GGS_autoLayoutViewClassBindingSpecificationList::getter_mBindingOptionListAtIndex (const GGS_uint & inIndex,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (cCollectionElement_autoLayoutViewClassBindingSpecificationList *) attributes.ptr () ;
  GGS_controllerBindingOptionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
    result = p->mObject.mProperty_mBindingOptionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutViewClassBindingSpecificationList::cEnumerator_autoLayoutViewClassBindingSpecificationList (const GGS_autoLayoutViewClassBindingSpecificationList & inEnumeratedObject,
                                                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList_2E_element cEnumerator_autoLayoutViewClassBindingSpecificationList::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (const cCollectionElement_autoLayoutViewClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_autoLayoutViewClassBindingSpecificationList::current_mOutletClassName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (const cCollectionElement_autoLayoutViewClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
  return p->mObject.mProperty_mOutletClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_autoLayoutViewClassBindingSpecificationList::current_mBindingName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (const cCollectionElement_autoLayoutViewClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
  return p->mObject.mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList cEnumerator_autoLayoutViewClassBindingSpecificationList::current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (const cCollectionElement_autoLayoutViewClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
  return p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList cEnumerator_autoLayoutViewClassBindingSpecificationList::current_mBindingOptionList (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewClassBindingSpecificationList * p = (const cCollectionElement_autoLayoutViewClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewClassBindingSpecificationList) ;
  return p->mObject.mProperty_mBindingOptionList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutViewClassBindingSpecificationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewClassBindingSpecificationList ("autoLayoutViewClassBindingSpecificationList",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutViewClassBindingSpecificationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewClassBindingSpecificationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewClassBindingSpecificationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewClassBindingSpecificationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList GGS_autoLayoutViewClassBindingSpecificationList::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewClassBindingSpecificationList result ;
  const GGS_autoLayoutViewClassBindingSpecificationList * p = (const GGS_autoLayoutViewClassBindingSpecificationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewClassBindingSpecificationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewClassBindingSpecificationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_astAutoLayoutViewFunctionMap::cMapElement_astAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap_2E_element & inValue
                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mFomalParameterList (inValue.mProperty_mFomalParameterList) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_astAutoLayoutViewFunctionMap::cMapElement_astAutoLayoutViewFunctionMap (const GGS_lstring & inKey,
                                                                                    const GGS_autoLayoutClassParameterList & in_mFomalParameterList
                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFomalParameterList (in_mFomalParameterList) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_astAutoLayoutViewFunctionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_astAutoLayoutViewFunctionMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_astAutoLayoutViewFunctionMap (mProperty_lkey, mProperty_mFomalParameterList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_astAutoLayoutViewFunctionMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFomalParameterList" ":") ;
  mProperty_mFomalParameterList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap::GGS_astAutoLayoutViewFunctionMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap::GGS_astAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap & GGS_astAutoLayoutViewFunctionMap::operator = (const GGS_astAutoLayoutViewFunctionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap GGS_astAutoLayoutViewFunctionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewFunctionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap GGS_astAutoLayoutViewFunctionMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_astAutoLayoutViewFunctionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ GGS_astAutoLayoutViewFunctionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_astAutoLayoutViewFunctionMap * p = (cMapElement_astAutoLayoutViewFunctionMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_astAutoLayoutViewFunctionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_astAutoLayoutViewFunctionMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mFomalParameterList = p->mProperty_mFomalParameterList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap GGS_astAutoLayoutViewFunctionMap::class_func_mapWithMapToOverride (const GGS_astAutoLayoutViewFunctionMap & inMapToOverride
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewFunctionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap GGS_astAutoLayoutViewFunctionMap::getter_overriddenMap (Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewFunctionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap::enterElement (const GGS_astAutoLayoutViewFunctionMap_2E_element & inValue,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_astAutoLayoutViewFunctionMap * p = nullptr ;
  macroMyNew (p, cMapElement_astAutoLayoutViewFunctionMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@astAutoLayoutViewFunctionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap::addAssign_operation (const GGS_lstring & inKey,
                                                            const GGS_autoLayoutClassParameterList & inArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_astAutoLayoutViewFunctionMap * p = nullptr ;
  macroMyNew (p, cMapElement_astAutoLayoutViewFunctionMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@astAutoLayoutViewFunctionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap GGS_astAutoLayoutViewFunctionMap::add_operation (const GGS_astAutoLayoutViewFunctionMap & inOperand,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewFunctionMap result = *this ;
  cEnumerator_astAutoLayoutViewFunctionMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mFomalParameterList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap::setter_insertKey (GGS_lstring inKey,
                                                         GGS_autoLayoutClassParameterList inArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_astAutoLayoutViewFunctionMap * p = nullptr ;
  macroMyNew (p, cMapElement_astAutoLayoutViewFunctionMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' function is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_astAutoLayoutViewFunctionMap_searchKey = "there is no '%K' function" ;

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap::method_searchKey (GGS_lstring inKey,
                                                         GGS_autoLayoutClassParameterList & outArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_astAutoLayoutViewFunctionMap * p = (const cMapElement_astAutoLayoutViewFunctionMap *) performSearch (inKey,
                                                                                                                         inCompiler,
                                                                                                                         kSearchErrorMessage_astAutoLayoutViewFunctionMap_searchKey
                                                                                                                         COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_astAutoLayoutViewFunctionMap) ;
    outArgument0 = p->mProperty_mFomalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList GGS_astAutoLayoutViewFunctionMap::getter_mFomalParameterListForKey (const GGS_string & inKey,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_astAutoLayoutViewFunctionMap * p = (const cMapElement_astAutoLayoutViewFunctionMap *) attributes ;
  GGS_autoLayoutClassParameterList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_astAutoLayoutViewFunctionMap) ;
    result = p->mProperty_mFomalParameterList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap::setter_setMFomalParameterListForKey (GGS_autoLayoutClassParameterList inAttributeValue,
                                                                            GGS_string inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_astAutoLayoutViewFunctionMap * p = (cMapElement_astAutoLayoutViewFunctionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_astAutoLayoutViewFunctionMap) ;
    p->mProperty_mFomalParameterList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_astAutoLayoutViewFunctionMap * GGS_astAutoLayoutViewFunctionMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                const GGS_string & inKey
                                                                                                                COMMA_LOCATION_ARGS) {
  cMapElement_astAutoLayoutViewFunctionMap * result = (cMapElement_astAutoLayoutViewFunctionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_astAutoLayoutViewFunctionMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_astAutoLayoutViewFunctionMap::cEnumerator_astAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inEnumeratedObject,
                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap_2E_element cEnumerator_astAutoLayoutViewFunctionMap::current (LOCATION_ARGS) const {
  const cMapElement_astAutoLayoutViewFunctionMap * p = (const cMapElement_astAutoLayoutViewFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_astAutoLayoutViewFunctionMap) ;
  return GGS_astAutoLayoutViewFunctionMap_2E_element (p->mProperty_lkey, p->mProperty_mFomalParameterList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_astAutoLayoutViewFunctionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList cEnumerator_astAutoLayoutViewFunctionMap::current_mFomalParameterList (LOCATION_ARGS) const {
  const cMapElement_astAutoLayoutViewFunctionMap * p = (const cMapElement_astAutoLayoutViewFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_astAutoLayoutViewFunctionMap) ;
  return p->mProperty_mFomalParameterList ;
}

//--------------------------------------------------------------------------------------------------
//
//     @astAutoLayoutViewFunctionMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap ("astAutoLayoutViewFunctionMap",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_astAutoLayoutViewFunctionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutViewFunctionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutViewFunctionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap GGS_astAutoLayoutViewFunctionMap::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewFunctionMap result ;
  const GGS_astAutoLayoutViewFunctionMap * p = (const GGS_astAutoLayoutViewFunctionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutViewFunctionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewFunctionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@enumerationFunctionListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_enumerationFunctionListAST : public cCollectionElement {
  public: GGS_enumerationFunctionListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_enumerationFunctionListAST (const GGS_lstring & in_mEnumName,
                                                         const GGS_lstring & in_mFunctionName,
                                                         const GGS__32_lstringlist & in_mAssociationList
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_enumerationFunctionListAST (const GGS_enumerationFunctionListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_enumerationFunctionListAST::cCollectionElement_enumerationFunctionListAST (const GGS_lstring & in_mEnumName,
                                                                                              const GGS_lstring & in_mFunctionName,
                                                                                              const GGS__32_lstringlist & in_mAssociationList
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEnumName, in_mFunctionName, in_mAssociationList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_enumerationFunctionListAST::cCollectionElement_enumerationFunctionListAST (const GGS_enumerationFunctionListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEnumName, inElement.mProperty_mFunctionName, inElement.mProperty_mAssociationList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_enumerationFunctionListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_enumerationFunctionListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_enumerationFunctionListAST (mObject.mProperty_mEnumName, mObject.mProperty_mFunctionName, mObject.mProperty_mAssociationList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_enumerationFunctionListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEnumName" ":") ;
  mObject.mProperty_mEnumName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFunctionName" ":") ;
  mObject.mProperty_mFunctionName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAssociationList" ":") ;
  mObject.mProperty_mAssociationList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST::GGS_enumerationFunctionListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST::GGS_enumerationFunctionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_enumerationFunctionListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_enumerationFunctionListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::enterElement (const GGS_enumerationFunctionListAST_2E_element & inValue,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_enumerationFunctionListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                         const GGS_lstring & inOperand1,
                                                                                         const GGS__32_lstringlist & inOperand2
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_enumerationFunctionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_enumerationFunctionListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_enumerationFunctionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GGS_lstring & in_mEnumName,
                                                                const GGS_lstring & in_mFunctionName,
                                                                const GGS__32_lstringlist & in_mAssociationList
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationFunctionListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_enumerationFunctionListAST (in_mEnumName,
                                                                in_mFunctionName,
                                                                in_mAssociationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::addAssign_operation (const GGS_lstring & inOperand0,
                                                          const GGS_lstring & inOperand1,
                                                          const GGS__32_lstringlist & inOperand2
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_enumerationFunctionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::setter_append (const GGS_lstring inOperand0,
                                                    const GGS_lstring inOperand1,
                                                    const GGS__32_lstringlist inOperand2,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_enumerationFunctionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                           const GGS_lstring inOperand1,
                                                           const GGS__32_lstringlist inOperand2,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_enumerationFunctionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                           GGS_lstring & outOperand1,
                                                           GGS__32_lstringlist & outOperand2,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_enumerationFunctionListAST * p = (cCollectionElement_enumerationFunctionListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
      outOperand0 = p->mObject.mProperty_mEnumName ;
      outOperand1 = p->mObject.mProperty_mFunctionName ;
      outOperand2 = p->mObject.mProperty_mAssociationList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      GGS__32_lstringlist & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationFunctionListAST * p = (cCollectionElement_enumerationFunctionListAST *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::setter_popLast (GGS_lstring & outOperand0,
                                                     GGS_lstring & outOperand1,
                                                     GGS__32_lstringlist & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationFunctionListAST * p = (cCollectionElement_enumerationFunctionListAST *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::method_first (GGS_lstring & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   GGS__32_lstringlist & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationFunctionListAST * p = (cCollectionElement_enumerationFunctionListAST *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::method_last (GGS_lstring & outOperand0,
                                                  GGS_lstring & outOperand1,
                                                  GGS__32_lstringlist & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationFunctionListAST * p = (cCollectionElement_enumerationFunctionListAST *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::add_operation (const GGS_enumerationFunctionListAST & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_enumerationFunctionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_enumerationFunctionListAST result = GGS_enumerationFunctionListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_enumerationFunctionListAST result = GGS_enumerationFunctionListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_enumerationFunctionListAST result = GGS_enumerationFunctionListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::plusAssign_operation (const GGS_enumerationFunctionListAST inOperand,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::setter_setMEnumNameAtIndex (GGS_lstring inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationFunctionListAST * p = (cCollectionElement_enumerationFunctionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEnumName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_enumerationFunctionListAST::getter_mEnumNameAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationFunctionListAST * p = (cCollectionElement_enumerationFunctionListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
    result = p->mObject.mProperty_mEnumName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::setter_setMFunctionNameAtIndex (GGS_lstring inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationFunctionListAST * p = (cCollectionElement_enumerationFunctionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFunctionName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_enumerationFunctionListAST::getter_mFunctionNameAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationFunctionListAST * p = (cCollectionElement_enumerationFunctionListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
    result = p->mObject.mProperty_mFunctionName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::setter_setMAssociationListAtIndex (GGS__32_lstringlist inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationFunctionListAST * p = (cCollectionElement_enumerationFunctionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAssociationList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS_enumerationFunctionListAST::getter_mAssociationListAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationFunctionListAST * p = (cCollectionElement_enumerationFunctionListAST *) attributes.ptr () ;
  GGS__32_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
    result = p->mObject.mProperty_mAssociationList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_enumerationFunctionListAST::cEnumerator_enumerationFunctionListAST (const GGS_enumerationFunctionListAST & inEnumeratedObject,
                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST_2E_element cEnumerator_enumerationFunctionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_enumerationFunctionListAST * p = (const cCollectionElement_enumerationFunctionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_enumerationFunctionListAST::current_mEnumName (LOCATION_ARGS) const {
  const cCollectionElement_enumerationFunctionListAST * p = (const cCollectionElement_enumerationFunctionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
  return p->mObject.mProperty_mEnumName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_enumerationFunctionListAST::current_mFunctionName (LOCATION_ARGS) const {
  const cCollectionElement_enumerationFunctionListAST * p = (const cCollectionElement_enumerationFunctionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
  return p->mObject.mProperty_mFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist cEnumerator_enumerationFunctionListAST::current_mAssociationList (LOCATION_ARGS) const {
  const cCollectionElement_enumerationFunctionListAST * p = (const cCollectionElement_enumerationFunctionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
  return p->mObject.mProperty_mAssociationList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @enumerationFunctionListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationFunctionListAST ("enumerationFunctionListAST",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumerationFunctionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationFunctionListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumerationFunctionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumerationFunctionListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_enumerationFunctionListAST result ;
  const GGS_enumerationFunctionListAST * p = (const GGS_enumerationFunctionListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumerationFunctionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationFunctionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_classMap::cMapElement_classMap (const GGS_classMap_2E_element & inValue
                                            COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mClassKind (inValue.mProperty_mClassKind),
mProperty_mPropertyMap (inValue.mProperty_mPropertyMap),
mProperty_mActionMap (inValue.mProperty_mActionMap),
mProperty_mPropertyGenerationList (inValue.mProperty_mPropertyGenerationList) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_classMap::cMapElement_classMap (const GGS_lstring & inKey,
                                            const GGS_classKind & in_mClassKind,
                                            const GGS_propertyMap & in_mPropertyMap,
                                            const GGS_actionMap & in_mActionMap,
                                            const GGS_propertyGenerationList & in_mPropertyGenerationList
                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mClassKind (in_mClassKind),
mProperty_mPropertyMap (in_mPropertyMap),
mProperty_mActionMap (in_mActionMap),
mProperty_mPropertyGenerationList (in_mPropertyGenerationList) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_classMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_classMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_classMap (mProperty_lkey, mProperty_mClassKind, mProperty_mPropertyMap, mProperty_mActionMap, mProperty_mPropertyGenerationList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_classMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mClassKind" ":") ;
  mProperty_mClassKind.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPropertyMap" ":") ;
  mProperty_mPropertyMap.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mActionMap" ":") ;
  mProperty_mActionMap.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPropertyGenerationList" ":") ;
  mProperty_mPropertyGenerationList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap::GGS_classMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_classMap::GGS_classMap (const GGS_classMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_classMap & GGS_classMap::operator = (const GGS_classMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap GGS_classMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_classMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap GGS_classMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_classMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap_2E_element_3F_ GGS_classMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_classMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_classMap * p = (cMapElement_classMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_classMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_classMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mClassKind = p->mProperty_mClassKind ;
      element.mProperty_mPropertyMap = p->mProperty_mPropertyMap ;
      element.mProperty_mActionMap = p->mProperty_mActionMap ;
      element.mProperty_mPropertyGenerationList = p->mProperty_mPropertyGenerationList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap GGS_classMap::class_func_mapWithMapToOverride (const GGS_classMap & inMapToOverride
                                                            COMMA_LOCATION_ARGS) {
  GGS_classMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap GGS_classMap::getter_overriddenMap (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_classMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap::enterElement (const GGS_classMap_2E_element & inValue,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  cMapElement_classMap * p = nullptr ;
  macroMyNew (p, cMapElement_classMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@classMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap::addAssign_operation (const GGS_lstring & inKey,
                                        const GGS_classKind & inArgument0,
                                        const GGS_propertyMap & inArgument1,
                                        const GGS_actionMap & inArgument2,
                                        const GGS_propertyGenerationList & inArgument3,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_classMap * p = nullptr ;
  macroMyNew (p, cMapElement_classMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@classMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap GGS_classMap::add_operation (const GGS_classMap & inOperand,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  GGS_classMap result = *this ;
  cEnumerator_classMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mClassKind (HERE), enumerator.current_mPropertyMap (HERE), enumerator.current_mActionMap (HERE), enumerator.current_mPropertyGenerationList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap::setter_insertKey (GGS_lstring inKey,
                                     GGS_classKind inArgument0,
                                     GGS_propertyMap inArgument1,
                                     GGS_actionMap inArgument2,
                                     GGS_propertyGenerationList inArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  cMapElement_classMap * p = nullptr ;
  macroMyNew (p, cMapElement_classMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' class is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_classMap_searchKey = "there is no '%K' class" ;

//--------------------------------------------------------------------------------------------------

void GGS_classMap::method_searchKey (GGS_lstring inKey,
                                     GGS_classKind & outArgument0,
                                     GGS_propertyMap & outArgument1,
                                     GGS_actionMap & outArgument2,
                                     GGS_propertyGenerationList & outArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_classMap * p = (const cMapElement_classMap *) performSearch (inKey,
                                                                                 inCompiler,
                                                                                 kSearchErrorMessage_classMap_searchKey
                                                                                 COMMA_THERE) ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

GGS_classKind GGS_classMap::getter_mClassKindForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classMap * p = (const cMapElement_classMap *) attributes ;
  GGS_classKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    result = p->mProperty_mClassKind ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_classMap::getter_mPropertyMapForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classMap * p = (const cMapElement_classMap *) attributes ;
  GGS_propertyMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    result = p->mProperty_mPropertyMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap GGS_classMap::getter_mActionMapForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classMap * p = (const cMapElement_classMap *) attributes ;
  GGS_actionMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    result = p->mProperty_mActionMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList GGS_classMap::getter_mPropertyGenerationListForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classMap * p = (const cMapElement_classMap *) attributes ;
  GGS_propertyGenerationList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    result = p->mProperty_mPropertyGenerationList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap::setter_setMClassKindForKey (GGS_classKind inAttributeValue,
                                               GGS_string inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_classMap * p = (cMapElement_classMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    p->mProperty_mClassKind = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap::setter_setMPropertyMapForKey (GGS_propertyMap inAttributeValue,
                                                 GGS_string inKey,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_classMap * p = (cMapElement_classMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    p->mProperty_mPropertyMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap::setter_setMActionMapForKey (GGS_actionMap inAttributeValue,
                                               GGS_string inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_classMap * p = (cMapElement_classMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    p->mProperty_mActionMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap::setter_setMPropertyGenerationListForKey (GGS_propertyGenerationList inAttributeValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_classMap * p = (cMapElement_classMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    p->mProperty_mPropertyGenerationList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_classMap * GGS_classMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                        const GGS_string & inKey
                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_classMap * result = (cMapElement_classMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_classMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_classMap::cEnumerator_classMap (const GGS_classMap & inEnumeratedObject,
                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap_2E_element cEnumerator_classMap::current (LOCATION_ARGS) const {
  const cMapElement_classMap * p = (const cMapElement_classMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMap) ;
  return GGS_classMap_2E_element (p->mProperty_lkey, p->mProperty_mClassKind, p->mProperty_mPropertyMap, p->mProperty_mActionMap, p->mProperty_mPropertyGenerationList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_classMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind cEnumerator_classMap::current_mClassKind (LOCATION_ARGS) const {
  const cMapElement_classMap * p = (const cMapElement_classMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMap) ;
  return p->mProperty_mClassKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap cEnumerator_classMap::current_mPropertyMap (LOCATION_ARGS) const {
  const cMapElement_classMap * p = (const cMapElement_classMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMap) ;
  return p->mProperty_mPropertyMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap cEnumerator_classMap::current_mActionMap (LOCATION_ARGS) const {
  const cMapElement_classMap * p = (const cMapElement_classMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMap) ;
  return p->mProperty_mActionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList cEnumerator_classMap::current_mPropertyGenerationList (LOCATION_ARGS) const {
  const cMapElement_classMap * p = (const cMapElement_classMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMap) ;
  return p->mProperty_mPropertyGenerationList ;
}

//--------------------------------------------------------------------------------------------------
//
//     @classMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classMap ("classMap",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_classMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap GGS_classMap::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_classMap result ;
  const GGS_classMap * p = (const GGS_classMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_outletClassMap::cMapElement_outletClassMap (const GGS_outletClassMap_2E_element & inValue
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mSuperClassName (inValue.mProperty_mSuperClassName),
mProperty_mHandlesRunAction (inValue.mProperty_mHandlesRunAction),
mProperty_mHandlesTableValueBinding (inValue.mProperty_mHandlesTableValueBinding),
mProperty_mHandleEnabledBinding (inValue.mProperty_mHandleEnabledBinding),
mProperty_mHandleHiddenBinding (inValue.mProperty_mHandleHiddenBinding),
mProperty_mHandleGraphicControllerBinding (inValue.mProperty_mHandleGraphicControllerBinding),
mProperty_mUserDefined (inValue.mProperty_mUserDefined) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_outletClassMap::cMapElement_outletClassMap (const GGS_lstring & inKey,
                                                        const GGS_lstring & in_mSuperClassName,
                                                        const GGS_bool & in_mHandlesRunAction,
                                                        const GGS_bool & in_mHandlesTableValueBinding,
                                                        const GGS_bool & in_mHandleEnabledBinding,
                                                        const GGS_bool & in_mHandleHiddenBinding,
                                                        const GGS_bool & in_mHandleGraphicControllerBinding,
                                                        const GGS_bool & in_mUserDefined
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

//--------------------------------------------------------------------------------------------------

bool cMapElement_outletClassMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_outletClassMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_outletClassMap (mProperty_lkey, mProperty_mSuperClassName, mProperty_mHandlesRunAction, mProperty_mHandlesTableValueBinding, mProperty_mHandleEnabledBinding, mProperty_mHandleHiddenBinding, mProperty_mHandleGraphicControllerBinding, mProperty_mUserDefined COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_outletClassMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSuperClassName" ":") ;
  mProperty_mSuperClassName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHandlesRunAction" ":") ;
  mProperty_mHandlesRunAction.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHandlesTableValueBinding" ":") ;
  mProperty_mHandlesTableValueBinding.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHandleEnabledBinding" ":") ;
  mProperty_mHandleEnabledBinding.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHandleHiddenBinding" ":") ;
  mProperty_mHandleHiddenBinding.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHandleGraphicControllerBinding" ":") ;
  mProperty_mHandleGraphicControllerBinding.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mUserDefined" ":") ;
  mProperty_mUserDefined.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap::GGS_outletClassMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap::GGS_outletClassMap (const GGS_outletClassMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap & GGS_outletClassMap::operator = (const GGS_outletClassMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap GGS_outletClassMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_outletClassMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap GGS_outletClassMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_outletClassMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap_2E_element_3F_ GGS_outletClassMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_outletClassMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_outletClassMap * p = (cMapElement_outletClassMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_outletClassMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_outletClassMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mSuperClassName = p->mProperty_mSuperClassName ;
      element.mProperty_mHandlesRunAction = p->mProperty_mHandlesRunAction ;
      element.mProperty_mHandlesTableValueBinding = p->mProperty_mHandlesTableValueBinding ;
      element.mProperty_mHandleEnabledBinding = p->mProperty_mHandleEnabledBinding ;
      element.mProperty_mHandleHiddenBinding = p->mProperty_mHandleHiddenBinding ;
      element.mProperty_mHandleGraphicControllerBinding = p->mProperty_mHandleGraphicControllerBinding ;
      element.mProperty_mUserDefined = p->mProperty_mUserDefined ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap GGS_outletClassMap::class_func_mapWithMapToOverride (const GGS_outletClassMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_outletClassMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap GGS_outletClassMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_outletClassMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::enterElement (const GGS_outletClassMap_2E_element & inValue,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  cMapElement_outletClassMap * p = nullptr ;
  macroMyNew (p, cMapElement_outletClassMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@outletClassMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::addAssign_operation (const GGS_lstring & inKey,
                                              const GGS_lstring & inArgument0,
                                              const GGS_bool & inArgument1,
                                              const GGS_bool & inArgument2,
                                              const GGS_bool & inArgument3,
                                              const GGS_bool & inArgument4,
                                              const GGS_bool & inArgument5,
                                              const GGS_bool & inArgument6,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_outletClassMap * p = nullptr ;
  macroMyNew (p, cMapElement_outletClassMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@outletClassMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap GGS_outletClassMap::add_operation (const GGS_outletClassMap & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_outletClassMap result = *this ;
  cEnumerator_outletClassMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mSuperClassName (HERE), enumerator.current_mHandlesRunAction (HERE), enumerator.current_mHandlesTableValueBinding (HERE), enumerator.current_mHandleEnabledBinding (HERE), enumerator.current_mHandleHiddenBinding (HERE), enumerator.current_mHandleGraphicControllerBinding (HERE), enumerator.current_mUserDefined (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_insertKey (GGS_lstring inKey,
                                           GGS_lstring inArgument0,
                                           GGS_bool inArgument1,
                                           GGS_bool inArgument2,
                                           GGS_bool inArgument3,
                                           GGS_bool inArgument4,
                                           GGS_bool inArgument5,
                                           GGS_bool inArgument6,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_outletClassMap * p = nullptr ;
  macroMyNew (p, cMapElement_outletClassMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' outlet class is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_outletClassMap_searchKey = "there is no '%K' outlet class" ;

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::method_searchKey (GGS_lstring inKey,
                                           GGS_lstring & outArgument0,
                                           GGS_bool & outArgument1,
                                           GGS_bool & outArgument2,
                                           GGS_bool & outArgument3,
                                           GGS_bool & outArgument4,
                                           GGS_bool & outArgument5,
                                           GGS_bool & outArgument6,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_outletClassMap_searchKey
                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_outletClassMap::getter_mSuperClassNameForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) attributes ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    result = p->mProperty_mSuperClassName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassMap::getter_mHandlesRunActionForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    result = p->mProperty_mHandlesRunAction ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassMap::getter_mHandlesTableValueBindingForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    result = p->mProperty_mHandlesTableValueBinding ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassMap::getter_mHandleEnabledBindingForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    result = p->mProperty_mHandleEnabledBinding ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassMap::getter_mHandleHiddenBindingForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    result = p->mProperty_mHandleHiddenBinding ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassMap::getter_mHandleGraphicControllerBindingForKey (const GGS_string & inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    result = p->mProperty_mHandleGraphicControllerBinding ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassMap::getter_mUserDefinedForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    result = p->mProperty_mUserDefined ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_setMSuperClassNameForKey (GGS_lstring inAttributeValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletClassMap * p = (cMapElement_outletClassMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    p->mProperty_mSuperClassName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_setMHandlesRunActionForKey (GGS_bool inAttributeValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletClassMap * p = (cMapElement_outletClassMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    p->mProperty_mHandlesRunAction = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_setMHandlesTableValueBindingForKey (GGS_bool inAttributeValue,
                                                                    GGS_string inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletClassMap * p = (cMapElement_outletClassMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    p->mProperty_mHandlesTableValueBinding = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_setMHandleEnabledBindingForKey (GGS_bool inAttributeValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletClassMap * p = (cMapElement_outletClassMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    p->mProperty_mHandleEnabledBinding = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_setMHandleHiddenBindingForKey (GGS_bool inAttributeValue,
                                                               GGS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletClassMap * p = (cMapElement_outletClassMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    p->mProperty_mHandleHiddenBinding = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_setMHandleGraphicControllerBindingForKey (GGS_bool inAttributeValue,
                                                                          GGS_string inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletClassMap * p = (cMapElement_outletClassMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    p->mProperty_mHandleGraphicControllerBinding = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_setMUserDefinedForKey (GGS_bool inAttributeValue,
                                                       GGS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletClassMap * p = (cMapElement_outletClassMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    p->mProperty_mUserDefined = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_outletClassMap * GGS_outletClassMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                    const GGS_string & inKey
                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_outletClassMap * result = (cMapElement_outletClassMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_outletClassMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_outletClassMap::cEnumerator_outletClassMap (const GGS_outletClassMap & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap_2E_element cEnumerator_outletClassMap::current (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return GGS_outletClassMap_2E_element (p->mProperty_lkey, p->mProperty_mSuperClassName, p->mProperty_mHandlesRunAction, p->mProperty_mHandlesTableValueBinding, p->mProperty_mHandleEnabledBinding, p->mProperty_mHandleHiddenBinding, p->mProperty_mHandleGraphicControllerBinding, p->mProperty_mUserDefined) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_outletClassMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_outletClassMap::current_mSuperClassName (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return p->mProperty_mSuperClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_outletClassMap::current_mHandlesRunAction (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return p->mProperty_mHandlesRunAction ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_outletClassMap::current_mHandlesTableValueBinding (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return p->mProperty_mHandlesTableValueBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_outletClassMap::current_mHandleEnabledBinding (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return p->mProperty_mHandleEnabledBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_outletClassMap::current_mHandleHiddenBinding (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return p->mProperty_mHandleHiddenBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_outletClassMap::current_mHandleGraphicControllerBinding (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return p->mProperty_mHandleGraphicControllerBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_outletClassMap::current_mUserDefined (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return p->mProperty_mUserDefined ;
}

//--------------------------------------------------------------------------------------------------
//
//     @outletClassMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassMap ("outletClassMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outletClassMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletClassMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletClassMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap GGS_outletClassMap::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_outletClassMap result ;
  const GGS_outletClassMap * p = (const GGS_outletClassMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletClassMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_bindingSpecificationMap::cMapElement_bindingSpecificationMap (const GGS_bindingSpecificationMap_2E_element & inValue
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mOutletSuperClassName (inValue.mProperty_mOutletSuperClassName),
mProperty_mBindingMap (inValue.mProperty_mBindingMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_bindingSpecificationMap::cMapElement_bindingSpecificationMap (const GGS_lstring & inKey,
                                                                          const GGS_lstring & in_mOutletSuperClassName,
                                                                          const GGS_outletBindingSpecificationMap & in_mBindingMap
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mOutletSuperClassName (in_mOutletSuperClassName),
mProperty_mBindingMap (in_mBindingMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_bindingSpecificationMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_bindingSpecificationMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_bindingSpecificationMap (mProperty_lkey, mProperty_mOutletSuperClassName, mProperty_mBindingMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_bindingSpecificationMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOutletSuperClassName" ":") ;
  mProperty_mOutletSuperClassName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBindingMap" ":") ;
  mProperty_mBindingMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap::GGS_bindingSpecificationMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap::GGS_bindingSpecificationMap (const GGS_bindingSpecificationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap & GGS_bindingSpecificationMap::operator = (const GGS_bindingSpecificationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap GGS_bindingSpecificationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_bindingSpecificationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap GGS_bindingSpecificationMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_bindingSpecificationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap_2E_element_3F_ GGS_bindingSpecificationMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bindingSpecificationMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_bindingSpecificationMap * p = (cMapElement_bindingSpecificationMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_bindingSpecificationMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_bindingSpecificationMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mOutletSuperClassName = p->mProperty_mOutletSuperClassName ;
      element.mProperty_mBindingMap = p->mProperty_mBindingMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap GGS_bindingSpecificationMap::class_func_mapWithMapToOverride (const GGS_bindingSpecificationMap & inMapToOverride
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_bindingSpecificationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap GGS_bindingSpecificationMap::getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_bindingSpecificationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::enterElement (const GGS_bindingSpecificationMap_2E_element & inValue,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_bindingSpecificationMap * p = nullptr ;
  macroMyNew (p, cMapElement_bindingSpecificationMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@bindingSpecificationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::addAssign_operation (const GGS_lstring & inKey,
                                                       const GGS_lstring & inArgument0,
                                                       const GGS_outletBindingSpecificationMap & inArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_bindingSpecificationMap * p = nullptr ;
  macroMyNew (p, cMapElement_bindingSpecificationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@bindingSpecificationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap GGS_bindingSpecificationMap::add_operation (const GGS_bindingSpecificationMap & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_bindingSpecificationMap result = *this ;
  cEnumerator_bindingSpecificationMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mOutletSuperClassName (HERE), enumerator.current_mBindingMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::setter_insertKey (GGS_lstring inKey,
                                                    GGS_lstring inArgument0,
                                                    GGS_outletBindingSpecificationMap inArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_bindingSpecificationMap * p = nullptr ;
  macroMyNew (p, cMapElement_bindingSpecificationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' binding is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_bindingSpecificationMap_searchKey = "there is no '%K' binding" ;

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::method_searchKey (GGS_lstring inKey,
                                                    GGS_lstring & outArgument0,
                                                    GGS_outletBindingSpecificationMap & outArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  const cMapElement_bindingSpecificationMap * p = (const cMapElement_bindingSpecificationMap *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_bindingSpecificationMap_searchKey
                                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
    outArgument0 = p->mProperty_mOutletSuperClassName ;
    outArgument1 = p->mProperty_mBindingMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::setter_removeKey (GGS_lstring inKey,
                                                    GGS_lstring & outArgument0,
                                                    GGS_outletBindingSpecificationMap & outArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "there is no '%K' binding" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_bindingSpecificationMap * p = (cMapElement_bindingSpecificationMap *) attributes.ptr () ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
    outArgument0 = p->mProperty_mOutletSuperClassName ;
    outArgument1 = p->mProperty_mBindingMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_bindingSpecificationMap::getter_mOutletSuperClassNameForKey (const GGS_string & inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_bindingSpecificationMap * p = (const cMapElement_bindingSpecificationMap *) attributes ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
    result = p->mProperty_mOutletSuperClassName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap GGS_bindingSpecificationMap::getter_mBindingMapForKey (const GGS_string & inKey,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_bindingSpecificationMap * p = (const cMapElement_bindingSpecificationMap *) attributes ;
  GGS_outletBindingSpecificationMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
    result = p->mProperty_mBindingMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::setter_setMOutletSuperClassNameForKey (GGS_lstring inAttributeValue,
                                                                         GGS_string inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_bindingSpecificationMap * p = (cMapElement_bindingSpecificationMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
    p->mProperty_mOutletSuperClassName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::setter_setMBindingMapForKey (GGS_outletBindingSpecificationMap inAttributeValue,
                                                               GGS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_bindingSpecificationMap * p = (cMapElement_bindingSpecificationMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
    p->mProperty_mBindingMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_bindingSpecificationMap * GGS_bindingSpecificationMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                      const GGS_string & inKey
                                                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_bindingSpecificationMap * result = (cMapElement_bindingSpecificationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_bindingSpecificationMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_bindingSpecificationMap::cEnumerator_bindingSpecificationMap (const GGS_bindingSpecificationMap & inEnumeratedObject,
                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap_2E_element cEnumerator_bindingSpecificationMap::current (LOCATION_ARGS) const {
  const cMapElement_bindingSpecificationMap * p = (const cMapElement_bindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
  return GGS_bindingSpecificationMap_2E_element (p->mProperty_lkey, p->mProperty_mOutletSuperClassName, p->mProperty_mBindingMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_bindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_bindingSpecificationMap::current_mOutletSuperClassName (LOCATION_ARGS) const {
  const cMapElement_bindingSpecificationMap * p = (const cMapElement_bindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
  return p->mProperty_mOutletSuperClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap cEnumerator_bindingSpecificationMap::current_mBindingMap (LOCATION_ARGS) const {
  const cMapElement_bindingSpecificationMap * p = (const cMapElement_bindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
  return p->mProperty_mBindingMap ;
}

//--------------------------------------------------------------------------------------------------
//
//     @bindingSpecificationMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingSpecificationMap ("bindingSpecificationMap",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bindingSpecificationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingSpecificationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bindingSpecificationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bindingSpecificationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap GGS_bindingSpecificationMap::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_bindingSpecificationMap result ;
  const GGS_bindingSpecificationMap * p = (const GGS_bindingSpecificationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bindingSpecificationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingSpecificationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_autolayoutViewClassMap::cMapElement_autolayoutViewClassMap (const GGS_autolayoutViewClassMap_2E_element & inValue
                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mSuperClassName (inValue.mProperty_mSuperClassName),
mProperty_mHandlesRunAction (inValue.mProperty_mHandlesRunAction),
mProperty_mHandlesTableValueBinding (inValue.mProperty_mHandlesTableValueBinding),
mProperty_mHandleEnabledBinding (inValue.mProperty_mHandleEnabledBinding),
mProperty_mHandleHiddenBinding (inValue.mProperty_mHandleHiddenBinding),
mProperty_mHandleGraphicControllerBinding (inValue.mProperty_mHandleGraphicControllerBinding),
mProperty_mUserDefined (inValue.mProperty_mUserDefined),
mProperty_mParameterList (inValue.mProperty_mParameterList),
mProperty_mAutoLayoutViewFunctionMap (inValue.mProperty_mAutoLayoutViewFunctionMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_autolayoutViewClassMap::cMapElement_autolayoutViewClassMap (const GGS_lstring & inKey,
                                                                        const GGS_lstring & in_mSuperClassName,
                                                                        const GGS_bool & in_mHandlesRunAction,
                                                                        const GGS_bool & in_mHandlesTableValueBinding,
                                                                        const GGS_bool & in_mHandleEnabledBinding,
                                                                        const GGS_bool & in_mHandleHiddenBinding,
                                                                        const GGS_bool & in_mHandleGraphicControllerBinding,
                                                                        const GGS_bool & in_mUserDefined,
                                                                        const GGS_autoLayoutClassParameterList & in_mParameterList,
                                                                        const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap
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

//--------------------------------------------------------------------------------------------------

bool cMapElement_autolayoutViewClassMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_autolayoutViewClassMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_autolayoutViewClassMap (mProperty_lkey, mProperty_mSuperClassName, mProperty_mHandlesRunAction, mProperty_mHandlesTableValueBinding, mProperty_mHandleEnabledBinding, mProperty_mHandleHiddenBinding, mProperty_mHandleGraphicControllerBinding, mProperty_mUserDefined, mProperty_mParameterList, mProperty_mAutoLayoutViewFunctionMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_autolayoutViewClassMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSuperClassName" ":") ;
  mProperty_mSuperClassName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHandlesRunAction" ":") ;
  mProperty_mHandlesRunAction.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHandlesTableValueBinding" ":") ;
  mProperty_mHandlesTableValueBinding.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHandleEnabledBinding" ":") ;
  mProperty_mHandleEnabledBinding.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHandleHiddenBinding" ":") ;
  mProperty_mHandleHiddenBinding.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHandleGraphicControllerBinding" ":") ;
  mProperty_mHandleGraphicControllerBinding.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mUserDefined" ":") ;
  mProperty_mUserDefined.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mParameterList" ":") ;
  mProperty_mParameterList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAutoLayoutViewFunctionMap" ":") ;
  mProperty_mAutoLayoutViewFunctionMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap::GGS_autolayoutViewClassMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap::GGS_autolayoutViewClassMap (const GGS_autolayoutViewClassMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap & GGS_autolayoutViewClassMap::operator = (const GGS_autolayoutViewClassMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap GGS_autolayoutViewClassMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_autolayoutViewClassMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap GGS_autolayoutViewClassMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_autolayoutViewClassMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap_2E_element_3F_ GGS_autolayoutViewClassMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autolayoutViewClassMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_autolayoutViewClassMap * p = (cMapElement_autolayoutViewClassMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_autolayoutViewClassMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_autolayoutViewClassMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mSuperClassName = p->mProperty_mSuperClassName ;
      element.mProperty_mHandlesRunAction = p->mProperty_mHandlesRunAction ;
      element.mProperty_mHandlesTableValueBinding = p->mProperty_mHandlesTableValueBinding ;
      element.mProperty_mHandleEnabledBinding = p->mProperty_mHandleEnabledBinding ;
      element.mProperty_mHandleHiddenBinding = p->mProperty_mHandleHiddenBinding ;
      element.mProperty_mHandleGraphicControllerBinding = p->mProperty_mHandleGraphicControllerBinding ;
      element.mProperty_mUserDefined = p->mProperty_mUserDefined ;
      element.mProperty_mParameterList = p->mProperty_mParameterList ;
      element.mProperty_mAutoLayoutViewFunctionMap = p->mProperty_mAutoLayoutViewFunctionMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap GGS_autolayoutViewClassMap::class_func_mapWithMapToOverride (const GGS_autolayoutViewClassMap & inMapToOverride
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autolayoutViewClassMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap GGS_autolayoutViewClassMap::getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_autolayoutViewClassMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::enterElement (const GGS_autolayoutViewClassMap_2E_element & inValue,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_autolayoutViewClassMap * p = nullptr ;
  macroMyNew (p, cMapElement_autolayoutViewClassMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@autolayoutViewClassMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::addAssign_operation (const GGS_lstring & inKey,
                                                      const GGS_lstring & inArgument0,
                                                      const GGS_bool & inArgument1,
                                                      const GGS_bool & inArgument2,
                                                      const GGS_bool & inArgument3,
                                                      const GGS_bool & inArgument4,
                                                      const GGS_bool & inArgument5,
                                                      const GGS_bool & inArgument6,
                                                      const GGS_autoLayoutClassParameterList & inArgument7,
                                                      const GGS_astAutoLayoutViewFunctionMap & inArgument8,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_autolayoutViewClassMap * p = nullptr ;
  macroMyNew (p, cMapElement_autolayoutViewClassMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@autolayoutViewClassMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap GGS_autolayoutViewClassMap::add_operation (const GGS_autolayoutViewClassMap & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_autolayoutViewClassMap result = *this ;
  cEnumerator_autolayoutViewClassMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mSuperClassName (HERE), enumerator.current_mHandlesRunAction (HERE), enumerator.current_mHandlesTableValueBinding (HERE), enumerator.current_mHandleEnabledBinding (HERE), enumerator.current_mHandleHiddenBinding (HERE), enumerator.current_mHandleGraphicControllerBinding (HERE), enumerator.current_mUserDefined (HERE), enumerator.current_mParameterList (HERE), enumerator.current_mAutoLayoutViewFunctionMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::setter_insertKey (GGS_lstring inKey,
                                                   GGS_lstring inArgument0,
                                                   GGS_bool inArgument1,
                                                   GGS_bool inArgument2,
                                                   GGS_bool inArgument3,
                                                   GGS_bool inArgument4,
                                                   GGS_bool inArgument5,
                                                   GGS_bool inArgument6,
                                                   GGS_autoLayoutClassParameterList inArgument7,
                                                   GGS_astAutoLayoutViewFunctionMap inArgument8,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_autolayoutViewClassMap * p = nullptr ;
  macroMyNew (p, cMapElement_autolayoutViewClassMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' outlet class is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_autolayoutViewClassMap_searchKey = "there is no '%K' outlet class" ;

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::method_searchKey (GGS_lstring inKey,
                                                   GGS_lstring & outArgument0,
                                                   GGS_bool & outArgument1,
                                                   GGS_bool & outArgument2,
                                                   GGS_bool & outArgument3,
                                                   GGS_bool & outArgument4,
                                                   GGS_bool & outArgument5,
                                                   GGS_bool & outArgument6,
                                                   GGS_autoLayoutClassParameterList & outArgument7,
                                                   GGS_astAutoLayoutViewFunctionMap & outArgument8,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) performSearch (inKey,
                                                                                                             inCompiler,
                                                                                                             kSearchErrorMessage_autolayoutViewClassMap_searchKey
                                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autolayoutViewClassMap::getter_mSuperClassNameForKey (const GGS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) attributes ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    result = p->mProperty_mSuperClassName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutViewClassMap::getter_mHandlesRunActionForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    result = p->mProperty_mHandlesRunAction ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutViewClassMap::getter_mHandlesTableValueBindingForKey (const GGS_string & inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    result = p->mProperty_mHandlesTableValueBinding ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutViewClassMap::getter_mHandleEnabledBindingForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    result = p->mProperty_mHandleEnabledBinding ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutViewClassMap::getter_mHandleHiddenBindingForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    result = p->mProperty_mHandleHiddenBinding ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutViewClassMap::getter_mHandleGraphicControllerBindingForKey (const GGS_string & inKey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    result = p->mProperty_mHandleGraphicControllerBinding ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutViewClassMap::getter_mUserDefinedForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    result = p->mProperty_mUserDefined ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList GGS_autolayoutViewClassMap::getter_mParameterListForKey (const GGS_string & inKey,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) attributes ;
  GGS_autoLayoutClassParameterList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    result = p->mProperty_mParameterList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap GGS_autolayoutViewClassMap::getter_mAutoLayoutViewFunctionMapForKey (const GGS_string & inKey,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) attributes ;
  GGS_astAutoLayoutViewFunctionMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    result = p->mProperty_mAutoLayoutViewFunctionMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::setter_setMSuperClassNameForKey (GGS_lstring inAttributeValue,
                                                                  GGS_string inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autolayoutViewClassMap * p = (cMapElement_autolayoutViewClassMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    p->mProperty_mSuperClassName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::setter_setMHandlesRunActionForKey (GGS_bool inAttributeValue,
                                                                    GGS_string inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autolayoutViewClassMap * p = (cMapElement_autolayoutViewClassMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    p->mProperty_mHandlesRunAction = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::setter_setMHandlesTableValueBindingForKey (GGS_bool inAttributeValue,
                                                                            GGS_string inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autolayoutViewClassMap * p = (cMapElement_autolayoutViewClassMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    p->mProperty_mHandlesTableValueBinding = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::setter_setMHandleEnabledBindingForKey (GGS_bool inAttributeValue,
                                                                        GGS_string inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autolayoutViewClassMap * p = (cMapElement_autolayoutViewClassMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    p->mProperty_mHandleEnabledBinding = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::setter_setMHandleHiddenBindingForKey (GGS_bool inAttributeValue,
                                                                       GGS_string inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autolayoutViewClassMap * p = (cMapElement_autolayoutViewClassMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    p->mProperty_mHandleHiddenBinding = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::setter_setMHandleGraphicControllerBindingForKey (GGS_bool inAttributeValue,
                                                                                  GGS_string inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autolayoutViewClassMap * p = (cMapElement_autolayoutViewClassMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    p->mProperty_mHandleGraphicControllerBinding = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::setter_setMUserDefinedForKey (GGS_bool inAttributeValue,
                                                               GGS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autolayoutViewClassMap * p = (cMapElement_autolayoutViewClassMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    p->mProperty_mUserDefined = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::setter_setMParameterListForKey (GGS_autoLayoutClassParameterList inAttributeValue,
                                                                 GGS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autolayoutViewClassMap * p = (cMapElement_autolayoutViewClassMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    p->mProperty_mParameterList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::setter_setMAutoLayoutViewFunctionMapForKey (GGS_astAutoLayoutViewFunctionMap inAttributeValue,
                                                                             GGS_string inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autolayoutViewClassMap * p = (cMapElement_autolayoutViewClassMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
    p->mProperty_mAutoLayoutViewFunctionMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_autolayoutViewClassMap * GGS_autolayoutViewClassMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                    const GGS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_autolayoutViewClassMap * result = (cMapElement_autolayoutViewClassMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_autolayoutViewClassMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_autolayoutViewClassMap::cEnumerator_autolayoutViewClassMap (const GGS_autolayoutViewClassMap & inEnumeratedObject,
                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap_2E_element cEnumerator_autolayoutViewClassMap::current (LOCATION_ARGS) const {
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
  return GGS_autolayoutViewClassMap_2E_element (p->mProperty_lkey, p->mProperty_mSuperClassName, p->mProperty_mHandlesRunAction, p->mProperty_mHandlesTableValueBinding, p->mProperty_mHandleEnabledBinding, p->mProperty_mHandleHiddenBinding, p->mProperty_mHandleGraphicControllerBinding, p->mProperty_mUserDefined, p->mProperty_mParameterList, p->mProperty_mAutoLayoutViewFunctionMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_autolayoutViewClassMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_autolayoutViewClassMap::current_mSuperClassName (LOCATION_ARGS) const {
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
  return p->mProperty_mSuperClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_autolayoutViewClassMap::current_mHandlesRunAction (LOCATION_ARGS) const {
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
  return p->mProperty_mHandlesRunAction ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_autolayoutViewClassMap::current_mHandlesTableValueBinding (LOCATION_ARGS) const {
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
  return p->mProperty_mHandlesTableValueBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_autolayoutViewClassMap::current_mHandleEnabledBinding (LOCATION_ARGS) const {
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
  return p->mProperty_mHandleEnabledBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_autolayoutViewClassMap::current_mHandleHiddenBinding (LOCATION_ARGS) const {
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
  return p->mProperty_mHandleHiddenBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_autolayoutViewClassMap::current_mHandleGraphicControllerBinding (LOCATION_ARGS) const {
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
  return p->mProperty_mHandleGraphicControllerBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_autolayoutViewClassMap::current_mUserDefined (LOCATION_ARGS) const {
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
  return p->mProperty_mUserDefined ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList cEnumerator_autolayoutViewClassMap::current_mParameterList (LOCATION_ARGS) const {
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
  return p->mProperty_mParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap cEnumerator_autolayoutViewClassMap::current_mAutoLayoutViewFunctionMap (LOCATION_ARGS) const {
  const cMapElement_autolayoutViewClassMap * p = (const cMapElement_autolayoutViewClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autolayoutViewClassMap) ;
  return p->mProperty_mAutoLayoutViewFunctionMap ;
}

//--------------------------------------------------------------------------------------------------
//
//     @autolayoutViewClassMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autolayoutViewClassMap ("autolayoutViewClassMap",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autolayoutViewClassMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autolayoutViewClassMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autolayoutViewClassMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autolayoutViewClassMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap GGS_autolayoutViewClassMap::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_autolayoutViewClassMap result ;
  const GGS_autolayoutViewClassMap * p = (const GGS_autolayoutViewClassMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autolayoutViewClassMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autolayoutViewClassMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_autoLayoutBindingSpecificationMap::cMapElement_autoLayoutBindingSpecificationMap (const GGS_autoLayoutBindingSpecificationMap_2E_element & inValue
                                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mOutletSuperClassName (inValue.mProperty_mOutletSuperClassName),
mProperty_mBindingMap (inValue.mProperty_mBindingMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_autoLayoutBindingSpecificationMap::cMapElement_autoLayoutBindingSpecificationMap (const GGS_lstring & inKey,
                                                                                              const GGS_lstring & in_mOutletSuperClassName,
                                                                                              const GGS_autoLayoutViewBindingSpecificationMap & in_mBindingMap
                                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mOutletSuperClassName (in_mOutletSuperClassName),
mProperty_mBindingMap (in_mBindingMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_autoLayoutBindingSpecificationMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_autoLayoutBindingSpecificationMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_autoLayoutBindingSpecificationMap (mProperty_lkey, mProperty_mOutletSuperClassName, mProperty_mBindingMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_autoLayoutBindingSpecificationMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOutletSuperClassName" ":") ;
  mProperty_mOutletSuperClassName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBindingMap" ":") ;
  mProperty_mBindingMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap::GGS_autoLayoutBindingSpecificationMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap::GGS_autoLayoutBindingSpecificationMap (const GGS_autoLayoutBindingSpecificationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap & GGS_autoLayoutBindingSpecificationMap::operator = (const GGS_autoLayoutBindingSpecificationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap GGS_autoLayoutBindingSpecificationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_autoLayoutBindingSpecificationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap GGS_autoLayoutBindingSpecificationMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_autoLayoutBindingSpecificationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ GGS_autoLayoutBindingSpecificationMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_autoLayoutBindingSpecificationMap * p = (cMapElement_autoLayoutBindingSpecificationMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_autoLayoutBindingSpecificationMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_autoLayoutBindingSpecificationMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mOutletSuperClassName = p->mProperty_mOutletSuperClassName ;
      element.mProperty_mBindingMap = p->mProperty_mBindingMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap GGS_autoLayoutBindingSpecificationMap::class_func_mapWithMapToOverride (const GGS_autoLayoutBindingSpecificationMap & inMapToOverride
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_autoLayoutBindingSpecificationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap GGS_autoLayoutBindingSpecificationMap::getter_overriddenMap (Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutBindingSpecificationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::enterElement (const GGS_autoLayoutBindingSpecificationMap_2E_element & inValue,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_autoLayoutBindingSpecificationMap * p = nullptr ;
  macroMyNew (p, cMapElement_autoLayoutBindingSpecificationMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@autoLayoutBindingSpecificationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::addAssign_operation (const GGS_lstring & inKey,
                                                                 const GGS_lstring & inArgument0,
                                                                 const GGS_autoLayoutViewBindingSpecificationMap & inArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_autoLayoutBindingSpecificationMap * p = nullptr ;
  macroMyNew (p, cMapElement_autoLayoutBindingSpecificationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@autoLayoutBindingSpecificationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap GGS_autoLayoutBindingSpecificationMap::add_operation (const GGS_autoLayoutBindingSpecificationMap & inOperand,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutBindingSpecificationMap result = *this ;
  cEnumerator_autoLayoutBindingSpecificationMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mOutletSuperClassName (HERE), enumerator.current_mBindingMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::setter_insertKey (GGS_lstring inKey,
                                                              GGS_lstring inArgument0,
                                                              GGS_autoLayoutViewBindingSpecificationMap inArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_autoLayoutBindingSpecificationMap * p = nullptr ;
  macroMyNew (p, cMapElement_autoLayoutBindingSpecificationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' binding is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_autoLayoutBindingSpecificationMap_searchKey = "there is no '%K' binding" ;

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::method_searchKey (GGS_lstring inKey,
                                                              GGS_lstring & outArgument0,
                                                              GGS_autoLayoutViewBindingSpecificationMap & outArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_autoLayoutBindingSpecificationMap * p = (const cMapElement_autoLayoutBindingSpecificationMap *) performSearch (inKey,
                                                                                                                                   inCompiler,
                                                                                                                                   kSearchErrorMessage_autoLayoutBindingSpecificationMap_searchKey
                                                                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_autoLayoutBindingSpecificationMap) ;
    outArgument0 = p->mProperty_mOutletSuperClassName ;
    outArgument1 = p->mProperty_mBindingMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::setter_removeKey (GGS_lstring inKey,
                                                              GGS_lstring & outArgument0,
                                                              GGS_autoLayoutViewBindingSpecificationMap & outArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "there is no '%K' binding" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_autoLayoutBindingSpecificationMap * p = (cMapElement_autoLayoutBindingSpecificationMap *) attributes.ptr () ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_autoLayoutBindingSpecificationMap) ;
    outArgument0 = p->mProperty_mOutletSuperClassName ;
    outArgument1 = p->mProperty_mBindingMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutBindingSpecificationMap::getter_mOutletSuperClassNameForKey (const GGS_string & inKey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autoLayoutBindingSpecificationMap * p = (const cMapElement_autoLayoutBindingSpecificationMap *) attributes ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autoLayoutBindingSpecificationMap) ;
    result = p->mProperty_mOutletSuperClassName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap GGS_autoLayoutBindingSpecificationMap::getter_mBindingMapForKey (const GGS_string & inKey,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autoLayoutBindingSpecificationMap * p = (const cMapElement_autoLayoutBindingSpecificationMap *) attributes ;
  GGS_autoLayoutViewBindingSpecificationMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autoLayoutBindingSpecificationMap) ;
    result = p->mProperty_mBindingMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::setter_setMOutletSuperClassNameForKey (GGS_lstring inAttributeValue,
                                                                                   GGS_string inKey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autoLayoutBindingSpecificationMap * p = (cMapElement_autoLayoutBindingSpecificationMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autoLayoutBindingSpecificationMap) ;
    p->mProperty_mOutletSuperClassName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::setter_setMBindingMapForKey (GGS_autoLayoutViewBindingSpecificationMap inAttributeValue,
                                                                         GGS_string inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autoLayoutBindingSpecificationMap * p = (cMapElement_autoLayoutBindingSpecificationMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autoLayoutBindingSpecificationMap) ;
    p->mProperty_mBindingMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_autoLayoutBindingSpecificationMap * GGS_autoLayoutBindingSpecificationMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                          const GGS_string & inKey
                                                                                                                          COMMA_LOCATION_ARGS) {
  cMapElement_autoLayoutBindingSpecificationMap * result = (cMapElement_autoLayoutBindingSpecificationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_autoLayoutBindingSpecificationMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutBindingSpecificationMap::cEnumerator_autoLayoutBindingSpecificationMap (const GGS_autoLayoutBindingSpecificationMap & inEnumeratedObject,
                                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap_2E_element cEnumerator_autoLayoutBindingSpecificationMap::current (LOCATION_ARGS) const {
  const cMapElement_autoLayoutBindingSpecificationMap * p = (const cMapElement_autoLayoutBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autoLayoutBindingSpecificationMap) ;
  return GGS_autoLayoutBindingSpecificationMap_2E_element (p->mProperty_lkey, p->mProperty_mOutletSuperClassName, p->mProperty_mBindingMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_autoLayoutBindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_autoLayoutBindingSpecificationMap::current_mOutletSuperClassName (LOCATION_ARGS) const {
  const cMapElement_autoLayoutBindingSpecificationMap * p = (const cMapElement_autoLayoutBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autoLayoutBindingSpecificationMap) ;
  return p->mProperty_mOutletSuperClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap cEnumerator_autoLayoutBindingSpecificationMap::current_mBindingMap (LOCATION_ARGS) const {
  const cMapElement_autoLayoutBindingSpecificationMap * p = (const cMapElement_autoLayoutBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autoLayoutBindingSpecificationMap) ;
  return p->mProperty_mBindingMap ;
}

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutBindingSpecificationMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap ("autoLayoutBindingSpecificationMap",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutBindingSpecificationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutBindingSpecificationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutBindingSpecificationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap GGS_autoLayoutBindingSpecificationMap::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_autoLayoutBindingSpecificationMap result ;
  const GGS_autoLayoutBindingSpecificationMap * p = (const GGS_autoLayoutBindingSpecificationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutBindingSpecificationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutBindingSpecificationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractDeclarationAST_2E_weak::objectCompare (const GGS_abstractDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST_2E_weak::GGS_abstractDeclarationAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST_2E_weak & GGS_abstractDeclarationAST_2E_weak::operator = (const GGS_abstractDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST_2E_weak::GGS_abstractDeclarationAST_2E_weak (const GGS_abstractDeclarationAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST_2E_weak GGS_abstractDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST GGS_abstractDeclarationAST_2E_weak::bang_abstractDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractDeclarationAST) ;
      result = GGS_abstractDeclarationAST ((cPtr_abstractDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractDeclarationAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak ("abstractDeclarationAST.weak",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST_2E_weak GGS_abstractDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_abstractDeclarationAST_2E_weak result ;
  const GGS_abstractDeclarationAST_2E_weak * p = (const GGS_abstractDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//'@declarationPrecedenceGraph' graph
//
//--------------------------------------------------------------------------------------------------

GGS_declarationPrecedenceGraph::GGS_declarationPrecedenceGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationPrecedenceGraph GGS_declarationPrecedenceGraph::class_func_emptyGraph (LOCATION_ARGS) {
  GGS_declarationPrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationPrecedenceGraph GGS_declarationPrecedenceGraph::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_declarationPrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationPrecedenceGraph::setter_addNode (GGS_lstring inKey,
                                                     GGS_abstractDeclarationAST inArgument_0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GGS_declarationListAST::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' symbol is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}


//--------------------------------------------------------------------------------------------------

void GGS_declarationPrecedenceGraph::method_topologicalSort (GGS_declarationListAST & outSortedList,
                                                             GGS_lstringlist & outSortedKeyList,
                                                             GGS_declarationListAST & outUnsortedList,
                                                             GGS_lstringlist & outUnsortedKeyList,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_declarationListAST (sortedList) ;
  outUnsortedList = GGS_declarationListAST (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationPrecedenceGraph::method_depthFirstTopologicalSort (GGS_declarationListAST & outSortedList,
                                                                       GGS_lstringlist & outSortedKeyList,
                                                                       GGS_declarationListAST & outUnsortedList,
                                                                       GGS_lstringlist & outUnsortedKeyList,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_declarationListAST (sortedList) ;
  outUnsortedList = GGS_declarationListAST (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GGS_declarationPrecedenceGraph GGS_declarationPrecedenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GGS_declarationPrecedenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationPrecedenceGraph::method_circularities (GGS_declarationListAST & outInfoList,
                                                           GGS_lstringlist & outKeyList
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_declarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationPrecedenceGraph::method_nodesWithNoSuccessor (GGS_declarationListAST & outInfoList,
                                                                  GGS_lstringlist & outKeyList
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_declarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationPrecedenceGraph::method_nodesWithNoPredecessor (GGS_declarationListAST & outInfoList,
                                                                    GGS_lstringlist & outKeyList
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_declarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationPrecedenceGraph GGS_declarationPrecedenceGraph::getter_subgraphFromNodes (const GGS_lstringlist & inStartKeyList,
                                                                                         const GGS_stringset & inKeysToExclude,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_declarationPrecedenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationPrecedenceGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GGS_declarationListAST resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_declarationPrecedenceGraph::getter_accessibleNodesFrom (const GGS_lstringlist & inStartKeyList,
                                                                            const GGS_stringset & inNodesToExclude,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  GGS_declarationPrecedenceGraph resultingGraph ;
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

//--------------------------------------------------------------------------------------------------
//
//     @declarationPrecedenceGraph generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationPrecedenceGraph ("declarationPrecedenceGraph",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_declarationPrecedenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationPrecedenceGraph ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declarationPrecedenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declarationPrecedenceGraph (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationPrecedenceGraph GGS_declarationPrecedenceGraph::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_declarationPrecedenceGraph result ;
  const GGS_declarationPrecedenceGraph * p = (const GGS_declarationPrecedenceGraph *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declarationPrecedenceGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationPrecedenceGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@externSwiftDelegateList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_externSwiftDelegateList : public cCollectionElement {
  public: GGS_externSwiftDelegateList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_externSwiftDelegateList (const GGS_lstring & in_mExternSwiftDelegateName
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_externSwiftDelegateList (const GGS_externSwiftDelegateList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_externSwiftDelegateList::cCollectionElement_externSwiftDelegateList (const GGS_lstring & in_mExternSwiftDelegateName
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExternSwiftDelegateName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_externSwiftDelegateList::cCollectionElement_externSwiftDelegateList (const GGS_externSwiftDelegateList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExternSwiftDelegateName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_externSwiftDelegateList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_externSwiftDelegateList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_externSwiftDelegateList (mObject.mProperty_mExternSwiftDelegateName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_externSwiftDelegateList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExternSwiftDelegateName" ":") ;
  mObject.mProperty_mExternSwiftDelegateName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList::GGS_externSwiftDelegateList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList::GGS_externSwiftDelegateList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList GGS_externSwiftDelegateList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_externSwiftDelegateList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList GGS_externSwiftDelegateList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_externSwiftDelegateList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList::enterElement (const GGS_externSwiftDelegateList_2E_element & inValue,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_externSwiftDelegateList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList GGS_externSwiftDelegateList::class_func_listWithValue (const GGS_lstring & inOperand0
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_externSwiftDelegateList result ;
  if (inOperand0.isValid ()) {
    result = GGS_externSwiftDelegateList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_externSwiftDelegateList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GGS_lstring & in_mExternSwiftDelegateName
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_externSwiftDelegateList * p = nullptr ;
  macroMyNew (p, cCollectionElement_externSwiftDelegateList (in_mExternSwiftDelegateName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList::addAssign_operation (const GGS_lstring & inOperand0
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externSwiftDelegateList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList::setter_append (const GGS_lstring inOperand0,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externSwiftDelegateList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                        const GGS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externSwiftDelegateList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                        const GGS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_externSwiftDelegateList * p = (cCollectionElement_externSwiftDelegateList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
      outOperand0 = p->mObject.mProperty_mExternSwiftDelegateName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList::setter_popFirst (GGS_lstring & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftDelegateList * p = (cCollectionElement_externSwiftDelegateList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftDelegateName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList::setter_popLast (GGS_lstring & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftDelegateList * p = (cCollectionElement_externSwiftDelegateList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftDelegateName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList::method_first (GGS_lstring & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftDelegateList * p = (cCollectionElement_externSwiftDelegateList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftDelegateName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList::method_last (GGS_lstring & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftDelegateList * p = (cCollectionElement_externSwiftDelegateList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftDelegateName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList GGS_externSwiftDelegateList::add_operation (const GGS_externSwiftDelegateList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_externSwiftDelegateList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList GGS_externSwiftDelegateList::getter_subListWithRange (const GGS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_externSwiftDelegateList result = GGS_externSwiftDelegateList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList GGS_externSwiftDelegateList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_externSwiftDelegateList result = GGS_externSwiftDelegateList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList GGS_externSwiftDelegateList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_externSwiftDelegateList result = GGS_externSwiftDelegateList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList::plusAssign_operation (const GGS_externSwiftDelegateList inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList::setter_setMExternSwiftDelegateNameAtIndex (GGS_lstring inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_externSwiftDelegateList * p = (cCollectionElement_externSwiftDelegateList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExternSwiftDelegateName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_externSwiftDelegateList::getter_mExternSwiftDelegateNameAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftDelegateList * p = (cCollectionElement_externSwiftDelegateList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
    result = p->mObject.mProperty_mExternSwiftDelegateName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_externSwiftDelegateList::cEnumerator_externSwiftDelegateList (const GGS_externSwiftDelegateList & inEnumeratedObject,
                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList_2E_element cEnumerator_externSwiftDelegateList::current (LOCATION_ARGS) const {
  const cCollectionElement_externSwiftDelegateList * p = (const cCollectionElement_externSwiftDelegateList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_externSwiftDelegateList::current_mExternSwiftDelegateName (LOCATION_ARGS) const {
  const cCollectionElement_externSwiftDelegateList * p = (const cCollectionElement_externSwiftDelegateList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
  return p->mObject.mProperty_mExternSwiftDelegateName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @externSwiftDelegateList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externSwiftDelegateList ("externSwiftDelegateList",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_externSwiftDelegateList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externSwiftDelegateList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externSwiftDelegateList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externSwiftDelegateList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList GGS_externSwiftDelegateList::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_externSwiftDelegateList result ;
  const GGS_externSwiftDelegateList * p = (const GGS_externSwiftDelegateList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externSwiftDelegateList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externSwiftDelegateList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@externSwiftFunctionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_externSwiftFunctionList : public cCollectionElement {
  public: GGS_externSwiftFunctionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_externSwiftFunctionList (const GGS_lstring & in_mExternSwiftFunctionName,
                                                      const GGS_lstring & in_mCallerName
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_externSwiftFunctionList (const GGS_externSwiftFunctionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_externSwiftFunctionList::cCollectionElement_externSwiftFunctionList (const GGS_lstring & in_mExternSwiftFunctionName,
                                                                                        const GGS_lstring & in_mCallerName
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExternSwiftFunctionName, in_mCallerName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_externSwiftFunctionList::cCollectionElement_externSwiftFunctionList (const GGS_externSwiftFunctionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExternSwiftFunctionName, inElement.mProperty_mCallerName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_externSwiftFunctionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_externSwiftFunctionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_externSwiftFunctionList (mObject.mProperty_mExternSwiftFunctionName, mObject.mProperty_mCallerName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_externSwiftFunctionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExternSwiftFunctionName" ":") ;
  mObject.mProperty_mExternSwiftFunctionName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCallerName" ":") ;
  mObject.mProperty_mCallerName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList::GGS_externSwiftFunctionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList::GGS_externSwiftFunctionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList GGS_externSwiftFunctionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_externSwiftFunctionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList GGS_externSwiftFunctionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_externSwiftFunctionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList::enterElement (const GGS_externSwiftFunctionList_2E_element & inValue,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_externSwiftFunctionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList GGS_externSwiftFunctionList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                   const GGS_lstring & inOperand1
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_externSwiftFunctionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_externSwiftFunctionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_externSwiftFunctionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GGS_lstring & in_mExternSwiftFunctionName,
                                                             const GGS_lstring & in_mCallerName
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_externSwiftFunctionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_externSwiftFunctionList (in_mExternSwiftFunctionName,
                                                             in_mCallerName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList::addAssign_operation (const GGS_lstring & inOperand0,
                                                       const GGS_lstring & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externSwiftFunctionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList::setter_append (const GGS_lstring inOperand0,
                                                 const GGS_lstring inOperand1,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externSwiftFunctionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                        const GGS_lstring inOperand1,
                                                        const GGS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externSwiftFunctionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                        GGS_lstring & outOperand1,
                                                        const GGS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
      outOperand0 = p->mObject.mProperty_mExternSwiftFunctionName ;
      outOperand1 = p->mObject.mProperty_mCallerName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList::setter_popFirst (GGS_lstring & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftFunctionName ;
    outOperand1 = p->mObject.mProperty_mCallerName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList::setter_popLast (GGS_lstring & outOperand0,
                                                  GGS_lstring & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftFunctionName ;
    outOperand1 = p->mObject.mProperty_mCallerName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList::method_first (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftFunctionName ;
    outOperand1 = p->mObject.mProperty_mCallerName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList::method_last (GGS_lstring & outOperand0,
                                               GGS_lstring & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftFunctionName ;
    outOperand1 = p->mObject.mProperty_mCallerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList GGS_externSwiftFunctionList::add_operation (const GGS_externSwiftFunctionList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_externSwiftFunctionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList GGS_externSwiftFunctionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_externSwiftFunctionList result = GGS_externSwiftFunctionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList GGS_externSwiftFunctionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_externSwiftFunctionList result = GGS_externSwiftFunctionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList GGS_externSwiftFunctionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_externSwiftFunctionList result = GGS_externSwiftFunctionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList::plusAssign_operation (const GGS_externSwiftFunctionList inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList::setter_setMExternSwiftFunctionNameAtIndex (GGS_lstring inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExternSwiftFunctionName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_externSwiftFunctionList::getter_mExternSwiftFunctionNameAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
    result = p->mObject.mProperty_mExternSwiftFunctionName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList::setter_setMCallerNameAtIndex (GGS_lstring inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCallerName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_externSwiftFunctionList::getter_mCallerNameAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
    result = p->mObject.mProperty_mCallerName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_externSwiftFunctionList::cEnumerator_externSwiftFunctionList (const GGS_externSwiftFunctionList & inEnumeratedObject,
                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList_2E_element cEnumerator_externSwiftFunctionList::current (LOCATION_ARGS) const {
  const cCollectionElement_externSwiftFunctionList * p = (const cCollectionElement_externSwiftFunctionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_externSwiftFunctionList::current_mExternSwiftFunctionName (LOCATION_ARGS) const {
  const cCollectionElement_externSwiftFunctionList * p = (const cCollectionElement_externSwiftFunctionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
  return p->mObject.mProperty_mExternSwiftFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_externSwiftFunctionList::current_mCallerName (LOCATION_ARGS) const {
  const cCollectionElement_externSwiftFunctionList * p = (const cCollectionElement_externSwiftFunctionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
  return p->mObject.mProperty_mCallerName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @externSwiftFunctionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externSwiftFunctionList ("externSwiftFunctionList",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_externSwiftFunctionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externSwiftFunctionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externSwiftFunctionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externSwiftFunctionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList GGS_externSwiftFunctionList::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_externSwiftFunctionList result ;
  const GGS_externSwiftFunctionList * p = (const GGS_externSwiftFunctionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externSwiftFunctionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externSwiftFunctionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_externFunctionMap::cMapElement_externFunctionMap (const GGS_externFunctionMap_2E_element & inValue
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_externFunctionMap::cMapElement_externFunctionMap (const GGS_lstring & inKey
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_externFunctionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_externFunctionMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_externFunctionMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_externFunctionMap::description (String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap::GGS_externFunctionMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap::GGS_externFunctionMap (const GGS_externFunctionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap & GGS_externFunctionMap::operator = (const GGS_externFunctionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap GGS_externFunctionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_externFunctionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap GGS_externFunctionMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_externFunctionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element_3F_ GGS_externFunctionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_externFunctionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_externFunctionMap * p = (cMapElement_externFunctionMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_externFunctionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_externFunctionMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap GGS_externFunctionMap::class_func_mapWithMapToOverride (const GGS_externFunctionMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_externFunctionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap GGS_externFunctionMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_externFunctionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap::enterElement (const GGS_externFunctionMap_2E_element & inValue,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_externFunctionMap * p = nullptr ;
  macroMyNew (p, cMapElement_externFunctionMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@externFunctionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap::addAssign_operation (const GGS_lstring & inKey,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_externFunctionMap * p = nullptr ;
  macroMyNew (p, cMapElement_externFunctionMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@externFunctionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap GGS_externFunctionMap::add_operation (const GGS_externFunctionMap & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_externFunctionMap result = *this ;
  cEnumerator_externFunctionMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap::setter_insertKey (GGS_lstring inKey,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_externFunctionMap * p = nullptr ;
  macroMyNew (p, cMapElement_externFunctionMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' extern function is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_externFunctionMap * GGS_externFunctionMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                          const GGS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) {
  cMapElement_externFunctionMap * result = (cMapElement_externFunctionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_externFunctionMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_externFunctionMap::cEnumerator_externFunctionMap (const GGS_externFunctionMap & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element cEnumerator_externFunctionMap::current (LOCATION_ARGS) const {
  const cMapElement_externFunctionMap * p = (const cMapElement_externFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externFunctionMap) ;
  return GGS_externFunctionMap_2E_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_externFunctionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//
//     @externFunctionMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionMap ("externFunctionMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_externFunctionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externFunctionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externFunctionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap GGS_externFunctionMap::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_externFunctionMap result ;
  const GGS_externFunctionMap * p = (const GGS_externFunctionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externFunctionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_transientClassDeclarationAST_2E_weak::objectCompare (const GGS_transientClassDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientClassDeclarationAST_2E_weak::GGS_transientClassDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientClassDeclarationAST_2E_weak & GGS_transientClassDeclarationAST_2E_weak::operator = (const GGS_transientClassDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientClassDeclarationAST_2E_weak::GGS_transientClassDeclarationAST_2E_weak (const GGS_transientClassDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_transientClassDeclarationAST_2E_weak GGS_transientClassDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_transientClassDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientClassDeclarationAST GGS_transientClassDeclarationAST_2E_weak::bang_transientClassDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_transientClassDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_transientClassDeclarationAST) ;
      result = GGS_transientClassDeclarationAST ((cPtr_transientClassDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @transientClassDeclarationAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientClassDeclarationAST_2E_weak ("transientClassDeclarationAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_transientClassDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientClassDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientClassDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientClassDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientClassDeclarationAST_2E_weak GGS_transientClassDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_transientClassDeclarationAST_2E_weak result ;
  const GGS_transientClassDeclarationAST_2E_weak * p = (const GGS_transientClassDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientClassDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientClassDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumerationDeclarationAST_2E_weak::objectCompare (const GGS_enumerationDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST_2E_weak::GGS_enumerationDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST_2E_weak & GGS_enumerationDeclarationAST_2E_weak::operator = (const GGS_enumerationDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST_2E_weak::GGS_enumerationDeclarationAST_2E_weak (const GGS_enumerationDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST_2E_weak GGS_enumerationDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_enumerationDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST GGS_enumerationDeclarationAST_2E_weak::bang_enumerationDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_enumerationDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumerationDeclarationAST) ;
      result = GGS_enumerationDeclarationAST ((cPtr_enumerationDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @enumerationDeclarationAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST_2E_weak ("enumerationDeclarationAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumerationDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumerationDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumerationDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST_2E_weak GGS_enumerationDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_enumerationDeclarationAST_2E_weak result ;
  const GGS_enumerationDeclarationAST_2E_weak * p = (const GGS_enumerationDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumerationDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_enumConstantMap::cMapElement_enumConstantMap (const GGS_enumConstantMap_2E_element & inValue
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mIndex (inValue.mProperty_mIndex) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_enumConstantMap::cMapElement_enumConstantMap (const GGS_lstring & inKey,
                                                          const GGS_uint & in_mIndex
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_enumConstantMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_enumConstantMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_enumConstantMap (mProperty_lkey, mProperty_mIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_enumConstantMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIndex" ":") ;
  mProperty_mIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_enumConstantMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_enumConstantMap * operand = (cMapElement_enumConstantMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap::GGS_enumConstantMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap::GGS_enumConstantMap (const GGS_enumConstantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap & GGS_enumConstantMap::operator = (const GGS_enumConstantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap GGS_enumConstantMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_enumConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap GGS_enumConstantMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_enumConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element_3F_ GGS_enumConstantMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_enumConstantMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_enumConstantMap * p = (cMapElement_enumConstantMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_enumConstantMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_enumConstantMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mIndex = p->mProperty_mIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap GGS_enumConstantMap::class_func_mapWithMapToOverride (const GGS_enumConstantMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_enumConstantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap GGS_enumConstantMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_enumConstantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap::enterElement (const GGS_enumConstantMap_2E_element & inValue,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_enumConstantMap * p = nullptr ;
  macroMyNew (p, cMapElement_enumConstantMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@enumConstantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap::addAssign_operation (const GGS_lstring & inKey,
                                               const GGS_uint & inArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_enumConstantMap * p = nullptr ;
  macroMyNew (p, cMapElement_enumConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@enumConstantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap GGS_enumConstantMap::add_operation (const GGS_enumConstantMap & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_enumConstantMap result = *this ;
  cEnumerator_enumConstantMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIndex (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap::setter_insertKey (GGS_lstring inKey,
                                            GGS_uint inArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_enumConstantMap * p = nullptr ;
  macroMyNew (p, cMapElement_enumConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "there is already a '%K' constant" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_enumConstantMap_searchKey = "the '%K' constant is not defined" ;

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap::method_searchKey (GGS_lstring inKey,
                                            GGS_uint & outArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_enumConstantMap * p = (const cMapElement_enumConstantMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_enumConstantMap_searchKey
                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_enumConstantMap) ;
    outArgument0 = p->mProperty_mIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_enumConstantMap::getter_mIndexForKey (const GGS_string & inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_enumConstantMap * p = (const cMapElement_enumConstantMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_enumConstantMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap::setter_setMIndexForKey (GGS_uint inAttributeValue,
                                                  GGS_string inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_enumConstantMap * p = (cMapElement_enumConstantMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_enumConstantMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_enumConstantMap * GGS_enumConstantMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                      const GGS_string & inKey
                                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_enumConstantMap * result = (cMapElement_enumConstantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_enumConstantMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_enumConstantMap::cEnumerator_enumConstantMap (const GGS_enumConstantMap & inEnumeratedObject,
                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element cEnumerator_enumConstantMap::current (LOCATION_ARGS) const {
  const cMapElement_enumConstantMap * p = (const cMapElement_enumConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_enumConstantMap) ;
  return GGS_enumConstantMap_2E_element (p->mProperty_lkey, p->mProperty_mIndex) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_enumConstantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_enumConstantMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_enumConstantMap * p = (const cMapElement_enumConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_enumConstantMap) ;
  return p->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------
//
//     @enumConstantMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantMap ("enumConstantMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumConstantMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap GGS_enumConstantMap::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_enumConstantMap result ;
  const GGS_enumConstantMap * p = (const GGS_enumConstantMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumConstantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@enumFunAssociationSortedList' sorted list
//
//--------------------------------------------------------------------------------------------------

class cSortedListElement_enumFunAssociationSortedList : public cSortedListElement {
  public: GGS_enumFunAssociationSortedList_2E_element mObject ;

//--- Constructors
  public: cSortedListElement_enumFunAssociationSortedList (const GGS_uint & in_mIndex,
                                                           const GGS_string & in_mAssociatedString
                                                           COMMA_LOCATION_ARGS) ;

  public: cSortedListElement_enumFunAssociationSortedList (const GGS_enumFunAssociationSortedList_2E_element & inObject
                                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public: virtual ComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//--------------------------------------------------------------------------------------------------

cSortedListElement_enumFunAssociationSortedList::cSortedListElement_enumFunAssociationSortedList (const GGS_uint & in_mIndex,
                                                                                                  const GGS_string & in_mAssociatedString
                                                                                                  COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mIndex, in_mAssociatedString) {
}

//--------------------------------------------------------------------------------------------------

cSortedListElement_enumFunAssociationSortedList::
cSortedListElement_enumFunAssociationSortedList (const GGS_enumFunAssociationSortedList_2E_element & inObject
                                                 COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (inObject) {
}

//--------------------------------------------------------------------------------------------------

bool cSortedListElement_enumFunAssociationSortedList::isValid (void) const {
  return mObject.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cSortedListElement * cSortedListElement_enumFunAssociationSortedList::copy (void) {
  cSortedListElement * result = nullptr ;
  macroMyNew (result, cSortedListElement_enumFunAssociationSortedList (mObject.mProperty_mIndex, mObject.mProperty_mAssociatedString COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cSortedListElement_enumFunAssociationSortedList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIndex" ":") ;
  mObject.mProperty_mIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAssociatedString" ":") ;
  mObject.mProperty_mAssociatedString.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cSortedListElement_enumFunAssociationSortedList::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_enumFunAssociationSortedList * operand = (cSortedListElement_enumFunAssociationSortedList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_enumFunAssociationSortedList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList::GGS_enumFunAssociationSortedList (void) :
AC_GALGAS_sortedlist () {
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFunAssociationSortedList::enterElement (const GGS_enumFunAssociationSortedList_2E_element & inValue,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  cSortedListElement * p = nullptr ;
  macroMyNew (p, cSortedListElement_enumFunAssociationSortedList (inValue COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cSortedListElement_enumFunAssociationSortedList::compareForSorting (const cSortedListElement * inOperand) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cSortedListElement_enumFunAssociationSortedList * operand = (const cSortedListElement_enumFunAssociationSortedList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_enumFunAssociationSortedList) ;
  if (result == ComparisonResult::operandEqual) {
    result = mObject.mProperty_mIndex.objectCompare (operand->mObject.mProperty_mIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList GGS_enumFunAssociationSortedList::class_func_emptySortedList (LOCATION_ARGS) {
  GGS_enumFunAssociationSortedList result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList GGS_enumFunAssociationSortedList::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_enumFunAssociationSortedList result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList GGS_enumFunAssociationSortedList::class_func_sortedListWithValue (const GGS_uint & inOperand0,
                                                                                                   const GGS_string & inOperand1
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_enumFunAssociationSortedList result = class_func_emptySortedList (THERE) ;
  cSortedListElement * p = nullptr ;
  macroMyNew (p, cSortedListElement_enumFunAssociationSortedList (inOperand0, inOperand1 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFunAssociationSortedList::addAssign_operation (const GGS_uint & inOperand0,
                                                            const GGS_string & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = nullptr ;
    macroMyNew (p, cSortedListElement_enumFunAssociationSortedList (inOperand0, inOperand1 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFunAssociationSortedList::setter_insert (const GGS_uint inOperand0,
                                                      const GGS_string inOperand1,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = nullptr ;
    macroMyNew (p, cSortedListElement_enumFunAssociationSortedList (inOperand0, inOperand1 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFunAssociationSortedList::plusAssign_operation (const GGS_enumFunAssociationSortedList inOperand,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFunAssociationSortedList::setter_popSmallest (GGS_uint & outOperand0,
                                                           GGS_string & outOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_enumFunAssociationSortedList * p = (cSortedListElement_enumFunAssociationSortedList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_enumFunAssociationSortedList) ;
    outOperand0 = p->mObject.mProperty_mIndex ;
    outOperand1 = p->mObject.mProperty_mAssociatedString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFunAssociationSortedList::setter_popGreatest (GGS_uint & outOperand0,
                                                           GGS_string & outOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_enumFunAssociationSortedList * p = (cSortedListElement_enumFunAssociationSortedList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_enumFunAssociationSortedList) ;
    outOperand0 = p->mObject.mProperty_mIndex ;
    outOperand1 = p->mObject.mProperty_mAssociatedString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFunAssociationSortedList::method_smallest (GGS_uint & outOperand0,
                                                        GGS_string & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_enumFunAssociationSortedList * p = (cSortedListElement_enumFunAssociationSortedList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_enumFunAssociationSortedList) ;
    outOperand0 = p->mObject.mProperty_mIndex ;
    outOperand1 = p->mObject.mProperty_mAssociatedString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFunAssociationSortedList::method_greatest (GGS_uint & outOperand0,
                                                        GGS_string & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_enumFunAssociationSortedList * p = (cSortedListElement_enumFunAssociationSortedList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_enumFunAssociationSortedList) ;
    outOperand0 = p->mObject.mProperty_mIndex ;
    outOperand1 = p->mObject.mProperty_mAssociatedString ;
  }
}

//--------------------------------------------------------------------------------------------------

cEnumerator_enumFunAssociationSortedList::cEnumerator_enumFunAssociationSortedList (const GGS_enumFunAssociationSortedList & inEnumeratedObject,
                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList_2E_element cEnumerator_enumFunAssociationSortedList::current (LOCATION_ARGS) const {
  const cSortedListElement_enumFunAssociationSortedList * p = (const cSortedListElement_enumFunAssociationSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_enumFunAssociationSortedList) ;
  return p->mObject ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_enumFunAssociationSortedList::current_mIndex (LOCATION_ARGS) const {
  const cSortedListElement_enumFunAssociationSortedList * p = (const cSortedListElement_enumFunAssociationSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_enumFunAssociationSortedList) ;
  return p->mObject.mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_enumFunAssociationSortedList::current_mAssociatedString (LOCATION_ARGS) const {
  const cSortedListElement_enumFunAssociationSortedList * p = (const cSortedListElement_enumFunAssociationSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_enumFunAssociationSortedList) ;
  return p->mObject.mProperty_mAssociatedString ;
}



//--------------------------------------------------------------------------------------------------
//
//     @enumFunAssociationSortedList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumFunAssociationSortedList ("enumFunAssociationSortedList",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumFunAssociationSortedList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumFunAssociationSortedList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumFunAssociationSortedList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumFunAssociationSortedList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList GGS_enumFunAssociationSortedList::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_enumFunAssociationSortedList result ;
  const GGS_enumFunAssociationSortedList * p = (const GGS_enumFunAssociationSortedList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumFunAssociationSortedList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumFunAssociationSortedList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_enumFuncMap::cMapElement_enumFuncMap (const GGS_enumFuncMap_2E_element & inValue
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mAssociationSortedList (inValue.mProperty_mAssociationSortedList) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_enumFuncMap::cMapElement_enumFuncMap (const GGS_lstring & inKey,
                                                  const GGS_enumFunAssociationSortedList & in_mAssociationSortedList
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mAssociationSortedList (in_mAssociationSortedList) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_enumFuncMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_enumFuncMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_enumFuncMap (mProperty_lkey, mProperty_mAssociationSortedList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_enumFuncMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAssociationSortedList" ":") ;
  mProperty_mAssociationSortedList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_enumFuncMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_enumFuncMap * operand = (cMapElement_enumFuncMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mAssociationSortedList.objectCompare (operand->mProperty_mAssociationSortedList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap::GGS_enumFuncMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap::GGS_enumFuncMap (const GGS_enumFuncMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap & GGS_enumFuncMap::operator = (const GGS_enumFuncMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap GGS_enumFuncMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_enumFuncMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap GGS_enumFuncMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_enumFuncMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap_2E_element_3F_ GGS_enumFuncMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_enumFuncMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_enumFuncMap * p = (cMapElement_enumFuncMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_enumFuncMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_enumFuncMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mAssociationSortedList = p->mProperty_mAssociationSortedList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap GGS_enumFuncMap::class_func_mapWithMapToOverride (const GGS_enumFuncMap & inMapToOverride
                                                                  COMMA_LOCATION_ARGS) {
  GGS_enumFuncMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap GGS_enumFuncMap::getter_overriddenMap (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_enumFuncMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFuncMap::enterElement (const GGS_enumFuncMap_2E_element & inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  cMapElement_enumFuncMap * p = nullptr ;
  macroMyNew (p, cMapElement_enumFuncMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@enumFuncMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFuncMap::addAssign_operation (const GGS_lstring & inKey,
                                           const GGS_enumFunAssociationSortedList & inArgument0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_enumFuncMap * p = nullptr ;
  macroMyNew (p, cMapElement_enumFuncMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@enumFuncMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap GGS_enumFuncMap::add_operation (const GGS_enumFuncMap & inOperand,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_enumFuncMap result = *this ;
  cEnumerator_enumFuncMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mAssociationSortedList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFuncMap::setter_insertKey (GGS_lstring inKey,
                                        GGS_enumFunAssociationSortedList inArgument0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_enumFuncMap * p = nullptr ;
  macroMyNew (p, cMapElement_enumFuncMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "there is already a '%K' enum function" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_enumFuncMap_searchKey = "the '%K' enum function is not defined" ;

//--------------------------------------------------------------------------------------------------

void GGS_enumFuncMap::method_searchKey (GGS_lstring inKey,
                                        GGS_enumFunAssociationSortedList & outArgument0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_enumFuncMap * p = (const cMapElement_enumFuncMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_enumFuncMap_searchKey
                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_enumFuncMap) ;
    outArgument0 = p->mProperty_mAssociationSortedList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList GGS_enumFuncMap::getter_mAssociationSortedListForKey (const GGS_string & inKey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_enumFuncMap * p = (const cMapElement_enumFuncMap *) attributes ;
  GGS_enumFunAssociationSortedList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_enumFuncMap) ;
    result = p->mProperty_mAssociationSortedList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFuncMap::setter_setMAssociationSortedListForKey (GGS_enumFunAssociationSortedList inAttributeValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_enumFuncMap * p = (cMapElement_enumFuncMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_enumFuncMap) ;
    p->mProperty_mAssociationSortedList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_enumFuncMap * GGS_enumFuncMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                              const GGS_string & inKey
                                                                              COMMA_LOCATION_ARGS) {
  cMapElement_enumFuncMap * result = (cMapElement_enumFuncMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_enumFuncMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_enumFuncMap::cEnumerator_enumFuncMap (const GGS_enumFuncMap & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap_2E_element cEnumerator_enumFuncMap::current (LOCATION_ARGS) const {
  const cMapElement_enumFuncMap * p = (const cMapElement_enumFuncMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_enumFuncMap) ;
  return GGS_enumFuncMap_2E_element (p->mProperty_lkey, p->mProperty_mAssociationSortedList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_enumFuncMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList cEnumerator_enumFuncMap::current_mAssociationSortedList (LOCATION_ARGS) const {
  const cMapElement_enumFuncMap * p = (const cMapElement_enumFuncMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_enumFuncMap) ;
  return p->mProperty_mAssociationSortedList ;
}

//--------------------------------------------------------------------------------------------------
//
//     @enumFuncMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumFuncMap ("enumFuncMap",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumFuncMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumFuncMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumFuncMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumFuncMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap GGS_enumFuncMap::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_enumFuncMap result ;
  const GGS_enumFuncMap * p = (const GGS_enumFuncMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumFuncMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumFuncMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractFileGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_abstractFileGeneration::cPtr_abstractFileGeneration (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractFileGeneration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractFileGeneration::objectCompare (const GGS_abstractFileGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration::GGS_abstractFileGeneration (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration::GGS_abstractFileGeneration (const cPtr_abstractFileGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractFileGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractFileGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_abstractFileGeneration::cPtr_abstractFileGeneration (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractFileGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractFileGeneration ("abstractFileGeneration",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractFileGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractFileGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractFileGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractFileGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration GGS_abstractFileGeneration::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_abstractFileGeneration result ;
  const GGS_abstractFileGeneration * p = (const GGS_abstractFileGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractFileGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractFileGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractFileGeneration_2E_weak::objectCompare (const GGS_abstractFileGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration_2E_weak::GGS_abstractFileGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration_2E_weak & GGS_abstractFileGeneration_2E_weak::operator = (const GGS_abstractFileGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration_2E_weak::GGS_abstractFileGeneration_2E_weak (const GGS_abstractFileGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration_2E_weak GGS_abstractFileGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractFileGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration GGS_abstractFileGeneration_2E_weak::bang_abstractFileGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractFileGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractFileGeneration) ;
      result = GGS_abstractFileGeneration ((cPtr_abstractFileGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractFileGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak ("abstractFileGeneration.weak",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractFileGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractFileGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractFileGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration_2E_weak GGS_abstractFileGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_abstractFileGeneration_2E_weak result ;
  const GGS_abstractFileGeneration_2E_weak * p = (const GGS_abstractFileGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractFileGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractFileGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum typeKind
//--------------------------------------------------------------------------------------------------

GGS_typeKind::GGS_typeKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_boolType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_boolType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_integerType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_integerType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_uint_33__32_Type (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_uint_33__32_Type ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_doubleType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_doubleType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_stringType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_stringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_dataType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_dataType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_dateType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_dateType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_fontType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_fontType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_colorType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_colorType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_bezierPathType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_bezierPathType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_bezierPathArrayType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_bezierPathArrayType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_enumType (const GGS_string & inAssociatedValue0,
                                                const GGS_enumConstantMap & inAssociatedValue1,
                                                const GGS_enumFuncMap & inAssociatedValue2
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_enumType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_enumType (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_entityType (const GGS_string & inAssociatedValue0,
                                                  const GGS_bool & inAssociatedValue1
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_entityType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_entityType (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_classType (const GGS_string & inAssociatedValue0
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_classType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_classType (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_transientPropertyExternType (const GGS_string & inAssociatedValue0
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_transientPropertyExternType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_transientPropertyExternType (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractEnumType (GGS_string & outAssociatedValue_enumTypeName,
                                           GGS_enumConstantMap & outAssociatedValue_constantMap,
                                           GGS_enumFuncMap & outAssociatedValue_funcMap,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_enumType) {
    outAssociatedValue_enumTypeName.drop () ;
    outAssociatedValue_constantMap.drop () ;
    outAssociatedValue_funcMap.drop () ;
    String s ;
    s.appendCString ("method @typeKind.enumType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_enumType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_enumTypeName = ptr->mProperty_enumTypeName ;
    outAssociatedValue_constantMap = ptr->mProperty_constantMap ;
    outAssociatedValue_funcMap = ptr->mProperty_funcMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractEntityType (GGS_string & outAssociatedValue_entityName,
                                             GGS_bool & outAssociatedValue_graphic,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_entityType) {
    outAssociatedValue_entityName.drop () ;
    outAssociatedValue_graphic.drop () ;
    String s ;
    s.appendCString ("method @typeKind.entityType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_entityType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_entityName = ptr->mProperty_entityName ;
    outAssociatedValue_graphic = ptr->mProperty_graphic ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractClassType (GGS_string & outAssociatedValue_className,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_classType) {
    outAssociatedValue_className.drop () ;
    String s ;
    s.appendCString ("method @typeKind.classType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_classType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_className = ptr->mProperty_className ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractTransientPropertyExternType (GGS_string & outAssociatedValue_externTypeName,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_transientPropertyExternType) {
    outAssociatedValue_externTypeName.drop () ;
    String s ;
    s.appendCString ("method @typeKind.transientPropertyExternType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_transientPropertyExternType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_externTypeName = ptr->mProperty_externTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumType_3F_ GGS_typeKind::getter_getEnumType (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_enumType_3F_ result ;
  if (mEnum == Enumeration::enum_enumType) {
    const auto ptr = (const GGS_typeKind_2E_enumType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_enumType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_enumType (GGS_string & out_enumTypeName,
                                                    GGS_enumConstantMap & out_constantMap,
                                                    GGS_enumFuncMap & out_funcMap) const {
  const auto ptr = (const GGS_typeKind_2E_enumType *) mAssociatedValues.associatedValuesPointer () ;
  out_enumTypeName = ptr->mProperty_enumTypeName ;
  out_constantMap = ptr->mProperty_constantMap ;
  out_funcMap = ptr->mProperty_funcMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_entityType_3F_ GGS_typeKind::getter_getEntityType (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_entityType_3F_ result ;
  if (mEnum == Enumeration::enum_entityType) {
    const auto ptr = (const GGS_typeKind_2E_entityType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_entityType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_entityType (GGS_string & out_entityName,
                                                      GGS_bool & out_graphic) const {
  const auto ptr = (const GGS_typeKind_2E_entityType *) mAssociatedValues.associatedValuesPointer () ;
  out_entityName = ptr->mProperty_entityName ;
  out_graphic = ptr->mProperty_graphic ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_classType_3F_ GGS_typeKind::getter_getClassType (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_classType_3F_ result ;
  if (mEnum == Enumeration::enum_classType) {
    const auto ptr = (const GGS_typeKind_2E_classType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_classType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_classType (GGS_string & out_className) const {
  const auto ptr = (const GGS_typeKind_2E_classType *) mAssociatedValues.associatedValuesPointer () ;
  out_className = ptr->mProperty_className ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_transientPropertyExternType_3F_ GGS_typeKind::getter_getTransientPropertyExternType (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_transientPropertyExternType_3F_ result ;
  if (mEnum == Enumeration::enum_transientPropertyExternType) {
    const auto ptr = (const GGS_typeKind_2E_transientPropertyExternType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_transientPropertyExternType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_transientPropertyExternType (GGS_string & out_externTypeName) const {
  const auto ptr = (const GGS_typeKind_2E_transientPropertyExternType *) mAssociatedValues.associatedValuesPointer () ;
  out_externTypeName = ptr->mProperty_externTypeName ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isBoolType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_boolType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isIntegerType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_integerType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isUint_33__32_Type (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_uint_33__32_Type == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isDoubleType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_doubleType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isStringType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_stringType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isDataType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_dataType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isDateType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_dateType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isFontType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fontType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isColorType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_colorType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isBezierPathType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bezierPathType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isBezierPathArrayType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bezierPathArrayType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isEnumType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_enumType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isEntityType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_entityType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isClassType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_classType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isTransientPropertyExternType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_transientPropertyExternType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::description (String & ioString,
                                const int32_t inIndentation) const {
  ioString.appendCString ("<enum @typeKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_typeKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind::objectCompare (const GGS_typeKind & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_enumType: {
        const auto left = (GGS_typeKind_2E_enumType *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_enumType *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_entityType: {
        const auto left = (GGS_typeKind_2E_entityType *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_entityType *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_classType: {
        const auto left = (GGS_typeKind_2E_classType *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_classType *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_transientPropertyExternType: {
        const auto left = (GGS_typeKind_2E_transientPropertyExternType *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_transientPropertyExternType *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      default:
        result = ComparisonResult::operandEqual ;
        break ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind ("typeKind",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_typeKind result ;
  const GGS_typeKind * p = (const GGS_typeKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_atomicClassDeclarationAST_2E_weak::objectCompare (const GGS_atomicClassDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST_2E_weak::GGS_atomicClassDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST_2E_weak & GGS_atomicClassDeclarationAST_2E_weak::operator = (const GGS_atomicClassDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST_2E_weak::GGS_atomicClassDeclarationAST_2E_weak (const GGS_atomicClassDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST_2E_weak GGS_atomicClassDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_atomicClassDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST GGS_atomicClassDeclarationAST_2E_weak::bang_atomicClassDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_atomicClassDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_atomicClassDeclarationAST) ;
      result = GGS_atomicClassDeclarationAST ((cPtr_atomicClassDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @atomicClassDeclarationAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicClassDeclarationAST_2E_weak ("atomicClassDeclarationAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_atomicClassDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicClassDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_atomicClassDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_atomicClassDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST_2E_weak GGS_atomicClassDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_atomicClassDeclarationAST_2E_weak result ;
  const GGS_atomicClassDeclarationAST_2E_weak * p = (const GGS_atomicClassDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_atomicClassDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicClassDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@simpleStoredPropertyList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_simpleStoredPropertyList : public cCollectionElement {
  public: GGS_simpleStoredPropertyList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_simpleStoredPropertyList (const GGS_lstring & in_mPropertyTypeName,
                                                       const GGS_lstring & in_mPropertyName,
                                                       const GGS_abstractDefaultValue & in_mDefaultValue
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_simpleStoredPropertyList (const GGS_simpleStoredPropertyList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_simpleStoredPropertyList::cCollectionElement_simpleStoredPropertyList (const GGS_lstring & in_mPropertyTypeName,
                                                                                          const GGS_lstring & in_mPropertyName,
                                                                                          const GGS_abstractDefaultValue & in_mDefaultValue
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyTypeName, in_mPropertyName, in_mDefaultValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_simpleStoredPropertyList::cCollectionElement_simpleStoredPropertyList (const GGS_simpleStoredPropertyList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyTypeName, inElement.mProperty_mPropertyName, inElement.mProperty_mDefaultValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_simpleStoredPropertyList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_simpleStoredPropertyList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_simpleStoredPropertyList (mObject.mProperty_mPropertyTypeName, mObject.mProperty_mPropertyName, mObject.mProperty_mDefaultValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_simpleStoredPropertyList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPropertyTypeName" ":") ;
  mObject.mProperty_mPropertyTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPropertyName" ":") ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDefaultValue" ":") ;
  mObject.mProperty_mDefaultValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList::GGS_simpleStoredPropertyList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList::GGS_simpleStoredPropertyList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList GGS_simpleStoredPropertyList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_simpleStoredPropertyList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList GGS_simpleStoredPropertyList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_simpleStoredPropertyList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList::enterElement (const GGS_simpleStoredPropertyList_2E_element & inValue,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_simpleStoredPropertyList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList GGS_simpleStoredPropertyList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                     const GGS_lstring & inOperand1,
                                                                                     const GGS_abstractDefaultValue & inOperand2
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_simpleStoredPropertyList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_simpleStoredPropertyList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_simpleStoredPropertyList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GGS_lstring & in_mPropertyTypeName,
                                                              const GGS_lstring & in_mPropertyName,
                                                              const GGS_abstractDefaultValue & in_mDefaultValue
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_simpleStoredPropertyList * p = nullptr ;
  macroMyNew (p, cCollectionElement_simpleStoredPropertyList (in_mPropertyTypeName,
                                                              in_mPropertyName,
                                                              in_mDefaultValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList::addAssign_operation (const GGS_lstring & inOperand0,
                                                        const GGS_lstring & inOperand1,
                                                        const GGS_abstractDefaultValue & inOperand2
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_simpleStoredPropertyList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList::setter_append (const GGS_lstring inOperand0,
                                                  const GGS_lstring inOperand1,
                                                  const GGS_abstractDefaultValue inOperand2,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_simpleStoredPropertyList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                         const GGS_lstring inOperand1,
                                                         const GGS_abstractDefaultValue inOperand2,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_simpleStoredPropertyList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                         GGS_lstring & outOperand1,
                                                         GGS_abstractDefaultValue & outOperand2,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
      outOperand0 = p->mObject.mProperty_mPropertyTypeName ;
      outOperand1 = p->mObject.mProperty_mPropertyName ;
      outOperand2 = p->mObject.mProperty_mDefaultValue ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList::setter_popFirst (GGS_lstring & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    GGS_abstractDefaultValue & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList::setter_popLast (GGS_lstring & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   GGS_abstractDefaultValue & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList::method_first (GGS_lstring & outOperand0,
                                                 GGS_lstring & outOperand1,
                                                 GGS_abstractDefaultValue & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList::method_last (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                GGS_abstractDefaultValue & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList GGS_simpleStoredPropertyList::add_operation (const GGS_simpleStoredPropertyList & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_simpleStoredPropertyList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList GGS_simpleStoredPropertyList::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_simpleStoredPropertyList result = GGS_simpleStoredPropertyList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList GGS_simpleStoredPropertyList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_simpleStoredPropertyList result = GGS_simpleStoredPropertyList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList GGS_simpleStoredPropertyList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_simpleStoredPropertyList result = GGS_simpleStoredPropertyList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList::plusAssign_operation (const GGS_simpleStoredPropertyList inOperand,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList::setter_setMPropertyTypeNameAtIndex (GGS_lstring inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_simpleStoredPropertyList::getter_mPropertyTypeNameAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    result = p->mObject.mProperty_mPropertyTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList::setter_setMPropertyNameAtIndex (GGS_lstring inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_simpleStoredPropertyList::getter_mPropertyNameAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList::setter_setMDefaultValueAtIndex (GGS_abstractDefaultValue inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDefaultValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue GGS_simpleStoredPropertyList::getter_mDefaultValueAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  GGS_abstractDefaultValue result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    result = p->mObject.mProperty_mDefaultValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_simpleStoredPropertyList::cEnumerator_simpleStoredPropertyList (const GGS_simpleStoredPropertyList & inEnumeratedObject,
                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList_2E_element cEnumerator_simpleStoredPropertyList::current (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyList * p = (const cCollectionElement_simpleStoredPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_simpleStoredPropertyList::current_mPropertyTypeName (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyList * p = (const cCollectionElement_simpleStoredPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
  return p->mObject.mProperty_mPropertyTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_simpleStoredPropertyList::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyList * p = (const cCollectionElement_simpleStoredPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
  return p->mObject.mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue cEnumerator_simpleStoredPropertyList::current_mDefaultValue (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyList * p = (const cCollectionElement_simpleStoredPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
  return p->mObject.mProperty_mDefaultValue ;
}




//--------------------------------------------------------------------------------------------------
//
//     @simpleStoredPropertyList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleStoredPropertyList ("simpleStoredPropertyList",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_simpleStoredPropertyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleStoredPropertyList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_simpleStoredPropertyList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_simpleStoredPropertyList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList GGS_simpleStoredPropertyList::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_simpleStoredPropertyList result ;
  const GGS_simpleStoredPropertyList * p = (const GGS_simpleStoredPropertyList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_simpleStoredPropertyList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleStoredPropertyList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_entityDeclarationAST_2E_weak::objectCompare (const GGS_entityDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityDeclarationAST_2E_weak::GGS_entityDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_entityDeclarationAST_2E_weak & GGS_entityDeclarationAST_2E_weak::operator = (const GGS_entityDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityDeclarationAST_2E_weak::GGS_entityDeclarationAST_2E_weak (const GGS_entityDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_entityDeclarationAST_2E_weak GGS_entityDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_entityDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityDeclarationAST GGS_entityDeclarationAST_2E_weak::bang_entityDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_entityDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_entityDeclarationAST) ;
      result = GGS_entityDeclarationAST ((cPtr_entityDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @entityDeclarationAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityDeclarationAST_2E_weak ("entityDeclarationAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_entityDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_entityDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_entityDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityDeclarationAST_2E_weak GGS_entityDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_entityDeclarationAST_2E_weak result ;
  const GGS_entityDeclarationAST_2E_weak * p = (const GGS_entityDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_entityDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@propertyGenerationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_propertyGenerationList : public cCollectionElement {
  public: GGS_propertyGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_propertyGenerationList (const GGS_propertyGeneration & in_mProperty
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_propertyGenerationList (const GGS_propertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_propertyGenerationList::cCollectionElement_propertyGenerationList (const GGS_propertyGeneration & in_mProperty
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_propertyGenerationList::cCollectionElement_propertyGenerationList (const GGS_propertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_propertyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_propertyGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_propertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_propertyGenerationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProperty" ":") ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList::GGS_propertyGenerationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList::GGS_propertyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList GGS_propertyGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_propertyGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList GGS_propertyGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_propertyGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList::enterElement (const GGS_propertyGenerationList_2E_element & inValue,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_propertyGenerationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList GGS_propertyGenerationList::class_func_listWithValue (const GGS_propertyGeneration & inOperand0
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_propertyGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GGS_propertyGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_propertyGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_propertyGeneration & in_mProperty
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_propertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList::addAssign_operation (const GGS_propertyGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_propertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList::setter_append (const GGS_propertyGeneration inOperand0,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_propertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList::setter_insertAtIndex (const GGS_propertyGeneration inOperand0,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_propertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList::setter_removeAtIndex (GGS_propertyGeneration & outOperand0,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_propertyGenerationList * p = (cCollectionElement_propertyGenerationList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
      outOperand0 = p->mObject.mProperty_mProperty ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList::setter_popFirst (GGS_propertyGeneration & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyGenerationList * p = (cCollectionElement_propertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList::setter_popLast (GGS_propertyGeneration & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyGenerationList * p = (cCollectionElement_propertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList::method_first (GGS_propertyGeneration & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyGenerationList * p = (cCollectionElement_propertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList::method_last (GGS_propertyGeneration & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyGenerationList * p = (cCollectionElement_propertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList GGS_propertyGenerationList::add_operation (const GGS_propertyGenerationList & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_propertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList GGS_propertyGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_propertyGenerationList result = GGS_propertyGenerationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList GGS_propertyGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_propertyGenerationList result = GGS_propertyGenerationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList GGS_propertyGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_propertyGenerationList result = GGS_propertyGenerationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList::plusAssign_operation (const GGS_propertyGenerationList inOperand,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList::setter_setMPropertyAtIndex (GGS_propertyGeneration inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyGenerationList * p = (cCollectionElement_propertyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGeneration GGS_propertyGenerationList::getter_mPropertyAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyGenerationList * p = (cCollectionElement_propertyGenerationList *) attributes.ptr () ;
  GGS_propertyGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_propertyGenerationList::cEnumerator_propertyGenerationList (const GGS_propertyGenerationList & inEnumeratedObject,
                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList_2E_element cEnumerator_propertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_propertyGenerationList * p = (const cCollectionElement_propertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_propertyGeneration cEnumerator_propertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_propertyGenerationList * p = (const cCollectionElement_propertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//
//     @propertyGenerationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGenerationList ("propertyGenerationList",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList GGS_propertyGenerationList::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_propertyGenerationList result ;
  const GGS_propertyGenerationList * p = (const GGS_propertyGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_entityForGeneration_2E_weak::objectCompare (const GGS_entityForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityForGeneration_2E_weak::GGS_entityForGeneration_2E_weak (void) :
GGS_abstractFileGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_entityForGeneration_2E_weak & GGS_entityForGeneration_2E_weak::operator = (const GGS_entityForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityForGeneration_2E_weak::GGS_entityForGeneration_2E_weak (const GGS_entityForGeneration & inSource) :
GGS_abstractFileGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_entityForGeneration_2E_weak GGS_entityForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_entityForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityForGeneration GGS_entityForGeneration_2E_weak::bang_entityForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_entityForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_entityForGeneration) ;
      result = GGS_entityForGeneration ((cPtr_entityForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @entityForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityForGeneration_2E_weak ("entityForGeneration.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_entityForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_entityForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_entityForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityForGeneration_2E_weak GGS_entityForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_entityForGeneration_2E_weak result ;
  const GGS_entityForGeneration_2E_weak * p = (const GGS_entityForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_entityForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@entityListForGeneratingEBManagedObjectContext' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_entityListForGeneratingEBManagedObjectContext : public cCollectionElement {
  public: GGS_entityListForGeneratingEBManagedObjectContext_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_entityListForGeneratingEBManagedObjectContext (const GGS_string & in_mEntityName,
                                                                            const GGS_lstringlist & in_mObsoleteEntityNames
                                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_entityListForGeneratingEBManagedObjectContext (const GGS_entityListForGeneratingEBManagedObjectContext_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_entityListForGeneratingEBManagedObjectContext::cCollectionElement_entityListForGeneratingEBManagedObjectContext (const GGS_string & in_mEntityName,
                                                                                                                                    const GGS_lstringlist & in_mObsoleteEntityNames
                                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEntityName, in_mObsoleteEntityNames) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_entityListForGeneratingEBManagedObjectContext::cCollectionElement_entityListForGeneratingEBManagedObjectContext (const GGS_entityListForGeneratingEBManagedObjectContext_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEntityName, inElement.mProperty_mObsoleteEntityNames) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_entityListForGeneratingEBManagedObjectContext::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_entityListForGeneratingEBManagedObjectContext::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_entityListForGeneratingEBManagedObjectContext (mObject.mProperty_mEntityName, mObject.mProperty_mObsoleteEntityNames COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_entityListForGeneratingEBManagedObjectContext::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEntityName" ":") ;
  mObject.mProperty_mEntityName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mObsoleteEntityNames" ":") ;
  mObject.mProperty_mObsoleteEntityNames.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext::GGS_entityListForGeneratingEBManagedObjectContext (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext::GGS_entityListForGeneratingEBManagedObjectContext (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_entityListForGeneratingEBManagedObjectContext (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_entityListForGeneratingEBManagedObjectContext (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::enterElement (const GGS_entityListForGeneratingEBManagedObjectContext_2E_element & inValue,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                                               const GGS_lstringlist & inOperand1
                                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_entityListForGeneratingEBManagedObjectContext result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_entityListForGeneratingEBManagedObjectContext (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_entityListForGeneratingEBManagedObjectContext::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                   const GGS_string & in_mEntityName,
                                                                                   const GGS_lstringlist & in_mObsoleteEntityNames
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = nullptr ;
  macroMyNew (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext (in_mEntityName,
                                                                                   in_mObsoleteEntityNames COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::addAssign_operation (const GGS_string & inOperand0,
                                                                             const GGS_lstringlist & inOperand1
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::setter_append (const GGS_string inOperand0,
                                                                       const GGS_lstringlist inOperand1,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::setter_insertAtIndex (const GGS_string inOperand0,
                                                                              const GGS_lstringlist inOperand1,
                                                                              const GGS_uint inInsertionIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::setter_removeAtIndex (GGS_string & outOperand0,
                                                                              GGS_lstringlist & outOperand1,
                                                                              const GGS_uint inRemoveIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
      outOperand0 = p->mObject.mProperty_mEntityName ;
      outOperand1 = p->mObject.mProperty_mObsoleteEntityNames ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::setter_popFirst (GGS_string & outOperand0,
                                                                         GGS_lstringlist & outOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    outOperand0 = p->mObject.mProperty_mEntityName ;
    outOperand1 = p->mObject.mProperty_mObsoleteEntityNames ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::setter_popLast (GGS_string & outOperand0,
                                                                        GGS_lstringlist & outOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    outOperand0 = p->mObject.mProperty_mEntityName ;
    outOperand1 = p->mObject.mProperty_mObsoleteEntityNames ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::method_first (GGS_string & outOperand0,
                                                                      GGS_lstringlist & outOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    outOperand0 = p->mObject.mProperty_mEntityName ;
    outOperand1 = p->mObject.mProperty_mObsoleteEntityNames ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::method_last (GGS_string & outOperand0,
                                                                     GGS_lstringlist & outOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    outOperand0 = p->mObject.mProperty_mEntityName ;
    outOperand1 = p->mObject.mProperty_mObsoleteEntityNames ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::add_operation (const GGS_entityListForGeneratingEBManagedObjectContext & inOperand,
                                                                                                                    Compiler * /* inCompiler */
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_entityListForGeneratingEBManagedObjectContext result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_entityListForGeneratingEBManagedObjectContext result = GGS_entityListForGeneratingEBManagedObjectContext::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_entityListForGeneratingEBManagedObjectContext result = GGS_entityListForGeneratingEBManagedObjectContext::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_entityListForGeneratingEBManagedObjectContext result = GGS_entityListForGeneratingEBManagedObjectContext::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::plusAssign_operation (const GGS_entityListForGeneratingEBManagedObjectContext inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::setter_setMEntityNameAtIndex (GGS_string inOperand,
                                                                                      GGS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEntityName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_entityListForGeneratingEBManagedObjectContext::getter_mEntityNameAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    result = p->mObject.mProperty_mEntityName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::setter_setMObsoleteEntityNamesAtIndex (GGS_lstringlist inOperand,
                                                                                               GGS_uint inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mObsoleteEntityNames = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_entityListForGeneratingEBManagedObjectContext::getter_mObsoleteEntityNamesAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  GGS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    result = p->mObject.mProperty_mObsoleteEntityNames ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_entityListForGeneratingEBManagedObjectContext::cEnumerator_entityListForGeneratingEBManagedObjectContext (const GGS_entityListForGeneratingEBManagedObjectContext & inEnumeratedObject,
                                                                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext_2E_element cEnumerator_entityListForGeneratingEBManagedObjectContext::current (LOCATION_ARGS) const {
  const cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (const cCollectionElement_entityListForGeneratingEBManagedObjectContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_entityListForGeneratingEBManagedObjectContext::current_mEntityName (LOCATION_ARGS) const {
  const cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (const cCollectionElement_entityListForGeneratingEBManagedObjectContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
  return p->mObject.mProperty_mEntityName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist cEnumerator_entityListForGeneratingEBManagedObjectContext::current_mObsoleteEntityNames (LOCATION_ARGS) const {
  const cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (const cCollectionElement_entityListForGeneratingEBManagedObjectContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
  return p->mObject.mProperty_mObsoleteEntityNames ;
}




//--------------------------------------------------------------------------------------------------
//
//     @entityListForGeneratingEBManagedObjectContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext ("entityListForGeneratingEBManagedObjectContext",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_entityListForGeneratingEBManagedObjectContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_entityListForGeneratingEBManagedObjectContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_entityListForGeneratingEBManagedObjectContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_entityListForGeneratingEBManagedObjectContext result ;
  const GGS_entityListForGeneratingEBManagedObjectContext * p = (const GGS_entityListForGeneratingEBManagedObjectContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_entityListForGeneratingEBManagedObjectContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityListForGeneratingEBManagedObjectContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@outletDeclarationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_outletDeclarationList : public cCollectionElement {
  public: GGS_outletDeclarationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_outletDeclarationList (const GGS_lstring & in_mOutletTypeName,
                                                    const GGS_lstring & in_mOutletName,
                                                    const GGS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                    const GGS_runActionDescriptor & in_mRunDescriptor,
                                                    const GGS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                    const GGS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                    const GGS_regularBindingList & in_mRegularBindingList,
                                                    const GGS_graphicController & in_mGraphicController
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_outletDeclarationList (const GGS_outletDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_outletDeclarationList::cCollectionElement_outletDeclarationList (const GGS_lstring & in_mOutletTypeName,
                                                                                    const GGS_lstring & in_mOutletName,
                                                                                    const GGS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                                                    const GGS_runActionDescriptor & in_mRunDescriptor,
                                                                                    const GGS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                                                    const GGS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                                                    const GGS_regularBindingList & in_mRegularBindingList,
                                                                                    const GGS_graphicController & in_mGraphicController
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletTypeName, in_mOutletName, in_mTableValueBindingDescriptor, in_mRunDescriptor, in_mEnabledBindingDescriptor, in_mHiddenBindingDescriptor, in_mRegularBindingList, in_mGraphicController) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_outletDeclarationList::cCollectionElement_outletDeclarationList (const GGS_outletDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletTypeName, inElement.mProperty_mOutletName, inElement.mProperty_mTableValueBindingDescriptor, inElement.mProperty_mRunDescriptor, inElement.mProperty_mEnabledBindingDescriptor, inElement.mProperty_mHiddenBindingDescriptor, inElement.mProperty_mRegularBindingList, inElement.mProperty_mGraphicController) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_outletDeclarationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_outletDeclarationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_outletDeclarationList (mObject.mProperty_mOutletTypeName, mObject.mProperty_mOutletName, mObject.mProperty_mTableValueBindingDescriptor, mObject.mProperty_mRunDescriptor, mObject.mProperty_mEnabledBindingDescriptor, mObject.mProperty_mHiddenBindingDescriptor, mObject.mProperty_mRegularBindingList, mObject.mProperty_mGraphicController COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_outletDeclarationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOutletTypeName" ":") ;
  mObject.mProperty_mOutletTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOutletName" ":") ;
  mObject.mProperty_mOutletName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTableValueBindingDescriptor" ":") ;
  mObject.mProperty_mTableValueBindingDescriptor.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRunDescriptor" ":") ;
  mObject.mProperty_mRunDescriptor.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEnabledBindingDescriptor" ":") ;
  mObject.mProperty_mEnabledBindingDescriptor.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHiddenBindingDescriptor" ":") ;
  mObject.mProperty_mHiddenBindingDescriptor.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRegularBindingList" ":") ;
  mObject.mProperty_mRegularBindingList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGraphicController" ":") ;
  mObject.mProperty_mGraphicController.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList::GGS_outletDeclarationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList::GGS_outletDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList GGS_outletDeclarationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_outletDeclarationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList GGS_outletDeclarationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_outletDeclarationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::enterElement (const GGS_outletDeclarationList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_outletDeclarationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList GGS_outletDeclarationList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                               const GGS_lstring & inOperand1,
                                                                               const GGS_tableValueBinding & inOperand2,
                                                                               const GGS_runActionDescriptor & inOperand3,
                                                                               const GGS_multipleBindingDescriptor & inOperand4,
                                                                               const GGS_multipleBindingDescriptor & inOperand5,
                                                                               const GGS_regularBindingList & inOperand6,
                                                                               const GGS_graphicController & inOperand7
                                                                               COMMA_LOCATION_ARGS) {
  GGS_outletDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GGS_outletDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_outletDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GGS_lstring & in_mOutletTypeName,
                                                           const GGS_lstring & in_mOutletName,
                                                           const GGS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                           const GGS_runActionDescriptor & in_mRunDescriptor,
                                                           const GGS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                           const GGS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                           const GGS_regularBindingList & in_mRegularBindingList,
                                                           const GGS_graphicController & in_mGraphicController
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = nullptr ;
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

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::addAssign_operation (const GGS_lstring & inOperand0,
                                                     const GGS_lstring & inOperand1,
                                                     const GGS_tableValueBinding & inOperand2,
                                                     const GGS_runActionDescriptor & inOperand3,
                                                     const GGS_multipleBindingDescriptor & inOperand4,
                                                     const GGS_multipleBindingDescriptor & inOperand5,
                                                     const GGS_regularBindingList & inOperand6,
                                                     const GGS_graphicController & inOperand7
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_outletDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::setter_append (const GGS_lstring inOperand0,
                                               const GGS_lstring inOperand1,
                                               const GGS_tableValueBinding inOperand2,
                                               const GGS_runActionDescriptor inOperand3,
                                               const GGS_multipleBindingDescriptor inOperand4,
                                               const GGS_multipleBindingDescriptor inOperand5,
                                               const GGS_regularBindingList inOperand6,
                                               const GGS_graphicController inOperand7,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_outletDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                      const GGS_lstring inOperand1,
                                                      const GGS_tableValueBinding inOperand2,
                                                      const GGS_runActionDescriptor inOperand3,
                                                      const GGS_multipleBindingDescriptor inOperand4,
                                                      const GGS_multipleBindingDescriptor inOperand5,
                                                      const GGS_regularBindingList inOperand6,
                                                      const GGS_graphicController inOperand7,
                                                      const GGS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_outletDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      GGS_tableValueBinding & outOperand2,
                                                      GGS_runActionDescriptor & outOperand3,
                                                      GGS_multipleBindingDescriptor & outOperand4,
                                                      GGS_multipleBindingDescriptor & outOperand5,
                                                      GGS_regularBindingList & outOperand6,
                                                      GGS_graphicController & outOperand7,
                                                      const GGS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  outOperand5.drop () ;
  outOperand6.drop () ;
  outOperand7.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
    if (nullptr == p) {
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
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::setter_popFirst (GGS_lstring & outOperand0,
                                                 GGS_lstring & outOperand1,
                                                 GGS_tableValueBinding & outOperand2,
                                                 GGS_runActionDescriptor & outOperand3,
                                                 GGS_multipleBindingDescriptor & outOperand4,
                                                 GGS_multipleBindingDescriptor & outOperand5,
                                                 GGS_regularBindingList & outOperand6,
                                                 GGS_graphicController & outOperand7,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::setter_popLast (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                GGS_tableValueBinding & outOperand2,
                                                GGS_runActionDescriptor & outOperand3,
                                                GGS_multipleBindingDescriptor & outOperand4,
                                                GGS_multipleBindingDescriptor & outOperand5,
                                                GGS_regularBindingList & outOperand6,
                                                GGS_graphicController & outOperand7,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::method_first (GGS_lstring & outOperand0,
                                              GGS_lstring & outOperand1,
                                              GGS_tableValueBinding & outOperand2,
                                              GGS_runActionDescriptor & outOperand3,
                                              GGS_multipleBindingDescriptor & outOperand4,
                                              GGS_multipleBindingDescriptor & outOperand5,
                                              GGS_regularBindingList & outOperand6,
                                              GGS_graphicController & outOperand7,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::method_last (GGS_lstring & outOperand0,
                                             GGS_lstring & outOperand1,
                                             GGS_tableValueBinding & outOperand2,
                                             GGS_runActionDescriptor & outOperand3,
                                             GGS_multipleBindingDescriptor & outOperand4,
                                             GGS_multipleBindingDescriptor & outOperand5,
                                             GGS_regularBindingList & outOperand6,
                                             GGS_graphicController & outOperand7,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList GGS_outletDeclarationList::add_operation (const GGS_outletDeclarationList & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_outletDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList GGS_outletDeclarationList::getter_subListWithRange (const GGS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_outletDeclarationList result = GGS_outletDeclarationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList GGS_outletDeclarationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_outletDeclarationList result = GGS_outletDeclarationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList GGS_outletDeclarationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_outletDeclarationList result = GGS_outletDeclarationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::plusAssign_operation (const GGS_outletDeclarationList inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::setter_setMOutletTypeNameAtIndex (GGS_lstring inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOutletTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_outletDeclarationList::getter_mOutletTypeNameAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mOutletTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::setter_setMOutletNameAtIndex (GGS_lstring inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOutletName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_outletDeclarationList::getter_mOutletNameAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mOutletName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::setter_setMTableValueBindingDescriptorAtIndex (GGS_tableValueBinding inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTableValueBindingDescriptor = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_tableValueBinding GGS_outletDeclarationList::getter_mTableValueBindingDescriptorAtIndex (const GGS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GGS_tableValueBinding result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mTableValueBindingDescriptor ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::setter_setMRunDescriptorAtIndex (GGS_runActionDescriptor inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRunDescriptor = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_runActionDescriptor GGS_outletDeclarationList::getter_mRunDescriptorAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GGS_runActionDescriptor result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mRunDescriptor ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::setter_setMEnabledBindingDescriptorAtIndex (GGS_multipleBindingDescriptor inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEnabledBindingDescriptor = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor GGS_outletDeclarationList::getter_mEnabledBindingDescriptorAtIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GGS_multipleBindingDescriptor result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mEnabledBindingDescriptor ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::setter_setMHiddenBindingDescriptorAtIndex (GGS_multipleBindingDescriptor inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mHiddenBindingDescriptor = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor GGS_outletDeclarationList::getter_mHiddenBindingDescriptorAtIndex (const GGS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GGS_multipleBindingDescriptor result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mHiddenBindingDescriptor ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::setter_setMRegularBindingListAtIndex (GGS_regularBindingList inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRegularBindingList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingList GGS_outletDeclarationList::getter_mRegularBindingListAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GGS_regularBindingList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mRegularBindingList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::setter_setMGraphicControllerAtIndex (GGS_graphicController inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGraphicController = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_graphicController GGS_outletDeclarationList::getter_mGraphicControllerAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GGS_graphicController result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mGraphicController ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_outletDeclarationList::cEnumerator_outletDeclarationList (const GGS_outletDeclarationList & inEnumeratedObject,
                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList_2E_element cEnumerator_outletDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_outletDeclarationList::current_mOutletTypeName (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mOutletTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_outletDeclarationList::current_mOutletName (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mOutletName ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableValueBinding cEnumerator_outletDeclarationList::current_mTableValueBindingDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mTableValueBindingDescriptor ;
}

//--------------------------------------------------------------------------------------------------

GGS_runActionDescriptor cEnumerator_outletDeclarationList::current_mRunDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mRunDescriptor ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor cEnumerator_outletDeclarationList::current_mEnabledBindingDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mEnabledBindingDescriptor ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor cEnumerator_outletDeclarationList::current_mHiddenBindingDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mHiddenBindingDescriptor ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingList cEnumerator_outletDeclarationList::current_mRegularBindingList (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mRegularBindingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphicController cEnumerator_outletDeclarationList::current_mGraphicController (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mGraphicController ;
}




//--------------------------------------------------------------------------------------------------
//
//     @outletDeclarationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletDeclarationList ("outletDeclarationList",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outletDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletDeclarationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList GGS_outletDeclarationList::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_outletDeclarationList result ;
  const GGS_outletDeclarationList * p = (const GGS_outletDeclarationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@arrayControllerBindingListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_arrayControllerBindingListAST : public cCollectionElement {
  public: GGS_arrayControllerBindingListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_arrayControllerBindingListAST (const GGS_lstring & in_mControllerName,
                                                            const GGS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_arrayControllerBindingListAST (const GGS_arrayControllerBindingListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_arrayControllerBindingListAST::cCollectionElement_arrayControllerBindingListAST (const GGS_lstring & in_mControllerName,
                                                                                                    const GGS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mControllerName, in_mHiddenSelectionViewBindingDescriptor) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_arrayControllerBindingListAST::cCollectionElement_arrayControllerBindingListAST (const GGS_arrayControllerBindingListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mControllerName, inElement.mProperty_mHiddenSelectionViewBindingDescriptor) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_arrayControllerBindingListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_arrayControllerBindingListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_arrayControllerBindingListAST (mObject.mProperty_mControllerName, mObject.mProperty_mHiddenSelectionViewBindingDescriptor COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_arrayControllerBindingListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mControllerName" ":") ;
  mObject.mProperty_mControllerName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHiddenSelectionViewBindingDescriptor" ":") ;
  mObject.mProperty_mHiddenSelectionViewBindingDescriptor.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST::GGS_arrayControllerBindingListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST::GGS_arrayControllerBindingListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_arrayControllerBindingListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_arrayControllerBindingListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::enterElement (const GGS_arrayControllerBindingListAST_2E_element & inValue,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_arrayControllerBindingListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                               const GGS_multipleBindingDescriptor & inOperand1
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_arrayControllerBindingListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_arrayControllerBindingListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_arrayControllerBindingListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GGS_lstring & in_mControllerName,
                                                                   const GGS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerBindingListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_arrayControllerBindingListAST (in_mControllerName,
                                                                   in_mHiddenSelectionViewBindingDescriptor COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::addAssign_operation (const GGS_lstring & inOperand0,
                                                             const GGS_multipleBindingDescriptor & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_arrayControllerBindingListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::setter_append (const GGS_lstring inOperand0,
                                                       const GGS_multipleBindingDescriptor inOperand1,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_arrayControllerBindingListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                              const GGS_multipleBindingDescriptor inOperand1,
                                                              const GGS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_arrayControllerBindingListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                              GGS_multipleBindingDescriptor & outOperand1,
                                                              const GGS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
      outOperand0 = p->mObject.mProperty_mControllerName ;
      outOperand1 = p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                         GGS_multipleBindingDescriptor & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    outOperand0 = p->mObject.mProperty_mControllerName ;
    outOperand1 = p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::setter_popLast (GGS_lstring & outOperand0,
                                                        GGS_multipleBindingDescriptor & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    outOperand0 = p->mObject.mProperty_mControllerName ;
    outOperand1 = p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::method_first (GGS_lstring & outOperand0,
                                                      GGS_multipleBindingDescriptor & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    outOperand0 = p->mObject.mProperty_mControllerName ;
    outOperand1 = p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::method_last (GGS_lstring & outOperand0,
                                                     GGS_multipleBindingDescriptor & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    outOperand0 = p->mObject.mProperty_mControllerName ;
    outOperand1 = p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::add_operation (const GGS_arrayControllerBindingListAST & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_arrayControllerBindingListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_arrayControllerBindingListAST result = GGS_arrayControllerBindingListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_arrayControllerBindingListAST result = GGS_arrayControllerBindingListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_arrayControllerBindingListAST result = GGS_arrayControllerBindingListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::plusAssign_operation (const GGS_arrayControllerBindingListAST inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::setter_setMControllerNameAtIndex (GGS_lstring inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mControllerName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_arrayControllerBindingListAST::getter_mControllerNameAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    result = p->mObject.mProperty_mControllerName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::setter_setMHiddenSelectionViewBindingDescriptorAtIndex (GGS_multipleBindingDescriptor inOperand,
                                                                                                GGS_uint inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor GGS_arrayControllerBindingListAST::getter_mHiddenSelectionViewBindingDescriptorAtIndex (const GGS_uint & inIndex,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) attributes.ptr () ;
  GGS_multipleBindingDescriptor result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    result = p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_arrayControllerBindingListAST::cEnumerator_arrayControllerBindingListAST (const GGS_arrayControllerBindingListAST & inEnumeratedObject,
                                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST_2E_element cEnumerator_arrayControllerBindingListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBindingListAST * p = (const cCollectionElement_arrayControllerBindingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_arrayControllerBindingListAST::current_mControllerName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBindingListAST * p = (const cCollectionElement_arrayControllerBindingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
  return p->mObject.mProperty_mControllerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor cEnumerator_arrayControllerBindingListAST::current_mHiddenSelectionViewBindingDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBindingListAST * p = (const cCollectionElement_arrayControllerBindingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
  return p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor ;
}




//--------------------------------------------------------------------------------------------------
//
//     @arrayControllerBindingListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerBindingListAST ("arrayControllerBindingListAST",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_arrayControllerBindingListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBindingListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayControllerBindingListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayControllerBindingListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_arrayControllerBindingListAST result ;
  const GGS_arrayControllerBindingListAST * p = (const GGS_arrayControllerBindingListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayControllerBindingListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBindingListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@astViewDeclarationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_astViewDeclarationList : public cCollectionElement {
  public: GGS_astViewDeclarationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_astViewDeclarationList (const GGS_lstring & in_mViewName,
                                                     const GGS_astAbstractViewDeclaration & in_mView
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_astViewDeclarationList (const GGS_astViewDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_astViewDeclarationList::cCollectionElement_astViewDeclarationList (const GGS_lstring & in_mViewName,
                                                                                      const GGS_astAbstractViewDeclaration & in_mView
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mViewName, in_mView) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_astViewDeclarationList::cCollectionElement_astViewDeclarationList (const GGS_astViewDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mViewName, inElement.mProperty_mView) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_astViewDeclarationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_astViewDeclarationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_astViewDeclarationList (mObject.mProperty_mViewName, mObject.mProperty_mView COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_astViewDeclarationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mViewName" ":") ;
  mObject.mProperty_mViewName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mView" ":") ;
  mObject.mProperty_mView.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList::GGS_astViewDeclarationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList::GGS_astViewDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList GGS_astViewDeclarationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_astViewDeclarationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList GGS_astViewDeclarationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_astViewDeclarationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList::enterElement (const GGS_astViewDeclarationList_2E_element & inValue,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_astViewDeclarationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList GGS_astViewDeclarationList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                 const GGS_astAbstractViewDeclaration & inOperand1
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_astViewDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_astViewDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_astViewDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_lstring & in_mViewName,
                                                            const GGS_astAbstractViewDeclaration & in_mView
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_astViewDeclarationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_astViewDeclarationList (in_mViewName,
                                                            in_mView COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList::addAssign_operation (const GGS_lstring & inOperand0,
                                                      const GGS_astAbstractViewDeclaration & inOperand1
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_astViewDeclarationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList::setter_append (const GGS_lstring inOperand0,
                                                const GGS_astAbstractViewDeclaration inOperand1,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_astViewDeclarationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                       const GGS_astAbstractViewDeclaration inOperand1,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_astViewDeclarationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                       GGS_astAbstractViewDeclaration & outOperand1,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
      outOperand0 = p->mObject.mProperty_mViewName ;
      outOperand1 = p->mObject.mProperty_mView ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList::setter_popFirst (GGS_lstring & outOperand0,
                                                  GGS_astAbstractViewDeclaration & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mViewName ;
    outOperand1 = p->mObject.mProperty_mView ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList::setter_popLast (GGS_lstring & outOperand0,
                                                 GGS_astAbstractViewDeclaration & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mViewName ;
    outOperand1 = p->mObject.mProperty_mView ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList::method_first (GGS_lstring & outOperand0,
                                               GGS_astAbstractViewDeclaration & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mViewName ;
    outOperand1 = p->mObject.mProperty_mView ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList::method_last (GGS_lstring & outOperand0,
                                              GGS_astAbstractViewDeclaration & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mViewName ;
    outOperand1 = p->mObject.mProperty_mView ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList GGS_astViewDeclarationList::add_operation (const GGS_astViewDeclarationList & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_astViewDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList GGS_astViewDeclarationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_astViewDeclarationList result = GGS_astViewDeclarationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList GGS_astViewDeclarationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_astViewDeclarationList result = GGS_astViewDeclarationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList GGS_astViewDeclarationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_astViewDeclarationList result = GGS_astViewDeclarationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList::plusAssign_operation (const GGS_astViewDeclarationList inOperand,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList::setter_setMViewNameAtIndex (GGS_lstring inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mViewName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_astViewDeclarationList::getter_mViewNameAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    result = p->mObject.mProperty_mViewName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList::setter_setMViewAtIndex (GGS_astAbstractViewDeclaration inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mView = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewDeclaration GGS_astViewDeclarationList::getter_mViewAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) attributes.ptr () ;
  GGS_astAbstractViewDeclaration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    result = p->mObject.mProperty_mView ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_astViewDeclarationList::cEnumerator_astViewDeclarationList (const GGS_astViewDeclarationList & inEnumeratedObject,
                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList_2E_element cEnumerator_astViewDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_astViewDeclarationList * p = (const cCollectionElement_astViewDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_astViewDeclarationList::current_mViewName (LOCATION_ARGS) const {
  const cCollectionElement_astViewDeclarationList * p = (const cCollectionElement_astViewDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
  return p->mObject.mProperty_mViewName ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewDeclaration cEnumerator_astViewDeclarationList::current_mView (LOCATION_ARGS) const {
  const cCollectionElement_astViewDeclarationList * p = (const cCollectionElement_astViewDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
  return p->mObject.mProperty_mView ;
}




//--------------------------------------------------------------------------------------------------
//
//     @astViewDeclarationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astViewDeclarationList ("astViewDeclarationList",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_astViewDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astViewDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astViewDeclarationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList GGS_astViewDeclarationList::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_astViewDeclarationList result ;
  const GGS_astViewDeclarationList * p = (const GGS_astViewDeclarationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astViewDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astViewDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@astAutoLayoutOutletLinkerList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_astAutoLayoutOutletLinkerList : public cCollectionElement {
  public: GGS_astAutoLayoutOutletLinkerList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_astAutoLayoutOutletLinkerList (const GGS_lstring & in_mLinkerName,
                                                            const GGS_lstringlist & in_mOutletNameList
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_astAutoLayoutOutletLinkerList (const GGS_astAutoLayoutOutletLinkerList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_astAutoLayoutOutletLinkerList::cCollectionElement_astAutoLayoutOutletLinkerList (const GGS_lstring & in_mLinkerName,
                                                                                                    const GGS_lstringlist & in_mOutletNameList
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLinkerName, in_mOutletNameList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_astAutoLayoutOutletLinkerList::cCollectionElement_astAutoLayoutOutletLinkerList (const GGS_astAutoLayoutOutletLinkerList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLinkerName, inElement.mProperty_mOutletNameList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_astAutoLayoutOutletLinkerList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_astAutoLayoutOutletLinkerList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_astAutoLayoutOutletLinkerList (mObject.mProperty_mLinkerName, mObject.mProperty_mOutletNameList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_astAutoLayoutOutletLinkerList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLinkerName" ":") ;
  mObject.mProperty_mLinkerName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOutletNameList" ":") ;
  mObject.mProperty_mOutletNameList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList::GGS_astAutoLayoutOutletLinkerList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList::GGS_astAutoLayoutOutletLinkerList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_astAutoLayoutOutletLinkerList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_astAutoLayoutOutletLinkerList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::enterElement (const GGS_astAutoLayoutOutletLinkerList_2E_element & inValue,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_astAutoLayoutOutletLinkerList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                               const GGS_lstringlist & inOperand1
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutOutletLinkerList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_astAutoLayoutOutletLinkerList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_astAutoLayoutOutletLinkerList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GGS_lstring & in_mLinkerName,
                                                                   const GGS_lstringlist & in_mOutletNameList
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutOutletLinkerList * p = nullptr ;
  macroMyNew (p, cCollectionElement_astAutoLayoutOutletLinkerList (in_mLinkerName,
                                                                   in_mOutletNameList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::addAssign_operation (const GGS_lstring & inOperand0,
                                                             const GGS_lstringlist & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_astAutoLayoutOutletLinkerList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::setter_append (const GGS_lstring inOperand0,
                                                       const GGS_lstringlist inOperand1,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_astAutoLayoutOutletLinkerList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                              const GGS_lstringlist inOperand1,
                                                              const GGS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_astAutoLayoutOutletLinkerList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                              GGS_lstringlist & outOperand1,
                                                              const GGS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_astAutoLayoutOutletLinkerList * p = (cCollectionElement_astAutoLayoutOutletLinkerList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
      outOperand0 = p->mObject.mProperty_mLinkerName ;
      outOperand1 = p->mObject.mProperty_mOutletNameList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::setter_popFirst (GGS_lstring & outOperand0,
                                                         GGS_lstringlist & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutOutletLinkerList * p = (cCollectionElement_astAutoLayoutOutletLinkerList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
    outOperand0 = p->mObject.mProperty_mLinkerName ;
    outOperand1 = p->mObject.mProperty_mOutletNameList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::setter_popLast (GGS_lstring & outOperand0,
                                                        GGS_lstringlist & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutOutletLinkerList * p = (cCollectionElement_astAutoLayoutOutletLinkerList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
    outOperand0 = p->mObject.mProperty_mLinkerName ;
    outOperand1 = p->mObject.mProperty_mOutletNameList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::method_first (GGS_lstring & outOperand0,
                                                      GGS_lstringlist & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutOutletLinkerList * p = (cCollectionElement_astAutoLayoutOutletLinkerList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
    outOperand0 = p->mObject.mProperty_mLinkerName ;
    outOperand1 = p->mObject.mProperty_mOutletNameList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::method_last (GGS_lstring & outOperand0,
                                                     GGS_lstringlist & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutOutletLinkerList * p = (cCollectionElement_astAutoLayoutOutletLinkerList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
    outOperand0 = p->mObject.mProperty_mLinkerName ;
    outOperand1 = p->mObject.mProperty_mOutletNameList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::add_operation (const GGS_astAutoLayoutOutletLinkerList & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_astAutoLayoutOutletLinkerList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::getter_subListWithRange (const GGS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutOutletLinkerList result = GGS_astAutoLayoutOutletLinkerList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutOutletLinkerList result = GGS_astAutoLayoutOutletLinkerList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutOutletLinkerList result = GGS_astAutoLayoutOutletLinkerList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::plusAssign_operation (const GGS_astAutoLayoutOutletLinkerList inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::setter_setMLinkerNameAtIndex (GGS_lstring inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutOutletLinkerList * p = (cCollectionElement_astAutoLayoutOutletLinkerList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLinkerName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_astAutoLayoutOutletLinkerList::getter_mLinkerNameAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutOutletLinkerList * p = (cCollectionElement_astAutoLayoutOutletLinkerList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
    result = p->mObject.mProperty_mLinkerName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::setter_setMOutletNameListAtIndex (GGS_lstringlist inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutOutletLinkerList * p = (cCollectionElement_astAutoLayoutOutletLinkerList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOutletNameList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_astAutoLayoutOutletLinkerList::getter_mOutletNameListAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutOutletLinkerList * p = (cCollectionElement_astAutoLayoutOutletLinkerList *) attributes.ptr () ;
  GGS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
    result = p->mObject.mProperty_mOutletNameList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_astAutoLayoutOutletLinkerList::cEnumerator_astAutoLayoutOutletLinkerList (const GGS_astAutoLayoutOutletLinkerList & inEnumeratedObject,
                                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList_2E_element cEnumerator_astAutoLayoutOutletLinkerList::current (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutOutletLinkerList * p = (const cCollectionElement_astAutoLayoutOutletLinkerList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_astAutoLayoutOutletLinkerList::current_mLinkerName (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutOutletLinkerList * p = (const cCollectionElement_astAutoLayoutOutletLinkerList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
  return p->mObject.mProperty_mLinkerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist cEnumerator_astAutoLayoutOutletLinkerList::current_mOutletNameList (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutOutletLinkerList * p = (const cCollectionElement_astAutoLayoutOutletLinkerList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
  return p->mObject.mProperty_mOutletNameList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @astAutoLayoutOutletLinkerList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutOutletLinkerList ("astAutoLayoutOutletLinkerList",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_astAutoLayoutOutletLinkerList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutOutletLinkerList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutOutletLinkerList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutOutletLinkerList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutOutletLinkerList result ;
  const GGS_astAutoLayoutOutletLinkerList * p = (const GGS_astAutoLayoutOutletLinkerList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutOutletLinkerList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutOutletLinkerList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutDocumentDeclarationAST_2E_weak::objectCompare (const GGS_autoLayoutDocumentDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST_2E_weak::GGS_autoLayoutDocumentDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST_2E_weak & GGS_autoLayoutDocumentDeclarationAST_2E_weak::operator = (const GGS_autoLayoutDocumentDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST_2E_weak::GGS_autoLayoutDocumentDeclarationAST_2E_weak (const GGS_autoLayoutDocumentDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST_2E_weak GGS_autoLayoutDocumentDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_autoLayoutDocumentDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST GGS_autoLayoutDocumentDeclarationAST_2E_weak::bang_autoLayoutDocumentDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutDocumentDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutDocumentDeclarationAST) ;
      result = GGS_autoLayoutDocumentDeclarationAST ((cPtr_autoLayoutDocumentDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutDocumentDeclarationAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST_2E_weak ("autoLayoutDocumentDeclarationAST.weak",
                                                                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutDocumentDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutDocumentDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutDocumentDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST_2E_weak GGS_autoLayoutDocumentDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutDocumentDeclarationAST_2E_weak result ;
  const GGS_autoLayoutDocumentDeclarationAST_2E_weak * p = (const GGS_autoLayoutDocumentDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutDocumentDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDocumentDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutOutletLinkerGenerationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutOutletLinkerGenerationList : public cCollectionElement {
  public: GGS_autoLayoutOutletLinkerGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_autoLayoutOutletLinkerGenerationList (const GGS_string & in_mLinkerName,
                                                                   const GGS__32_stringlist & in_mOutletNameAndTypeNameList
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutOutletLinkerGenerationList (const GGS_autoLayoutOutletLinkerGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutOutletLinkerGenerationList::cCollectionElement_autoLayoutOutletLinkerGenerationList (const GGS_string & in_mLinkerName,
                                                                                                                  const GGS__32_stringlist & in_mOutletNameAndTypeNameList
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLinkerName, in_mOutletNameAndTypeNameList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutOutletLinkerGenerationList::cCollectionElement_autoLayoutOutletLinkerGenerationList (const GGS_autoLayoutOutletLinkerGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLinkerName, inElement.mProperty_mOutletNameAndTypeNameList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutOutletLinkerGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutOutletLinkerGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_autoLayoutOutletLinkerGenerationList (mObject.mProperty_mLinkerName, mObject.mProperty_mOutletNameAndTypeNameList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutOutletLinkerGenerationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLinkerName" ":") ;
  mObject.mProperty_mLinkerName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOutletNameAndTypeNameList" ":") ;
  mObject.mProperty_mOutletNameAndTypeNameList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList::GGS_autoLayoutOutletLinkerGenerationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList::GGS_autoLayoutOutletLinkerGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_autoLayoutOutletLinkerGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_autoLayoutOutletLinkerGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::enterElement (const GGS_autoLayoutOutletLinkerGenerationList_2E_element & inValue,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutOutletLinkerGenerationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                             const GGS__32_stringlist & inOperand1
                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_autoLayoutOutletLinkerGenerationList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_autoLayoutOutletLinkerGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_autoLayoutOutletLinkerGenerationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GGS_string & in_mLinkerName,
                                                                          const GGS__32_stringlist & in_mOutletNameAndTypeNameList
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutOutletLinkerGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutOutletLinkerGenerationList (in_mLinkerName,
                                                                          in_mOutletNameAndTypeNameList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::addAssign_operation (const GGS_string & inOperand0,
                                                                    const GGS__32_stringlist & inOperand1
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutOutletLinkerGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::setter_append (const GGS_string inOperand0,
                                                              const GGS__32_stringlist inOperand1,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutOutletLinkerGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::setter_insertAtIndex (const GGS_string inOperand0,
                                                                     const GGS__32_stringlist inOperand1,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutOutletLinkerGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::setter_removeAtIndex (GGS_string & outOperand0,
                                                                     GGS__32_stringlist & outOperand1,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_autoLayoutOutletLinkerGenerationList * p = (cCollectionElement_autoLayoutOutletLinkerGenerationList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_autoLayoutOutletLinkerGenerationList) ;
      outOperand0 = p->mObject.mProperty_mLinkerName ;
      outOperand1 = p->mObject.mProperty_mOutletNameAndTypeNameList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::setter_popFirst (GGS_string & outOperand0,
                                                                GGS__32_stringlist & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutOutletLinkerGenerationList * p = (cCollectionElement_autoLayoutOutletLinkerGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutOutletLinkerGenerationList) ;
    outOperand0 = p->mObject.mProperty_mLinkerName ;
    outOperand1 = p->mObject.mProperty_mOutletNameAndTypeNameList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::setter_popLast (GGS_string & outOperand0,
                                                               GGS__32_stringlist & outOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutOutletLinkerGenerationList * p = (cCollectionElement_autoLayoutOutletLinkerGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutOutletLinkerGenerationList) ;
    outOperand0 = p->mObject.mProperty_mLinkerName ;
    outOperand1 = p->mObject.mProperty_mOutletNameAndTypeNameList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::method_first (GGS_string & outOperand0,
                                                             GGS__32_stringlist & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutOutletLinkerGenerationList * p = (cCollectionElement_autoLayoutOutletLinkerGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutOutletLinkerGenerationList) ;
    outOperand0 = p->mObject.mProperty_mLinkerName ;
    outOperand1 = p->mObject.mProperty_mOutletNameAndTypeNameList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::method_last (GGS_string & outOperand0,
                                                            GGS__32_stringlist & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutOutletLinkerGenerationList * p = (cCollectionElement_autoLayoutOutletLinkerGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutOutletLinkerGenerationList) ;
    outOperand0 = p->mObject.mProperty_mLinkerName ;
    outOperand1 = p->mObject.mProperty_mOutletNameAndTypeNameList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::add_operation (const GGS_autoLayoutOutletLinkerGenerationList & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutOutletLinkerGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutOutletLinkerGenerationList result = GGS_autoLayoutOutletLinkerGenerationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutOutletLinkerGenerationList result = GGS_autoLayoutOutletLinkerGenerationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutOutletLinkerGenerationList result = GGS_autoLayoutOutletLinkerGenerationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::plusAssign_operation (const GGS_autoLayoutOutletLinkerGenerationList inOperand,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::setter_setMLinkerNameAtIndex (GGS_string inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutOutletLinkerGenerationList * p = (cCollectionElement_autoLayoutOutletLinkerGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutOutletLinkerGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLinkerName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutOutletLinkerGenerationList::getter_mLinkerNameAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutOutletLinkerGenerationList * p = (cCollectionElement_autoLayoutOutletLinkerGenerationList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutOutletLinkerGenerationList) ;
    result = p->mObject.mProperty_mLinkerName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::setter_setMOutletNameAndTypeNameListAtIndex (GGS__32_stringlist inOperand,
                                                                                            GGS_uint inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutOutletLinkerGenerationList * p = (cCollectionElement_autoLayoutOutletLinkerGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutOutletLinkerGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOutletNameAndTypeNameList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist GGS_autoLayoutOutletLinkerGenerationList::getter_mOutletNameAndTypeNameListAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutOutletLinkerGenerationList * p = (cCollectionElement_autoLayoutOutletLinkerGenerationList *) attributes.ptr () ;
  GGS__32_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutOutletLinkerGenerationList) ;
    result = p->mObject.mProperty_mOutletNameAndTypeNameList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutOutletLinkerGenerationList::cEnumerator_autoLayoutOutletLinkerGenerationList (const GGS_autoLayoutOutletLinkerGenerationList & inEnumeratedObject,
                                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList_2E_element cEnumerator_autoLayoutOutletLinkerGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutOutletLinkerGenerationList * p = (const cCollectionElement_autoLayoutOutletLinkerGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutOutletLinkerGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_autoLayoutOutletLinkerGenerationList::current_mLinkerName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutOutletLinkerGenerationList * p = (const cCollectionElement_autoLayoutOutletLinkerGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutOutletLinkerGenerationList) ;
  return p->mObject.mProperty_mLinkerName ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist cEnumerator_autoLayoutOutletLinkerGenerationList::current_mOutletNameAndTypeNameList (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutOutletLinkerGenerationList * p = (const cCollectionElement_autoLayoutOutletLinkerGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutOutletLinkerGenerationList) ;
  return p->mObject.mProperty_mOutletNameAndTypeNameList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutOutletLinkerGenerationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGenerationList ("autoLayoutOutletLinkerGenerationList",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutOutletLinkerGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutOutletLinkerGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutOutletLinkerGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_autoLayoutOutletLinkerGenerationList result ;
  const GGS_autoLayoutOutletLinkerGenerationList * p = (const GGS_autoLayoutOutletLinkerGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutOutletLinkerGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutOutletLinkerGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_NullObject.hxx>
#include <Standard_NumericError.hxx>
#include <Standard_NegativeValue.hxx>
#include <TCollection_HExtendedString.hxx>
#include <TCollection_BasicMapIterator.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_ExtendedString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HExtendedString.hxx>
#include <TCollection_BaseSequence.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_BasicMap.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_BasicMapIterator.hxx>
#include <TCollection_BasicMap.hxx>
#include <Standard_NullObject.hxx>
#include <Standard_NumericError.hxx>
#include <Standard_NegativeValue.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_ExtendedString.hxx>
#include <Standard_NullObject.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_NumericError.hxx>
#include <Standard_NegativeValue.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_NullObject.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_NumericError.hxx>
#include <Standard_NegativeValue.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_MapNode.hxx>

// module includes
#include <TCollection.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_BaseSequence.hxx>
#include <TCollection_BasicMap.hxx>
#include <TCollection_BasicMapIterator.hxx>
#include <TCollection_ExtendedString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HExtendedString.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
#include <TCollection_Side.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TCollection(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TCollection"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<TCollection , shared_ptr<TCollection>>(m,"TCollection");

    static_cast<py::class_<TCollection , shared_ptr<TCollection> >>(m.attr("TCollection"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TCollection_AsciiString , shared_ptr<TCollection_AsciiString> >>(m.attr("TCollection_AsciiString"))
    // constructors
    // custom constructors
    // methods
        .def("Cat",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Character ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Character ) const>(&TCollection_AsciiString::Cat),
             R"#(Appends <other> to me. Syntax: aString = aString + "Dummy" Example: aString contains "I say " aString = aString + "Hello " + "Dolly" gives "I say Hello Dolly" To catenate more than one CString, you must put a String before. So the following example is WRONG ! aString = "Hello " + "Dolly" THIS IS NOT ALLOWED This rule is applicable to AssignCat (operator +=) too.)#"  , py::arg("other"))
        .def("Cat",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Integer ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Integer ) const>(&TCollection_AsciiString::Cat),
             R"#(Appends <other> to me. Syntax: aString = aString + 15; Example: aString contains "I say " gives "I say 15" To catenate more than one CString, you must put a String before. So the following example is WRONG ! aString = "Hello " + "Dolly" THIS IS NOT ALLOWED This rule is applicable to AssignCat (operator +=) too.)#"  , py::arg("other"))
        .def("Cat",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Real ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Real ) const>(&TCollection_AsciiString::Cat),
             R"#(Appends <other> to me. Syntax: aString = aString + 15.15; Example: aString contains "I say " gives "I say 15.15" To catenate more than one CString, you must put a String before. So the following example is WRONG ! aString = "Hello " + "Dolly" THIS IS NOT ALLOWED This rule is applicable to AssignCat (operator +=) too.)#"  , py::arg("other"))
        .def("Cat",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_CString ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_CString ) const>(&TCollection_AsciiString::Cat),
             R"#(Appends <other> to me. Syntax: aString = aString + "Dummy" Example: aString contains "I say " aString = aString + "Hello " + "Dolly" gives "I say Hello Dolly" To catenate more than one CString, you must put a String before. So the following example is WRONG ! aString = "Hello " + "Dolly" THIS IS NOT ALLOWED This rule is applicable to AssignCat (operator +=) too.)#"  , py::arg("other"))
        .def("Cat",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const TCollection_AsciiString & ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const TCollection_AsciiString & ) const>(&TCollection_AsciiString::Cat),
             R"#(Appends <other> to me. Example: aString = aString + anotherString)#"  , py::arg("other"))
        .def("IsEmpty",
             (Standard_Boolean (TCollection_AsciiString::*)() const) static_cast<Standard_Boolean (TCollection_AsciiString::*)() const>(&TCollection_AsciiString::IsEmpty),
             R"#(Returns True if the string <me> contains zero character.)#" )
        .def("Length",
             (Standard_Integer (TCollection_AsciiString::*)() const) static_cast<Standard_Integer (TCollection_AsciiString::*)() const>(&TCollection_AsciiString::Length),
             R"#(Returns number of characters in <me>. This is the same functionality as 'strlen' in C. Example TCollection_AsciiString myAlphabet("abcdef"); assert ( myAlphabet.Length() == 6 ); - 1 is the position of the first character in this string. - The length of this string gives the position of its last character. - Positions less than or equal to zero, or greater than the length of this string are invalid in functions which identify a character of this string by its position.)#" )
        .def("SubString",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Integer , const Standard_Integer ) const>(&TCollection_AsciiString::SubString),
             R"#(Creation of a sub-string of the string <me>. The sub-string starts to the index Fromindex and ends to the index ToIndex. Raises an exception if ToIndex or FromIndex is out of bounds Example: before me = "abcdefg", ToIndex=3, FromIndex=6 after me = "abcdefg" returns "cdef")#"  , py::arg("FromIndex"),  py::arg("ToIndex"))
        .def("ToCString",
             (Standard_CString (TCollection_AsciiString::*)() const) static_cast<Standard_CString (TCollection_AsciiString::*)() const>(&TCollection_AsciiString::ToCString),
             R"#(Returns pointer to AsciiString (char *). This is useful for some casual manipulations. Warning: Because this "char *" is 'const', you can't modify its contents.)#" )
        .def("ToCString",
             (Standard_CString (TCollection_AsciiString::*)() const) static_cast<Standard_CString (TCollection_AsciiString::*)() const>(&TCollection_AsciiString::ToCString),
             R"#(Returns pointer to AsciiString (char *). This is useful for some casual manipulations. Warning: Because this "char *" is 'const', you can't modify its contents.)#" )
        .def("Length",
             (Standard_Integer (TCollection_AsciiString::*)() const) static_cast<Standard_Integer (TCollection_AsciiString::*)() const>(&TCollection_AsciiString::Length),
             R"#(Returns number of characters in <me>. This is the same functionality as 'strlen' in C. Example TCollection_AsciiString myAlphabet("abcdef"); assert ( myAlphabet.Length() == 6 ); - 1 is the position of the first character in this string. - The length of this string gives the position of its last character. - Positions less than or equal to zero, or greater than the length of this string are invalid in functions which identify a character of this string by its position.)#" )
        .def("Cat",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const TCollection_AsciiString & ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const TCollection_AsciiString & ) const>(&TCollection_AsciiString::Cat),
             R"#(Appends <other> to me. Example: aString = aString + anotherString)#"  , py::arg("other"))
        .def("Cat",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_CString ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_CString ) const>(&TCollection_AsciiString::Cat),
             R"#(Appends <other> to me. Syntax: aString = aString + "Dummy" Example: aString contains "I say " aString = aString + "Hello " + "Dolly" gives "I say Hello Dolly" To catenate more than one CString, you must put a String before. So the following example is WRONG ! aString = "Hello " + "Dolly" THIS IS NOT ALLOWED This rule is applicable to AssignCat (operator +=) too.)#"  , py::arg("other"))
        .def("Cat",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Character ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Character ) const>(&TCollection_AsciiString::Cat),
             R"#(Appends <other> to me. Syntax: aString = aString + "Dummy" Example: aString contains "I say " aString = aString + "Hello " + "Dolly" gives "I say Hello Dolly" To catenate more than one CString, you must put a String before. So the following example is WRONG ! aString = "Hello " + "Dolly" THIS IS NOT ALLOWED This rule is applicable to AssignCat (operator +=) too.)#"  , py::arg("other"))
        .def("Cat",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Integer ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Integer ) const>(&TCollection_AsciiString::Cat),
             R"#(Appends <other> to me. Syntax: aString = aString + 15; Example: aString contains "I say " gives "I say 15" To catenate more than one CString, you must put a String before. So the following example is WRONG ! aString = "Hello " + "Dolly" THIS IS NOT ALLOWED This rule is applicable to AssignCat (operator +=) too.)#"  , py::arg("other"))
        .def("Cat",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Real ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Real ) const>(&TCollection_AsciiString::Cat),
             R"#(Appends <other> to me. Syntax: aString = aString + 15.15; Example: aString contains "I say " gives "I say 15.15" To catenate more than one CString, you must put a String before. So the following example is WRONG ! aString = "Hello " + "Dolly" THIS IS NOT ALLOWED This rule is applicable to AssignCat (operator +=) too.)#"  , py::arg("other"))
        .def("SubString",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Integer , const Standard_Integer ) const>(&TCollection_AsciiString::SubString),
             R"#(Creation of a sub-string of the string <me>. The sub-string starts to the index Fromindex and ends to the index ToIndex. Raises an exception if ToIndex or FromIndex is out of bounds Example: before me = "abcdefg", ToIndex=3, FromIndex=6 after me = "abcdefg" returns "cdef")#"  , py::arg("FromIndex"),  py::arg("ToIndex"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const TCollection_AsciiString & , Standard_Integer ) ) static_cast<Standard_Integer (*)( const TCollection_AsciiString & , Standard_Integer ) >(&TCollection_AsciiString::HashCode),
                    R"#(Computes a hash code for the given ASCII string, in the range [1, theUpperBound]. Returns the same integer value as the hash function for TCollection_ExtendedString)#"  , py::arg("theAsciiString"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const TCollection_AsciiString & , const TCollection_AsciiString & ) ) static_cast<Standard_Boolean (*)( const TCollection_AsciiString & , const TCollection_AsciiString & ) >(&TCollection_AsciiString::IsEqual),
                    R"#(Returns True when the two strings are the same. (Just for HashCode for AsciiString))#"  , py::arg("string1"),  py::arg("string2"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const TCollection_AsciiString & , const Standard_CString ) ) static_cast<Standard_Boolean (*)( const TCollection_AsciiString & , const Standard_CString ) >(&TCollection_AsciiString::IsEqual),
                    R"#(Returns True when the two strings are the same. (Just for HashCode for AsciiString))#"  , py::arg("string1"),  py::arg("string2"))
    // static methods using call by reference i.s.o. return
    // operators
        .def("__iadd__",
             (void (TCollection_AsciiString::*)( const Standard_Character ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Character ) >(&TCollection_AsciiString::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
        .def("__iadd__",
             (void (TCollection_AsciiString::*)( const Standard_Integer ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Integer ) >(&TCollection_AsciiString::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
        .def("__iadd__",
             (void (TCollection_AsciiString::*)( const Standard_Real ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Real ) >(&TCollection_AsciiString::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
        .def("__iadd__",
             (void (TCollection_AsciiString::*)( const Standard_CString ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_CString ) >(&TCollection_AsciiString::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
        .def("__iadd__",
             (void (TCollection_AsciiString::*)( const TCollection_AsciiString & ) ) static_cast<void (TCollection_AsciiString::*)( const TCollection_AsciiString & ) >(&TCollection_AsciiString::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
        .def("__add__",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Character ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Character ) const>(&TCollection_AsciiString::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
        .def("__add__",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Integer ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Integer ) const>(&TCollection_AsciiString::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
        .def("__add__",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Real ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Real ) const>(&TCollection_AsciiString::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
        .def("__add__",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_CString ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_CString ) const>(&TCollection_AsciiString::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
        .def("__add__",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const TCollection_AsciiString & ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const TCollection_AsciiString & ) const>(&TCollection_AsciiString::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
    // additional methods and static methods
;


    static_cast<py::class_<TCollection_BaseSequence , shared_ptr<TCollection_BaseSequence> >>(m.attr("TCollection_BaseSequence"))
    // constructors
    // custom constructors
    // methods
        .def("IsEmpty",
             (Standard_Boolean (TCollection_BaseSequence::*)() const) static_cast<Standard_Boolean (TCollection_BaseSequence::*)() const>(&TCollection_BaseSequence::IsEmpty),
             R"#(returns True if the sequence <me> contains no elements.)#" )
        .def("Length",
             (Standard_Integer (TCollection_BaseSequence::*)() const) static_cast<Standard_Integer (TCollection_BaseSequence::*)() const>(&TCollection_BaseSequence::Length),
             R"#(Returns the number of element(s) in the sequence. Returns zero if the sequence is empty.)#" )
        .def("IsEmpty",
             (Standard_Boolean (TCollection_BaseSequence::*)() const) static_cast<Standard_Boolean (TCollection_BaseSequence::*)() const>(&TCollection_BaseSequence::IsEmpty),
             R"#(returns True if the sequence <me> contains no elements.)#" )
        .def("Length",
             (Standard_Integer (TCollection_BaseSequence::*)() const) static_cast<Standard_Integer (TCollection_BaseSequence::*)() const>(&TCollection_BaseSequence::Length),
             R"#(Returns the number of element(s) in the sequence. Returns zero if the sequence is empty.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TCollection_BasicMap , shared_ptr<TCollection_BasicMap> >>(m.attr("TCollection_BasicMap"))
    // constructors
    // custom constructors
    // methods
        .def("NbBuckets",
             (Standard_Integer (TCollection_BasicMap::*)() const) static_cast<Standard_Integer (TCollection_BasicMap::*)() const>(&TCollection_BasicMap::NbBuckets),
             R"#(Returns the number of buckets in <me>.)#" )
        .def("Extent",
             (Standard_Integer (TCollection_BasicMap::*)() const) static_cast<Standard_Integer (TCollection_BasicMap::*)() const>(&TCollection_BasicMap::Extent),
             R"#(Returns the number of keys already stored in <me>.)#" )
        .def("IsEmpty",
             (Standard_Boolean (TCollection_BasicMap::*)() const) static_cast<Standard_Boolean (TCollection_BasicMap::*)() const>(&TCollection_BasicMap::IsEmpty),
             R"#(Returns True when the map contains no keys. This is exactly Extent() == 0.)#" )
        .def("NbBuckets",
             (Standard_Integer (TCollection_BasicMap::*)() const) static_cast<Standard_Integer (TCollection_BasicMap::*)() const>(&TCollection_BasicMap::NbBuckets),
             R"#(Returns the number of buckets in <me>.)#" )
        .def("Extent",
             (Standard_Integer (TCollection_BasicMap::*)() const) static_cast<Standard_Integer (TCollection_BasicMap::*)() const>(&TCollection_BasicMap::Extent),
             R"#(Returns the number of keys already stored in <me>.)#" )
        .def("IsEmpty",
             (Standard_Boolean (TCollection_BasicMap::*)() const) static_cast<Standard_Boolean (TCollection_BasicMap::*)() const>(&TCollection_BasicMap::IsEmpty),
             R"#(Returns True when the map contains no keys. This is exactly Extent() == 0.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TCollection_BasicMapIterator , shared_ptr<TCollection_BasicMapIterator> >>(m.attr("TCollection_BasicMapIterator"))
    // constructors
    // custom constructors
    // methods
        .def("More",
             (Standard_Boolean (TCollection_BasicMapIterator::*)() const) static_cast<Standard_Boolean (TCollection_BasicMapIterator::*)() const>(&TCollection_BasicMapIterator::More),
             R"#(Returns true if there is a current entry for this iterator in the map. Use the function Next to set this iterator to the position of the next entry, if it exists.)#" )
        .def("More",
             (Standard_Boolean (TCollection_BasicMapIterator::*)() const) static_cast<Standard_Boolean (TCollection_BasicMapIterator::*)() const>(&TCollection_BasicMapIterator::More),
             R"#(Returns true if there is a current entry for this iterator in the map. Use the function Next to set this iterator to the position of the next entry, if it exists.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TCollection_ExtendedString , shared_ptr<TCollection_ExtendedString> >>(m.attr("TCollection_ExtendedString"))
    // constructors
    // custom constructors
    // methods
        .def("IsEmpty",
             (Standard_Boolean (TCollection_ExtendedString::*)() const) static_cast<Standard_Boolean (TCollection_ExtendedString::*)() const>(&TCollection_ExtendedString::IsEmpty),
             R"#(Returns True if this string contains no characters.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const TCollection_ExtendedString & , const Standard_Integer ) ) static_cast<Standard_Integer (*)( const TCollection_ExtendedString & , const Standard_Integer ) >(&TCollection_ExtendedString::HashCode),
                    R"#(Returns a hashed value for the extended string within the range 1 .. theUpper. Note: if string is ASCII, the computed value is the same as the value computed with the HashCode function on a TCollection_AsciiString string composed with equivalent ASCII characters.)#"  , py::arg("theString"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & ) >(&TCollection_ExtendedString::IsEqual),
                    R"#(Returns true if the characters in this extended string are identical to the characters in the other extended string. Note that this method is an alias of operator ==.)#"  , py::arg("theString1"),  py::arg("theString2"))
    // static methods using call by reference i.s.o. return
    // operators
        .def("__iadd__",
             (void (TCollection_ExtendedString::*)( const TCollection_ExtendedString & ) ) static_cast<void (TCollection_ExtendedString::*)( const TCollection_ExtendedString & ) >(&TCollection_ExtendedString::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
        .def("__add__",
             (TCollection_ExtendedString (TCollection_ExtendedString::*)( const TCollection_ExtendedString & ) const) static_cast<TCollection_ExtendedString (TCollection_ExtendedString::*)( const TCollection_ExtendedString & ) const>(&TCollection_ExtendedString::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
    // additional methods and static methods
;


    static_cast<py::class_<TCollection_HAsciiString ,opencascade::handle<TCollection_HAsciiString> , Standard_Transient>>(m.attr("TCollection_HAsciiString"))
    // constructors
    // custom constructors
    // methods
        .def("AssignCat",
             (void (TCollection_HAsciiString::*)( const Standard_CString ) ) static_cast<void (TCollection_HAsciiString::*)( const Standard_CString ) >(&TCollection_HAsciiString::AssignCat),
             R"#(Appends <other> to me.)#"  , py::arg("other"))
        .def("AssignCat",
             (void (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&TCollection_HAsciiString::AssignCat),
             R"#(Appends <other> to me. Example: aString = aString + anotherString)#"  , py::arg("other"))
        .def("Length",
             (Standard_Integer (TCollection_HAsciiString::*)() const) static_cast<Standard_Integer (TCollection_HAsciiString::*)() const>(&TCollection_HAsciiString::Length),
             R"#(Returns number of characters in <me>. This is the same functionality as 'strlen' in C.)#" )
        .def("ToCString",
             (Standard_CString (TCollection_HAsciiString::*)() const) static_cast<Standard_CString (TCollection_HAsciiString::*)() const>(&TCollection_HAsciiString::ToCString),
             R"#(Returns pointer to string (char *) This is useful for some casual manipulations Because this "char *" is 'const', you can't modify its contents.)#" )
        .def("String",
             (const TCollection_AsciiString & (TCollection_HAsciiString::*)() const) static_cast<const TCollection_AsciiString & (TCollection_HAsciiString::*)() const>(&TCollection_HAsciiString::String),
             R"#(Returns the field myString.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TCollection_HAsciiString::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TCollection_HAsciiString::*)() const>(&TCollection_HAsciiString::DynamicType),
             R"#(None)#" )
        .def("AssignCat",
             (void (TCollection_HAsciiString::*)( const Standard_CString ) ) static_cast<void (TCollection_HAsciiString::*)( const Standard_CString ) >(&TCollection_HAsciiString::AssignCat),
             R"#(Appends <other> to me.)#"  , py::arg("other"))
        .def("AssignCat",
             (void (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&TCollection_HAsciiString::AssignCat),
             R"#(Appends <other> to me. Example: aString = aString + anotherString)#"  , py::arg("other"))
        .def("Length",
             (Standard_Integer (TCollection_HAsciiString::*)() const) static_cast<Standard_Integer (TCollection_HAsciiString::*)() const>(&TCollection_HAsciiString::Length),
             R"#(Returns number of characters in <me>. This is the same functionality as 'strlen' in C.)#" )
        .def("String",
             (const TCollection_AsciiString & (TCollection_HAsciiString::*)() const) static_cast<const TCollection_AsciiString & (TCollection_HAsciiString::*)() const>(&TCollection_HAsciiString::String),
             R"#(Returns the field myString.)#" )
        .def("ToCString",
             (Standard_CString (TCollection_HAsciiString::*)() const) static_cast<Standard_CString (TCollection_HAsciiString::*)() const>(&TCollection_HAsciiString::ToCString),
             R"#(Returns pointer to string (char *) This is useful for some casual manipulations Because this "char *" is 'const', you can't modify its contents.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TCollection_HAsciiString::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TCollection_HExtendedString ,opencascade::handle<TCollection_HExtendedString> , Standard_Transient>>(m.attr("TCollection_HExtendedString"))
    // constructors
    // custom constructors
    // methods
        .def("ToExtString",
             (Standard_ExtString (TCollection_HExtendedString::*)() const) static_cast<Standard_ExtString (TCollection_HExtendedString::*)() const>(&TCollection_HExtendedString::ToExtString),
             R"#(Returns pointer to ExtString)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TCollection_HExtendedString::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TCollection_HExtendedString::*)() const>(&TCollection_HExtendedString::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TCollection_HExtendedString::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TCollection_MapNode ,opencascade::handle<TCollection_MapNode> , Standard_Transient>>(m.attr("TCollection_MapNode"))
    // constructors
    // custom constructors
    // methods
        .def("Next",
             (TCollection_MapNodePtr & (TCollection_MapNode::*)() const) static_cast<TCollection_MapNodePtr & (TCollection_MapNode::*)() const>(&TCollection_MapNode::Next),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TCollection_MapNode::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TCollection_MapNode::*)() const>(&TCollection_MapNode::DynamicType),
             R"#(None)#" )
        .def("Next",
             (TCollection_MapNodePtr & (TCollection_MapNode::*)() const) static_cast<TCollection_MapNodePtr & (TCollection_MapNode::*)() const>(&TCollection_MapNode::Next),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TCollection_MapNode::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TCollection_SeqNode ,opencascade::handle<TCollection_SeqNode> , Standard_Transient>>(m.attr("TCollection_SeqNode"))
    // constructors
    // custom constructors
    // methods
        .def("Next",
             (TCollection_SeqNodePtr & (TCollection_SeqNode::*)() const) static_cast<TCollection_SeqNodePtr & (TCollection_SeqNode::*)() const>(&TCollection_SeqNode::Next),
             R"#(None)#" )
        .def("Previous",
             (TCollection_SeqNodePtr & (TCollection_SeqNode::*)() const) static_cast<TCollection_SeqNodePtr & (TCollection_SeqNode::*)() const>(&TCollection_SeqNode::Previous),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TCollection_SeqNode::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TCollection_SeqNode::*)() const>(&TCollection_SeqNode::DynamicType),
             R"#(None)#" )
        .def("Next",
             (TCollection_SeqNodePtr & (TCollection_SeqNode::*)() const) static_cast<TCollection_SeqNodePtr & (TCollection_SeqNode::*)() const>(&TCollection_SeqNode::Next),
             R"#(None)#" )
        .def("Previous",
             (TCollection_SeqNodePtr & (TCollection_SeqNode::*)() const) static_cast<TCollection_SeqNodePtr & (TCollection_SeqNode::*)() const>(&TCollection_SeqNode::Previous),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TCollection_SeqNode::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/TCollection_HAsciiString.hxx
// ./opencascade/TCollection_MapNode.hxx
// ./opencascade/TCollection_BasicMap.hxx
// ./opencascade/TCollection_SeqNodePtr.hxx
// ./opencascade/TCollection.hxx
// ./opencascade/TCollection_BasicMapIterator.hxx
// ./opencascade/TCollection_AsciiString.hxx
    m.def("HashCode",
          (Standard_Integer (*)( const TCollection_AsciiString & , const Standard_Integer ))  static_cast<Standard_Integer (*)( const TCollection_AsciiString & , const Standard_Integer )>(&HashCode),
          R"#(Computes a hash code for the given ASCII string, in the range [1, theUpperBound])#"  , py::arg("theAsciiString"),  py::arg("theUpperBound"));
    m.def("IsEqual",
          (Standard_Boolean (*)( const TCollection_AsciiString & , const TCollection_AsciiString & ))  static_cast<Standard_Boolean (*)( const TCollection_AsciiString & , const TCollection_AsciiString & )>(&IsEqual),
          R"#(None)#"  , py::arg("string1"),  py::arg("string2"));
// ./opencascade/TCollection_ExtendedString.hxx
    m.def("HashCode",
          (Standard_Integer (*)( const TCollection_ExtendedString & , const Standard_Integer ))  static_cast<Standard_Integer (*)( const TCollection_ExtendedString & , const Standard_Integer )>(&HashCode),
          R"#(Computes a hash code for the given extended string, in the range [1, theUpperBound])#"  , py::arg("theExtendedString"),  py::arg("theUpperBound"));
// ./opencascade/TCollection_Side.hxx
// ./opencascade/TCollection_SeqNode.hxx
// ./opencascade/TCollection_BaseSequence.hxx
// ./opencascade/TCollection_HExtendedString.hxx
// ./opencascade/TCollection_MapNodePtr.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

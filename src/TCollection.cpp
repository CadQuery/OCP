
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TCollection_BasicMapIterator.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_OutOfRange.hxx>
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
#include <TCollection_HAsciiString.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_ExtendedString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HExtendedString.hxx>
#include <TCollection_BaseSequence.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_BasicMap.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_BasicMapIterator.hxx>
#include <Standard_NullObject.hxx>
#include <Standard_NumericError.hxx>
#include <Standard_NegativeValue.hxx>
#include <TCollection_HExtendedString.hxx>
#include <Standard_NullObject.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_NumericError.hxx>
#include <Standard_NegativeValue.hxx>
#include <TCollection_AsciiString.hxx>

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

    static_cast<py::class_<TCollection , shared_ptr<TCollection>  >>(m.attr("TCollection"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("NextPrimeForMap_s",
                    (Standard_Integer (*)( const Standard_Integer  ) ) static_cast<Standard_Integer (*)( const Standard_Integer  ) >(&TCollection::NextPrimeForMap),
                    R"#(Returns a prime number greater than <I> suitable to dimension a Map. When <I> becomes great there is a limit on the result (today the limit is around 1 000 000). This is not a limit of the number of items but a limit in the number of buckets. i.e. there will be more collisions in the map.)#"  , py::arg("I"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TCollection_AsciiString , shared_ptr<TCollection_AsciiString>  >>(m.attr("TCollection_AsciiString"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_CString >()  , py::arg("message") )
        .def(py::init< const Standard_CString,const Standard_Integer >()  , py::arg("message"),  py::arg("aLen") )
        .def(py::init< const Standard_Character >()  , py::arg("aChar") )
        .def(py::init< const Standard_Integer,const Standard_Character >()  , py::arg("length"),  py::arg("filler") )
        .def(py::init< const Standard_Integer >()  , py::arg("value") )
        .def(py::init< const Standard_Real >()  , py::arg("value") )
        .def(py::init< const TCollection_AsciiString & >()  , py::arg("astring") )
        .def(py::init< const TCollection_AsciiString &,const Standard_Character >()  , py::arg("astring"),  py::arg("message") )
        .def(py::init< const TCollection_AsciiString &,const Standard_CString >()  , py::arg("astring"),  py::arg("message") )
        .def(py::init< const TCollection_AsciiString &,const TCollection_AsciiString & >()  , py::arg("astring"),  py::arg("message") )
        .def(py::init< const TCollection_ExtendedString &,const Standard_Character >()  , py::arg("astring"),  py::arg("replaceNonAscii")=static_cast<const Standard_Character>(0) )
        .def(py::init< const Standard_WideChar * >()  , py::arg("theStringUtf") )
    // custom constructors
    // methods
        .def("AssignCat",
             (void (TCollection_AsciiString::*)( const Standard_Character  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Character  ) >(&TCollection_AsciiString::AssignCat),
             R"#(Appends <other> to me. This is an unary operator.)#"  , py::arg("other"))
        .def("AssignCat",
             (void (TCollection_AsciiString::*)( const Standard_Integer  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Integer  ) >(&TCollection_AsciiString::AssignCat),
             R"#(Appends <other> to me. This is an unary operator.)#"  , py::arg("other"))
        .def("AssignCat",
             (void (TCollection_AsciiString::*)( const Standard_Real  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Real  ) >(&TCollection_AsciiString::AssignCat),
             R"#(Appends <other> to me. This is an unary operator.)#"  , py::arg("other"))
        .def("AssignCat",
             (void (TCollection_AsciiString::*)( const Standard_CString  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_CString  ) >(&TCollection_AsciiString::AssignCat),
             R"#(Appends <other> to me. This is an unary operator. ex: aString += "Dummy" To catenate more than one CString, you must put a AsciiString before. Example: aString += "Hello " + "Dolly" IS NOT VALID ! But astring += anotherString + "Hello " + "Dolly" is valid.)#"  , py::arg("other"))
        .def("AssignCat",
             (void (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) ) static_cast<void (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) >(&TCollection_AsciiString::AssignCat),
             R"#(Appends <other> to me. This is an unary operator. Example: aString += anotherString)#"  , py::arg("other"))
        .def("Capitalize",
             (void (TCollection_AsciiString::*)() ) static_cast<void (TCollection_AsciiString::*)() >(&TCollection_AsciiString::Capitalize),
             R"#(Converts the first character into its corresponding upper-case character and the other characters into lowercase Example: before me = "hellO " after me = "Hello ")#" )
        .def("Cat",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Character  ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Character  ) const>(&TCollection_AsciiString::Cat),
             R"#(Appends <other> to me. Syntax: aString = aString + "Dummy" Example: aString contains "I say " aString = aString + "Hello " + "Dolly" gives "I say Hello Dolly" To catenate more than one CString, you must put a String before. So the following example is WRONG ! aString = "Hello " + "Dolly" THIS IS NOT ALLOWED This rule is applicable to AssignCat (operator +=) too.)#"  , py::arg("other"))
        .def("Cat",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Integer  ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Integer  ) const>(&TCollection_AsciiString::Cat),
             R"#(Appends <other> to me. Syntax: aString = aString + 15; Example: aString contains "I say " gives "I say 15" To catenate more than one CString, you must put a String before. So the following example is WRONG ! aString = "Hello " + "Dolly" THIS IS NOT ALLOWED This rule is applicable to AssignCat (operator +=) too.)#"  , py::arg("other"))
        .def("Cat",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Real  ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Real  ) const>(&TCollection_AsciiString::Cat),
             R"#(Appends <other> to me. Syntax: aString = aString + 15.15; Example: aString contains "I say " gives "I say 15.15" To catenate more than one CString, you must put a String before. So the following example is WRONG ! aString = "Hello " + "Dolly" THIS IS NOT ALLOWED This rule is applicable to AssignCat (operator +=) too.)#"  , py::arg("other"))
        .def("Cat",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_CString  ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_CString  ) const>(&TCollection_AsciiString::Cat),
             R"#(Appends <other> to me. Syntax: aString = aString + "Dummy" Example: aString contains "I say " aString = aString + "Hello " + "Dolly" gives "I say Hello Dolly" To catenate more than one CString, you must put a String before. So the following example is WRONG ! aString = "Hello " + "Dolly" THIS IS NOT ALLOWED This rule is applicable to AssignCat (operator +=) too.)#"  , py::arg("other"))
        .def("Cat",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) const>(&TCollection_AsciiString::Cat),
             R"#(Appends <other> to me. Example: aString = aString + anotherString)#"  , py::arg("other"))
        .def("Center",
             (void (TCollection_AsciiString::*)( const Standard_Integer ,  const Standard_Character  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Integer ,  const Standard_Character  ) >(&TCollection_AsciiString::Center),
             R"#(Modifies this ASCII string so that its length becomes equal to Width and the new characters are equal to Filler. New characters are added both at the beginning and at the end of this string. If Width is less than the length of this ASCII string, nothing happens. Example TCollection_AsciiString myAlphabet("abcdef"); myAlphabet.Center(9,' '); assert ( myAlphabet == " abcdef " );)#"  , py::arg("Width"),  py::arg("Filler"))
        .def("ChangeAll",
             (void (TCollection_AsciiString::*)( const Standard_Character ,  const Standard_Character ,  const Standard_Boolean  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Character ,  const Standard_Character ,  const Standard_Boolean  ) >(&TCollection_AsciiString::ChangeAll),
             R"#(Substitutes all the characters equal to aChar by NewChar in the AsciiString <me>. The substitution can be case sensitive. If you don't use default case sensitive, no matter wether aChar is uppercase or not. Example: me = "Histake" -> ChangeAll('H','M',Standard_True) gives me = "Mistake")#"  , py::arg("aChar"),  py::arg("NewChar"),  py::arg("CaseSensitive")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Clear",
             (void (TCollection_AsciiString::*)() ) static_cast<void (TCollection_AsciiString::*)() >(&TCollection_AsciiString::Clear),
             R"#(Removes all characters contained in <me>. This produces an empty AsciiString.)#" )
        .def("Copy",
             (void (TCollection_AsciiString::*)( const Standard_CString  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_CString  ) >(&TCollection_AsciiString::Copy),
             R"#(Copy <fromwhere> to <me>. Used as operator = Example: aString = anotherCString;)#"  , py::arg("fromwhere"))
        .def("Copy",
             (void (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) ) static_cast<void (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) >(&TCollection_AsciiString::Copy),
             R"#(Copy <fromwhere> to <me>. Used as operator = Example: aString = anotherString;)#"  , py::arg("fromwhere"))
        .def("Swap",
             (void (TCollection_AsciiString::*)( TCollection_AsciiString &  ) ) static_cast<void (TCollection_AsciiString::*)( TCollection_AsciiString &  ) >(&TCollection_AsciiString::Swap),
             R"#(Exchange the data of two strings (without reallocating memory).)#"  , py::arg("theOther"))
        .def("FirstLocationInSet",
             (Standard_Integer (TCollection_AsciiString::*)( const TCollection_AsciiString & ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (TCollection_AsciiString::*)( const TCollection_AsciiString & ,  const Standard_Integer ,  const Standard_Integer  ) const>(&TCollection_AsciiString::FirstLocationInSet),
             R"#(Returns the index of the first character of <me> that is present in <Set>. The search begins to the index FromIndex and ends to the the index ToIndex. Returns zero if failure. Raises an exception if FromIndex or ToIndex is out of range. Example: before me = "aabAcAa", S = "Aa", FromIndex = 1, Toindex = 7 after me = "aabAcAa" returns 1)#"  , py::arg("Set"),  py::arg("FromIndex"),  py::arg("ToIndex"))
        .def("FirstLocationNotInSet",
             (Standard_Integer (TCollection_AsciiString::*)( const TCollection_AsciiString & ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (TCollection_AsciiString::*)( const TCollection_AsciiString & ,  const Standard_Integer ,  const Standard_Integer  ) const>(&TCollection_AsciiString::FirstLocationNotInSet),
             R"#(Returns the index of the first character of <me> that is not present in the set <Set>. The search begins to the index FromIndex and ends to the the index ToIndex in <me>. Returns zero if failure. Raises an exception if FromIndex or ToIndex is out of range. Example: before me = "aabAcAa", S = "Aa", FromIndex = 1, Toindex = 7 after me = "aabAcAa" returns 3)#"  , py::arg("Set"),  py::arg("FromIndex"),  py::arg("ToIndex"))
        .def("Insert",
             (void (TCollection_AsciiString::*)( const Standard_Integer ,  const Standard_Character  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Integer ,  const Standard_Character  ) >(&TCollection_AsciiString::Insert),
             R"#(Inserts a Character at position <where>. Example: aString contains "hy not ?" aString.Insert(1,'W'); gives "Why not ?" aString contains "Wh" aString.Insert(3,'y'); gives "Why" aString contains "Way" aString.Insert(2,'h'); gives "Why")#"  , py::arg("where"),  py::arg("what"))
        .def("Insert",
             (void (TCollection_AsciiString::*)( const Standard_Integer ,  const Standard_CString  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Integer ,  const Standard_CString  ) >(&TCollection_AsciiString::Insert),
             R"#(Inserts a CString at position <where>. Example: aString contains "O more" aString.Insert(2,"nce"); gives "Once more")#"  , py::arg("where"),  py::arg("what"))
        .def("Insert",
             (void (TCollection_AsciiString::*)( const Standard_Integer ,  const TCollection_AsciiString &  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Integer ,  const TCollection_AsciiString &  ) >(&TCollection_AsciiString::Insert),
             R"#(Inserts a AsciiString at position <where>.)#"  , py::arg("where"),  py::arg("what"))
        .def("InsertAfter",
             (void (TCollection_AsciiString::*)( const Standard_Integer ,  const TCollection_AsciiString &  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Integer ,  const TCollection_AsciiString &  ) >(&TCollection_AsciiString::InsertAfter),
             R"#(Pushing a string after a specific index in the string <me>. Raises an exception if Index is out of bounds. - less than 0 (InsertAfter), or less than 1 (InsertBefore), or - greater than the number of characters in this ASCII string. Example: before me = "cde" , Index = 0 , other = "ab" after me = "abcde" , other = "ab")#"  , py::arg("Index"),  py::arg("other"))
        .def("InsertBefore",
             (void (TCollection_AsciiString::*)( const Standard_Integer ,  const TCollection_AsciiString &  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Integer ,  const TCollection_AsciiString &  ) >(&TCollection_AsciiString::InsertBefore),
             R"#(Pushing a string before a specific index in the string <me>. Raises an exception if Index is out of bounds. - less than 0 (InsertAfter), or less than 1 (InsertBefore), or - greater than the number of characters in this ASCII string. Example: before me = "cde" , Index = 1 , other = "ab" after me = "abcde" , other = "ab")#"  , py::arg("Index"),  py::arg("other"))
        .def("IsEmpty",
             (Standard_Boolean (TCollection_AsciiString::*)() const) static_cast<Standard_Boolean (TCollection_AsciiString::*)() const>(&TCollection_AsciiString::IsEmpty),
             R"#(Returns True if the string <me> contains zero character.)#" )
        .def("IsEqual",
             (Standard_Boolean (TCollection_AsciiString::*)( const Standard_CString  ) const) static_cast<Standard_Boolean (TCollection_AsciiString::*)( const Standard_CString  ) const>(&TCollection_AsciiString::IsEqual),
             R"#(Returns true if the characters in this ASCII string are identical to the characters in ASCII string other. Note that this method is an alias of operator ==.)#"  , py::arg("other"))
        .def("IsEqual",
             (Standard_Boolean (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) const) static_cast<Standard_Boolean (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) const>(&TCollection_AsciiString::IsEqual),
             R"#(Returns true if the characters in this ASCII string are identical to the characters in ASCII string other. Note that this method is an alias of operator ==.)#"  , py::arg("other"))
        .def("IsDifferent",
             (Standard_Boolean (TCollection_AsciiString::*)( const Standard_CString  ) const) static_cast<Standard_Boolean (TCollection_AsciiString::*)( const Standard_CString  ) const>(&TCollection_AsciiString::IsDifferent),
             R"#(Returns true if there are differences between the characters in this ASCII string and ASCII string other. Note that this method is an alias of operator !=)#"  , py::arg("other"))
        .def("IsDifferent",
             (Standard_Boolean (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) const) static_cast<Standard_Boolean (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) const>(&TCollection_AsciiString::IsDifferent),
             R"#(Returns true if there are differences between the characters in this ASCII string and ASCII string other. Note that this method is an alias of operator !=)#"  , py::arg("other"))
        .def("IsLess",
             (Standard_Boolean (TCollection_AsciiString::*)( const Standard_CString  ) const) static_cast<Standard_Boolean (TCollection_AsciiString::*)( const Standard_CString  ) const>(&TCollection_AsciiString::IsLess),
             R"#(Returns TRUE if <me> is 'ASCII' less than <other>.)#"  , py::arg("other"))
        .def("IsLess",
             (Standard_Boolean (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) const) static_cast<Standard_Boolean (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) const>(&TCollection_AsciiString::IsLess),
             R"#(Returns TRUE if <me> is 'ASCII' less than <other>.)#"  , py::arg("other"))
        .def("IsGreater",
             (Standard_Boolean (TCollection_AsciiString::*)( const Standard_CString  ) const) static_cast<Standard_Boolean (TCollection_AsciiString::*)( const Standard_CString  ) const>(&TCollection_AsciiString::IsGreater),
             R"#(Returns TRUE if <me> is 'ASCII' greater than <other>.)#"  , py::arg("other"))
        .def("IsGreater",
             (Standard_Boolean (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) const) static_cast<Standard_Boolean (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) const>(&TCollection_AsciiString::IsGreater),
             R"#(Returns TRUE if <me> is 'ASCII' greater than <other>.)#"  , py::arg("other"))
        .def("StartsWith",
             (Standard_Boolean (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) const) static_cast<Standard_Boolean (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) const>(&TCollection_AsciiString::StartsWith),
             R"#(Determines whether the beginning of this string instance matches the specified string.)#"  , py::arg("theStartString"))
        .def("EndsWith",
             (Standard_Boolean (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) const) static_cast<Standard_Boolean (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) const>(&TCollection_AsciiString::EndsWith),
             R"#(Determines whether the end of this string instance matches the specified string.)#"  , py::arg("theEndString"))
        .def("IntegerValue",
             (Standard_Integer (TCollection_AsciiString::*)() const) static_cast<Standard_Integer (TCollection_AsciiString::*)() const>(&TCollection_AsciiString::IntegerValue),
             R"#(Converts a AsciiString containing a numeric expression to an Integer. Example: "215" returns 215.)#" )
        .def("IsIntegerValue",
             (Standard_Boolean (TCollection_AsciiString::*)() const) static_cast<Standard_Boolean (TCollection_AsciiString::*)() const>(&TCollection_AsciiString::IsIntegerValue),
             R"#(Returns True if the AsciiString contains an integer value. Note: an integer value is considered to be a real value as well.)#" )
        .def("IsRealValue",
             (Standard_Boolean (TCollection_AsciiString::*)() const) static_cast<Standard_Boolean (TCollection_AsciiString::*)() const>(&TCollection_AsciiString::IsRealValue),
             R"#(Returns True if the AsciiString contains a real value. Note: an integer value is considered to be a real value as well.)#" )
        .def("IsAscii",
             (Standard_Boolean (TCollection_AsciiString::*)() const) static_cast<Standard_Boolean (TCollection_AsciiString::*)() const>(&TCollection_AsciiString::IsAscii),
             R"#(Returns True if the AsciiString contains only ASCII characters between ' ' and '~'. This means no control character and no extended ASCII code.)#" )
        .def("LeftAdjust",
             (void (TCollection_AsciiString::*)() ) static_cast<void (TCollection_AsciiString::*)() >(&TCollection_AsciiString::LeftAdjust),
             R"#(Removes all space characters in the begining of the string.)#" )
        .def("LeftJustify",
             (void (TCollection_AsciiString::*)( const Standard_Integer ,  const Standard_Character  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Integer ,  const Standard_Character  ) >(&TCollection_AsciiString::LeftJustify),
             R"#(left justify Length becomes equal to Width and the new characters are equal to Filler. If Width < Length nothing happens. Raises an exception if Width is less than zero. Example: before me = "abcdef" , Width = 9 , Filler = ' ' after me = "abcdef ")#"  , py::arg("Width"),  py::arg("Filler"))
        .def("Length",
             (Standard_Integer (TCollection_AsciiString::*)() const) static_cast<Standard_Integer (TCollection_AsciiString::*)() const>(&TCollection_AsciiString::Length),
             R"#(Returns number of characters in <me>. This is the same functionality as 'strlen' in C. Example TCollection_AsciiString myAlphabet("abcdef"); assert ( myAlphabet.Length() == 6 ); - 1 is the position of the first character in this string. - The length of this string gives the position of its last character. - Positions less than or equal to zero, or greater than the length of this string are invalid in functions which identify a character of this string by its position.)#" )
        .def("Location",
             (Standard_Integer (TCollection_AsciiString::*)( const TCollection_AsciiString & ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (TCollection_AsciiString::*)( const TCollection_AsciiString & ,  const Standard_Integer ,  const Standard_Integer  ) const>(&TCollection_AsciiString::Location),
             R"#(Returns an index in the string <me> of the first occurence of the string S in the string <me> from the starting index FromIndex to the ending index ToIndex returns zero if failure Raises an exception if FromIndex or ToIndex is out of range. Example: before me = "aabAaAa", S = "Aa", FromIndex = 1, ToIndex = 7 after me = "aabAaAa" returns 4)#"  , py::arg("other"),  py::arg("FromIndex"),  py::arg("ToIndex"))
        .def("Location",
             (Standard_Integer (TCollection_AsciiString::*)( const Standard_Integer ,  const Standard_Character ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (TCollection_AsciiString::*)( const Standard_Integer ,  const Standard_Character ,  const Standard_Integer ,  const Standard_Integer  ) const>(&TCollection_AsciiString::Location),
             R"#(Returns the index of the nth occurence of the character C in the string <me> from the starting index FromIndex to the ending index ToIndex. Returns zero if failure. Raises an exception if FromIndex or ToIndex is out of range. Example: before me = "aabAa", N = 3, C = 'a', FromIndex = 1, ToIndex = 5 after me = "aabAa" returns 5)#"  , py::arg("N"),  py::arg("C"),  py::arg("FromIndex"),  py::arg("ToIndex"))
        .def("LowerCase",
             (void (TCollection_AsciiString::*)() ) static_cast<void (TCollection_AsciiString::*)() >(&TCollection_AsciiString::LowerCase),
             R"#(Converts <me> to its lower-case equivalent. Example TCollection_AsciiString myString("Hello Dolly"); myString.UpperCase(); assert ( myString == "HELLO DOLLY" ); myString.LowerCase(); assert ( myString == "hello dolly" );)#" )
        .def("Prepend",
             (void (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) ) static_cast<void (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) >(&TCollection_AsciiString::Prepend),
             R"#(Inserts the string other at the beginning of this ASCII string. Example TCollection_AsciiString myAlphabet("cde"); TCollection_AsciiString myBegin("ab"); myAlphabet.Prepend(myBegin); assert ( myAlphabet == "abcde" );)#"  , py::arg("other"))
        .def("Print",
             (void (TCollection_AsciiString::*)( std::ostream &  ) const) static_cast<void (TCollection_AsciiString::*)( std::ostream &  ) const>(&TCollection_AsciiString::Print),
             R"#(Displays <me> on a stream.)#"  , py::arg("astream"))
        .def("Read",
             (void (TCollection_AsciiString::*)( std::istream &  ) ) static_cast<void (TCollection_AsciiString::*)( std::istream &  ) >(&TCollection_AsciiString::Read),
             R"#(Read <me> from a stream.)#"  , py::arg("astream"))
        .def("RealValue",
             (Standard_Real (TCollection_AsciiString::*)() const) static_cast<Standard_Real (TCollection_AsciiString::*)() const>(&TCollection_AsciiString::RealValue),
             R"#(Converts an AsciiString containing a numeric expression. to a Real. Example: ex: "215" returns 215.0. ex: "3.14159267" returns 3.14159267.)#" )
        .def("RemoveAll",
             (void (TCollection_AsciiString::*)( const Standard_Character ,  const Standard_Boolean  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Character ,  const Standard_Boolean  ) >(&TCollection_AsciiString::RemoveAll),
             R"#(Remove all the occurences of the character C in the string. Example: before me = "HellLLo", C = 'L' , CaseSensitive = True after me = "Hello")#"  , py::arg("C"),  py::arg("CaseSensitive"))
        .def("RemoveAll",
             (void (TCollection_AsciiString::*)( const Standard_Character  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Character  ) >(&TCollection_AsciiString::RemoveAll),
             R"#(Removes every <what> characters from <me>.)#"  , py::arg("what"))
        .def("Remove",
             (void (TCollection_AsciiString::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Integer ,  const Standard_Integer  ) >(&TCollection_AsciiString::Remove),
             R"#(Erases <ahowmany> characters from position <where>, <where> included. Example: aString contains "Hello" aString.Remove(2,2) erases 2 characters from position 2 This gives "Hlo".)#"  , py::arg("where"),  py::arg("ahowmany")=static_cast<const Standard_Integer>(1))
        .def("RightAdjust",
             (void (TCollection_AsciiString::*)() ) static_cast<void (TCollection_AsciiString::*)() >(&TCollection_AsciiString::RightAdjust),
             R"#(Removes all space characters at the end of the string.)#" )
        .def("RightJustify",
             (void (TCollection_AsciiString::*)( const Standard_Integer ,  const Standard_Character  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Integer ,  const Standard_Character  ) >(&TCollection_AsciiString::RightJustify),
             R"#(Right justify. Length becomes equal to Width and the new characters are equal to Filler. if Width < Length nothing happens. Raises an exception if Width is less than zero. Example: before me = "abcdef" , Width = 9 , Filler = ' ' after me = " abcdef")#"  , py::arg("Width"),  py::arg("Filler"))
        .def("Search",
             (Standard_Integer (TCollection_AsciiString::*)( const Standard_CString  ) const) static_cast<Standard_Integer (TCollection_AsciiString::*)( const Standard_CString  ) const>(&TCollection_AsciiString::Search),
             R"#(Searches a CString in <me> from the beginning and returns position of first item <what> matching. it returns -1 if not found. Example: aString contains "Sample single test" aString.Search("le") returns 5)#"  , py::arg("what"))
        .def("Search",
             (Standard_Integer (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) const) static_cast<Standard_Integer (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) const>(&TCollection_AsciiString::Search),
             R"#(Searches an AsciiString in <me> from the beginning and returns position of first item <what> matching. It returns -1 if not found.)#"  , py::arg("what"))
        .def("SearchFromEnd",
             (Standard_Integer (TCollection_AsciiString::*)( const Standard_CString  ) const) static_cast<Standard_Integer (TCollection_AsciiString::*)( const Standard_CString  ) const>(&TCollection_AsciiString::SearchFromEnd),
             R"#(Searches a CString in a AsciiString from the end and returns position of first item <what> matching. It returns -1 if not found. Example: aString contains "Sample single test" aString.SearchFromEnd("le") returns 12)#"  , py::arg("what"))
        .def("SearchFromEnd",
             (Standard_Integer (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) const) static_cast<Standard_Integer (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) const>(&TCollection_AsciiString::SearchFromEnd),
             R"#(Searches a AsciiString in another AsciiString from the end and returns position of first item <what> matching. It returns -1 if not found.)#"  , py::arg("what"))
        .def("SetValue",
             (void (TCollection_AsciiString::*)( const Standard_Integer ,  const Standard_Character  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Integer ,  const Standard_Character  ) >(&TCollection_AsciiString::SetValue),
             R"#(Replaces one character in the AsciiString at position <where>. If <where> is less than zero or greater than the length of <me> an exception is raised. Example: aString contains "Garbake" astring.Replace(6,'g') gives <me> = "Garbage")#"  , py::arg("where"),  py::arg("what"))
        .def("SetValue",
             (void (TCollection_AsciiString::*)( const Standard_Integer ,  const Standard_CString  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Integer ,  const Standard_CString  ) >(&TCollection_AsciiString::SetValue),
             R"#(Replaces a part of <me> by a CString. If <where> is less than zero or greater than the length of <me> an exception is raised. Example: aString contains "abcde" aString.SetValue(4,"1234567") gives <me> = "abc1234567")#"  , py::arg("where"),  py::arg("what"))
        .def("SetValue",
             (void (TCollection_AsciiString::*)( const Standard_Integer ,  const TCollection_AsciiString &  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Integer ,  const TCollection_AsciiString &  ) >(&TCollection_AsciiString::SetValue),
             R"#(Replaces a part of <me> by another AsciiString.)#"  , py::arg("where"),  py::arg("what"))
        .def("Split",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Integer  ) ) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Integer  ) >(&TCollection_AsciiString::Split),
             R"#(Splits a AsciiString into two sub-strings. Example: aString contains "abcdefg" aString.Split(3) gives <me> = "abc" and returns "defg")#"  , py::arg("where"))
        .def("SubString",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&TCollection_AsciiString::SubString),
             R"#(Creation of a sub-string of the string <me>. The sub-string starts to the index Fromindex and ends to the index ToIndex. Raises an exception if ToIndex or FromIndex is out of bounds Example: before me = "abcdefg", ToIndex=3, FromIndex=6 after me = "abcdefg" returns "cdef")#"  , py::arg("FromIndex"),  py::arg("ToIndex"))
        .def("ToCString",
             (Standard_CString (TCollection_AsciiString::*)() const) static_cast<Standard_CString (TCollection_AsciiString::*)() const>(&TCollection_AsciiString::ToCString),
             R"#(Returns pointer to AsciiString (char *). This is useful for some casual manipulations. Warning: Because this "char *" is 'const', you can't modify its contents.)#" )
        .def("Token",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_CString ,  const Standard_Integer  ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_CString ,  const Standard_Integer  ) const>(&TCollection_AsciiString::Token),
             R"#(Extracts <whichone> token from <me>. By default, the <separators> is set to space and tabulation. By default, the token extracted is the first one (whichone = 1). <separators> contains all separators you need. If no token indexed by <whichone> is found, it returns empty AsciiString. Example: aString contains "This is a message" aString.Token() returns "This" aString.Token(" ",4) returns "message" aString.Token(" ",2) returns "is" aString.Token(" ",9) returns "" Other separators than space character and tabulation are allowed : aString contains "1234; test:message , value" aString.Token("; :,",4) returns "value" aString.Token("; :,",2) returns "test")#"  , py::arg("separators")=static_cast<const Standard_CString>(" \t"),  py::arg("whichone")=static_cast<const Standard_Integer>(1))
        .def("Trunc",
             (void (TCollection_AsciiString::*)( const Standard_Integer  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Integer  ) >(&TCollection_AsciiString::Trunc),
             R"#(Truncates <me> to <ahowmany> characters. Example: me = "Hello Dolly" -> Trunc(3) -> me = "Hel")#"  , py::arg("ahowmany"))
        .def("UpperCase",
             (void (TCollection_AsciiString::*)() ) static_cast<void (TCollection_AsciiString::*)() >(&TCollection_AsciiString::UpperCase),
             R"#(Converts <me> to its upper-case equivalent.)#" )
        .def("UsefullLength",
             (Standard_Integer (TCollection_AsciiString::*)() const) static_cast<Standard_Integer (TCollection_AsciiString::*)() const>(&TCollection_AsciiString::UsefullLength),
             R"#(Length of the string ignoring all spaces (' ') and the control character at the end.)#" )
        .def("Value",
             (Standard_Character (TCollection_AsciiString::*)( const Standard_Integer  ) const) static_cast<Standard_Character (TCollection_AsciiString::*)( const Standard_Integer  ) const>(&TCollection_AsciiString::Value),
             R"#(Returns character at position <where> in <me>. If <where> is less than zero or greater than the lenght of <me>, an exception is raised. Example: aString contains "Hello" aString.Value(2) returns 'e')#"  , py::arg("where"))
        .def("ToCString",
             (Standard_CString (TCollection_AsciiString::*)() const) static_cast<Standard_CString (TCollection_AsciiString::*)() const>(&TCollection_AsciiString::ToCString),
             R"#(Returns pointer to AsciiString (char *). This is useful for some casual manipulations. Warning: Because this "char *" is 'const', you can't modify its contents.)#" )
        .def("Length",
             (Standard_Integer (TCollection_AsciiString::*)() const) static_cast<Standard_Integer (TCollection_AsciiString::*)() const>(&TCollection_AsciiString::Length),
             R"#(Returns number of characters in <me>. This is the same functionality as 'strlen' in C. Example TCollection_AsciiString myAlphabet("abcdef"); assert ( myAlphabet.Length() == 6 ); - 1 is the position of the first character in this string. - The length of this string gives the position of its last character. - Positions less than or equal to zero, or greater than the length of this string are invalid in functions which identify a character of this string by its position.)#" )
        .def("Cat",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) const>(&TCollection_AsciiString::Cat),
             R"#(Appends <other> to me. Example: aString = aString + anotherString)#"  , py::arg("other"))
        .def("Cat",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_CString  ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_CString  ) const>(&TCollection_AsciiString::Cat),
             R"#(Appends <other> to me. Syntax: aString = aString + "Dummy" Example: aString contains "I say " aString = aString + "Hello " + "Dolly" gives "I say Hello Dolly" To catenate more than one CString, you must put a String before. So the following example is WRONG ! aString = "Hello " + "Dolly" THIS IS NOT ALLOWED This rule is applicable to AssignCat (operator +=) too.)#"  , py::arg("other"))
        .def("Cat",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Character  ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Character  ) const>(&TCollection_AsciiString::Cat),
             R"#(Appends <other> to me. Syntax: aString = aString + "Dummy" Example: aString contains "I say " aString = aString + "Hello " + "Dolly" gives "I say Hello Dolly" To catenate more than one CString, you must put a String before. So the following example is WRONG ! aString = "Hello " + "Dolly" THIS IS NOT ALLOWED This rule is applicable to AssignCat (operator +=) too.)#"  , py::arg("other"))
        .def("Cat",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Integer  ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Integer  ) const>(&TCollection_AsciiString::Cat),
             R"#(Appends <other> to me. Syntax: aString = aString + 15; Example: aString contains "I say " gives "I say 15" To catenate more than one CString, you must put a String before. So the following example is WRONG ! aString = "Hello " + "Dolly" THIS IS NOT ALLOWED This rule is applicable to AssignCat (operator +=) too.)#"  , py::arg("other"))
        .def("Cat",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Real  ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Real  ) const>(&TCollection_AsciiString::Cat),
             R"#(Appends <other> to me. Syntax: aString = aString + 15.15; Example: aString contains "I say " gives "I say 15.15" To catenate more than one CString, you must put a String before. So the following example is WRONG ! aString = "Hello " + "Dolly" THIS IS NOT ALLOWED This rule is applicable to AssignCat (operator +=) too.)#"  , py::arg("other"))
        .def("SubString",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&TCollection_AsciiString::SubString),
             R"#(Creation of a sub-string of the string <me>. The sub-string starts to the index Fromindex and ends to the index ToIndex. Raises an exception if ToIndex or FromIndex is out of bounds Example: before me = "abcdefg", ToIndex=3, FromIndex=6 after me = "abcdefg" returns "cdef")#"  , py::arg("FromIndex"),  py::arg("ToIndex"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const TCollection_AsciiString & ,  Standard_Integer  ) ) static_cast<Standard_Integer (*)( const TCollection_AsciiString & ,  Standard_Integer  ) >(&TCollection_AsciiString::HashCode),
                    R"#(Computes a hash code for the given ASCII string, in the range [1, theUpperBound]. Returns the same integer value as the hash function for TCollection_ExtendedString)#"  , py::arg("theAsciiString"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) ) static_cast<Standard_Boolean (*)( const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) >(&TCollection_AsciiString::IsEqual),
                    R"#(Returns True when the two strings are the same. (Just for HashCode for AsciiString))#"  , py::arg("string1"),  py::arg("string2"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const TCollection_AsciiString & ,  const Standard_CString  ) ) static_cast<Standard_Boolean (*)( const TCollection_AsciiString & ,  const Standard_CString  ) >(&TCollection_AsciiString::IsEqual),
                    R"#(Returns True when the two strings are the same. (Just for HashCode for AsciiString))#"  , py::arg("string1"),  py::arg("string2"))
        .def_static("IsSameString_s",
                    (Standard_Boolean (*)( const TCollection_AsciiString & ,  const TCollection_AsciiString & ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (*)( const TCollection_AsciiString & ,  const TCollection_AsciiString & ,  const Standard_Boolean  ) >(&TCollection_AsciiString::IsSameString),
                    R"#(Returns True if the strings contain same characters.)#"  , py::arg("theString1"),  py::arg("theString2"),  py::arg("theIsCaseSensitive"))
    // static methods using call by reference i.s.o. return
    // operators
        .def("__iadd__",
             (void (TCollection_AsciiString::*)( const Standard_Character  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Character  ) >(&TCollection_AsciiString::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
        .def("__iadd__",
             (void (TCollection_AsciiString::*)( const Standard_Integer  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Integer  ) >(&TCollection_AsciiString::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
        .def("__iadd__",
             (void (TCollection_AsciiString::*)( const Standard_Real  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_Real  ) >(&TCollection_AsciiString::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
        .def("__iadd__",
             (void (TCollection_AsciiString::*)( const Standard_CString  ) ) static_cast<void (TCollection_AsciiString::*)( const Standard_CString  ) >(&TCollection_AsciiString::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
        .def("__iadd__",
             (void (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) ) static_cast<void (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) >(&TCollection_AsciiString::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
        .def("__add__",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Character  ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Character  ) const>(&TCollection_AsciiString::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
        .def("__add__",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Integer  ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Integer  ) const>(&TCollection_AsciiString::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
        .def("__add__",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Real  ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_Real  ) const>(&TCollection_AsciiString::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
        .def("__add__",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_CString  ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const Standard_CString  ) const>(&TCollection_AsciiString::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
        .def("__add__",
             (TCollection_AsciiString (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) const) static_cast<TCollection_AsciiString (TCollection_AsciiString::*)( const TCollection_AsciiString &  ) const>(&TCollection_AsciiString::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
    // additional methods and static methods
;


    static_cast<py::class_<TCollection_BaseSequence , shared_ptr<TCollection_BaseSequence>  >>(m.attr("TCollection_BaseSequence"))
    // constructors
    // custom constructors
    // methods
        .def("IsEmpty",
             (Standard_Boolean (TCollection_BaseSequence::*)() const) static_cast<Standard_Boolean (TCollection_BaseSequence::*)() const>(&TCollection_BaseSequence::IsEmpty),
             R"#(returns True if the sequence <me> contains no elements.)#" )
        .def("Length",
             (Standard_Integer (TCollection_BaseSequence::*)() const) static_cast<Standard_Integer (TCollection_BaseSequence::*)() const>(&TCollection_BaseSequence::Length),
             R"#(Returns the number of element(s) in the sequence. Returns zero if the sequence is empty.)#" )
        .def("Reverse",
             (void (TCollection_BaseSequence::*)() ) static_cast<void (TCollection_BaseSequence::*)() >(&TCollection_BaseSequence::Reverse),
             R"#(Reverses the order of items on <me>. Example: before me = (A B C) after me = (C B A))#" )
        .def("Exchange",
             (void (TCollection_BaseSequence::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (TCollection_BaseSequence::*)( const Standard_Integer ,  const Standard_Integer  ) >(&TCollection_BaseSequence::Exchange),
             R"#(Swaps elements which are located at positions <I> and <J> in <me>. Raises an exception if I or J is out of bound. Example: before me = (A B C), I = 1, J = 3 after me = (C B A))#"  , py::arg("I"),  py::arg("J"))
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


    static_cast<py::class_<TCollection_BasicMap , shared_ptr<TCollection_BasicMap>  >>(m.attr("TCollection_BasicMap"))
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
        .def("Statistics",
             (void (TCollection_BasicMap::*)( std::ostream &  ) const) static_cast<void (TCollection_BasicMap::*)( std::ostream &  ) const>(&TCollection_BasicMap::Statistics),
             R"#(Prints on <S> usefull statistics about the map <me>. It can be used to test the quality of the hashcoding.)#"  , py::arg("S"))
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


    static_cast<py::class_<TCollection_BasicMapIterator , shared_ptr<TCollection_BasicMapIterator>  >>(m.attr("TCollection_BasicMapIterator"))
    // constructors
    // custom constructors
    // methods
        .def("Reset",
             (void (TCollection_BasicMapIterator::*)() ) static_cast<void (TCollection_BasicMapIterator::*)() >(&TCollection_BasicMapIterator::Reset),
             R"#(Resets the iterator to the first node.)#" )
        .def("More",
             (Standard_Boolean (TCollection_BasicMapIterator::*)() const) static_cast<Standard_Boolean (TCollection_BasicMapIterator::*)() const>(&TCollection_BasicMapIterator::More),
             R"#(Returns true if there is a current entry for this iterator in the map. Use the function Next to set this iterator to the position of the next entry, if it exists.)#" )
        .def("Next",
             (void (TCollection_BasicMapIterator::*)() ) static_cast<void (TCollection_BasicMapIterator::*)() >(&TCollection_BasicMapIterator::Next),
             R"#(Sets this iterator to the position of the next entry of the map. Nothing is changed if there is no more entry to explore in the map: this iterator is always positioned on the last entry of the map but the function More returns false.)#" )
        .def("More",
             (Standard_Boolean (TCollection_BasicMapIterator::*)() const) static_cast<Standard_Boolean (TCollection_BasicMapIterator::*)() const>(&TCollection_BasicMapIterator::More),
             R"#(Returns true if there is a current entry for this iterator in the map. Use the function Next to set this iterator to the position of the next entry, if it exists.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TCollection_ExtendedString , shared_ptr<TCollection_ExtendedString>  >>(m.attr("TCollection_ExtendedString"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_CString,const Standard_Boolean >()  , py::arg("astring"),  py::arg("isMultiByte")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const Standard_ExtString >()  , py::arg("astring") )
        .def(py::init< const Standard_WideChar * >()  , py::arg("theStringUtf") )
        .def(py::init< const Standard_Character >()  , py::arg("aChar") )
        .def(py::init< const Standard_ExtCharacter >()  , py::arg("aChar") )
        .def(py::init< const Standard_Integer,const Standard_ExtCharacter >()  , py::arg("length"),  py::arg("filler") )
        .def(py::init< const Standard_Integer >()  , py::arg("value") )
        .def(py::init< const Standard_Real >()  , py::arg("value") )
        .def(py::init< const TCollection_ExtendedString & >()  , py::arg("astring") )
        .def(py::init< const TCollection_AsciiString & >()  , py::arg("astring") )
    // custom constructors
    // methods
        .def("AssignCat",
             (void (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) ) static_cast<void (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) >(&TCollection_ExtendedString::AssignCat),
             R"#(Appends the other extended string to this extended string. Note that this method is an alias of operator +=. Example: aString += anotherString)#"  , py::arg("other"))
        .def("Cat",
             (TCollection_ExtendedString (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) const) static_cast<TCollection_ExtendedString (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) const>(&TCollection_ExtendedString::Cat),
             R"#(Appends <other> to me.)#"  , py::arg("other"))
        .def("ChangeAll",
             (void (TCollection_ExtendedString::*)( const Standard_ExtCharacter ,  const Standard_ExtCharacter  ) ) static_cast<void (TCollection_ExtendedString::*)( const Standard_ExtCharacter ,  const Standard_ExtCharacter  ) >(&TCollection_ExtendedString::ChangeAll),
             R"#(Substitutes all the characters equal to aChar by NewChar in the ExtendedString <me>. The substitution can be case sensitive. If you don't use default case sensitive, no matter wether aChar is uppercase or not.)#"  , py::arg("aChar"),  py::arg("NewChar"))
        .def("Clear",
             (void (TCollection_ExtendedString::*)() ) static_cast<void (TCollection_ExtendedString::*)() >(&TCollection_ExtendedString::Clear),
             R"#(Removes all characters contained in <me>. This produces an empty ExtendedString.)#" )
        .def("Copy",
             (void (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) ) static_cast<void (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) >(&TCollection_ExtendedString::Copy),
             R"#(Copy <fromwhere> to <me>. Used as operator =)#"  , py::arg("fromwhere"))
        .def("Swap",
             (void (TCollection_ExtendedString::*)( TCollection_ExtendedString &  ) ) static_cast<void (TCollection_ExtendedString::*)( TCollection_ExtendedString &  ) >(&TCollection_ExtendedString::Swap),
             R"#(Exchange the data of two strings (without reallocating memory).)#"  , py::arg("theOther"))
        .def("Insert",
             (void (TCollection_ExtendedString::*)( const Standard_Integer ,  const Standard_ExtCharacter  ) ) static_cast<void (TCollection_ExtendedString::*)( const Standard_Integer ,  const Standard_ExtCharacter  ) >(&TCollection_ExtendedString::Insert),
             R"#(Insert a Character at position <where>.)#"  , py::arg("where"),  py::arg("what"))
        .def("Insert",
             (void (TCollection_ExtendedString::*)( const Standard_Integer ,  const TCollection_ExtendedString &  ) ) static_cast<void (TCollection_ExtendedString::*)( const Standard_Integer ,  const TCollection_ExtendedString &  ) >(&TCollection_ExtendedString::Insert),
             R"#(Insert a ExtendedString at position <where>.)#"  , py::arg("where"),  py::arg("what"))
        .def("IsEmpty",
             (Standard_Boolean (TCollection_ExtendedString::*)() const) static_cast<Standard_Boolean (TCollection_ExtendedString::*)() const>(&TCollection_ExtendedString::IsEmpty),
             R"#(Returns True if this string contains no characters.)#" )
        .def("IsEqual",
             (Standard_Boolean (TCollection_ExtendedString::*)( const Standard_ExtString  ) const) static_cast<Standard_Boolean (TCollection_ExtendedString::*)( const Standard_ExtString  ) const>(&TCollection_ExtendedString::IsEqual),
             R"#(Returns true if the characters in this extended string are identical to the characters in the other extended string. Note that this method is an alias of operator ==)#"  , py::arg("other"))
        .def("IsEqual",
             (Standard_Boolean (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) const) static_cast<Standard_Boolean (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) const>(&TCollection_ExtendedString::IsEqual),
             R"#(Returns true if the characters in this extended string are identical to the characters in the other extended string. Note that this method is an alias of operator ==)#"  , py::arg("other"))
        .def("IsDifferent",
             (Standard_Boolean (TCollection_ExtendedString::*)( const Standard_ExtString  ) const) static_cast<Standard_Boolean (TCollection_ExtendedString::*)( const Standard_ExtString  ) const>(&TCollection_ExtendedString::IsDifferent),
             R"#(Returns true if there are differences between the characters in this extended string and the other extended string. Note that this method is an alias of operator !=.)#"  , py::arg("other"))
        .def("IsDifferent",
             (Standard_Boolean (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) const) static_cast<Standard_Boolean (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) const>(&TCollection_ExtendedString::IsDifferent),
             R"#(Returns true if there are differences between the characters in this extended string and the other extended string. Note that this method is an alias of operator !=.)#"  , py::arg("other"))
        .def("IsLess",
             (Standard_Boolean (TCollection_ExtendedString::*)( const Standard_ExtString  ) const) static_cast<Standard_Boolean (TCollection_ExtendedString::*)( const Standard_ExtString  ) const>(&TCollection_ExtendedString::IsLess),
             R"#(Returns TRUE if <me> is less than <other>.)#"  , py::arg("other"))
        .def("IsLess",
             (Standard_Boolean (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) const) static_cast<Standard_Boolean (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) const>(&TCollection_ExtendedString::IsLess),
             R"#(Returns TRUE if <me> is less than <other>.)#"  , py::arg("other"))
        .def("IsGreater",
             (Standard_Boolean (TCollection_ExtendedString::*)( const Standard_ExtString  ) const) static_cast<Standard_Boolean (TCollection_ExtendedString::*)( const Standard_ExtString  ) const>(&TCollection_ExtendedString::IsGreater),
             R"#(Returns TRUE if <me> is greater than <other>.)#"  , py::arg("other"))
        .def("IsGreater",
             (Standard_Boolean (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) const) static_cast<Standard_Boolean (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) const>(&TCollection_ExtendedString::IsGreater),
             R"#(Returns TRUE if <me> is greater than <other>.)#"  , py::arg("other"))
        .def("StartsWith",
             (Standard_Boolean (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) const) static_cast<Standard_Boolean (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) const>(&TCollection_ExtendedString::StartsWith),
             R"#(Determines whether the beginning of this string instance matches the specified string.)#"  , py::arg("theStartString"))
        .def("EndsWith",
             (Standard_Boolean (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) const) static_cast<Standard_Boolean (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) const>(&TCollection_ExtendedString::EndsWith),
             R"#(Determines whether the end of this string instance matches the specified string.)#"  , py::arg("theEndString"))
        .def("IsAscii",
             (Standard_Boolean (TCollection_ExtendedString::*)() const) static_cast<Standard_Boolean (TCollection_ExtendedString::*)() const>(&TCollection_ExtendedString::IsAscii),
             R"#(Returns True if the ExtendedString contains only "Ascii Range" characters .)#" )
        .def("Length",
             (Standard_Integer (TCollection_ExtendedString::*)() const) static_cast<Standard_Integer (TCollection_ExtendedString::*)() const>(&TCollection_ExtendedString::Length),
             R"#(Returns the number of 16-bit code units (might be greater than number of Unicode symbols if string contains surrogate pairs).)#" )
        .def("Print",
             (void (TCollection_ExtendedString::*)( std::ostream &  ) const) static_cast<void (TCollection_ExtendedString::*)( std::ostream &  ) const>(&TCollection_ExtendedString::Print),
             R"#(Displays <me> .)#"  , py::arg("astream"))
        .def("RemoveAll",
             (void (TCollection_ExtendedString::*)( const Standard_ExtCharacter  ) ) static_cast<void (TCollection_ExtendedString::*)( const Standard_ExtCharacter  ) >(&TCollection_ExtendedString::RemoveAll),
             R"#(Removes every <what> characters from <me>.)#"  , py::arg("what"))
        .def("Remove",
             (void (TCollection_ExtendedString::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (TCollection_ExtendedString::*)( const Standard_Integer ,  const Standard_Integer  ) >(&TCollection_ExtendedString::Remove),
             R"#(Erases <ahowmany> characters from position <where>,<where> included.)#"  , py::arg("where"),  py::arg("ahowmany")=static_cast<const Standard_Integer>(1))
        .def("Search",
             (Standard_Integer (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) const) static_cast<Standard_Integer (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) const>(&TCollection_ExtendedString::Search),
             R"#(Searches a ExtendedString in <me> from the beginning and returns position of first item <what> matching. it returns -1 if not found.)#"  , py::arg("what"))
        .def("SearchFromEnd",
             (Standard_Integer (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) const) static_cast<Standard_Integer (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) const>(&TCollection_ExtendedString::SearchFromEnd),
             R"#(Searches a ExtendedString in another ExtendedString from the end and returns position of first item <what> matching. it returns -1 if not found.)#"  , py::arg("what"))
        .def("SetValue",
             (void (TCollection_ExtendedString::*)( const Standard_Integer ,  const Standard_ExtCharacter  ) ) static_cast<void (TCollection_ExtendedString::*)( const Standard_Integer ,  const Standard_ExtCharacter  ) >(&TCollection_ExtendedString::SetValue),
             R"#(Replaces one character in the ExtendedString at position <where>. If <where> is less than zero or greater than the length of <me> an exception is raised.)#"  , py::arg("where"),  py::arg("what"))
        .def("SetValue",
             (void (TCollection_ExtendedString::*)( const Standard_Integer ,  const TCollection_ExtendedString &  ) ) static_cast<void (TCollection_ExtendedString::*)( const Standard_Integer ,  const TCollection_ExtendedString &  ) >(&TCollection_ExtendedString::SetValue),
             R"#(Replaces a part of <me> by another ExtendedString see above.)#"  , py::arg("where"),  py::arg("what"))
        .def("Split",
             (TCollection_ExtendedString (TCollection_ExtendedString::*)( const Standard_Integer  ) ) static_cast<TCollection_ExtendedString (TCollection_ExtendedString::*)( const Standard_Integer  ) >(&TCollection_ExtendedString::Split),
             R"#(Splits this extended string into two sub-strings at position where. - The second sub-string (from position where + 1 of this string to the end) is returned in a new extended string. - this extended string is modified: its last characters are removed, it becomes equal to the first sub-string (from the first character to position where). Example: aString contains "abcdefg" aString.Split(3) gives <me> = "abc" and returns "defg")#"  , py::arg("where"))
        .def("Token",
             (TCollection_ExtendedString (TCollection_ExtendedString::*)( const Standard_ExtString ,  const Standard_Integer  ) const) static_cast<TCollection_ExtendedString (TCollection_ExtendedString::*)( const Standard_ExtString ,  const Standard_Integer  ) const>(&TCollection_ExtendedString::Token),
             R"#(Extracts <whichone> token from <me>. By default, the <separators> is set to space and tabulation. By default, the token extracted is the first one (whichone = 1). <separators> contains all separators you need. If no token indexed by <whichone> is found, it returns an empty AsciiString. Example: aString contains "This is a message" aString.Token() returns "This" aString.Token(" ",4) returns "message" aString.Token(" ",2) returns "is" aString.Token(" ",9) returns "" Other separators than space character and tabulation are allowed : aString contains "1234; test:message , value" aString.Token("; :,",4) returns "value" aString.Token("; :,",2) returns "test")#"  , py::arg("separators"),  py::arg("whichone")=static_cast<const Standard_Integer>(1))
        .def("ToExtString",
             (Standard_ExtString (TCollection_ExtendedString::*)() const) static_cast<Standard_ExtString (TCollection_ExtendedString::*)() const>(&TCollection_ExtendedString::ToExtString),
             R"#(Returns pointer to ExtString)#" )
        .def("Trunc",
             (void (TCollection_ExtendedString::*)( const Standard_Integer  ) ) static_cast<void (TCollection_ExtendedString::*)( const Standard_Integer  ) >(&TCollection_ExtendedString::Trunc),
             R"#(Truncates <me> to <ahowmany> characters. Example: me = "Hello Dolly" -> Trunc(3) -> me = "Hel" Exceptions Standard_OutOfRange if ahowmany is greater than the length of this string.)#"  , py::arg("ahowmany"))
        .def("Value",
             (Standard_ExtCharacter (TCollection_ExtendedString::*)( const Standard_Integer  ) const) static_cast<Standard_ExtCharacter (TCollection_ExtendedString::*)( const Standard_Integer  ) const>(&TCollection_ExtendedString::Value),
             R"#(Returns character at position <where> in <me>. If <where> is less than zero or greater than the lenght of <me>, an exception is raised. Example: aString contains "Hello" aString.Value(2) returns 'e' Exceptions Standard_OutOfRange if where lies outside the bounds of this extended string.)#"  , py::arg("where"))
        .def("LengthOfCString",
             (Standard_Integer (TCollection_ExtendedString::*)() const) static_cast<Standard_Integer (TCollection_ExtendedString::*)() const>(&TCollection_ExtendedString::LengthOfCString),
             R"#(Returns expected CString length in UTF8 coding. It can be used for memory calculation before converting to CString containing symbols in UTF8 coding.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const TCollection_ExtendedString & ,  const Standard_Integer  ) ) static_cast<Standard_Integer (*)( const TCollection_ExtendedString & ,  const Standard_Integer  ) >(&TCollection_ExtendedString::HashCode),
                    R"#(Returns a hashed value for the extended string within the range 1 .. theUpper. Note: if string is ASCII, the computed value is the same as the value computed with the HashCode function on a TCollection_AsciiString string composed with equivalent ASCII characters.)#"  , py::arg("theString"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const TCollection_ExtendedString & ,  const TCollection_ExtendedString &  ) ) static_cast<Standard_Boolean (*)( const TCollection_ExtendedString & ,  const TCollection_ExtendedString &  ) >(&TCollection_ExtendedString::IsEqual),
                    R"#(Returns true if the characters in this extended string are identical to the characters in the other extended string. Note that this method is an alias of operator ==.)#"  , py::arg("theString1"),  py::arg("theString2"))
    // static methods using call by reference i.s.o. return
    // operators
        .def("__iadd__",
             (void (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) ) static_cast<void (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) >(&TCollection_ExtendedString::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
        .def("__add__",
             (TCollection_ExtendedString (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) const) static_cast<TCollection_ExtendedString (TCollection_ExtendedString::*)( const TCollection_ExtendedString &  ) const>(&TCollection_ExtendedString::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("other"))
    // additional methods and static methods
;


    static_cast<py::class_<TCollection_HAsciiString ,opencascade::handle<TCollection_HAsciiString>  , Standard_Transient >>(m.attr("TCollection_HAsciiString"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_CString >()  , py::arg("message") )
        .def(py::init< const Standard_Character >()  , py::arg("aChar") )
        .def(py::init< const Standard_Integer,const Standard_Character >()  , py::arg("length"),  py::arg("filler") )
        .def(py::init< const Standard_Integer >()  , py::arg("value") )
        .def(py::init< const Standard_Real >()  , py::arg("value") )
        .def(py::init< const TCollection_AsciiString & >()  , py::arg("aString") )
        .def(py::init< const opencascade::handle<TCollection_HAsciiString> & >()  , py::arg("aString") )
        .def(py::init< const opencascade::handle<TCollection_HExtendedString> &,const Standard_Character >()  , py::arg("aString"),  py::arg("replaceNonAscii") )
    // custom constructors
    // methods
        .def("AssignCat",
             (void (TCollection_HAsciiString::*)( const Standard_CString  ) ) static_cast<void (TCollection_HAsciiString::*)( const Standard_CString  ) >(&TCollection_HAsciiString::AssignCat),
             R"#(Appends <other> to me.)#"  , py::arg("other"))
        .def("AssignCat",
             (void (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&TCollection_HAsciiString::AssignCat),
             R"#(Appends <other> to me. Example: aString = aString + anotherString)#"  , py::arg("other"))
        .def("Capitalize",
             (void (TCollection_HAsciiString::*)() ) static_cast<void (TCollection_HAsciiString::*)() >(&TCollection_HAsciiString::Capitalize),
             R"#(Converts the first character into its corresponding upper-case character and the other characters into lowercase. Example: before me = "hellO " after me = "Hello ")#" )
        .def("Cat",
             (opencascade::handle<TCollection_HAsciiString> (TCollection_HAsciiString::*)( const Standard_CString  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (TCollection_HAsciiString::*)( const Standard_CString  ) const>(&TCollection_HAsciiString::Cat),
             R"#(Creates a new string by concatenation of this ASCII string and the other ASCII string. Example: aString = aString + anotherString aString = aString + "Dummy" aString contains "I say " aString = aString + "Hello " + "Dolly" gives "I say Hello Dolly" Warning: To catenate more than one CString, you must put a String before. So the following example is WRONG ! aString = "Hello " + "Dolly" THIS IS NOT ALLOWED This rule is applicable to AssignCat (operator +=) too.)#"  , py::arg("other"))
        .def("Cat",
             (opencascade::handle<TCollection_HAsciiString> (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> &  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> &  ) const>(&TCollection_HAsciiString::Cat),
             R"#(Creates a new string by concatenation of this ASCII string and the other ASCII string. Example: aString = aString + anotherString)#"  , py::arg("other"))
        .def("Center",
             (void (TCollection_HAsciiString::*)( const Standard_Integer ,  const Standard_Character  ) ) static_cast<void (TCollection_HAsciiString::*)( const Standard_Integer ,  const Standard_Character  ) >(&TCollection_HAsciiString::Center),
             R"#(Modifies this ASCII string so that its length becomes equal to Width and the new characters are equal to Filler. New characters are added both at the beginning and at the end of this string. If Width is less than the length of this ASCII string, nothing happens. Example Handle(TCollection_HAsciiString) myAlphabet = new TCollection_HAsciiString ("abcdef"); myAlphabet->Center(9,' '); assert ( !strcmp( myAlphabet->ToCString(), " abcdef ") );)#"  , py::arg("Width"),  py::arg("Filler"))
        .def("ChangeAll",
             (void (TCollection_HAsciiString::*)( const Standard_Character ,  const Standard_Character ,  const Standard_Boolean  ) ) static_cast<void (TCollection_HAsciiString::*)( const Standard_Character ,  const Standard_Character ,  const Standard_Boolean  ) >(&TCollection_HAsciiString::ChangeAll),
             R"#(Replaces all characters equal to aChar by NewChar in this ASCII string. The substitution is case sensitive if CaseSensitive is true (default value). If you do not use the default case sensitive option, it does not matter whether aChar is upper-case or not. Example Handle(TCollection_HAsciiString) myMistake = new TCollection_HAsciiString ("Hather"); myMistake->ChangeAll('H','F'); assert ( !strcmp( myMistake->ToCString(), "Father") );)#"  , py::arg("aChar"),  py::arg("NewChar"),  py::arg("CaseSensitive")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Clear",
             (void (TCollection_HAsciiString::*)() ) static_cast<void (TCollection_HAsciiString::*)() >(&TCollection_HAsciiString::Clear),
             R"#(Removes all characters contained in <me>. This produces an empty HAsciiString.)#" )
        .def("FirstLocationInSet",
             (Standard_Integer (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Integer ,  const Standard_Integer  ) const>(&TCollection_HAsciiString::FirstLocationInSet),
             R"#(Returns the index of the first character of <me> that is present in <Set>. The search begins to the index FromIndex and ends to the the index ToIndex. Returns zero if failure. Raises an exception if FromIndex or ToIndex is out of range Example: before me = "aabAcAa", S = "Aa", FromIndex = 1, Toindex = 7 after me = "aabAcAa" returns 1)#"  , py::arg("Set"),  py::arg("FromIndex"),  py::arg("ToIndex"))
        .def("FirstLocationNotInSet",
             (Standard_Integer (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Integer ,  const Standard_Integer  ) const>(&TCollection_HAsciiString::FirstLocationNotInSet),
             R"#(Returns the index of the first character of <me> that is not present in the set <Set>. The search begins to the index FromIndex and ends to the the index ToIndex in <me>. Returns zero if failure. Raises an exception if FromIndex or ToIndex is out of range. Example: before me = "aabAcAa", S = "Aa", FromIndex = 1, Toindex = 7 after me = "aabAcAa" returns 3)#"  , py::arg("Set"),  py::arg("FromIndex"),  py::arg("ToIndex"))
        .def("Insert",
             (void (TCollection_HAsciiString::*)( const Standard_Integer ,  const Standard_Character  ) ) static_cast<void (TCollection_HAsciiString::*)( const Standard_Integer ,  const Standard_Character  ) >(&TCollection_HAsciiString::Insert),
             R"#(Insert a Character at position <where>. Example: aString contains "hy not ?" aString.Insert(1,'W'); gives "Why not ?" aString contains "Wh" aString.Insert(3,'y'); gives "Why" aString contains "Way" aString.Insert(2,'h'); gives "Why")#"  , py::arg("where"),  py::arg("what"))
        .def("Insert",
             (void (TCollection_HAsciiString::*)( const Standard_Integer ,  const Standard_CString  ) ) static_cast<void (TCollection_HAsciiString::*)( const Standard_Integer ,  const Standard_CString  ) >(&TCollection_HAsciiString::Insert),
             R"#(Insert a HAsciiString at position <where>.)#"  , py::arg("where"),  py::arg("what"))
        .def("Insert",
             (void (TCollection_HAsciiString::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (TCollection_HAsciiString::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&TCollection_HAsciiString::Insert),
             R"#(Insert a HAsciiString at position <where>.)#"  , py::arg("where"),  py::arg("what"))
        .def("InsertAfter",
             (void (TCollection_HAsciiString::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (TCollection_HAsciiString::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&TCollection_HAsciiString::InsertAfter),
             R"#(Inserts the other ASCII string a after a specific index in the string <me> Example: before me = "cde" , Index = 0 , other = "ab" after me = "abcde" , other = "ab")#"  , py::arg("Index"),  py::arg("other"))
        .def("InsertBefore",
             (void (TCollection_HAsciiString::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (TCollection_HAsciiString::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&TCollection_HAsciiString::InsertBefore),
             R"#(Inserts the other ASCII string a before a specific index in the string <me> Raises an exception if Index is out of bounds Example: before me = "cde" , Index = 1 , other = "ab" after me = "abcde" , other = "ab")#"  , py::arg("Index"),  py::arg("other"))
        .def("IsEmpty",
             (Standard_Boolean (TCollection_HAsciiString::*)() const) static_cast<Standard_Boolean (TCollection_HAsciiString::*)() const>(&TCollection_HAsciiString::IsEmpty),
             R"#(Returns True if the string <me> contains zero character)#" )
        .def("IsLess",
             (Standard_Boolean (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> &  ) const) static_cast<Standard_Boolean (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> &  ) const>(&TCollection_HAsciiString::IsLess),
             R"#(Returns TRUE if <me> is 'ASCII' less than <other>.)#"  , py::arg("other"))
        .def("IsGreater",
             (Standard_Boolean (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> &  ) const) static_cast<Standard_Boolean (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> &  ) const>(&TCollection_HAsciiString::IsGreater),
             R"#(Returns TRUE if <me> is 'ASCII' greater than <other>.)#"  , py::arg("other"))
        .def("IntegerValue",
             (Standard_Integer (TCollection_HAsciiString::*)() const) static_cast<Standard_Integer (TCollection_HAsciiString::*)() const>(&TCollection_HAsciiString::IntegerValue),
             R"#(Converts a HAsciiString containing a numeric expression to an Integer. Example: "215" returns 215.)#" )
        .def("IsIntegerValue",
             (Standard_Boolean (TCollection_HAsciiString::*)() const) static_cast<Standard_Boolean (TCollection_HAsciiString::*)() const>(&TCollection_HAsciiString::IsIntegerValue),
             R"#(Returns True if the string contains an integer value.)#" )
        .def("IsRealValue",
             (Standard_Boolean (TCollection_HAsciiString::*)() const) static_cast<Standard_Boolean (TCollection_HAsciiString::*)() const>(&TCollection_HAsciiString::IsRealValue),
             R"#(Returns True if the string contains a real value.)#" )
        .def("IsAscii",
             (Standard_Boolean (TCollection_HAsciiString::*)() const) static_cast<Standard_Boolean (TCollection_HAsciiString::*)() const>(&TCollection_HAsciiString::IsAscii),
             R"#(Returns True if the string contains only ASCII characters between ' ' and '~'. This means no control character and no extended ASCII code.)#" )
        .def("IsDifferent",
             (Standard_Boolean (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> &  ) const) static_cast<Standard_Boolean (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> &  ) const>(&TCollection_HAsciiString::IsDifferent),
             R"#(Returns True if the string S not contains same characters than the string <me>.)#"  , py::arg("S"))
        .def("IsSameString",
             (Standard_Boolean (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> &  ) const) static_cast<Standard_Boolean (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> &  ) const>(&TCollection_HAsciiString::IsSameString),
             R"#(Returns True if the string S contains same characters than the string <me>.)#"  , py::arg("S"))
        .def("IsSameString",
             (Standard_Boolean (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean  ) const) static_cast<Standard_Boolean (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean  ) const>(&TCollection_HAsciiString::IsSameString),
             R"#(Returns True if the string S contains same characters than the string <me>.)#"  , py::arg("S"),  py::arg("CaseSensitive"))
        .def("LeftAdjust",
             (void (TCollection_HAsciiString::*)() ) static_cast<void (TCollection_HAsciiString::*)() >(&TCollection_HAsciiString::LeftAdjust),
             R"#(Removes all space characters in the begining of the string)#" )
        .def("LeftJustify",
             (void (TCollection_HAsciiString::*)( const Standard_Integer ,  const Standard_Character  ) ) static_cast<void (TCollection_HAsciiString::*)( const Standard_Integer ,  const Standard_Character  ) >(&TCollection_HAsciiString::LeftJustify),
             R"#(Left justify. Length becomes equal to Width and the new characters are equal to Filler if Width < Length nothing happens Raises an exception if Width is less than zero Example: before me = "abcdef" , Width = 9 , Filler = ' ' after me = "abcdef ")#"  , py::arg("Width"),  py::arg("Filler"))
        .def("Length",
             (Standard_Integer (TCollection_HAsciiString::*)() const) static_cast<Standard_Integer (TCollection_HAsciiString::*)() const>(&TCollection_HAsciiString::Length),
             R"#(Returns number of characters in <me>. This is the same functionality as 'strlen' in C.)#" )
        .def("Location",
             (Standard_Integer (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Integer ,  const Standard_Integer  ) const>(&TCollection_HAsciiString::Location),
             R"#(returns an index in the string <me> of the first occurence of the string S in the string <me> from the starting index FromIndex to the ending index ToIndex returns zero if failure Raises an exception if FromIndex or ToIndex is out of range. Example: before me = "aabAaAa", S = "Aa", FromIndex = 1, ToIndex = 7 after me = "aabAaAa" returns 4)#"  , py::arg("other"),  py::arg("FromIndex"),  py::arg("ToIndex"))
        .def("Location",
             (Standard_Integer (TCollection_HAsciiString::*)( const Standard_Integer ,  const Standard_Character ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (TCollection_HAsciiString::*)( const Standard_Integer ,  const Standard_Character ,  const Standard_Integer ,  const Standard_Integer  ) const>(&TCollection_HAsciiString::Location),
             R"#(Returns the index of the nth occurence of the character C in the string <me> from the starting index FromIndex to the ending index ToIndex. Returns zero if failure. Raises an exception if FromIndex or ToIndex is out of range Example: before me = "aabAa", N = 3, C = 'a', FromIndex = 1, ToIndex = 5 after me = "aabAa" returns 5)#"  , py::arg("N"),  py::arg("C"),  py::arg("FromIndex"),  py::arg("ToIndex"))
        .def("LowerCase",
             (void (TCollection_HAsciiString::*)() ) static_cast<void (TCollection_HAsciiString::*)() >(&TCollection_HAsciiString::LowerCase),
             R"#(Converts <me> to its lower-case equivalent.)#" )
        .def("Prepend",
             (void (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&TCollection_HAsciiString::Prepend),
             R"#(Inserts the other string at the begining of the string <me> Example: before me = "cde" , S = "ab" after me = "abcde" , S = "ab")#"  , py::arg("other"))
        .def("Print",
             (void (TCollection_HAsciiString::*)( std::ostream &  ) const) static_cast<void (TCollection_HAsciiString::*)( std::ostream &  ) const>(&TCollection_HAsciiString::Print),
             R"#(Prints this string on the stream <astream>.)#"  , py::arg("astream"))
        .def("RealValue",
             (Standard_Real (TCollection_HAsciiString::*)() const) static_cast<Standard_Real (TCollection_HAsciiString::*)() const>(&TCollection_HAsciiString::RealValue),
             R"#(Converts a string containing a numeric expression to a Real. Example: "215" returns 215.0. "3.14159267" returns 3.14159267.)#" )
        .def("RemoveAll",
             (void (TCollection_HAsciiString::*)( const Standard_Character ,  const Standard_Boolean  ) ) static_cast<void (TCollection_HAsciiString::*)( const Standard_Character ,  const Standard_Boolean  ) >(&TCollection_HAsciiString::RemoveAll),
             R"#(Remove all the occurences of the character C in the string Example: before me = "HellLLo", C = 'L' , CaseSensitive = True after me = "Hello")#"  , py::arg("C"),  py::arg("CaseSensitive"))
        .def("RemoveAll",
             (void (TCollection_HAsciiString::*)( const Standard_Character  ) ) static_cast<void (TCollection_HAsciiString::*)( const Standard_Character  ) >(&TCollection_HAsciiString::RemoveAll),
             R"#(Removes every <what> characters from <me>)#"  , py::arg("what"))
        .def("Remove",
             (void (TCollection_HAsciiString::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (TCollection_HAsciiString::*)( const Standard_Integer ,  const Standard_Integer  ) >(&TCollection_HAsciiString::Remove),
             R"#(Erases <ahowmany> characters from position <where>, <where> included. Example: aString contains "Hello" aString.Erase(2,2) erases 2 characters from position 1 This gives "Hlo".)#"  , py::arg("where"),  py::arg("ahowmany")=static_cast<const Standard_Integer>(1))
        .def("RightAdjust",
             (void (TCollection_HAsciiString::*)() ) static_cast<void (TCollection_HAsciiString::*)() >(&TCollection_HAsciiString::RightAdjust),
             R"#(Removes all space characters at the end of the string.)#" )
        .def("RightJustify",
             (void (TCollection_HAsciiString::*)( const Standard_Integer ,  const Standard_Character  ) ) static_cast<void (TCollection_HAsciiString::*)( const Standard_Integer ,  const Standard_Character  ) >(&TCollection_HAsciiString::RightJustify),
             R"#(Right justify. Length becomes equal to Width and the new characters are equal to Filler if Width < Length nothing happens Raises an exception if Width is less than zero Example: before me = "abcdef" , Width = 9 , Filler = ' ' after me = " abcdef")#"  , py::arg("Width"),  py::arg("Filler"))
        .def("Search",
             (Standard_Integer (TCollection_HAsciiString::*)( const Standard_CString  ) const) static_cast<Standard_Integer (TCollection_HAsciiString::*)( const Standard_CString  ) const>(&TCollection_HAsciiString::Search),
             R"#(Searches a CString in <me> from the beginning and returns position of first item <what> matching. It returns -1 if not found. Example: aString contains "Sample single test" aString.Search("le") returns 5)#"  , py::arg("what"))
        .def("Search",
             (Standard_Integer (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> &  ) const) static_cast<Standard_Integer (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> &  ) const>(&TCollection_HAsciiString::Search),
             R"#(Searches a String in <me> from the beginning and returns position of first item <what> matching. it returns -1 if not found.)#"  , py::arg("what"))
        .def("SearchFromEnd",
             (Standard_Integer (TCollection_HAsciiString::*)( const Standard_CString  ) const) static_cast<Standard_Integer (TCollection_HAsciiString::*)( const Standard_CString  ) const>(&TCollection_HAsciiString::SearchFromEnd),
             R"#(Searches a CString in a String from the end and returns position of first item <what> matching. It returns -1 if not found. Example: aString contains "Sample single test" aString.SearchFromEnd("le") returns 12)#"  , py::arg("what"))
        .def("SearchFromEnd",
             (Standard_Integer (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> &  ) const) static_cast<Standard_Integer (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> &  ) const>(&TCollection_HAsciiString::SearchFromEnd),
             R"#(Searches a HAsciiString in another HAsciiString from the end and returns position of first item <what> matching. It returns -1 if not found.)#"  , py::arg("what"))
        .def("SetValue",
             (void (TCollection_HAsciiString::*)( const Standard_Integer ,  const Standard_Character  ) ) static_cast<void (TCollection_HAsciiString::*)( const Standard_Integer ,  const Standard_Character  ) >(&TCollection_HAsciiString::SetValue),
             R"#(Replaces one character in the string at position <where>. If <where> is less than zero or greater than the length of <me> an exception is raised. Example: aString contains "Garbake" astring.Replace(6,'g') gives <me> = "Garbage")#"  , py::arg("where"),  py::arg("what"))
        .def("SetValue",
             (void (TCollection_HAsciiString::*)( const Standard_Integer ,  const Standard_CString  ) ) static_cast<void (TCollection_HAsciiString::*)( const Standard_Integer ,  const Standard_CString  ) >(&TCollection_HAsciiString::SetValue),
             R"#(Replaces a part of <me> in the string at position <where>. If <where> is less than zero or greater than the length of <me> an exception is raised. Example: aString contains "Garbake" astring.Replace(6,'g') gives <me> = "Garbage")#"  , py::arg("where"),  py::arg("what"))
        .def("SetValue",
             (void (TCollection_HAsciiString::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (TCollection_HAsciiString::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&TCollection_HAsciiString::SetValue),
             R"#(Replaces a part of <me> by another string.)#"  , py::arg("where"),  py::arg("what"))
        .def("Split",
             (opencascade::handle<TCollection_HAsciiString> (TCollection_HAsciiString::*)( const Standard_Integer  ) ) static_cast<opencascade::handle<TCollection_HAsciiString> (TCollection_HAsciiString::*)( const Standard_Integer  ) >(&TCollection_HAsciiString::Split),
             R"#(Splits a HAsciiString into two sub-strings. Example: aString contains "abcdefg" aString.Split(3) gives <me> = "abc" and returns "defg")#"  , py::arg("where"))
        .def("SubString",
             (opencascade::handle<TCollection_HAsciiString> (TCollection_HAsciiString::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (TCollection_HAsciiString::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&TCollection_HAsciiString::SubString),
             R"#(Creation of a sub-string of the string <me>. The sub-string starts to the index Fromindex and ends to the index ToIndex. Raises an exception if ToIndex or FromIndex is out of bounds Example: before me = "abcdefg", ToIndex=3, FromIndex=6 after me = "abcdefg" returns "cdef")#"  , py::arg("FromIndex"),  py::arg("ToIndex"))
        .def("ToCString",
             (Standard_CString (TCollection_HAsciiString::*)() const) static_cast<Standard_CString (TCollection_HAsciiString::*)() const>(&TCollection_HAsciiString::ToCString),
             R"#(Returns pointer to string (char *) This is useful for some casual manipulations Because this "char *" is 'const', you can't modify its contents.)#" )
        .def("Token",
             (opencascade::handle<TCollection_HAsciiString> (TCollection_HAsciiString::*)( const Standard_CString ,  const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (TCollection_HAsciiString::*)( const Standard_CString ,  const Standard_Integer  ) const>(&TCollection_HAsciiString::Token),
             R"#(Extracts <whichone> token from <me>. By default, the <separators> is set to space and tabulation. By default, the token extracted is the first one (whichone = 1). <separators> contains all separators you need. If no token indexed by <whichone> is found, it returns an empty String. Example: aString contains "This is a message" aString.Token() returns "This" aString.Token(" ",4) returns "message" aString.Token(" ",2) returns "is" aString.Token(" ",9) returns "" Other separators than space character and tabulation are allowed aString contains "1234; test:message , value" aString.Token("; :,",4) returns "value" aString.Token("; :,",2) returns "test")#"  , py::arg("separators")=static_cast<const Standard_CString>(" \t"),  py::arg("whichone")=static_cast<const Standard_Integer>(1))
        .def("Trunc",
             (void (TCollection_HAsciiString::*)( const Standard_Integer  ) ) static_cast<void (TCollection_HAsciiString::*)( const Standard_Integer  ) >(&TCollection_HAsciiString::Trunc),
             R"#(Truncates <me> to <ahowmany> characters. Example: me = "Hello Dolly" -> Trunc(3) -> me = "Hel")#"  , py::arg("ahowmany"))
        .def("UpperCase",
             (void (TCollection_HAsciiString::*)() ) static_cast<void (TCollection_HAsciiString::*)() >(&TCollection_HAsciiString::UpperCase),
             R"#(Converts <me> to its upper-case equivalent.)#" )
        .def("UsefullLength",
             (Standard_Integer (TCollection_HAsciiString::*)() const) static_cast<Standard_Integer (TCollection_HAsciiString::*)() const>(&TCollection_HAsciiString::UsefullLength),
             R"#(Length of the string ignoring all spaces (' ') and the control character at the end.)#" )
        .def("Value",
             (Standard_Character (TCollection_HAsciiString::*)( const Standard_Integer  ) const) static_cast<Standard_Character (TCollection_HAsciiString::*)( const Standard_Integer  ) const>(&TCollection_HAsciiString::Value),
             R"#(Returns character at position <where> in <me>. If <where> is less than zero or greater than the lenght of <me>, an exception is raised. Example: aString contains "Hello" aString.Value(2) returns 'e')#"  , py::arg("where"))
        .def("String",
             (const TCollection_AsciiString & (TCollection_HAsciiString::*)() const) static_cast<const TCollection_AsciiString & (TCollection_HAsciiString::*)() const>(&TCollection_HAsciiString::String),
             R"#(Returns the field myString.)#" )
        .def("IsSameState",
             (Standard_Boolean (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> &  ) const) static_cast<Standard_Boolean (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> &  ) const>(&TCollection_HAsciiString::IsSameState),
             R"#(None)#"  , py::arg("other"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TCollection_HAsciiString::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TCollection_HAsciiString::*)() const>(&TCollection_HAsciiString::DynamicType),
             R"#(None)#" )
        .def("AssignCat",
             (void (TCollection_HAsciiString::*)( const Standard_CString  ) ) static_cast<void (TCollection_HAsciiString::*)( const Standard_CString  ) >(&TCollection_HAsciiString::AssignCat),
             R"#(Appends <other> to me.)#"  , py::arg("other"))
        .def("AssignCat",
             (void (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (TCollection_HAsciiString::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&TCollection_HAsciiString::AssignCat),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TCollection_HAsciiString::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TCollection_HExtendedString ,opencascade::handle<TCollection_HExtendedString>  , Standard_Transient >>(m.attr("TCollection_HExtendedString"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_CString >()  , py::arg("message") )
        .def(py::init< const Standard_ExtString >()  , py::arg("message") )
        .def(py::init< const Standard_ExtCharacter >()  , py::arg("aChar") )
        .def(py::init< const Standard_Integer,const Standard_ExtCharacter >()  , py::arg("length"),  py::arg("filler") )
        .def(py::init< const TCollection_ExtendedString & >()  , py::arg("aString") )
        .def(py::init< const opencascade::handle<TCollection_HAsciiString> & >()  , py::arg("aString") )
        .def(py::init< const opencascade::handle<TCollection_HExtendedString> & >()  , py::arg("aString") )
    // custom constructors
    // methods
        .def("AssignCat",
             (void (TCollection_HExtendedString::*)( const opencascade::handle<TCollection_HExtendedString> &  ) ) static_cast<void (TCollection_HExtendedString::*)( const opencascade::handle<TCollection_HExtendedString> &  ) >(&TCollection_HExtendedString::AssignCat),
             R"#(Appends <other> to me.)#"  , py::arg("other"))
        .def("Cat",
             (opencascade::handle<TCollection_HExtendedString> (TCollection_HExtendedString::*)( const opencascade::handle<TCollection_HExtendedString> &  ) const) static_cast<opencascade::handle<TCollection_HExtendedString> (TCollection_HExtendedString::*)( const opencascade::handle<TCollection_HExtendedString> &  ) const>(&TCollection_HExtendedString::Cat),
             R"#(Returns a string appending <other> to me.)#"  , py::arg("other"))
        .def("ChangeAll",
             (void (TCollection_HExtendedString::*)( const Standard_ExtCharacter ,  const Standard_ExtCharacter  ) ) static_cast<void (TCollection_HExtendedString::*)( const Standard_ExtCharacter ,  const Standard_ExtCharacter  ) >(&TCollection_HExtendedString::ChangeAll),
             R"#(Substitutes all the characters equal to aChar by NewChar in the string <me>.)#"  , py::arg("aChar"),  py::arg("NewChar"))
        .def("Clear",
             (void (TCollection_HExtendedString::*)() ) static_cast<void (TCollection_HExtendedString::*)() >(&TCollection_HExtendedString::Clear),
             R"#(Removes all characters contained in <me>. This produces an empty ExtendedString.)#" )
        .def("IsEmpty",
             (Standard_Boolean (TCollection_HExtendedString::*)() const) static_cast<Standard_Boolean (TCollection_HExtendedString::*)() const>(&TCollection_HExtendedString::IsEmpty),
             R"#(Returns True if the string <me> contains zero character)#" )
        .def("Insert",
             (void (TCollection_HExtendedString::*)( const Standard_Integer ,  const Standard_ExtCharacter  ) ) static_cast<void (TCollection_HExtendedString::*)( const Standard_Integer ,  const Standard_ExtCharacter  ) >(&TCollection_HExtendedString::Insert),
             R"#(Insert a ExtCharacter at position <where>. Example: aString contains "hy not ?" aString.Insert(1,'W'); gives "Why not ?" aString contains "Wh" aString.Insert(3,'y'); gives "Why" aString contains "Way" aString.Insert(2,'h'); gives "Why")#"  , py::arg("where"),  py::arg("what"))
        .def("Insert",
             (void (TCollection_HExtendedString::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HExtendedString> &  ) ) static_cast<void (TCollection_HExtendedString::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HExtendedString> &  ) >(&TCollection_HExtendedString::Insert),
             R"#(Insert a HExtendedString at position <where>.)#"  , py::arg("where"),  py::arg("what"))
        .def("IsLess",
             (Standard_Boolean (TCollection_HExtendedString::*)( const opencascade::handle<TCollection_HExtendedString> &  ) const) static_cast<Standard_Boolean (TCollection_HExtendedString::*)( const opencascade::handle<TCollection_HExtendedString> &  ) const>(&TCollection_HExtendedString::IsLess),
             R"#(Returns TRUE if <me> is less than <other>.)#"  , py::arg("other"))
        .def("IsGreater",
             (Standard_Boolean (TCollection_HExtendedString::*)( const opencascade::handle<TCollection_HExtendedString> &  ) const) static_cast<Standard_Boolean (TCollection_HExtendedString::*)( const opencascade::handle<TCollection_HExtendedString> &  ) const>(&TCollection_HExtendedString::IsGreater),
             R"#(Returns TRUE if <me> is greater than <other>.)#"  , py::arg("other"))
        .def("IsAscii",
             (Standard_Boolean (TCollection_HExtendedString::*)() const) static_cast<Standard_Boolean (TCollection_HExtendedString::*)() const>(&TCollection_HExtendedString::IsAscii),
             R"#(Returns True if the string contains only "Ascii Range" characters)#" )
        .def("Length",
             (Standard_Integer (TCollection_HExtendedString::*)() const) static_cast<Standard_Integer (TCollection_HExtendedString::*)() const>(&TCollection_HExtendedString::Length),
             R"#(Returns number of characters in <me>. This is the same functionality as 'strlen' in C.)#" )
        .def("Remove",
             (void (TCollection_HExtendedString::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (TCollection_HExtendedString::*)( const Standard_Integer ,  const Standard_Integer  ) >(&TCollection_HExtendedString::Remove),
             R"#(Erases <ahowmany> characters from position <where>, <where> included. Example: aString contains "Hello" aString.Erase(2,2) erases 2 characters from position 1 This gives "Hlo".)#"  , py::arg("where"),  py::arg("ahowmany")=static_cast<const Standard_Integer>(1))
        .def("RemoveAll",
             (void (TCollection_HExtendedString::*)( const Standard_ExtCharacter  ) ) static_cast<void (TCollection_HExtendedString::*)( const Standard_ExtCharacter  ) >(&TCollection_HExtendedString::RemoveAll),
             R"#(Removes every <what> characters from <me>.)#"  , py::arg("what"))
        .def("SetValue",
             (void (TCollection_HExtendedString::*)( const Standard_Integer ,  const Standard_ExtCharacter  ) ) static_cast<void (TCollection_HExtendedString::*)( const Standard_Integer ,  const Standard_ExtCharacter  ) >(&TCollection_HExtendedString::SetValue),
             R"#(Replaces one character in the string at position <where>. If <where> is less than zero or greater than the length of <me> an exception is raised. Example: aString contains "Garbake" astring.Replace(6,'g') gives <me> = "Garbage")#"  , py::arg("where"),  py::arg("what"))
        .def("SetValue",
             (void (TCollection_HExtendedString::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HExtendedString> &  ) ) static_cast<void (TCollection_HExtendedString::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HExtendedString> &  ) >(&TCollection_HExtendedString::SetValue),
             R"#(Replaces a part of <me> by another string.)#"  , py::arg("where"),  py::arg("what"))
        .def("Split",
             (opencascade::handle<TCollection_HExtendedString> (TCollection_HExtendedString::*)( const Standard_Integer  ) ) static_cast<opencascade::handle<TCollection_HExtendedString> (TCollection_HExtendedString::*)( const Standard_Integer  ) >(&TCollection_HExtendedString::Split),
             R"#(Splits a ExtendedString into two sub-strings. Example: aString contains "abcdefg" aString.Split(3) gives <me> = "abc" and returns "defg")#"  , py::arg("where"))
        .def("Search",
             (Standard_Integer (TCollection_HExtendedString::*)( const opencascade::handle<TCollection_HExtendedString> &  ) const) static_cast<Standard_Integer (TCollection_HExtendedString::*)( const opencascade::handle<TCollection_HExtendedString> &  ) const>(&TCollection_HExtendedString::Search),
             R"#(Searches a String in <me> from the beginning and returns position of first item <what> matching. It returns -1 if not found.)#"  , py::arg("what"))
        .def("SearchFromEnd",
             (Standard_Integer (TCollection_HExtendedString::*)( const opencascade::handle<TCollection_HExtendedString> &  ) const) static_cast<Standard_Integer (TCollection_HExtendedString::*)( const opencascade::handle<TCollection_HExtendedString> &  ) const>(&TCollection_HExtendedString::SearchFromEnd),
             R"#(Searches a ExtendedString in another ExtendedString from the end and returns position of first item <what> matching. It returns -1 if not found.)#"  , py::arg("what"))
        .def("ToExtString",
             (Standard_ExtString (TCollection_HExtendedString::*)() const) static_cast<Standard_ExtString (TCollection_HExtendedString::*)() const>(&TCollection_HExtendedString::ToExtString),
             R"#(Returns pointer to ExtString)#" )
        .def("Token",
             (opencascade::handle<TCollection_HExtendedString> (TCollection_HExtendedString::*)( const Standard_ExtString ,  const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HExtendedString> (TCollection_HExtendedString::*)( const Standard_ExtString ,  const Standard_Integer  ) const>(&TCollection_HExtendedString::Token),
             R"#(Extracts <whichone> token from <me>. By default, the <separators> is set to space and tabulation. By default, the token extracted is the first one (whichone = 1). <separators> contains all separators you need. If no token indexed by <whichone> is found, it returns an empty String. Example: aString contains "This is a message" aString.Token() returns "This" aString.Token(" ",4) returns "message" aString.Token(" ",2) returns "is" aString.Token(" ",9) returns "" Other separators than space character and tabulation are allowed aString contains "1234; test:message , value" aString.Token("; :,",4) returns "value" aString.Token("; :,",2) returns "test")#"  , py::arg("separators"),  py::arg("whichone")=static_cast<const Standard_Integer>(1))
        .def("Trunc",
             (void (TCollection_HExtendedString::*)( const Standard_Integer  ) ) static_cast<void (TCollection_HExtendedString::*)( const Standard_Integer  ) >(&TCollection_HExtendedString::Trunc),
             R"#(Truncates <me> to <ahowmany> characters. Example: me = "Hello Dolly" -> Trunc(3) -> me = "Hel")#"  , py::arg("ahowmany"))
        .def("Value",
             (Standard_ExtCharacter (TCollection_HExtendedString::*)( const Standard_Integer  ) const) static_cast<Standard_ExtCharacter (TCollection_HExtendedString::*)( const Standard_Integer  ) const>(&TCollection_HExtendedString::Value),
             R"#(Returns ExtCharacter at position <where> in <me>. If <where> is less than zero or greater than the length of <me>, an exception is raised. Example: aString contains "Hello" aString.Value(2) returns 'e')#"  , py::arg("where"))
        .def("String",
             (const TCollection_ExtendedString & (TCollection_HExtendedString::*)() const) static_cast<const TCollection_ExtendedString & (TCollection_HExtendedString::*)() const>(&TCollection_HExtendedString::String),
             R"#(Returns the field myString)#" )
        .def("Print",
             (void (TCollection_HExtendedString::*)( std::ostream &  ) const) static_cast<void (TCollection_HExtendedString::*)( std::ostream &  ) const>(&TCollection_HExtendedString::Print),
             R"#(Displays <me> .)#"  , py::arg("astream"))
        .def("IsSameState",
             (Standard_Boolean (TCollection_HExtendedString::*)( const opencascade::handle<TCollection_HExtendedString> &  ) const) static_cast<Standard_Boolean (TCollection_HExtendedString::*)( const opencascade::handle<TCollection_HExtendedString> &  ) const>(&TCollection_HExtendedString::IsSameState),
             R"#(None)#"  , py::arg("other"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TCollection_HExtendedString::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TCollection_HExtendedString::*)() const>(&TCollection_HExtendedString::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TCollection_HExtendedString::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TCollection_HExtendedString::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TCollection_MapNode ,opencascade::handle<TCollection_MapNode>  , Standard_Transient >>(m.attr("TCollection_MapNode"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TCollection_MapNode::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TCollection_SeqNode ,opencascade::handle<TCollection_SeqNode>  , Standard_Transient >>(m.attr("TCollection_SeqNode"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TCollection_SeqNode::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/TCollection_BasicMap.hxx
// ./opencascade/TCollection_BaseSequence.hxx
// ./opencascade/TCollection_BasicMapIterator.hxx
// ./opencascade/TCollection_AsciiString.hxx
    m.def("HashCode", 
          (Standard_Integer (*)( const TCollection_AsciiString & ,  const Standard_Integer  ))  static_cast<Standard_Integer (*)( const TCollection_AsciiString & ,  const Standard_Integer  )>(&HashCode),
          R"#(Computes a hash code for the given ASCII string, in the range [1, theUpperBound])#"  , py::arg("theAsciiString"),  py::arg("theUpperBound"));
    m.def("IsEqual", 
          (Standard_Boolean (*)( const TCollection_AsciiString & ,  const TCollection_AsciiString &  ))  static_cast<Standard_Boolean (*)( const TCollection_AsciiString & ,  const TCollection_AsciiString &  )>(&IsEqual),
          R"#(None)#"  , py::arg("string1"),  py::arg("string2"));
// ./opencascade/TCollection_HExtendedString.hxx
// ./opencascade/TCollection_Side.hxx
// ./opencascade/TCollection_SeqNodePtr.hxx
// ./opencascade/TCollection_MapNodePtr.hxx
// ./opencascade/TCollection.hxx
// ./opencascade/TCollection_MapNode.hxx
// ./opencascade/TCollection_SeqNode.hxx
// ./opencascade/TCollection_HAsciiString.hxx
// ./opencascade/TCollection_ExtendedString.hxx
    m.def("HashCode", 
          (Standard_Integer (*)( const TCollection_ExtendedString & ,  const Standard_Integer  ))  static_cast<Standard_Integer (*)( const TCollection_ExtendedString & ,  const Standard_Integer  )>(&HashCode),
          R"#(Computes a hash code for the given extended string, in the range [1, theUpperBound])#"  , py::arg("theExtendedString"),  py::arg("theUpperBound"));

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

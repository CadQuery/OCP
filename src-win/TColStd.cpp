
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations

// module includes
#include <TColStd_Array1OfAsciiString.hxx>
#include <TColStd_Array1OfBoolean.hxx>
#include <TColStd_Array1OfByte.hxx>
#include <TColStd_Array1OfCharacter.hxx>
#include <TColStd_Array1OfExtendedString.hxx>
#include <TColStd_Array1OfInteger.hxx>
#include <TColStd_Array1OfListOfInteger.hxx>
#include <TColStd_Array1OfReal.hxx>
#include <TColStd_Array1OfTransient.hxx>
#include <TColStd_Array2OfBoolean.hxx>
#include <TColStd_Array2OfCharacter.hxx>
#include <TColStd_Array2OfInteger.hxx>
#include <TColStd_Array2OfReal.hxx>
#include <TColStd_Array2OfTransient.hxx>
#include <TColStd_DataMapIteratorOfDataMapOfAsciiStringInteger.hxx>
#include <TColStd_DataMapIteratorOfDataMapOfIntegerInteger.hxx>
#include <TColStd_DataMapIteratorOfDataMapOfIntegerListOfInteger.hxx>
#include <TColStd_DataMapIteratorOfDataMapOfIntegerReal.hxx>
#include <TColStd_DataMapIteratorOfDataMapOfIntegerTransient.hxx>
#include <TColStd_DataMapIteratorOfDataMapOfStringInteger.hxx>
#include <TColStd_DataMapIteratorOfDataMapOfTransientTransient.hxx>
#include <TColStd_DataMapOfAsciiStringInteger.hxx>
#include <TColStd_DataMapOfIntegerInteger.hxx>
#include <TColStd_DataMapOfIntegerListOfInteger.hxx>
#include <TColStd_DataMapOfIntegerReal.hxx>
#include <TColStd_DataMapOfIntegerTransient.hxx>
#include <TColStd_DataMapOfStringInteger.hxx>
#include <TColStd_DataMapOfTransientTransient.hxx>
#include <TColStd_HArray1OfAsciiString.hxx>
#include <TColStd_HArray1OfBoolean.hxx>
#include <TColStd_HArray1OfByte.hxx>
#include <TColStd_HArray1OfCharacter.hxx>
#include <TColStd_HArray1OfExtendedString.hxx>
#include <TColStd_HArray1OfInteger.hxx>
#include <TColStd_HArray1OfListOfInteger.hxx>
#include <TColStd_HArray1OfReal.hxx>
#include <TColStd_HArray1OfTransient.hxx>
#include <TColStd_HArray2OfBoolean.hxx>
#include <TColStd_HArray2OfCharacter.hxx>
#include <TColStd_HArray2OfInteger.hxx>
#include <TColStd_HArray2OfReal.hxx>
#include <TColStd_HArray2OfTransient.hxx>
#include <TColStd_HPackedMapOfInteger.hxx>
#include <TColStd_HSequenceOfAsciiString.hxx>
#include <TColStd_HSequenceOfExtendedString.hxx>
#include <TColStd_HSequenceOfHAsciiString.hxx>
#include <TColStd_HSequenceOfHExtendedString.hxx>
#include <TColStd_HSequenceOfInteger.hxx>
#include <TColStd_HSequenceOfReal.hxx>
#include <TColStd_HSequenceOfTransient.hxx>
#include <TColStd_IndexedDataMapOfStringString.hxx>
#include <TColStd_IndexedDataMapOfTransientTransient.hxx>
#include <TColStd_IndexedMapOfInteger.hxx>
#include <TColStd_IndexedMapOfReal.hxx>
#include <TColStd_IndexedMapOfTransient.hxx>
#include <TColStd_ListIteratorOfListOfAsciiString.hxx>
#include <TColStd_ListIteratorOfListOfInteger.hxx>
#include <TColStd_ListIteratorOfListOfReal.hxx>
#include <TColStd_ListIteratorOfListOfTransient.hxx>
#include <TColStd_ListOfAsciiString.hxx>
#include <TColStd_ListOfInteger.hxx>
#include <TColStd_ListOfReal.hxx>
#include <TColStd_ListOfTransient.hxx>
#include <TColStd_MapIntegerHasher.hxx>
#include <TColStd_MapIteratorOfMapOfAsciiString.hxx>
#include <TColStd_MapIteratorOfMapOfInteger.hxx>
#include <TColStd_MapIteratorOfMapOfReal.hxx>
#include <TColStd_MapIteratorOfMapOfTransient.hxx>
#include <TColStd_MapIteratorOfPackedMapOfInteger.hxx>
#include <TColStd_MapOfAsciiString.hxx>
#include <TColStd_MapOfInteger.hxx>
#include <TColStd_MapOfReal.hxx>
#include <TColStd_MapOfTransient.hxx>
#include <TColStd_MapRealHasher.hxx>
#include <TColStd_MapTransientHasher.hxx>
#include <TColStd_PackedMapOfInteger.hxx>
#include <TColStd_SequenceOfAddress.hxx>
#include <TColStd_SequenceOfAsciiString.hxx>
#include <TColStd_SequenceOfBoolean.hxx>
#include <TColStd_SequenceOfExtendedString.hxx>
#include <TColStd_SequenceOfHAsciiString.hxx>
#include <TColStd_SequenceOfHExtendedString.hxx>
#include <TColStd_SequenceOfInteger.hxx>
#include <TColStd_SequenceOfReal.hxx>
#include <TColStd_SequenceOfTransient.hxx>

// template related includes
// ./opencascade\TColStd_DataMapOfIntegerInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_DataMapOfIntegerInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_ListOfAsciiString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_ListOfAsciiString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_ListOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_ListOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_SequenceOfExtendedString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_DataMapOfStringInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_DataMapOfStringInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array1OfAsciiString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array2OfTransient.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array1OfByte.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_MapOfAsciiString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_MapOfAsciiString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array2OfCharacter.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_SequenceOfAddress.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array1OfListOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_IndexedDataMapOfStringString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_IndexedMapOfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_MapTransientHasher.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_SequenceOfBoolean.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_MapIntegerHasher.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_SequenceOfAsciiString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_MapOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_MapOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_DataMapOfIntegerListOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_DataMapOfIntegerListOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_SequenceOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array1OfCharacter.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array2OfBoolean.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_DataMapOfTransientTransient.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array1OfBoolean.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_ListOfTransient.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_ListOfTransient.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_SequenceOfTransient.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array1OfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_DataMapOfIntegerTransient.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array1OfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array1OfExtendedString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_DataMapOfAsciiStringInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_DataMapOfAsciiStringInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_IndexedMapOfTransient.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_MapOfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_MapOfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_IndexedMapOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_MapOfTransient.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_MapOfTransient.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_MapRealHasher.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array2OfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_DataMapOfIntegerReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_DataMapOfIntegerReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_ListOfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_ListOfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array2OfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_SequenceOfHExtendedString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array1OfTransient.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_SequenceOfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_SequenceOfHAsciiString.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TColStd(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TColStd"));


//Python trampoline classes

// classes


    static_cast<py::class_<TColStd_HArray1OfAsciiString ,opencascade::handle<TColStd_HArray1OfAsciiString> , TColStd_Array1OfAsciiString, Standard_Transient>>(m.attr("TColStd_HArray1OfAsciiString"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const TCollection_AsciiString & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<TCollection_AsciiString> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TColStd_Array1OfAsciiString & (TColStd_HArray1OfAsciiString::*)() const) static_cast<const TColStd_Array1OfAsciiString & (TColStd_HArray1OfAsciiString::*)() const>(&TColStd_HArray1OfAsciiString::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColStd_Array1OfAsciiString & (TColStd_HArray1OfAsciiString::*)() ) static_cast<TColStd_Array1OfAsciiString & (TColStd_HArray1OfAsciiString::*)() >(&TColStd_HArray1OfAsciiString::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColStd_HArray1OfAsciiString::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColStd_HArray1OfAsciiString::*)() const>(&TColStd_HArray1OfAsciiString::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColStd_HArray1OfAsciiString::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColStd_HArray1OfAsciiString::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColStd_HArray1OfBoolean ,opencascade::handle<TColStd_HArray1OfBoolean> , TColStd_Array1OfBoolean, Standard_Transient>>(m.attr("TColStd_HArray1OfBoolean"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const TColStd_Array1OfBoolean::value_type & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<Standard_Boolean> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TColStd_Array1OfBoolean & (TColStd_HArray1OfBoolean::*)() const) static_cast<const TColStd_Array1OfBoolean & (TColStd_HArray1OfBoolean::*)() const>(&TColStd_HArray1OfBoolean::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColStd_Array1OfBoolean & (TColStd_HArray1OfBoolean::*)() ) static_cast<TColStd_Array1OfBoolean & (TColStd_HArray1OfBoolean::*)() >(&TColStd_HArray1OfBoolean::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColStd_HArray1OfBoolean::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColStd_HArray1OfBoolean::*)() const>(&TColStd_HArray1OfBoolean::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColStd_HArray1OfBoolean::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColStd_HArray1OfBoolean::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColStd_HArray1OfByte ,opencascade::handle<TColStd_HArray1OfByte> , TColStd_Array1OfByte, Standard_Transient>>(m.attr("TColStd_HArray1OfByte"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const TColStd_Array1OfByte::value_type & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<Standard_Byte> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TColStd_Array1OfByte & (TColStd_HArray1OfByte::*)() const) static_cast<const TColStd_Array1OfByte & (TColStd_HArray1OfByte::*)() const>(&TColStd_HArray1OfByte::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColStd_Array1OfByte & (TColStd_HArray1OfByte::*)() ) static_cast<TColStd_Array1OfByte & (TColStd_HArray1OfByte::*)() >(&TColStd_HArray1OfByte::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColStd_HArray1OfByte::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColStd_HArray1OfByte::*)() const>(&TColStd_HArray1OfByte::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColStd_HArray1OfByte::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColStd_HArray1OfByte::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColStd_HArray1OfCharacter ,opencascade::handle<TColStd_HArray1OfCharacter> , TColStd_Array1OfCharacter, Standard_Transient>>(m.attr("TColStd_HArray1OfCharacter"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const TColStd_Array1OfCharacter::value_type & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<Standard_Character> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TColStd_Array1OfCharacter & (TColStd_HArray1OfCharacter::*)() const) static_cast<const TColStd_Array1OfCharacter & (TColStd_HArray1OfCharacter::*)() const>(&TColStd_HArray1OfCharacter::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColStd_Array1OfCharacter & (TColStd_HArray1OfCharacter::*)() ) static_cast<TColStd_Array1OfCharacter & (TColStd_HArray1OfCharacter::*)() >(&TColStd_HArray1OfCharacter::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColStd_HArray1OfCharacter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColStd_HArray1OfCharacter::*)() const>(&TColStd_HArray1OfCharacter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColStd_HArray1OfCharacter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColStd_HArray1OfCharacter::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColStd_HArray1OfExtendedString ,opencascade::handle<TColStd_HArray1OfExtendedString> , TColStd_Array1OfExtendedString, Standard_Transient>>(m.attr("TColStd_HArray1OfExtendedString"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const TCollection_ExtendedString & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<TCollection_ExtendedString> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TColStd_Array1OfExtendedString & (TColStd_HArray1OfExtendedString::*)() const) static_cast<const TColStd_Array1OfExtendedString & (TColStd_HArray1OfExtendedString::*)() const>(&TColStd_HArray1OfExtendedString::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColStd_Array1OfExtendedString & (TColStd_HArray1OfExtendedString::*)() ) static_cast<TColStd_Array1OfExtendedString & (TColStd_HArray1OfExtendedString::*)() >(&TColStd_HArray1OfExtendedString::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColStd_HArray1OfExtendedString::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColStd_HArray1OfExtendedString::*)() const>(&TColStd_HArray1OfExtendedString::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColStd_HArray1OfExtendedString::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColStd_HArray1OfExtendedString::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColStd_HArray1OfInteger ,opencascade::handle<TColStd_HArray1OfInteger> , TColStd_Array1OfInteger, Standard_Transient>>(m.attr("TColStd_HArray1OfInteger"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const TColStd_Array1OfInteger::value_type & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<Standard_Integer> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TColStd_Array1OfInteger & (TColStd_HArray1OfInteger::*)() const) static_cast<const TColStd_Array1OfInteger & (TColStd_HArray1OfInteger::*)() const>(&TColStd_HArray1OfInteger::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColStd_Array1OfInteger & (TColStd_HArray1OfInteger::*)() ) static_cast<TColStd_Array1OfInteger & (TColStd_HArray1OfInteger::*)() >(&TColStd_HArray1OfInteger::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColStd_HArray1OfInteger::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColStd_HArray1OfInteger::*)() const>(&TColStd_HArray1OfInteger::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColStd_HArray1OfInteger::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColStd_HArray1OfInteger::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColStd_HArray1OfListOfInteger ,opencascade::handle<TColStd_HArray1OfListOfInteger> , TColStd_Array1OfListOfInteger, Standard_Transient>>(m.attr("TColStd_HArray1OfListOfInteger"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const NCollection_List<int> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<TColStd_ListOfInteger> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TColStd_Array1OfListOfInteger & (TColStd_HArray1OfListOfInteger::*)() const) static_cast<const TColStd_Array1OfListOfInteger & (TColStd_HArray1OfListOfInteger::*)() const>(&TColStd_HArray1OfListOfInteger::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColStd_Array1OfListOfInteger & (TColStd_HArray1OfListOfInteger::*)() ) static_cast<TColStd_Array1OfListOfInteger & (TColStd_HArray1OfListOfInteger::*)() >(&TColStd_HArray1OfListOfInteger::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColStd_HArray1OfListOfInteger::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColStd_HArray1OfListOfInteger::*)() const>(&TColStd_HArray1OfListOfInteger::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColStd_HArray1OfListOfInteger::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColStd_HArray1OfListOfInteger::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColStd_HArray1OfReal ,opencascade::handle<TColStd_HArray1OfReal> , TColStd_Array1OfReal, Standard_Transient>>(m.attr("TColStd_HArray1OfReal"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const TColStd_Array1OfReal::value_type & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<Standard_Real> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TColStd_Array1OfReal & (TColStd_HArray1OfReal::*)() const) static_cast<const TColStd_Array1OfReal & (TColStd_HArray1OfReal::*)() const>(&TColStd_HArray1OfReal::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColStd_Array1OfReal & (TColStd_HArray1OfReal::*)() ) static_cast<TColStd_Array1OfReal & (TColStd_HArray1OfReal::*)() >(&TColStd_HArray1OfReal::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColStd_HArray1OfReal::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColStd_HArray1OfReal::*)() const>(&TColStd_HArray1OfReal::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColStd_HArray1OfReal::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColStd_HArray1OfReal::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColStd_HArray1OfTransient ,opencascade::handle<TColStd_HArray1OfTransient> , TColStd_Array1OfTransient, Standard_Transient>>(m.attr("TColStd_HArray1OfTransient"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<Standard_Transient> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<Standard_Transient> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TColStd_Array1OfTransient & (TColStd_HArray1OfTransient::*)() const) static_cast<const TColStd_Array1OfTransient & (TColStd_HArray1OfTransient::*)() const>(&TColStd_HArray1OfTransient::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TColStd_Array1OfTransient & (TColStd_HArray1OfTransient::*)() ) static_cast<TColStd_Array1OfTransient & (TColStd_HArray1OfTransient::*)() >(&TColStd_HArray1OfTransient::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColStd_HArray1OfTransient::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColStd_HArray1OfTransient::*)() const>(&TColStd_HArray1OfTransient::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColStd_HArray1OfTransient::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColStd_HArray1OfTransient::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColStd_HArray2OfBoolean ,opencascade::handle<TColStd_HArray2OfBoolean> , TColStd_Array2OfBoolean, Standard_Transient>>(m.attr("TColStd_HArray2OfBoolean"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const TColStd_Array2OfBoolean::value_type & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<Standard_Boolean> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const TColStd_Array2OfBoolean & (TColStd_HArray2OfBoolean::*)() const) static_cast<const TColStd_Array2OfBoolean & (TColStd_HArray2OfBoolean::*)() const>(&TColStd_HArray2OfBoolean::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (TColStd_Array2OfBoolean & (TColStd_HArray2OfBoolean::*)() ) static_cast<TColStd_Array2OfBoolean & (TColStd_HArray2OfBoolean::*)() >(&TColStd_HArray2OfBoolean::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColStd_HArray2OfBoolean::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColStd_HArray2OfBoolean::*)() const>(&TColStd_HArray2OfBoolean::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColStd_HArray2OfBoolean::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColStd_HArray2OfBoolean::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColStd_HArray2OfCharacter ,opencascade::handle<TColStd_HArray2OfCharacter> , TColStd_Array2OfCharacter, Standard_Transient>>(m.attr("TColStd_HArray2OfCharacter"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const TColStd_Array2OfCharacter::value_type & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<Standard_Character> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const TColStd_Array2OfCharacter & (TColStd_HArray2OfCharacter::*)() const) static_cast<const TColStd_Array2OfCharacter & (TColStd_HArray2OfCharacter::*)() const>(&TColStd_HArray2OfCharacter::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (TColStd_Array2OfCharacter & (TColStd_HArray2OfCharacter::*)() ) static_cast<TColStd_Array2OfCharacter & (TColStd_HArray2OfCharacter::*)() >(&TColStd_HArray2OfCharacter::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColStd_HArray2OfCharacter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColStd_HArray2OfCharacter::*)() const>(&TColStd_HArray2OfCharacter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColStd_HArray2OfCharacter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColStd_HArray2OfCharacter::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColStd_HArray2OfInteger ,opencascade::handle<TColStd_HArray2OfInteger> , TColStd_Array2OfInteger, Standard_Transient>>(m.attr("TColStd_HArray2OfInteger"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const TColStd_Array2OfInteger::value_type & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<Standard_Integer> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const TColStd_Array2OfInteger & (TColStd_HArray2OfInteger::*)() const) static_cast<const TColStd_Array2OfInteger & (TColStd_HArray2OfInteger::*)() const>(&TColStd_HArray2OfInteger::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (TColStd_Array2OfInteger & (TColStd_HArray2OfInteger::*)() ) static_cast<TColStd_Array2OfInteger & (TColStd_HArray2OfInteger::*)() >(&TColStd_HArray2OfInteger::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColStd_HArray2OfInteger::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColStd_HArray2OfInteger::*)() const>(&TColStd_HArray2OfInteger::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColStd_HArray2OfInteger::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColStd_HArray2OfInteger::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColStd_HArray2OfReal ,opencascade::handle<TColStd_HArray2OfReal> , TColStd_Array2OfReal, Standard_Transient>>(m.attr("TColStd_HArray2OfReal"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const TColStd_Array2OfReal::value_type & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<Standard_Real> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const TColStd_Array2OfReal & (TColStd_HArray2OfReal::*)() const) static_cast<const TColStd_Array2OfReal & (TColStd_HArray2OfReal::*)() const>(&TColStd_HArray2OfReal::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (TColStd_Array2OfReal & (TColStd_HArray2OfReal::*)() ) static_cast<TColStd_Array2OfReal & (TColStd_HArray2OfReal::*)() >(&TColStd_HArray2OfReal::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColStd_HArray2OfReal::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColStd_HArray2OfReal::*)() const>(&TColStd_HArray2OfReal::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColStd_HArray2OfReal::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColStd_HArray2OfReal::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColStd_HArray2OfTransient ,opencascade::handle<TColStd_HArray2OfTransient> , TColStd_Array2OfTransient, Standard_Transient>>(m.attr("TColStd_HArray2OfTransient"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const opencascade::handle<Standard_Transient> & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<opencascade::handle<Standard_Transient> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const TColStd_Array2OfTransient & (TColStd_HArray2OfTransient::*)() const) static_cast<const TColStd_Array2OfTransient & (TColStd_HArray2OfTransient::*)() const>(&TColStd_HArray2OfTransient::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (TColStd_Array2OfTransient & (TColStd_HArray2OfTransient::*)() ) static_cast<TColStd_Array2OfTransient & (TColStd_HArray2OfTransient::*)() >(&TColStd_HArray2OfTransient::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColStd_HArray2OfTransient::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColStd_HArray2OfTransient::*)() const>(&TColStd_HArray2OfTransient::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColStd_HArray2OfTransient::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColStd_HArray2OfTransient::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColStd_HPackedMapOfInteger ,opencascade::handle<TColStd_HPackedMapOfInteger> , Standard_Transient>>(m.attr("TColStd_HPackedMapOfInteger"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("NbBuckets")=static_cast<const Standard_Integer>(1) )
        .def(py::init< const TColStd_PackedMapOfInteger & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Map",
             (const TColStd_PackedMapOfInteger & (TColStd_HPackedMapOfInteger::*)() const) static_cast<const TColStd_PackedMapOfInteger & (TColStd_HPackedMapOfInteger::*)() const>(&TColStd_HPackedMapOfInteger::Map),
             R"#(Access to the map)#" )
        .def("ChangeMap",
             (TColStd_PackedMapOfInteger & (TColStd_HPackedMapOfInteger::*)() ) static_cast<TColStd_PackedMapOfInteger & (TColStd_HPackedMapOfInteger::*)() >(&TColStd_HPackedMapOfInteger::ChangeMap),
             R"#(Access to the map for modification)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColStd_HPackedMapOfInteger::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColStd_HPackedMapOfInteger::*)() const>(&TColStd_HPackedMapOfInteger::DynamicType),
             R"#(None)#" )
        .def("Map",
             (const TColStd_PackedMapOfInteger & (TColStd_HPackedMapOfInteger::*)() const) static_cast<const TColStd_PackedMapOfInteger & (TColStd_HPackedMapOfInteger::*)() const>(&TColStd_HPackedMapOfInteger::Map),
             R"#(Access to the map)#" )
        .def("ChangeMap",
             (TColStd_PackedMapOfInteger & (TColStd_HPackedMapOfInteger::*)() ) static_cast<TColStd_PackedMapOfInteger & (TColStd_HPackedMapOfInteger::*)() >(&TColStd_HPackedMapOfInteger::ChangeMap),
             R"#(Access to the map for modification)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColStd_HPackedMapOfInteger::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColStd_HPackedMapOfInteger::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColStd_HSequenceOfAsciiString ,opencascade::handle<TColStd_HSequenceOfAsciiString> , TColStd_SequenceOfAsciiString, Standard_Transient>>(m.attr("TColStd_HSequenceOfAsciiString"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<TCollection_AsciiString> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const TColStd_SequenceOfAsciiString & (TColStd_HSequenceOfAsciiString::*)() const) static_cast<const TColStd_SequenceOfAsciiString & (TColStd_HSequenceOfAsciiString::*)() const>(&TColStd_HSequenceOfAsciiString::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TColStd_HSequenceOfAsciiString::*)(  const TCollection_AsciiString & ) ) static_cast<void (TColStd_HSequenceOfAsciiString::*)(  const TCollection_AsciiString & ) >(&TColStd_HSequenceOfAsciiString::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TColStd_HSequenceOfAsciiString::*)( NCollection_Sequence<TCollection_AsciiString> & ) ) static_cast<void (TColStd_HSequenceOfAsciiString::*)( NCollection_Sequence<TCollection_AsciiString> & ) >(&TColStd_HSequenceOfAsciiString::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TColStd_SequenceOfAsciiString & (TColStd_HSequenceOfAsciiString::*)() ) static_cast<TColStd_SequenceOfAsciiString & (TColStd_HSequenceOfAsciiString::*)() >(&TColStd_HSequenceOfAsciiString::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColStd_HSequenceOfAsciiString::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColStd_HSequenceOfAsciiString::*)() const>(&TColStd_HSequenceOfAsciiString::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColStd_HSequenceOfAsciiString::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColStd_HSequenceOfAsciiString::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColStd_HSequenceOfExtendedString ,opencascade::handle<TColStd_HSequenceOfExtendedString> , TColStd_SequenceOfExtendedString, Standard_Transient>>(m.attr("TColStd_HSequenceOfExtendedString"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<TCollection_ExtendedString> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const TColStd_SequenceOfExtendedString & (TColStd_HSequenceOfExtendedString::*)() const) static_cast<const TColStd_SequenceOfExtendedString & (TColStd_HSequenceOfExtendedString::*)() const>(&TColStd_HSequenceOfExtendedString::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TColStd_HSequenceOfExtendedString::*)(  const TCollection_ExtendedString & ) ) static_cast<void (TColStd_HSequenceOfExtendedString::*)(  const TCollection_ExtendedString & ) >(&TColStd_HSequenceOfExtendedString::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TColStd_HSequenceOfExtendedString::*)( NCollection_Sequence<TCollection_ExtendedString> & ) ) static_cast<void (TColStd_HSequenceOfExtendedString::*)( NCollection_Sequence<TCollection_ExtendedString> & ) >(&TColStd_HSequenceOfExtendedString::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TColStd_SequenceOfExtendedString & (TColStd_HSequenceOfExtendedString::*)() ) static_cast<TColStd_SequenceOfExtendedString & (TColStd_HSequenceOfExtendedString::*)() >(&TColStd_HSequenceOfExtendedString::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColStd_HSequenceOfExtendedString::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColStd_HSequenceOfExtendedString::*)() const>(&TColStd_HSequenceOfExtendedString::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColStd_HSequenceOfExtendedString::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColStd_HSequenceOfExtendedString::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColStd_HSequenceOfHAsciiString ,opencascade::handle<TColStd_HSequenceOfHAsciiString> , TColStd_SequenceOfHAsciiString, Standard_Transient>>(m.attr("TColStd_HSequenceOfHAsciiString"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<TCollection_HAsciiString> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const TColStd_SequenceOfHAsciiString & (TColStd_HSequenceOfHAsciiString::*)() const) static_cast<const TColStd_SequenceOfHAsciiString & (TColStd_HSequenceOfHAsciiString::*)() const>(&TColStd_HSequenceOfHAsciiString::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TColStd_HSequenceOfHAsciiString::*)(  const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (TColStd_HSequenceOfHAsciiString::*)(  const opencascade::handle<TCollection_HAsciiString> & ) >(&TColStd_HSequenceOfHAsciiString::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TColStd_HSequenceOfHAsciiString::*)( NCollection_Sequence<opencascade::handle<TCollection_HAsciiString> > & ) ) static_cast<void (TColStd_HSequenceOfHAsciiString::*)( NCollection_Sequence<opencascade::handle<TCollection_HAsciiString> > & ) >(&TColStd_HSequenceOfHAsciiString::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TColStd_SequenceOfHAsciiString & (TColStd_HSequenceOfHAsciiString::*)() ) static_cast<TColStd_SequenceOfHAsciiString & (TColStd_HSequenceOfHAsciiString::*)() >(&TColStd_HSequenceOfHAsciiString::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColStd_HSequenceOfHAsciiString::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColStd_HSequenceOfHAsciiString::*)() const>(&TColStd_HSequenceOfHAsciiString::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColStd_HSequenceOfHAsciiString::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColStd_HSequenceOfHAsciiString::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColStd_HSequenceOfHExtendedString ,opencascade::handle<TColStd_HSequenceOfHExtendedString> , TColStd_SequenceOfHExtendedString, Standard_Transient>>(m.attr("TColStd_HSequenceOfHExtendedString"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<TCollection_HExtendedString> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const TColStd_SequenceOfHExtendedString & (TColStd_HSequenceOfHExtendedString::*)() const) static_cast<const TColStd_SequenceOfHExtendedString & (TColStd_HSequenceOfHExtendedString::*)() const>(&TColStd_HSequenceOfHExtendedString::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TColStd_HSequenceOfHExtendedString::*)(  const opencascade::handle<TCollection_HExtendedString> & ) ) static_cast<void (TColStd_HSequenceOfHExtendedString::*)(  const opencascade::handle<TCollection_HExtendedString> & ) >(&TColStd_HSequenceOfHExtendedString::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TColStd_HSequenceOfHExtendedString::*)( NCollection_Sequence<opencascade::handle<TCollection_HExtendedString> > & ) ) static_cast<void (TColStd_HSequenceOfHExtendedString::*)( NCollection_Sequence<opencascade::handle<TCollection_HExtendedString> > & ) >(&TColStd_HSequenceOfHExtendedString::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TColStd_SequenceOfHExtendedString & (TColStd_HSequenceOfHExtendedString::*)() ) static_cast<TColStd_SequenceOfHExtendedString & (TColStd_HSequenceOfHExtendedString::*)() >(&TColStd_HSequenceOfHExtendedString::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColStd_HSequenceOfHExtendedString::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColStd_HSequenceOfHExtendedString::*)() const>(&TColStd_HSequenceOfHExtendedString::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColStd_HSequenceOfHExtendedString::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColStd_HSequenceOfHExtendedString::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColStd_HSequenceOfInteger ,opencascade::handle<TColStd_HSequenceOfInteger> , TColStd_SequenceOfInteger, Standard_Transient>>(m.attr("TColStd_HSequenceOfInteger"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<Standard_Integer> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const TColStd_SequenceOfInteger & (TColStd_HSequenceOfInteger::*)() const) static_cast<const TColStd_SequenceOfInteger & (TColStd_HSequenceOfInteger::*)() const>(&TColStd_HSequenceOfInteger::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TColStd_HSequenceOfInteger::*)( const TColStd_SequenceOfInteger::value_type & ) ) static_cast<void (TColStd_HSequenceOfInteger::*)( const TColStd_SequenceOfInteger::value_type & ) >(&TColStd_HSequenceOfInteger::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TColStd_HSequenceOfInteger::*)( NCollection_Sequence<Standard_Integer> & ) ) static_cast<void (TColStd_HSequenceOfInteger::*)( NCollection_Sequence<Standard_Integer> & ) >(&TColStd_HSequenceOfInteger::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TColStd_SequenceOfInteger & (TColStd_HSequenceOfInteger::*)() ) static_cast<TColStd_SequenceOfInteger & (TColStd_HSequenceOfInteger::*)() >(&TColStd_HSequenceOfInteger::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColStd_HSequenceOfInteger::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColStd_HSequenceOfInteger::*)() const>(&TColStd_HSequenceOfInteger::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColStd_HSequenceOfInteger::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColStd_HSequenceOfInteger::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColStd_HSequenceOfReal ,opencascade::handle<TColStd_HSequenceOfReal> , TColStd_SequenceOfReal, Standard_Transient>>(m.attr("TColStd_HSequenceOfReal"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<Standard_Real> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const TColStd_SequenceOfReal & (TColStd_HSequenceOfReal::*)() const) static_cast<const TColStd_SequenceOfReal & (TColStd_HSequenceOfReal::*)() const>(&TColStd_HSequenceOfReal::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TColStd_HSequenceOfReal::*)( const TColStd_SequenceOfReal::value_type & ) ) static_cast<void (TColStd_HSequenceOfReal::*)( const TColStd_SequenceOfReal::value_type & ) >(&TColStd_HSequenceOfReal::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TColStd_HSequenceOfReal::*)( NCollection_Sequence<Standard_Real> & ) ) static_cast<void (TColStd_HSequenceOfReal::*)( NCollection_Sequence<Standard_Real> & ) >(&TColStd_HSequenceOfReal::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TColStd_SequenceOfReal & (TColStd_HSequenceOfReal::*)() ) static_cast<TColStd_SequenceOfReal & (TColStd_HSequenceOfReal::*)() >(&TColStd_HSequenceOfReal::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColStd_HSequenceOfReal::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColStd_HSequenceOfReal::*)() const>(&TColStd_HSequenceOfReal::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColStd_HSequenceOfReal::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColStd_HSequenceOfReal::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColStd_HSequenceOfTransient ,opencascade::handle<TColStd_HSequenceOfTransient> , TColStd_SequenceOfTransient, Standard_Transient>>(m.attr("TColStd_HSequenceOfTransient"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<Standard_Transient> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const TColStd_SequenceOfTransient & (TColStd_HSequenceOfTransient::*)() const) static_cast<const TColStd_SequenceOfTransient & (TColStd_HSequenceOfTransient::*)() const>(&TColStd_HSequenceOfTransient::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (TColStd_HSequenceOfTransient::*)(  const opencascade::handle<Standard_Transient> & ) ) static_cast<void (TColStd_HSequenceOfTransient::*)(  const opencascade::handle<Standard_Transient> & ) >(&TColStd_HSequenceOfTransient::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (TColStd_HSequenceOfTransient::*)( NCollection_Sequence<opencascade::handle<Standard_Transient> > & ) ) static_cast<void (TColStd_HSequenceOfTransient::*)( NCollection_Sequence<opencascade::handle<Standard_Transient> > & ) >(&TColStd_HSequenceOfTransient::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (TColStd_SequenceOfTransient & (TColStd_HSequenceOfTransient::*)() ) static_cast<TColStd_SequenceOfTransient & (TColStd_HSequenceOfTransient::*)() >(&TColStd_HSequenceOfTransient::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TColStd_HSequenceOfTransient::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TColStd_HSequenceOfTransient::*)() const>(&TColStd_HSequenceOfTransient::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TColStd_HSequenceOfTransient::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TColStd_HSequenceOfTransient::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TColStd_PackedMapOfInteger , shared_ptr<TColStd_PackedMapOfInteger> >>(m.attr("TColStd_PackedMapOfInteger"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("NbBuckets")=static_cast<const Standard_Integer>(1) )
        .def(py::init< const TColStd_PackedMapOfInteger & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Assign",
             (TColStd_PackedMapOfInteger & (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & ) ) static_cast<TColStd_PackedMapOfInteger & (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & ) >(&TColStd_PackedMapOfInteger::Assign),
             R"#(None)#"  , py::arg(""))
        .def("ReSize",
             (void (TColStd_PackedMapOfInteger::*)( const Standard_Integer ) ) static_cast<void (TColStd_PackedMapOfInteger::*)( const Standard_Integer ) >(&TColStd_PackedMapOfInteger::ReSize),
             R"#(None)#"  , py::arg("NbBuckets"))
        .def("Clear",
             (void (TColStd_PackedMapOfInteger::*)() ) static_cast<void (TColStd_PackedMapOfInteger::*)() >(&TColStd_PackedMapOfInteger::Clear),
             R"#(None)#" )
        .def("Add",
             (Standard_Boolean (TColStd_PackedMapOfInteger::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (TColStd_PackedMapOfInteger::*)( const Standard_Integer ) >(&TColStd_PackedMapOfInteger::Add),
             R"#(None)#"  , py::arg("aKey"))
        .def("Contains",
             (Standard_Boolean (TColStd_PackedMapOfInteger::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (TColStd_PackedMapOfInteger::*)( const Standard_Integer ) const>(&TColStd_PackedMapOfInteger::Contains),
             R"#(None)#"  , py::arg("aKey"))
        .def("Remove",
             (Standard_Boolean (TColStd_PackedMapOfInteger::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (TColStd_PackedMapOfInteger::*)( const Standard_Integer ) >(&TColStd_PackedMapOfInteger::Remove),
             R"#(None)#"  , py::arg("aKey"))
        .def("NbBuckets",
             (Standard_Integer (TColStd_PackedMapOfInteger::*)() const) static_cast<Standard_Integer (TColStd_PackedMapOfInteger::*)() const>(&TColStd_PackedMapOfInteger::NbBuckets),
             R"#(None)#" )
        .def("Extent",
             (Standard_Integer (TColStd_PackedMapOfInteger::*)() const) static_cast<Standard_Integer (TColStd_PackedMapOfInteger::*)() const>(&TColStd_PackedMapOfInteger::Extent),
             R"#(None)#" )
        .def("IsEmpty",
             (Standard_Boolean (TColStd_PackedMapOfInteger::*)() const) static_cast<Standard_Boolean (TColStd_PackedMapOfInteger::*)() const>(&TColStd_PackedMapOfInteger::IsEmpty),
             R"#(None)#" )
        .def("Statistics",
             (void (TColStd_PackedMapOfInteger::*)( std::ostream & ) const) static_cast<void (TColStd_PackedMapOfInteger::*)( std::ostream & ) const>(&TColStd_PackedMapOfInteger::Statistics),
             R"#(None)#"  , py::arg("outStream"))
        .def("GetMinimalMapped",
             (Standard_Integer (TColStd_PackedMapOfInteger::*)() const) static_cast<Standard_Integer (TColStd_PackedMapOfInteger::*)() const>(&TColStd_PackedMapOfInteger::GetMinimalMapped),
             R"#(Query the minimal contained key value.)#" )
        .def("GetMaximalMapped",
             (Standard_Integer (TColStd_PackedMapOfInteger::*)() const) static_cast<Standard_Integer (TColStd_PackedMapOfInteger::*)() const>(&TColStd_PackedMapOfInteger::GetMaximalMapped),
             R"#(Query the maximal contained key value.)#" )
        .def("Union",
             (void (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & , const TColStd_PackedMapOfInteger & ) ) static_cast<void (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & , const TColStd_PackedMapOfInteger & ) >(&TColStd_PackedMapOfInteger::Union),
             R"#(Sets this Map to be the result of union (aka addition, fuse, merge, boolean OR) operation between two given Maps. The new Map contains the values that are contained either in the first map or in the second map or in both. All previous contents of this Map is cleared. This map (result of the boolean operation) can also be passed as one of operands.)#"  , py::arg(""),  py::arg(""))
        .def("Unite",
             (Standard_Boolean (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & ) ) static_cast<Standard_Boolean (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & ) >(&TColStd_PackedMapOfInteger::Unite),
             R"#(Apply to this Map the boolean operation union (aka addition, fuse, merge, boolean OR) with another (given) Map. The result contains the values that were previously contained in this map or contained in the given (operand) map. This algorithm is similar to method Union().)#"  , py::arg(""))
        .def("Intersection",
             (void (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & , const TColStd_PackedMapOfInteger & ) ) static_cast<void (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & , const TColStd_PackedMapOfInteger & ) >(&TColStd_PackedMapOfInteger::Intersection),
             R"#(Sets this Map to be the result of intersection (aka multiplication, common, boolean AND) operation between two given Maps. The new Map contains only the values that are contained in both map operands. All previous contents of this Map is cleared. This same map (result of the boolean operation) can also be used as one of operands. The order of operands makes no difference; the method minimizes internally the number of iterations using the smallest map for the loop.)#"  , py::arg(""),  py::arg(""))
        .def("Intersect",
             (Standard_Boolean (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & ) ) static_cast<Standard_Boolean (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & ) >(&TColStd_PackedMapOfInteger::Intersect),
             R"#(Apply to this Map the intersection operation (aka multiplication, common, boolean AND) with another (given) Map. The result contains only the values that are contained in both this and the given maps. This algorithm is similar to method Intersection().)#"  , py::arg(""))
        .def("Subtraction",
             (void (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & , const TColStd_PackedMapOfInteger & ) ) static_cast<void (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & , const TColStd_PackedMapOfInteger & ) >(&TColStd_PackedMapOfInteger::Subtraction),
             R"#(Sets this Map to be the result of subtraction (aka set-theoretic difference, relative complement, exclude, cut, boolean NOT) operation between two given Maps. The new Map contains only the values that are contained in the first map operands and not contained in the second one. All previous contents of this Map is cleared. This map (result of the boolean operation) can also be used as the first operand.)#"  , py::arg(""),  py::arg(""))
        .def("Subtract",
             (Standard_Boolean (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & ) ) static_cast<Standard_Boolean (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & ) >(&TColStd_PackedMapOfInteger::Subtract),
             R"#(Apply to this Map the subtraction (aka set-theoretic difference, relative complement, exclude, cut, boolean NOT) operation with another (given) Map. The result contains only the values that were previously contained in this map and not contained in this map. This algorithm is similar to method Subtract() with two operands.)#"  , py::arg(""))
        .def("Difference",
             (void (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & , const TColStd_PackedMapOfInteger & ) ) static_cast<void (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & , const TColStd_PackedMapOfInteger & ) >(&TColStd_PackedMapOfInteger::Difference),
             R"#(Sets this Map to be the result of symmetric difference (aka exclusive disjunction, boolean XOR) operation between two given Maps. The new Map contains the values that are contained only in the first or the second operand maps but not in both. All previous contents of this Map is cleared. This map (result of the boolean operation) can also be used as one of operands.)#"  , py::arg(""),  py::arg(""))
        .def("Differ",
             (Standard_Boolean (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & ) ) static_cast<Standard_Boolean (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & ) >(&TColStd_PackedMapOfInteger::Differ),
             R"#(Apply to this Map the symmetric difference (aka exclusive disjunction, boolean XOR) operation with another (given) Map. The result contains the values that are contained only in this or the operand map, but not in both. This algorithm is similar to method Difference().)#"  , py::arg(""))
        .def("IsEqual",
             (Standard_Boolean (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & ) const) static_cast<Standard_Boolean (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & ) const>(&TColStd_PackedMapOfInteger::IsEqual),
             R"#(Returns True if this map is equal to the given one, i.e. they contain the same sets of elements)#"  , py::arg(""))
        .def("IsSubset",
             (Standard_Boolean (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & ) const) static_cast<Standard_Boolean (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & ) const>(&TColStd_PackedMapOfInteger::IsSubset),
             R"#(Returns True if this map is subset of the given one, i.e. all elements contained in this map is contained also in the operand map. if this map is empty that this method returns true for any operand map.)#"  , py::arg(""))
        .def("HasIntersection",
             (Standard_Boolean (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & ) const) static_cast<Standard_Boolean (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & ) const>(&TColStd_PackedMapOfInteger::HasIntersection),
             R"#(Returns True if this map has common items with the given one.)#"  , py::arg(""))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
        .def("__isub__",
             (TColStd_PackedMapOfInteger & (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & ) ) static_cast<TColStd_PackedMapOfInteger & (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & ) >(&TColStd_PackedMapOfInteger::operator-=),
             py::is_operator(),
             R"#(Overloaded operator version of Subtract().)#"  , py::arg("MM"))
        .def("__ipow__",
             (TColStd_PackedMapOfInteger & (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & ) ) static_cast<TColStd_PackedMapOfInteger & (TColStd_PackedMapOfInteger::*)( const TColStd_PackedMapOfInteger & ) >(&TColStd_PackedMapOfInteger::operator^=),
             py::is_operator(),
             R"#(Overloaded operator version of Differ().)#"  , py::arg("MM"))
    // additional methods and static methods
;

// functions
// ./opencascade\TColStd_HArray2OfInteger.hxx
// ./opencascade\TColStd_DataMapOfIntegerInteger.hxx
// ./opencascade\TColStd_ListOfAsciiString.hxx
// ./opencascade\TColStd_ListOfInteger.hxx
// ./opencascade\TColStd_SequenceOfExtendedString.hxx
// ./opencascade\TColStd_DataMapOfStringInteger.hxx
// ./opencascade\TColStd_Array1OfAsciiString.hxx
// ./opencascade\TColStd_Array2OfTransient.hxx
// ./opencascade\TColStd_Array1OfByte.hxx
// ./opencascade\TColStd_HArray2OfReal.hxx
// ./opencascade\TColStd_MapOfAsciiString.hxx
// ./opencascade\TColStd_Array2OfCharacter.hxx
// ./opencascade\TColStd_HSequenceOfHAsciiString.hxx
// ./opencascade\TColStd_SequenceOfAddress.hxx
// ./opencascade\TColStd_ListIteratorOfListOfInteger.hxx
// ./opencascade\TColStd_HArray2OfBoolean.hxx
// ./opencascade\TColStd_Array1OfListOfInteger.hxx
// ./opencascade\TColStd_MapIteratorOfMapOfAsciiString.hxx
// ./opencascade\TColStd_HSequenceOfTransient.hxx
// ./opencascade\TColStd_MapIteratorOfMapOfReal.hxx
// ./opencascade\TColStd_IndexedDataMapOfStringString.hxx
// ./opencascade\TColStd_HArray1OfByte.hxx
// ./opencascade\TColStd_IndexedMapOfReal.hxx
// ./opencascade\TColStd_HSequenceOfInteger.hxx
// ./opencascade\TColStd_HArray1OfTransient.hxx
// ./opencascade\TColStd_HArray1OfInteger.hxx
// ./opencascade\TColStd_MapTransientHasher.hxx
// ./opencascade\TColStd_MapIteratorOfPackedMapOfInteger.hxx
// ./opencascade\TColStd_SequenceOfBoolean.hxx
// ./opencascade\TColStd_MapIntegerHasher.hxx
// ./opencascade\TColStd_SequenceOfAsciiString.hxx
// ./opencascade\TColStd_DataMapIteratorOfDataMapOfTransientTransient.hxx
// ./opencascade\TColStd_MapIteratorOfMapOfTransient.hxx
// ./opencascade\TColStd_HArray1OfExtendedString.hxx
// ./opencascade\TColStd_HSequenceOfExtendedString.hxx
// ./opencascade\TColStd_HArray2OfTransient.hxx
// ./opencascade\TColStd_HArray1OfBoolean.hxx
// ./opencascade\TColStd_MapOfInteger.hxx
// ./opencascade\TColStd_DataMapOfIntegerListOfInteger.hxx
// ./opencascade\TColStd_SequenceOfInteger.hxx
// ./opencascade\TColStd_Array1OfCharacter.hxx
// ./opencascade\TColStd_Array2OfBoolean.hxx
// ./opencascade\TColStd_DataMapOfTransientTransient.hxx
// ./opencascade\TColStd_ListIteratorOfListOfAsciiString.hxx
// ./opencascade\TColStd_MapIteratorOfMapOfInteger.hxx
// ./opencascade\TColStd_Array1OfBoolean.hxx
// ./opencascade\TColStd_ListIteratorOfListOfReal.hxx
// ./opencascade\TColStd_ListOfTransient.hxx
// ./opencascade\TColStd_SequenceOfTransient.hxx
// ./opencascade\TColStd_Array1OfReal.hxx
// ./opencascade\TColStd_ListIteratorOfListOfTransient.hxx
// ./opencascade\TColStd_DataMapIteratorOfDataMapOfIntegerTransient.hxx
// ./opencascade\TColStd_DataMapIteratorOfDataMapOfIntegerInteger.hxx
// ./opencascade\TColStd_DataMapOfIntegerTransient.hxx
// ./opencascade\TColStd_HArray2OfCharacter.hxx
// ./opencascade\TColStd_Array1OfInteger.hxx
// ./opencascade\TColStd_Array1OfExtendedString.hxx
// ./opencascade\TColStd_DataMapOfAsciiStringInteger.hxx
// ./opencascade\TColStd_PackedMapOfInteger.hxx
// ./opencascade\TColStd_HArray1OfCharacter.hxx
// ./opencascade\TColStd_HPackedMapOfInteger.hxx
// ./opencascade\TColStd_HSequenceOfHExtendedString.hxx
// ./opencascade\TColStd_IndexedMapOfTransient.hxx
// ./opencascade\TColStd_MapOfReal.hxx
// ./opencascade\TColStd_IndexedMapOfInteger.hxx
// ./opencascade\TColStd_MapOfTransient.hxx
// ./opencascade\TColStd_MapRealHasher.hxx
// ./opencascade\TColStd_DataMapIteratorOfDataMapOfIntegerListOfInteger.hxx
// ./opencascade\TColStd_DataMapIteratorOfDataMapOfStringInteger.hxx
// ./opencascade\TColStd_HSequenceOfAsciiString.hxx
// ./opencascade\TColStd_Array2OfInteger.hxx
// ./opencascade\TColStd_DataMapOfIntegerReal.hxx
// ./opencascade\TColStd_HArray1OfListOfInteger.hxx
// ./opencascade\TColStd_ListOfReal.hxx
// ./opencascade\TColStd_DataMapIteratorOfDataMapOfIntegerReal.hxx
// ./opencascade\TColStd_DataMapIteratorOfDataMapOfAsciiStringInteger.hxx
// ./opencascade\TColStd_HArray1OfAsciiString.hxx
// ./opencascade\TColStd_Array2OfReal.hxx
// ./opencascade\TColStd_SequenceOfHExtendedString.hxx
// ./opencascade\TColStd_IndexedDataMapOfTransientTransient.hxx
// ./opencascade\TColStd_HSequenceOfReal.hxx
// ./opencascade\TColStd_HArray1OfReal.hxx
// ./opencascade\TColStd_Array1OfTransient.hxx
// ./opencascade\TColStd_SequenceOfReal.hxx
// ./opencascade\TColStd_SequenceOfHAsciiString.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_DataMap<Standard_Integer, Standard_Integer, TColStd_MapIntegerHasher>(m,"TColStd_DataMapOfIntegerInteger");
    register_template_NCollection_List<TCollection_AsciiString>(m,"TColStd_ListOfAsciiString");
    register_template_NCollection_List<Standard_Integer>(m,"TColStd_ListOfInteger");
    register_template_NCollection_Sequence<TCollection_ExtendedString>(m,"TColStd_SequenceOfExtendedString");
    register_template_NCollection_DataMap<TCollection_ExtendedString, Standard_Integer, TCollection_ExtendedString>(m,"TColStd_DataMapOfStringInteger");
    register_template_NCollection_Array1<TCollection_AsciiString>(m,"TColStd_Array1OfAsciiString");
    register_template_NCollection_Array2<opencascade::handle<Standard_Transient> >(m,"TColStd_Array2OfTransient");
    register_template_NCollection_Array1<Standard_Byte>(m,"TColStd_Array1OfByte");
    register_template_NCollection_Map<TCollection_AsciiString, TCollection_AsciiString>(m,"TColStd_MapOfAsciiString");
    register_template_NCollection_Array2<Standard_Character>(m,"TColStd_Array2OfCharacter");
    register_template_NCollection_Sequence<Standard_Address>(m,"TColStd_SequenceOfAddress");
    register_template_NCollection_Array1<TColStd_ListOfInteger>(m,"TColStd_Array1OfListOfInteger");
    register_template_NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString>(m,"TColStd_IndexedDataMapOfStringString");
    register_template_NCollection_IndexedMap<Standard_Real, TColStd_MapRealHasher>(m,"TColStd_IndexedMapOfReal");
    register_template_NCollection_DefaultHasher<opencascade::handle<Standard_Transient> >(m,"TColStd_MapTransientHasher");
    register_template_NCollection_Sequence<Standard_Boolean>(m,"TColStd_SequenceOfBoolean");
    register_template_NCollection_DefaultHasher<Standard_Integer>(m,"TColStd_MapIntegerHasher");
    register_template_NCollection_Sequence<TCollection_AsciiString>(m,"TColStd_SequenceOfAsciiString");
    register_template_NCollection_Map<Standard_Integer, TColStd_MapIntegerHasher>(m,"TColStd_MapOfInteger");
    register_template_NCollection_DataMap<Standard_Integer, TColStd_ListOfInteger, TColStd_MapIntegerHasher>(m,"TColStd_DataMapOfIntegerListOfInteger");
    register_template_NCollection_Sequence<Standard_Integer>(m,"TColStd_SequenceOfInteger");
    register_template_NCollection_Array1<Standard_Character>(m,"TColStd_Array1OfCharacter");
    register_template_NCollection_Array2<Standard_Boolean>(m,"TColStd_Array2OfBoolean");
    register_template_NCollection_Array1<Standard_Boolean>(m,"TColStd_Array1OfBoolean");
    register_template_NCollection_List<opencascade::handle<Standard_Transient> >(m,"TColStd_ListOfTransient");
    register_template_NCollection_Sequence<opencascade::handle<Standard_Transient> >(m,"TColStd_SequenceOfTransient");
    register_template_NCollection_Array1<Standard_Real>(m,"TColStd_Array1OfReal");
    register_template_NCollection_Array1<Standard_Integer>(m,"TColStd_Array1OfInteger");
    register_template_NCollection_Array1<TCollection_ExtendedString>(m,"TColStd_Array1OfExtendedString");
    register_template_NCollection_DataMap<TCollection_AsciiString, Standard_Integer, TCollection_AsciiString>(m,"TColStd_DataMapOfAsciiStringInteger");
    register_template_NCollection_IndexedMap<opencascade::handle<Standard_Transient>, TColStd_MapTransientHasher>(m,"TColStd_IndexedMapOfTransient");
    register_template_NCollection_Map<Standard_Real, TColStd_MapRealHasher>(m,"TColStd_MapOfReal");
    register_template_NCollection_IndexedMap<Standard_Integer, TColStd_MapIntegerHasher>(m,"TColStd_IndexedMapOfInteger");
    register_template_NCollection_Map<opencascade::handle<Standard_Transient>, TColStd_MapTransientHasher>(m,"TColStd_MapOfTransient");
    register_template_NCollection_DefaultHasher<Standard_Real>(m,"TColStd_MapRealHasher");
    register_template_NCollection_Array2<Standard_Integer>(m,"TColStd_Array2OfInteger");
    register_template_NCollection_DataMap<Standard_Integer, Standard_Real, TColStd_MapIntegerHasher>(m,"TColStd_DataMapOfIntegerReal");
    register_template_NCollection_List<Standard_Real>(m,"TColStd_ListOfReal");
    register_template_NCollection_Array2<Standard_Real>(m,"TColStd_Array2OfReal");
    register_template_NCollection_Sequence<opencascade::handle<TCollection_HExtendedString> >(m,"TColStd_SequenceOfHExtendedString");
    register_template_NCollection_Array1<opencascade::handle<Standard_Transient> >(m,"TColStd_Array1OfTransient");
    register_template_NCollection_Sequence<Standard_Real>(m,"TColStd_SequenceOfReal");
    register_template_NCollection_Sequence<opencascade::handle<TCollection_HAsciiString> >(m,"TColStd_SequenceOfHAsciiString");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

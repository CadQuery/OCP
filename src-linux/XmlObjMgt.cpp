
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <XmlObjMgt_Persistent.hxx>
#include <XmlObjMgt_GP.hxx>
#include <XmlObjMgt_Array1.hxx>
#include <gp_Trsf.hxx>
#include <gp_Mat.hxx>
#include <gp_XYZ.hxx>

// module includes
#include <XmlObjMgt.hxx>
#include <XmlObjMgt_Array1.hxx>
#include <XmlObjMgt_Document.hxx>
#include <XmlObjMgt_DOMString.hxx>
#include <XmlObjMgt_Element.hxx>
#include <XmlObjMgt_GP.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <XmlObjMgt_RRelocationTable.hxx>
#include <XmlObjMgt_SRelocationTable.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_XmlObjMgt(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("XmlObjMgt"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<XmlObjMgt , shared_ptr<XmlObjMgt>>(m,"XmlObjMgt");

    static_cast<py::class_<XmlObjMgt , shared_ptr<XmlObjMgt> >>(m.attr("XmlObjMgt"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("IdString_s",
                    (const XmlObjMgt_DOMString & (*)() ) static_cast<const XmlObjMgt_DOMString & (*)() >(&XmlObjMgt::IdString),
                    R"#(Define the name of XMLattribute 'ID' (to be used everywhere))#" )
        .def_static("SetExtendedString_s",
                    (Standard_Boolean (*)( LDOM_Element & , const TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (*)( LDOM_Element & , const TCollection_ExtendedString & ) >(&XmlObjMgt::SetExtendedString),
                    R"#(Add attribute <theElement extstring="theString" ...>)#"  , py::arg("theElement"),  py::arg("theString"))
        .def_static("GetExtendedString_s",
                    (Standard_Boolean (*)(  const LDOM_Element & , TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (*)(  const LDOM_Element & , TCollection_ExtendedString & ) >(&XmlObjMgt::GetExtendedString),
                    R"#(Get attribute <theElement extstring="theString" ...>)#"  , py::arg("theElement"),  py::arg("theString"))
        .def_static("GetStringValue_s",
                    (XmlObjMgt_DOMString (*)(  const LDOM_Element & ) ) static_cast<XmlObjMgt_DOMString (*)(  const LDOM_Element & ) >(&XmlObjMgt::GetStringValue),
                    R"#(Returns the first child text node)#"  , py::arg("theElement"))
        .def_static("SetStringValue_s",
                    (void (*)( LDOM_Element & ,  const LDOMString & , const Standard_Boolean ) ) static_cast<void (*)( LDOM_Element & ,  const LDOMString & , const Standard_Boolean ) >(&XmlObjMgt::SetStringValue),
                    R"#(Add theData as the last child text node to theElement isClearText(True) avoids analysis of the string and replacement of characters like '<' and '&' during XML file storage. Do NEVER set isClearText unless you have a hell of a reason)#"  , py::arg("theElement"),  py::arg("theData"),  py::arg("isClearText")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("GetTagEntryString_s",
                    (Standard_Boolean (*)(  const LDOMString & , TCollection_AsciiString & ) ) static_cast<Standard_Boolean (*)(  const LDOMString & , TCollection_AsciiString & ) >(&XmlObjMgt::GetTagEntryString),
                    R"#(Convert XPath expression (DOMString) into TagEntry string returns False on Error)#"  , py::arg("theTarget"),  py::arg("theTagEntry"))
        .def_static("SetTagEntryString_s",
                    (void (*)( LDOMString & , const TCollection_AsciiString & ) ) static_cast<void (*)( LDOMString & , const TCollection_AsciiString & ) >(&XmlObjMgt::SetTagEntryString),
                    R"#(Convert XPath expression (DOMString) into TagEntry string returns False on Error)#"  , py::arg("theSource"),  py::arg("theTagEntry"))
        .def_static("FindChildElement_s",
                    (XmlObjMgt_Element (*)(  const LDOM_Element & , const Standard_Integer ) ) static_cast<XmlObjMgt_Element (*)(  const LDOM_Element & , const Standard_Integer ) >(&XmlObjMgt::FindChildElement),
                    R"#(None)#"  , py::arg("theSource"),  py::arg("theObjId"))
        .def_static("FindChildByRef_s",
                    (XmlObjMgt_Element (*)(  const LDOM_Element & ,  const LDOMString & ) ) static_cast<XmlObjMgt_Element (*)(  const LDOM_Element & ,  const LDOMString & ) >(&XmlObjMgt::FindChildByRef),
                    R"#(None)#"  , py::arg("theSource"),  py::arg("theRefName"))
        .def_static("FindChildByName_s",
                    (XmlObjMgt_Element (*)(  const LDOM_Element & ,  const LDOMString & ) ) static_cast<XmlObjMgt_Element (*)(  const LDOM_Element & ,  const LDOMString & ) >(&XmlObjMgt::FindChildByName),
                    R"#(None)#"  , py::arg("theSource"),  py::arg("theName"))
        .def_static("GetReal_s",
                    (Standard_Boolean (*)(  const LDOMString & , Standard_Real & ) ) static_cast<Standard_Boolean (*)(  const LDOMString & , Standard_Real & ) >(&XmlObjMgt::GetReal),
                    R"#(None)#"  , py::arg("theString"),  py::arg("theValue"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlObjMgt_Array1 , shared_ptr<XmlObjMgt_Array1> >>(m.attr("XmlObjMgt_Array1"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("Low"),  py::arg("Up") )
        .def(py::init<  const LDOM_Element &, const LDOMString & >()  , py::arg("theParent"),  py::arg("theName") )
    // custom constructors
    // methods
        .def("CreateArrayElement",
             (void (XmlObjMgt_Array1::*)( LDOM_Element & ,  const LDOMString & ) ) static_cast<void (XmlObjMgt_Array1::*)( LDOM_Element & ,  const LDOMString & ) >(&XmlObjMgt_Array1::CreateArrayElement),
             R"#(Create DOM_Element representing the array, under 'theParent')#"  , py::arg("theParent"),  py::arg("theName"))
        .def("Element",
             (const XmlObjMgt_Element & (XmlObjMgt_Array1::*)() const) static_cast<const XmlObjMgt_Element & (XmlObjMgt_Array1::*)() const>(&XmlObjMgt_Array1::Element),
             R"#(Returns the DOM element of <me>.)#" )
        .def("Length",
             (Standard_Integer (XmlObjMgt_Array1::*)() const) static_cast<Standard_Integer (XmlObjMgt_Array1::*)() const>(&XmlObjMgt_Array1::Length),
             R"#(Returns the number of elements of <me>.)#" )
        .def("Lower",
             (Standard_Integer (XmlObjMgt_Array1::*)() const) static_cast<Standard_Integer (XmlObjMgt_Array1::*)() const>(&XmlObjMgt_Array1::Lower),
             R"#(Returns the lower bound.)#" )
        .def("Upper",
             (Standard_Integer (XmlObjMgt_Array1::*)() const) static_cast<Standard_Integer (XmlObjMgt_Array1::*)() const>(&XmlObjMgt_Array1::Upper),
             R"#(Returns the upper bound.)#" )
        .def("SetValue",
             (void (XmlObjMgt_Array1::*)( const Standard_Integer , LDOM_Element & ) ) static_cast<void (XmlObjMgt_Array1::*)( const Standard_Integer , LDOM_Element & ) >(&XmlObjMgt_Array1::SetValue),
             R"#(Set the <Index>th element of the array to <Value>.)#"  , py::arg("Index"),  py::arg("Value"))
        .def("Value",
             (XmlObjMgt_Element (XmlObjMgt_Array1::*)( const Standard_Integer ) const) static_cast<XmlObjMgt_Element (XmlObjMgt_Array1::*)( const Standard_Integer ) const>(&XmlObjMgt_Array1::Value),
             R"#(Returns the value of <Index>th element of the array.)#"  , py::arg("Index"))
        .def("Element",
             (const XmlObjMgt_Element & (XmlObjMgt_Array1::*)() const) static_cast<const XmlObjMgt_Element & (XmlObjMgt_Array1::*)() const>(&XmlObjMgt_Array1::Element),
             R"#(Returns the DOM element of <me>.)#" )
        .def("Length",
             (Standard_Integer (XmlObjMgt_Array1::*)() const) static_cast<Standard_Integer (XmlObjMgt_Array1::*)() const>(&XmlObjMgt_Array1::Length),
             R"#(Returns the number of elements of <me>.)#" )
        .def("Lower",
             (Standard_Integer (XmlObjMgt_Array1::*)() const) static_cast<Standard_Integer (XmlObjMgt_Array1::*)() const>(&XmlObjMgt_Array1::Lower),
             R"#(Returns the lower bound.)#" )
        .def("Upper",
             (Standard_Integer (XmlObjMgt_Array1::*)() const) static_cast<Standard_Integer (XmlObjMgt_Array1::*)() const>(&XmlObjMgt_Array1::Upper),
             R"#(Returns the upper bound.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<XmlObjMgt_GP , shared_ptr<XmlObjMgt_GP>>(m,"XmlObjMgt_GP");

    static_cast<py::class_<XmlObjMgt_GP , shared_ptr<XmlObjMgt_GP> >>(m.attr("XmlObjMgt_GP"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Translate_s",
                    (XmlObjMgt_DOMString (*)( const gp_Trsf & ) ) static_cast<XmlObjMgt_DOMString (*)( const gp_Trsf & ) >(&XmlObjMgt_GP::Translate),
                    R"#(None)#"  , py::arg("aTrsf"))
        .def_static("Translate_s",
                    (XmlObjMgt_DOMString (*)( const gp_Mat & ) ) static_cast<XmlObjMgt_DOMString (*)( const gp_Mat & ) >(&XmlObjMgt_GP::Translate),
                    R"#(None)#"  , py::arg("aMat"))
        .def_static("Translate_s",
                    (XmlObjMgt_DOMString (*)( const gp_XYZ & ) ) static_cast<XmlObjMgt_DOMString (*)( const gp_XYZ & ) >(&XmlObjMgt_GP::Translate),
                    R"#(None)#"  , py::arg("anXYZ"))
        .def_static("Translate_s",
                    (Standard_Boolean (*)(  const LDOMString & , gp_Trsf & ) ) static_cast<Standard_Boolean (*)(  const LDOMString & , gp_Trsf & ) >(&XmlObjMgt_GP::Translate),
                    R"#(None)#"  , py::arg("aStr"),  py::arg("T"))
        .def_static("Translate_s",
                    (Standard_Boolean (*)(  const LDOMString & , gp_Mat & ) ) static_cast<Standard_Boolean (*)(  const LDOMString & , gp_Mat & ) >(&XmlObjMgt_GP::Translate),
                    R"#(None)#"  , py::arg("aStr"),  py::arg("T"))
        .def_static("Translate_s",
                    (Standard_Boolean (*)(  const LDOMString & , gp_XYZ & ) ) static_cast<Standard_Boolean (*)(  const LDOMString & , gp_XYZ & ) >(&XmlObjMgt_GP::Translate),
                    R"#(None)#"  , py::arg("aStr"),  py::arg("T"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlObjMgt_Persistent , shared_ptr<XmlObjMgt_Persistent> >>(m.attr("XmlObjMgt_Persistent"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const LDOM_Element & >()  , py::arg("theElement") )
        .def(py::init<  const LDOM_Element &, const LDOMString & >()  , py::arg("theElement"),  py::arg("theRef") )
    // custom constructors
    // methods
        .def("CreateElement",
             (void (XmlObjMgt_Persistent::*)( LDOM_Element & ,  const LDOMString & , const Standard_Integer ) ) static_cast<void (XmlObjMgt_Persistent::*)( LDOM_Element & ,  const LDOMString & , const Standard_Integer ) >(&XmlObjMgt_Persistent::CreateElement),
             R"#(myElement := <theType id="theID"/>)#"  , py::arg("theParent"),  py::arg("theType"),  py::arg("theID"))
        .def("SetId",
             (void (XmlObjMgt_Persistent::*)( const Standard_Integer ) ) static_cast<void (XmlObjMgt_Persistent::*)( const Standard_Integer ) >(&XmlObjMgt_Persistent::SetId),
             R"#(None)#"  , py::arg("theId"))
        .def("Element",
             (const XmlObjMgt_Element & (XmlObjMgt_Persistent::*)() const) static_cast<const XmlObjMgt_Element & (XmlObjMgt_Persistent::*)() const>(&XmlObjMgt_Persistent::Element),
             R"#(return myElement)#" )
        .def("Element",
             (XmlObjMgt_Element & (XmlObjMgt_Persistent::*)() ) static_cast<XmlObjMgt_Element & (XmlObjMgt_Persistent::*)() >(&XmlObjMgt_Persistent::Element),
             R"#(return myElement)#" )
        .def("Id",
             (Standard_Integer (XmlObjMgt_Persistent::*)() const) static_cast<Standard_Integer (XmlObjMgt_Persistent::*)() const>(&XmlObjMgt_Persistent::Id),
             R"#(None)#" )
        .def("Element",
             (const XmlObjMgt_Element & (XmlObjMgt_Persistent::*)() const) static_cast<const XmlObjMgt_Element & (XmlObjMgt_Persistent::*)() const>(&XmlObjMgt_Persistent::Element),
             R"#(return myElement)#" )
        .def("Element",
             (XmlObjMgt_Element & (XmlObjMgt_Persistent::*)() ) static_cast<XmlObjMgt_Element & (XmlObjMgt_Persistent::*)() >(&XmlObjMgt_Persistent::Element),
             R"#(return myElement)#" )
        .def("Id",
             (Standard_Integer (XmlObjMgt_Persistent::*)() const) static_cast<Standard_Integer (XmlObjMgt_Persistent::*)() const>(&XmlObjMgt_Persistent::Id),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<XmlObjMgt_RRelocationTable , shared_ptr<XmlObjMgt_RRelocationTable>>(m,"XmlObjMgt_RRelocationTable");

    static_cast<py::class_<XmlObjMgt_RRelocationTable , shared_ptr<XmlObjMgt_RRelocationTable> >>(m.attr("XmlObjMgt_RRelocationTable"))
    // constructors
    // custom constructors
    // methods
        .def("GetHeaderData",
             (const opencascade::handle<Storage_HeaderData> & (XmlObjMgt_RRelocationTable::*)() const) static_cast<const opencascade::handle<Storage_HeaderData> & (XmlObjMgt_RRelocationTable::*)() const>(&XmlObjMgt_RRelocationTable::GetHeaderData),
             R"#(Returns a handle to the header data of the file that is begin read)#" )
        .def("SetHeaderData",
             (void (XmlObjMgt_RRelocationTable::*)( const opencascade::handle<Storage_HeaderData> & ) ) static_cast<void (XmlObjMgt_RRelocationTable::*)( const opencascade::handle<Storage_HeaderData> & ) >(&XmlObjMgt_RRelocationTable::SetHeaderData),
             R"#(Sets the storage header data.)#"  , py::arg("theHeaderData"))
        .def("Clear",
             (void (XmlObjMgt_RRelocationTable::*)( const Standard_Boolean ) ) static_cast<void (XmlObjMgt_RRelocationTable::*)( const Standard_Boolean ) >(&XmlObjMgt_RRelocationTable::Clear),
             R"#(None)#"  , py::arg("doReleaseMemory")=static_cast<const Standard_Boolean>(Standard_True))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<XmlObjMgt_SRelocationTable , shared_ptr<XmlObjMgt_SRelocationTable>>(m,"XmlObjMgt_SRelocationTable");

    static_cast<py::class_<XmlObjMgt_SRelocationTable , shared_ptr<XmlObjMgt_SRelocationTable> >>(m.attr("XmlObjMgt_SRelocationTable"))
    // constructors
    // custom constructors
    // methods
        .def("GetHeaderData",
             (const opencascade::handle<Storage_HeaderData> & (XmlObjMgt_SRelocationTable::*)() const) static_cast<const opencascade::handle<Storage_HeaderData> & (XmlObjMgt_SRelocationTable::*)() const>(&XmlObjMgt_SRelocationTable::GetHeaderData),
             R"#(Returns a handle to the header data of the file that is begin read)#" )
        .def("SetHeaderData",
             (void (XmlObjMgt_SRelocationTable::*)( const opencascade::handle<Storage_HeaderData> & ) ) static_cast<void (XmlObjMgt_SRelocationTable::*)( const opencascade::handle<Storage_HeaderData> & ) >(&XmlObjMgt_SRelocationTable::SetHeaderData),
             R"#(Sets the storage header data.)#"  , py::arg("theHeaderData"))
        .def("Clear",
             (void (XmlObjMgt_SRelocationTable::*)( const Standard_Boolean ) ) static_cast<void (XmlObjMgt_SRelocationTable::*)( const Standard_Boolean ) >(&XmlObjMgt_SRelocationTable::Clear),
             R"#(None)#"  , py::arg("doReleaseMemory")=static_cast<const Standard_Boolean>(Standard_True))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/XmlObjMgt_DOMString.hxx
// ./opencascade/XmlObjMgt_SRelocationTable.hxx
// ./opencascade/XmlObjMgt.hxx
// ./opencascade/XmlObjMgt_Persistent.hxx
// ./opencascade/XmlObjMgt_Element.hxx
// ./opencascade/XmlObjMgt_Array1.hxx
// ./opencascade/XmlObjMgt_Document.hxx
// ./opencascade/XmlObjMgt_GP.hxx
// ./opencascade/XmlObjMgt_RRelocationTable.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

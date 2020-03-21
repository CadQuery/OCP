
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Trsf.hxx>
#include <gp_Mat.hxx>
#include <gp_XYZ.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <XmlObjMgt_GP.hxx>
#include <XmlObjMgt_Array1.hxx>

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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlObjMgt_Array1 , shared_ptr<XmlObjMgt_Array1> >>(m.attr("XmlObjMgt_Array1"))
    // constructors
    // custom constructors
    // methods
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlObjMgt_Persistent , shared_ptr<XmlObjMgt_Persistent> >>(m.attr("XmlObjMgt_Persistent"))
    // constructors
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/XmlObjMgt_RRelocationTable.hxx
// ./opencascade/XmlObjMgt_Array1.hxx
// ./opencascade/XmlObjMgt_GP.hxx
// ./opencascade/XmlObjMgt_Persistent.hxx
// ./opencascade/XmlObjMgt_Element.hxx
// ./opencascade/XmlObjMgt_DOMString.hxx
// ./opencascade/XmlObjMgt.hxx
// ./opencascade/XmlObjMgt_Document.hxx
// ./opencascade/XmlObjMgt_SRelocationTable.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

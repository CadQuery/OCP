
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_NoMoreObject.hxx>
#include <TopoDS_Iterator.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <TopExp_Explorer.hxx>

// module includes
#include <TopExp.hxx>
#include <TopExp_Explorer.hxx>
#include <TopExp_Stack.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopExp(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TopExp"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<TopExp , shared_ptr<TopExp>>(m,"TopExp");

    static_cast<py::class_<TopExp , shared_ptr<TopExp> >>(m.attr("TopExp"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopExp_Explorer , shared_ptr<TopExp_Explorer> >>(m.attr("TopExp_Explorer"))
    // constructors
    // custom constructors
    // methods
        .def("More",
             (Standard_Boolean (TopExp_Explorer::*)() const) static_cast<Standard_Boolean (TopExp_Explorer::*)() const>(&TopExp_Explorer::More),
             R"#(Returns True if there are more shapes in the exploration.)#" )
        .def("Value",
             (const TopoDS_Shape & (TopExp_Explorer::*)() const) static_cast<const TopoDS_Shape & (TopExp_Explorer::*)() const>(&TopExp_Explorer::Value),
             R"#(Returns the current shape in the exploration. Exceptions Standard_NoSuchObject if this explorer has no more shapes to explore.)#" )
        .def("Depth",
             (Standard_Integer (TopExp_Explorer::*)() const) static_cast<Standard_Integer (TopExp_Explorer::*)() const>(&TopExp_Explorer::Depth),
             R"#(Returns the current depth of the exploration. 0 is the shape to explore itself.)#" )
        .def("Clear",
             (void (TopExp_Explorer::*)() ) static_cast<void (TopExp_Explorer::*)() >(&TopExp_Explorer::Clear),
             R"#(Clears the content of the explorer. It will return False on More().)#" )
        .def("More",
             (Standard_Boolean (TopExp_Explorer::*)() const) static_cast<Standard_Boolean (TopExp_Explorer::*)() const>(&TopExp_Explorer::More),
             R"#(Returns True if there are more shapes in the exploration.)#" )
        .def("Depth",
             (Standard_Integer (TopExp_Explorer::*)() const) static_cast<Standard_Integer (TopExp_Explorer::*)() const>(&TopExp_Explorer::Depth),
             R"#(Returns the current depth of the exploration. 0 is the shape to explore itself.)#" )
        .def("Clear",
             (void (TopExp_Explorer::*)() ) static_cast<void (TopExp_Explorer::*)() >(&TopExp_Explorer::Clear),
             R"#(Clears the content of the explorer. It will return False on More().)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/TopExp_Explorer.hxx
// ./opencascade/TopExp_Stack.hxx
// ./opencascade/TopExp.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

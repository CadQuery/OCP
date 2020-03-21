
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

// module includes
#include <BRepProj_Projection.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepProj(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepProj"));


//Python trampoline classes

// classes


    static_cast<py::class_<BRepProj_Projection , shared_ptr<BRepProj_Projection> >>(m.attr("BRepProj_Projection"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepProj_Projection::*)() const) static_cast<Standard_Boolean (BRepProj_Projection::*)() const>(&BRepProj_Projection::IsDone),
             R"#(returns False if the section failed)#" )
        .def("Init",
             (void (BRepProj_Projection::*)() ) static_cast<void (BRepProj_Projection::*)() >(&BRepProj_Projection::Init),
             R"#(Resets the iterator by resulting wires.)#" )
        .def("More",
             (Standard_Boolean (BRepProj_Projection::*)() const) static_cast<Standard_Boolean (BRepProj_Projection::*)() const>(&BRepProj_Projection::More),
             R"#(Returns True if there is a current result wire)#" )
        .def("Next",
             (void (BRepProj_Projection::*)() ) static_cast<void (BRepProj_Projection::*)() >(&BRepProj_Projection::Next),
             R"#(Move to the next result wire.)#" )
        .def("Current",
             (TopoDS_Wire (BRepProj_Projection::*)() const) static_cast<TopoDS_Wire (BRepProj_Projection::*)() const>(&BRepProj_Projection::Current),
             R"#(Returns the current result wire.)#" )
        .def("Shape",
             (TopoDS_Compound (BRepProj_Projection::*)() const) static_cast<TopoDS_Compound (BRepProj_Projection::*)() const>(&BRepProj_Projection::Shape),
             R"#(Returns the complete result as compound of wires.)#" )
        .def("IsDone",
             (Standard_Boolean (BRepProj_Projection::*)() const) static_cast<Standard_Boolean (BRepProj_Projection::*)() const>(&BRepProj_Projection::IsDone),
             R"#(returns False if the section failed)#" )
        .def("Shape",
             (TopoDS_Compound (BRepProj_Projection::*)() const) static_cast<TopoDS_Compound (BRepProj_Projection::*)() const>(&BRepProj_Projection::Shape),
             R"#(Returns the complete result as compound of wires.)#" )
        .def("Init",
             (void (BRepProj_Projection::*)() ) static_cast<void (BRepProj_Projection::*)() >(&BRepProj_Projection::Init),
             R"#(Resets the iterator by resulting wires.)#" )
        .def("More",
             (Standard_Boolean (BRepProj_Projection::*)() const) static_cast<Standard_Boolean (BRepProj_Projection::*)() const>(&BRepProj_Projection::More),
             R"#(Returns True if there is a current result wire)#" )
        .def("Next",
             (void (BRepProj_Projection::*)() ) static_cast<void (BRepProj_Projection::*)() >(&BRepProj_Projection::Next),
             R"#(Move to the next result wire.)#" )
        .def("Current",
             (TopoDS_Wire (BRepProj_Projection::*)() const) static_cast<TopoDS_Wire (BRepProj_Projection::*)() const>(&BRepProj_Projection::Current),
             R"#(Returns the current result wire.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepProj_Projection.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

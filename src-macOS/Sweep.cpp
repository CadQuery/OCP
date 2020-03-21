
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_OutOfRange.hxx>
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoSuchObject.hxx>

// module includes
#include <Sweep_NumShape.hxx>
#include <Sweep_NumShapeIterator.hxx>
#include <Sweep_NumShapeTool.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Sweep(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Sweep"));


//Python trampoline classes

// classes


    static_cast<py::class_<Sweep_NumShape , shared_ptr<Sweep_NumShape> >>(m.attr("Sweep_NumShape"))
    // constructors
    // custom constructors
    // methods
        .def("Index",
             (Standard_Integer (Sweep_NumShape::*)() const) static_cast<Standard_Integer (Sweep_NumShape::*)() const>(&Sweep_NumShape::Index),
             R"#(None)#" )
        .def("Type",
             (TopAbs_ShapeEnum (Sweep_NumShape::*)() const) static_cast<TopAbs_ShapeEnum (Sweep_NumShape::*)() const>(&Sweep_NumShape::Type),
             R"#(None)#" )
        .def("Closed",
             (Standard_Boolean (Sweep_NumShape::*)() const) static_cast<Standard_Boolean (Sweep_NumShape::*)() const>(&Sweep_NumShape::Closed),
             R"#(None)#" )
        .def("BegInfinite",
             (Standard_Boolean (Sweep_NumShape::*)() const) static_cast<Standard_Boolean (Sweep_NumShape::*)() const>(&Sweep_NumShape::BegInfinite),
             R"#(None)#" )
        .def("EndInfinite",
             (Standard_Boolean (Sweep_NumShape::*)() const) static_cast<Standard_Boolean (Sweep_NumShape::*)() const>(&Sweep_NumShape::EndInfinite),
             R"#(None)#" )
        .def("Index",
             (Standard_Integer (Sweep_NumShape::*)() const) static_cast<Standard_Integer (Sweep_NumShape::*)() const>(&Sweep_NumShape::Index),
             R"#(None)#" )
        .def("Type",
             (TopAbs_ShapeEnum (Sweep_NumShape::*)() const) static_cast<TopAbs_ShapeEnum (Sweep_NumShape::*)() const>(&Sweep_NumShape::Type),
             R"#(None)#" )
        .def("Closed",
             (Standard_Boolean (Sweep_NumShape::*)() const) static_cast<Standard_Boolean (Sweep_NumShape::*)() const>(&Sweep_NumShape::Closed),
             R"#(None)#" )
        .def("BegInfinite",
             (Standard_Boolean (Sweep_NumShape::*)() const) static_cast<Standard_Boolean (Sweep_NumShape::*)() const>(&Sweep_NumShape::BegInfinite),
             R"#(None)#" )
        .def("EndInfinite",
             (Standard_Boolean (Sweep_NumShape::*)() const) static_cast<Standard_Boolean (Sweep_NumShape::*)() const>(&Sweep_NumShape::EndInfinite),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Sweep_NumShapeIterator , shared_ptr<Sweep_NumShapeIterator> >>(m.attr("Sweep_NumShapeIterator"))
    // constructors
    // custom constructors
    // methods
        .def("More",
             (Standard_Boolean (Sweep_NumShapeIterator::*)() const) static_cast<Standard_Boolean (Sweep_NumShapeIterator::*)() const>(&Sweep_NumShapeIterator::More),
             R"#(Returns True if there is a current sub-shape.)#" )
        .def("Value",
             (const Sweep_NumShape & (Sweep_NumShapeIterator::*)() const) static_cast<const Sweep_NumShape & (Sweep_NumShapeIterator::*)() const>(&Sweep_NumShapeIterator::Value),
             R"#(Returns the current sub-shape.)#" )
        .def("Orientation",
             (TopAbs_Orientation (Sweep_NumShapeIterator::*)() const) static_cast<TopAbs_Orientation (Sweep_NumShapeIterator::*)() const>(&Sweep_NumShapeIterator::Orientation),
             R"#(Returns the orientation of the current sub-shape.)#" )
        .def("More",
             (Standard_Boolean (Sweep_NumShapeIterator::*)() const) static_cast<Standard_Boolean (Sweep_NumShapeIterator::*)() const>(&Sweep_NumShapeIterator::More),
             R"#(Returns True if there is a current sub-shape.)#" )
        .def("Value",
             (const Sweep_NumShape & (Sweep_NumShapeIterator::*)() const) static_cast<const Sweep_NumShape & (Sweep_NumShapeIterator::*)() const>(&Sweep_NumShapeIterator::Value),
             R"#(Returns the current sub-shape.)#" )
        .def("Orientation",
             (TopAbs_Orientation (Sweep_NumShapeIterator::*)() const) static_cast<TopAbs_Orientation (Sweep_NumShapeIterator::*)() const>(&Sweep_NumShapeIterator::Orientation),
             R"#(Returns the orientation of the current sub-shape.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Sweep_NumShapeTool , shared_ptr<Sweep_NumShapeTool> >>(m.attr("Sweep_NumShapeTool"))
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
// ./opencascade/Sweep_NumShapeTool.hxx
// ./opencascade/Sweep_NumShapeIterator.hxx
// ./opencascade/Sweep_NumShape.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

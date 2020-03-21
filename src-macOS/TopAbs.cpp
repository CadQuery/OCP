
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations

// module includes
#include <TopAbs.hxx>
#include <TopAbs_Orientation.hxx>
#include <TopAbs_ShapeEnum.hxx>
#include <TopAbs_State.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopAbs(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TopAbs"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<TopAbs , shared_ptr<TopAbs>>(m,"TopAbs");

    static_cast<py::class_<TopAbs , shared_ptr<TopAbs> >>(m.attr("TopAbs"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Print_s",
                    (Standard_OStream & (*)( const TopAbs_ShapeEnum , std::ostream & ) ) static_cast<Standard_OStream & (*)( const TopAbs_ShapeEnum , std::ostream & ) >(&TopAbs::Print),
                    R"#(Prints the name of Shape type as a String on the Stream.)#"  , py::arg("theShapeType"),  py::arg("theStream"))
        .def_static("Print_s",
                    (Standard_OStream & (*)( const TopAbs_Orientation , std::ostream & ) ) static_cast<Standard_OStream & (*)( const TopAbs_Orientation , std::ostream & ) >(&TopAbs::Print),
                    R"#(Prints the name of the Orientation as a String on the Stream.)#"  , py::arg("theOrientation"),  py::arg("theStream"))
        .def_static("ShapeTypeFromString_s",
                    (TopAbs_ShapeEnum (*)( Standard_CString ) ) static_cast<TopAbs_ShapeEnum (*)( Standard_CString ) >(&TopAbs::ShapeTypeFromString),
                    R"#(Returns the shape type from the given string identifier (using case-insensitive comparison).)#"  , py::arg("theTypeString"))
        .def_static("ShapeOrientationFromString_s",
                    (TopAbs_Orientation (*)( const Standard_CString ) ) static_cast<TopAbs_Orientation (*)( const Standard_CString ) >(&TopAbs::ShapeOrientationFromString),
                    R"#(Returns the shape orientation from the given string identifier (using case-insensitive comparison).)#"  , py::arg("theOrientationString"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/TopAbs.hxx
// ./opencascade/TopAbs_Orientation.hxx
// ./opencascade/TopAbs_ShapeEnum.hxx
// ./opencascade/TopAbs_State.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

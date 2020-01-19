
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

    register_default_constructor<TopAbs , shared_ptr<TopAbs>>(m,"TopAbs");

    static_cast<py::class_<TopAbs , shared_ptr<TopAbs>  >>(m.attr("TopAbs"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Compose_s",
                    (TopAbs_Orientation (*)( const TopAbs_Orientation ,  const TopAbs_Orientation  ) ) static_cast<TopAbs_Orientation (*)( const TopAbs_Orientation ,  const TopAbs_Orientation  ) >(&TopAbs::Compose),
                    R"#(Compose the Orientation <Or1> and <Or2>. This composition is not symmetric (if you switch <Or1> and <Or2> the result is different). It assumes that <Or1> is the Orientation of a Shape S1 containing a Shape S2 of Orientation Or2. The result is the cumulated orientation of S2 in S1. The composition law is :)#"  , py::arg("Or1"),  py::arg("Or2"))
        .def_static("Reverse_s",
                    (TopAbs_Orientation (*)( const TopAbs_Orientation  ) ) static_cast<TopAbs_Orientation (*)( const TopAbs_Orientation  ) >(&TopAbs::Reverse),
                    R"#(xchanges the interior/exterior status of the two sides. This is what happens when the sense of direction is reversed. The following rules apply:)#"  , py::arg("Or"))
        .def_static("Complement_s",
                    (TopAbs_Orientation (*)( const TopAbs_Orientation  ) ) static_cast<TopAbs_Orientation (*)( const TopAbs_Orientation  ) >(&TopAbs::Complement),
                    R"#(Reverses the interior/exterior status of each side of the object. So, to take the complement of an object means to reverse the interior/exterior status of its boundary, i.e. inside becomes outside. The method returns the complementary orientation, following the rules in the table below: FORWARD REVERSED REVERSED FORWARD INTERNAL EXTERNAL EXTERNAL INTERNAL)#"  , py::arg("Or"))
        .def_static("Print_s",
                    (Standard_OStream & (*)( const TopAbs_ShapeEnum ,  std::ostream &  ) ) static_cast<Standard_OStream & (*)( const TopAbs_ShapeEnum ,  std::ostream &  ) >(&TopAbs::Print),
                    R"#(Prints the name of Shape type as a String on the Stream.)#"  , py::arg("theShapeType"),  py::arg("theStream"))
        .def_static("Print_s",
                    (Standard_OStream & (*)( const TopAbs_Orientation ,  std::ostream &  ) ) static_cast<Standard_OStream & (*)( const TopAbs_Orientation ,  std::ostream &  ) >(&TopAbs::Print),
                    R"#(Prints the name of the Orientation as a String on the Stream.)#"  , py::arg("theOrientation"),  py::arg("theStream"))
        .def_static("Print_s",
                    (Standard_OStream & (*)( const TopAbs_State ,  std::ostream &  ) ) static_cast<Standard_OStream & (*)( const TopAbs_State ,  std::ostream &  ) >(&TopAbs::Print),
                    R"#(Prints the name of the State <St> as a String on the Stream <S> and returns <S>.)#"  , py::arg("St"),  py::arg("S"))
        .def_static("ShapeTypeToString_s",
                    (Standard_CString (*)( TopAbs_ShapeEnum  ) ) static_cast<Standard_CString (*)( TopAbs_ShapeEnum  ) >(&TopAbs::ShapeTypeToString),
                    R"#(Returns the string name for a given shape type.)#"  , py::arg("theType"))
        .def_static("ShapeTypeFromString_s",
                    (TopAbs_ShapeEnum (*)( Standard_CString  ) ) static_cast<TopAbs_ShapeEnum (*)( Standard_CString  ) >(&TopAbs::ShapeTypeFromString),
                    R"#(Returns the shape type from the given string identifier (using case-insensitive comparison).)#"  , py::arg("theTypeString"))
        .def_static("ShapeTypeFromString_s",
                    (Standard_Boolean (*)( Standard_CString ,  TopAbs_ShapeEnum &  ) ) static_cast<Standard_Boolean (*)( Standard_CString ,  TopAbs_ShapeEnum &  ) >(&TopAbs::ShapeTypeFromString),
                    R"#(Determines the shape type from the given string identifier (using case-insensitive comparison).)#"  , py::arg("theTypeString"),  py::arg("theType"))
        .def_static("ShapeOrientationToString_s",
                    (Standard_CString (*)( TopAbs_Orientation  ) ) static_cast<Standard_CString (*)( TopAbs_Orientation  ) >(&TopAbs::ShapeOrientationToString),
                    R"#(Returns the string name for a given shape orientation.)#"  , py::arg("theOrientation"))
        .def_static("ShapeOrientationFromString_s",
                    (TopAbs_Orientation (*)( const Standard_CString  ) ) static_cast<TopAbs_Orientation (*)( const Standard_CString  ) >(&TopAbs::ShapeOrientationFromString),
                    R"#(Returns the shape orientation from the given string identifier (using case-insensitive comparison).)#"  , py::arg("theOrientationString"))
        .def_static("ShapeOrientationFromString_s",
                    (Standard_Boolean (*)( const Standard_CString ,  TopAbs_Orientation &  ) ) static_cast<Standard_Boolean (*)( const Standard_CString ,  TopAbs_Orientation &  ) >(&TopAbs::ShapeOrientationFromString),
                    R"#(Determines the shape orientation from the given string identifier (using case-insensitive comparison).)#"  , py::arg("theOrientationString"),  py::arg("theOrientation"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/TopAbs.hxx
// ./opencascade/TopAbs_ShapeEnum.hxx
// ./opencascade/TopAbs_State.hxx
// ./opencascade/TopAbs_Orientation.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

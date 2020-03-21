
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
#include <StdObject_gp_Axes.hxx>
#include <StdObject_gp_Curves.hxx>
#include <StdObject_gp_Surfaces.hxx>
#include <StdObject_gp_Trsfs.hxx>
#include <StdObject_gp_Vectors.hxx>
#include <StdObject_Location.hxx>
#include <StdObject_Shape.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StdObject(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StdObject"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<StdObject_Location , shared_ptr<StdObject_Location>>(m,"StdObject_Location");

    static_cast<py::class_<StdObject_Location , shared_ptr<StdObject_Location> >>(m.attr("StdObject_Location"))
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
    register_default_constructor<StdObject_Shape , shared_ptr<StdObject_Shape>>(m,"StdObject_Shape");

    static_cast<py::class_<StdObject_Shape , shared_ptr<StdObject_Shape> >>(m.attr("StdObject_Shape"))
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
// ./opencascade/StdObject_gp_Curves.hxx
// ./opencascade/StdObject_gp_Surfaces.hxx
// ./opencascade/StdObject_Shape.hxx
// ./opencascade/StdObject_gp_Vectors.hxx
// ./opencascade/StdObject_Location.hxx
// ./opencascade/StdObject_gp_Axes.hxx
    m.def("write",
          (StdObjMgt_WriteData & (*)( StdObjMgt_WriteData & , const gp_Ax2d & ))  static_cast<StdObjMgt_WriteData & (*)( StdObjMgt_WriteData & , const gp_Ax2d & )>(&write),
          R"#(None)#"  , py::arg("theWriteData"),  py::arg("theAx"));
    m.def("write",
          (StdObjMgt_WriteData & (*)( StdObjMgt_WriteData & , const gp_Ax1 & ))  static_cast<StdObjMgt_WriteData & (*)( StdObjMgt_WriteData & , const gp_Ax1 & )>(&write),
          R"#(None)#"  , py::arg("theWriteData"),  py::arg("theAx"));
// ./opencascade/StdObject_gp_Trsfs.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

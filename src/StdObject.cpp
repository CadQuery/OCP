
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

// functions
// ./opencascade/StdObject_Location.hxx
// ./opencascade/StdObject_gp_Surfaces.hxx
// ./opencascade/StdObject_gp_Vectors.hxx
// ./opencascade/StdObject_Shape.hxx
// ./opencascade/StdObject_gp_Curves.hxx
// ./opencascade/StdObject_gp_Axes.hxx
    m.def("write", 
          (StdObjMgt_WriteData & (*)( StdObjMgt_WriteData & ,  const gp_Ax2d &  ))  static_cast<StdObjMgt_WriteData & (*)( StdObjMgt_WriteData & ,  const gp_Ax2d &  )>(&write),
          R"#(None)#"  , py::arg("theWriteData"),  py::arg("theAx"));
    m.def("write", 
          (StdObjMgt_WriteData & (*)( StdObjMgt_WriteData & ,  const gp_Ax1 &  ))  static_cast<StdObjMgt_WriteData & (*)( StdObjMgt_WriteData & ,  const gp_Ax1 &  )>(&write),
          R"#(None)#"  , py::arg("theWriteData"),  py::arg("theAx"));
// ./opencascade/StdObject_gp_Trsfs.hxx

// operators

// register typdefs
// ./opencascade/StdObject_Location.hxx
// ./opencascade/StdObject_gp_Surfaces.hxx
// ./opencascade/StdObject_gp_Vectors.hxx
// ./opencascade/StdObject_Shape.hxx
// ./opencascade/StdObject_gp_Curves.hxx
// ./opencascade/StdObject_gp_Axes.hxx
// ./opencascade/StdObject_gp_Trsfs.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

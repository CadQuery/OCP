
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
#include <IntImp_ComputeTangence.hxx>
#include <IntImp_ConstIsoparametric.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntImp(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IntImp"));


//Python trampoline classes

// classes

// functions
// ./opencascade\IntImp_ComputeTangence.hxx
    m.def("ChoixRef",
          (IntImp_ConstIsoparametric (*)( Standard_Integer ))  static_cast<IntImp_ConstIsoparametric (*)( Standard_Integer )>(&ChoixRef),
          R"#(None)#"  , py::arg("theIndex"));
    m.def("IntImp_ComputeTangence",
          (Standard_Boolean (*)( const gp_Vec [] , const Standard_Real [] , Standard_Real [] , IntImp_ConstIsoparametric [] ))  static_cast<Standard_Boolean (*)( const gp_Vec [] , const Standard_Real [] , Standard_Real [] , IntImp_ConstIsoparametric [] )>(&IntImp_ComputeTangence),
          R"#(None)#"  , py::arg("DPuv"),  py::arg("EpsUV"),  py::arg("Tgduv"),  py::arg("TabIso"));
// ./opencascade\IntImp_ConstIsoparametric.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

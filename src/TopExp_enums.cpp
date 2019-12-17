
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_NoMoreObject.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <TopExp_Explorer.hxx>
#include <TopoDS_Iterator.hxx>

// module includes
#include <TopExp.hxx>
#include <TopExp_Explorer.hxx>
#include <TopExp_Stack.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopExp_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TopExp", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<TopExp_Explorer ,std::unique_ptr<TopExp_Explorer>  >(m,"TopExp_Explorer",R"#(An Explorer is a Tool to visit a Topological Data Structure form the TopoDS package.)#");
    py::class_<TopExp ,std::unique_ptr<TopExp>  >(m,"TopExp",R"#(This package provides basic tools to explore the topological data structures.)#");

// pre-register typdefs
// ./opencascade/TopExp_Explorer.hxx
// ./opencascade/TopExp.hxx
// ./opencascade/TopExp_Stack.hxx

};

// user-defined post-inclusion per module

// user-defined post

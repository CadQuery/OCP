
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <IGESSolid_EdgeList.hxx>
#include <IGESSolid_VertexList.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <IGESData_IGESEntity.hxx>
#include <TopoDS_Face.hxx>
#include <IGESSolid_Loop.hxx>
#include <TopoDS_Wire.hxx>
#include <IGESSolid_Face.hxx>
#include <IGESSolid_Shell.hxx>
#include <TopoDS_Shell.hxx>
#include <IGESSolid_ManifoldSolid.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Compound.hxx>

// module includes
#include <BRepToIGESBRep_Entity.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepToIGESBRep_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepToIGESBRep", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<BRepToIGESBRep_Entity ,std::unique_ptr<BRepToIGESBRep_Entity>  , BRepToIGES_BREntity >(m,"BRepToIGESBRep_Entity",R"#(provides methods to transfer BRep entity from CASCADE to IGESBRep.)#");

// pre-register typdefs
// ./opencascade/BRepToIGESBRep_Entity.hxx

};

// user-defined post-inclusion per module

// user-defined post

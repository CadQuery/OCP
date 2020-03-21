
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <IGESData_IGESModel.hxx>
#include <Transfer_FinderProcess.hxx>
#include <IGESData_IGESEntity.hxx>
#include <TopoDS_Shape.hxx>
#include <IGESData_IGESEntity.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Face.hxx>
#include <IGESData_IGESEntity.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Compound.hxx>
#include <IGESData_IGESEntity.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <gp_Pnt2d.hxx>
#include <TopoDS_Wire.hxx>

// module includes
#include <BRepToIGES_BREntity.hxx>
#include <BRepToIGES_BRShell.hxx>
#include <BRepToIGES_BRSolid.hxx>
#include <BRepToIGES_BRWire.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepToIGES_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepToIGES", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<BRepToIGES_BREntity , shared_ptr<BRepToIGES_BREntity> >(m,"BRepToIGES_BREntity",R"#(provides methods to transfer BRep entity from CASCADE to IGES.)#");
    py::class_<BRepToIGES_BRShell , shared_ptr<BRepToIGES_BRShell> , BRepToIGES_BREntity>(m,"BRepToIGES_BRShell",R"#(This class implements the transfer of Shape Entities from Geom To IGES. These can be : . Vertex . Edge . Wire)#");
    py::class_<BRepToIGES_BRSolid , shared_ptr<BRepToIGES_BRSolid> , BRepToIGES_BREntity>(m,"BRepToIGES_BRSolid",R"#(This class implements the transfer of Shape Entities from Geom To IGES. These can be : . Vertex . Edge . Wire)#");
    py::class_<BRepToIGES_BRWire , shared_ptr<BRepToIGES_BRWire> , BRepToIGES_BREntity>(m,"BRepToIGES_BRWire",R"#(This class implements the transfer of Shape Entities from Geom To IGES. These can be : . Vertex . Edge . Wire)#");

};

// user-defined post-inclusion per module

// user-defined post

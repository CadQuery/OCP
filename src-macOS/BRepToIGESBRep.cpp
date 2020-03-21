
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


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
void register_BRepToIGESBRep(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepToIGESBRep"));


//Python trampoline classes

// classes


    static_cast<py::class_<BRepToIGESBRep_Entity , shared_ptr<BRepToIGESBRep_Entity> , BRepToIGES_BREntity>>(m.attr("BRepToIGESBRep_Entity"))
    // constructors
    // custom constructors
    // methods
        .def("TransferShape",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGESBRep_Entity::*)( const TopoDS_Shape & ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGESBRep_Entity::*)( const TopoDS_Shape & ) >(&BRepToIGESBRep_Entity::TransferShape),
             R"#(Returns the result of the transfert of any Shape If the transfer has failed, this member return a NullEntity.)#"  , py::arg("start"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepToIGESBRep_Entity.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

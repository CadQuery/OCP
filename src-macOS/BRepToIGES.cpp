
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


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
void register_BRepToIGES(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepToIGES"));


//Python trampoline classes

// classes


    static_cast<py::class_<BRepToIGES_BREntity , shared_ptr<BRepToIGES_BREntity> >>(m.attr("BRepToIGES_BREntity"))
    // constructors
    // custom constructors
    // methods
        .def("TransferShape",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BREntity::*)( const TopoDS_Shape & ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BREntity::*)( const TopoDS_Shape & ) >(&BRepToIGES_BREntity::TransferShape),
             R"#(Returns the result of the transfert of any Shape If the transfer has failed, this member return a NullEntity.)#"  , py::arg("start"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepToIGES_BRShell , shared_ptr<BRepToIGES_BRShell> , BRepToIGES_BREntity>>(m.attr("BRepToIGES_BRShell"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepToIGES_BRSolid , shared_ptr<BRepToIGES_BRSolid> , BRepToIGES_BREntity>>(m.attr("BRepToIGES_BRSolid"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepToIGES_BRWire , shared_ptr<BRepToIGES_BRWire> , BRepToIGES_BREntity>>(m.attr("BRepToIGES_BRWire"))
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
// ./opencascade/BRepToIGES_BREntity.hxx
// ./opencascade/BRepToIGES_BRShell.hxx
// ./opencascade/BRepToIGES_BRSolid.hxx
// ./opencascade/BRepToIGES_BRWire.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

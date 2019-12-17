
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <IGESData_IGESEntity.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Face.hxx>
#include <IGESData_IGESEntity.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <gp_Pnt2d.hxx>
#include <TopoDS_Wire.hxx>
#include <IGESData_IGESEntity.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Compound.hxx>
#include <IGESData_IGESModel.hxx>
#include <Transfer_FinderProcess.hxx>
#include <IGESData_IGESEntity.hxx>
#include <TopoDS_Shape.hxx>

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


    static_cast<py::class_<BRepToIGES_BREntity ,std::unique_ptr<BRepToIGES_BREntity>  >>(m.attr("BRepToIGES_BREntity"))
        .def(py::init<  >()  )
        .def("Init",
             (void (BRepToIGES_BREntity::*)() ) static_cast<void (BRepToIGES_BREntity::*)() >(&BRepToIGES_BREntity::Init),
             R"#(Initializes the field of the tool BREntity with default creating values.)#" )
        .def("SetModel",
             (void (BRepToIGES_BREntity::*)( const opencascade::handle<IGESData_IGESModel> &  ) ) static_cast<void (BRepToIGES_BREntity::*)( const opencascade::handle<IGESData_IGESModel> &  ) >(&BRepToIGES_BREntity::SetModel),
             R"#(Set the value of "TheModel")#"  , py::arg("model"))
        .def("GetModel",
             (opencascade::handle<IGESData_IGESModel> (BRepToIGES_BREntity::*)() const) static_cast<opencascade::handle<IGESData_IGESModel> (BRepToIGES_BREntity::*)() const>(&BRepToIGES_BREntity::GetModel),
             R"#(Returns the value of "TheModel")#" )
        .def("GetUnit",
             (Standard_Real (BRepToIGES_BREntity::*)() const) static_cast<Standard_Real (BRepToIGES_BREntity::*)() const>(&BRepToIGES_BREntity::GetUnit),
             R"#(Returns the value of the UnitFlag of the header of the model in meters.)#" )
        .def("SetTransferProcess",
             (void (BRepToIGES_BREntity::*)( const opencascade::handle<Transfer_FinderProcess> &  ) ) static_cast<void (BRepToIGES_BREntity::*)( const opencascade::handle<Transfer_FinderProcess> &  ) >(&BRepToIGES_BREntity::SetTransferProcess),
             R"#(Set the value of "TheMap")#"  , py::arg("TP"))
        .def("GetTransferProcess",
             (opencascade::handle<Transfer_FinderProcess> (BRepToIGES_BREntity::*)() const) static_cast<opencascade::handle<Transfer_FinderProcess> (BRepToIGES_BREntity::*)() const>(&BRepToIGES_BREntity::GetTransferProcess),
             R"#(Returns the value of "TheMap")#" )
        .def("TransferShape",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BREntity::*)( const TopoDS_Shape &  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BREntity::*)( const TopoDS_Shape &  ) >(&BRepToIGES_BREntity::TransferShape),
             R"#(Returns the result of the transfert of any Shape If the transfer has failed, this member return a NullEntity.)#"  , py::arg("start"))
        .def("AddFail",
             (void (BRepToIGES_BREntity::*)( const TopoDS_Shape & ,  const Standard_CString  ) ) static_cast<void (BRepToIGES_BREntity::*)( const TopoDS_Shape & ,  const Standard_CString  ) >(&BRepToIGES_BREntity::AddFail),
             R"#(Records a new Fail message)#"  , py::arg("start"),  py::arg("amess"))
        .def("AddWarning",
             (void (BRepToIGES_BREntity::*)( const TopoDS_Shape & ,  const Standard_CString  ) ) static_cast<void (BRepToIGES_BREntity::*)( const TopoDS_Shape & ,  const Standard_CString  ) >(&BRepToIGES_BREntity::AddWarning),
             R"#(Records a new Warning message)#"  , py::arg("start"),  py::arg("amess"))
        .def("AddFail",
             (void (BRepToIGES_BREntity::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_CString  ) ) static_cast<void (BRepToIGES_BREntity::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_CString  ) >(&BRepToIGES_BREntity::AddFail),
             R"#(Records a new Fail message)#"  , py::arg("start"),  py::arg("amess"))
        .def("AddWarning",
             (void (BRepToIGES_BREntity::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_CString  ) ) static_cast<void (BRepToIGES_BREntity::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_CString  ) >(&BRepToIGES_BREntity::AddWarning),
             R"#(Records a new Warning message)#"  , py::arg("start"),  py::arg("amess"))
        .def("HasShapeResult",
             (Standard_Boolean (BRepToIGES_BREntity::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (BRepToIGES_BREntity::*)( const TopoDS_Shape &  ) const>(&BRepToIGES_BREntity::HasShapeResult),
             R"#(Returns True if start was already treated and has a result in "TheMap" else returns False.)#"  , py::arg("start"))
        .def("GetShapeResult",
             (opencascade::handle<Standard_Transient> (BRepToIGES_BREntity::*)( const TopoDS_Shape &  ) const) static_cast<opencascade::handle<Standard_Transient> (BRepToIGES_BREntity::*)( const TopoDS_Shape &  ) const>(&BRepToIGES_BREntity::GetShapeResult),
             R"#(Returns the result of the transfer of the Shape "start" contained in "TheMap" . (if HasShapeResult is True).)#"  , py::arg("start"))
        .def("SetShapeResult",
             (void (BRepToIGES_BREntity::*)( const TopoDS_Shape & ,  const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (BRepToIGES_BREntity::*)( const TopoDS_Shape & ,  const opencascade::handle<Standard_Transient> &  ) >(&BRepToIGES_BREntity::SetShapeResult),
             R"#(set in "TheMap" the result of the transfer of the Shape "start".)#"  , py::arg("start"),  py::arg("result"))
        .def("HasShapeResult",
             (Standard_Boolean (BRepToIGES_BREntity::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (BRepToIGES_BREntity::*)( const opencascade::handle<Standard_Transient> &  ) const>(&BRepToIGES_BREntity::HasShapeResult),
             R"#(Returns True if start was already treated and has a result in "TheMap" else returns False.)#"  , py::arg("start"))
        .def("GetShapeResult",
             (opencascade::handle<Standard_Transient> (BRepToIGES_BREntity::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<opencascade::handle<Standard_Transient> (BRepToIGES_BREntity::*)( const opencascade::handle<Standard_Transient> &  ) const>(&BRepToIGES_BREntity::GetShapeResult),
             R"#(Returns the result of the transfer of the Transient "start" contained in "TheMap" . (if HasShapeResult is True).)#"  , py::arg("start"))
        .def("SetShapeResult",
             (void (BRepToIGES_BREntity::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (BRepToIGES_BREntity::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Standard_Transient> &  ) >(&BRepToIGES_BREntity::SetShapeResult),
             R"#(set in "TheMap" the result of the transfer of the Transient "start".)#"  , py::arg("start"),  py::arg("result"))
        .def("GetConvertSurfaceMode",
             (Standard_Boolean (BRepToIGES_BREntity::*)() const) static_cast<Standard_Boolean (BRepToIGES_BREntity::*)() const>(&BRepToIGES_BREntity::GetConvertSurfaceMode),
             R"#(Returns mode for conversion of surfaces (value of parameter write.convertsurface.mode))#" )
        .def("GetPCurveMode",
             (Standard_Boolean (BRepToIGES_BREntity::*)() const) static_cast<Standard_Boolean (BRepToIGES_BREntity::*)() const>(&BRepToIGES_BREntity::GetPCurveMode),
             R"#(Returns mode for writing pcurves (value of parameter write.surfacecurve.mode))#" )
;


    static_cast<py::class_<BRepToIGES_BRShell ,std::unique_ptr<BRepToIGES_BRShell>  , BRepToIGES_BREntity >>(m.attr("BRepToIGES_BRShell"))
        .def(py::init<  >()  )
        .def(py::init< const BRepToIGES_BREntity & >()  , py::arg("BR") )
        .def("TransferShell",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRShell::*)( const TopoDS_Shape &  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRShell::*)( const TopoDS_Shape &  ) >(&BRepToIGES_BRShell::TransferShell),
             R"#(Transfert an Shape entity from TopoDS to IGES This entity must be a Face or a Shell. If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"))
        .def("TransferShell",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRShell::*)( const TopoDS_Shell &  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRShell::*)( const TopoDS_Shell &  ) >(&BRepToIGES_BRShell::TransferShell),
             R"#(Transfert an Shell entity from TopoDS to IGES If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"))
        .def("TransferFace",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRShell::*)( const TopoDS_Face &  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRShell::*)( const TopoDS_Face &  ) >(&BRepToIGES_BRShell::TransferFace),
             R"#(Transfert a Face entity from TopoDS to IGES If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"))
;


    static_cast<py::class_<BRepToIGES_BRSolid ,std::unique_ptr<BRepToIGES_BRSolid>  , BRepToIGES_BREntity >>(m.attr("BRepToIGES_BRSolid"))
        .def(py::init<  >()  )
        .def(py::init< const BRepToIGES_BREntity & >()  , py::arg("BR") )
        .def("TransferSolid",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRSolid::*)( const TopoDS_Shape &  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRSolid::*)( const TopoDS_Shape &  ) >(&BRepToIGES_BRSolid::TransferSolid),
             R"#(Transfert a Shape entity from TopoDS to IGES this entity must be a Solid or a CompSolid or a Compound. If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"))
        .def("TransferSolid",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRSolid::*)( const TopoDS_Solid &  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRSolid::*)( const TopoDS_Solid &  ) >(&BRepToIGES_BRSolid::TransferSolid),
             R"#(Transfert a Solid entity from TopoDS to IGES If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"))
        .def("TransferCompSolid",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRSolid::*)( const TopoDS_CompSolid &  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRSolid::*)( const TopoDS_CompSolid &  ) >(&BRepToIGES_BRSolid::TransferCompSolid),
             R"#(Transfert an CompSolid entity from TopoDS to IGES If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"))
        .def("TransferCompound",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRSolid::*)( const TopoDS_Compound &  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRSolid::*)( const TopoDS_Compound &  ) >(&BRepToIGES_BRSolid::TransferCompound),
             R"#(Transfert a Compound entity from TopoDS to IGES If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"))
;


    static_cast<py::class_<BRepToIGES_BRWire ,std::unique_ptr<BRepToIGES_BRWire>  , BRepToIGES_BREntity >>(m.attr("BRepToIGES_BRWire"))
        .def(py::init<  >()  )
        .def(py::init< const BRepToIGES_BREntity & >()  , py::arg("BR") )
        .def("TransferWire",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRWire::*)( const TopoDS_Shape &  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRWire::*)( const TopoDS_Shape &  ) >(&BRepToIGES_BRWire::TransferWire),
             R"#(Transfert a Shape entity from TopoDS to IGES this entity must be a Vertex or an Edge or a Wire. If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"))
        .def("TransferVertex",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRWire::*)( const TopoDS_Vertex &  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRWire::*)( const TopoDS_Vertex &  ) >(&BRepToIGES_BRWire::TransferVertex),
             R"#(Transfert a Vertex entity from TopoDS to IGES If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("myvertex"))
        .def("TransferVertex",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRWire::*)( const TopoDS_Vertex & ,  const TopoDS_Edge & ,  Standard_Real &  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRWire::*)( const TopoDS_Vertex & ,  const TopoDS_Edge & ,  Standard_Real &  ) >(&BRepToIGES_BRWire::TransferVertex),
             R"#(Transfert a Vertex entity on an Edge from TopoDS to IGES Returns the parameter of myvertex on myedge. If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("myvertex"),  py::arg("myedge"),  py::arg("parameter"))
        .def("TransferVertex",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRWire::*)( const TopoDS_Vertex & ,  const TopoDS_Edge & ,  const TopoDS_Face & ,  Standard_Real &  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRWire::*)( const TopoDS_Vertex & ,  const TopoDS_Edge & ,  const TopoDS_Face & ,  Standard_Real &  ) >(&BRepToIGES_BRWire::TransferVertex),
             R"#(Transfert a Vertex entity of an edge on a Face from TopoDS to IGES Returns the parameter of myvertex on the pcurve of myedge on myface If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("myvertex"),  py::arg("myedge"),  py::arg("myface"),  py::arg("parameter"))
        .def("TransferVertex",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRWire::*)( const TopoDS_Vertex & ,  const TopoDS_Edge & ,  const opencascade::handle<Geom_Surface> & ,  const TopLoc_Location & ,  Standard_Real &  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRWire::*)( const TopoDS_Vertex & ,  const TopoDS_Edge & ,  const opencascade::handle<Geom_Surface> & ,  const TopLoc_Location & ,  Standard_Real &  ) >(&BRepToIGES_BRWire::TransferVertex),
             R"#(Transfert a Vertex entity of an edge on a Surface from TopoDS to IGES Returns the parameter of myvertex on the pcurve of myedge on mysurface If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("myvertex"),  py::arg("myedge"),  py::arg("mysurface"),  py::arg("myloc"),  py::arg("parameter"))
        .def("TransferVertex",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRWire::*)( const TopoDS_Vertex & ,  const TopoDS_Face & ,  gp_Pnt2d &  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRWire::*)( const TopoDS_Vertex & ,  const TopoDS_Face & ,  gp_Pnt2d &  ) >(&BRepToIGES_BRWire::TransferVertex),
             R"#(Transfert a Vertex entity on a Face from TopoDS to IGES Returns the parameters of myvertex on myface If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("myvertex"),  py::arg("myface"),  py::arg("mypoint"))
        .def("TransferEdge",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRWire::*)( const TopoDS_Edge & ,  const Standard_Boolean  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRWire::*)( const TopoDS_Edge & ,  const Standard_Boolean  ) >(&BRepToIGES_BRWire::TransferEdge),
             R"#(Transfert an Edge entity from TopoDS to IGES If this Entity could not be converted, this member returns a NullEntity. isBRepMode indicates if write mode is BRep (True when called from BRepToIGESBRep and False when from BRepToIGES) If edge is REVERSED and isBRepMode is False 3D edge curve is reversed, otherwise, not.)#"  , py::arg("myedge"),  py::arg("isBRepMode"))
        .def("TransferEdge",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRWire::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRWire::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const Standard_Real ,  const Standard_Boolean  ) >(&BRepToIGES_BRWire::TransferEdge),
             R"#(Transfert an Edge entity on a Face from TopoDS to IGES If this Entity could not be converted, this member returns a NullEntity. isBRepMode indicates if write mode is BRep (True when called from BRepToIGESBRep and False when from BRepToIGES) passing into Transform2dCurve())#"  , py::arg("myedge"),  py::arg("myface"),  py::arg("length"),  py::arg("isBRepMode"))
        .def("TransferWire",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRWire::*)( const TopoDS_Wire &  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRWire::*)( const TopoDS_Wire &  ) >(&BRepToIGES_BRWire::TransferWire),
             R"#(Transfert a Wire entity from TopoDS to IGES If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("mywire"))
        .def("TransferWire",
             (opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRWire::*)( const TopoDS_Wire & ,  const TopoDS_Face & ,  opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Real  ) ) static_cast<opencascade::handle<IGESData_IGESEntity> (BRepToIGES_BRWire::*)( const TopoDS_Wire & ,  const TopoDS_Face & ,  opencascade::handle<IGESData_IGESEntity> & ,  const Standard_Real  ) >(&BRepToIGES_BRWire::TransferWire),
             R"#(Transfert a Wire entity from TopoDS to IGES. Returns the curve associated to mywire in the parametric space of myface. If this Entity could not be converted, this member returns a NullEntity. Parameter IsRevol is not used anymore)#"  , py::arg("mywire"),  py::arg("myface"),  py::arg("mycurve2d"),  py::arg("length"))
;

// functions
// ./opencascade/BRepToIGES_BRShell.hxx
// ./opencascade/BRepToIGES_BRWire.hxx
// ./opencascade/BRepToIGES_BRSolid.hxx
// ./opencascade/BRepToIGES_BREntity.hxx

// operators

// register typdefs
// ./opencascade/BRepToIGES_BRShell.hxx
// ./opencascade/BRepToIGES_BRWire.hxx
// ./opencascade/BRepToIGES_BRSolid.hxx
// ./opencascade/BRepToIGES_BREntity.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

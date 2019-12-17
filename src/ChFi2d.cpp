
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <ChFi2d_Builder.hxx>

// module includes
#include <ChFi2d.hxx>
#include <ChFi2d_AnaFilletAlgo.hxx>
#include <ChFi2d_Builder.hxx>
#include <ChFi2d_ChamferAPI.hxx>
#include <ChFi2d_ConstructionError.hxx>
#include <ChFi2d_FilletAlgo.hxx>
#include <ChFi2d_FilletAPI.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ChFi2d(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ChFi2d"));


//Python trampoline classes

// classes

    register_default_constructor<ChFi2d ,std::unique_ptr<ChFi2d>>(m,"ChFi2d");

    static_cast<py::class_<ChFi2d ,std::unique_ptr<ChFi2d>  >>(m.attr("ChFi2d"))
;


    static_cast<py::class_<ChFi2d_Builder ,std::unique_ptr<ChFi2d_Builder>  >>(m.attr("ChFi2d_Builder"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Face & >()  , py::arg("F") )
        .def("Init",
             (void (ChFi2d_Builder::*)( const TopoDS_Face &  ) ) static_cast<void (ChFi2d_Builder::*)( const TopoDS_Face &  ) >(&ChFi2d_Builder::Init),
             R"#(None)#"  , py::arg("F"))
        .def("Init",
             (void (ChFi2d_Builder::*)( const TopoDS_Face & ,  const TopoDS_Face &  ) ) static_cast<void (ChFi2d_Builder::*)( const TopoDS_Face & ,  const TopoDS_Face &  ) >(&ChFi2d_Builder::Init),
             R"#(None)#"  , py::arg("RefFace"),  py::arg("ModFace"))
        .def("AddFillet",
             (TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Vertex & ,  const Standard_Real  ) ) static_cast<TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Vertex & ,  const Standard_Real  ) >(&ChFi2d_Builder::AddFillet),
             R"#(Add a fillet of radius <Radius> on the wire between the two edges connected to the vertex <V>. <AddFillet> returns the fillet edge. The returned edge has sense only if the status <status> is <IsDone>)#"  , py::arg("V"),  py::arg("Radius"))
        .def("ModifyFillet",
             (TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Edge & ,  const Standard_Real  ) ) static_cast<TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Edge & ,  const Standard_Real  ) >(&ChFi2d_Builder::ModifyFillet),
             R"#(modify the fillet radius and return the new fillet edge. this edge has sense only if the status <status> is <IsDone>.)#"  , py::arg("Fillet"),  py::arg("Radius"))
        .def("RemoveFillet",
             (TopoDS_Vertex (ChFi2d_Builder::*)( const TopoDS_Edge &  ) ) static_cast<TopoDS_Vertex (ChFi2d_Builder::*)( const TopoDS_Edge &  ) >(&ChFi2d_Builder::RemoveFillet),
             R"#(removes the fillet <Fillet> and returns the vertex connecting the two adjacent edges to this fillet.)#"  , py::arg("Fillet"))
        .def("AddChamfer",
             (TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) >(&ChFi2d_Builder::AddChamfer),
             R"#(Add a chamfer on the wire between the two edges connected <E1> and <E2>. <AddChamfer> returns the chamfer edge. This edge has sense only if the status <status> is <IsDone>.)#"  , py::arg("E1"),  py::arg("E2"),  py::arg("D1"),  py::arg("D2"))
        .def("AddChamfer",
             (TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Edge & ,  const TopoDS_Vertex & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Edge & ,  const TopoDS_Vertex & ,  const Standard_Real ,  const Standard_Real  ) >(&ChFi2d_Builder::AddChamfer),
             R"#(Add a chamfer on the wire between the two edges connected to the vertex <V>. The chamfer will make an angle <Ang> with the edge <E>, and one of its extremities will be on <E> at distance <D>. The returned edge has sense only if the status <status> is <IsDone>. Warning: The value of <Ang> must be expressed in Radian.)#"  , py::arg("E"),  py::arg("V"),  py::arg("D"),  py::arg("Ang"))
        .def("ModifyChamfer",
             (TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) >(&ChFi2d_Builder::ModifyChamfer),
             R"#(modify the chamfer <Chamfer> and returns the new chamfer edge. This edge as sense only if the status <status> is <IsDone>.)#"  , py::arg("Chamfer"),  py::arg("E1"),  py::arg("E2"),  py::arg("D1"),  py::arg("D2"))
        .def("ModifyChamfer",
             (TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<TopoDS_Edge (ChFi2d_Builder::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real  ) >(&ChFi2d_Builder::ModifyChamfer),
             R"#(modify the chamfer <Chamfer> and returns the new chamfer edge. This edge as sense only if the status <status> is <IsDone>. Warning: The value of <Ang> must be expressed in Radian.)#"  , py::arg("Chamfer"),  py::arg("E"),  py::arg("D"),  py::arg("Ang"))
        .def("RemoveChamfer",
             (TopoDS_Vertex (ChFi2d_Builder::*)( const TopoDS_Edge &  ) ) static_cast<TopoDS_Vertex (ChFi2d_Builder::*)( const TopoDS_Edge &  ) >(&ChFi2d_Builder::RemoveChamfer),
             R"#(removes the chamfer <Chamfer> and returns the vertex connecting the two adjacent edges to this chamfer.)#"  , py::arg("Chamfer"))
        .def("Result",
             (TopoDS_Face (ChFi2d_Builder::*)() const) static_cast<TopoDS_Face (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::Result),
             R"#(returns the modified face)#" )
        .def("IsModified",
             (Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const) static_cast<Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const>(&ChFi2d_Builder::IsModified),
             R"#(None)#"  , py::arg("E"))
        .def("FilletEdges",
             (const TopTools_SequenceOfShape & (ChFi2d_Builder::*)() const) static_cast<const TopTools_SequenceOfShape & (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::FilletEdges),
             R"#(returns the list of new edges)#" )
        .def("NbFillet",
             (Standard_Integer (ChFi2d_Builder::*)() const) static_cast<Standard_Integer (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::NbFillet),
             R"#(None)#" )
        .def("ChamferEdges",
             (const TopTools_SequenceOfShape & (ChFi2d_Builder::*)() const) static_cast<const TopTools_SequenceOfShape & (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::ChamferEdges),
             R"#(returns the list of new edges)#" )
        .def("NbChamfer",
             (Standard_Integer (ChFi2d_Builder::*)() const) static_cast<Standard_Integer (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::NbChamfer),
             R"#(None)#" )
        .def("HasDescendant",
             (Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const) static_cast<Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const>(&ChFi2d_Builder::HasDescendant),
             R"#(None)#"  , py::arg("E"))
        .def("DescendantEdge",
             (const TopoDS_Edge & (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const) static_cast<const TopoDS_Edge & (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const>(&ChFi2d_Builder::DescendantEdge),
             R"#(returns the modified edge if <E> has descendant or <E> in the other case.)#"  , py::arg("E"))
        .def("BasisEdge",
             (const TopoDS_Edge & (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const) static_cast<const TopoDS_Edge & (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const>(&ChFi2d_Builder::BasisEdge),
             R"#(Returns the parent edge of <E> Warning: If <E>is a basis edge, the returned edge would be equal to <E>)#"  , py::arg("E"))
        .def("Status",
             (ChFi2d_ConstructionError (ChFi2d_Builder::*)() const) static_cast<ChFi2d_ConstructionError (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::Status),
             R"#(None)#" )
        .def("Result",
             (TopoDS_Face (ChFi2d_Builder::*)() const) static_cast<TopoDS_Face (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::Result),
             R"#(returns the modified face)#" )
        .def("IsModified",
             (Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const) static_cast<Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const>(&ChFi2d_Builder::IsModified),
             R"#(None)#"  , py::arg("E"))
        .def("FilletEdges",
             (const TopTools_SequenceOfShape & (ChFi2d_Builder::*)() const) static_cast<const TopTools_SequenceOfShape & (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::FilletEdges),
             R"#(returns the list of new edges)#" )
        .def("ChamferEdges",
             (const TopTools_SequenceOfShape & (ChFi2d_Builder::*)() const) static_cast<const TopTools_SequenceOfShape & (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::ChamferEdges),
             R"#(returns the list of new edges)#" )
        .def("NbFillet",
             (Standard_Integer (ChFi2d_Builder::*)() const) static_cast<Standard_Integer (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::NbFillet),
             R"#(None)#" )
        .def("NbChamfer",
             (Standard_Integer (ChFi2d_Builder::*)() const) static_cast<Standard_Integer (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::NbChamfer),
             R"#(None)#" )
        .def("HasDescendant",
             (Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const) static_cast<Standard_Boolean (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const>(&ChFi2d_Builder::HasDescendant),
             R"#(None)#"  , py::arg("E"))
        .def("DescendantEdge",
             (const TopoDS_Edge & (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const) static_cast<const TopoDS_Edge & (ChFi2d_Builder::*)( const TopoDS_Edge &  ) const>(&ChFi2d_Builder::DescendantEdge),
             R"#(returns the modified edge if <E> has descendant or <E> in the other case.)#"  , py::arg("E"))
        .def("Status",
             (ChFi2d_ConstructionError (ChFi2d_Builder::*)() const) static_cast<ChFi2d_ConstructionError (ChFi2d_Builder::*)() const>(&ChFi2d_Builder::Status),
             R"#(None)#" )
;

// functions
// ./opencascade/ChFi2d.hxx
// ./opencascade/ChFi2d_ChamferAPI.hxx
// ./opencascade/ChFi2d_FilletAlgo.hxx
// ./opencascade/ChFi2d_FilletAPI.hxx
// ./opencascade/ChFi2d_ConstructionError.hxx
// ./opencascade/ChFi2d_Builder.hxx
// ./opencascade/ChFi2d_AnaFilletAlgo.hxx

// operators

// register typdefs
// ./opencascade/ChFi2d.hxx
// ./opencascade/ChFi2d_ChamferAPI.hxx
// ./opencascade/ChFi2d_FilletAlgo.hxx
// ./opencascade/ChFi2d_FilletAPI.hxx
// ./opencascade/ChFi2d_ConstructionError.hxx
// ./opencascade/ChFi2d_Builder.hxx
// ./opencascade/ChFi2d_AnaFilletAlgo.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

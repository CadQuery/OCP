
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Compound.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Pnt2d.hxx>
#include <TopoDS_Vertex.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Pnt.hxx>
#include <Adaptor3d_Curve.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <ShapeExtend_WireData.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Vertex.hxx>
#include <ShapeAnalysis_Geom.hxx>
#include <ShapeAnalysis_Curve.hxx>
#include <ShapeAnalysis_Surface.hxx>
#include <ShapeAnalysis_Edge.hxx>
#include <ShapeAnalysis_Wire.hxx>
#include <ShapeAnalysis_WireOrder.hxx>
#include <ShapeAnalysis_WireVertex.hxx>
#include <ShapeAnalysis_CheckSmallFace.hxx>
#include <ShapeAnalysis_Shell.hxx>
#include <ShapeAnalysis_ShapeTolerance.hxx>
#include <ShapeAnalysis_ShapeContents.hxx>
#include <ShapeAnalysis_FreeBounds.hxx>
#include <ShapeAnalysis_FreeBoundData.hxx>
#include <ShapeAnalysis_FreeBoundsProperties.hxx>
#include <ShapeAnalysis_TransferParameters.hxx>
#include <ShapeAnalysis_TransferParametersProj.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <Standard_TypeMismatch.hxx>
#include <gp_XY.hxx>
#include <ShapeAnalysis_Surface.hxx>
#include <TopoDS_Wire.hxx>
#include <Geom_Surface.hxx>
#include <ShapeAnalysis_WireOrder.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Compound.hxx>
#include <gp_Pln.hxx>
#include <ShapeExtend_WireData.hxx>
#include <TopoDS_Wire.hxx>
#include <Geom_Curve.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Bnd_Box2d.hxx>

// module includes
#include <ShapeAnalysis.hxx>
#include <ShapeAnalysis_BoxBndTree.hxx>
#include <ShapeAnalysis_CheckSmallFace.hxx>
#include <ShapeAnalysis_Curve.hxx>
#include <ShapeAnalysis_DataMapIteratorOfDataMapOfShapeListOfReal.hxx>
#include <ShapeAnalysis_DataMapOfShapeListOfReal.hxx>
#include <ShapeAnalysis_Edge.hxx>
#include <ShapeAnalysis_FreeBoundData.hxx>
#include <ShapeAnalysis_FreeBounds.hxx>
#include <ShapeAnalysis_FreeBoundsProperties.hxx>
#include <ShapeAnalysis_Geom.hxx>
#include <ShapeAnalysis_HSequenceOfFreeBounds.hxx>
#include <ShapeAnalysis_SequenceOfFreeBounds.hxx>
#include <ShapeAnalysis_ShapeContents.hxx>
#include <ShapeAnalysis_ShapeTolerance.hxx>
#include <ShapeAnalysis_Shell.hxx>
#include <ShapeAnalysis_Surface.hxx>
#include <ShapeAnalysis_TransferParameters.hxx>
#include <ShapeAnalysis_TransferParametersProj.hxx>
#include <ShapeAnalysis_Wire.hxx>
#include <ShapeAnalysis_WireOrder.hxx>
#include <ShapeAnalysis_WireVertex.hxx>

// template related includes
// ./opencascade/ShapeAnalysis_DataMapOfShapeListOfReal.hxx
#include "NCollection.hxx"
// ./opencascade/ShapeAnalysis_DataMapOfShapeListOfReal.hxx
#include "NCollection.hxx"
// ./opencascade/ShapeAnalysis_SequenceOfFreeBounds.hxx
#include "NCollection.hxx"
// ./opencascade/ShapeAnalysis_BoxBndTree.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ShapeAnalysis(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ShapeAnalysis"));


//Python trampoline classes

// classes


    static_cast<py::class_<ShapeAnalysis_HSequenceOfFreeBounds ,std::unique_ptr<ShapeAnalysis_HSequenceOfFreeBounds>  >>(m.attr("ShapeAnalysis_HSequenceOfFreeBounds"))
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<ShapeAnalysis_FreeBoundData> > & >()  , py::arg("theOther") )
        .def("Sequence",
             (const ShapeAnalysis_SequenceOfFreeBounds & (ShapeAnalysis_HSequenceOfFreeBounds::*)() const) static_cast<const ShapeAnalysis_SequenceOfFreeBounds & (ShapeAnalysis_HSequenceOfFreeBounds::*)() const>(&ShapeAnalysis_HSequenceOfFreeBounds::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (ShapeAnalysis_HSequenceOfFreeBounds::*)(  const opencascade::handle<ShapeAnalysis_FreeBoundData> &  ) ) static_cast<void (ShapeAnalysis_HSequenceOfFreeBounds::*)(  const opencascade::handle<ShapeAnalysis_FreeBoundData> &  ) >(&ShapeAnalysis_HSequenceOfFreeBounds::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (ShapeAnalysis_HSequenceOfFreeBounds::*)( NCollection_Sequence<opencascade::handle<ShapeAnalysis_FreeBoundData> > &  ) ) static_cast<void (ShapeAnalysis_HSequenceOfFreeBounds::*)( NCollection_Sequence<opencascade::handle<ShapeAnalysis_FreeBoundData> > &  ) >(&ShapeAnalysis_HSequenceOfFreeBounds::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (ShapeAnalysis_SequenceOfFreeBounds & (ShapeAnalysis_HSequenceOfFreeBounds::*)() ) static_cast<ShapeAnalysis_SequenceOfFreeBounds & (ShapeAnalysis_HSequenceOfFreeBounds::*)() >(&ShapeAnalysis_HSequenceOfFreeBounds::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeAnalysis_HSequenceOfFreeBounds::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeAnalysis_HSequenceOfFreeBounds::*)() const>(&ShapeAnalysis_HSequenceOfFreeBounds::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeAnalysis_HSequenceOfFreeBounds::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeAnalysis_HSequenceOfFreeBounds::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<ShapeAnalysis_Shell ,std::unique_ptr<ShapeAnalysis_Shell>>(m,"ShapeAnalysis_Shell");

    static_cast<py::class_<ShapeAnalysis_Shell ,std::unique_ptr<ShapeAnalysis_Shell>  >>(m.attr("ShapeAnalysis_Shell"))
        .def("Clear",
             (void (ShapeAnalysis_Shell::*)() ) static_cast<void (ShapeAnalysis_Shell::*)() >(&ShapeAnalysis_Shell::Clear),
             R"#(Clears data about loaded shells and performed checks)#" )
        .def("LoadShells",
             (void (ShapeAnalysis_Shell::*)( const TopoDS_Shape &  ) ) static_cast<void (ShapeAnalysis_Shell::*)( const TopoDS_Shape &  ) >(&ShapeAnalysis_Shell::LoadShells),
             R"#(Adds shells contained in the <shape> to the list of loaded shells)#"  , py::arg("shape"))
        .def("CheckOrientedShells",
             (Standard_Boolean (ShapeAnalysis_Shell::*)( const TopoDS_Shape & ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Shell::*)( const TopoDS_Shape & ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&ShapeAnalysis_Shell::CheckOrientedShells),
             R"#(Checks if shells fulfill orientation condition, i.e. if each edge is, either present once (free edge) or twice (connected edge) but with different orientations (FORWARD/REVERSED) Edges which do not fulfill these conditions are bad)#"  , py::arg("shape"),  py::arg("alsofree")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("checkinternaledges")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IsLoaded",
             (Standard_Boolean (ShapeAnalysis_Shell::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Shell::*)( const TopoDS_Shape &  ) const>(&ShapeAnalysis_Shell::IsLoaded),
             R"#(Tells if a shape is loaded (only shells are checked))#"  , py::arg("shape"))
        .def("NbLoaded",
             (Standard_Integer (ShapeAnalysis_Shell::*)() const) static_cast<Standard_Integer (ShapeAnalysis_Shell::*)() const>(&ShapeAnalysis_Shell::NbLoaded),
             R"#(Returns the actual number of loaded shapes (i.e. shells))#" )
        .def("Loaded",
             (TopoDS_Shape (ShapeAnalysis_Shell::*)( const Standard_Integer  ) const) static_cast<TopoDS_Shape (ShapeAnalysis_Shell::*)( const Standard_Integer  ) const>(&ShapeAnalysis_Shell::Loaded),
             R"#(Returns a loaded shape specified by its rank number. Returns null shape if <num> is out of range)#"  , py::arg("num"))
        .def("HasBadEdges",
             (Standard_Boolean (ShapeAnalysis_Shell::*)() const) static_cast<Standard_Boolean (ShapeAnalysis_Shell::*)() const>(&ShapeAnalysis_Shell::HasBadEdges),
             R"#(Tells if at least one edge is recorded as bad)#" )
        .def("BadEdges",
             (TopoDS_Compound (ShapeAnalysis_Shell::*)() const) static_cast<TopoDS_Compound (ShapeAnalysis_Shell::*)() const>(&ShapeAnalysis_Shell::BadEdges),
             R"#(Returns the list of bad edges as a Compound It is empty (not null) if no edge are recorded as bad)#" )
        .def("HasFreeEdges",
             (Standard_Boolean (ShapeAnalysis_Shell::*)() const) static_cast<Standard_Boolean (ShapeAnalysis_Shell::*)() const>(&ShapeAnalysis_Shell::HasFreeEdges),
             R"#(Tells if at least one edge is recorded as free (not connected))#" )
        .def("FreeEdges",
             (TopoDS_Compound (ShapeAnalysis_Shell::*)() const) static_cast<TopoDS_Compound (ShapeAnalysis_Shell::*)() const>(&ShapeAnalysis_Shell::FreeEdges),
             R"#(Returns the list of free (not connected) edges as a Compound It is empty (not null) if no edge are recorded as free)#" )
        .def("HasConnectedEdges",
             (Standard_Boolean (ShapeAnalysis_Shell::*)() const) static_cast<Standard_Boolean (ShapeAnalysis_Shell::*)() const>(&ShapeAnalysis_Shell::HasConnectedEdges),
             R"#(Tells if at least one edge is connected (shared twice or more))#" )
;


    static_cast<py::class_<ShapeAnalysis_Edge ,std::unique_ptr<ShapeAnalysis_Edge>  >>(m.attr("ShapeAnalysis_Edge"))
        .def(py::init<  >()  )
        .def("HasCurve3d",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge &  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge &  ) const>(&ShapeAnalysis_Edge::HasCurve3d),
             R"#(Tells if the edge has a 3d curve)#"  , py::arg("edge"))
        .def("Curve3d",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  opencascade::handle<Geom_Curve> & ,  Standard_Real & ,  Standard_Real & ,  const Standard_Boolean  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  opencascade::handle<Geom_Curve> & ,  Standard_Real & ,  Standard_Real & ,  const Standard_Boolean  ) const>(&ShapeAnalysis_Edge::Curve3d),
             R"#(Returns the 3d curve and bounding parameteres for the edge Returns False if no 3d curve. If <orient> is True (default), takes orientation into account: if the edge is reversed, cf and cl are toggled)#"  , py::arg("edge"),  py::arg("C3d"),  py::arg("cf"),  py::arg("cl"),  py::arg("orient")=static_cast<const Standard_Boolean>(Standard_True))
        .def("IsClosed3d",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge &  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge &  ) const>(&ShapeAnalysis_Edge::IsClosed3d),
             R"#(Gives True if the edge has a 3d curve, this curve is closed, and the edge has the same vertex at start and end)#"  , py::arg("edge"))
        .def("HasPCurve",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) const>(&ShapeAnalysis_Edge::HasPCurve),
             R"#(Tells if the Edge has a pcurve on the face.)#"  , py::arg("edge"),  py::arg("face"))
        .def("HasPCurve",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const opencascade::handle<Geom_Surface> & ,  const TopLoc_Location &  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const opencascade::handle<Geom_Surface> & ,  const TopLoc_Location &  ) const>(&ShapeAnalysis_Edge::HasPCurve),
             R"#(Tells if the edge has a pcurve on the surface (with location).)#"  , py::arg("edge"),  py::arg("surface"),  py::arg("location"))
        .def("PCurve",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  opencascade::handle<Geom2d_Curve> & ,  Standard_Real & ,  Standard_Real & ,  const Standard_Boolean  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  opencascade::handle<Geom2d_Curve> & ,  Standard_Real & ,  Standard_Real & ,  const Standard_Boolean  ) const>(&ShapeAnalysis_Edge::PCurve),
             R"#(None)#"  , py::arg("edge"),  py::arg("face"),  py::arg("C2d"),  py::arg("cf"),  py::arg("cl"),  py::arg("orient")=static_cast<const Standard_Boolean>(Standard_True))
        .def("PCurve",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const opencascade::handle<Geom_Surface> & ,  const TopLoc_Location & ,  opencascade::handle<Geom2d_Curve> & ,  Standard_Real & ,  Standard_Real & ,  const Standard_Boolean  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const opencascade::handle<Geom_Surface> & ,  const TopLoc_Location & ,  opencascade::handle<Geom2d_Curve> & ,  Standard_Real & ,  Standard_Real & ,  const Standard_Boolean  ) const>(&ShapeAnalysis_Edge::PCurve),
             R"#(Returns the pcurve and bounding parameteres for the edge lying on the surface. Returns False if the edge has no pcurve on this surface. If <orient> is True (default), takes orientation into account: if the edge is reversed, cf and cl are toggled)#"  , py::arg("edge"),  py::arg("surface"),  py::arg("location"),  py::arg("C2d"),  py::arg("cf"),  py::arg("cl"),  py::arg("orient")=static_cast<const Standard_Boolean>(Standard_True))
        .def("BoundUV",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  gp_Pnt2d & ,  gp_Pnt2d &  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  gp_Pnt2d & ,  gp_Pnt2d &  ) const>(&ShapeAnalysis_Edge::BoundUV),
             R"#(None)#"  , py::arg("edge"),  py::arg("face"),  py::arg("first"),  py::arg("last"))
        .def("BoundUV",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const opencascade::handle<Geom_Surface> & ,  const TopLoc_Location & ,  gp_Pnt2d & ,  gp_Pnt2d &  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const opencascade::handle<Geom_Surface> & ,  const TopLoc_Location & ,  gp_Pnt2d & ,  gp_Pnt2d &  ) const>(&ShapeAnalysis_Edge::BoundUV),
             R"#(Returns the ends of pcurve Calls method PCurve with <orient> equal to True)#"  , py::arg("edge"),  py::arg("surface"),  py::arg("location"),  py::arg("first"),  py::arg("last"))
        .def("IsSeam",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) const>(&ShapeAnalysis_Edge::IsSeam),
             R"#(None)#"  , py::arg("edge"),  py::arg("face"))
        .def("IsSeam",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const opencascade::handle<Geom_Surface> & ,  const TopLoc_Location &  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const opencascade::handle<Geom_Surface> & ,  const TopLoc_Location &  ) const>(&ShapeAnalysis_Edge::IsSeam),
             R"#(Returns True if the edge has two pcurves on one surface)#"  , py::arg("edge"),  py::arg("surface"),  py::arg("location"))
        .def("FirstVertex",
             (TopoDS_Vertex (ShapeAnalysis_Edge::*)( const TopoDS_Edge &  ) const) static_cast<TopoDS_Vertex (ShapeAnalysis_Edge::*)( const TopoDS_Edge &  ) const>(&ShapeAnalysis_Edge::FirstVertex),
             R"#(Returns start vertex of the edge (taking edge orientation into account).)#"  , py::arg("edge"))
        .def("LastVertex",
             (TopoDS_Vertex (ShapeAnalysis_Edge::*)( const TopoDS_Edge &  ) const) static_cast<TopoDS_Vertex (ShapeAnalysis_Edge::*)( const TopoDS_Edge &  ) const>(&ShapeAnalysis_Edge::LastVertex),
             R"#(Returns end vertex of the edge (taking edge orientation into account).)#"  , py::arg("edge"))
        .def("GetEndTangent2d",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const Standard_Boolean ,  gp_Pnt2d & ,  gp_Vec2d & ,  const Standard_Real  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const Standard_Boolean ,  gp_Pnt2d & ,  gp_Vec2d & ,  const Standard_Real  ) const>(&ShapeAnalysis_Edge::GetEndTangent2d),
             R"#(None)#"  , py::arg("edge"),  py::arg("face"),  py::arg("atEnd"),  py::arg("pos"),  py::arg("tang"),  py::arg("dparam")=static_cast<const Standard_Real>(0.0))
        .def("GetEndTangent2d",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const opencascade::handle<Geom_Surface> & ,  const TopLoc_Location & ,  const Standard_Boolean ,  gp_Pnt2d & ,  gp_Vec2d & ,  const Standard_Real  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const opencascade::handle<Geom_Surface> & ,  const TopLoc_Location & ,  const Standard_Boolean ,  gp_Pnt2d & ,  gp_Vec2d & ,  const Standard_Real  ) const>(&ShapeAnalysis_Edge::GetEndTangent2d),
             R"#(Returns tangent of the edge pcurve at its start (if atEnd is False) or end (if True), regarding the orientation of edge. If edge is REVERSED, tangent is reversed before return. Returns True if pcurve is available and tangent is computed and is not null, else False.)#"  , py::arg("edge"),  py::arg("surface"),  py::arg("location"),  py::arg("atEnd"),  py::arg("pos"),  py::arg("tang"),  py::arg("dparam")=static_cast<const Standard_Real>(0.0))
        .def("CheckVerticesWithCurve3d",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Integer  ) >(&ShapeAnalysis_Edge::CheckVerticesWithCurve3d),
             R"#(Checks the start and/or end vertex of the edge for matching with 3d curve with the given precision. <vtx> = 1 : start vertex only <vtx> = 2 : end vertex only <vtx> = 0 : both (default) If preci < 0 the vertices are considered with their own tolerances, else with the given <preci>.)#"  , py::arg("edge"),  py::arg("preci")=static_cast<const Standard_Real>(- 1),  py::arg("vtx")=static_cast<const Standard_Integer>(0))
        .def("CheckVerticesWithPCurve",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const Standard_Real ,  const Standard_Integer  ) >(&ShapeAnalysis_Edge::CheckVerticesWithPCurve),
             R"#(None)#"  , py::arg("edge"),  py::arg("face"),  py::arg("preci")=static_cast<const Standard_Real>(- 1),  py::arg("vtx")=static_cast<const Standard_Integer>(0))
        .def("CheckVerticesWithPCurve",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const opencascade::handle<Geom_Surface> & ,  const TopLoc_Location & ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const opencascade::handle<Geom_Surface> & ,  const TopLoc_Location & ,  const Standard_Real ,  const Standard_Integer  ) >(&ShapeAnalysis_Edge::CheckVerticesWithPCurve),
             R"#(Checks the start and/or end vertex of the edge for matching with pcurve with the given precision. <vtx> = 1 : start vertex <vtx> = 2 : end vertex <vtx> = 0 : both If preci < 0 the vertices are considered with their own tolerances, else with the given <preci>.)#"  , py::arg("edge"),  py::arg("surface"),  py::arg("location"),  py::arg("preci")=static_cast<const Standard_Real>(- 1),  py::arg("vtx")=static_cast<const Standard_Integer>(0))
        .def("CheckVertexTolerance",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  Standard_Real & ,  Standard_Real &  ) >(&ShapeAnalysis_Edge::CheckVertexTolerance),
             R"#(None)#"  , py::arg("edge"),  py::arg("face"),  py::arg("toler1"),  py::arg("toler2"))
        .def("CheckVertexTolerance",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  Standard_Real & ,  Standard_Real &  ) >(&ShapeAnalysis_Edge::CheckVertexTolerance),
             R"#(Checks if it is necessary to increase tolerances of the edge vertices to comprise the ends of 3d curve and pcurve on the given face (first method) or all pcurves stored in an edge (second one) toler1 returns necessary tolerance for first vertex, toler2 returns necessary tolerance for last vertex.)#"  , py::arg("edge"),  py::arg("toler1"),  py::arg("toler2"))
        .def("CheckCurve3dWithPCurve",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) >(&ShapeAnalysis_Edge::CheckCurve3dWithPCurve),
             R"#(None)#"  , py::arg("edge"),  py::arg("face"))
        .def("CheckCurve3dWithPCurve",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const opencascade::handle<Geom_Surface> & ,  const TopLoc_Location &  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const opencascade::handle<Geom_Surface> & ,  const TopLoc_Location &  ) >(&ShapeAnalysis_Edge::CheckCurve3dWithPCurve),
             R"#(Checks mutual orientation of 3d curve and pcurve on the analysis of curves bounding points)#"  , py::arg("edge"),  py::arg("surface"),  py::arg("location"))
        .def("Status",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Edge::Status),
             R"#(Returns the status (in the form of True/False) of last Check)#"  , py::arg("status"))
        .def("CheckSameParameter",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  Standard_Real & ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  Standard_Real & ,  const Standard_Integer  ) >(&ShapeAnalysis_Edge::CheckSameParameter),
             R"#(Checks the edge to be SameParameter. Calculates the maximal deviation between 3d curve and each pcurve of the edge on <NbControl> equidistant points (the same algorithm as in BRepCheck; default value is 23 as in BRepCheck). This deviation is returned in <maxdev> parameter. If deviation is greater than tolerance of the edge (i.e. incorrect flag) returns False, else returns True.)#"  , py::arg("edge"),  py::arg("maxdev"),  py::arg("NbControl")=static_cast<const Standard_Integer>(23))
        .def("CheckSameParameter",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  Standard_Real & ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  Standard_Real & ,  const Standard_Integer  ) >(&ShapeAnalysis_Edge::CheckSameParameter),
             R"#(Checks the edge to be SameParameter. Calculates the maximal deviation between 3d curve and each pcurve of the edge on <NbControl> equidistant points (the same algorithm as in BRepCheck; default value is 23 as in BRepCheck). This deviation is returned in <maxdev> parameter. If deviation is greater than tolerance of the edge (i.e. incorrect flag) returns False, else returns True.)#"  , py::arg("theEdge"),  py::arg("theFace"),  py::arg("theMaxdev"),  py::arg("theNbControl")=static_cast<const Standard_Integer>(23))
        .def("CheckPCurveRange",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const Standard_Real ,  const Standard_Real ,  const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const Standard_Real ,  const Standard_Real ,  const opencascade::handle<Geom2d_Curve> &  ) >(&ShapeAnalysis_Edge::CheckPCurveRange),
             R"#(Checks possibility for pcurve thePC to have range [theFirst, theLast] (edge range) having respect to real first, last parameters of thePC)#"  , py::arg("theFirst"),  py::arg("theLast"),  py::arg("thePC"))
        .def("CheckOverlapping",
             (Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  Standard_Real & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Edge::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  Standard_Real & ,  const Standard_Real  ) >(&ShapeAnalysis_Edge::CheckOverlapping),
             R"#(Checks the first edge is overlapped with second edge. If distance between two edges is less then theTolOverlap edges is overlapped. theDomainDis - length of part of edges on wich edges is overlapped.)#"  , py::arg("theEdge1"),  py::arg("theEdge2"),  py::arg("theTolOverlap"),  py::arg("theDomainDist")=static_cast<const Standard_Real>(0.0))
        .def_static("ComputeDeviation_s",
                    (Standard_Boolean (*)( const Adaptor3d_Curve & ,  const Adaptor3d_Curve & ,  const Standard_Boolean ,  Standard_Real & ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (*)( const Adaptor3d_Curve & ,  const Adaptor3d_Curve & ,  const Standard_Boolean ,  Standard_Real & ,  const Standard_Integer  ) >(&ShapeAnalysis_Edge::ComputeDeviation),
                    R"#(Computes the maximal deviation between the two curve representations. dev is an input/output parameter and contains the computed deviation (should be initialized with 0. for the first call). Used by CheckSameParameter().)#"  , py::arg("CRef"),  py::arg("Other"),  py::arg("SameParameter"),  py::arg("dev"),  py::arg("NCONTROL"))
;


    static_cast<py::class_<ShapeAnalysis_ShapeTolerance ,std::unique_ptr<ShapeAnalysis_ShapeTolerance>  >>(m.attr("ShapeAnalysis_ShapeTolerance"))
        .def(py::init<  >()  )
        .def("Tolerance",
             (Standard_Real (ShapeAnalysis_ShapeTolerance::*)( const TopoDS_Shape & ,  const Standard_Integer ,  const TopAbs_ShapeEnum  ) ) static_cast<Standard_Real (ShapeAnalysis_ShapeTolerance::*)( const TopoDS_Shape & ,  const Standard_Integer ,  const TopAbs_ShapeEnum  ) >(&ShapeAnalysis_ShapeTolerance::Tolerance),
             R"#(Determines a tolerance from the ones stored in a shape Remark : calls InitTolerance and AddTolerance, hence, can be used to start a series for cumulating tolerance <mode> = 0 : returns the average value between sub-shapes, <mode> > 0 : returns the maximal found, <mode> < 0 : returns the minimal found. <type> defines what kinds of sub-shapes to consider: SHAPE (default) : all : VERTEX, EDGE, FACE, VERTEX : only vertices, EDGE : only edges, FACE : only faces, SHELL : combined SHELL + FACE, for each face (and containing shell), also checks EDGE and VERTEX)#"  , py::arg("shape"),  py::arg("mode"),  py::arg("type")=static_cast<const TopAbs_ShapeEnum>(TopAbs_SHAPE))
        .def("OverTolerance",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeTolerance::*)( const TopoDS_Shape & ,  const Standard_Real ,  const TopAbs_ShapeEnum  ) const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeTolerance::*)( const TopoDS_Shape & ,  const Standard_Real ,  const TopAbs_ShapeEnum  ) const>(&ShapeAnalysis_ShapeTolerance::OverTolerance),
             R"#(Determines which shapes have a tolerance over the given value <type> is interpreted as in the method Tolerance)#"  , py::arg("shape"),  py::arg("value"),  py::arg("type")=static_cast<const TopAbs_ShapeEnum>(TopAbs_SHAPE))
        .def("InTolerance",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeTolerance::*)( const TopoDS_Shape & ,  const Standard_Real ,  const Standard_Real ,  const TopAbs_ShapeEnum  ) const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeTolerance::*)( const TopoDS_Shape & ,  const Standard_Real ,  const Standard_Real ,  const TopAbs_ShapeEnum  ) const>(&ShapeAnalysis_ShapeTolerance::InTolerance),
             R"#(Determines which shapes have a tolerance within a given interval <type> is interpreted as in the method Tolerance)#"  , py::arg("shape"),  py::arg("valmin"),  py::arg("valmax"),  py::arg("type")=static_cast<const TopAbs_ShapeEnum>(TopAbs_SHAPE))
        .def("InitTolerance",
             (void (ShapeAnalysis_ShapeTolerance::*)() ) static_cast<void (ShapeAnalysis_ShapeTolerance::*)() >(&ShapeAnalysis_ShapeTolerance::InitTolerance),
             R"#(Initializes computation of cumulated tolerance)#" )
        .def("AddTolerance",
             (void (ShapeAnalysis_ShapeTolerance::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum  ) ) static_cast<void (ShapeAnalysis_ShapeTolerance::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum  ) >(&ShapeAnalysis_ShapeTolerance::AddTolerance),
             R"#(Adds data on new Shape to compute Cumulated Tolerance (prepares three computations : maximal, average, minimal))#"  , py::arg("shape"),  py::arg("type")=static_cast<const TopAbs_ShapeEnum>(TopAbs_SHAPE))
        .def("GlobalTolerance",
             (Standard_Real (ShapeAnalysis_ShapeTolerance::*)( const Standard_Integer  ) const) static_cast<Standard_Real (ShapeAnalysis_ShapeTolerance::*)( const Standard_Integer  ) const>(&ShapeAnalysis_ShapeTolerance::GlobalTolerance),
             R"#(Returns the computed tolerance according to the <mode> <mode> = 0 : average <mode> > 0 : maximal <mode> < 0 : minimal)#"  , py::arg("mode"))
;


    static_cast<py::class_<ShapeAnalysis_Surface ,opencascade::handle<ShapeAnalysis_Surface>  , Standard_Transient >>(m.attr("ShapeAnalysis_Surface"))
        .def(py::init< const opencascade::handle<Geom_Surface> & >()  , py::arg("S") )
        .def("Init",
             (void (ShapeAnalysis_Surface::*)( const opencascade::handle<Geom_Surface> &  ) ) static_cast<void (ShapeAnalysis_Surface::*)( const opencascade::handle<Geom_Surface> &  ) >(&ShapeAnalysis_Surface::Init),
             R"#(Loads existing surface)#"  , py::arg("S"))
        .def("Init",
             (void (ShapeAnalysis_Surface::*)( const opencascade::handle<ShapeAnalysis_Surface> &  ) ) static_cast<void (ShapeAnalysis_Surface::*)( const opencascade::handle<ShapeAnalysis_Surface> &  ) >(&ShapeAnalysis_Surface::Init),
             R"#(Reads all the data from another Surface, without recomputing)#"  , py::arg("other"))
        .def("SetDomain",
             (void (ShapeAnalysis_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (ShapeAnalysis_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&ShapeAnalysis_Surface::SetDomain),
             R"#(None)#"  , py::arg("U1"),  py::arg("U2"),  py::arg("V1"),  py::arg("V2"))
        .def("Surface",
             (const opencascade::handle<Geom_Surface> & (ShapeAnalysis_Surface::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (ShapeAnalysis_Surface::*)() const>(&ShapeAnalysis_Surface::Surface),
             R"#(Returns a surface being analyzed)#" )
        .def("Adaptor3d",
             (const opencascade::handle<GeomAdaptor_HSurface> & (ShapeAnalysis_Surface::*)() ) static_cast<const opencascade::handle<GeomAdaptor_HSurface> & (ShapeAnalysis_Surface::*)() >(&ShapeAnalysis_Surface::Adaptor3d),
             R"#(Returns the Adaptor. Creates it if not yet done.)#" )
        .def("TrueAdaptor3d",
             (const opencascade::handle<GeomAdaptor_HSurface> & (ShapeAnalysis_Surface::*)() const) static_cast<const opencascade::handle<GeomAdaptor_HSurface> & (ShapeAnalysis_Surface::*)() const>(&ShapeAnalysis_Surface::TrueAdaptor3d),
             R"#(Returns the Adaptor (may be Null if method Adaptor() was not called))#" )
        .def("Gap",
             (Standard_Real (ShapeAnalysis_Surface::*)() const) static_cast<Standard_Real (ShapeAnalysis_Surface::*)() const>(&ShapeAnalysis_Surface::Gap),
             R"#(Returns 3D distance found by one of the following methods. IsDegenerated, DegeneratedValues, ProjectDegenerated (distance between 3D point and found or last (if not found) singularity), IsUClosed, IsVClosed (minimum value of precision to consider the surface to be closed), ValueOfUV (distance between 3D point and found solution).)#" )
        .def("Value",
             (gp_Pnt (ShapeAnalysis_Surface::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<gp_Pnt (ShapeAnalysis_Surface::*)( const Standard_Real ,  const Standard_Real  ) >(&ShapeAnalysis_Surface::Value),
             R"#(Returns a 3D point specified by parameters in surface parametrical space)#"  , py::arg("u"),  py::arg("v"))
        .def("Value",
             (gp_Pnt (ShapeAnalysis_Surface::*)( const gp_Pnt2d &  ) ) static_cast<gp_Pnt (ShapeAnalysis_Surface::*)( const gp_Pnt2d &  ) >(&ShapeAnalysis_Surface::Value),
             R"#(Returns a 3d point specified by a point in surface parametrical space)#"  , py::arg("p2d"))
        .def("HasSingularities",
             (Standard_Boolean (ShapeAnalysis_Surface::*)( const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Surface::*)( const Standard_Real  ) >(&ShapeAnalysis_Surface::HasSingularities),
             R"#(Returns True if the surface has singularities for the given precision (i.e. if there are surface singularities with sizes not greater than precision).)#"  , py::arg("preci"))
        .def("NbSingularities",
             (Standard_Integer (ShapeAnalysis_Surface::*)( const Standard_Real  ) ) static_cast<Standard_Integer (ShapeAnalysis_Surface::*)( const Standard_Real  ) >(&ShapeAnalysis_Surface::NbSingularities),
             R"#(Returns the number of singularities for the given precision (i.e. number of surface singularities with sizes not greater than precision).)#"  , py::arg("preci"))
        .def("Singularity",
             (Standard_Boolean (ShapeAnalysis_Surface::*)( const Standard_Integer ,  Standard_Real & ,  gp_Pnt & ,  gp_Pnt2d & ,  gp_Pnt2d & ,  Standard_Real & ,  Standard_Real & ,  Standard_Boolean &  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Surface::*)( const Standard_Integer ,  Standard_Real & ,  gp_Pnt & ,  gp_Pnt2d & ,  gp_Pnt2d & ,  Standard_Real & ,  Standard_Real & ,  Standard_Boolean &  ) >(&ShapeAnalysis_Surface::Singularity),
             R"#(Returns the characteristics of the singularity specified by its rank number <num>. That means, that it is not neccessary for <num> to be in the range [1, NbSingularities] but must be not greater than possible (see ComputeSingularities). The returned characteristics are: preci: the smallest precision with which the iso-line is considered as degenerated, P3d: 3D point of singularity (middle point of the surface iso-line), firstP2d and lastP2d: first and last 2D points of the iso-line in parametrical surface, firstpar and lastpar: first and last parameters of the iso-line in parametrical surface, uisodeg: if the degenerated iso-line is U-iso (True) or V-iso (False). Returns False if <num> is out of range, else returns True.)#"  , py::arg("num"),  py::arg("preci"),  py::arg("P3d"),  py::arg("firstP2d"),  py::arg("lastP2d"),  py::arg("firstpar"),  py::arg("lastpar"),  py::arg("uisodeg"))
        .def("IsDegenerated",
             (Standard_Boolean (ShapeAnalysis_Surface::*)( const gp_Pnt & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Surface::*)( const gp_Pnt & ,  const Standard_Real  ) >(&ShapeAnalysis_Surface::IsDegenerated),
             R"#(Returns True if there is at least one surface boundary which is considered as degenerated with <preci> and distance between P3d and corresponding singular point is less than <preci>)#"  , py::arg("P3d"),  py::arg("preci"))
        .def("DegeneratedValues",
             (Standard_Boolean (ShapeAnalysis_Surface::*)( const gp_Pnt & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Pnt2d & ,  Standard_Real & ,  Standard_Real & ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Surface::*)( const gp_Pnt & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Pnt2d & ,  Standard_Real & ,  Standard_Real & ,  const Standard_Boolean  ) >(&ShapeAnalysis_Surface::DegeneratedValues),
             R"#(Returns True if there is at least one surface iso-line which is considered as degenerated with <preci> and distance between P3d and corresponding singular point is less than <preci> (like IsDegenerated). Returns characteristics of the first found boundary matching those criteria.)#"  , py::arg("P3d"),  py::arg("preci"),  py::arg("firstP2d"),  py::arg("lastP2d"),  py::arg("firstpar"),  py::arg("lastpar"),  py::arg("forward")=static_cast<const Standard_Boolean>(Standard_True))
        .def("ProjectDegenerated",
             (Standard_Boolean (ShapeAnalysis_Surface::*)( const gp_Pnt & ,  const Standard_Real ,  const gp_Pnt2d & ,  gp_Pnt2d &  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Surface::*)( const gp_Pnt & ,  const Standard_Real ,  const gp_Pnt2d & ,  gp_Pnt2d &  ) >(&ShapeAnalysis_Surface::ProjectDegenerated),
             R"#(Projects a point <P3d> on a singularity by computing one of the coordinates of preliminary computed <result>.)#"  , py::arg("P3d"),  py::arg("preci"),  py::arg("neighbour"),  py::arg("result"))
        .def("ProjectDegenerated",
             (Standard_Boolean (ShapeAnalysis_Surface::*)( const Standard_Integer ,   const NCollection_Sequence<gp_Pnt> & ,  NCollection_Sequence<gp_Pnt2d> & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Surface::*)( const Standard_Integer ,   const NCollection_Sequence<gp_Pnt> & ,  NCollection_Sequence<gp_Pnt2d> & ,  const Standard_Real ,  const Standard_Boolean  ) >(&ShapeAnalysis_Surface::ProjectDegenerated),
             R"#(Checks points at the beginning (direct is True) or end (direct is False) of array <points> to lie in singularity of surface, and if yes, adjusts the indeterminate 2d coordinate of these points by nearest point which is not in singularity. Returns True if some points were adjusted.)#"  , py::arg("nbrPnt"),  py::arg("points"),  py::arg("pnt2d"),  py::arg("preci"),  py::arg("direct"))
        .def("IsDegenerated",
             (Standard_Boolean (ShapeAnalysis_Surface::*)( const gp_Pnt2d & ,  const gp_Pnt2d & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Surface::*)( const gp_Pnt2d & ,  const gp_Pnt2d & ,  const Standard_Real ,  const Standard_Real  ) >(&ShapeAnalysis_Surface::IsDegenerated),
             R"#(Returns True if straight pcurve going from point p2d1 to p2d2 is degenerate, i.e. lies in the singularity of the surface. NOTE: it uses another method of detecting singularity than used by ComputeSingularities() et al.! For that, maximums of distances between points p2d1, p2d2 and 0.5*(p2d1+p2d2) and between corresponding 3d points are computed. The pcurve (p2d1, p2d2) is considered as degenerate if: - max distance in 3d is less than <tol> - max distance in 2d is at least <ratio> times greather than the Resolution computed from max distance in 3d (max3d < tol && max2d > ratio * Resolution(max3d)) NOTE: <ratio> should be >1 (e.g. 10))#"  , py::arg("p2d1"),  py::arg("p2d2"),  py::arg("tol"),  py::arg("ratio"))
        .def("Bounds",
             (void (ShapeAnalysis_Surface::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (ShapeAnalysis_Surface::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const>(&ShapeAnalysis_Surface::Bounds),
             R"#(Returns the bounds of the surface (from Bounds from Surface, but buffered))#"  , py::arg("ufirst"),  py::arg("ulast"),  py::arg("vfirst"),  py::arg("vlast"))
        .def("ComputeBoundIsos",
             (void (ShapeAnalysis_Surface::*)() ) static_cast<void (ShapeAnalysis_Surface::*)() >(&ShapeAnalysis_Surface::ComputeBoundIsos),
             R"#(Computes bound isos (protected against exceptions))#" )
        .def("UIso",
             (opencascade::handle<Geom_Curve> (ShapeAnalysis_Surface::*)( const Standard_Real  ) ) static_cast<opencascade::handle<Geom_Curve> (ShapeAnalysis_Surface::*)( const Standard_Real  ) >(&ShapeAnalysis_Surface::UIso),
             R"#(Returns a U-Iso. Null if not possible or failed Remark : bound isos are buffered)#"  , py::arg("U"))
        .def("VIso",
             (opencascade::handle<Geom_Curve> (ShapeAnalysis_Surface::*)( const Standard_Real  ) ) static_cast<opencascade::handle<Geom_Curve> (ShapeAnalysis_Surface::*)( const Standard_Real  ) >(&ShapeAnalysis_Surface::VIso),
             R"#(Returns a V-Iso. Null if not possible or failed Remark : bound isos are buffered)#"  , py::arg("V"))
        .def("IsUClosed",
             (Standard_Boolean (ShapeAnalysis_Surface::*)( const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Surface::*)( const Standard_Real  ) >(&ShapeAnalysis_Surface::IsUClosed),
             R"#(Tells if the Surface is spatially closed in U with given precision. If <preci> < 0 then Precision::Confusion is used. If Geom_Surface says that the surface is U-closed, this method also says this. Otherwise additional analysis is performed, comparing given precision with the following distances: - periodic B-Splines are closed, - polinomial B-Spline with boundary multiplicities degree+1 and Bezier - maximum distance between poles, - rational B-Spline or one with boundary multiplicities not degree+1 - maximum distance computed at knots and their middles, - surface of extrusion - distance between ends of basis curve, - other (RectangularTrimmed and Offset) - maximum distance computed at 100 equi-distanted points.)#"  , py::arg("preci")=static_cast<const Standard_Real>(- 1))
        .def("IsVClosed",
             (Standard_Boolean (ShapeAnalysis_Surface::*)( const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Surface::*)( const Standard_Real  ) >(&ShapeAnalysis_Surface::IsVClosed),
             R"#(Tells if the Surface is spatially closed in V with given precision. If <preci> < 0 then Precision::Confusion is used. If Geom_Surface says that the surface is V-closed, this method also says this. Otherwise additional analysis is performed, comparing given precision with the following distances: - periodic B-Splines are closed, - polinomial B-Spline with boundary multiplicities degree+1 and Bezier - maximum distance between poles, - rational B-Spline or one with boundary multiplicities not degree+1 - maximum distance computed at knots and their middles, - surface of revolution - distance between ends of basis curve, - other (RectangularTrimmed and Offset) - maximum distance computed at 100 equi-distanted points.)#"  , py::arg("preci")=static_cast<const Standard_Real>(- 1))
        .def("ValueOfUV",
             (gp_Pnt2d (ShapeAnalysis_Surface::*)( const gp_Pnt & ,  const Standard_Real  ) ) static_cast<gp_Pnt2d (ShapeAnalysis_Surface::*)( const gp_Pnt & ,  const Standard_Real  ) >(&ShapeAnalysis_Surface::ValueOfUV),
             R"#(Computes the parameters in the surface parametrical space of 3D point. The result is parameters of the point projected onto the surface. This method enhances functionality provided by the standard tool GeomAPI_ProjectPointOnSurface by treatment of cases when the projected point is near to the surface boundaries and when this standard tool fails.)#"  , py::arg("P3D"),  py::arg("preci"))
        .def("NextValueOfUV",
             (gp_Pnt2d (ShapeAnalysis_Surface::*)( const gp_Pnt2d & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<gp_Pnt2d (ShapeAnalysis_Surface::*)( const gp_Pnt2d & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real  ) >(&ShapeAnalysis_Surface::NextValueOfUV),
             R"#(Projects a point P3D on the surface. Does the same thing as ValueOfUV but tries to optimize computations by taking into account previous point <p2dPrev>: makes a step by UV and tries Newton algorithm. If <maxpreci> >0. and distance between solution and P3D is greater than <maxpreci>, that solution is considered as bad, and ValueOfUV() is used. If not succeded, calls ValueOfUV())#"  , py::arg("p2dPrev"),  py::arg("P3D"),  py::arg("preci"),  py::arg("maxpreci")=static_cast<const Standard_Real>(- 1.0))
        .def("UVFromIso",
             (Standard_Real (ShapeAnalysis_Surface::*)( const gp_Pnt & ,  const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Real (ShapeAnalysis_Surface::*)( const gp_Pnt & ,  const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) >(&ShapeAnalysis_Surface::UVFromIso),
             R"#(Tries a refinement of an already computed couple (U,V) by using projecting 3D point on iso-lines: 1. boundaries of the surface, 2. iso-lines passing through (U,V) 3. iteratively received iso-lines passing through new U and new V (number of iterations is limited by 5 in each direction) Returns the best resulting distance between P3D and Value(U,V) in the case of success. Else, returns a very great value)#"  , py::arg("P3D"),  py::arg("preci"),  py::arg("U"),  py::arg("V"))
        .def("UCloseVal",
             (Standard_Real (ShapeAnalysis_Surface::*)() const) static_cast<Standard_Real (ShapeAnalysis_Surface::*)() const>(&ShapeAnalysis_Surface::UCloseVal),
             R"#(Returns minimum value to consider the surface as U-closed)#" )
        .def("VCloseVal",
             (Standard_Real (ShapeAnalysis_Surface::*)() const) static_cast<Standard_Real (ShapeAnalysis_Surface::*)() const>(&ShapeAnalysis_Surface::VCloseVal),
             R"#(Returns minimum value to consider the surface as V-closed)#" )
        .def("GetBoxUF",
             (const Bnd_Box & (ShapeAnalysis_Surface::*)() ) static_cast<const Bnd_Box & (ShapeAnalysis_Surface::*)() >(&ShapeAnalysis_Surface::GetBoxUF),
             R"#(None)#" )
        .def("GetBoxUL",
             (const Bnd_Box & (ShapeAnalysis_Surface::*)() ) static_cast<const Bnd_Box & (ShapeAnalysis_Surface::*)() >(&ShapeAnalysis_Surface::GetBoxUL),
             R"#(None)#" )
        .def("GetBoxVF",
             (const Bnd_Box & (ShapeAnalysis_Surface::*)() ) static_cast<const Bnd_Box & (ShapeAnalysis_Surface::*)() >(&ShapeAnalysis_Surface::GetBoxVF),
             R"#(None)#" )
        .def("GetBoxVL",
             (const Bnd_Box & (ShapeAnalysis_Surface::*)() ) static_cast<const Bnd_Box & (ShapeAnalysis_Surface::*)() >(&ShapeAnalysis_Surface::GetBoxVL),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeAnalysis_Surface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeAnalysis_Surface::*)() const>(&ShapeAnalysis_Surface::DynamicType),
             R"#(None)#" )
        .def("Surface",
             (const opencascade::handle<Geom_Surface> & (ShapeAnalysis_Surface::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (ShapeAnalysis_Surface::*)() const>(&ShapeAnalysis_Surface::Surface),
             R"#(Returns a surface being analyzed)#" )
        .def("TrueAdaptor3d",
             (const opencascade::handle<GeomAdaptor_HSurface> & (ShapeAnalysis_Surface::*)() const) static_cast<const opencascade::handle<GeomAdaptor_HSurface> & (ShapeAnalysis_Surface::*)() const>(&ShapeAnalysis_Surface::TrueAdaptor3d),
             R"#(Returns the Adaptor (may be Null if method Adaptor() was not called))#" )
        .def("Gap",
             (Standard_Real (ShapeAnalysis_Surface::*)() const) static_cast<Standard_Real (ShapeAnalysis_Surface::*)() const>(&ShapeAnalysis_Surface::Gap),
             R"#(Returns 3D distance found by one of the following methods. IsDegenerated, DegeneratedValues, ProjectDegenerated (distance between 3D point and found or last (if not found) singularity), IsUClosed, IsVClosed (minimum value of precision to consider the surface to be closed), ValueOfUV (distance between 3D point and found solution).)#" )
        .def("Value",
             (gp_Pnt (ShapeAnalysis_Surface::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<gp_Pnt (ShapeAnalysis_Surface::*)( const Standard_Real ,  const Standard_Real  ) >(&ShapeAnalysis_Surface::Value),
             R"#(Returns a 3D point specified by parameters in surface parametrical space)#"  , py::arg("u"),  py::arg("v"))
        .def("Value",
             (gp_Pnt (ShapeAnalysis_Surface::*)( const gp_Pnt2d &  ) ) static_cast<gp_Pnt (ShapeAnalysis_Surface::*)( const gp_Pnt2d &  ) >(&ShapeAnalysis_Surface::Value),
             R"#(Returns a 3d point specified by a point in surface parametrical space)#"  , py::arg("p2d"))
        .def("Bounds",
             (void (ShapeAnalysis_Surface::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (ShapeAnalysis_Surface::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const>(&ShapeAnalysis_Surface::Bounds),
             R"#(Returns the bounds of the surface (from Bounds from Surface, but buffered))#"  , py::arg("ufirst"),  py::arg("ulast"),  py::arg("vfirst"),  py::arg("vlast"))
        .def("UCloseVal",
             (Standard_Real (ShapeAnalysis_Surface::*)() const) static_cast<Standard_Real (ShapeAnalysis_Surface::*)() const>(&ShapeAnalysis_Surface::UCloseVal),
             R"#(Returns minimum value to consider the surface as U-closed)#" )
        .def("VCloseVal",
             (Standard_Real (ShapeAnalysis_Surface::*)() const) static_cast<Standard_Real (ShapeAnalysis_Surface::*)() const>(&ShapeAnalysis_Surface::VCloseVal),
             R"#(Returns minimum value to consider the surface as V-closed)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeAnalysis_Surface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeAnalysis_Surface::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<ShapeAnalysis_Wire ,opencascade::handle<ShapeAnalysis_Wire>  , Standard_Transient >>(m.attr("ShapeAnalysis_Wire"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Wire &,const TopoDS_Face &,const Standard_Real >()  , py::arg("wire"),  py::arg("face"),  py::arg("precision") )
        .def(py::init< const opencascade::handle<ShapeExtend_WireData> &,const TopoDS_Face &,const Standard_Real >()  , py::arg("sbwd"),  py::arg("face"),  py::arg("precision") )
        .def("Init",
             (void (ShapeAnalysis_Wire::*)( const TopoDS_Wire & ,  const TopoDS_Face & ,  const Standard_Real  ) ) static_cast<void (ShapeAnalysis_Wire::*)( const TopoDS_Wire & ,  const TopoDS_Face & ,  const Standard_Real  ) >(&ShapeAnalysis_Wire::Init),
             R"#(Initializes the object with standard TopoDS_Wire, face and precision)#"  , py::arg("wire"),  py::arg("face"),  py::arg("precision"))
        .def("Init",
             (void (ShapeAnalysis_Wire::*)( const opencascade::handle<ShapeExtend_WireData> & ,  const TopoDS_Face & ,  const Standard_Real  ) ) static_cast<void (ShapeAnalysis_Wire::*)( const opencascade::handle<ShapeExtend_WireData> & ,  const TopoDS_Face & ,  const Standard_Real  ) >(&ShapeAnalysis_Wire::Init),
             R"#(Initializes the object with WireData object, face and precision)#"  , py::arg("sbwd"),  py::arg("face"),  py::arg("precision"))
        .def("Load",
             (void (ShapeAnalysis_Wire::*)( const TopoDS_Wire &  ) ) static_cast<void (ShapeAnalysis_Wire::*)( const TopoDS_Wire &  ) >(&ShapeAnalysis_Wire::Load),
             R"#(Loads the object with standard TopoDS_Wire)#"  , py::arg("wire"))
        .def("Load",
             (void (ShapeAnalysis_Wire::*)( const opencascade::handle<ShapeExtend_WireData> &  ) ) static_cast<void (ShapeAnalysis_Wire::*)( const opencascade::handle<ShapeExtend_WireData> &  ) >(&ShapeAnalysis_Wire::Load),
             R"#(Loads the object with WireData object)#"  , py::arg("sbwd"))
        .def("SetFace",
             (void (ShapeAnalysis_Wire::*)( const TopoDS_Face &  ) ) static_cast<void (ShapeAnalysis_Wire::*)( const TopoDS_Face &  ) >(&ShapeAnalysis_Wire::SetFace),
             R"#(Loads the face the wire lies on)#"  , py::arg("face"))
        .def("SetSurface",
             (void (ShapeAnalysis_Wire::*)( const opencascade::handle<Geom_Surface> &  ) ) static_cast<void (ShapeAnalysis_Wire::*)( const opencascade::handle<Geom_Surface> &  ) >(&ShapeAnalysis_Wire::SetSurface),
             R"#(Loads the surface the wire lies on)#"  , py::arg("surface"))
        .def("SetSurface",
             (void (ShapeAnalysis_Wire::*)( const opencascade::handle<Geom_Surface> & ,  const TopLoc_Location &  ) ) static_cast<void (ShapeAnalysis_Wire::*)( const opencascade::handle<Geom_Surface> & ,  const TopLoc_Location &  ) >(&ShapeAnalysis_Wire::SetSurface),
             R"#(Loads the surface the wire lies on)#"  , py::arg("surface"),  py::arg("location"))
        .def("SetPrecision",
             (void (ShapeAnalysis_Wire::*)( const Standard_Real  ) ) static_cast<void (ShapeAnalysis_Wire::*)( const Standard_Real  ) >(&ShapeAnalysis_Wire::SetPrecision),
             R"#(None)#"  , py::arg("precision"))
        .def("ClearStatuses",
             (void (ShapeAnalysis_Wire::*)() ) static_cast<void (ShapeAnalysis_Wire::*)() >(&ShapeAnalysis_Wire::ClearStatuses),
             R"#(Unsets all the status and distance fields wire, face and precision are not cleared)#" )
        .def("IsLoaded",
             (Standard_Boolean (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::IsLoaded),
             R"#(Returns True if wire is loaded and has number of edges >0)#" )
        .def("IsReady",
             (Standard_Boolean (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::IsReady),
             R"#(Returns True if IsLoaded and underlying face is not null)#" )
        .def("Precision",
             (Standard_Real (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Real (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::Precision),
             R"#(Returns the value of precision)#" )
        .def("WireData",
             (const opencascade::handle<ShapeExtend_WireData> & (ShapeAnalysis_Wire::*)() const) static_cast<const opencascade::handle<ShapeExtend_WireData> & (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::WireData),
             R"#(Returns wire object being analyzed)#" )
        .def("NbEdges",
             (Standard_Integer (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Integer (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::NbEdges),
             R"#(Returns the number of edges in the wire, or 0 if it is not loaded)#" )
        .def("Face",
             (const TopoDS_Face & (ShapeAnalysis_Wire::*)() const) static_cast<const TopoDS_Face & (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::Face),
             R"#(Returns the working face)#" )
        .def("Surface",
             (const opencascade::handle<ShapeAnalysis_Surface> & (ShapeAnalysis_Wire::*)() const) static_cast<const opencascade::handle<ShapeAnalysis_Surface> & (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::Surface),
             R"#(Returns the working surface)#" )
        .def("Perform",
             (Standard_Boolean (ShapeAnalysis_Wire::*)() ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)() >(&ShapeAnalysis_Wire::Perform),
             R"#(Performs all the checks in the following order : CheckOrder, CheckSmall, CheckConected, CheckEdgeCurves, CheckDegenerated, CheckSelfIntersection, CheckLacking, CheckClosed Returns: True if at least one method returned True; For deeper analysis use Status...(status) methods)#" )
        .def("CheckOrder",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Boolean ,  const Standard_Boolean  ) >(&ShapeAnalysis_Wire::CheckOrder),
             R"#(Calls CheckOrder and returns False if wire is already ordered (tail-to-head), True otherwise Flag <isClosed> defines if the wire is closed or not Flag <mode3d> defines which mode is used (3d or 2d))#"  , py::arg("isClosed")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("mode3d")=static_cast<const Standard_Boolean>(Standard_True))
        .def("CheckConnected",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Real  ) >(&ShapeAnalysis_Wire::CheckConnected),
             R"#(Calls to CheckConnected for each edge Returns: True if at least one pair of disconnected edges (not sharing the same vertex) was detected)#"  , py::arg("prec")=static_cast<const Standard_Real>(0.0))
        .def("CheckSmall",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Real  ) >(&ShapeAnalysis_Wire::CheckSmall),
             R"#(Calls to CheckSmall for each edge Returns: True if at least one small edge was detected)#"  , py::arg("precsmall")=static_cast<const Standard_Real>(0.0))
        .def("CheckEdgeCurves",
             (Standard_Boolean (ShapeAnalysis_Wire::*)() ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)() >(&ShapeAnalysis_Wire::CheckEdgeCurves),
             R"#(Checks edges geometry (consitency of 2d and 3d senses, adjasment of curves to the vertices, etc.). The order of the checks : Call ShapeAnalysis_Wire to check: ShapeAnalysis_Edge::CheckCurve3dWithPCurve (1), ShapeAnalysis_Edge::CheckVertcesWithPCurve (2), ShapeAnalysis_Edge::CheckVertcesWithCurve3d (3), CheckSeam (4) Additional: CheckGap3d (5), CheckGap2d (6), ShapeAnalysis_Edge::CheckSameParameter (7) Returns: True if at least one check returned True Remark: The numbers in brackets show with what DONEi or FAILi the status can be queried)#" )
        .def("CheckDegenerated",
             (Standard_Boolean (ShapeAnalysis_Wire::*)() ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)() >(&ShapeAnalysis_Wire::CheckDegenerated),
             R"#(Calls to CheckDegenerated for each edge Returns: True if at least one incorrect degenerated edge was detected)#" )
        .def("CheckClosed",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Real  ) >(&ShapeAnalysis_Wire::CheckClosed),
             R"#(Checks if wire is closed, performs CheckConnected, CheckDegenerated and CheckLacking for the first and the last edges Returns: True if at least one check returned True Status: FAIL1 or DONE1: see CheckConnected FAIL2 or DONE2: see CheckDegenerated)#"  , py::arg("prec")=static_cast<const Standard_Real>(0.0))
        .def("CheckSelfIntersection",
             (Standard_Boolean (ShapeAnalysis_Wire::*)() ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)() >(&ShapeAnalysis_Wire::CheckSelfIntersection),
             R"#(Checks self-intersection of the wire (considering pcurves) Looks for self-intersecting edges and each pair of intersecting edges. Warning: It does not check each edge with any other one (only each two adjacent edges) The order of the checks : CheckSelfIntersectingEdge, CheckIntersectingEdges Returns: True if at least one check returned True Status: FAIL1 or DONE1 - see CheckSelfIntersectingEdge FAIL2 or DONE2 - see CheckIntersectingEdges)#" )
        .def("CheckLacking",
             (Standard_Boolean (ShapeAnalysis_Wire::*)() ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)() >(&ShapeAnalysis_Wire::CheckLacking),
             R"#(Calls to CheckLacking for each edge Returns: True if at least one lacking edge was detected)#" )
        .def("CheckGaps3d",
             (Standard_Boolean (ShapeAnalysis_Wire::*)() ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)() >(&ShapeAnalysis_Wire::CheckGaps3d),
             R"#(None)#" )
        .def("CheckGaps2d",
             (Standard_Boolean (ShapeAnalysis_Wire::*)() ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)() >(&ShapeAnalysis_Wire::CheckGaps2d),
             R"#(None)#" )
        .def("CheckCurveGaps",
             (Standard_Boolean (ShapeAnalysis_Wire::*)() ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)() >(&ShapeAnalysis_Wire::CheckCurveGaps),
             R"#(None)#" )
        .def("CheckOrder",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( ShapeAnalysis_WireOrder & ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( ShapeAnalysis_WireOrder & ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&ShapeAnalysis_Wire::CheckOrder),
             R"#(Analyzes the order of the edges in the wire, uses class WireOrder for that purpose. Flag <isClosed> defines if the wire is closed or not Flag <mode3d> defines which mode is used (3d or 2d) Returns False if wire is already ordered (tail-to-head), True otherwise. Use returned WireOrder object for deeper analysis. Status: OK : the same edges orientation, the same edges sequence DONE1: the same edges orientation, not the same edges sequence DONE2: as DONE1 and gaps more than myPrecision DONE3: not the same edges orientation (some need to be reversed) DONE4: as DONE3 and gaps more than myPrecision FAIL : algorithm failed (could not detect order))#"  , py::arg("sawo"),  py::arg("isClosed")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("mode3d")=static_cast<const Standard_Boolean>(Standard_True))
        .def("CheckConnected",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer ,  const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer ,  const Standard_Real  ) >(&ShapeAnalysis_Wire::CheckConnected),
             R"#(Checks connected edges (num-th and preceeding). Tests with starting preci from <SBWD> or with <prec> if it is greater. Considers Vertices. Returns: False if edges are connected by the common vertex, else True Status : OK : Vertices (end of num-1 th edge and start on num-th one) are already the same DONE1 : Absolutely confused (gp::Resolution) DONE2 : Confused at starting <preci> from <SBWD> DONE3 : Confused at <prec> but not <preci> FAIL1 : Not confused FAIL2 : Not confused but confused with <preci> if reverse num-th edge)#"  , py::arg("num"),  py::arg("prec")=static_cast<const Standard_Real>(0.0))
        .def("CheckSmall",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer ,  const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer ,  const Standard_Real  ) >(&ShapeAnalysis_Wire::CheckSmall),
             R"#(Checks if an edge has a length not greater than myPreci or precsmall (if it is smaller) Returns: False if its length is greater than precision Status: OK : edge is not small or degenerated DONE1: edge is small, vertices are the same DONE2: edge is small, vertices are not the same FAIL : no 3d curve and pcurve)#"  , py::arg("num"),  py::arg("precsmall")=static_cast<const Standard_Real>(0.0))
        .def("CheckSeam",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer ,  opencascade::handle<Geom2d_Curve> & ,  opencascade::handle<Geom2d_Curve> & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer ,  opencascade::handle<Geom2d_Curve> & ,  opencascade::handle<Geom2d_Curve> & ,  Standard_Real & ,  Standard_Real &  ) >(&ShapeAnalysis_Wire::CheckSeam),
             R"#(Checks if a seam pcurves are correct oriented Returns: False (status OK) if given edge is not a seam or if it is OK C1 - current pcurve for FORWARD edge, C2 - current pcurve for REVERSED edge (if returns True they should be swapped for the seam), cf, cl - first and last parameters on curves Status: OK : Pcurves are correct or edge is not seam DONE : Seam pcurves should be swapped)#"  , py::arg("num"),  py::arg("C1"),  py::arg("C2"),  py::arg("cf"),  py::arg("cl"))
        .def("CheckSeam",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer  ) >(&ShapeAnalysis_Wire::CheckSeam),
             R"#(Checks if a seam pcurves are correct oriented See previous functions for details)#"  , py::arg("num"))
        .def("CheckDegenerated",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer ,  gp_Pnt2d & ,  gp_Pnt2d &  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer ,  gp_Pnt2d & ,  gp_Pnt2d &  ) >(&ShapeAnalysis_Wire::CheckDegenerated),
             R"#(Checks for degenerated edge between two adjacent ones. Fills parameters dgnr1 and dgnr2 with points in paramterical space that correspond to the singularity (either gap that needs to be filled by degenerated edge or that already filled) Returns: False if no singularity or edge is already degenerated, otherwise True Status: OK : No surface singularity, or edge is already degenerated DONE1: Degenerated edge should be inserted (gap in 2D) DONE2: Edge <num> should be made degenerated (recompute pcurve and set the flag) FAIL1: One of edges neighbouring to degenerated one has no pcurve FAIL2: Edge marked as degenerated and has no pcurve but singularity is not detected)#"  , py::arg("num"),  py::arg("dgnr1"),  py::arg("dgnr2"))
        .def("CheckDegenerated",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer  ) >(&ShapeAnalysis_Wire::CheckDegenerated),
             R"#(Checks for degenerated edge between two adjacent ones. Remark : Calls previous function Status : See the function above for details)#"  , py::arg("num"))
        .def("CheckGap3d",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer  ) >(&ShapeAnalysis_Wire::CheckGap3d),
             R"#(Checks gap between edges in 3D (3d curves). Checks the distance between ends of 3d curves of the num-th and preceeding edge. The distance can be queried by MinDistance3d.)#"  , py::arg("num")=static_cast<const Standard_Integer>(0))
        .def("CheckGap2d",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer  ) >(&ShapeAnalysis_Wire::CheckGap2d),
             R"#(Checks gap between edges in 2D (pcurves). Checks the distance between ends of pcurves of the num-th and preceeding edge. The distance can be queried by MinDistance2d.)#"  , py::arg("num")=static_cast<const Standard_Integer>(0))
        .def("CheckCurveGap",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer  ) >(&ShapeAnalysis_Wire::CheckCurveGap),
             R"#(Checks gap between points on 3D curve and points on surface generated by pcurve of the num-th edge. The distance can be queried by MinDistance3d.)#"  , py::arg("num")=static_cast<const Standard_Integer>(0))
        .def("CheckSelfIntersectingEdge",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer ,  NCollection_Sequence<IntRes2d_IntersectionPoint> & ,  NCollection_Sequence<gp_Pnt> &  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer ,  NCollection_Sequence<IntRes2d_IntersectionPoint> & ,  NCollection_Sequence<gp_Pnt> &  ) >(&ShapeAnalysis_Wire::CheckSelfIntersectingEdge),
             R"#(Checks if num-th edge is self-intersecting. Self-intersection is reported only if intersection point lies outside of both end vertices of the edge. Returns: True if edge is self-intersecting. If returns True it also fills the sequences of intersection points and corresponding 3d points (only that are not enclosed by a vertices) Status: FAIL1 : No pcurve FAIL2 : No vertices DONE1 : Self-intersection found)#"  , py::arg("num"),  py::arg("points2d"),  py::arg("points3d"))
        .def("CheckSelfIntersectingEdge",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer  ) >(&ShapeAnalysis_Wire::CheckSelfIntersectingEdge),
             R"#(None)#"  , py::arg("num"))
        .def("CheckIntersectingEdges",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer ,  NCollection_Sequence<IntRes2d_IntersectionPoint> & ,  NCollection_Sequence<gp_Pnt> & ,  NCollection_Sequence<Standard_Real> &  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer ,  NCollection_Sequence<IntRes2d_IntersectionPoint> & ,  NCollection_Sequence<gp_Pnt> & ,  NCollection_Sequence<Standard_Real> &  ) >(&ShapeAnalysis_Wire::CheckIntersectingEdges),
             R"#(Checks two adjacent edges for intersecting. Intersection is reported only if intersection point is not enclosed by the common end vertex of the edges. Returns: True if intersection is found. If returns True it also fills the sequences of intersection points, corresponding 3d points, and errors for them (half-distances between intersection points in 3d calculated from one and from another edge) Status: FAIL1 : No pcurve FAIL2 : No vertices DONE1 : Self-intersection found)#"  , py::arg("num"),  py::arg("points2d"),  py::arg("points3d"),  py::arg("errors"))
        .def("CheckIntersectingEdges",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer  ) >(&ShapeAnalysis_Wire::CheckIntersectingEdges),
             R"#(Checks two adjacent edges for intersecting. Remark : Calls the previous method Status : See the function above for details)#"  , py::arg("num"))
        .def("CheckIntersectingEdges",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer ,  const Standard_Integer ,  NCollection_Sequence<IntRes2d_IntersectionPoint> & ,  NCollection_Sequence<gp_Pnt> & ,  NCollection_Sequence<Standard_Real> &  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer ,  const Standard_Integer ,  NCollection_Sequence<IntRes2d_IntersectionPoint> & ,  NCollection_Sequence<gp_Pnt> & ,  NCollection_Sequence<Standard_Real> &  ) >(&ShapeAnalysis_Wire::CheckIntersectingEdges),
             R"#(Checks i-th and j-th edges for intersecting. Remark : See the previous method for details)#"  , py::arg("num1"),  py::arg("num2"),  py::arg("points2d"),  py::arg("points3d"),  py::arg("errors"))
        .def("CheckIntersectingEdges",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer ,  const Standard_Integer  ) >(&ShapeAnalysis_Wire::CheckIntersectingEdges),
             R"#(Checks i-th and j-th edges for intersecting. Remark : Calls previous method. Status : See the function above for details)#"  , py::arg("num1"),  py::arg("num2"))
        .def("CheckLacking",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Pnt2d &  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Pnt2d &  ) >(&ShapeAnalysis_Wire::CheckLacking),
             R"#(Checks if there is a gap in 2d between edges, not comprised by the tolerance of their common vertex. If <Tolerance> is greater than 0. and less than tolerance of the vertex, then this value is used for check. Returns: True if not closed gap was detected p2d1 and p2d2 are the endpoint of <num-1>th edge and start of the <num>th edge in 2d. Status: OK: No edge is lacking (3d and 2d connection) FAIL1: edges have no vertices (at least one of them) FAIL2: edges are neither connected by common vertex, nor have coincided vertices FAIL1: edges have no pcurves DONE1: the gap is detected which cannot be closed by the tolerance of the common vertex (or with value of <Tolerance>) DONE2: is set (together with DONE1) if gap is detected and the vector (p2d2 - p2d1) goes in direction opposite to the pcurves of the edges (if angle is more than 0.9*PI).)#"  , py::arg("num"),  py::arg("Tolerance"),  py::arg("p2d1"),  py::arg("p2d2"))
        .def("CheckLacking",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer ,  const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer ,  const Standard_Real  ) >(&ShapeAnalysis_Wire::CheckLacking),
             R"#(Checks if there is a gap in 2D between edges and not comprised by vertex tolerance The value of SBWD.thepreci is used. Returns: False if no edge should be inserted Status: OK : No edge is lacking (3d and 2d connection) DONE1 : The vertex tolerance should be increased only (2d gap is small) DONE2 : Edge can be inserted (3d and 2d gaps are large enough))#"  , py::arg("num"),  py::arg("Tolerance")=static_cast<const Standard_Real>(0.0))
        .def("CheckOuterBound",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Boolean  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Boolean  ) >(&ShapeAnalysis_Wire::CheckOuterBound),
             R"#(Checks if wire defines an outer bound on the face Uses ShapeAnalysis::IsOuterBound for analysis If <APIMake> is True uses BRepAPI_MakeWire to build the wire, if False (to be used only when edges share common vertices) uses BRep_Builder to build the wire)#"  , py::arg("APIMake")=static_cast<const Standard_Boolean>(Standard_True))
        .def("CheckNotchedEdges",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer ,  Standard_Integer & ,  Standard_Real & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const Standard_Integer ,  Standard_Integer & ,  Standard_Real & ,  const Standard_Real  ) >(&ShapeAnalysis_Wire::CheckNotchedEdges),
             R"#(Detects a notch)#"  , py::arg("num"),  py::arg("shortNum"),  py::arg("param"),  py::arg("Tolerance")=static_cast<const Standard_Real>(0.0))
        .def("CheckSmallArea",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const TopoDS_Wire &  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const TopoDS_Wire &  ) >(&ShapeAnalysis_Wire::CheckSmallArea),
             R"#(Checks if wire has parametric area less than precision.)#"  , py::arg("theWire"))
        .def("CheckShapeConnect",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const TopoDS_Shape & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const TopoDS_Shape & ,  const Standard_Real  ) >(&ShapeAnalysis_Wire::CheckShapeConnect),
             R"#(Checks with what orientation <shape> (wire or edge) can be connected to the wire. Tests distances with starting <preci> from <SBWD> (close confusion), but if given <prec> is greater, tests with <prec> (coarse confusion). The smallest found distance can be returned by MinDistance3d)#"  , py::arg("shape"),  py::arg("prec")=static_cast<const Standard_Real>(0.0))
        .def("CheckShapeConnect",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  const TopoDS_Shape & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  const TopoDS_Shape & ,  const Standard_Real  ) >(&ShapeAnalysis_Wire::CheckShapeConnect),
             R"#(The same as previous CheckShapeConnect but is more advanced. It returns the distances between each end of <sbwd> and each end of <shape>. For example, <tailhead> stores distance between tail of <sbwd> and head of <shape> Remark: First method CheckShapeConnect calls this one)#"  , py::arg("tailhead"),  py::arg("tailtail"),  py::arg("headtail"),  py::arg("headhead"),  py::arg("shape"),  py::arg("prec")=static_cast<const Standard_Real>(0.0))
        .def("CheckLoop",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ,  NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> &  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ,  NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> &  ) >(&ShapeAnalysis_Wire::CheckLoop),
             R"#(Checks existance of loop on wire and return vertices wich are loop vertices (vertices belonging to a few pairs of edges))#"  , py::arg("aMapLoopVertices"),  py::arg("aMapVertexEdges"),  py::arg("aMapSmallEdges"),  py::arg("aMapSeemEdges"))
        .def("CheckTail",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  TopoDS_Edge & ,  TopoDS_Edge & ,  TopoDS_Edge & ,  TopoDS_Edge &  ) ) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  TopoDS_Edge & ,  TopoDS_Edge & ,  TopoDS_Edge & ,  TopoDS_Edge &  ) >(&ShapeAnalysis_Wire::CheckTail),
             R"#(None)#"  , py::arg("theEdge1"),  py::arg("theEdge2"),  py::arg("theMaxSine"),  py::arg("theMaxWidth"),  py::arg("theMaxTolerance"),  py::arg("theEdge11"),  py::arg("theEdge12"),  py::arg("theEdge21"),  py::arg("theEdge22"))
        .def("StatusOrder",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusOrder),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusConnected",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusConnected),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusEdgeCurves",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusEdgeCurves),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusDegenerated",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusDegenerated),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusClosed",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusClosed),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusSmall",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusSmall),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusSelfIntersection",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusSelfIntersection),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusLacking",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusLacking),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusGaps3d",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusGaps3d),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusGaps2d",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusGaps2d),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusCurveGaps",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusCurveGaps),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusLoop",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusLoop),
             R"#(None)#"  , py::arg("Status"))
        .def("LastCheckStatus",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::LastCheckStatus),
             R"#(Querying the status of the LAST perfomed 'Advanced' checking procedure)#"  , py::arg("Status"))
        .def("MinDistance3d",
             (Standard_Real (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Real (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::MinDistance3d),
             R"#(Returns the last lowest distance in 3D computed by CheckOrientation, CheckConnected, CheckContinuity3d, CheckVertex, CheckNewVertex)#" )
        .def("MinDistance2d",
             (Standard_Real (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Real (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::MinDistance2d),
             R"#(Returns the last lowest distance in 2D-UV computed by CheckContinuity2d)#" )
        .def("MaxDistance3d",
             (Standard_Real (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Real (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::MaxDistance3d),
             R"#(Returns the last maximal distance in 3D computed by CheckOrientation, CheckConnected, CheckContinuity3d, CheckVertex, CheckNewVertex, CheckSameParameter)#" )
        .def("MaxDistance2d",
             (Standard_Real (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Real (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::MaxDistance2d),
             R"#(Returns the last maximal distance in 2D-UV computed by CheckContinuity2d)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeAnalysis_Wire::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::DynamicType),
             R"#(None)#" )
        .def("IsLoaded",
             (Standard_Boolean (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::IsLoaded),
             R"#(Returns True if wire is loaded and has number of edges >0)#" )
        .def("IsReady",
             (Standard_Boolean (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::IsReady),
             R"#(Returns True if IsLoaded and underlying face is not null)#" )
        .def("Precision",
             (Standard_Real (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Real (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::Precision),
             R"#(Returns the value of precision)#" )
        .def("WireData",
             (const opencascade::handle<ShapeExtend_WireData> & (ShapeAnalysis_Wire::*)() const) static_cast<const opencascade::handle<ShapeExtend_WireData> & (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::WireData),
             R"#(Returns wire object being analyzed)#" )
        .def("NbEdges",
             (Standard_Integer (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Integer (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::NbEdges),
             R"#(Returns the number of edges in the wire, or 0 if it is not loaded)#" )
        .def("Face",
             (const TopoDS_Face & (ShapeAnalysis_Wire::*)() const) static_cast<const TopoDS_Face & (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::Face),
             R"#(Returns the working face)#" )
        .def("Surface",
             (const opencascade::handle<ShapeAnalysis_Surface> & (ShapeAnalysis_Wire::*)() const) static_cast<const opencascade::handle<ShapeAnalysis_Surface> & (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::Surface),
             R"#(Returns the working surface)#" )
        .def("StatusOrder",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusOrder),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusConnected",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusConnected),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusEdgeCurves",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusEdgeCurves),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusDegenerated",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusDegenerated),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusClosed",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusClosed),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusSmall",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusSmall),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusSelfIntersection",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusSelfIntersection),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusLacking",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusLacking),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusGaps3d",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusGaps3d),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusGaps2d",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusGaps2d),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusCurveGaps",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusCurveGaps),
             R"#(None)#"  , py::arg("Status"))
        .def("StatusLoop",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::StatusLoop),
             R"#(None)#"  , py::arg("Status"))
        .def("LastCheckStatus",
             (Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Wire::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_Wire::LastCheckStatus),
             R"#(Querying the status of the LAST perfomed 'Advanced' checking procedure)#"  , py::arg("Status"))
        .def("MinDistance3d",
             (Standard_Real (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Real (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::MinDistance3d),
             R"#(Returns the last lowest distance in 3D computed by CheckOrientation, CheckConnected, CheckContinuity3d, CheckVertex, CheckNewVertex)#" )
        .def("MinDistance2d",
             (Standard_Real (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Real (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::MinDistance2d),
             R"#(Returns the last lowest distance in 2D-UV computed by CheckContinuity2d)#" )
        .def("MaxDistance3d",
             (Standard_Real (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Real (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::MaxDistance3d),
             R"#(Returns the last maximal distance in 3D computed by CheckOrientation, CheckConnected, CheckContinuity3d, CheckVertex, CheckNewVertex, CheckSameParameter)#" )
        .def("MaxDistance2d",
             (Standard_Real (ShapeAnalysis_Wire::*)() const) static_cast<Standard_Real (ShapeAnalysis_Wire::*)() const>(&ShapeAnalysis_Wire::MaxDistance2d),
             R"#(Returns the last maximal distance in 2D-UV computed by CheckContinuity2d)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeAnalysis_Wire::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeAnalysis_Wire::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<ShapeAnalysis_CheckSmallFace ,std::unique_ptr<ShapeAnalysis_CheckSmallFace>  >>(m.attr("ShapeAnalysis_CheckSmallFace"))
        .def(py::init<  >()  )
        .def("IsSpotFace",
             (Standard_Integer (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Face & ,  gp_Pnt & ,  Standard_Real & ,  const Standard_Real  ) const) static_cast<Standard_Integer (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Face & ,  gp_Pnt & ,  Standard_Real & ,  const Standard_Real  ) const>(&ShapeAnalysis_CheckSmallFace::IsSpotFace),
             R"#(Checks if a Face is as a Spot Returns 0 if not, 1 if yes, 2 if yes and all vertices are the same By default, considers the tolerance zone of its vertices A given value <tol> may be given to check a spot of this size If a Face is a Spot, its location is returned in <spot>, and <spotol> returns an equivalent tolerance, which is computed as half of max dimension of min-max box of the face)#"  , py::arg("F"),  py::arg("spot"),  py::arg("spotol"),  py::arg("tol")=static_cast<const Standard_Real>(- 1.0))
        .def("CheckSpotFace",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Face & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Face & ,  const Standard_Real  ) >(&ShapeAnalysis_CheckSmallFace::CheckSpotFace),
             R"#(Acts as IsSpotFace, but records in <infos> a diagnostic "SpotFace" with the Pnt as value (data "Location"))#"  , py::arg("F"),  py::arg("tol")=static_cast<const Standard_Real>(- 1.0))
        .def("IsStripSupport",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Face & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Face & ,  const Standard_Real  ) >(&ShapeAnalysis_CheckSmallFace::IsStripSupport),
             R"#(Checks if a Face lies on a Surface which is a strip So the Face is a strip. But a Face may be a strip elsewhere ..)#"  , py::arg("F"),  py::arg("tol")=static_cast<const Standard_Real>(- 1.0))
        .def("CheckStripEdges",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  Standard_Real &  ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  Standard_Real &  ) const>(&ShapeAnalysis_CheckSmallFace::CheckStripEdges),
             R"#(Checks if two edges define a strip, i.e. distance maxi below tolerance, given or some of those of E1 and E2)#"  , py::arg("E1"),  py::arg("E2"),  py::arg("tol"),  py::arg("dmax"))
        .def("FindStripEdges",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Face & ,  TopoDS_Edge & ,  TopoDS_Edge & ,  const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Face & ,  TopoDS_Edge & ,  TopoDS_Edge & ,  const Standard_Real ,  Standard_Real &  ) >(&ShapeAnalysis_CheckSmallFace::FindStripEdges),
             R"#(Searchs for two and only two edges up tolerance Returns True if OK, false if not 2 edges If True, returns the two edges and their maximum distance)#"  , py::arg("F"),  py::arg("E1"),  py::arg("E2"),  py::arg("tol"),  py::arg("dmax"))
        .def("CheckSingleStrip",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Face & ,  TopoDS_Edge & ,  TopoDS_Edge & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Face & ,  TopoDS_Edge & ,  TopoDS_Edge & ,  const Standard_Real  ) >(&ShapeAnalysis_CheckSmallFace::CheckSingleStrip),
             R"#(Checks if a Face is a single strip, i.e. brings two great edges which are confused on their whole length, possible other edges are small or null length)#"  , py::arg("F"),  py::arg("E1"),  py::arg("E2"),  py::arg("tol")=static_cast<const Standard_Real>(- 1.0))
        .def("CheckStripFace",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Face & ,  TopoDS_Edge & ,  TopoDS_Edge & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Face & ,  TopoDS_Edge & ,  TopoDS_Edge & ,  const Standard_Real  ) >(&ShapeAnalysis_CheckSmallFace::CheckStripFace),
             R"#(Checks if a Face is as a Strip Returns 0 if not or non determined, 1 if in U, 2 if in V By default, considers the tolerance zone of its edges A given value <tol> may be given to check a strip of max this width)#"  , py::arg("F"),  py::arg("E1"),  py::arg("E2"),  py::arg("tol")=static_cast<const Standard_Real>(- 1.0))
        .def("CheckSplittingVertices",
             (Standard_Integer (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Face & ,  NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ,  NCollection_DataMap<TopoDS_Shape, TColStd_ListOfReal, TopTools_ShapeMapHasher> & ,  TopoDS_Compound &  ) ) static_cast<Standard_Integer (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Face & ,  NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ,  NCollection_DataMap<TopoDS_Shape, TColStd_ListOfReal, TopTools_ShapeMapHasher> & ,  TopoDS_Compound &  ) >(&ShapeAnalysis_CheckSmallFace::CheckSplittingVertices),
             R"#(Checks if a Face brings vertices which split it, either confused with non adjacent vertices, or confused with their projection on non adjacent edges Returns the count of found splitting vertices Each vertex then brings a diagnostic "SplittingVertex", with data : "Face" for the face, "Edge" for the split edge)#"  , py::arg("F"),  py::arg("MapEdges"),  py::arg("MapParam"),  py::arg("theAllVert"))
        .def("CheckPin",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Face & ,  Standard_Integer & ,  Standard_Integer &  ) ) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Face & ,  Standard_Integer & ,  Standard_Integer &  ) >(&ShapeAnalysis_CheckSmallFace::CheckPin),
             R"#(Checks if a Face has a pin, which can be edited No singularity : no pin, returns 0 If there is a pin, checked topics, with returned value : - 0 : nothing to do more - 1 : "smooth", i.e. not a really sharp pin -> diagnostic "SmoothPin" - 2 : stretched pin, i.e. is possible to relimit the face by another vertex, so that this vertex still gives a pin -> diagnostic "StretchedPin" with location of vertex (Pnt))#"  , py::arg("F"),  py::arg("whatrow"),  py::arg("sence"))
        .def("CheckTwisted",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Face & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Face & ,  Standard_Real & ,  Standard_Real &  ) >(&ShapeAnalysis_CheckSmallFace::CheckTwisted),
             R"#(Checks if a Face is twisted (apart from checking Pin, i.e. it does not give information on pin, only "it is twisted"))#"  , py::arg("F"),  py::arg("paramu"),  py::arg("paramv"))
        .def("CheckPinFace",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Face & ,  NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Face & ,  NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ,  const Standard_Real  ) >(&ShapeAnalysis_CheckSmallFace::CheckPinFace),
             R"#(None)#"  , py::arg("F"),  py::arg("mapEdges"),  py::arg("toler")=static_cast<const Standard_Real>(- 1.0))
        .def("CheckPinEdges",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&ShapeAnalysis_CheckSmallFace::CheckPinEdges),
             R"#(None)#"  , py::arg("theFirstEdge"),  py::arg("theSecondEdge"),  py::arg("coef1"),  py::arg("coef2"),  py::arg("toler"))
        .def("Status",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_CheckSmallFace::Status),
             R"#(Returns the status of last call to Perform() ShapeExtend_OK : face was OK, nothing done ShapeExtend_DONE1: some wires are fixed ShapeExtend_DONE2: orientation of wires fixed ShapeExtend_DONE3: missing seam added ShapeExtend_DONE4: small area wire removed ShapeExtend_DONE5: natural bounds added ShapeExtend_FAIL1: some fails during fixing wires ShapeExtend_FAIL2: cannot fix orientation of wires ShapeExtend_FAIL3: cannot add missing seam ShapeExtend_FAIL4: cannot remove small area wire)#"  , py::arg("status"))
        .def("SetTolerance",
             (void (ShapeAnalysis_CheckSmallFace::*)( const Standard_Real  ) ) static_cast<void (ShapeAnalysis_CheckSmallFace::*)( const Standard_Real  ) >(&ShapeAnalysis_CheckSmallFace::SetTolerance),
             R"#(Sets a fixed Tolerance to check small face By default, local tolerance zone is considered Sets a fixed MaxTolerance to check small face Sets a fixed Tolerance to check small face By default, local tolerance zone is considered Unset fixed tolerance, comes back to local tolerance zones Unset fixed tolerance, comes back to local tolerance zones)#"  , py::arg("tol"))
        .def("Tolerance",
             (Standard_Real (ShapeAnalysis_CheckSmallFace::*)() const) static_cast<Standard_Real (ShapeAnalysis_CheckSmallFace::*)() const>(&ShapeAnalysis_CheckSmallFace::Tolerance),
             R"#(Returns the tolerance to check small faces, negative value if local tolerances zones are to be considered)#" )
        .def("StatusSpot",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_CheckSmallFace::StatusSpot),
             R"#(None)#"  , py::arg("status"))
        .def("StatusStrip",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_CheckSmallFace::StatusStrip),
             R"#(None)#"  , py::arg("status"))
        .def("StatusPin",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_CheckSmallFace::StatusPin),
             R"#(None)#"  , py::arg("status"))
        .def("StatusTwisted",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_CheckSmallFace::StatusTwisted),
             R"#(None)#"  , py::arg("status"))
        .def("StatusSplitVert",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_CheckSmallFace::StatusSplitVert),
             R"#(None)#"  , py::arg("status"))
        .def("StatusPinFace",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_CheckSmallFace::StatusPinFace),
             R"#(None)#"  , py::arg("status"))
        .def("StatusPinEdges",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_CheckSmallFace::StatusPinEdges),
             R"#(None)#"  , py::arg("status"))
        .def("Status",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_CheckSmallFace::Status),
             R"#(Returns the status of last call to Perform() ShapeExtend_OK : face was OK, nothing done ShapeExtend_DONE1: some wires are fixed ShapeExtend_DONE2: orientation of wires fixed ShapeExtend_DONE3: missing seam added ShapeExtend_DONE4: small area wire removed ShapeExtend_DONE5: natural bounds added ShapeExtend_FAIL1: some fails during fixing wires ShapeExtend_FAIL2: cannot fix orientation of wires ShapeExtend_FAIL3: cannot add missing seam ShapeExtend_FAIL4: cannot remove small area wire)#"  , py::arg("status"))
        .def("SetTolerance",
             (void (ShapeAnalysis_CheckSmallFace::*)( const Standard_Real  ) ) static_cast<void (ShapeAnalysis_CheckSmallFace::*)( const Standard_Real  ) >(&ShapeAnalysis_CheckSmallFace::SetTolerance),
             R"#(Sets a fixed Tolerance to check small face By default, local tolerance zone is considered Sets a fixed MaxTolerance to check small face Sets a fixed Tolerance to check small face By default, local tolerance zone is considered Unset fixed tolerance, comes back to local tolerance zones Unset fixed tolerance, comes back to local tolerance zones)#"  , py::arg("tol"))
        .def("Tolerance",
             (Standard_Real (ShapeAnalysis_CheckSmallFace::*)() const) static_cast<Standard_Real (ShapeAnalysis_CheckSmallFace::*)() const>(&ShapeAnalysis_CheckSmallFace::Tolerance),
             R"#(Returns the tolerance to check small faces, negative value if local tolerances zones are to be considered)#" )
        .def("StatusSpot",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_CheckSmallFace::StatusSpot),
             R"#(None)#"  , py::arg("status"))
        .def("StatusStrip",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_CheckSmallFace::StatusStrip),
             R"#(None)#"  , py::arg("status"))
        .def("StatusPin",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_CheckSmallFace::StatusPin),
             R"#(None)#"  , py::arg("status"))
        .def("StatusTwisted",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_CheckSmallFace::StatusTwisted),
             R"#(None)#"  , py::arg("status"))
        .def("StatusPinFace",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_CheckSmallFace::StatusPinFace),
             R"#(None)#"  , py::arg("status"))
        .def("StatusPinEdges",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_CheckSmallFace::StatusPinEdges),
             R"#(None)#"  , py::arg("status"))
        .def("StatusSplitVert",
             (Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeAnalysis_CheckSmallFace::*)( const ShapeExtend_Status  ) const>(&ShapeAnalysis_CheckSmallFace::StatusSplitVert),
             R"#(None)#"  , py::arg("status"))
;


    static_cast<py::class_<ShapeAnalysis_WireVertex ,std::unique_ptr<ShapeAnalysis_WireVertex>  >>(m.attr("ShapeAnalysis_WireVertex"))
        .def(py::init<  >()  )
        .def("Init",
             (void (ShapeAnalysis_WireVertex::*)( const TopoDS_Wire & ,  const Standard_Real  ) ) static_cast<void (ShapeAnalysis_WireVertex::*)( const TopoDS_Wire & ,  const Standard_Real  ) >(&ShapeAnalysis_WireVertex::Init),
             R"#(None)#"  , py::arg("wire"),  py::arg("preci"))
        .def("Init",
             (void (ShapeAnalysis_WireVertex::*)( const opencascade::handle<ShapeExtend_WireData> & ,  const Standard_Real  ) ) static_cast<void (ShapeAnalysis_WireVertex::*)( const opencascade::handle<ShapeExtend_WireData> & ,  const Standard_Real  ) >(&ShapeAnalysis_WireVertex::Init),
             R"#(None)#"  , py::arg("swbd"),  py::arg("preci"))
        .def("Load",
             (void (ShapeAnalysis_WireVertex::*)( const TopoDS_Wire &  ) ) static_cast<void (ShapeAnalysis_WireVertex::*)( const TopoDS_Wire &  ) >(&ShapeAnalysis_WireVertex::Load),
             R"#(None)#"  , py::arg("wire"))
        .def("Load",
             (void (ShapeAnalysis_WireVertex::*)( const opencascade::handle<ShapeExtend_WireData> &  ) ) static_cast<void (ShapeAnalysis_WireVertex::*)( const opencascade::handle<ShapeExtend_WireData> &  ) >(&ShapeAnalysis_WireVertex::Load),
             R"#(None)#"  , py::arg("sbwd"))
        .def("SetPrecision",
             (void (ShapeAnalysis_WireVertex::*)( const Standard_Real  ) ) static_cast<void (ShapeAnalysis_WireVertex::*)( const Standard_Real  ) >(&ShapeAnalysis_WireVertex::SetPrecision),
             R"#(Sets the precision for work Analysing: for each Vertex, comparison between the end of the preceeding edge and the start of the following edge Each Vertex rank corresponds to the End Vertex of the Edge of same rank, in the ShapeExtend_WireData. I.E. for Vertex <num>, Edge <num> is the preceeding one, <num+1> is the following one)#"  , py::arg("preci"))
        .def("Analyze",
             (void (ShapeAnalysis_WireVertex::*)() ) static_cast<void (ShapeAnalysis_WireVertex::*)() >(&ShapeAnalysis_WireVertex::Analyze),
             R"#(None)#" )
        .def("SetSameVertex",
             (void (ShapeAnalysis_WireVertex::*)( const Standard_Integer  ) ) static_cast<void (ShapeAnalysis_WireVertex::*)( const Standard_Integer  ) >(&ShapeAnalysis_WireVertex::SetSameVertex),
             R"#(Records status "Same Vertex" (logically) on Vertex <num>)#"  , py::arg("num"))
        .def("SetSameCoords",
             (void (ShapeAnalysis_WireVertex::*)( const Standard_Integer  ) ) static_cast<void (ShapeAnalysis_WireVertex::*)( const Standard_Integer  ) >(&ShapeAnalysis_WireVertex::SetSameCoords),
             R"#(Records status "Same Coords" (at the Vertices Tolerances))#"  , py::arg("num"))
        .def("SetClose",
             (void (ShapeAnalysis_WireVertex::*)( const Standard_Integer  ) ) static_cast<void (ShapeAnalysis_WireVertex::*)( const Standard_Integer  ) >(&ShapeAnalysis_WireVertex::SetClose),
             R"#(Records status "Close Coords" (at the Precision of <me>))#"  , py::arg("num"))
        .def("SetEnd",
             (void (ShapeAnalysis_WireVertex::*)( const Standard_Integer ,  const gp_XYZ & ,  const Standard_Real  ) ) static_cast<void (ShapeAnalysis_WireVertex::*)( const Standard_Integer ,  const gp_XYZ & ,  const Standard_Real  ) >(&ShapeAnalysis_WireVertex::SetEnd),
             R"#(<num> is the End of preceeding Edge, and its projection on the following one lies on it at the Precision of <me> <ufol> gives the parameter on the following edge)#"  , py::arg("num"),  py::arg("pos"),  py::arg("ufol"))
        .def("SetStart",
             (void (ShapeAnalysis_WireVertex::*)( const Standard_Integer ,  const gp_XYZ & ,  const Standard_Real  ) ) static_cast<void (ShapeAnalysis_WireVertex::*)( const Standard_Integer ,  const gp_XYZ & ,  const Standard_Real  ) >(&ShapeAnalysis_WireVertex::SetStart),
             R"#(<num> is the Start of following Edge, its projection on the preceeding one lies on it at the Precision of <me> <upre> gives the parameter on the preceeding edge)#"  , py::arg("num"),  py::arg("pos"),  py::arg("upre"))
        .def("SetInters",
             (void (ShapeAnalysis_WireVertex::*)( const Standard_Integer ,  const gp_XYZ & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (ShapeAnalysis_WireVertex::*)( const Standard_Integer ,  const gp_XYZ & ,  const Standard_Real ,  const Standard_Real  ) >(&ShapeAnalysis_WireVertex::SetInters),
             R"#(<num> is the Intersection of both Edges <upre> is the parameter on preceeding edge, <ufol> on following edge)#"  , py::arg("num"),  py::arg("pos"),  py::arg("upre"),  py::arg("ufol"))
        .def("SetDisjoined",
             (void (ShapeAnalysis_WireVertex::*)( const Standard_Integer  ) ) static_cast<void (ShapeAnalysis_WireVertex::*)( const Standard_Integer  ) >(&ShapeAnalysis_WireVertex::SetDisjoined),
             R"#(<num> cannot be said as same vertex)#"  , py::arg("num"))
        .def("IsDone",
             (Standard_Boolean (ShapeAnalysis_WireVertex::*)() const) static_cast<Standard_Boolean (ShapeAnalysis_WireVertex::*)() const>(&ShapeAnalysis_WireVertex::IsDone),
             R"#(Returns True if analysis was performed, else returns False)#" )
        .def("Precision",
             (Standard_Real (ShapeAnalysis_WireVertex::*)() const) static_cast<Standard_Real (ShapeAnalysis_WireVertex::*)() const>(&ShapeAnalysis_WireVertex::Precision),
             R"#(Returns precision value used in analysis)#" )
        .def("NbEdges",
             (Standard_Integer (ShapeAnalysis_WireVertex::*)() const) static_cast<Standard_Integer (ShapeAnalysis_WireVertex::*)() const>(&ShapeAnalysis_WireVertex::NbEdges),
             R"#(Returns the number of edges in analyzed wire (i.e. the length of all arrays))#" )
        .def("WireData",
             (const opencascade::handle<ShapeExtend_WireData> & (ShapeAnalysis_WireVertex::*)() const) static_cast<const opencascade::handle<ShapeExtend_WireData> & (ShapeAnalysis_WireVertex::*)() const>(&ShapeAnalysis_WireVertex::WireData),
             R"#(Returns analyzed wire)#" )
        .def("Status",
             (Standard_Integer (ShapeAnalysis_WireVertex::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (ShapeAnalysis_WireVertex::*)( const Standard_Integer  ) const>(&ShapeAnalysis_WireVertex::Status),
             R"#(Returns the recorded status for a vertex More detail by method Data)#"  , py::arg("num"))
        .def("Position",
             (gp_XYZ (ShapeAnalysis_WireVertex::*)( const Standard_Integer  ) const) static_cast<gp_XYZ (ShapeAnalysis_WireVertex::*)( const Standard_Integer  ) const>(&ShapeAnalysis_WireVertex::Position),
             R"#(None)#"  , py::arg("num"))
        .def("UPrevious",
             (Standard_Real (ShapeAnalysis_WireVertex::*)( const Standard_Integer  ) const) static_cast<Standard_Real (ShapeAnalysis_WireVertex::*)( const Standard_Integer  ) const>(&ShapeAnalysis_WireVertex::UPrevious),
             R"#(None)#"  , py::arg("num"))
        .def("UFollowing",
             (Standard_Real (ShapeAnalysis_WireVertex::*)( const Standard_Integer  ) const) static_cast<Standard_Real (ShapeAnalysis_WireVertex::*)( const Standard_Integer  ) const>(&ShapeAnalysis_WireVertex::UFollowing),
             R"#(None)#"  , py::arg("num"))
        .def("Data",
             (Standard_Integer (ShapeAnalysis_WireVertex::*)( const Standard_Integer ,  gp_XYZ & ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<Standard_Integer (ShapeAnalysis_WireVertex::*)( const Standard_Integer ,  gp_XYZ & ,  Standard_Real & ,  Standard_Real &  ) const>(&ShapeAnalysis_WireVertex::Data),
             R"#(Returns the recorded status for a vertex With its recorded position and parameters on both edges These values are relevant regarding the status: Status Meaning Position Preceeding Following 0 Same no no no 1 SameCoord no no no 2 Close no no no 3 End yes no yes 4 Start yes yes no 5 Inters yes yes yes -1 Disjoined no no no)#"  , py::arg("num"),  py::arg("pos"),  py::arg("upre"),  py::arg("ufol"))
        .def("NextStatus",
             (Standard_Integer (ShapeAnalysis_WireVertex::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (ShapeAnalysis_WireVertex::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&ShapeAnalysis_WireVertex::NextStatus),
             R"#(For a given status, returns the rank of the vertex which follows <num> and has the same status. 0 if no more Acts as an iterator, starts on the first one)#"  , py::arg("stat"),  py::arg("num")=static_cast<const Standard_Integer>(0))
        .def("NextCriter",
             (Standard_Integer (ShapeAnalysis_WireVertex::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (ShapeAnalysis_WireVertex::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&ShapeAnalysis_WireVertex::NextCriter),
             R"#(For a given criter, returns the rank of the vertex which follows <num> and has the same status. 0 if no more Acts as an iterator, starts on the first one Criters are: 0: same vertex (status 0) 1: a solution exists (status >= 0) 2: same coords (i.e. same params) (status 0 1 2) 3: same coods but not same vertex (status 1 2) 4: redefined coords (status 3 4 5) -1: no solution (status -1))#"  , py::arg("crit"),  py::arg("num")=static_cast<const Standard_Integer>(0))
;


    static_cast<py::class_<ShapeAnalysis_FreeBoundsProperties ,std::unique_ptr<ShapeAnalysis_FreeBoundsProperties>  >>(m.attr("ShapeAnalysis_FreeBoundsProperties"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const Standard_Real,const Standard_Boolean,const Standard_Boolean >()  , py::arg("shape"),  py::arg("tolerance"),  py::arg("splitclosed")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("splitopen")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const TopoDS_Shape &,const Standard_Boolean,const Standard_Boolean >()  , py::arg("shape"),  py::arg("splitclosed")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("splitopen")=static_cast<const Standard_Boolean>(Standard_False) )
        .def("Init",
             (void (ShapeAnalysis_FreeBoundsProperties::*)( const TopoDS_Shape & ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (ShapeAnalysis_FreeBoundsProperties::*)( const TopoDS_Shape & ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&ShapeAnalysis_FreeBoundsProperties::Init),
             R"#(Initializes the object with given parameters. <shape> should be a compound of faces.)#"  , py::arg("shape"),  py::arg("tolerance"),  py::arg("splitclosed")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("splitopen")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Init",
             (void (ShapeAnalysis_FreeBoundsProperties::*)( const TopoDS_Shape & ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (ShapeAnalysis_FreeBoundsProperties::*)( const TopoDS_Shape & ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&ShapeAnalysis_FreeBoundsProperties::Init),
             R"#(Initializes the object with given parameters. <shape> should be a compound of shells.)#"  , py::arg("shape"),  py::arg("splitclosed")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("splitopen")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Perform",
             (Standard_Boolean (ShapeAnalysis_FreeBoundsProperties::*)() ) static_cast<Standard_Boolean (ShapeAnalysis_FreeBoundsProperties::*)() >(&ShapeAnalysis_FreeBoundsProperties::Perform),
             R"#(Builds and analyzes free bounds of the shape. First calls ShapeAnalysis_FreeBounds for building free bounds. Then on each free bound computes its properties: - area of the contour, - perimeter of the contour, - ratio of average length to average width of the contour, - average width of contour, - notches on the contour and for each notch - maximum width of the notch.)#" )
        .def("IsLoaded",
             (Standard_Boolean (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<Standard_Boolean (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::IsLoaded),
             R"#(Returns True if shape is loaded)#" )
        .def("Shape",
             (TopoDS_Shape (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<TopoDS_Shape (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::Shape),
             R"#(Returns shape)#" )
        .def("Tolerance",
             (Standard_Real (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<Standard_Real (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::Tolerance),
             R"#(Returns tolerance)#" )
        .def("NbFreeBounds",
             (Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::NbFreeBounds),
             R"#(Returns number of free bounds)#" )
        .def("NbClosedFreeBounds",
             (Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::NbClosedFreeBounds),
             R"#(Returns number of closed free bounds)#" )
        .def("NbOpenFreeBounds",
             (Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::NbOpenFreeBounds),
             R"#(Returns number of open free bounds)#" )
        .def("ClosedFreeBounds",
             (opencascade::handle<ShapeAnalysis_HSequenceOfFreeBounds> (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<opencascade::handle<ShapeAnalysis_HSequenceOfFreeBounds> (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::ClosedFreeBounds),
             R"#(Returns all closed free bounds)#" )
        .def("OpenFreeBounds",
             (opencascade::handle<ShapeAnalysis_HSequenceOfFreeBounds> (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<opencascade::handle<ShapeAnalysis_HSequenceOfFreeBounds> (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::OpenFreeBounds),
             R"#(Returns all open free bounds)#" )
        .def("ClosedFreeBound",
             (opencascade::handle<ShapeAnalysis_FreeBoundData> (ShapeAnalysis_FreeBoundsProperties::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<ShapeAnalysis_FreeBoundData> (ShapeAnalysis_FreeBoundsProperties::*)( const Standard_Integer  ) const>(&ShapeAnalysis_FreeBoundsProperties::ClosedFreeBound),
             R"#(Returns properties of closed free bound specified by its rank number)#"  , py::arg("index"))
        .def("OpenFreeBound",
             (opencascade::handle<ShapeAnalysis_FreeBoundData> (ShapeAnalysis_FreeBoundsProperties::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<ShapeAnalysis_FreeBoundData> (ShapeAnalysis_FreeBoundsProperties::*)( const Standard_Integer  ) const>(&ShapeAnalysis_FreeBoundsProperties::OpenFreeBound),
             R"#(Returns properties of open free bound specified by its rank number)#"  , py::arg("index"))
        .def("DispatchBounds",
             (Standard_Boolean (ShapeAnalysis_FreeBoundsProperties::*)() ) static_cast<Standard_Boolean (ShapeAnalysis_FreeBoundsProperties::*)() >(&ShapeAnalysis_FreeBoundsProperties::DispatchBounds),
             R"#(None)#" )
        .def("CheckContours",
             (Standard_Boolean (ShapeAnalysis_FreeBoundsProperties::*)( const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_FreeBoundsProperties::*)( const Standard_Real  ) >(&ShapeAnalysis_FreeBoundsProperties::CheckContours),
             R"#(None)#"  , py::arg("prec")=static_cast<const Standard_Real>(0.0))
        .def("CheckNotches",
             (Standard_Boolean (ShapeAnalysis_FreeBoundsProperties::*)( const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_FreeBoundsProperties::*)( const Standard_Real  ) >(&ShapeAnalysis_FreeBoundsProperties::CheckNotches),
             R"#(None)#"  , py::arg("prec")=static_cast<const Standard_Real>(0.0))
        .def("CheckNotches",
             (Standard_Boolean (ShapeAnalysis_FreeBoundsProperties::*)( opencascade::handle<ShapeAnalysis_FreeBoundData> & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_FreeBoundsProperties::*)( opencascade::handle<ShapeAnalysis_FreeBoundData> & ,  const Standard_Real  ) >(&ShapeAnalysis_FreeBoundsProperties::CheckNotches),
             R"#(None)#"  , py::arg("fbData"),  py::arg("prec")=static_cast<const Standard_Real>(0.0))
        .def("CheckNotches",
             (Standard_Boolean (ShapeAnalysis_FreeBoundsProperties::*)( const TopoDS_Wire & ,  const Standard_Integer ,  TopoDS_Wire & ,  Standard_Real & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_FreeBoundsProperties::*)( const TopoDS_Wire & ,  const Standard_Integer ,  TopoDS_Wire & ,  Standard_Real & ,  const Standard_Real  ) >(&ShapeAnalysis_FreeBoundsProperties::CheckNotches),
             R"#(None)#"  , py::arg("freebound"),  py::arg("num"),  py::arg("notch"),  py::arg("distMax"),  py::arg("prec")=static_cast<const Standard_Real>(0.0))
        .def("FillProperties",
             (Standard_Boolean (ShapeAnalysis_FreeBoundsProperties::*)( opencascade::handle<ShapeAnalysis_FreeBoundData> & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeAnalysis_FreeBoundsProperties::*)( opencascade::handle<ShapeAnalysis_FreeBoundData> & ,  const Standard_Real  ) >(&ShapeAnalysis_FreeBoundsProperties::FillProperties),
             R"#(None)#"  , py::arg("fbData"),  py::arg("prec")=static_cast<const Standard_Real>(0.0))
        .def("Shape",
             (TopoDS_Shape (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<TopoDS_Shape (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::Shape),
             R"#(Returns shape)#" )
        .def("IsLoaded",
             (Standard_Boolean (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<Standard_Boolean (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::IsLoaded),
             R"#(Returns True if shape is loaded)#" )
        .def("Tolerance",
             (Standard_Real (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<Standard_Real (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::Tolerance),
             R"#(Returns tolerance)#" )
        .def("NbFreeBounds",
             (Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::NbFreeBounds),
             R"#(Returns number of free bounds)#" )
        .def("NbClosedFreeBounds",
             (Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::NbClosedFreeBounds),
             R"#(Returns number of closed free bounds)#" )
        .def("NbOpenFreeBounds",
             (Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<Standard_Integer (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::NbOpenFreeBounds),
             R"#(Returns number of open free bounds)#" )
        .def("ClosedFreeBounds",
             (opencascade::handle<ShapeAnalysis_HSequenceOfFreeBounds> (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<opencascade::handle<ShapeAnalysis_HSequenceOfFreeBounds> (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::ClosedFreeBounds),
             R"#(Returns all closed free bounds)#" )
        .def("OpenFreeBounds",
             (opencascade::handle<ShapeAnalysis_HSequenceOfFreeBounds> (ShapeAnalysis_FreeBoundsProperties::*)() const) static_cast<opencascade::handle<ShapeAnalysis_HSequenceOfFreeBounds> (ShapeAnalysis_FreeBoundsProperties::*)() const>(&ShapeAnalysis_FreeBoundsProperties::OpenFreeBounds),
             R"#(Returns all open free bounds)#" )
        .def("ClosedFreeBound",
             (opencascade::handle<ShapeAnalysis_FreeBoundData> (ShapeAnalysis_FreeBoundsProperties::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<ShapeAnalysis_FreeBoundData> (ShapeAnalysis_FreeBoundsProperties::*)( const Standard_Integer  ) const>(&ShapeAnalysis_FreeBoundsProperties::ClosedFreeBound),
             R"#(Returns properties of closed free bound specified by its rank number)#"  , py::arg("index"))
        .def("OpenFreeBound",
             (opencascade::handle<ShapeAnalysis_FreeBoundData> (ShapeAnalysis_FreeBoundsProperties::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<ShapeAnalysis_FreeBoundData> (ShapeAnalysis_FreeBoundsProperties::*)( const Standard_Integer  ) const>(&ShapeAnalysis_FreeBoundsProperties::OpenFreeBound),
             R"#(Returns properties of open free bound specified by its rank number)#"  , py::arg("index"))
;

    register_default_constructor<ShapeAnalysis ,std::unique_ptr<ShapeAnalysis>>(m,"ShapeAnalysis");

    static_cast<py::class_<ShapeAnalysis ,std::unique_ptr<ShapeAnalysis>  >>(m.attr("ShapeAnalysis"))
        .def_static("OuterWire_s",
                    (TopoDS_Wire (*)( const TopoDS_Face &  ) ) static_cast<TopoDS_Wire (*)( const TopoDS_Face &  ) >(&ShapeAnalysis::OuterWire),
                    R"#(Returns the outer wire on the face <Face>. This is replacement of the method BRepTools::OuterWire until it works badly. Returns the first wire oriented as outer according to FClass2d_Classifier. If none, last wire is returned.)#"  , py::arg("face"))
        .def_static("TotCross2D_s",
                    (Standard_Real (*)( const opencascade::handle<ShapeExtend_WireData> & ,  const TopoDS_Face &  ) ) static_cast<Standard_Real (*)( const opencascade::handle<ShapeExtend_WireData> & ,  const TopoDS_Face &  ) >(&ShapeAnalysis::TotCross2D),
                    R"#(Returns a total area of 2d wire)#"  , py::arg("sewd"),  py::arg("aFace"))
        .def_static("ContourArea_s",
                    (Standard_Real (*)( const TopoDS_Wire &  ) ) static_cast<Standard_Real (*)( const TopoDS_Wire &  ) >(&ShapeAnalysis::ContourArea),
                    R"#(Returns a total area of 3d wire)#"  , py::arg("theWire"))
        .def_static("IsOuterBound_s",
                    (Standard_Boolean (*)( const TopoDS_Face &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face &  ) >(&ShapeAnalysis::IsOuterBound),
                    R"#(Returns True if <F> has outer bound.)#"  , py::arg("face"))
        .def_static("AdjustByPeriod_s",
                    (Standard_Real (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&ShapeAnalysis::AdjustByPeriod),
                    R"#(Returns a shift required to move point <Val> to the range [ToVal-Period/2,ToVal+Period/2]. This shift will be the divisible by Period. Intended for adjusting parameters on periodic surfaces.)#"  , py::arg("Val"),  py::arg("ToVal"),  py::arg("Period"))
        .def_static("AdjustToPeriod_s",
                    (Standard_Real (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&ShapeAnalysis::AdjustToPeriod),
                    R"#(Returns a shift required to move point <Val> to the range [ValMin,ValMax]. This shift will be the divisible by Period with Period = ValMax - ValMin. Intended for adjusting parameters on periodic surfaces.)#"  , py::arg("Val"),  py::arg("ValMin"),  py::arg("ValMax"))
        .def_static("FindBounds_s",
                    (void (*)( const TopoDS_Shape & ,  TopoDS_Vertex & ,  TopoDS_Vertex &  ) ) static_cast<void (*)( const TopoDS_Shape & ,  TopoDS_Vertex & ,  TopoDS_Vertex &  ) >(&ShapeAnalysis::FindBounds),
                    R"#(Finds the start and end vertices of the shape Shape can be of the following type: vertex: V1 and V2 are the same and equal to <shape>, edge : V1 is start and V2 is end vertex (see ShapeAnalysis_Edge methods FirstVertex and LastVertex), wire : V1 is start vertex of the first edge, V2 is end vertex of the last edge (also see ShapeAnalysis_Edge). If wire contains no edges V1 and V2 are nullified If none of the above V1 and V2 are nullified)#"  , py::arg("shape"),  py::arg("V1"),  py::arg("V2"))
        .def_static("GetFaceUVBounds_s",
                    (void (*)( const TopoDS_Face & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (*)( const TopoDS_Face & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&ShapeAnalysis::GetFaceUVBounds),
                    R"#(Computes exact UV bounds of all wires on the face)#"  , py::arg("F"),  py::arg("Umin"),  py::arg("Umax"),  py::arg("Vmin"),  py::arg("Vmax"))
;


    static_cast<py::class_<ShapeAnalysis_WireOrder ,std::unique_ptr<ShapeAnalysis_WireOrder>  >>(m.attr("ShapeAnalysis_WireOrder"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Boolean,const Standard_Real >()  , py::arg("mode3d"),  py::arg("tol") )
        .def("SetMode",
             (void (ShapeAnalysis_WireOrder::*)( const Standard_Boolean ,  const Standard_Real  ) ) static_cast<void (ShapeAnalysis_WireOrder::*)( const Standard_Boolean ,  const Standard_Real  ) >(&ShapeAnalysis_WireOrder::SetMode),
             R"#(Sets new values. Clears the connexion list If <mode3d> changes, also clears the edge list (else, doesnt))#"  , py::arg("mode3d"),  py::arg("tol"))
        .def("Tolerance",
             (Standard_Real (ShapeAnalysis_WireOrder::*)() const) static_cast<Standard_Real (ShapeAnalysis_WireOrder::*)() const>(&ShapeAnalysis_WireOrder::Tolerance),
             R"#(Returns the working tolerance)#" )
        .def("Clear",
             (void (ShapeAnalysis_WireOrder::*)() ) static_cast<void (ShapeAnalysis_WireOrder::*)() >(&ShapeAnalysis_WireOrder::Clear),
             R"#(Clears the list of edges, but not mode and tol)#" )
        .def("Add",
             (void (ShapeAnalysis_WireOrder::*)( const gp_XYZ & ,  const gp_XYZ &  ) ) static_cast<void (ShapeAnalysis_WireOrder::*)( const gp_XYZ & ,  const gp_XYZ &  ) >(&ShapeAnalysis_WireOrder::Add),
             R"#(Adds a couple of points 3D (start,end))#"  , py::arg("start3d"),  py::arg("end3d"))
        .def("Add",
             (void (ShapeAnalysis_WireOrder::*)( const gp_XY & ,  const gp_XY &  ) ) static_cast<void (ShapeAnalysis_WireOrder::*)( const gp_XY & ,  const gp_XY &  ) >(&ShapeAnalysis_WireOrder::Add),
             R"#(Adds a couple of points 2D (start,end))#"  , py::arg("start2d"),  py::arg("end2d"))
        .def("NbEdges",
             (Standard_Integer (ShapeAnalysis_WireOrder::*)() const) static_cast<Standard_Integer (ShapeAnalysis_WireOrder::*)() const>(&ShapeAnalysis_WireOrder::NbEdges),
             R"#(Returns the count of added couples of points (one per edges))#" )
        .def("KeepLoopsMode",
             (Standard_Boolean & (ShapeAnalysis_WireOrder::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_WireOrder::*)() >(&ShapeAnalysis_WireOrder::KeepLoopsMode),
             R"#(If this mode is True method perform does not sort edges of different loops. The resulting order is first loop, second one etc...)#" )
        .def("Perform",
             (void (ShapeAnalysis_WireOrder::*)( const Standard_Boolean  ) ) static_cast<void (ShapeAnalysis_WireOrder::*)( const Standard_Boolean  ) >(&ShapeAnalysis_WireOrder::Perform),
             R"#(Computes the better order If <closed> is True (D) considers also closure Optimised if the couples were already in order The criterium is : two couples in order if distance between end-prec and start-cur is less then starting tolerance <tol> Else, the smallest distance is reached Gap corresponds to a smallest distance greater than <tol>)#"  , py::arg("closed")=static_cast<const Standard_Boolean>(Standard_True))
        .def("IsDone",
             (Standard_Boolean (ShapeAnalysis_WireOrder::*)() const) static_cast<Standard_Boolean (ShapeAnalysis_WireOrder::*)() const>(&ShapeAnalysis_WireOrder::IsDone),
             R"#(Tells if Perform has been done Else, the following methods returns original values)#" )
        .def("Status",
             (Standard_Integer (ShapeAnalysis_WireOrder::*)() const) static_cast<Standard_Integer (ShapeAnalysis_WireOrder::*)() const>(&ShapeAnalysis_WireOrder::Status),
             R"#(Returns the status of the order (0 if not done) : 0 : all edges are direct and in sequence 1 : all edges are direct but some are not in sequence 2 : in addition, unresolved gaps remain -1 : some edges are reversed, but no gap remain -2 : some edges are reversed and some gaps remain -10 : COULD NOT BE RESOLVED, Failure on Reorder gap : regarding starting <tol>)#" )
        .def("Ordered",
             (Standard_Integer (ShapeAnalysis_WireOrder::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (ShapeAnalysis_WireOrder::*)( const Standard_Integer  ) const>(&ShapeAnalysis_WireOrder::Ordered),
             R"#(Returns the number of original edge which correspond to the newly ordered number <n> Warning : the returned value is NEGATIVE if edge should be reversed)#"  , py::arg("n"))
        .def("XYZ",
             (void (ShapeAnalysis_WireOrder::*)( const Standard_Integer ,  gp_XYZ & ,  gp_XYZ &  ) const) static_cast<void (ShapeAnalysis_WireOrder::*)( const Standard_Integer ,  gp_XYZ & ,  gp_XYZ &  ) const>(&ShapeAnalysis_WireOrder::XYZ),
             R"#(Returns the values of the couple <num>, as 3D values)#"  , py::arg("num"),  py::arg("start3d"),  py::arg("end3d"))
        .def("XY",
             (void (ShapeAnalysis_WireOrder::*)( const Standard_Integer ,  gp_XY & ,  gp_XY &  ) const) static_cast<void (ShapeAnalysis_WireOrder::*)( const Standard_Integer ,  gp_XY & ,  gp_XY &  ) const>(&ShapeAnalysis_WireOrder::XY),
             R"#(Returns the values of the couple <num>, as 2D values)#"  , py::arg("num"),  py::arg("start2d"),  py::arg("end2d"))
        .def("Gap",
             (Standard_Real (ShapeAnalysis_WireOrder::*)( const Standard_Integer  ) const) static_cast<Standard_Real (ShapeAnalysis_WireOrder::*)( const Standard_Integer  ) const>(&ShapeAnalysis_WireOrder::Gap),
             R"#(Returns the gap between a couple and its preceeding <num> is considered ordered If <num> = 0 (D), returns the greatest gap found)#"  , py::arg("num")=static_cast<const Standard_Integer>(0))
        .def("SetChains",
             (void (ShapeAnalysis_WireOrder::*)( const Standard_Real  ) ) static_cast<void (ShapeAnalysis_WireOrder::*)( const Standard_Real  ) >(&ShapeAnalysis_WireOrder::SetChains),
             R"#(Determines the chains inside which successive edges have a gap less than a given value. Queried by NbChains and Chain)#"  , py::arg("gap"))
        .def("NbChains",
             (Standard_Integer (ShapeAnalysis_WireOrder::*)() const) static_cast<Standard_Integer (ShapeAnalysis_WireOrder::*)() const>(&ShapeAnalysis_WireOrder::NbChains),
             R"#(Returns the count of computed chains)#" )
        .def("Chain",
             (void (ShapeAnalysis_WireOrder::*)( const Standard_Integer ,  Standard_Integer & ,  Standard_Integer &  ) const) static_cast<void (ShapeAnalysis_WireOrder::*)( const Standard_Integer ,  Standard_Integer & ,  Standard_Integer &  ) const>(&ShapeAnalysis_WireOrder::Chain),
             R"#(Returns, for the chain n0 num, starting and ending numbers of edges. In the list of ordered edges (see Ordered for originals))#"  , py::arg("num"),  py::arg("n1"),  py::arg("n2"))
        .def("SetCouples",
             (void (ShapeAnalysis_WireOrder::*)( const Standard_Real  ) ) static_cast<void (ShapeAnalysis_WireOrder::*)( const Standard_Real  ) >(&ShapeAnalysis_WireOrder::SetCouples),
             R"#(Determines the couples of edges for which end and start fit inside a given gap. Queried by NbCouples and Couple)#"  , py::arg("gap"))
        .def("NbCouples",
             (Standard_Integer (ShapeAnalysis_WireOrder::*)() const) static_cast<Standard_Integer (ShapeAnalysis_WireOrder::*)() const>(&ShapeAnalysis_WireOrder::NbCouples),
             R"#(Returns the count of computed couples)#" )
        .def("Couple",
             (void (ShapeAnalysis_WireOrder::*)( const Standard_Integer ,  Standard_Integer & ,  Standard_Integer &  ) const) static_cast<void (ShapeAnalysis_WireOrder::*)( const Standard_Integer ,  Standard_Integer & ,  Standard_Integer &  ) const>(&ShapeAnalysis_WireOrder::Couple),
             R"#(Returns, for the couple n0 num, the two implied edges In the list of ordered edges)#"  , py::arg("num"),  py::arg("n1"),  py::arg("n2"))
;


    static_cast<py::class_<ShapeAnalysis_FreeBoundData ,opencascade::handle<ShapeAnalysis_FreeBoundData>  , Standard_Transient >>(m.attr("ShapeAnalysis_FreeBoundData"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Wire & >()  , py::arg("freebound") )
        .def("Clear",
             (void (ShapeAnalysis_FreeBoundData::*)() ) static_cast<void (ShapeAnalysis_FreeBoundData::*)() >(&ShapeAnalysis_FreeBoundData::Clear),
             R"#(Clears all properties of the contour. Contour bound itself is not cleared.)#" )
        .def("SetFreeBound",
             (void (ShapeAnalysis_FreeBoundData::*)( const TopoDS_Wire &  ) ) static_cast<void (ShapeAnalysis_FreeBoundData::*)( const TopoDS_Wire &  ) >(&ShapeAnalysis_FreeBoundData::SetFreeBound),
             R"#(Sets contour)#"  , py::arg("freebound"))
        .def("SetArea",
             (void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real  ) ) static_cast<void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real  ) >(&ShapeAnalysis_FreeBoundData::SetArea),
             R"#(Sets area of the contour)#"  , py::arg("area"))
        .def("SetPerimeter",
             (void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real  ) ) static_cast<void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real  ) >(&ShapeAnalysis_FreeBoundData::SetPerimeter),
             R"#(Sets perimeter of the contour)#"  , py::arg("perimeter"))
        .def("SetRatio",
             (void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real  ) ) static_cast<void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real  ) >(&ShapeAnalysis_FreeBoundData::SetRatio),
             R"#(Sets ratio of average length to average width of the contour)#"  , py::arg("ratio"))
        .def("SetWidth",
             (void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real  ) ) static_cast<void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real  ) >(&ShapeAnalysis_FreeBoundData::SetWidth),
             R"#(Sets average width of the contour)#"  , py::arg("width"))
        .def("AddNotch",
             (void (ShapeAnalysis_FreeBoundData::*)( const TopoDS_Wire & ,  const Standard_Real  ) ) static_cast<void (ShapeAnalysis_FreeBoundData::*)( const TopoDS_Wire & ,  const Standard_Real  ) >(&ShapeAnalysis_FreeBoundData::AddNotch),
             R"#(Adds notch on the contour with its maximum width)#"  , py::arg("notch"),  py::arg("width"))
        .def("FreeBound",
             (TopoDS_Wire (ShapeAnalysis_FreeBoundData::*)() const) static_cast<TopoDS_Wire (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::FreeBound),
             R"#(Returns contour)#" )
        .def("Area",
             (Standard_Real (ShapeAnalysis_FreeBoundData::*)() const) static_cast<Standard_Real (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::Area),
             R"#(Returns area of the contour)#" )
        .def("Perimeter",
             (Standard_Real (ShapeAnalysis_FreeBoundData::*)() const) static_cast<Standard_Real (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::Perimeter),
             R"#(Returns perimeter of the contour)#" )
        .def("Ratio",
             (Standard_Real (ShapeAnalysis_FreeBoundData::*)() const) static_cast<Standard_Real (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::Ratio),
             R"#(Returns ratio of average length to average width of the contour)#" )
        .def("Width",
             (Standard_Real (ShapeAnalysis_FreeBoundData::*)() const) static_cast<Standard_Real (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::Width),
             R"#(Returns average width of the contour)#" )
        .def("NbNotches",
             (Standard_Integer (ShapeAnalysis_FreeBoundData::*)() const) static_cast<Standard_Integer (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::NbNotches),
             R"#(Returns number of notches on the contour)#" )
        .def("Notches",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_FreeBoundData::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::Notches),
             R"#(Returns sequence of notches on the contour)#" )
        .def("Notch",
             (TopoDS_Wire (ShapeAnalysis_FreeBoundData::*)( const Standard_Integer  ) const) static_cast<TopoDS_Wire (ShapeAnalysis_FreeBoundData::*)( const Standard_Integer  ) const>(&ShapeAnalysis_FreeBoundData::Notch),
             R"#(Returns notch on the contour)#"  , py::arg("index"))
        .def("NotchWidth",
             (Standard_Real (ShapeAnalysis_FreeBoundData::*)( const Standard_Integer  ) const) static_cast<Standard_Real (ShapeAnalysis_FreeBoundData::*)( const Standard_Integer  ) const>(&ShapeAnalysis_FreeBoundData::NotchWidth),
             R"#(Returns maximum width of notch specified by its rank number on the contour)#"  , py::arg("index"))
        .def("NotchWidth",
             (Standard_Real (ShapeAnalysis_FreeBoundData::*)( const TopoDS_Wire &  ) const) static_cast<Standard_Real (ShapeAnalysis_FreeBoundData::*)( const TopoDS_Wire &  ) const>(&ShapeAnalysis_FreeBoundData::NotchWidth),
             R"#(Returns maximum width of notch specified as TopoDS_Wire on the contour)#"  , py::arg("notch"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeAnalysis_FreeBoundData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::DynamicType),
             R"#(None)#" )
        .def("SetFreeBound",
             (void (ShapeAnalysis_FreeBoundData::*)( const TopoDS_Wire &  ) ) static_cast<void (ShapeAnalysis_FreeBoundData::*)( const TopoDS_Wire &  ) >(&ShapeAnalysis_FreeBoundData::SetFreeBound),
             R"#(Sets contour)#"  , py::arg("freebound"))
        .def("SetArea",
             (void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real  ) ) static_cast<void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real  ) >(&ShapeAnalysis_FreeBoundData::SetArea),
             R"#(Sets area of the contour)#"  , py::arg("area"))
        .def("SetPerimeter",
             (void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real  ) ) static_cast<void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real  ) >(&ShapeAnalysis_FreeBoundData::SetPerimeter),
             R"#(Sets perimeter of the contour)#"  , py::arg("perimeter"))
        .def("SetRatio",
             (void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real  ) ) static_cast<void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real  ) >(&ShapeAnalysis_FreeBoundData::SetRatio),
             R"#(Sets ratio of average length to average width of the contour)#"  , py::arg("ratio"))
        .def("SetWidth",
             (void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real  ) ) static_cast<void (ShapeAnalysis_FreeBoundData::*)( const Standard_Real  ) >(&ShapeAnalysis_FreeBoundData::SetWidth),
             R"#(Sets average width of the contour)#"  , py::arg("width"))
        .def("FreeBound",
             (TopoDS_Wire (ShapeAnalysis_FreeBoundData::*)() const) static_cast<TopoDS_Wire (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::FreeBound),
             R"#(Returns contour)#" )
        .def("Area",
             (Standard_Real (ShapeAnalysis_FreeBoundData::*)() const) static_cast<Standard_Real (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::Area),
             R"#(Returns area of the contour)#" )
        .def("Perimeter",
             (Standard_Real (ShapeAnalysis_FreeBoundData::*)() const) static_cast<Standard_Real (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::Perimeter),
             R"#(Returns perimeter of the contour)#" )
        .def("Ratio",
             (Standard_Real (ShapeAnalysis_FreeBoundData::*)() const) static_cast<Standard_Real (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::Ratio),
             R"#(Returns ratio of average length to average width of the contour)#" )
        .def("Width",
             (Standard_Real (ShapeAnalysis_FreeBoundData::*)() const) static_cast<Standard_Real (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::Width),
             R"#(Returns average width of the contour)#" )
        .def("NbNotches",
             (Standard_Integer (ShapeAnalysis_FreeBoundData::*)() const) static_cast<Standard_Integer (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::NbNotches),
             R"#(Returns number of notches on the contour)#" )
        .def("Notches",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_FreeBoundData::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_FreeBoundData::*)() const>(&ShapeAnalysis_FreeBoundData::Notches),
             R"#(Returns sequence of notches on the contour)#" )
        .def("Notch",
             (TopoDS_Wire (ShapeAnalysis_FreeBoundData::*)( const Standard_Integer  ) const) static_cast<TopoDS_Wire (ShapeAnalysis_FreeBoundData::*)( const Standard_Integer  ) const>(&ShapeAnalysis_FreeBoundData::Notch),
             R"#(Returns notch on the contour)#"  , py::arg("index"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeAnalysis_FreeBoundData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeAnalysis_FreeBoundData::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<ShapeAnalysis_Geom ,std::unique_ptr<ShapeAnalysis_Geom>>(m,"ShapeAnalysis_Geom");

    static_cast<py::class_<ShapeAnalysis_Geom ,std::unique_ptr<ShapeAnalysis_Geom>  >>(m.attr("ShapeAnalysis_Geom"))
        .def_static("NearestPlane_s",
                    (Standard_Boolean (*)(  const NCollection_Array1<gp_Pnt> & ,  gp_Pln & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (*)(  const NCollection_Array1<gp_Pnt> & ,  gp_Pln & ,  Standard_Real &  ) >(&ShapeAnalysis_Geom::NearestPlane),
                    R"#(Builds a plane out of a set of points in array Returns in <dmax> the maximal distance between the produced plane and given points)#"  , py::arg("Pnts"),  py::arg("aPln"),  py::arg("Dmax"))
        .def_static("PositionTrsf_s",
                    (Standard_Boolean (*)( const opencascade::handle<TColStd_HArray2OfReal> & ,  gp_Trsf & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<TColStd_HArray2OfReal> & ,  gp_Trsf & ,  const Standard_Real ,  const Standard_Real  ) >(&ShapeAnalysis_Geom::PositionTrsf),
                    R"#(Builds transfromation object out of matrix. Matrix must be 3 x 4. Unit is used as multiplier.)#"  , py::arg("coefs"),  py::arg("trsf"),  py::arg("unit"),  py::arg("prec"))
;


    static_cast<py::class_<ShapeAnalysis_FreeBounds ,std::unique_ptr<ShapeAnalysis_FreeBounds>  >>(m.attr("ShapeAnalysis_FreeBounds"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const Standard_Real,const Standard_Boolean,const Standard_Boolean >()  , py::arg("shape"),  py::arg("toler"),  py::arg("splitclosed")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("splitopen")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const TopoDS_Shape &,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean >()  , py::arg("shape"),  py::arg("splitclosed")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("splitopen")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("checkinternaledges")=static_cast<const Standard_Boolean>(Standard_False) )
        .def("GetClosedWires",
             (const TopoDS_Compound & (ShapeAnalysis_FreeBounds::*)() const) static_cast<const TopoDS_Compound & (ShapeAnalysis_FreeBounds::*)() const>(&ShapeAnalysis_FreeBounds::GetClosedWires),
             R"#(Returns compound of closed wires out of free edges.)#" )
        .def("GetOpenWires",
             (const TopoDS_Compound & (ShapeAnalysis_FreeBounds::*)() const) static_cast<const TopoDS_Compound & (ShapeAnalysis_FreeBounds::*)() const>(&ShapeAnalysis_FreeBounds::GetOpenWires),
             R"#(Returns compound of open wires out of free edges.)#" )
        .def("GetClosedWires",
             (const TopoDS_Compound & (ShapeAnalysis_FreeBounds::*)() const) static_cast<const TopoDS_Compound & (ShapeAnalysis_FreeBounds::*)() const>(&ShapeAnalysis_FreeBounds::GetClosedWires),
             R"#(Returns compound of closed wires out of free edges.)#" )
        .def("GetOpenWires",
             (const TopoDS_Compound & (ShapeAnalysis_FreeBounds::*)() const) static_cast<const TopoDS_Compound & (ShapeAnalysis_FreeBounds::*)() const>(&ShapeAnalysis_FreeBounds::GetOpenWires),
             R"#(Returns compound of open wires out of free edges.)#" )
        .def_static("ConnectEdgesToWires_s",
                    (void (*)( opencascade::handle<TopTools_HSequenceOfShape> & ,  const Standard_Real ,  const Standard_Boolean ,  opencascade::handle<TopTools_HSequenceOfShape> &  ) ) static_cast<void (*)( opencascade::handle<TopTools_HSequenceOfShape> & ,  const Standard_Real ,  const Standard_Boolean ,  opencascade::handle<TopTools_HSequenceOfShape> &  ) >(&ShapeAnalysis_FreeBounds::ConnectEdgesToWires),
                    R"#(Builds sequnce of <wires> out of sequence of not sorted <edges>. Tries to build wires of maximum length. Building a wire is stopped when no edges can be connected to it at its head or at its tail.)#"  , py::arg("edges"),  py::arg("toler"),  py::arg("shared"),  py::arg("wires"))
        .def_static("ConnectWiresToWires_s",
                    (void (*)( opencascade::handle<TopTools_HSequenceOfShape> & ,  const Standard_Real ,  const Standard_Boolean ,  opencascade::handle<TopTools_HSequenceOfShape> &  ) ) static_cast<void (*)( opencascade::handle<TopTools_HSequenceOfShape> & ,  const Standard_Real ,  const Standard_Boolean ,  opencascade::handle<TopTools_HSequenceOfShape> &  ) >(&ShapeAnalysis_FreeBounds::ConnectWiresToWires),
                    R"#(None)#"  , py::arg("iwires"),  py::arg("toler"),  py::arg("shared"),  py::arg("owires"))
        .def_static("ConnectWiresToWires_s",
                    (void (*)( opencascade::handle<TopTools_HSequenceOfShape> & ,  const Standard_Real ,  const Standard_Boolean ,  opencascade::handle<TopTools_HSequenceOfShape> & ,  NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> &  ) ) static_cast<void (*)( opencascade::handle<TopTools_HSequenceOfShape> & ,  const Standard_Real ,  const Standard_Boolean ,  opencascade::handle<TopTools_HSequenceOfShape> & ,  NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> &  ) >(&ShapeAnalysis_FreeBounds::ConnectWiresToWires),
                    R"#(Builds sequnce of <owires> out of sequence of not sorted <iwires>. Tries to build wires of maximum length. Building a wire is stopped when no wires can be connected to it at its head or at its tail.)#"  , py::arg("iwires"),  py::arg("toler"),  py::arg("shared"),  py::arg("owires"),  py::arg("vertices"))
        .def_static("SplitWires_s",
                    (void (*)( const opencascade::handle<TopTools_HSequenceOfShape> & ,  const Standard_Real ,  const Standard_Boolean ,  opencascade::handle<TopTools_HSequenceOfShape> & ,  opencascade::handle<TopTools_HSequenceOfShape> &  ) ) static_cast<void (*)( const opencascade::handle<TopTools_HSequenceOfShape> & ,  const Standard_Real ,  const Standard_Boolean ,  opencascade::handle<TopTools_HSequenceOfShape> & ,  opencascade::handle<TopTools_HSequenceOfShape> &  ) >(&ShapeAnalysis_FreeBounds::SplitWires),
                    R"#(Extracts closed sub-wires out of <wires> and adds them to <closed>, open wires remained after extraction are put into <open>. If <shared> is True extraction is performed only when edges share the same vertex. If <shared> is False connection is performed only when ends of the edges are at distance less than <toler>.)#"  , py::arg("wires"),  py::arg("toler"),  py::arg("shared"),  py::arg("closed"),  py::arg("open"))
        .def_static("DispatchWires_s",
                    (void (*)( const opencascade::handle<TopTools_HSequenceOfShape> & ,  TopoDS_Compound & ,  TopoDS_Compound &  ) ) static_cast<void (*)( const opencascade::handle<TopTools_HSequenceOfShape> & ,  TopoDS_Compound & ,  TopoDS_Compound &  ) >(&ShapeAnalysis_FreeBounds::DispatchWires),
                    R"#(Dispatches sequence of <wires> into two compounds <closed> for closed wires and <open> for open wires. If a compound is not empty wires are added into it.)#"  , py::arg("wires"),  py::arg("closed"),  py::arg("open"))
;


    static_cast<py::class_<ShapeAnalysis_TransferParameters ,opencascade::handle<ShapeAnalysis_TransferParameters>  , Standard_Transient >>(m.attr("ShapeAnalysis_TransferParameters"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Face & >()  , py::arg("E"),  py::arg("F") )
        .def("Init",
             (void (ShapeAnalysis_TransferParameters::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) ) static_cast<void (ShapeAnalysis_TransferParameters::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) >(&ShapeAnalysis_TransferParameters::Init),
             R"#(Initialize a tool with edge and face)#"  , py::arg("E"),  py::arg("F"))
        .def("SetMaxTolerance",
             (void (ShapeAnalysis_TransferParameters::*)( const Standard_Real  ) ) static_cast<void (ShapeAnalysis_TransferParameters::*)( const Standard_Real  ) >(&ShapeAnalysis_TransferParameters::SetMaxTolerance),
             R"#(Sets maximal tolerance to use linear recomputation of parameters.)#"  , py::arg("maxtol"))
        .def("Perform",
             (opencascade::handle<TColStd_HSequenceOfReal> (ShapeAnalysis_TransferParameters::*)( const opencascade::handle<TColStd_HSequenceOfReal> & ,  const Standard_Boolean  ) ) static_cast<opencascade::handle<TColStd_HSequenceOfReal> (ShapeAnalysis_TransferParameters::*)( const opencascade::handle<TColStd_HSequenceOfReal> & ,  const Standard_Boolean  ) >(&ShapeAnalysis_TransferParameters::Perform),
             R"#(Transfers parameters given by sequence Params from 3d curve to pcurve (if To2d is True) or back (if To2d is False))#"  , py::arg("Params"),  py::arg("To2d"))
        .def("Perform",
             (Standard_Real (ShapeAnalysis_TransferParameters::*)( const Standard_Real ,  const Standard_Boolean  ) ) static_cast<Standard_Real (ShapeAnalysis_TransferParameters::*)( const Standard_Real ,  const Standard_Boolean  ) >(&ShapeAnalysis_TransferParameters::Perform),
             R"#(Transfers parameter given by sequence Params from 3d curve to pcurve (if To2d is True) or back (if To2d is False))#"  , py::arg("Param"),  py::arg("To2d"))
        .def("TransferRange",
             (void (ShapeAnalysis_TransferParameters::*)( TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (ShapeAnalysis_TransferParameters::*)( TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&ShapeAnalysis_TransferParameters::TransferRange),
             R"#(Recomputes range of curves from NewEdge. If Is2d equals True parameters are recomputed by curve2d else by curve3d.)#"  , py::arg("newEdge"),  py::arg("prevPar"),  py::arg("currPar"),  py::arg("To2d"))
        .def("IsSameRange",
             (Standard_Boolean (ShapeAnalysis_TransferParameters::*)() const) static_cast<Standard_Boolean (ShapeAnalysis_TransferParameters::*)() const>(&ShapeAnalysis_TransferParameters::IsSameRange),
             R"#(Returns True if 3d curve of edge and pcurve are SameRange (in default implementation, if myScale == 1 and myShift == 0))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeAnalysis_TransferParameters::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeAnalysis_TransferParameters::*)() const>(&ShapeAnalysis_TransferParameters::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeAnalysis_TransferParameters::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeAnalysis_TransferParameters::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<ShapeAnalysis_Curve ,std::unique_ptr<ShapeAnalysis_Curve>>(m,"ShapeAnalysis_Curve");

    static_cast<py::class_<ShapeAnalysis_Curve ,std::unique_ptr<ShapeAnalysis_Curve>  >>(m.attr("ShapeAnalysis_Curve"))
        .def("Project",
             (Standard_Real (ShapeAnalysis_Curve::*)( const opencascade::handle<Geom_Curve> & ,  const gp_Pnt & ,  const Standard_Real ,  gp_Pnt & ,  Standard_Real & ,  const Standard_Boolean  ) const) static_cast<Standard_Real (ShapeAnalysis_Curve::*)( const opencascade::handle<Geom_Curve> & ,  const gp_Pnt & ,  const Standard_Real ,  gp_Pnt & ,  Standard_Real & ,  const Standard_Boolean  ) const>(&ShapeAnalysis_Curve::Project),
             R"#(Projects a Point on a Curve. Computes the projected point and its parameter on the curve. <preci> is used as 3d precision (hence, 0 will produce reject unless exact confusion). The number of iterations is limited. If AdjustToEnds is True, point will be adjusted to the end of the curve if distance is less than <preci>)#"  , py::arg("C3D"),  py::arg("P3D"),  py::arg("preci"),  py::arg("proj"),  py::arg("param"),  py::arg("AdjustToEnds")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Project",
             (Standard_Real (ShapeAnalysis_Curve::*)( const Adaptor3d_Curve & ,  const gp_Pnt & ,  const Standard_Real ,  gp_Pnt & ,  Standard_Real & ,  const Standard_Boolean  ) const) static_cast<Standard_Real (ShapeAnalysis_Curve::*)( const Adaptor3d_Curve & ,  const gp_Pnt & ,  const Standard_Real ,  gp_Pnt & ,  Standard_Real & ,  const Standard_Boolean  ) const>(&ShapeAnalysis_Curve::Project),
             R"#(Projects a Point on a Curve. Computes the projected point and its parameter on the curve. <preci> is used as 3d precision (hence, 0 will produce reject unless exact confusion). The number of iterations is limited.)#"  , py::arg("C3D"),  py::arg("P3D"),  py::arg("preci"),  py::arg("proj"),  py::arg("param"),  py::arg("AdjustToEnds")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Project",
             (Standard_Real (ShapeAnalysis_Curve::*)( const opencascade::handle<Geom_Curve> & ,  const gp_Pnt & ,  const Standard_Real ,  gp_Pnt & ,  Standard_Real & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) const) static_cast<Standard_Real (ShapeAnalysis_Curve::*)( const opencascade::handle<Geom_Curve> & ,  const gp_Pnt & ,  const Standard_Real ,  gp_Pnt & ,  Standard_Real & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) const>(&ShapeAnalysis_Curve::Project),
             R"#(Projects a Point on a Curve, but parameters are limited between <cf> and <cl>. The range [cf, cl] is extended with help of Adaptor3d on the basis of 3d precision <preci>. If AdjustToEnds is True, point will be adjusted to the end of the curve if distance is less than <preci>)#"  , py::arg("C3D"),  py::arg("P3D"),  py::arg("preci"),  py::arg("proj"),  py::arg("param"),  py::arg("cf"),  py::arg("cl"),  py::arg("AdjustToEnds")=static_cast<const Standard_Boolean>(Standard_True))
        .def("ProjectAct",
             (Standard_Real (ShapeAnalysis_Curve::*)( const Adaptor3d_Curve & ,  const gp_Pnt & ,  const Standard_Real ,  gp_Pnt & ,  Standard_Real &  ) const) static_cast<Standard_Real (ShapeAnalysis_Curve::*)( const Adaptor3d_Curve & ,  const gp_Pnt & ,  const Standard_Real ,  gp_Pnt & ,  Standard_Real &  ) const>(&ShapeAnalysis_Curve::ProjectAct),
             R"#(None)#"  , py::arg("C3D"),  py::arg("P3D"),  py::arg("preci"),  py::arg("proj"),  py::arg("param"))
        .def("NextProject",
             (Standard_Real (ShapeAnalysis_Curve::*)( const Standard_Real ,  const opencascade::handle<Geom_Curve> & ,  const gp_Pnt & ,  const Standard_Real ,  gp_Pnt & ,  Standard_Real & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) const) static_cast<Standard_Real (ShapeAnalysis_Curve::*)( const Standard_Real ,  const opencascade::handle<Geom_Curve> & ,  const gp_Pnt & ,  const Standard_Real ,  gp_Pnt & ,  Standard_Real & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) const>(&ShapeAnalysis_Curve::NextProject),
             R"#(Projects a Point on a Curve using Newton method. <paramPrev> is taken as the first approximation of solution. If Newton algorithm fails the method Project() is used. If AdjustToEnds is True, point will be adjusted to the end of the curve if distance is less than <preci>)#"  , py::arg("paramPrev"),  py::arg("C3D"),  py::arg("P3D"),  py::arg("preci"),  py::arg("proj"),  py::arg("param"),  py::arg("cf"),  py::arg("cl"),  py::arg("AdjustToEnds")=static_cast<const Standard_Boolean>(Standard_True))
        .def("NextProject",
             (Standard_Real (ShapeAnalysis_Curve::*)( const Standard_Real ,  const Adaptor3d_Curve & ,  const gp_Pnt & ,  const Standard_Real ,  gp_Pnt & ,  Standard_Real &  ) const) static_cast<Standard_Real (ShapeAnalysis_Curve::*)( const Standard_Real ,  const Adaptor3d_Curve & ,  const gp_Pnt & ,  const Standard_Real ,  gp_Pnt & ,  Standard_Real &  ) const>(&ShapeAnalysis_Curve::NextProject),
             R"#(Projects a Point on a Curve using Newton method. <paramPrev> is taken as the first approximation of solution. If Newton algorithm fails the method Project() is used.)#"  , py::arg("paramPrev"),  py::arg("C3D"),  py::arg("P3D"),  py::arg("preci"),  py::arg("proj"),  py::arg("param"))
        .def("ValidateRange",
             (Standard_Boolean (ShapeAnalysis_Curve::*)( const opencascade::handle<Geom_Curve> & ,  Standard_Real & ,  Standard_Real & ,  const Standard_Real  ) const) static_cast<Standard_Boolean (ShapeAnalysis_Curve::*)( const opencascade::handle<Geom_Curve> & ,  Standard_Real & ,  Standard_Real & ,  const Standard_Real  ) const>(&ShapeAnalysis_Curve::ValidateRange),
             R"#(Validate parameters First and Last for the given curve in order to make them valid for creation of edge. This includes: - limiting range [First,Last] by range of curve - adjusting range [First,Last] for periodic (or closed) curve if Last < First Returns True if parameters are OK or are successfully corrected, or False if parameters cannot be corrected. In the latter case, parameters are reset to range of curve.)#"  , py::arg("Crv"),  py::arg("First"),  py::arg("Last"),  py::arg("prec"))
        .def("FillBndBox",
             (void (ShapeAnalysis_Curve::*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Boolean ,  Bnd_Box2d &  ) const) static_cast<void (ShapeAnalysis_Curve::*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Boolean ,  Bnd_Box2d &  ) const>(&ShapeAnalysis_Curve::FillBndBox),
             R"#(Computes a boundary box on segment of curve C2d from First to Last. This is done by taking NPoints points from the curve and, if Exact is True, by searching for exact extrema. All these points are added to Box.)#"  , py::arg("C2d"),  py::arg("First"),  py::arg("Last"),  py::arg("NPoints"),  py::arg("Exact"),  py::arg("Box"))
        .def("SelectForwardSeam",
             (Standard_Integer (ShapeAnalysis_Curve::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom2d_Curve> &  ) const) static_cast<Standard_Integer (ShapeAnalysis_Curve::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom2d_Curve> &  ) const>(&ShapeAnalysis_Curve::SelectForwardSeam),
             R"#(Defines which pcurve (C1 or C2) should be chosen for FORWARD seam edge.)#"  , py::arg("C1"),  py::arg("C2"))
        .def_static("IsPlanar_s",
                    (Standard_Boolean (*)(  const NCollection_Array1<gp_Pnt> & ,  gp_XYZ & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)(  const NCollection_Array1<gp_Pnt> & ,  gp_XYZ & ,  const Standard_Real  ) >(&ShapeAnalysis_Curve::IsPlanar),
                    R"#(Checks if points are planar with given preci. If Normal has not zero modulus, checks with given normal)#"  , py::arg("pnts"),  py::arg("Normal"),  py::arg("preci")=static_cast<const Standard_Real>(0))
        .def_static("IsPlanar_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & ,  gp_XYZ & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & ,  gp_XYZ & ,  const Standard_Real  ) >(&ShapeAnalysis_Curve::IsPlanar),
                    R"#(Checks if curve is planar with given preci. If Normal has not zero modulus, checks with given normal)#"  , py::arg("curve"),  py::arg("Normal"),  py::arg("preci")=static_cast<const Standard_Real>(0))
        .def_static("GetSamplePoints_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real ,  NCollection_Sequence<gp_Pnt2d> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real ,  NCollection_Sequence<gp_Pnt2d> &  ) >(&ShapeAnalysis_Curve::GetSamplePoints),
                    R"#(Returns sample points which will serve as linearisation of the2d curve in range (first, last) The distribution of sample points is consystent with what is used by BRepTopAdaptor_FClass2d)#"  , py::arg("curve"),  py::arg("first"),  py::arg("last"),  py::arg("seq"))
        .def_static("GetSamplePoints_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real ,  NCollection_Sequence<gp_Pnt> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real ,  NCollection_Sequence<gp_Pnt> &  ) >(&ShapeAnalysis_Curve::GetSamplePoints),
                    R"#(Returns sample points which will serve as linearisation of the curve in range (first, last))#"  , py::arg("curve"),  py::arg("first"),  py::arg("last"),  py::arg("seq"))
        .def_static("IsClosed_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Real  ) >(&ShapeAnalysis_Curve::IsClosed),
                    R"#(Tells if the Curve is closed with given precision. If <preci> < 0 then Precision::Confusion is used.)#"  , py::arg("curve"),  py::arg("preci")=static_cast<const Standard_Real>(- 1))
        .def_static("IsPeriodic_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom_Curve> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom_Curve> &  ) >(&ShapeAnalysis_Curve::IsPeriodic),
                    R"#(This method was implemented as fix for changes in trimmed curve behaviour. For the moment trimmed curve returns false anyway. So it is necessary to adapt all Data exchange tools for this behaviour. Current implementation takes into account that curve may be offset.)#"  , py::arg("curve"))
        .def_static("IsPeriodic_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom2d_Curve> &  ) >(&ShapeAnalysis_Curve::IsPeriodic),
                    R"#(The same as for Curve3d.)#"  , py::arg("curve"))
;


    static_cast<py::class_<ShapeAnalysis_TransferParametersProj ,opencascade::handle<ShapeAnalysis_TransferParametersProj>  , ShapeAnalysis_TransferParameters >>(m.attr("ShapeAnalysis_TransferParametersProj"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Face & >()  , py::arg("E"),  py::arg("F") )
        .def("Init",
             (void (ShapeAnalysis_TransferParametersProj::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) ) static_cast<void (ShapeAnalysis_TransferParametersProj::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) >(&ShapeAnalysis_TransferParametersProj::Init),
             R"#(None)#"  , py::arg("E"),  py::arg("F"))
        .def("Perform",
             (opencascade::handle<TColStd_HSequenceOfReal> (ShapeAnalysis_TransferParametersProj::*)( const opencascade::handle<TColStd_HSequenceOfReal> & ,  const Standard_Boolean  ) ) static_cast<opencascade::handle<TColStd_HSequenceOfReal> (ShapeAnalysis_TransferParametersProj::*)( const opencascade::handle<TColStd_HSequenceOfReal> & ,  const Standard_Boolean  ) >(&ShapeAnalysis_TransferParametersProj::Perform),
             R"#(Transfers parameters given by sequence Params from 3d curve to pcurve (if To2d is True) or back (if To2d is False))#"  , py::arg("Papams"),  py::arg("To2d"))
        .def("Perform",
             (Standard_Real (ShapeAnalysis_TransferParametersProj::*)( const Standard_Real ,  const Standard_Boolean  ) ) static_cast<Standard_Real (ShapeAnalysis_TransferParametersProj::*)( const Standard_Real ,  const Standard_Boolean  ) >(&ShapeAnalysis_TransferParametersProj::Perform),
             R"#(Transfers parameter given by Param from 3d curve to pcurve (if To2d is True) or back (if To2d is False))#"  , py::arg("Param"),  py::arg("To2d"))
        .def("ForceProjection",
             (Standard_Boolean & (ShapeAnalysis_TransferParametersProj::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_TransferParametersProj::*)() >(&ShapeAnalysis_TransferParametersProj::ForceProjection),
             R"#(Returns modifiable flag forcing projection If it is False (default), projection is done only if edge is not SameParameter or if tolerance of edge is greater than MaxTolerance())#" )
        .def("TransferRange",
             (void (ShapeAnalysis_TransferParametersProj::*)( TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (ShapeAnalysis_TransferParametersProj::*)( TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&ShapeAnalysis_TransferParametersProj::TransferRange),
             R"#(Recomputes range of curves from NewEdge. If Is2d equals True parameters are recomputed by curve2d else by curve3d.)#"  , py::arg("newEdge"),  py::arg("prevPar"),  py::arg("currPar"),  py::arg("Is2d"))
        .def("IsSameRange",
             (Standard_Boolean (ShapeAnalysis_TransferParametersProj::*)() const) static_cast<Standard_Boolean (ShapeAnalysis_TransferParametersProj::*)() const>(&ShapeAnalysis_TransferParametersProj::IsSameRange),
             R"#(Returns False;)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeAnalysis_TransferParametersProj::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeAnalysis_TransferParametersProj::*)() const>(&ShapeAnalysis_TransferParametersProj::DynamicType),
             R"#(None)#" )
        .def_static("CopyNMVertex_s",
                    (TopoDS_Vertex (*)( const TopoDS_Vertex & ,  const TopoDS_Edge & ,  const TopoDS_Edge &  ) ) static_cast<TopoDS_Vertex (*)( const TopoDS_Vertex & ,  const TopoDS_Edge & ,  const TopoDS_Edge &  ) >(&ShapeAnalysis_TransferParametersProj::CopyNMVertex),
                    R"#(Make a copy of non-manifold vertex theVert (i.e. create new TVertex and replace PointRepresentations for this vertex from fromedge to toedge. Other representations were copied))#"  , py::arg("theVert"),  py::arg("toedge"),  py::arg("fromedge"))
        .def_static("CopyNMVertex_s",
                    (TopoDS_Vertex (*)( const TopoDS_Vertex & ,  const TopoDS_Face & ,  const TopoDS_Face &  ) ) static_cast<TopoDS_Vertex (*)( const TopoDS_Vertex & ,  const TopoDS_Face & ,  const TopoDS_Face &  ) >(&ShapeAnalysis_TransferParametersProj::CopyNMVertex),
                    R"#(Make a copy of non-manifold vertex theVert (i.e. create new TVertex and replace PointRepresentations for this vertex from fromFace to toFace. Other representations were copied))#"  , py::arg("theVert"),  py::arg("toFace"),  py::arg("fromFace"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeAnalysis_TransferParametersProj::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeAnalysis_TransferParametersProj::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<ShapeAnalysis_ShapeContents ,std::unique_ptr<ShapeAnalysis_ShapeContents>  >>(m.attr("ShapeAnalysis_ShapeContents"))
        .def(py::init<  >()  )
        .def("Clear",
             (void (ShapeAnalysis_ShapeContents::*)() ) static_cast<void (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::Clear),
             R"#(Clears all accumulated statictics)#" )
        .def("ClearFlags",
             (void (ShapeAnalysis_ShapeContents::*)() ) static_cast<void (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ClearFlags),
             R"#(Clears all flags)#" )
        .def("Perform",
             (void (ShapeAnalysis_ShapeContents::*)( const TopoDS_Shape &  ) ) static_cast<void (ShapeAnalysis_ShapeContents::*)( const TopoDS_Shape &  ) >(&ShapeAnalysis_ShapeContents::Perform),
             R"#(Counts quantities of sun-shapes in shape and stores sub-shapes according to flags)#"  , py::arg("shape"))
        .def("ModifyBigSplineMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyBigSplineMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces with edges if its 3D curves has more than 8192 poles.)#" )
        .def("ModifyIndirectMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyIndirectMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces on indirect surfaces)#" )
        .def("ModifyOffestSurfaceMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyOffestSurfaceMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces on offset surfaces.)#" )
        .def("ModifyTrimmed3dMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyTrimmed3dMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces with edges if ist 3D curves are trimmed curves)#" )
        .def("ModifyOffsetCurveMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyOffsetCurveMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces with edges if its 3D curves and pcurves are offest curves)#" )
        .def("ModifyTrimmed2dMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyTrimmed2dMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces with edges if its pcurves are trimmed curves)#" )
        .def("NbSolids",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSolids),
             R"#(None)#" )
        .def("NbShells",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbShells),
             R"#(None)#" )
        .def("NbFaces",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbFaces),
             R"#(None)#" )
        .def("NbWires",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbWires),
             R"#(None)#" )
        .def("NbEdges",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbEdges),
             R"#(None)#" )
        .def("NbVertices",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbVertices),
             R"#(None)#" )
        .def("NbSolidsWithVoids",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSolidsWithVoids),
             R"#(None)#" )
        .def("NbBigSplines",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbBigSplines),
             R"#(None)#" )
        .def("NbC0Surfaces",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbC0Surfaces),
             R"#(None)#" )
        .def("NbC0Curves",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbC0Curves),
             R"#(None)#" )
        .def("NbOffsetSurf",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbOffsetSurf),
             R"#(None)#" )
        .def("NbIndirectSurf",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbIndirectSurf),
             R"#(None)#" )
        .def("NbOffsetCurves",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbOffsetCurves),
             R"#(None)#" )
        .def("NbTrimmedCurve2d",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbTrimmedCurve2d),
             R"#(None)#" )
        .def("NbTrimmedCurve3d",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbTrimmedCurve3d),
             R"#(None)#" )
        .def("NbBSplibeSurf",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbBSplibeSurf),
             R"#(None)#" )
        .def("NbBezierSurf",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbBezierSurf),
             R"#(None)#" )
        .def("NbTrimSurf",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbTrimSurf),
             R"#(None)#" )
        .def("NbWireWitnSeam",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbWireWitnSeam),
             R"#(None)#" )
        .def("NbWireWithSevSeams",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbWireWithSevSeams),
             R"#(None)#" )
        .def("NbFaceWithSevWires",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbFaceWithSevWires),
             R"#(None)#" )
        .def("NbNoPCurve",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbNoPCurve),
             R"#(None)#" )
        .def("NbFreeFaces",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbFreeFaces),
             R"#(None)#" )
        .def("NbFreeWires",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbFreeWires),
             R"#(None)#" )
        .def("NbFreeEdges",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbFreeEdges),
             R"#(None)#" )
        .def("NbSharedSolids",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedSolids),
             R"#(None)#" )
        .def("NbSharedShells",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedShells),
             R"#(None)#" )
        .def("NbSharedFaces",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedFaces),
             R"#(None)#" )
        .def("NbSharedWires",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedWires),
             R"#(None)#" )
        .def("NbSharedFreeWires",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedFreeWires),
             R"#(None)#" )
        .def("NbSharedFreeEdges",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedFreeEdges),
             R"#(None)#" )
        .def("NbSharedEdges",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedEdges),
             R"#(None)#" )
        .def("NbSharedVertices",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedVertices),
             R"#(None)#" )
        .def("BigSplineSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::BigSplineSec),
             R"#(None)#" )
        .def("IndirectSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::IndirectSec),
             R"#(None)#" )
        .def("OffsetSurfaceSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::OffsetSurfaceSec),
             R"#(None)#" )
        .def("Trimmed3dSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::Trimmed3dSec),
             R"#(None)#" )
        .def("OffsetCurveSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::OffsetCurveSec),
             R"#(None)#" )
        .def("Trimmed2dSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::Trimmed2dSec),
             R"#(None)#" )
        .def("NbSolids",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSolids),
             R"#(None)#" )
        .def("NbShells",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbShells),
             R"#(None)#" )
        .def("NbFaces",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbFaces),
             R"#(None)#" )
        .def("NbWires",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbWires),
             R"#(None)#" )
        .def("NbEdges",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbEdges),
             R"#(None)#" )
        .def("NbVertices",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbVertices),
             R"#(None)#" )
        .def("NbSolidsWithVoids",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSolidsWithVoids),
             R"#(None)#" )
        .def("NbBigSplines",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbBigSplines),
             R"#(None)#" )
        .def("NbC0Surfaces",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbC0Surfaces),
             R"#(None)#" )
        .def("NbC0Curves",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbC0Curves),
             R"#(None)#" )
        .def("NbOffsetSurf",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbOffsetSurf),
             R"#(None)#" )
        .def("NbIndirectSurf",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbIndirectSurf),
             R"#(None)#" )
        .def("NbOffsetCurves",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbOffsetCurves),
             R"#(None)#" )
        .def("NbTrimmedCurve2d",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbTrimmedCurve2d),
             R"#(None)#" )
        .def("NbTrimmedCurve3d",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbTrimmedCurve3d),
             R"#(None)#" )
        .def("NbBSplibeSurf",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbBSplibeSurf),
             R"#(None)#" )
        .def("NbBezierSurf",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbBezierSurf),
             R"#(None)#" )
        .def("NbTrimSurf",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbTrimSurf),
             R"#(None)#" )
        .def("NbWireWitnSeam",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbWireWitnSeam),
             R"#(None)#" )
        .def("NbWireWithSevSeams",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbWireWithSevSeams),
             R"#(None)#" )
        .def("NbFaceWithSevWires",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbFaceWithSevWires),
             R"#(None)#" )
        .def("NbNoPCurve",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbNoPCurve),
             R"#(None)#" )
        .def("NbFreeFaces",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbFreeFaces),
             R"#(None)#" )
        .def("NbFreeWires",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbFreeWires),
             R"#(None)#" )
        .def("NbFreeEdges",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbFreeEdges),
             R"#(None)#" )
        .def("NbSharedSolids",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedSolids),
             R"#(None)#" )
        .def("NbSharedShells",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedShells),
             R"#(None)#" )
        .def("NbSharedFaces",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedFaces),
             R"#(None)#" )
        .def("NbSharedWires",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedWires),
             R"#(None)#" )
        .def("NbSharedFreeWires",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedFreeWires),
             R"#(None)#" )
        .def("NbSharedFreeEdges",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedFreeEdges),
             R"#(None)#" )
        .def("NbSharedEdges",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedEdges),
             R"#(None)#" )
        .def("NbSharedVertices",
             (Standard_Integer (ShapeAnalysis_ShapeContents::*)() const) static_cast<Standard_Integer (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::NbSharedVertices),
             R"#(None)#" )
        .def("BigSplineSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::BigSplineSec),
             R"#(None)#" )
        .def("IndirectSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::IndirectSec),
             R"#(None)#" )
        .def("OffsetSurfaceSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::OffsetSurfaceSec),
             R"#(None)#" )
        .def("Trimmed3dSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::Trimmed3dSec),
             R"#(None)#" )
        .def("OffsetCurveSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::OffsetCurveSec),
             R"#(None)#" )
        .def("Trimmed2dSec",
             (opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const) static_cast<opencascade::handle<TopTools_HSequenceOfShape> (ShapeAnalysis_ShapeContents::*)() const>(&ShapeAnalysis_ShapeContents::Trimmed2dSec),
             R"#(None)#" )
        .def("ModifyBigSplineMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyBigSplineMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces with edges if its 3D curves has more than 8192 poles.)#" )
        .def("ModifyIndirectMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyIndirectMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces on indirect surfaces)#" )
        .def("ModifyOffestSurfaceMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyOffestSurfaceMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces on offset surfaces.)#" )
        .def("ModifyTrimmed3dMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyTrimmed3dMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces with edges if ist 3D curves are trimmed curves)#" )
        .def("ModifyOffsetCurveMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyOffsetCurveMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces with edges if its 3D curves and pcurves are offest curves)#" )
        .def("ModifyTrimmed2dMode",
             (Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() ) static_cast<Standard_Boolean & (ShapeAnalysis_ShapeContents::*)() >(&ShapeAnalysis_ShapeContents::ModifyTrimmed2dMode),
             R"#(Returns (modifiable) the flag which defines whether to store faces with edges if its pcurves are trimmed curves)#" )
;

// functions
// ./opencascade/ShapeAnalysis_HSequenceOfFreeBounds.hxx
// ./opencascade/ShapeAnalysis_FreeBoundsProperties.hxx
// ./opencascade/ShapeAnalysis_Shell.hxx
// ./opencascade/ShapeAnalysis_FreeBounds.hxx
// ./opencascade/ShapeAnalysis_DataMapOfShapeListOfReal.hxx
// ./opencascade/ShapeAnalysis_SequenceOfFreeBounds.hxx
// ./opencascade/ShapeAnalysis_Edge.hxx
// ./opencascade/ShapeAnalysis.hxx
// ./opencascade/ShapeAnalysis_DataMapIteratorOfDataMapOfShapeListOfReal.hxx
// ./opencascade/ShapeAnalysis_TransferParametersProj.hxx
// ./opencascade/ShapeAnalysis_ShapeTolerance.hxx
// ./opencascade/ShapeAnalysis_WireOrder.hxx
// ./opencascade/ShapeAnalysis_Surface.hxx
// ./opencascade/ShapeAnalysis_TransferParameters.hxx
// ./opencascade/ShapeAnalysis_Wire.hxx
// ./opencascade/ShapeAnalysis_FreeBoundData.hxx
// ./opencascade/ShapeAnalysis_BoxBndTree.hxx
// ./opencascade/ShapeAnalysis_ShapeContents.hxx
// ./opencascade/ShapeAnalysis_CheckSmallFace.hxx
// ./opencascade/ShapeAnalysis_Geom.hxx
// ./opencascade/ShapeAnalysis_WireVertex.hxx
// ./opencascade/ShapeAnalysis_Curve.hxx

// operators

// register typdefs
// ./opencascade/ShapeAnalysis_HSequenceOfFreeBounds.hxx
// ./opencascade/ShapeAnalysis_FreeBoundsProperties.hxx
// ./opencascade/ShapeAnalysis_Shell.hxx
// ./opencascade/ShapeAnalysis_FreeBounds.hxx
// ./opencascade/ShapeAnalysis_DataMapOfShapeListOfReal.hxx
    register_template_NCollection_DataMap<TopoDS_Shape, TColStd_ListOfReal, TopTools_ShapeMapHasher>(m,"ShapeAnalysis_DataMapOfShapeListOfReal");  
// ./opencascade/ShapeAnalysis_SequenceOfFreeBounds.hxx
    register_template_NCollection_Sequence<opencascade::handle<ShapeAnalysis_FreeBoundData> >(m,"ShapeAnalysis_SequenceOfFreeBounds");  
// ./opencascade/ShapeAnalysis_Edge.hxx
// ./opencascade/ShapeAnalysis.hxx
// ./opencascade/ShapeAnalysis_DataMapIteratorOfDataMapOfShapeListOfReal.hxx
// ./opencascade/ShapeAnalysis_TransferParametersProj.hxx
// ./opencascade/ShapeAnalysis_ShapeTolerance.hxx
// ./opencascade/ShapeAnalysis_WireOrder.hxx
// ./opencascade/ShapeAnalysis_Surface.hxx
// ./opencascade/ShapeAnalysis_TransferParameters.hxx
// ./opencascade/ShapeAnalysis_Wire.hxx
// ./opencascade/ShapeAnalysis_FreeBoundData.hxx
// ./opencascade/ShapeAnalysis_BoxBndTree.hxx
    register_template_NCollection_UBTree<Standard_Integer, Bnd_Box>(m,"ShapeAnalysis_BoxBndTree");  
// ./opencascade/ShapeAnalysis_ShapeContents.hxx
// ./opencascade/ShapeAnalysis_CheckSmallFace.hxx
// ./opencascade/ShapeAnalysis_Geom.hxx
// ./opencascade/ShapeAnalysis_WireVertex.hxx
// ./opencascade/ShapeAnalysis_Curve.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

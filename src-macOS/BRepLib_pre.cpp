
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Geom_Surface.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TopoDS_Shape.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Wire.hxx>
#include <Geom_Curve.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_Face.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom2d_Curve.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Geom_Plane.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_Face.hxx>
#include <BRepLib_Command.hxx>
#include <BRepLib_MakeShape.hxx>
#include <BRepLib_MakeVertex.hxx>
#include <BRepLib_MakeEdge.hxx>
#include <BRepLib_MakeEdge2d.hxx>
#include <BRepLib_MakePolygon.hxx>
#include <BRepLib_MakeFace.hxx>
#include <BRepLib_MakeWire.hxx>
#include <BRepLib_MakeShell.hxx>
#include <BRepLib_MakeSolid.hxx>
#include <BRepLib_FindSurface.hxx>
#include <BRepLib_FuseEdges.hxx>
#include <BRepTools_ReShape.hxx>
#include <TopoDS_Vertex.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Shell.hxx>

// module includes
#include <BRepLib.hxx>
#include <BRepLib_Command.hxx>
#include <BRepLib_EdgeError.hxx>
#include <BRepLib_FaceError.hxx>
#include <BRepLib_FindSurface.hxx>
#include <BRepLib_FuseEdges.hxx>
#include <BRepLib_MakeEdge.hxx>
#include <BRepLib_MakeEdge2d.hxx>
#include <BRepLib_MakeFace.hxx>
#include <BRepLib_MakePolygon.hxx>
#include <BRepLib_MakeShape.hxx>
#include <BRepLib_MakeShell.hxx>
#include <BRepLib_MakeSolid.hxx>
#include <BRepLib_MakeVertex.hxx>
#include <BRepLib_MakeWire.hxx>
#include <BRepLib_ShapeModification.hxx>
#include <BRepLib_ShellError.hxx>
#include <BRepLib_WireError.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepLib_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepLib", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<BRepLib_EdgeError>(m, "BRepLib_EdgeError",R"#(Errors that can occur at edge construction. no error)#")
        .value("BRepLib_EdgeDone",BRepLib_EdgeError::BRepLib_EdgeDone)
        .value("BRepLib_PointProjectionFailed",BRepLib_EdgeError::BRepLib_PointProjectionFailed)
        .value("BRepLib_ParameterOutOfRange",BRepLib_EdgeError::BRepLib_ParameterOutOfRange)
        .value("BRepLib_DifferentPointsOnClosedCurve",BRepLib_EdgeError::BRepLib_DifferentPointsOnClosedCurve)
        .value("BRepLib_PointWithInfiniteParameter",BRepLib_EdgeError::BRepLib_PointWithInfiniteParameter)
        .value("BRepLib_DifferentsPointAndParameter",BRepLib_EdgeError::BRepLib_DifferentsPointAndParameter)
        .value("BRepLib_LineThroughIdenticPoints",BRepLib_EdgeError::BRepLib_LineThroughIdenticPoints).export_values();
    py::enum_<BRepLib_ShellError>(m, "BRepLib_ShellError",R"#(Errors that can occur at shell construction.)#")
        .value("BRepLib_ShellDone",BRepLib_ShellError::BRepLib_ShellDone)
        .value("BRepLib_EmptyShell",BRepLib_ShellError::BRepLib_EmptyShell)
        .value("BRepLib_DisconnectedShell",BRepLib_ShellError::BRepLib_DisconnectedShell)
        .value("BRepLib_ShellParametersOutOfRange",BRepLib_ShellError::BRepLib_ShellParametersOutOfRange).export_values();
    py::enum_<BRepLib_WireError>(m, "BRepLib_WireError",R"#(Errors that can occur at wire construction. no error)#")
        .value("BRepLib_WireDone",BRepLib_WireError::BRepLib_WireDone)
        .value("BRepLib_EmptyWire",BRepLib_WireError::BRepLib_EmptyWire)
        .value("BRepLib_DisconnectedWire",BRepLib_WireError::BRepLib_DisconnectedWire)
        .value("BRepLib_NonManifoldWire",BRepLib_WireError::BRepLib_NonManifoldWire).export_values();
    py::enum_<BRepLib_ShapeModification>(m, "BRepLib_ShapeModification",R"#(Modification type after a topologic operation.)#")
        .value("BRepLib_Preserved",BRepLib_ShapeModification::BRepLib_Preserved)
        .value("BRepLib_Deleted",BRepLib_ShapeModification::BRepLib_Deleted)
        .value("BRepLib_Trimmed",BRepLib_ShapeModification::BRepLib_Trimmed)
        .value("BRepLib_Merged",BRepLib_ShapeModification::BRepLib_Merged)
        .value("BRepLib_BoundaryModified",BRepLib_ShapeModification::BRepLib_BoundaryModified).export_values();
    py::enum_<BRepLib_FaceError>(m, "BRepLib_FaceError",R"#(Errors that can occur at face construction. no error not initialised)#")
        .value("BRepLib_FaceDone",BRepLib_FaceError::BRepLib_FaceDone)
        .value("BRepLib_NoFace",BRepLib_FaceError::BRepLib_NoFace)
        .value("BRepLib_NotPlanar",BRepLib_FaceError::BRepLib_NotPlanar)
        .value("BRepLib_CurveProjectionFailed",BRepLib_FaceError::BRepLib_CurveProjectionFailed)
        .value("BRepLib_ParametersOutOfRange",BRepLib_FaceError::BRepLib_ParametersOutOfRange).export_values();

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<BRepLib , shared_ptr<BRepLib> >(m,"BRepLib",R"#(The BRepLib package provides general utilities for BRep.)#");
    py::class_<BRepLib_Command , shared_ptr<BRepLib_Command> >(m,"BRepLib_Command",R"#(Root class for all commands in BRepLib.)#");
    py::class_<BRepLib_FindSurface , shared_ptr<BRepLib_FindSurface> >(m,"BRepLib_FindSurface",R"#(Provides an algorithm to find a Surface through a set of edges.)#");
    py::class_<BRepLib_FuseEdges , shared_ptr<BRepLib_FuseEdges> >(m,"BRepLib_FuseEdges",R"#(This class can detect vertices in a face that can be considered useless and then perform the fuse of the edges and remove the useless vertices. By useles vertices, we mean : * vertices that have exactly two connex edges * the edges connex to the vertex must have exactly the same 2 connex faces . * The edges connex to the vertex must have the same geometric support.)#");
    py::class_<BRepLib_MakeShape , shared_ptr<BRepLib_MakeShape> , BRepLib_Command>(m,"BRepLib_MakeShape",R"#(This is the root class for all shape constructions. It stores the result.)#");
    py::class_<BRepLib_MakeEdge , shared_ptr<BRepLib_MakeEdge> , BRepLib_MakeShape>(m,"BRepLib_MakeEdge",R"#(Provides methods to build edges.)#");
    py::class_<BRepLib_MakeEdge2d , shared_ptr<BRepLib_MakeEdge2d> , BRepLib_MakeShape>(m,"BRepLib_MakeEdge2d",R"#(Provides methods to build edges.)#");
    py::class_<BRepLib_MakeFace , shared_ptr<BRepLib_MakeFace> , BRepLib_MakeShape>(m,"BRepLib_MakeFace",R"#(Provides methods to build faces.)#");
    py::class_<BRepLib_MakePolygon , shared_ptr<BRepLib_MakePolygon> , BRepLib_MakeShape>(m,"BRepLib_MakePolygon",R"#(Class to build polygonal wires.)#");
    py::class_<BRepLib_MakeShell , shared_ptr<BRepLib_MakeShell> , BRepLib_MakeShape>(m,"BRepLib_MakeShell",R"#(Provides methos to build shells.)#");
    py::class_<BRepLib_MakeSolid , shared_ptr<BRepLib_MakeSolid> , BRepLib_MakeShape>(m,"BRepLib_MakeSolid",R"#(Makes a solid from compsolid or shells.)#");
    py::class_<BRepLib_MakeVertex , shared_ptr<BRepLib_MakeVertex> , BRepLib_MakeShape>(m,"BRepLib_MakeVertex",R"#(Provides methods to build vertices.)#");
    py::class_<BRepLib_MakeWire , shared_ptr<BRepLib_MakeWire> , BRepLib_MakeShape>(m,"BRepLib_MakeWire",R"#(Provides methods to build wires.)#");

};

// user-defined post-inclusion per module

// user-defined post


// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Edge.hxx>
#include <BRepTools_Modification.hxx>
#include <Standard_NullObject.hxx>
#include <BRepTools_ReShape.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_Vertex.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <Geom_Plane.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TopoDS_Shape.hxx>
#include <BRepBuilderAPI_MakeShape.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Wire.hxx>
#include <Geom_Plane.hxx>
#include <BRepBuilderAPI_Command.hxx>
#include <BRepBuilderAPI_MakeShape.hxx>
#include <BRepBuilderAPI_MakeVertex.hxx>
#include <BRepBuilderAPI_MakeEdge.hxx>
#include <BRepBuilderAPI_MakeEdge2d.hxx>
#include <BRepBuilderAPI_MakePolygon.hxx>
#include <BRepBuilderAPI_MakeFace.hxx>
#include <BRepBuilderAPI_FindPlane.hxx>
#include <BRepBuilderAPI_Sewing.hxx>
#include <BRepBuilderAPI_MakeWire.hxx>
#include <BRepBuilderAPI_MakeShell.hxx>
#include <BRepBuilderAPI_MakeSolid.hxx>
#include <BRepBuilderAPI_ModifyShape.hxx>
#include <BRepBuilderAPI_Transform.hxx>
#include <BRepBuilderAPI_NurbsConvert.hxx>
#include <BRepBuilderAPI_GTransform.hxx>
#include <BRepBuilderAPI_Copy.hxx>
#include <BRepBuilderAPI_Collect.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Shell.hxx>
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

// module includes
#include <BRepBuilderAPI.hxx>
#include <BRepBuilderAPI_BndBoxTreeSelector.hxx>
#include <BRepBuilderAPI_CellFilter.hxx>
#include <BRepBuilderAPI_Collect.hxx>
#include <BRepBuilderAPI_Command.hxx>
#include <BRepBuilderAPI_Copy.hxx>
#include <BRepBuilderAPI_EdgeError.hxx>
#include <BRepBuilderAPI_FaceError.hxx>
#include <BRepBuilderAPI_FastSewing.hxx>
#include <BRepBuilderAPI_FindPlane.hxx>
#include <BRepBuilderAPI_GTransform.hxx>
#include <BRepBuilderAPI_MakeEdge.hxx>
#include <BRepBuilderAPI_MakeEdge2d.hxx>
#include <BRepBuilderAPI_MakeFace.hxx>
#include <BRepBuilderAPI_MakePolygon.hxx>
#include <BRepBuilderAPI_MakeShape.hxx>
#include <BRepBuilderAPI_MakeShell.hxx>
#include <BRepBuilderAPI_MakeSolid.hxx>
#include <BRepBuilderAPI_MakeVertex.hxx>
#include <BRepBuilderAPI_MakeWire.hxx>
#include <BRepBuilderAPI_ModifyShape.hxx>
#include <BRepBuilderAPI_NurbsConvert.hxx>
#include <BRepBuilderAPI_PipeError.hxx>
#include <BRepBuilderAPI_Sewing.hxx>
#include <BRepBuilderAPI_ShapeModification.hxx>
#include <BRepBuilderAPI_ShellError.hxx>
#include <BRepBuilderAPI_Transform.hxx>
#include <BRepBuilderAPI_TransitionMode.hxx>
#include <BRepBuilderAPI_VertexInspector.hxx>
#include <BRepBuilderAPI_WireError.hxx>

// template related includes
// ./opencascade/BRepBuilderAPI_VertexInspector.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepBuilderAPI_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepBuilderAPI", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<BRepBuilderAPI_WireError>(m, "BRepBuilderAPI_WireError",R"#(Indicates the outcome of wire construction, i.e. whether it is successful or not, as explained below: - BRepBuilderAPI_WireDone No error occurred. The wire is correctly built. - BRepBuilderAPI_EmptyWire No initialization of the algorithm. Only an empty constructor was used. - BRepBuilderAPI_DisconnectedWire The last edge which you attempted to add was not connected to the wire. - BRepBuilderAPI_NonManifoldWire The wire with some singularity.)#")
        .value("BRepBuilderAPI_WireDone",BRepBuilderAPI_WireError::BRepBuilderAPI_WireDone)
        .value("BRepBuilderAPI_EmptyWire",BRepBuilderAPI_WireError::BRepBuilderAPI_EmptyWire)
        .value("BRepBuilderAPI_DisconnectedWire",BRepBuilderAPI_WireError::BRepBuilderAPI_DisconnectedWire)
        .value("BRepBuilderAPI_NonManifoldWire",BRepBuilderAPI_WireError::BRepBuilderAPI_NonManifoldWire).export_values();
    py::enum_<BRepBuilderAPI_ShapeModification>(m, "BRepBuilderAPI_ShapeModification",R"#(Lists the possible types of modification to a shape following a topological operation: Preserved, Deleted, Trimmed, Merged or BoundaryModified. This enumeration enables you to assign a "state" to the different shapes that are on the list of operands for each API function. The MakeShape class then uses this to determine what has happened to the shapes which constitute the list of operands.)#")
        .value("BRepBuilderAPI_Preserved",BRepBuilderAPI_ShapeModification::BRepBuilderAPI_Preserved)
        .value("BRepBuilderAPI_Deleted",BRepBuilderAPI_ShapeModification::BRepBuilderAPI_Deleted)
        .value("BRepBuilderAPI_Trimmed",BRepBuilderAPI_ShapeModification::BRepBuilderAPI_Trimmed)
        .value("BRepBuilderAPI_Merged",BRepBuilderAPI_ShapeModification::BRepBuilderAPI_Merged)
        .value("BRepBuilderAPI_BoundaryModified",BRepBuilderAPI_ShapeModification::BRepBuilderAPI_BoundaryModified).export_values();
    py::enum_<BRepBuilderAPI_FaceError>(m, "BRepBuilderAPI_FaceError",R"#(Indicates the outcome of the construction of a face, i.e. whether it has been successful or not, as explained below: - BRepBuilderAPI_FaceDone No error occurred. The face is correctly built. - BRepBuilderAPI_NoFace No initialization of the algorithm; only an empty constructor was used. - BRepBuilderAPI_NotPlanar No surface was given and the wire was not planar. - BRepBuilderAPI_CurveProjectionFailed Not used so far. - BRepBuilderAPI_ParametersOutOfRange The parameters given to limit the surface are out of its bounds.)#")
        .value("BRepBuilderAPI_FaceDone",BRepBuilderAPI_FaceError::BRepBuilderAPI_FaceDone)
        .value("BRepBuilderAPI_NoFace",BRepBuilderAPI_FaceError::BRepBuilderAPI_NoFace)
        .value("BRepBuilderAPI_NotPlanar",BRepBuilderAPI_FaceError::BRepBuilderAPI_NotPlanar)
        .value("BRepBuilderAPI_CurveProjectionFailed",BRepBuilderAPI_FaceError::BRepBuilderAPI_CurveProjectionFailed)
        .value("BRepBuilderAPI_ParametersOutOfRange",BRepBuilderAPI_FaceError::BRepBuilderAPI_ParametersOutOfRange).export_values();
    py::enum_<BRepBuilderAPI_TransitionMode>(m, "BRepBuilderAPI_TransitionMode",R"#(Option to manage discontinuities in Sweep)#")
        .value("BRepBuilderAPI_Transformed",BRepBuilderAPI_TransitionMode::BRepBuilderAPI_Transformed)
        .value("BRepBuilderAPI_RightCorner",BRepBuilderAPI_TransitionMode::BRepBuilderAPI_RightCorner)
        .value("BRepBuilderAPI_RoundCorner",BRepBuilderAPI_TransitionMode::BRepBuilderAPI_RoundCorner).export_values();
    py::enum_<BRepBuilderAPI_ShellError>(m, "BRepBuilderAPI_ShellError",R"#(Indicates the outcome of the construction of a face, i.e. whether it is successful or not, as explained below: - BRepBuilderAPI_ShellDone No error occurred. The shell is correctly built. - BRepBuilderAPI_EmptyShell No initialization of the algorithm: only an empty constructor was used. - BRepBuilderAPI_DisconnectedShell not yet used - BRepBuilderAPI_ShellParametersOutOfRange The parameters given to limit the surface are out of its bounds.)#")
        .value("BRepBuilderAPI_ShellDone",BRepBuilderAPI_ShellError::BRepBuilderAPI_ShellDone)
        .value("BRepBuilderAPI_EmptyShell",BRepBuilderAPI_ShellError::BRepBuilderAPI_EmptyShell)
        .value("BRepBuilderAPI_DisconnectedShell",BRepBuilderAPI_ShellError::BRepBuilderAPI_DisconnectedShell)
        .value("BRepBuilderAPI_ShellParametersOutOfRange",BRepBuilderAPI_ShellError::BRepBuilderAPI_ShellParametersOutOfRange).export_values();
    py::enum_<BRepBuilderAPI_EdgeError>(m, "BRepBuilderAPI_EdgeError",R"#(Indicates the outcome of the construction of an edge, i.e. whether it has been successful or not, as explained below: - BRepBuilderAPI_EdgeDone No error occurred; The edge is correctly built. - BRepBuilderAPI_PointProjectionFailed No parameters were given but the projection of the 3D points on the curve failed. This happens when the point distance to the curve is greater than the precision value. - BRepBuilderAPI_ParameterOutOfRange The given parameters are not in the parametric range C->FirstParameter(), C->LastParameter() - BRepBuilderAPI_DifferentPointsOnClosedCurve The two vertices or points are the extremities of a closed curve but have different locations. - BRepBuilderAPI_PointWithInfiniteParameter A finite coordinate point was associated with an infinite parameter (see the Precision package for a definition of infinite values). - BRepBuilderAPI_DifferentsPointAndParameter The distance between the 3D point and the point evaluated on the curve with the parameter is greater than the precision. - BRepBuilderAPI_LineThroughIdenticPoints Two identical points were given to define a line (construction of an edge without curve); gp::Resolution is used for the confusion test.)#")
        .value("BRepBuilderAPI_EdgeDone",BRepBuilderAPI_EdgeError::BRepBuilderAPI_EdgeDone)
        .value("BRepBuilderAPI_PointProjectionFailed",BRepBuilderAPI_EdgeError::BRepBuilderAPI_PointProjectionFailed)
        .value("BRepBuilderAPI_ParameterOutOfRange",BRepBuilderAPI_EdgeError::BRepBuilderAPI_ParameterOutOfRange)
        .value("BRepBuilderAPI_DifferentPointsOnClosedCurve",BRepBuilderAPI_EdgeError::BRepBuilderAPI_DifferentPointsOnClosedCurve)
        .value("BRepBuilderAPI_PointWithInfiniteParameter",BRepBuilderAPI_EdgeError::BRepBuilderAPI_PointWithInfiniteParameter)
        .value("BRepBuilderAPI_DifferentsPointAndParameter",BRepBuilderAPI_EdgeError::BRepBuilderAPI_DifferentsPointAndParameter)
        .value("BRepBuilderAPI_LineThroughIdenticPoints",BRepBuilderAPI_EdgeError::BRepBuilderAPI_LineThroughIdenticPoints).export_values();
    py::enum_<BRepBuilderAPI_PipeError>(m, "BRepBuilderAPI_PipeError",R"#(Errors that can occur at (shell)pipe construction.)#")
        .value("BRepBuilderAPI_PipeDone",BRepBuilderAPI_PipeError::BRepBuilderAPI_PipeDone)
        .value("BRepBuilderAPI_PipeNotDone",BRepBuilderAPI_PipeError::BRepBuilderAPI_PipeNotDone)
        .value("BRepBuilderAPI_PlaneNotIntersectGuide",BRepBuilderAPI_PipeError::BRepBuilderAPI_PlaneNotIntersectGuide)
        .value("BRepBuilderAPI_ImpossibleContact",BRepBuilderAPI_PipeError::BRepBuilderAPI_ImpossibleContact).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Vector<gp_XYZ>(m,"VectorOfPoint");  

// classes forward declarations only
    py::class_<BRepBuilderAPI , shared_ptr<BRepBuilderAPI>  >(m,"BRepBuilderAPI",R"#(The BRepBuilderAPI package provides an Application Programming Interface for the BRep topology data structure.)#");
    py::class_<BRepBuilderAPI_BndBoxTreeSelector , shared_ptr<BRepBuilderAPI_BndBoxTreeSelector>  >(m,"BRepBuilderAPI_BndBoxTreeSelector",R"#(Class BRepBuilderAPI_BndBoxTreeSelector derived from UBTree::Selector This class is used to select overlapping boxes, stored in NCollection::UBTree; contains methods to maintain the selection condition and to retrieve selected objects after search.)#");
    py::class_<BRepBuilderAPI_Collect , shared_ptr<BRepBuilderAPI_Collect>  >(m,"BRepBuilderAPI_Collect",R"#(None)#");
    py::class_<BRepBuilderAPI_Command , shared_ptr<BRepBuilderAPI_Command>  >(m,"BRepBuilderAPI_Command",R"#(Root class for all commands in BRepBuilderAPI.)#");
    py::class_<BRepBuilderAPI_FastSewing ,opencascade::handle<BRepBuilderAPI_FastSewing>  , Standard_Transient >(m,"BRepBuilderAPI_FastSewing",R"#(This class performs fast sewing of surfaces (faces). It supposes that all surfaces are finite and are naturally restricted by their bounds. Moreover, it supposes that stitched together surfaces have the same parameterization along common boundaries, therefore it does not perform time-consuming check for SameParameter property of edges.This class performs fast sewing of surfaces (faces). It supposes that all surfaces are finite and are naturally restricted by their bounds. Moreover, it supposes that stitched together surfaces have the same parameterization along common boundaries, therefore it does not perform time-consuming check for SameParameter property of edges.)#");
    py::class_<BRepBuilderAPI_FindPlane , shared_ptr<BRepBuilderAPI_FindPlane>  >(m,"BRepBuilderAPI_FindPlane",R"#(Describes functions to find the plane in which the edges of a given shape are located. A FindPlane object provides a framework for: - extracting the edges of a given shape, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<BRepBuilderAPI_Sewing ,opencascade::handle<BRepBuilderAPI_Sewing>  , Standard_Transient >(m,"BRepBuilderAPI_Sewing",R"#(Provides methods toProvides methods toProvides methods to)#");
    py::class_<BRepBuilderAPI_VertexInspector , shared_ptr<BRepBuilderAPI_VertexInspector>  , NCollection_CellFilter_InspectorXYZ >(m,"BRepBuilderAPI_VertexInspector",R"#(Class BRepBuilderAPI_VertexInspector derived from NCollection_CellFilter_InspectorXYZ This class define the Inspector interface for CellFilter algorithm, working with gp_XYZ points in 3d space. Used in search of coincidence points with a certain tolerance.)#");
    py::class_<BRepBuilderAPI_MakeShape , shared_ptr<BRepBuilderAPI_MakeShape>  , BRepBuilderAPI_Command >(m,"BRepBuilderAPI_MakeShape",R"#(This is the root class for all shape constructions. It stores the result.)#");
    py::class_<BRepBuilderAPI_MakeEdge , shared_ptr<BRepBuilderAPI_MakeEdge>  , BRepBuilderAPI_MakeShape >(m,"BRepBuilderAPI_MakeEdge",R"#(Provides methods to build edges.)#");
    py::class_<BRepBuilderAPI_MakeEdge2d , shared_ptr<BRepBuilderAPI_MakeEdge2d>  , BRepBuilderAPI_MakeShape >(m,"BRepBuilderAPI_MakeEdge2d",R"#(Provides methods to build edges.)#");
    py::class_<BRepBuilderAPI_MakeFace , shared_ptr<BRepBuilderAPI_MakeFace>  , BRepBuilderAPI_MakeShape >(m,"BRepBuilderAPI_MakeFace",R"#(Provides methods to build faces.)#");
    py::class_<BRepBuilderAPI_MakePolygon , shared_ptr<BRepBuilderAPI_MakePolygon>  , BRepBuilderAPI_MakeShape >(m,"BRepBuilderAPI_MakePolygon",R"#(Describes functions to build polygonal wires. A polygonal wire can be built from any number of points or vertices, and consists of a sequence of connected rectilinear edges. When a point or vertex is added to the polygon if it is identic to the previous point no edge is built. The method added can be used to test it. Construction of a Polygonal Wire You can construct: - a complete polygonal wire by defining all its points or vertices (limited to four), or - an empty polygonal wire and add its points or vertices in sequence (unlimited number). A MakePolygon object provides a framework for: - initializing the construction of a polygonal wire, - adding points or vertices to the polygonal wire under construction, and - consulting the result.)#");
    py::class_<BRepBuilderAPI_MakeShell , shared_ptr<BRepBuilderAPI_MakeShell>  , BRepBuilderAPI_MakeShape >(m,"BRepBuilderAPI_MakeShell",R"#(Describes functions to build a shape corresponding to the skin of a surface. Note that the term shell in the class name has the same definition as that of a shell in STEP, in other words the skin of a shape, and not a solid model defined by surface and thickness. If you want to build the second sort of shell, you must use BRepOffsetAPI_MakeOffsetShape. A shell is made of a series of faces connected by their common edges. If the underlying surface of a face is not C2 continuous and the flag Segment is True, MakeShell breaks the surface down into several faces which are all C2 continuous and which are connected along the non-regular curves on the surface. The resulting shell contains all these faces. Construction of a Shell from a non-C2 continuous Surface A MakeShell object provides a framework for: - defining the construction of a shell, - implementing the construction algorithm, and - consulting the result. Warning The connected C2 faces in the shell resulting from a decomposition of the surface are not sewn. For a sewn result, you need to use BRepOffsetAPI_Sewing. For a shell with thickness, you need to use BRepOffsetAPI_MakeOffsetShape.)#");
    py::class_<BRepBuilderAPI_MakeSolid , shared_ptr<BRepBuilderAPI_MakeSolid>  , BRepBuilderAPI_MakeShape >(m,"BRepBuilderAPI_MakeSolid",R"#(Describes functions to build a solid from shells. A solid is made of one shell, or a series of shells, which do not intersect each other. One of these shells constitutes the outside skin of the solid. It may be closed (a finite solid) or open (an infinite solid). Other shells form hollows (cavities) in these previous ones. Each must bound a closed volume. A MakeSolid object provides a framework for: - defining and implementing the construction of a solid, and - consulting the result.)#");
    py::class_<BRepBuilderAPI_MakeVertex , shared_ptr<BRepBuilderAPI_MakeVertex>  , BRepBuilderAPI_MakeShape >(m,"BRepBuilderAPI_MakeVertex",R"#(Describes functions to build BRepBuilder vertices directly from 3D geometric points. A vertex built using a MakeVertex object is only composed of a 3D point and a default precision value (Precision::Confusion()). Later on, 2D representations can be added, for example, when inserting a vertex in an edge. A MakeVertex object provides a framework for: - defining and implementing the construction of a vertex, and - consulting the result.)#");
    py::class_<BRepBuilderAPI_MakeWire , shared_ptr<BRepBuilderAPI_MakeWire>  , BRepBuilderAPI_MakeShape >(m,"BRepBuilderAPI_MakeWire",R"#(Describes functions to build wires from edges. A wire can be built from any number of edges. To build a wire you first initialize the construction, then add edges in sequence. An unlimited number of edges can be added. The initialization of construction is done with: - no edge (an empty wire), or - edges of an existing wire, or - up to four connectable edges. In order to be added to a wire under construction, an edge (unless it is the first one) must satisfy the following condition: one of its vertices must be geometrically coincident with one of the vertices of the wire (provided that the highest tolerance factor is assigned to the two vertices). It could also be the same vertex. - The given edge is shared by the wire if it contains: - two vertices, identical to two vertices of the wire under construction (a general case of the wire closure), or - one vertex, identical to a vertex of the wire under construction; the other vertex not being geometrically coincident with another vertex of the wire. - In other cases, when one of the vertices of the edge is simply geometrically coincident with a vertex of the wire under construction (provided that the highest tolerance factor is assigned to the two vertices), the given edge is first copied and the coincident vertex is replaced in this new edge, by the coincident vertex of the wire. Note: it is possible to build non manifold wires using this construction tool. A MakeWire object provides a framework for: - initializing the construction of a wire, - adding edges to the wire under construction, and - consulting the result.)#");
    py::class_<BRepBuilderAPI_ModifyShape , shared_ptr<BRepBuilderAPI_ModifyShape>  , BRepBuilderAPI_MakeShape >(m,"BRepBuilderAPI_ModifyShape",R"#(Implements the methods of MakeShape for the constant topology modifications. The methods are implemented when the modification uses a Modifier from BRepTools. Some of them have to be redefined if the modification is implemented with another tool (see Transform from BRepBuilderAPI for example). The BRepBuilderAPI package provides the following frameworks to perform modifications of this sort: - BRepBuilderAPI_Copy to produce the copy of a shape, - BRepBuilderAPI_Transform and BRepBuilderAPI_GTransform to apply a geometric transformation to a shape, - BRepBuilderAPI_NurbsConvert to convert the whole geometry of a shape into NURBS geometry, - BRepOffsetAPI_DraftAngle to build a tapered shape.)#");
    py::class_<BRepBuilderAPI_Copy , shared_ptr<BRepBuilderAPI_Copy>  , BRepBuilderAPI_ModifyShape >(m,"BRepBuilderAPI_Copy",R"#(Duplication of a shape. A Copy object provides a framework for: - defining the construction of a duplicate shape, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<BRepBuilderAPI_GTransform , shared_ptr<BRepBuilderAPI_GTransform>  , BRepBuilderAPI_ModifyShape >(m,"BRepBuilderAPI_GTransform",R"#(Geometric transformation on a shape. The transformation to be applied is defined as a gp_GTrsf transformation. It may be: - a transformation equivalent to a gp_Trsf transformation, the most common case: you should , however, use a BRepAPI_Transform object to perform this kind of transformation; or - an affinity, or - more generally, any type of point transformation which may be defined by a three row, four column matrix of transformation. In the last two cases, the underlying geometry of the following shapes may change: - a curve which supports an edge of the shape, or - a surface which supports a face of the shape; For example, a circle may be transformed into an ellipse when applying an affinity transformation. The transformation is applied to: - all the curves which support edges of the shape, and - all the surfaces which support faces of the shape. A GTransform object provides a framework for: - defining the geometric transformation to be applied, - implementing the transformation algorithm, and - consulting the result.)#");
    py::class_<BRepBuilderAPI_NurbsConvert , shared_ptr<BRepBuilderAPI_NurbsConvert>  , BRepBuilderAPI_ModifyShape >(m,"BRepBuilderAPI_NurbsConvert",R"#(Conversion of the complete geometry of a shape (all 3D analytical representation of surfaces and curves) into NURBS geometry (execpt for Planes). For example, all curves supporting edges of the basis shape are converted into BSpline curves, and all surfaces supporting its faces are converted into BSpline surfaces.)#");
    py::class_<BRepBuilderAPI_Transform , shared_ptr<BRepBuilderAPI_Transform>  , BRepBuilderAPI_ModifyShape >(m,"BRepBuilderAPI_Transform",R"#(Geometric transformation on a shape. The transformation to be applied is defined as a gp_Trsf transformation, i.e. a transformation which does not modify the underlying geometry of shapes. The transformation is applied to: - all curves which support edges of a shape, and - all surfaces which support its faces. A Transform object provides a framework for: - defining the geometric transformation to be applied, - implementing the transformation algorithm, and - consulting the results.)#");

};

// user-defined post-inclusion per module

// user-defined post

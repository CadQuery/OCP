
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes
#include <TColStd_HArray1OfReal.hxx>

// includes to resolve forward declarations
#include <TopoDS_Face.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Shape.hxx>
#include <ShapeExtend_WireData.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Edge.hxx>
#include <ShapeConstruct_ProjectCurveOnSurface.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <ShapeAnalysis_Surface.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <ShapeFix_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <Message_ProgressIndicator.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <TopoDS_Wire.hxx>
#include <ShapeExtend_WireData.hxx>
#include <ShapeExtend_CompositeSurface.hxx>
#include <ShapeAnalysis_TransferParameters.hxx>
#include <ShapeExtend_WireData.hxx>
#include <gp_Lin2d.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS_Shape.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <ShapeFix_Root.hxx>
#include <ShapeFix_EdgeProjAux.hxx>
#include <ShapeFix_Edge.hxx>
#include <ShapeFix_Wire.hxx>
#include <ShapeFix_Face.hxx>
#include <ShapeFix_FixSmallFace.hxx>
#include <ShapeFix_FixSmallSolid.hxx>
#include <ShapeFix_WireVertex.hxx>
#include <ShapeFix_Wireframe.hxx>
#include <ShapeFix_FreeBounds.hxx>
#include <ShapeFix_FaceConnect.hxx>
#include <ShapeFix_Shell.hxx>
#include <ShapeFix_Solid.hxx>
#include <ShapeFix_ShapeTolerance.hxx>
#include <ShapeFix_Shape.hxx>
#include <ShapeFix_EdgeConnect.hxx>
#include <ShapeFix_ComposeShell.hxx>
#include <ShapeFix_SplitCommonVertex.hxx>
#include <ShapeFix_WireSegment.hxx>
#include <ShapeFix_IntersectionTool.hxx>
#include <ShapeFix_SplitTool.hxx>
#include <ShapeAnalysis_Surface.hxx>
#include <ShapeFix_Wire.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Wire.hxx>
#include <ShapeExtend_WireData.hxx>
#include <TopoDS_Vertex.hxx>
#include <ShapeFix_Face.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <ShapeExtend_WireData.hxx>
#include <Geom2d_Curve.hxx>
#include <ShapeFix_Edge.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <Message_Msg.hxx>
#include <ShapeFix_Edge.hxx>
#include <Geom_Surface.hxx>
#include <ShapeAnalysis_WireOrder.hxx>
#include <Geom2d_Curve.hxx>

// module includes
#include <ShapeFix.hxx>
#include <ShapeFix_ComposeShell.hxx>
#include <ShapeFix_DataMapIteratorOfDataMapOfShapeBox2d.hxx>
#include <ShapeFix_DataMapOfShapeBox2d.hxx>
#include <ShapeFix_Edge.hxx>
#include <ShapeFix_EdgeConnect.hxx>
#include <ShapeFix_EdgeProjAux.hxx>
#include <ShapeFix_Face.hxx>
#include <ShapeFix_FaceConnect.hxx>
#include <ShapeFix_FixSmallFace.hxx>
#include <ShapeFix_FixSmallSolid.hxx>
#include <ShapeFix_FreeBounds.hxx>
#include <ShapeFix_IntersectionTool.hxx>
#include <ShapeFix_Root.hxx>
#include <ShapeFix_SequenceOfWireSegment.hxx>
#include <ShapeFix_Shape.hxx>
#include <ShapeFix_ShapeTolerance.hxx>
#include <ShapeFix_Shell.hxx>
#include <ShapeFix_Solid.hxx>
#include <ShapeFix_SplitCommonVertex.hxx>
#include <ShapeFix_SplitTool.hxx>
#include <ShapeFix_Wire.hxx>
#include <ShapeFix_Wireframe.hxx>
#include <ShapeFix_WireSegment.hxx>
#include <ShapeFix_WireVertex.hxx>

// template related includes
// ./opencascade/ShapeFix_SequenceOfWireSegment.hxx
#include "NCollection.hxx"
// ./opencascade/ShapeFix_DataMapOfShapeBox2d.hxx
#include "NCollection.hxx"
// ./opencascade/ShapeFix_DataMapOfShapeBox2d.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ShapeFix_enums(py::module &main_module) {


py::module m = main_module.def_submodule("ShapeFix", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Sequence<ShapeFix_WireSegment>(m,"ShapeFix_SequenceOfWireSegment");  
    preregister_template_NCollection_DataMap<TopoDS_Shape, Bnd_Box2d, TopTools_ShapeMapHasher>(m,"ShapeFix_DataMapOfShapeBox2d");  

// classes forward declarations only
    py::class_<ShapeFix , shared_ptr<ShapeFix>  >(m,"ShapeFix",R"#(This package provides algorithms for fixing problematic (violating Open CASCADE requirements) shapes. Tools from package ShapeAnalysis are used for detecting the problems. The detecting and fixing is done taking in account various criteria implemented in BRepCheck package. Each class of package ShapeFix deals with one certain type of shapes or with some family of problems.)#");
    py::class_<ShapeFix_Edge ,opencascade::handle<ShapeFix_Edge>  , Standard_Transient >(m,"ShapeFix_Edge",R"#(Fixing invalid edge. Geometrical and/or topological inconsistency: - no 3d curve or pcurve, - mismatching orientation of 3d curve and pcurve, - incorrect SameParameter flag (curve deviation is greater than edge tolerance), - not adjacent curves (3d or pcurve) to the vertices.Fixing invalid edge. Geometrical and/or topological inconsistency: - no 3d curve or pcurve, - mismatching orientation of 3d curve and pcurve, - incorrect SameParameter flag (curve deviation is greater than edge tolerance), - not adjacent curves (3d or pcurve) to the vertices.Fixing invalid edge. Geometrical and/or topological inconsistency: - no 3d curve or pcurve, - mismatching orientation of 3d curve and pcurve, - incorrect SameParameter flag (curve deviation is greater than edge tolerance), - not adjacent curves (3d or pcurve) to the vertices.)#");
    py::class_<ShapeFix_EdgeConnect , shared_ptr<ShapeFix_EdgeConnect>  >(m,"ShapeFix_EdgeConnect",R"#(Rebuilds edges to connect with new vertices, was moved from ShapeBuild. Makes vertices to be shared to connect edges, updates positions and tolerances for shared vertices. Accepts edges bounded by two vertices each.)#");
    py::class_<ShapeFix_EdgeProjAux ,opencascade::handle<ShapeFix_EdgeProjAux>  , Standard_Transient >(m,"ShapeFix_EdgeProjAux",R"#(Project 3D point (vertex) on pcurves to find Vertex Parameter on parametric representation of an edgeProject 3D point (vertex) on pcurves to find Vertex Parameter on parametric representation of an edgeProject 3D point (vertex) on pcurves to find Vertex Parameter on parametric representation of an edge)#");
    py::class_<ShapeFix_FaceConnect , shared_ptr<ShapeFix_FaceConnect>  >(m,"ShapeFix_FaceConnect",R"#(Rebuilds connectivity between faces in shell)#");
    py::class_<ShapeFix_FreeBounds , shared_ptr<ShapeFix_FreeBounds>  >(m,"ShapeFix_FreeBounds",R"#(This class is intended to output free bounds of the shape (free bounds are the wires consisting of edges referenced by the only face). For building free bounds it uses ShapeAnalysis_FreeBounds class. This class complements it with the feature to reduce the number of open wires. This reduction is performed with help of connecting several adjacent open wires one to another what can lead to: 1. making an open wire with greater length out of several open wires 2. making closed wire out of several open wires)#");
    py::class_<ShapeFix_IntersectionTool , shared_ptr<ShapeFix_IntersectionTool>  >(m,"ShapeFix_IntersectionTool",R"#(Tool for fixing selfintersecting wire and intersecting wires)#");
    py::class_<ShapeFix_Root ,opencascade::handle<ShapeFix_Root>  , Standard_Transient >(m,"ShapeFix_Root",R"#(Root class for fixing operations Provides context for recording changes (optional), basic precision value and limit (minimal and maximal) values for tolerances, and message registratorRoot class for fixing operations Provides context for recording changes (optional), basic precision value and limit (minimal and maximal) values for tolerances, and message registratorRoot class for fixing operations Provides context for recording changes (optional), basic precision value and limit (minimal and maximal) values for tolerances, and message registrator)#");
    py::class_<ShapeFix_ShapeTolerance , shared_ptr<ShapeFix_ShapeTolerance>  >(m,"ShapeFix_ShapeTolerance",R"#(Modifies tolerances of sub-shapes (vertices, edges, faces))#");
    py::class_<ShapeFix_SplitTool , shared_ptr<ShapeFix_SplitTool>  >(m,"ShapeFix_SplitTool",R"#(Tool for splitting and cutting edges; includes methods used in OverlappingTool and IntersectionTool)#");
    py::class_<ShapeFix_WireSegment , shared_ptr<ShapeFix_WireSegment>  >(m,"ShapeFix_WireSegment",R"#(This class is auxiliary class (data storage) used in ComposeShell. It is intended for representing segment of the wire (or whole wire). The segment itself is represented by ShapeExtend_WireData. In addition, some associated data necessary for computations are stored:)#");
    py::class_<ShapeFix_WireVertex , shared_ptr<ShapeFix_WireVertex>  >(m,"ShapeFix_WireVertex",R"#(Fixing disconnected edges in the wire Fixes vertices in the wire on the basis of pre-analysis made by ShapeAnalysis_WireVertex (given as argument). The Wire has formerly been loaded in a ShapeExtend_WireData.)#");
    py::class_<ShapeFix_ComposeShell ,opencascade::handle<ShapeFix_ComposeShell>  , ShapeFix_Root >(m,"ShapeFix_ComposeShell",R"#(This class is intended to create a shell from the composite surface (grid of surfaces) and set of wires. It may be either division of the supporting surface of the face, or creating a shape corresponding to face on composite surface which is missing in CAS.CADE but exists in some other systems.This class is intended to create a shell from the composite surface (grid of surfaces) and set of wires. It may be either division of the supporting surface of the face, or creating a shape corresponding to face on composite surface which is missing in CAS.CADE but exists in some other systems.This class is intended to create a shell from the composite surface (grid of surfaces) and set of wires. It may be either division of the supporting surface of the face, or creating a shape corresponding to face on composite surface which is missing in CAS.CADE but exists in some other systems.)#");
    py::class_<ShapeFix_Face ,opencascade::handle<ShapeFix_Face>  , ShapeFix_Root >(m,"ShapeFix_Face",R"#(This operator allows to perform various fixes on face and its wires: fixes provided by ShapeFix_Wire, fixing orientation of wires, addition of natural bounds, fixing of missing seam edge, and detection and removal of null-area wiresThis operator allows to perform various fixes on face and its wires: fixes provided by ShapeFix_Wire, fixing orientation of wires, addition of natural bounds, fixing of missing seam edge, and detection and removal of null-area wiresThis operator allows to perform various fixes on face and its wires: fixes provided by ShapeFix_Wire, fixing orientation of wires, addition of natural bounds, fixing of missing seam edge, and detection and removal of null-area wires)#");
    py::class_<ShapeFix_FixSmallFace ,opencascade::handle<ShapeFix_FixSmallFace>  , ShapeFix_Root >(m,"ShapeFix_FixSmallFace",R"#(Fixing face with small sizeFixing face with small sizeFixing face with small size)#");
    py::class_<ShapeFix_FixSmallSolid ,opencascade::handle<ShapeFix_FixSmallSolid>  , ShapeFix_Root >(m,"ShapeFix_FixSmallSolid",R"#(Fixing solids with small sizeFixing solids with small sizeFixing solids with small size)#");
    py::class_<ShapeFix_Shape ,opencascade::handle<ShapeFix_Shape>  , ShapeFix_Root >(m,"ShapeFix_Shape",R"#(Fixing shape in generalFixing shape in generalFixing shape in general)#");
    py::class_<ShapeFix_Shell ,opencascade::handle<ShapeFix_Shell>  , ShapeFix_Root >(m,"ShapeFix_Shell",R"#(Fixing orientation of faces in shellFixing orientation of faces in shellFixing orientation of faces in shell)#");
    py::class_<ShapeFix_Solid ,opencascade::handle<ShapeFix_Solid>  , ShapeFix_Root >(m,"ShapeFix_Solid",R"#(Provides method to build a solid from a shells and orients them in order to have a valid solid with finite volumeProvides method to build a solid from a shells and orients them in order to have a valid solid with finite volumeProvides method to build a solid from a shells and orients them in order to have a valid solid with finite volume)#");
    py::class_<ShapeFix_SplitCommonVertex ,opencascade::handle<ShapeFix_SplitCommonVertex>  , ShapeFix_Root >(m,"ShapeFix_SplitCommonVertex",R"#(Two wires have common vertex - this case is valid in BRep model and isn't valid in STEP => before writing into STEP it is necessary to split this vertex (each wire must has one vertex)Two wires have common vertex - this case is valid in BRep model and isn't valid in STEP => before writing into STEP it is necessary to split this vertex (each wire must has one vertex)Two wires have common vertex - this case is valid in BRep model and isn't valid in STEP => before writing into STEP it is necessary to split this vertex (each wire must has one vertex))#");
    py::class_<ShapeFix_Wire ,opencascade::handle<ShapeFix_Wire>  , ShapeFix_Root >(m,"ShapeFix_Wire",R"#(This class provides a set of tools for repairing a wire.This class provides a set of tools for repairing a wire.This class provides a set of tools for repairing a wire.)#");
    py::class_<ShapeFix_Wireframe ,opencascade::handle<ShapeFix_Wireframe>  , ShapeFix_Root >(m,"ShapeFix_Wireframe",R"#(Provides methods for fixing wireframe of shapeProvides methods for fixing wireframe of shapeProvides methods for fixing wireframe of shape)#");

};

// user-defined post-inclusion per module

// user-defined post

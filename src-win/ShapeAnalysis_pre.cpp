
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Geom_Curve.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Bnd_Box2d.hxx>
#include <ShapeExtend_WireData.hxx>
#include <TopoDS_Wire.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <gp_Pln.hxx>
#include <ShapeAnalysis_Surface.hxx>
#include <TopoDS_Wire.hxx>
#include <Geom_Surface.hxx>
#include <ShapeAnalysis_WireOrder.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Edge.hxx>
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
#include <Standard_TypeMismatch.hxx>
#include <gp_XY.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
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
#include <TopoDS_Compound.hxx>

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
// ./opencascade\ShapeAnalysis_DataMapOfShapeListOfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\ShapeAnalysis_DataMapOfShapeListOfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\ShapeAnalysis_BoxBndTree.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\ShapeAnalysis_SequenceOfFreeBounds.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ShapeAnalysis_enums(py::module &main_module) {


py::module m = main_module.def_submodule("ShapeAnalysis", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_DataMap<TopoDS_Shape, TColStd_ListOfReal, TopTools_ShapeMapHasher>(m,"ShapeAnalysis_DataMapOfShapeListOfReal");
    preregister_template_NCollection_UBTree<Standard_Integer, Bnd_Box>(m,"ShapeAnalysis_BoxBndTree");
    preregister_template_NCollection_Sequence<opencascade::handle<ShapeAnalysis_FreeBoundData> >(m,"ShapeAnalysis_SequenceOfFreeBounds");

// classes forward declarations only
    py::class_<ShapeAnalysis , shared_ptr<ShapeAnalysis> >(m,"ShapeAnalysis",R"#(This package is intended to analyze geometrical objects and topological shapes. Analysis domain includes both exploring geometrical and topological properties of shapes and checking their conformance to Open CASCADE requirements. The directions of analysis provided by tools of this package are: computing quantities of subshapes, computing parameters of points on curve and surface, computing surface singularities, checking edge and wire consistency, checking edges order in the wire, checking face bounds orientation, checking small faces, analyzing shape tolerances, analyzing of free bounds of the shape.)#");
    py::class_<ShapeAnalysis_CheckSmallFace , shared_ptr<ShapeAnalysis_CheckSmallFace> >(m,"ShapeAnalysis_CheckSmallFace",R"#(Analysis of the face size)#");
    py::class_<ShapeAnalysis_Curve , shared_ptr<ShapeAnalysis_Curve> >(m,"ShapeAnalysis_Curve",R"#(Analyzing tool for 2d or 3d curve. Computes parameters of projected point onto a curve.)#");
    py::class_<ShapeAnalysis_Edge , shared_ptr<ShapeAnalysis_Edge> >(m,"ShapeAnalysis_Edge",R"#(Tool for analyzing the edge. Queries geometrical representations of the edge (3d curve, pcurve on the given face or surface) and topological sub-shapes (bounding vertices). Provides methods for analyzing geometry and topology consistency (3d and pcurve(s) consistency, their adjacency to the vertices).)#");
    py::class_<ShapeAnalysis_FreeBoundData ,opencascade::handle<ShapeAnalysis_FreeBoundData> , Standard_Transient>(m,"ShapeAnalysis_FreeBoundData",R"#(This class is intended to represent free bound and to store its properties.This class is intended to represent free bound and to store its properties.This class is intended to represent free bound and to store its properties.)#");
    py::class_<ShapeAnalysis_FreeBounds , shared_ptr<ShapeAnalysis_FreeBounds> >(m,"ShapeAnalysis_FreeBounds",R"#(This class is intended to output free bounds of the shape.)#");
    py::class_<ShapeAnalysis_FreeBoundsProperties , shared_ptr<ShapeAnalysis_FreeBoundsProperties> >(m,"ShapeAnalysis_FreeBoundsProperties",R"#(This class is intended to calculate shape free bounds properties. This class provides the following functionalities: - calculates area of the contour, - calculates perimeter of the contour, - calculates ratio of average length to average width of the contour, - estimates average width of contour, - finds the notches (narrow 'V'-like sub-contour) on the contour.)#");
    py::class_<ShapeAnalysis_Geom , shared_ptr<ShapeAnalysis_Geom> >(m,"ShapeAnalysis_Geom",R"#(Analyzing tool aimed to work on primitive geometrical objects)#");
    py::class_<ShapeAnalysis_HSequenceOfFreeBounds ,opencascade::handle<ShapeAnalysis_HSequenceOfFreeBounds> , ShapeAnalysis_SequenceOfFreeBounds, Standard_Transient>(m,"ShapeAnalysis_HSequenceOfFreeBounds",R"#()#");
    py::class_<ShapeAnalysis_ShapeContents , shared_ptr<ShapeAnalysis_ShapeContents> >(m,"ShapeAnalysis_ShapeContents",R"#(Dumps shape contents)#");
    py::class_<ShapeAnalysis_ShapeTolerance , shared_ptr<ShapeAnalysis_ShapeTolerance> >(m,"ShapeAnalysis_ShapeTolerance",R"#(Tool for computing shape tolerances (minimal, maximal, average), finding shape with tolerance matching given criteria, setting or limitating tolerances.)#");
    py::class_<ShapeAnalysis_Shell , shared_ptr<ShapeAnalysis_Shell> >(m,"ShapeAnalysis_Shell",R"#(This class provides operators to analyze edges orientation in the shell.)#");
    py::class_<ShapeAnalysis_Surface ,opencascade::handle<ShapeAnalysis_Surface> , Standard_Transient>(m,"ShapeAnalysis_Surface",R"#(Complements standard tool Geom_Surface by providing additional functionality for detection surface singularities, checking spatial surface closure and computing projections of 3D points onto a surface.Complements standard tool Geom_Surface by providing additional functionality for detection surface singularities, checking spatial surface closure and computing projections of 3D points onto a surface.Complements standard tool Geom_Surface by providing additional functionality for detection surface singularities, checking spatial surface closure and computing projections of 3D points onto a surface.)#");
    py::class_<ShapeAnalysis_TransferParameters ,opencascade::handle<ShapeAnalysis_TransferParameters> , Standard_Transient>(m,"ShapeAnalysis_TransferParameters",R"#(This tool is used for transferring parameters from 3d curve of the edge to pcurve and vice versa.This tool is used for transferring parameters from 3d curve of the edge to pcurve and vice versa.This tool is used for transferring parameters from 3d curve of the edge to pcurve and vice versa.)#");
    py::class_<ShapeAnalysis_Wire ,opencascade::handle<ShapeAnalysis_Wire> , Standard_Transient>(m,"ShapeAnalysis_Wire",R"#(This class provides analysis of a wire to be compliant to CAS.CADE requirements.This class provides analysis of a wire to be compliant to CAS.CADE requirements.This class provides analysis of a wire to be compliant to CAS.CADE requirements.)#");
    py::class_<ShapeAnalysis_WireOrder , shared_ptr<ShapeAnalysis_WireOrder> >(m,"ShapeAnalysis_WireOrder",R"#(This class is intended to control and, if possible, redefine the order of a list of edges which define a wire Edges are not given directly, but as their bounds (start,end))#");
    py::class_<ShapeAnalysis_WireVertex , shared_ptr<ShapeAnalysis_WireVertex> >(m,"ShapeAnalysis_WireVertex",R"#(Analyzes and records status of vertices in a Wire)#");
    py::class_<ShapeAnalysis_TransferParametersProj ,opencascade::handle<ShapeAnalysis_TransferParametersProj> , ShapeAnalysis_TransferParameters>(m,"ShapeAnalysis_TransferParametersProj",R"#(This tool is used for transferring parameters from 3d curve of the edge to pcurve and vice versa. This tool transfers parameters with help of projection points from curve 3d on curve 2d and vice versaThis tool is used for transferring parameters from 3d curve of the edge to pcurve and vice versa. This tool transfers parameters with help of projection points from curve 3d on curve 2d and vice versaThis tool is used for transferring parameters from 3d curve of the edge to pcurve and vice versa. This tool transfers parameters with help of projection points from curve 3d on curve 2d and vice versa)#");

};

// user-defined post-inclusion per module

// user-defined post

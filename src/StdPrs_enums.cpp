
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TopoDS_Vertex.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <TopoDS_Face.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Shape.hxx>
#include <Adaptor3d_Curve.hxx>
#include <HLRBRep_Data.hxx>
#include <TopoDS_Shape.hxx>
#include <HLRAlgo_Projector.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Graphic3d_ArrayOfSegments.hxx>
#include <Graphic3d_ArrayOfTriangles.hxx>
#include <TopoDS_Shape.hxx>
#include <BRep_Builder.hxx>
#include <TopoDS_Compound.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Geom_Point.hxx>
#include <TopoDS_Shape.hxx>
#include <Prs3d_Projector.hxx>
#include <Adaptor3d_Surface.hxx>
#include <BRepAdaptor_HSurface.hxx>

// module includes
#include <StdPrs_BndBox.hxx>
#include <StdPrs_Curve.hxx>
#include <StdPrs_DeflectionCurve.hxx>
#include <StdPrs_HLRPolyShape.hxx>
#include <StdPrs_HLRShape.hxx>
#include <StdPrs_HLRToolShape.hxx>
#include <StdPrs_Isolines.hxx>
#include <StdPrs_Plane.hxx>
#include <StdPrs_Point.hxx>
#include <StdPrs_PoleCurve.hxx>
#include <StdPrs_ShadedShape.hxx>
#include <StdPrs_ShadedSurface.hxx>
#include <StdPrs_ToolPoint.hxx>
#include <StdPrs_ToolRFace.hxx>
#include <StdPrs_ToolTriangulatedShape.hxx>
#include <StdPrs_ToolVertex.hxx>
#include <StdPrs_Vertex.hxx>
#include <StdPrs_Volume.hxx>
#include <StdPrs_WFDeflectionRestrictedFace.hxx>
#include <StdPrs_WFDeflectionSurface.hxx>
#include <StdPrs_WFPoleSurface.hxx>
#include <StdPrs_WFRestrictedFace.hxx>
#include <StdPrs_WFShape.hxx>
#include <StdPrs_WFSurface.hxx>

// template related includes
// ./opencascade/StdPrs_Vertex.hxx
#include "Prs3d.hxx"
// ./opencascade/StdPrs_Point.hxx
#include "Prs3d.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StdPrs_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StdPrs", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<StdPrs_Volume>(m, "StdPrs_Volume",R"#(defines the way how to interpret input shapes Volume_Autodetection to perform Autodetection (would split input shape into two groups) Volume_Closed as Closed volumes (to activate back-face culling and capping plane algorithms) Volume_Opened as Open volumes (shells or solids with holes))#")
        .value("StdPrs_Volume_Autodetection",StdPrs_Volume::StdPrs_Volume_Autodetection)
        .value("StdPrs_Volume_Closed",StdPrs_Volume::StdPrs_Volume_Closed)
        .value("StdPrs_Volume_Opened",StdPrs_Volume::StdPrs_Volume_Opened).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_Prs3d_Point<TopoDS_Vertex, StdPrs_ToolVertex>(m,"StdPrs_Vertex");  
    preregister_template_Prs3d_Point<opencascade::handle<Geom_Point>, StdPrs_ToolPoint>(m,"StdPrs_Point");  

// classes forward declarations only
    py::class_<StdPrs_BndBox , shared_ptr<StdPrs_BndBox>  , Prs3d_Root >(m,"StdPrs_BndBox",R"#(Tool for computing bounding box presentation.)#");
    py::class_<StdPrs_Curve , shared_ptr<StdPrs_Curve>  , Prs3d_Root >(m,"StdPrs_Curve",R"#(A framework to define display of lines, arcs of circles and conic sections. This is done with a fixed number of points, which can be modified.)#");
    py::class_<StdPrs_DeflectionCurve , shared_ptr<StdPrs_DeflectionCurve>  , Prs3d_Root >(m,"StdPrs_DeflectionCurve",R"#(A framework to provide display of any curve with respect to the maximal chordal deviation defined in the Prs3d_Drawer attributes manager.)#");
    py::class_<StdPrs_HLRPolyShape , shared_ptr<StdPrs_HLRPolyShape>  , Prs3d_Root >(m,"StdPrs_HLRPolyShape",R"#(Instantiates Prs3d_PolyHLRShape to define a display of a shape where hidden and visible lines are identified with respect to a given projection. StdPrs_HLRPolyShape works with a polyhedral simplification of the shape whereas StdPrs_HLRShape takes the shape itself into account. When you use StdPrs_HLRShape, you obtain an exact result, whereas, when you use StdPrs_HLRPolyShape, you reduce computation time but obtain polygonal segments. The polygonal algorithm is used.)#");
    py::class_<StdPrs_HLRShape , shared_ptr<StdPrs_HLRShape>  , Prs3d_Root >(m,"StdPrs_HLRShape",R"#(None)#");
    py::class_<StdPrs_HLRToolShape , shared_ptr<StdPrs_HLRToolShape>  >(m,"StdPrs_HLRToolShape",R"#(None)#");
    py::class_<StdPrs_Isolines , shared_ptr<StdPrs_Isolines>  , Prs3d_Root >(m,"StdPrs_Isolines",R"#(Tool for computing isoline representation for a face or surface. Depending on a flags set to the given Prs3d_Drawer instance, on-surface (is used by default) or on-triangulation isoline builder algorithm will be used. If the given shape is not triangulated, on-surface isoline builder will be applied regardless of Prs3d_Drawer flags.)#");
    py::class_<StdPrs_Plane , shared_ptr<StdPrs_Plane>  , Prs3d_Root >(m,"StdPrs_Plane",R"#(A framework to display infinite planes.)#");
    py::class_<StdPrs_PoleCurve , shared_ptr<StdPrs_PoleCurve>  , Prs3d_Root >(m,"StdPrs_PoleCurve",R"#(A framework to provide display of Bezier or BSpline curves (by drawing a broken line linking the poles of the curve).)#");
    py::class_<StdPrs_ShadedShape , shared_ptr<StdPrs_ShadedShape>  , Prs3d_Root >(m,"StdPrs_ShadedShape",R"#(Auxiliary procedures to prepare Shaded presentation of specified shape.)#");
    py::class_<StdPrs_ShadedSurface , shared_ptr<StdPrs_ShadedSurface>  , Prs3d_Root >(m,"StdPrs_ShadedSurface",R"#(Computes the shading presentation of surfaces. Draws a surface by drawing the isoparametric curves with respect to a maximal chordial deviation. The number of isoparametric curves to be drawn and their color are controlled by the furnished Drawer.)#");
    py::class_<StdPrs_ToolPoint , shared_ptr<StdPrs_ToolPoint>  >(m,"StdPrs_ToolPoint",R"#(None)#");
    py::class_<StdPrs_ToolRFace , shared_ptr<StdPrs_ToolRFace>  >(m,"StdPrs_ToolRFace",R"#(None)#");
    py::class_<StdPrs_ToolTriangulatedShape , shared_ptr<StdPrs_ToolTriangulatedShape>  >(m,"StdPrs_ToolTriangulatedShape",R"#(None)#");
    py::class_<StdPrs_ToolVertex , shared_ptr<StdPrs_ToolVertex>  >(m,"StdPrs_ToolVertex",R"#(None)#");
    py::class_<StdPrs_WFDeflectionRestrictedFace , shared_ptr<StdPrs_WFDeflectionRestrictedFace>  , Prs3d_Root >(m,"StdPrs_WFDeflectionRestrictedFace",R"#(A framework to provide display of U and V isoparameters of faces, while allowing you to impose a deflection on them. Computes the wireframe presentation of faces with restrictions by displaying a given number of U and/or V isoparametric curves. The isoparametric curves are drawn with respect to a maximal chordial deviation. The presentation includes the restriction curves.)#");
    py::class_<StdPrs_WFDeflectionSurface , shared_ptr<StdPrs_WFDeflectionSurface>  , Prs3d_Root >(m,"StdPrs_WFDeflectionSurface",R"#(Draws a surface by drawing the isoparametric curves with respect to a maximal chordial deviation. The number of isoparametric curves to be drawn and their color are controlled by the furnished Drawer.)#");
    py::class_<StdPrs_WFPoleSurface , shared_ptr<StdPrs_WFPoleSurface>  , Prs3d_Root >(m,"StdPrs_WFPoleSurface",R"#(Computes the presentation of surfaces by drawing a double network of lines linking the poles of the surface in the two parametric direction. The number of lines to be drawn is controlled by the NetworkNumber of the given Drawer.)#");
    py::class_<StdPrs_WFRestrictedFace , shared_ptr<StdPrs_WFRestrictedFace>  , Prs3d_Root >(m,"StdPrs_WFRestrictedFace",R"#(None)#");
    py::class_<StdPrs_WFShape , shared_ptr<StdPrs_WFShape>  , Prs3d_Root >(m,"StdPrs_WFShape",R"#(Tool for computing wireframe presentation of a TopoDS_Shape.)#");
    py::class_<StdPrs_WFSurface , shared_ptr<StdPrs_WFSurface>  , Prs3d_Root >(m,"StdPrs_WFSurface",R"#(Computes the wireframe presentation of surfaces by displaying a given number of U and/or V isoparametric curves. The isoparametric curves are drawn with respect to a given number of points.)#");

};

// user-defined post-inclusion per module

// user-defined post


// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TopOpeBRep_LineInter.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRepDS_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_Point2d.hxx>
#include <TopOpeBRep_FaceEdgeIntersector.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_PointClassifier.hxx>
#include <TopOpeBRepDS_Transition.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <TopOpeBRep_FacesFiller.hxx>
#include <TopOpeBRep_Hctxff2d.hxx>
#include <TopOpeBRep_Hctxee2d.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRep_FFDumper.hxx>
#include <TopOpeBRep_FacesIntersector.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_VPointInterClassifier.hxx>
#include <TopOpeBRep_VPointInterIterator.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRep_FaceEdgeIntersector.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Pnt.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <IntPatch_ALine.hxx>
#include <IntPatch_RLine.hxx>
#include <IntPatch_WLine.hxx>
#include <IntPatch_GLine.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <Geom_Curve.hxx>
#include <TCollection_AsciiString.hxx>
#include <TopOpeBRep_Bipoint.hxx>
#include <IntRes2d_IntersectionPoint.hxx>
#include <TopOpeBRepTool_ShapeExplorer.hxx>
#include <TopOpeBRepTool_HBoxTool.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_VPointInterIterator.hxx>
#include <TopOpeBRep_WPointInter.hxx>
#include <TopOpeBRep_WPointInterIterator.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_Hctxff2d.hxx>
#include <TopOpeBRep_Hctxee2d.hxx>
#include <TopOpeBRep_Point2d.hxx>
#include <TopOpeBRep_PointClassifier.hxx>
#include <TopOpeBRep_VPointInterClassifier.hxx>
#include <TopOpeBRep_GeomTool.hxx>
#include <TopOpeBRep_FacesIntersector.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>
#include <TopOpeBRep_FaceEdgeIntersector.hxx>
#include <TopOpeBRep_ShapeScanner.hxx>
#include <TopOpeBRep_ShapeIntersector.hxx>
#include <TopOpeBRep_ShapeIntersector2d.hxx>
#include <TopOpeBRep_PointGeomTool.hxx>
#include <TopOpeBRep_FFTransitionTool.hxx>
#include <TopOpeBRep_Bipoint.hxx>
#include <TopOpeBRep_FacesFiller.hxx>
#include <TopOpeBRep_FFDumper.hxx>
#include <TopOpeBRep_EdgesFiller.hxx>
#include <TopOpeBRep_FaceEdgeFiller.hxx>
#include <TopOpeBRep_DSFiller.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>
#include <TopOpeBRep_Point2d.hxx>
#include <TopOpeBRep_FacesIntersector.hxx>
#include <TopOpeBRepTool_HBoxTool.hxx>
#include <TopOpeBRepDS_Transition.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_WPointInter.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <IntPatch_Point.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Bnd_Box.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <BRepTopAdaptor_TopolTool.hxx>
#include <Bnd_Box.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>

// module includes
#include <TopOpeBRep.hxx>
#include <TopOpeBRep_Array1OfLineInter.hxx>
#include <TopOpeBRep_Array1OfVPointInter.hxx>
#include <TopOpeBRep_Bipoint.hxx>
#include <TopOpeBRep_DataMapIteratorOfDataMapOfTopolTool.hxx>
#include <TopOpeBRep_DataMapOfTopolTool.hxx>
#include <TopOpeBRep_define.hxx>
#include <TopOpeBRep_DRAW.hxx>
#include <TopOpeBRep_DSFiller.hxx>
#include <TopOpeBRep_EdgesFiller.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>
#include <TopOpeBRep_FaceEdgeFiller.hxx>
#include <TopOpeBRep_FaceEdgeIntersector.hxx>
#include <TopOpeBRep_FacesFiller.hxx>
#include <TopOpeBRep_FacesIntersector.hxx>
#include <TopOpeBRep_FFDumper.hxx>
#include <TopOpeBRep_FFTransitionTool.hxx>
#include <TopOpeBRep_GeomTool.hxx>
#include <TopOpeBRep_HArray1OfLineInter.hxx>
#include <TopOpeBRep_HArray1OfVPointInter.hxx>
#include <TopOpeBRep_Hctxee2d.hxx>
#include <TopOpeBRep_Hctxff2d.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_ListIteratorOfListOfBipoint.hxx>
#include <TopOpeBRep_ListOfBipoint.hxx>
#include <TopOpeBRep_P2Dstatus.hxx>
#include <TopOpeBRep_PEdgesIntersector.hxx>
#include <TopOpeBRep_PFacesFiller.hxx>
#include <TopOpeBRep_PFacesIntersector.hxx>
#include <TopOpeBRep_PIntRes2d_IntersectionPoint.hxx>
#include <TopOpeBRep_PLineInter.hxx>
#include <TopOpeBRep_Point2d.hxx>
#include <TopOpeBRep_PointClassifier.hxx>
#include <TopOpeBRep_PointGeomTool.hxx>
#include <TopOpeBRep_PPntOn2S.hxx>
#include <TopOpeBRep_PThePointOfIntersection.hxx>
#include <TopOpeBRep_SequenceOfPoint2d.hxx>
#include <TopOpeBRep_ShapeIntersector.hxx>
#include <TopOpeBRep_ShapeIntersector2d.hxx>
#include <TopOpeBRep_ShapeScanner.hxx>
#include <TopOpeBRep_traceSIFF.hxx>
#include <TopOpeBRep_TypeLineCurve.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_VPointInterClassifier.hxx>
#include <TopOpeBRep_VPointInterIterator.hxx>
#include <TopOpeBRep_WPointInter.hxx>
#include <TopOpeBRep_WPointInterIterator.hxx>

// template related includes
// ./opencascade/TopOpeBRep_Array1OfLineInter.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRep_Array1OfVPointInter.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRep_ListOfBipoint.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRep_ListOfBipoint.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRep_DataMapOfTopolTool.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRep_SequenceOfPoint2d.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopOpeBRep_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TopOpeBRep", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<TopOpeBRep_TypeLineCurve>(m, "TopOpeBRep_TypeLineCurve",R"#(None)#")
        .value("TopOpeBRep_ANALYTIC",TopOpeBRep_TypeLineCurve::TopOpeBRep_ANALYTIC)
        .value("TopOpeBRep_RESTRICTION",TopOpeBRep_TypeLineCurve::TopOpeBRep_RESTRICTION)
        .value("TopOpeBRep_WALKING",TopOpeBRep_TypeLineCurve::TopOpeBRep_WALKING)
        .value("TopOpeBRep_LINE",TopOpeBRep_TypeLineCurve::TopOpeBRep_LINE)
        .value("TopOpeBRep_CIRCLE",TopOpeBRep_TypeLineCurve::TopOpeBRep_CIRCLE)
        .value("TopOpeBRep_ELLIPSE",TopOpeBRep_TypeLineCurve::TopOpeBRep_ELLIPSE)
        .value("TopOpeBRep_PARABOLA",TopOpeBRep_TypeLineCurve::TopOpeBRep_PARABOLA)
        .value("TopOpeBRep_HYPERBOLA",TopOpeBRep_TypeLineCurve::TopOpeBRep_HYPERBOLA)
        .value("TopOpeBRep_OTHERTYPE",TopOpeBRep_TypeLineCurve::TopOpeBRep_OTHERTYPE).export_values();
    py::enum_<TopOpeBRep_P2Dstatus>(m, "TopOpeBRep_P2Dstatus",R"#(None)#")
        .value("TopOpeBRep_P2DUNK",TopOpeBRep_P2Dstatus::TopOpeBRep_P2DUNK)
        .value("TopOpeBRep_P2DINT",TopOpeBRep_P2Dstatus::TopOpeBRep_P2DINT)
        .value("TopOpeBRep_P2DSGF",TopOpeBRep_P2Dstatus::TopOpeBRep_P2DSGF)
        .value("TopOpeBRep_P2DSGL",TopOpeBRep_P2Dstatus::TopOpeBRep_P2DSGL)
        .value("TopOpeBRep_P2DNEW",TopOpeBRep_P2Dstatus::TopOpeBRep_P2DNEW).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array1<TopOpeBRep_LineInter>(m,"TopOpeBRep_Array1OfLineInter");  
    preregister_template_NCollection_Array1<TopOpeBRep_VPointInter>(m,"TopOpeBRep_Array1OfVPointInter");  
    preregister_template_NCollection_List<TopOpeBRep_Bipoint>(m,"TopOpeBRep_ListOfBipoint");  
    preregister_template_NCollection_Sequence<TopOpeBRep_Point2d>(m,"TopOpeBRep_SequenceOfPoint2d");  

// classes forward declarations only
    py::class_<TopOpeBRep , shared_ptr<TopOpeBRep>  >(m,"TopOpeBRep",R"#(This package provides the topological operations on the BRep data structure.)#");
    py::class_<TopOpeBRep_Bipoint , shared_ptr<TopOpeBRep_Bipoint>  >(m,"TopOpeBRep_Bipoint",R"#(None)#");
    py::class_<TopOpeBRep_DSFiller , shared_ptr<TopOpeBRep_DSFiller>  >(m,"TopOpeBRep_DSFiller",R"#(Provides class methods to fill a datastructure with results of intersections.)#");
    py::class_<TopOpeBRep_EdgesFiller , shared_ptr<TopOpeBRep_EdgesFiller>  >(m,"TopOpeBRep_EdgesFiller",R"#(Fills a TopOpeBRepDS_DataStructure with Edge/Edge instersection data described by TopOpeBRep_EdgesIntersector.)#");
    py::class_<TopOpeBRep_EdgesIntersector , shared_ptr<TopOpeBRep_EdgesIntersector>  >(m,"TopOpeBRep_EdgesIntersector",R"#(Describes the intersection of two edges on the same surface)#");
    py::class_<TopOpeBRep_FFDumper ,opencascade::handle<TopOpeBRep_FFDumper>  , Standard_Transient >(m,"TopOpeBRep_FFDumper",R"#()#");
    py::class_<TopOpeBRep_FFTransitionTool , shared_ptr<TopOpeBRep_FFTransitionTool>  >(m,"TopOpeBRep_FFTransitionTool",R"#(None)#");
    py::class_<TopOpeBRep_FaceEdgeFiller , shared_ptr<TopOpeBRep_FaceEdgeFiller>  >(m,"TopOpeBRep_FaceEdgeFiller",R"#(None)#");
    py::class_<TopOpeBRep_FaceEdgeIntersector , shared_ptr<TopOpeBRep_FaceEdgeIntersector>  >(m,"TopOpeBRep_FaceEdgeIntersector",R"#(Describes the intersection of a face and an edge.)#");
    py::class_<TopOpeBRep_FacesFiller , shared_ptr<TopOpeBRep_FacesFiller>  >(m,"TopOpeBRep_FacesFiller",R"#(Fills a DataStructure from TopOpeBRepDS with the result of Face/Face instersection described by FacesIntersector from TopOpeBRep. if the faces have same Domain, record it in the DS. else record lines and points and attach list of interferences to the faces, the lines and the edges.)#");
    py::class_<TopOpeBRep_FacesIntersector , shared_ptr<TopOpeBRep_FacesIntersector>  >(m,"TopOpeBRep_FacesIntersector",R"#(Describes the intersection of two faces.)#");
    py::class_<TopOpeBRep_GeomTool , shared_ptr<TopOpeBRep_GeomTool>  >(m,"TopOpeBRep_GeomTool",R"#(Provide services needed by the DSFiller)#");
    py::class_<TopOpeBRep_HArray1OfLineInter ,opencascade::handle<TopOpeBRep_HArray1OfLineInter>  , TopOpeBRep_Array1OfLineInter , Standard_Transient >(m,"TopOpeBRep_HArray1OfLineInter",R"#()#");
    py::class_<TopOpeBRep_HArray1OfVPointInter ,opencascade::handle<TopOpeBRep_HArray1OfVPointInter>  , TopOpeBRep_Array1OfVPointInter , Standard_Transient >(m,"TopOpeBRep_HArray1OfVPointInter",R"#()#");
    py::class_<TopOpeBRep_Hctxee2d ,opencascade::handle<TopOpeBRep_Hctxee2d>  , Standard_Transient >(m,"TopOpeBRep_Hctxee2d",R"#()#");
    py::class_<TopOpeBRep_Hctxff2d ,opencascade::handle<TopOpeBRep_Hctxff2d>  , Standard_Transient >(m,"TopOpeBRep_Hctxff2d",R"#()#");
    py::class_<TopOpeBRep_LineInter , shared_ptr<TopOpeBRep_LineInter>  >(m,"TopOpeBRep_LineInter",R"#(None)#");
    py::class_<TopOpeBRep_Point2d , shared_ptr<TopOpeBRep_Point2d>  >(m,"TopOpeBRep_Point2d",R"#(None)#");
    py::class_<TopOpeBRep_PointClassifier , shared_ptr<TopOpeBRep_PointClassifier>  >(m,"TopOpeBRep_PointClassifier",R"#(None)#");
    py::class_<TopOpeBRep_PointGeomTool , shared_ptr<TopOpeBRep_PointGeomTool>  >(m,"TopOpeBRep_PointGeomTool",R"#(Provide services needed by the Fillers)#");
    py::class_<TopOpeBRep_ShapeIntersector , shared_ptr<TopOpeBRep_ShapeIntersector>  >(m,"TopOpeBRep_ShapeIntersector",R"#(Intersect two shapes.)#");
    py::class_<TopOpeBRep_ShapeIntersector2d , shared_ptr<TopOpeBRep_ShapeIntersector2d>  >(m,"TopOpeBRep_ShapeIntersector2d",R"#(Intersect two shapes.)#");
    py::class_<TopOpeBRep_ShapeScanner , shared_ptr<TopOpeBRep_ShapeScanner>  >(m,"TopOpeBRep_ShapeScanner",R"#(Find, among the subshapes SS of a reference shape RS, the ones which 3D box interfers with the box of a shape S (SS and S are of the same type).)#");
    py::class_<TopOpeBRep_VPointInter , shared_ptr<TopOpeBRep_VPointInter>  >(m,"TopOpeBRep_VPointInter",R"#(None)#");
    py::class_<TopOpeBRep_VPointInterClassifier , shared_ptr<TopOpeBRep_VPointInterClassifier>  >(m,"TopOpeBRep_VPointInterClassifier",R"#(None)#");
    py::class_<TopOpeBRep_VPointInterIterator , shared_ptr<TopOpeBRep_VPointInterIterator>  >(m,"TopOpeBRep_VPointInterIterator",R"#(None)#");
    py::class_<TopOpeBRep_WPointInter , shared_ptr<TopOpeBRep_WPointInter>  >(m,"TopOpeBRep_WPointInter",R"#(None)#");
    py::class_<TopOpeBRep_WPointInterIterator , shared_ptr<TopOpeBRep_WPointInterIterator>  >(m,"TopOpeBRep_WPointInterIterator",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post

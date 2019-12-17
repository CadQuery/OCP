
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <IntTools_Range.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_OutOfMemory.hxx>
#include <IntTools_CurveRangeSample.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Pnt.hxx>
#include <IntTools_Context.hxx>
#include <IntTools_SurfaceRangeSample.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_OutOfMemory.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Pnt2d.hxx>
#include <TopoDS_Edge.hxx>
#include <IntTools_CommonPrt.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <Geom_Curve.hxx>
#include <Bnd_Box.hxx>
#include <IntTools_Range.hxx>
#include <gp_Lin.hxx>
#include <gp_Pln.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <IntTools_FClass2d.hxx>
#include <GeomAPI_ProjectPointOnSurf.hxx>
#include <GeomAPI_ProjectPointOnCurve.hxx>
#include <TopoDS_Edge.hxx>
#include <IntTools_SurfaceRangeLocalizeData.hxx>
#include <BRepClass3d_SolidClassifier.hxx>
#include <TopoDS_Solid.hxx>
#include <Geom2dHatch_Hatcher.hxx>
#include <TopoDS_Vertex.hxx>
#include <IntTools_Curve.hxx>
#include <Bnd_Box.hxx>
#include <Bnd_OBB.hxx>
#include <TopoDS_Face.hxx>
#include <GeomAdaptor_HSurface.hxx>
#include <GeomInt_LineConstructor.hxx>
#include <IntTools_Context.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <IntTools_Context.hxx>
#include <IntTools_Range.hxx>
#include <IntTools_CArray1OfReal.hxx>
#include <IntTools_Range.hxx>
#include <TopoDS_Edge.hxx>
#include <gp_Pnt.hxx>
#include <Geom_Curve.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <IntTools_CArray1OfReal.hxx>
#include <IntTools_Context.hxx>
#include <IntTools_ShrunkRange.hxx>
#include <IntTools_Range.hxx>
#include <IntTools_CommonPrt.hxx>
#include <IntTools_EdgeEdge.hxx>
#include <IntTools_EdgeFace.hxx>
#include <IntTools_FClass2d.hxx>
#include <IntTools_MarkedRangeSet.hxx>
#include <IntTools_BaseRangeSample.hxx>
#include <IntTools_CurveRangeSample.hxx>
#include <IntTools_SurfaceRangeSample.hxx>
#include <IntTools_CurveRangeLocalizeData.hxx>
#include <IntTools_SurfaceRangeLocalizeData.hxx>
#include <IntTools_BeanFaceIntersector.hxx>
#include <IntTools_Curve.hxx>
#include <IntTools_PntOnFace.hxx>
#include <IntTools_PntOn2Faces.hxx>
#include <IntTools_TopolTool.hxx>
#include <IntTools_FaceFace.hxx>
#include <IntTools_Tools.hxx>
#include <IntTools_CArray1OfInteger.hxx>
#include <IntTools_CArray1OfReal.hxx>
#include <IntTools_CurveRangeSampleMapHasher.hxx>
#include <IntTools_SurfaceRangeSampleMapHasher.hxx>
#include <IntTools_Context.hxx>
#include <Bnd_Box.hxx>
#include <IntTools_CurveRangeLocalizeData.hxx>
#include <IntTools_SurfaceRangeLocalizeData.hxx>
#include <GeomAdaptor_HSurface.hxx>
#include <IntTools_Context.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Bnd_Box.hxx>

// module includes
#include <IntTools.hxx>
#include <IntTools_Array1OfRange.hxx>
#include <IntTools_Array1OfRoots.hxx>
#include <IntTools_BaseRangeSample.hxx>
#include <IntTools_BeanFaceIntersector.hxx>
#include <IntTools_CArray1OfInteger.hxx>
#include <IntTools_CArray1OfReal.hxx>
#include <IntTools_CommonPrt.hxx>
#include <IntTools_Context.hxx>
#include <IntTools_Curve.hxx>
#include <IntTools_CurveRangeLocalizeData.hxx>
#include <IntTools_CurveRangeSample.hxx>
#include <IntTools_CurveRangeSampleMapHasher.hxx>
#include <IntTools_DataMapIteratorOfDataMapOfCurveSampleBox.hxx>
#include <IntTools_DataMapIteratorOfDataMapOfSurfaceSampleBox.hxx>
#include <IntTools_DataMapOfCurveSampleBox.hxx>
#include <IntTools_DataMapOfSurfaceSampleBox.hxx>
#include <IntTools_EdgeEdge.hxx>
#include <IntTools_EdgeFace.hxx>
#include <IntTools_FaceFace.hxx>
#include <IntTools_FClass2d.hxx>
#include <IntTools_ListIteratorOfListOfBox.hxx>
#include <IntTools_ListIteratorOfListOfCurveRangeSample.hxx>
#include <IntTools_ListIteratorOfListOfSurfaceRangeSample.hxx>
#include <IntTools_ListOfBox.hxx>
#include <IntTools_ListOfCurveRangeSample.hxx>
#include <IntTools_ListOfSurfaceRangeSample.hxx>
#include <IntTools_MapIteratorOfMapOfCurveSample.hxx>
#include <IntTools_MapIteratorOfMapOfSurfaceSample.hxx>
#include <IntTools_MapOfCurveSample.hxx>
#include <IntTools_MapOfSurfaceSample.hxx>
#include <IntTools_MarkedRangeSet.hxx>
#include <IntTools_PntOn2Faces.hxx>
#include <IntTools_PntOnFace.hxx>
#include <IntTools_Range.hxx>
#include <IntTools_Root.hxx>
#include <IntTools_SequenceOfCommonPrts.hxx>
#include <IntTools_SequenceOfCurves.hxx>
#include <IntTools_SequenceOfPntOn2Faces.hxx>
#include <IntTools_SequenceOfRanges.hxx>
#include <IntTools_SequenceOfRoots.hxx>
#include <IntTools_ShrunkRange.hxx>
#include <IntTools_SurfaceRangeLocalizeData.hxx>
#include <IntTools_SurfaceRangeSample.hxx>
#include <IntTools_SurfaceRangeSampleMapHasher.hxx>
#include <IntTools_Tools.hxx>
#include <IntTools_TopolTool.hxx>
#include <IntTools_WLineTool.hxx>

// template related includes
// ./opencascade/IntTools_SequenceOfCurves.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_Array1OfRoots.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_SequenceOfRoots.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_SequenceOfCommonPrts.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_DataMapOfCurveSampleBox.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_DataMapOfCurveSampleBox.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_SequenceOfPntOn2Faces.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_Array1OfRange.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_MapOfSurfaceSample.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_MapOfSurfaceSample.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_SequenceOfRanges.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_ListOfBox.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_ListOfBox.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_MapOfCurveSample.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_MapOfCurveSample.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_DataMapOfSurfaceSampleBox.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_DataMapOfSurfaceSampleBox.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_ListOfSurfaceRangeSample.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_ListOfSurfaceRangeSample.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_ListOfCurveRangeSample.hxx
#include "NCollection.hxx"
// ./opencascade/IntTools_ListOfCurveRangeSample.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntTools_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IntTools", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<IntTools_BaseRangeSample ,std::unique_ptr<IntTools_BaseRangeSample>  >(m,"IntTools_BaseRangeSample",R"#(base class for range index management)#");
    py::class_<IntTools_SurfaceRangeSample ,std::unique_ptr<IntTools_SurfaceRangeSample>  >(m,"IntTools_SurfaceRangeSample",R"#(class for range index management of surface)#");
    py::class_<IntTools_CArray1OfReal ,std::unique_ptr<IntTools_CArray1OfReal>  >(m,"IntTools_CArray1OfReal",R"#(None)#");
    py::class_<IntTools_Curve ,std::unique_ptr<IntTools_Curve>  >(m,"IntTools_Curve",R"#(The class is a container of one 3D curve, two 2D curves and two Tolerance values. It is used in the Face/Face intersection algorithm to store the results of intersection. In this context: **the 3D curve** is the intersection curve; **the 2D curves** are the PCurves of the 3D curve on the intersecting faces; **the tolerance** is the valid tolerance for 3D curve computed as maximal deviation between 3D curve and 2D curves (or surfaces in case there are no 2D curves); **the tangential tolerance** is the maximal distance from 3D curve to the end of the tangential zone between faces in terms of their tolerance values.)#");
    py::class_<IntTools_ShrunkRange ,std::unique_ptr<IntTools_ShrunkRange>  >(m,"IntTools_ShrunkRange",R"#(The class provides the computation of a working (shrunk) range [t1, t2] for the 3D-curve of the edge.)#");
    py::class_<IntTools_CurveRangeLocalizeData ,std::unique_ptr<IntTools_CurveRangeLocalizeData>  >(m,"IntTools_CurveRangeLocalizeData",R"#(None)#");
    py::class_<IntTools_Root ,std::unique_ptr<IntTools_Root>  >(m,"IntTools_Root",R"#(The class is to describe the root of function of one variable for Edge/Edge and Edge/Surface algorithms.)#");
    py::class_<IntTools_Context ,opencascade::handle<IntTools_Context>  , Standard_Transient >(m,"IntTools_Context",R"#(The intersection Context contains geometrical and topological toolkit (classifiers, projectors, etc). The intersection Context is for caching the tools to increase the performance.The intersection Context contains geometrical and topological toolkit (classifiers, projectors, etc). The intersection Context is for caching the tools to increase the performance.)#");
    py::class_<IntTools_EdgeFace ,std::unique_ptr<IntTools_EdgeFace>  >(m,"IntTools_EdgeFace",R"#(The class provides Edge/Face intersection algorithm to determine common parts between edge and face in 3-d space. Common parts between Edge and Face can be: - Vertices - in case of intersection or touching; - Edge - in case of full coincidence of the edge with the face.)#");
    py::class_<IntTools_MarkedRangeSet ,std::unique_ptr<IntTools_MarkedRangeSet>  >(m,"IntTools_MarkedRangeSet",R"#(class MarkedRangeSet provides continuous set of ranges marked with flags)#");
    py::class_<IntTools ,std::unique_ptr<IntTools>  >(m,"IntTools",R"#(Contains classes for intersection and classification purposes and accompanying classes)#");
    py::class_<IntTools_FaceFace ,std::unique_ptr<IntTools_FaceFace>  >(m,"IntTools_FaceFace",R"#(This class provides the intersection of face's underlying surfaces.)#");
    py::class_<IntTools_PntOn2Faces ,std::unique_ptr<IntTools_PntOn2Faces>  >(m,"IntTools_PntOn2Faces",R"#(Contains two points PntOnFace from IntTools and a flag)#");
    py::class_<IntTools_EdgeEdge ,std::unique_ptr<IntTools_EdgeEdge>  >(m,"IntTools_EdgeEdge",R"#(The class provides Edge/Edge intersection algorithm based on the intersection between edges bounding boxes.)#");
    py::class_<IntTools_PntOnFace ,std::unique_ptr<IntTools_PntOnFace>  >(m,"IntTools_PntOnFace",R"#(Contains a Face, a 3d point, corresponded UV parameters and a flag)#");
    py::class_<IntTools_FClass2d ,std::unique_ptr<IntTools_FClass2d>  >(m,"IntTools_FClass2d",R"#(Class provides an algorithm to classify a 2d Point in 2d space of face using boundaries of the face.)#");
    py::class_<IntTools_CArray1OfInteger ,std::unique_ptr<IntTools_CArray1OfInteger>  >(m,"IntTools_CArray1OfInteger",R"#(None)#");
    py::class_<IntTools_WLineTool ,std::unique_ptr<IntTools_WLineTool>  >(m,"IntTools_WLineTool",R"#(IntTools_WLineTool provides set of static methods related to walking lines.)#");
    py::class_<IntTools_SurfaceRangeLocalizeData ,std::unique_ptr<IntTools_SurfaceRangeLocalizeData>  >(m,"IntTools_SurfaceRangeLocalizeData",R"#(None)#");
    py::class_<IntTools_TopolTool ,opencascade::handle<IntTools_TopolTool>  , Adaptor3d_TopolTool >(m,"IntTools_TopolTool",R"#(Class redefine methods of TopolTool from Adaptor3d concerning sample pointsClass redefine methods of TopolTool from Adaptor3d concerning sample pointsClass redefine methods of TopolTool from Adaptor3d concerning sample points)#");
    py::class_<IntTools_Range ,std::unique_ptr<IntTools_Range>  >(m,"IntTools_Range",R"#(The class describes the 1-d range [myFirst, myLast].)#");
    py::class_<IntTools_CurveRangeSampleMapHasher ,std::unique_ptr<IntTools_CurveRangeSampleMapHasher>  >(m,"IntTools_CurveRangeSampleMapHasher",R"#(class for range index management of curve)#");
    py::class_<IntTools_Tools ,std::unique_ptr<IntTools_Tools>  >(m,"IntTools_Tools",R"#(The class contains handy static functions dealing with the geometry and topology.)#");
    py::class_<IntTools_BeanFaceIntersector ,std::unique_ptr<IntTools_BeanFaceIntersector>  >(m,"IntTools_BeanFaceIntersector",R"#(The class BeanFaceIntersector computes ranges of parameters on the curve of a bean(part of edge) that bound the parts of bean which are on the surface of a face according to edge and face tolerances. Warning: The real boundaries of the face are not taken into account, Most of the result parts of the bean lays only inside the region of the surface, which includes the inside of the face. And the parts which are out of this region can be excluded from the result.)#");
    py::class_<IntTools_SurfaceRangeSampleMapHasher ,std::unique_ptr<IntTools_SurfaceRangeSampleMapHasher>  >(m,"IntTools_SurfaceRangeSampleMapHasher",R"#(None)#");
    py::class_<IntTools_CommonPrt ,std::unique_ptr<IntTools_CommonPrt>  >(m,"IntTools_CommonPrt",R"#(The class is to describe a common part between two edges in 3-d space.)#");
    py::class_<IntTools_CurveRangeSample ,std::unique_ptr<IntTools_CurveRangeSample>  , IntTools_BaseRangeSample >(m,"IntTools_CurveRangeSample",R"#(class for range index management of curve)#");

// pre-register typdefs
// ./opencascade/IntTools_ListIteratorOfListOfBox.hxx
// ./opencascade/IntTools_DataMapIteratorOfDataMapOfSurfaceSampleBox.hxx
// ./opencascade/IntTools_DataMapIteratorOfDataMapOfCurveSampleBox.hxx
// ./opencascade/IntTools_SequenceOfCurves.hxx
    preregister_template_NCollection_Sequence<IntTools_Curve>(m,"IntTools_SequenceOfCurves");  
// ./opencascade/IntTools_ListIteratorOfListOfCurveRangeSample.hxx
// ./opencascade/IntTools_SurfaceRangeSample.hxx
// ./opencascade/IntTools_BaseRangeSample.hxx
// ./opencascade/IntTools_PntOnFace.hxx
// ./opencascade/IntTools_Array1OfRoots.hxx
    preregister_template_NCollection_Array1<IntTools_Root>(m,"IntTools_Array1OfRoots");  
// ./opencascade/IntTools_CArray1OfReal.hxx
// ./opencascade/IntTools_CurveRangeSampleMapHasher.hxx
// ./opencascade/IntTools_SequenceOfRoots.hxx
    preregister_template_NCollection_Sequence<IntTools_Root>(m,"IntTools_SequenceOfRoots");  
// ./opencascade/IntTools_Curve.hxx
// ./opencascade/IntTools_FClass2d.hxx
// ./opencascade/IntTools_SequenceOfCommonPrts.hxx
    preregister_template_NCollection_Sequence<IntTools_CommonPrt>(m,"IntTools_SequenceOfCommonPrts");  
// ./opencascade/IntTools_DataMapOfCurveSampleBox.hxx
    preregister_template_NCollection_DataMap<IntTools_CurveRangeSample, Bnd_Box, IntTools_CurveRangeSampleMapHasher>(m,"IntTools_DataMapOfCurveSampleBox");  
// ./opencascade/IntTools_ShrunkRange.hxx
// ./opencascade/IntTools_SurfaceRangeSampleMapHasher.hxx
// ./opencascade/IntTools_SequenceOfPntOn2Faces.hxx
    preregister_template_NCollection_Sequence<IntTools_PntOn2Faces>(m,"IntTools_SequenceOfPntOn2Faces");  
// ./opencascade/IntTools_Array1OfRange.hxx
    preregister_template_NCollection_Array1<IntTools_Range>(m,"IntTools_Array1OfRange");  
// ./opencascade/IntTools_MapOfSurfaceSample.hxx
    preregister_template_NCollection_Map<IntTools_SurfaceRangeSample, IntTools_SurfaceRangeSampleMapHasher>(m,"IntTools_MapOfSurfaceSample");  
// ./opencascade/IntTools_CurveRangeLocalizeData.hxx
// ./opencascade/IntTools_CArray1OfInteger.hxx
// ./opencascade/IntTools_SequenceOfRanges.hxx
    preregister_template_NCollection_Sequence<IntTools_Range>(m,"IntTools_SequenceOfRanges");  
// ./opencascade/IntTools_Root.hxx
// ./opencascade/IntTools_Tools.hxx
// ./opencascade/IntTools_ListOfBox.hxx
    preregister_template_NCollection_List<Bnd_Box>(m,"IntTools_ListOfBox");  
// ./opencascade/IntTools_MapOfCurveSample.hxx
    preregister_template_NCollection_Map<IntTools_CurveRangeSample, IntTools_CurveRangeSampleMapHasher>(m,"IntTools_MapOfCurveSample");  
// ./opencascade/IntTools_Context.hxx
// ./opencascade/IntTools_WLineTool.hxx
// ./opencascade/IntTools_ListIteratorOfListOfSurfaceRangeSample.hxx
// ./opencascade/IntTools_EdgeFace.hxx
// ./opencascade/IntTools_CurveRangeSample.hxx
// ./opencascade/IntTools_MarkedRangeSet.hxx
// ./opencascade/IntTools_SurfaceRangeLocalizeData.hxx
// ./opencascade/IntTools.hxx
// ./opencascade/IntTools_MapIteratorOfMapOfSurfaceSample.hxx
// ./opencascade/IntTools_BeanFaceIntersector.hxx
// ./opencascade/IntTools_DataMapOfSurfaceSampleBox.hxx
    preregister_template_NCollection_DataMap<IntTools_SurfaceRangeSample, Bnd_Box, IntTools_SurfaceRangeSampleMapHasher>(m,"IntTools_DataMapOfSurfaceSampleBox");  
// ./opencascade/IntTools_FaceFace.hxx
// ./opencascade/IntTools_MapIteratorOfMapOfCurveSample.hxx
// ./opencascade/IntTools_TopolTool.hxx
// ./opencascade/IntTools_PntOn2Faces.hxx
// ./opencascade/IntTools_ListOfSurfaceRangeSample.hxx
    preregister_template_NCollection_List<IntTools_SurfaceRangeSample>(m,"IntTools_ListOfSurfaceRangeSample");  
// ./opencascade/IntTools_CommonPrt.hxx
// ./opencascade/IntTools_EdgeEdge.hxx
// ./opencascade/IntTools_ListOfCurveRangeSample.hxx
    preregister_template_NCollection_List<IntTools_CurveRangeSample>(m,"IntTools_ListOfCurveRangeSample");  
// ./opencascade/IntTools_Range.hxx

};

// user-defined post-inclusion per module

// user-defined post

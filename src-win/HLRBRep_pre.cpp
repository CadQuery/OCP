
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
#include <HLRAlgo_WiresBlock.hxx>
#include <HLRBRep_Data.hxx>
#include <HLRTopoBRep_OutLiner.hxx>
#include <HLRAlgo_Projector.hxx>
#include <TopoDS_Face.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <IntRes2d_Domain.hxx>
#include <HLRBRep_LineTool.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_TheProjPCurOfCInter.hxx>
#include <HLRBRep_TheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter.hxx>
#include <TopoDS_Edge.hxx>
#include <HLRBRep_Curve.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_BCurveTool.hxx>
#include <HLRBRep_Curve.hxx>
#include <HLRBRep_SurfaceTool.hxx>
#include <HLRBRep_BSurfaceTool.hxx>
#include <HLRBRep_Surface.hxx>
#include <HLRBRep_CLProps.hxx>
#include <HLRBRep_SLPropsATool.hxx>
#include <HLRBRep_SLProps.hxx>
#include <HLRBRep_CInter.hxx>
#include <HLRBRep_LineTool.hxx>
#include <HLRBRep_InterCSurf.hxx>
#include <HLRBRep_EdgeFaceTool.hxx>
#include <HLRBRep_Intersector.hxx>
#include <HLRBRep_EdgeData.hxx>
#include <HLRBRep_FaceData.hxx>
#include <HLRBRep_FaceIterator.hxx>
#include <HLRBRep_Data.hxx>
#include <HLRBRep_ShapeToHLR.hxx>
#include <HLRBRep_HLRToShape.hxx>
#include <HLRBRep_ShapeBounds.hxx>
#include <HLRBRep_EdgeInterferenceTool.hxx>
#include <HLRBRep_VertexList.hxx>
#include <HLRBRep_EdgeIList.hxx>
#include <HLRBRep_AreaLimit.hxx>
#include <HLRBRep_EdgeBuilder.hxx>
#include <HLRBRep_Hider.hxx>
#include <HLRBRep_InternalAlgo.hxx>
#include <HLRBRep_Algo.hxx>
#include <HLRBRep_PolyAlgo.hxx>
#include <HLRBRep_BiPoint.hxx>
#include <HLRBRep_BiPnt2D.hxx>
#include <HLRBRep_PolyHLRToShape.hxx>
#include <HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_TheProjPCurOfCInter.hxx>
#include <HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter.hxx>
#include <HLRBRep_TheIntersectorOfTheIntConicCurveOfCInter.hxx>
#include <HLRBRep_TheIntConicCurveOfCInter.hxx>
#include <HLRBRep_IntConicCurveOfCInter.hxx>
#include <HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_TheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_ThePolygonOfInterCSurf.hxx>
#include <HLRBRep_ThePolygonToolOfInterCSurf.hxx>
#include <HLRBRep_ThePolyhedronOfInterCSurf.hxx>
#include <HLRBRep_ThePolyhedronToolOfInterCSurf.hxx>
#include <HLRBRep_TheInterferenceOfInterCSurf.hxx>
#include <HLRBRep_TheCSFunctionOfInterCSurf.hxx>
#include <HLRBRep_TheExactInterCSurf.hxx>
#include <HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf.hxx>
#include <HLRBRep_TheQuadCurvExactInterCSurf.hxx>
#include <HLRBRep_Data.hxx>
#include <gp_Dir.hxx>
#include <HLRBRep_EdgeInterferenceTool.hxx>
#include <HLRBRep_FaceData.hxx>
#include <StdFail_NotDone.hxx>
#include <HLRBRep_SurfaceTool.hxx>
#include <HLRBRep_LineTool.hxx>
#include <math_FunctionSetRoot.hxx>
#include <HLRBRep_SurfaceTool.hxx>
#include <gp_Lin.hxx>
#include <HLRBRep_LineTool.hxx>
#include <HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf.hxx>
#include <gp_Dir.hxx>
#include <HLRBRep_SurfaceTool.hxx>
#include <HLRBRep_LineTool.hxx>
#include <math_Matrix.hxx>
#include <gp_Lin.hxx>
#include <HLRBRep_LineTool.hxx>
#include <HLRBRep_SurfaceTool.hxx>
#include <HLRBRep_ThePolygonOfInterCSurf.hxx>
#include <HLRBRep_ThePolygonToolOfInterCSurf.hxx>
#include <HLRBRep_ThePolyhedronOfInterCSurf.hxx>
#include <HLRBRep_ThePolyhedronToolOfInterCSurf.hxx>
#include <HLRBRep_TheInterferenceOfInterCSurf.hxx>
#include <HLRBRep_TheCSFunctionOfInterCSurf.hxx>
#include <HLRBRep_TheExactInterCSurf.hxx>
#include <HLRBRep_TheQuadCurvExactInterCSurf.hxx>
#include <HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf.hxx>
#include <Bnd_BoundSortBox.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <IntAna_IntConicQuad.hxx>
#include <Bnd_Box.hxx>
#include <HLRBRep_Data.hxx>
#include <HLRTopoBRep_OutLiner.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_TheProjPCurOfCInter.hxx>
#include <HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter.hxx>
#include <HLRBRep_SurfaceTool.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_TheProjPCurOfCInter.hxx>
#include <HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_IntConicCurveOfCInter.hxx>
#include <HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_PolyAlgo.hxx>
#include <HLRTopoBRep_OutLiner.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <gp_Lin.hxx>
#include <HLRBRep_LineTool.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <BRepTopAdaptor_TopolTool.hxx>
#include <StdFail_UndefinedDerivative.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <math_Matrix.hxx>
#include <HLRBRep_ThePolygonOfInterCSurf.hxx>
#include <HLRBRep_ThePolygonToolOfInterCSurf.hxx>
#include <HLRBRep_ThePolyhedronOfInterCSurf.hxx>
#include <HLRBRep_ThePolyhedronToolOfInterCSurf.hxx>
#include <Bnd_BoundSortBox.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <HLRBRep_SLPropsATool.hxx>
#include <HLRAlgo_PolyInternalData.hxx>
#include <HLRAlgo_EdgeStatus.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <Extrema_POnCurv2d.hxx>
#include <gp_Pnt2d.hxx>
#include <HLRBRep_Algo.hxx>
#include <HLRBRep_Data.hxx>
#include <HLRBRep_EdgeData.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <HLRBRep_Curve.hxx>
#include <HLRBRep_AreaLimit.hxx>
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_DomainError.hxx>
#include <HLRBRep_VertexList.hxx>
#include <HLRAlgo_Intersection.hxx>
#include <Standard_TypeMismatch.hxx>
#include <StdFail_NotDone.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Standard_TypeMismatch.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <StdFail_UndefinedDerivative.hxx>
#include <gp_Lin.hxx>
#include <StdFail_UndefinedDerivative.hxx>
#include <Geom_BSplineCurve.hxx>
#include <HLRAlgo_Projector.hxx>
#include <IntCurve_IConicTool.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_TheProjPCurOfCInter.hxx>
#include <HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter.hxx>
#include <IntRes2d_Domain.hxx>
#include <HLRBRep_Data.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter.hxx>
#include <gp_Pnt2d.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_TheProjPCurOfCInter.hxx>
#include <HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter.hxx>

// module includes
#include <HLRBRep.hxx>
#include <HLRBRep_Algo.hxx>
#include <HLRBRep_AreaLimit.hxx>
#include <HLRBRep_Array1OfEData.hxx>
#include <HLRBRep_Array1OfFData.hxx>
#include <HLRBRep_BCurveTool.hxx>
#include <HLRBRep_BiPnt2D.hxx>
#include <HLRBRep_BiPoint.hxx>
#include <HLRBRep_BSurfaceTool.hxx>
#include <HLRBRep_CInter.hxx>
#include <HLRBRep_CLProps.hxx>
#include <HLRBRep_CLPropsATool.hxx>
#include <HLRBRep_Curve.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_Data.hxx>
#include <HLRBRep_EdgeBuilder.hxx>
#include <HLRBRep_EdgeData.hxx>
#include <HLRBRep_EdgeFaceTool.hxx>
#include <HLRBRep_EdgeIList.hxx>
#include <HLRBRep_EdgeInterferenceTool.hxx>
#include <HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_FaceData.hxx>
#include <HLRBRep_FaceIterator.hxx>
#include <HLRBRep_Hider.hxx>
#include <HLRBRep_HLRToShape.hxx>
#include <HLRBRep_IntConicCurveOfCInter.hxx>
#include <HLRBRep_InterCSurf.hxx>
#include <HLRBRep_InternalAlgo.hxx>
#include <HLRBRep_Intersector.hxx>
#include <HLRBRep_LineTool.hxx>
#include <HLRBRep_ListIteratorOfListOfBPnt2D.hxx>
#include <HLRBRep_ListIteratorOfListOfBPoint.hxx>
#include <HLRBRep_ListOfBPnt2D.hxx>
#include <HLRBRep_ListOfBPoint.hxx>
#include <HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter.hxx>
#include <HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_PolyAlgo.hxx>
#include <HLRBRep_PolyHLRToShape.hxx>
#include <HLRBRep_SeqOfShapeBounds.hxx>
#include <HLRBRep_ShapeBounds.hxx>
#include <HLRBRep_ShapeToHLR.hxx>
#include <HLRBRep_SLProps.hxx>
#include <HLRBRep_SLPropsATool.hxx>
#include <HLRBRep_Surface.hxx>
#include <HLRBRep_SurfaceTool.hxx>
#include <HLRBRep_TheCSFunctionOfInterCSurf.hxx>
#include <HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_TheExactInterCSurf.hxx>
#include <HLRBRep_TheIntConicCurveOfCInter.hxx>
#include <HLRBRep_TheInterferenceOfInterCSurf.hxx>
#include <HLRBRep_TheIntersectorOfTheIntConicCurveOfCInter.hxx>
#include <HLRBRep_TheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_ThePolygonOfInterCSurf.hxx>
#include <HLRBRep_ThePolygonToolOfInterCSurf.hxx>
#include <HLRBRep_ThePolyhedronOfInterCSurf.hxx>
#include <HLRBRep_ThePolyhedronToolOfInterCSurf.hxx>
#include <HLRBRep_TheProjPCurOfCInter.hxx>
#include <HLRBRep_TheQuadCurvExactInterCSurf.hxx>
#include <HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf.hxx>
#include <HLRBRep_TypeOfResultingEdge.hxx>
#include <HLRBRep_VertexList.hxx>

// template related includes
// ./opencascade\HLRBRep_SeqOfShapeBounds.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\HLRBRep_ListOfBPnt2D.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\HLRBRep_ListOfBPnt2D.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\HLRBRep_ListOfBPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\HLRBRep_ListOfBPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\HLRBRep_Array1OfFData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\HLRBRep_Array1OfEData.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_HLRBRep_enums(py::module &main_module) {


py::module m = main_module.def_submodule("HLRBRep", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<HLRBRep_TypeOfResultingEdge>(m, "HLRBRep_TypeOfResultingEdge",R"#(Identifies the type of resulting edge of HLRBRep_Algo)#")
        .value("HLRBRep_Undefined",HLRBRep_TypeOfResultingEdge::HLRBRep_Undefined)
        .value("HLRBRep_IsoLine",HLRBRep_TypeOfResultingEdge::HLRBRep_IsoLine)
        .value("HLRBRep_OutLine",HLRBRep_TypeOfResultingEdge::HLRBRep_OutLine)
        .value("HLRBRep_Rg1Line",HLRBRep_TypeOfResultingEdge::HLRBRep_Rg1Line)
        .value("HLRBRep_RgNLine",HLRBRep_TypeOfResultingEdge::HLRBRep_RgNLine)
        .value("HLRBRep_Sharp",HLRBRep_TypeOfResultingEdge::HLRBRep_Sharp).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Sequence<HLRBRep_ShapeBounds>(m,"HLRBRep_SeqOfShapeBounds");
    preregister_template_NCollection_List<HLRBRep_BiPnt2D>(m,"HLRBRep_ListOfBPnt2D");
    preregister_template_NCollection_List<HLRBRep_BiPoint>(m,"HLRBRep_ListOfBPoint");
    preregister_template_NCollection_Array1<HLRBRep_FaceData>(m,"HLRBRep_Array1OfFData");
    preregister_template_NCollection_Array1<HLRBRep_EdgeData>(m,"HLRBRep_Array1OfEData");

// classes forward declarations only
    py::class_<HLRBRep , shared_ptr<HLRBRep> >(m,"HLRBRep",R"#(Hidden Lines Removal algorithms on the BRep DataStructure.)#");
    py::class_<HLRBRep_AreaLimit ,opencascade::handle<HLRBRep_AreaLimit> , Standard_Transient>(m,"HLRBRep_AreaLimit",R"#(The private nested class AreaLimit represents a -- vertex on the Edge with the state on the left and -- the right.The private nested class AreaLimit represents a -- vertex on the Edge with the state on the left and -- the right.The private nested class AreaLimit represents a -- vertex on the Edge with the state on the left and -- the right.)#");
    py::class_<HLRBRep_BCurveTool , shared_ptr<HLRBRep_BCurveTool> >(m,"HLRBRep_BCurveTool",R"#(None)#");
    py::class_<HLRBRep_BSurfaceTool , shared_ptr<HLRBRep_BSurfaceTool> >(m,"HLRBRep_BSurfaceTool",R"#(None)#");
    py::class_<HLRBRep_BiPnt2D , shared_ptr<HLRBRep_BiPnt2D> >(m,"HLRBRep_BiPnt2D",R"#(Contains the colors of a shape.)#");
    py::class_<HLRBRep_BiPoint , shared_ptr<HLRBRep_BiPoint> >(m,"HLRBRep_BiPoint",R"#(Contains the colors of a shape.)#");
    py::class_<HLRBRep_CInter , shared_ptr<HLRBRep_CInter> , IntRes2d_Intersection>(m,"HLRBRep_CInter",R"#(None)#");
    py::class_<HLRBRep_CLProps , shared_ptr<HLRBRep_CLProps> >(m,"HLRBRep_CLProps",R"#(None)#");
    py::class_<HLRBRep_Curve , shared_ptr<HLRBRep_Curve> >(m,"HLRBRep_Curve",R"#(Defines a 2d curve by projection of a 3D curve on a plane with an optional perspective transformation.)#");
    py::class_<HLRBRep_CurveTool , shared_ptr<HLRBRep_CurveTool> >(m,"HLRBRep_CurveTool",R"#(None)#");
    py::class_<HLRBRep_Data ,opencascade::handle<HLRBRep_Data> , Standard_Transient>(m,"HLRBRep_Data",R"#()#");
    py::class_<HLRBRep_EdgeBuilder , shared_ptr<HLRBRep_EdgeBuilder> >(m,"HLRBRep_EdgeBuilder",R"#(None)#");
    py::class_<HLRBRep_EdgeData , shared_ptr<HLRBRep_EdgeData> >(m,"HLRBRep_EdgeData",R"#(None)#");
    py::class_<HLRBRep_EdgeFaceTool , shared_ptr<HLRBRep_EdgeFaceTool> >(m,"HLRBRep_EdgeFaceTool",R"#(The EdgeFaceTool computes the UV coordinates at a given parameter on a Curve and a Surface. It also compute the signed curvature value in a direction at a given u,v point on a surface.)#");
    py::class_<HLRBRep_EdgeIList , shared_ptr<HLRBRep_EdgeIList> >(m,"HLRBRep_EdgeIList",R"#(None)#");
    py::class_<HLRBRep_EdgeInterferenceTool , shared_ptr<HLRBRep_EdgeInterferenceTool> >(m,"HLRBRep_EdgeInterferenceTool",R"#(Implements the methods required to instantiates the EdgeInterferenceList from HLRAlgo.)#");
    py::class_<HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter , shared_ptr<HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter> >(m,"HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter",R"#(None)#");
    py::class_<HLRBRep_FaceData , shared_ptr<HLRBRep_FaceData> >(m,"HLRBRep_FaceData",R"#(None)#");
    py::class_<HLRBRep_FaceIterator , shared_ptr<HLRBRep_FaceIterator> >(m,"HLRBRep_FaceIterator",R"#(None)#");
    py::class_<HLRBRep_HLRToShape , shared_ptr<HLRBRep_HLRToShape> >(m,"HLRBRep_HLRToShape",R"#(A framework for filtering the computation results of an HLRBRep_Algo algorithm by extraction. From the results calculated by the algorithm on a shape, a filter returns the type of edge you want to identify. You can choose any of the following types of output: - visible sharp edges - hidden sharp edges - visible smooth edges - hidden smooth edges - visible sewn edges - hidden sewn edges - visible outline edges - hidden outline edges. - visible isoparameters and - hidden isoparameters. Sharp edges present a C0 continuity (non G1). Smooth edges present a G1 continuity (non G2). Sewn edges present a C2 continuity. The result is composed of 2D edges in the projection plane of the view which the algorithm has worked with. These 2D edges are not included in the data structure of the visualized shape. In order to obtain a complete image, you must combine the shapes given by each of the chosen filters. The construction of the shape does not call a new computation of the algorithm, but only reads its internal results. The methods of this shape are almost identic to those of the HLRBrep_PolyHLRToShape class.)#");
    py::class_<HLRBRep_Hider , shared_ptr<HLRBRep_Hider> >(m,"HLRBRep_Hider",R"#(None)#");
    py::class_<HLRBRep_IntConicCurveOfCInter , shared_ptr<HLRBRep_IntConicCurveOfCInter> , IntRes2d_Intersection>(m,"HLRBRep_IntConicCurveOfCInter",R"#(None)#");
    py::class_<HLRBRep_InterCSurf , shared_ptr<HLRBRep_InterCSurf> , IntCurveSurface_Intersection>(m,"HLRBRep_InterCSurf",R"#(None)#");
    py::class_<HLRBRep_InternalAlgo ,opencascade::handle<HLRBRep_InternalAlgo> , Standard_Transient>(m,"HLRBRep_InternalAlgo",R"#()#");
    py::class_<HLRBRep_Intersector , shared_ptr<HLRBRep_Intersector> >(m,"HLRBRep_Intersector",R"#(The Intersector computes 2D intersections of the projections of 3D curves.)#");
    py::class_<HLRBRep_LineTool , shared_ptr<HLRBRep_LineTool> >(m,"HLRBRep_LineTool",R"#(The LineTool class provides class methods to access the methodes of the Line.)#");
    py::class_<HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter , shared_ptr<HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter> , math_FunctionWithDerivative>(m,"HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter",R"#(None)#");
    py::class_<HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter , shared_ptr<HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter> , math_FunctionWithDerivative>(m,"HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter",R"#(None)#");
    py::class_<HLRBRep_PolyAlgo ,opencascade::handle<HLRBRep_PolyAlgo> , Standard_Transient>(m,"HLRBRep_PolyAlgo",R"#(to remove Hidden lines on Shapes with Triangulations. A framework to compute the shape as seen in a projection plane. This is done by calculating the visible and the hidden parts of the shape. HLRBRep_PolyAlgo works with three types of entity: - shapes to be visualized (these shapes must have already been triangulated.) - edges in these shapes (these edges are defined as polygonal lines on the triangulation of the shape, and are the basic entities which will be visualized or hidden), and - triangles in these shapes which hide the edges. HLRBRep_PolyAlgo is based on the principle of comparing each edge of the shape to be visualized with each of the triangles produced by the triangulation of the shape, and calculating the visible and the hidden parts of each edge. For a given projection, HLRBRep_PolyAlgo calculates a set of lines characteristic of the object being represented. It is also used in conjunction with the HLRBRep_PolyHLRToShape extraction utilities, which reconstruct a new, simplified shape from a selection of calculation results. This new shape is made up of edges, which represent the shape visualized in the projection. HLRBRep_PolyAlgo works with a polyhedral simplification of the shape whereas HLRBRep_Algo takes the shape itself into account. When you use HLRBRep_Algo, you obtain an exact result, whereas, when you use HLRBRep_PolyAlgo, you reduce computation time but obtain polygonal segments. An HLRBRep_PolyAlgo object provides a framework for: - defining the point of view - identifying the shape or shapes to be visualized - calculating the outlines - calculating the visible and hidden lines of the shape. Warning - Superimposed lines are not eliminated by this algorithm. - There must be no unfinished objects inside the shape you wish to visualize. - Points are not treated. - Note that this is not the sort of algorithm used in generating shading, which calculates the visible and hidden parts of each face in a shape to be visualized by comparing each face in the shape with every other face in the same shape.to remove Hidden lines on Shapes with Triangulations. A framework to compute the shape as seen in a projection plane. This is done by calculating the visible and the hidden parts of the shape. HLRBRep_PolyAlgo works with three types of entity: - shapes to be visualized (these shapes must have already been triangulated.) - edges in these shapes (these edges are defined as polygonal lines on the triangulation of the shape, and are the basic entities which will be visualized or hidden), and - triangles in these shapes which hide the edges. HLRBRep_PolyAlgo is based on the principle of comparing each edge of the shape to be visualized with each of the triangles produced by the triangulation of the shape, and calculating the visible and the hidden parts of each edge. For a given projection, HLRBRep_PolyAlgo calculates a set of lines characteristic of the object being represented. It is also used in conjunction with the HLRBRep_PolyHLRToShape extraction utilities, which reconstruct a new, simplified shape from a selection of calculation results. This new shape is made up of edges, which represent the shape visualized in the projection. HLRBRep_PolyAlgo works with a polyhedral simplification of the shape whereas HLRBRep_Algo takes the shape itself into account. When you use HLRBRep_Algo, you obtain an exact result, whereas, when you use HLRBRep_PolyAlgo, you reduce computation time but obtain polygonal segments. An HLRBRep_PolyAlgo object provides a framework for: - defining the point of view - identifying the shape or shapes to be visualized - calculating the outlines - calculating the visible and hidden lines of the shape. Warning - Superimposed lines are not eliminated by this algorithm. - There must be no unfinished objects inside the shape you wish to visualize. - Points are not treated. - Note that this is not the sort of algorithm used in generating shading, which calculates the visible and hidden parts of each face in a shape to be visualized by comparing each face in the shape with every other face in the same shape.to remove Hidden lines on Shapes with Triangulations. A framework to compute the shape as seen in a projection plane. This is done by calculating the visible and the hidden parts of the shape. HLRBRep_PolyAlgo works with three types of entity: - shapes to be visualized (these shapes must have already been triangulated.) - edges in these shapes (these edges are defined as polygonal lines on the triangulation of the shape, and are the basic entities which will be visualized or hidden), and - triangles in these shapes which hide the edges. HLRBRep_PolyAlgo is based on the principle of comparing each edge of the shape to be visualized with each of the triangles produced by the triangulation of the shape, and calculating the visible and the hidden parts of each edge. For a given projection, HLRBRep_PolyAlgo calculates a set of lines characteristic of the object being represented. It is also used in conjunction with the HLRBRep_PolyHLRToShape extraction utilities, which reconstruct a new, simplified shape from a selection of calculation results. This new shape is made up of edges, which represent the shape visualized in the projection. HLRBRep_PolyAlgo works with a polyhedral simplification of the shape whereas HLRBRep_Algo takes the shape itself into account. When you use HLRBRep_Algo, you obtain an exact result, whereas, when you use HLRBRep_PolyAlgo, you reduce computation time but obtain polygonal segments. An HLRBRep_PolyAlgo object provides a framework for: - defining the point of view - identifying the shape or shapes to be visualized - calculating the outlines - calculating the visible and hidden lines of the shape. Warning - Superimposed lines are not eliminated by this algorithm. - There must be no unfinished objects inside the shape you wish to visualize. - Points are not treated. - Note that this is not the sort of algorithm used in generating shading, which calculates the visible and hidden parts of each face in a shape to be visualized by comparing each face in the shape with every other face in the same shape.)#");
    py::class_<HLRBRep_PolyHLRToShape , shared_ptr<HLRBRep_PolyHLRToShape> >(m,"HLRBRep_PolyHLRToShape",R"#(A framework for filtering the computation results of an HLRBRep_Algo algorithm by extraction. From the results calculated by the algorithm on a shape, a filter returns the type of edge you want to identify. You can choose any of the following types of output: - visible sharp edges - hidden sharp edges - visible smooth edges - hidden smooth edges - visible sewn edges - hidden sewn edges - visible outline edges - hidden outline edges. - visible isoparameters and - hidden isoparameters. Sharp edges present a C0 continuity (non G1). Smooth edges present a G1 continuity (non G2). Sewn edges present a C2 continuity. The result is composed of 2D edges in the projection plane of the view which the algorithm has worked with. These 2D edges are not included in the data structure of the visualized shape. In order to obtain a complete image, you must combine the shapes given by each of the chosen filters. The construction of the shape does not call a new computation of the algorithm, but only reads its internal results.)#");
    py::class_<HLRBRep_SLProps , shared_ptr<HLRBRep_SLProps> >(m,"HLRBRep_SLProps",R"#(None)#");
    py::class_<HLRBRep_SLPropsATool , shared_ptr<HLRBRep_SLPropsATool> >(m,"HLRBRep_SLPropsATool",R"#(None)#");
    py::class_<HLRBRep_ShapeBounds , shared_ptr<HLRBRep_ShapeBounds> >(m,"HLRBRep_ShapeBounds",R"#(Contains a Shape and the bounds of its vertices, edges and faces in the DataStructure.)#");
    py::class_<HLRBRep_ShapeToHLR , shared_ptr<HLRBRep_ShapeToHLR> >(m,"HLRBRep_ShapeToHLR",R"#(compute the OutLinedShape of a Shape with an OutLiner, a Projector and create the Data Structure of a Shape.)#");
    py::class_<HLRBRep_Surface , shared_ptr<HLRBRep_Surface> >(m,"HLRBRep_Surface",R"#(None)#");
    py::class_<HLRBRep_SurfaceTool , shared_ptr<HLRBRep_SurfaceTool> >(m,"HLRBRep_SurfaceTool",R"#(None)#");
    py::class_<HLRBRep_TheCSFunctionOfInterCSurf , shared_ptr<HLRBRep_TheCSFunctionOfInterCSurf> , math_FunctionSetWithDerivatives>(m,"HLRBRep_TheCSFunctionOfInterCSurf",R"#(None)#");
    py::class_<HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter , shared_ptr<HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter> >(m,"HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter",R"#(None)#");
    py::class_<HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter , shared_ptr<HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter> , math_FunctionSetWithDerivatives>(m,"HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter",R"#(None)#");
    py::class_<HLRBRep_TheExactInterCSurf , shared_ptr<HLRBRep_TheExactInterCSurf> >(m,"HLRBRep_TheExactInterCSurf",R"#(None)#");
    py::class_<HLRBRep_TheIntConicCurveOfCInter , shared_ptr<HLRBRep_TheIntConicCurveOfCInter> , IntRes2d_Intersection>(m,"HLRBRep_TheIntConicCurveOfCInter",R"#(None)#");
    py::class_<HLRBRep_TheIntPCurvePCurveOfCInter , shared_ptr<HLRBRep_TheIntPCurvePCurveOfCInter> , IntRes2d_Intersection>(m,"HLRBRep_TheIntPCurvePCurveOfCInter",R"#(None)#");
    py::class_<HLRBRep_TheInterferenceOfInterCSurf , shared_ptr<HLRBRep_TheInterferenceOfInterCSurf> , Intf_Interference>(m,"HLRBRep_TheInterferenceOfInterCSurf",R"#(None)#");
    py::class_<HLRBRep_TheIntersectorOfTheIntConicCurveOfCInter , shared_ptr<HLRBRep_TheIntersectorOfTheIntConicCurveOfCInter> , IntRes2d_Intersection>(m,"HLRBRep_TheIntersectorOfTheIntConicCurveOfCInter",R"#(None)#");
    py::class_<HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter , shared_ptr<HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter> >(m,"HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter",R"#(None)#");
    py::class_<HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter , shared_ptr<HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter> , Intf_Polygon2d>(m,"HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter",R"#(None)#");
    py::class_<HLRBRep_ThePolygonOfInterCSurf , shared_ptr<HLRBRep_ThePolygonOfInterCSurf> >(m,"HLRBRep_ThePolygonOfInterCSurf",R"#(None)#");
    py::class_<HLRBRep_ThePolygonToolOfInterCSurf , shared_ptr<HLRBRep_ThePolygonToolOfInterCSurf> >(m,"HLRBRep_ThePolygonToolOfInterCSurf",R"#(None)#");
    py::class_<HLRBRep_ThePolyhedronOfInterCSurf , shared_ptr<HLRBRep_ThePolyhedronOfInterCSurf> >(m,"HLRBRep_ThePolyhedronOfInterCSurf",R"#(None)#");
    py::class_<HLRBRep_ThePolyhedronToolOfInterCSurf , shared_ptr<HLRBRep_ThePolyhedronToolOfInterCSurf> >(m,"HLRBRep_ThePolyhedronToolOfInterCSurf",R"#(None)#");
    py::class_<HLRBRep_TheProjPCurOfCInter , shared_ptr<HLRBRep_TheProjPCurOfCInter> >(m,"HLRBRep_TheProjPCurOfCInter",R"#(None)#");
    py::class_<HLRBRep_TheQuadCurvExactInterCSurf , shared_ptr<HLRBRep_TheQuadCurvExactInterCSurf> >(m,"HLRBRep_TheQuadCurvExactInterCSurf",R"#(None)#");
    py::class_<HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf , shared_ptr<HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf> , math_FunctionWithDerivative>(m,"HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf",R"#(None)#");
    py::class_<HLRBRep_VertexList , shared_ptr<HLRBRep_VertexList> >(m,"HLRBRep_VertexList",R"#(None)#");
    py::class_<HLRBRep_Algo ,opencascade::handle<HLRBRep_Algo> , HLRBRep_InternalAlgo>(m,"HLRBRep_Algo",R"#(Inherited from InternalAlgo to provide methods with Shape from TopoDS. A framework to compute a shape as seen in a projection plane. This is done by calculating the visible and the hidden parts of the shape. HLRBRep_Algo works with three types of entity: - shapes to be visualized - edges in these shapes (these edges are the basic entities which will be visualized or hidden), and - faces in these shapes which hide the edges. HLRBRep_Algo is based on the principle of comparing each edge of the shape to be visualized with each of its faces, and calculating the visible and the hidden parts of each edge. For a given projection, HLRBRep_Algo calculates a set of lines characteristic of the object being represented. It is also used in conjunction with the HLRBRep_HLRToShape extraction utilities, which reconstruct a new, simplified shape from a selection of calculation results. This new shape is made up of edges, which represent the shape visualized in the projection. HLRBRep_Algo takes the shape itself into account whereas HLRBRep_PolyAlgo works with a polyhedral simplification of the shape. When you use HLRBRep_Algo, you obtain an exact result, whereas, when you use HLRBRep_PolyAlgo, you reduce computation time but obtain polygonal segments. In the case of complicated shapes, HLRBRep_Algo may be time-consuming. An HLRBRep_Algo object provides a framework for: - defining the point of view - identifying the shape or shapes to be visualized - calculating the outlines - calculating the visible and hidden lines of the shape. Warning - Superimposed lines are not eliminated by this algorithm. - There must be no unfinished objects inside the shape you wish to visualize. - Points are not treated. - Note that this is not the sort of algorithm used in generating shading, which calculates the visible and hidden parts of each face in a shape to be visualized by comparing each face in the shape with every other face in the same shape.Inherited from InternalAlgo to provide methods with Shape from TopoDS. A framework to compute a shape as seen in a projection plane. This is done by calculating the visible and the hidden parts of the shape. HLRBRep_Algo works with three types of entity: - shapes to be visualized - edges in these shapes (these edges are the basic entities which will be visualized or hidden), and - faces in these shapes which hide the edges. HLRBRep_Algo is based on the principle of comparing each edge of the shape to be visualized with each of its faces, and calculating the visible and the hidden parts of each edge. For a given projection, HLRBRep_Algo calculates a set of lines characteristic of the object being represented. It is also used in conjunction with the HLRBRep_HLRToShape extraction utilities, which reconstruct a new, simplified shape from a selection of calculation results. This new shape is made up of edges, which represent the shape visualized in the projection. HLRBRep_Algo takes the shape itself into account whereas HLRBRep_PolyAlgo works with a polyhedral simplification of the shape. When you use HLRBRep_Algo, you obtain an exact result, whereas, when you use HLRBRep_PolyAlgo, you reduce computation time but obtain polygonal segments. In the case of complicated shapes, HLRBRep_Algo may be time-consuming. An HLRBRep_Algo object provides a framework for: - defining the point of view - identifying the shape or shapes to be visualized - calculating the outlines - calculating the visible and hidden lines of the shape. Warning - Superimposed lines are not eliminated by this algorithm. - There must be no unfinished objects inside the shape you wish to visualize. - Points are not treated. - Note that this is not the sort of algorithm used in generating shading, which calculates the visible and hidden parts of each face in a shape to be visualized by comparing each face in the shape with every other face in the same shape.Inherited from InternalAlgo to provide methods with Shape from TopoDS. A framework to compute a shape as seen in a projection plane. This is done by calculating the visible and the hidden parts of the shape. HLRBRep_Algo works with three types of entity: - shapes to be visualized - edges in these shapes (these edges are the basic entities which will be visualized or hidden), and - faces in these shapes which hide the edges. HLRBRep_Algo is based on the principle of comparing each edge of the shape to be visualized with each of its faces, and calculating the visible and the hidden parts of each edge. For a given projection, HLRBRep_Algo calculates a set of lines characteristic of the object being represented. It is also used in conjunction with the HLRBRep_HLRToShape extraction utilities, which reconstruct a new, simplified shape from a selection of calculation results. This new shape is made up of edges, which represent the shape visualized in the projection. HLRBRep_Algo takes the shape itself into account whereas HLRBRep_PolyAlgo works with a polyhedral simplification of the shape. When you use HLRBRep_Algo, you obtain an exact result, whereas, when you use HLRBRep_PolyAlgo, you reduce computation time but obtain polygonal segments. In the case of complicated shapes, HLRBRep_Algo may be time-consuming. An HLRBRep_Algo object provides a framework for: - defining the point of view - identifying the shape or shapes to be visualized - calculating the outlines - calculating the visible and hidden lines of the shape. Warning - Superimposed lines are not eliminated by this algorithm. - There must be no unfinished objects inside the shape you wish to visualize. - Points are not treated. - Note that this is not the sort of algorithm used in generating shading, which calculates the visible and hidden parts of each face in a shape to be visualized by comparing each face in the shape with every other face in the same shape.)#");

};

// user-defined post-inclusion per module

// user-defined post

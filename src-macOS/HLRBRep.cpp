
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
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
#include <HLRBRep_SurfaceTool.hxx>
#include <gp_Lin.hxx>
#include <HLRBRep_LineTool.hxx>
#include <HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf.hxx>
#include <IntCurve_IConicTool.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_TheProjPCurOfCInter.hxx>
#include <HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter.hxx>
#include <IntRes2d_Domain.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_Data.hxx>
#include <HLRTopoBRep_OutLiner.hxx>
#include <gp_Dir.hxx>
#include <HLRBRep_Algo.hxx>
#include <HLRBRep_Data.hxx>
#include <HLRBRep_EdgeData.hxx>
#include <HLRBRep_Data.hxx>
#include <gp_Dir.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <math_Matrix.hxx>
#include <Standard_TypeMismatch.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_TheProjPCurOfCInter.hxx>
#include <HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_IntConicCurveOfCInter.hxx>
#include <HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <IntRes2d_Domain.hxx>
#include <StdFail_UndefinedDerivative.hxx>
#include <gp_Lin.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <HLRBRep_LineTool.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <HLRBRep_Curve.hxx>
#include <HLRAlgo_PolyInternalData.hxx>
#include <HLRAlgo_EdgeStatus.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_TheProjPCurOfCInter.hxx>
#include <HLRBRep_TheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_PolyAlgo.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <HLRBRep_SurfaceTool.hxx>
#include <HLRBRep_LineTool.hxx>
#include <math_Matrix.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter.hxx>
#include <gp_Pnt2d.hxx>
#include <StdFail_NotDone.hxx>
#include <HLRBRep_SurfaceTool.hxx>
#include <HLRBRep_LineTool.hxx>
#include <math_FunctionSetRoot.hxx>
#include <HLRBRep_AreaLimit.hxx>
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_DomainError.hxx>
#include <HLRBRep_VertexList.hxx>
#include <HLRAlgo_Intersection.hxx>
#include <BRepTopAdaptor_TopolTool.hxx>
#include <StdFail_UndefinedDerivative.hxx>
#include <HLRAlgo_WiresBlock.hxx>
#include <HLRBRep_ThePolygonOfInterCSurf.hxx>
#include <HLRBRep_ThePolygonToolOfInterCSurf.hxx>
#include <HLRBRep_ThePolyhedronOfInterCSurf.hxx>
#include <HLRBRep_ThePolyhedronToolOfInterCSurf.hxx>
#include <Bnd_BoundSortBox.hxx>
#include <HLRBRep_Data.hxx>
#include <StdFail_UndefinedDerivative.hxx>
#include <Geom_BSplineCurve.hxx>
#include <HLRAlgo_Projector.hxx>
#include <gp_Lin.hxx>
#include <HLRBRep_LineTool.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_TheProjPCurOfCInter.hxx>
#include <HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter.hxx>
#include <Standard_TypeMismatch.hxx>
#include <StdFail_NotDone.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRTopoBRep_OutLiner.hxx>
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
#include <HLRBRep_SurfaceTool.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <Extrema_POnCurv2d.hxx>
#include <gp_Pnt2d.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <HLRBRep_SLPropsATool.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_TheProjPCurOfCInter.hxx>
#include <HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter.hxx>
#include <HLRBRep_Data.hxx>
#include <HLRTopoBRep_OutLiner.hxx>
#include <HLRAlgo_Projector.hxx>
#include <TopoDS_Face.hxx>
#include <HLRBRep_FaceData.hxx>
#include <HLRBRep_EdgeInterferenceTool.hxx>

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
// ./opencascade/HLRBRep_Array1OfEData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/HLRBRep_ListOfBPnt2D.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/HLRBRep_ListOfBPnt2D.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/HLRBRep_SeqOfShapeBounds.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/HLRBRep_Array1OfFData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/HLRBRep_ListOfBPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/HLRBRep_ListOfBPoint.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_HLRBRep(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("HLRBRep"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<HLRBRep , shared_ptr<HLRBRep>>(m,"HLRBRep");

    static_cast<py::class_<HLRBRep , shared_ptr<HLRBRep> >>(m.attr("HLRBRep"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_AreaLimit ,opencascade::handle<HLRBRep_AreaLimit> , Standard_Transient>>(m.attr("HLRBRep_AreaLimit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (HLRBRep_AreaLimit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (HLRBRep_AreaLimit::*)() const>(&HLRBRep_AreaLimit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&HLRBRep_AreaLimit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<HLRBRep_BCurveTool , shared_ptr<HLRBRep_BCurveTool>>(m,"HLRBRep_BCurveTool");

    static_cast<py::class_<HLRBRep_BCurveTool , shared_ptr<HLRBRep_BCurveTool> >>(m.attr("HLRBRep_BCurveTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FirstParameter_s",
                    (Standard_Real (*)( const BRepAdaptor_Curve & ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Curve & ) >(&HLRBRep_BCurveTool::FirstParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("LastParameter_s",
                    (Standard_Real (*)( const BRepAdaptor_Curve & ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Curve & ) >(&HLRBRep_BCurveTool::LastParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Continuity_s",
                    (GeomAbs_Shape (*)( const BRepAdaptor_Curve & ) ) static_cast<GeomAbs_Shape (*)( const BRepAdaptor_Curve & ) >(&HLRBRep_BCurveTool::Continuity),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbIntervals_s",
                    (Standard_Integer (*)( const BRepAdaptor_Curve & , const GeomAbs_Shape ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Curve & , const GeomAbs_Shape ) >(&HLRBRep_BCurveTool::NbIntervals),
                    R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(myclass) >= <S>)#"  , py::arg("C"),  py::arg("S"))
        .def_static("Intervals_s",
                    (void (*)( const BRepAdaptor_Curve & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) ) static_cast<void (*)( const BRepAdaptor_Curve & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) >(&HLRBRep_BCurveTool::Intervals),
                    R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("C"),  py::arg("T"),  py::arg("S"))
        .def_static("IsClosed_s",
                    (Standard_Boolean (*)( const BRepAdaptor_Curve & ) ) static_cast<Standard_Boolean (*)( const BRepAdaptor_Curve & ) >(&HLRBRep_BCurveTool::IsClosed),
                    R"#(None)#"  , py::arg("C"))
        .def_static("IsPeriodic_s",
                    (Standard_Boolean (*)( const BRepAdaptor_Curve & ) ) static_cast<Standard_Boolean (*)( const BRepAdaptor_Curve & ) >(&HLRBRep_BCurveTool::IsPeriodic),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Period_s",
                    (Standard_Real (*)( const BRepAdaptor_Curve & ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Curve & ) >(&HLRBRep_BCurveTool::Period),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const BRepAdaptor_Curve & , const Standard_Real ) ) static_cast<gp_Pnt (*)( const BRepAdaptor_Curve & , const Standard_Real ) >(&HLRBRep_BCurveTool::Value),
                    R"#(Computes the point of parameter U on the curve.)#"  , py::arg("C"),  py::arg("U"))
        .def_static("D0_s",
                    (void (*)( const BRepAdaptor_Curve & , const Standard_Real , gp_Pnt & ) ) static_cast<void (*)( const BRepAdaptor_Curve & , const Standard_Real , gp_Pnt & ) >(&HLRBRep_BCurveTool::D0),
                    R"#(Computes the point of parameter U on the curve.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const BRepAdaptor_Curve & , const Standard_Real , gp_Pnt & , gp_Vec & ) ) static_cast<void (*)( const BRepAdaptor_Curve & , const Standard_Real , gp_Pnt & , gp_Vec & ) >(&HLRBRep_BCurveTool::D1),
                    R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def_static("D2_s",
                    (void (*)( const BRepAdaptor_Curve & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const BRepAdaptor_Curve & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&HLRBRep_BCurveTool::D2),
                    R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D3_s",
                    (void (*)( const BRepAdaptor_Curve & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const BRepAdaptor_Curve & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&HLRBRep_BCurveTool::D3),
                    R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C3.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("DN_s",
                    (gp_Vec (*)( const BRepAdaptor_Curve & , const Standard_Real , const Standard_Integer ) ) static_cast<gp_Vec (*)( const BRepAdaptor_Curve & , const Standard_Real , const Standard_Integer ) >(&HLRBRep_BCurveTool::DN),
                    R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the current interval is not CN. Raised if N < 1.)#"  , py::arg("C"),  py::arg("U"),  py::arg("N"))
        .def_static("Resolution_s",
                    (Standard_Real (*)( const BRepAdaptor_Curve & , const Standard_Real ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Curve & , const Standard_Real ) >(&HLRBRep_BCurveTool::Resolution),
                    R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("C"),  py::arg("R3d"))
        .def_static("GetType_s",
                    (GeomAbs_CurveType (*)( const BRepAdaptor_Curve & ) ) static_cast<GeomAbs_CurveType (*)( const BRepAdaptor_Curve & ) >(&HLRBRep_BCurveTool::GetType),
                    R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#"  , py::arg("C"))
        .def_static("Line_s",
                    (gp_Lin (*)( const BRepAdaptor_Curve & ) ) static_cast<gp_Lin (*)( const BRepAdaptor_Curve & ) >(&HLRBRep_BCurveTool::Line),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Circle_s",
                    (gp_Circ (*)( const BRepAdaptor_Curve & ) ) static_cast<gp_Circ (*)( const BRepAdaptor_Curve & ) >(&HLRBRep_BCurveTool::Circle),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Ellipse_s",
                    (gp_Elips (*)( const BRepAdaptor_Curve & ) ) static_cast<gp_Elips (*)( const BRepAdaptor_Curve & ) >(&HLRBRep_BCurveTool::Ellipse),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Hyperbola_s",
                    (gp_Hypr (*)( const BRepAdaptor_Curve & ) ) static_cast<gp_Hypr (*)( const BRepAdaptor_Curve & ) >(&HLRBRep_BCurveTool::Hyperbola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Parabola_s",
                    (gp_Parab (*)( const BRepAdaptor_Curve & ) ) static_cast<gp_Parab (*)( const BRepAdaptor_Curve & ) >(&HLRBRep_BCurveTool::Parabola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Degree_s",
                    (Standard_Integer (*)( const BRepAdaptor_Curve & ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Curve & ) >(&HLRBRep_BCurveTool::Degree),
                    R"#(None)#"  , py::arg("C"))
        .def_static("IsRational_s",
                    (Standard_Boolean (*)( const BRepAdaptor_Curve & ) ) static_cast<Standard_Boolean (*)( const BRepAdaptor_Curve & ) >(&HLRBRep_BCurveTool::IsRational),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbPoles_s",
                    (Standard_Integer (*)( const BRepAdaptor_Curve & ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Curve & ) >(&HLRBRep_BCurveTool::NbPoles),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbKnots_s",
                    (Standard_Integer (*)( const BRepAdaptor_Curve & ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Curve & ) >(&HLRBRep_BCurveTool::NbKnots),
                    R"#(None)#"  , py::arg("C"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<HLRBRep_BSurfaceTool , shared_ptr<HLRBRep_BSurfaceTool>>(m,"HLRBRep_BSurfaceTool");

    static_cast<py::class_<HLRBRep_BSurfaceTool , shared_ptr<HLRBRep_BSurfaceTool> >>(m.attr("HLRBRep_BSurfaceTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FirstUParameter_s",
                    (Standard_Real (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::FirstUParameter),
                    R"#(None)#"  , py::arg("S"))
        .def_static("FirstVParameter_s",
                    (Standard_Real (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::FirstVParameter),
                    R"#(None)#"  , py::arg("S"))
        .def_static("LastUParameter_s",
                    (Standard_Real (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::LastUParameter),
                    R"#(None)#"  , py::arg("S"))
        .def_static("LastVParameter_s",
                    (Standard_Real (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::LastVParameter),
                    R"#(None)#"  , py::arg("S"))
        .def_static("NbUIntervals_s",
                    (Standard_Integer (*)( const BRepAdaptor_Surface & , const GeomAbs_Shape ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Surface & , const GeomAbs_Shape ) >(&HLRBRep_BSurfaceTool::NbUIntervals),
                    R"#(None)#"  , py::arg("S"),  py::arg("Sh"))
        .def_static("NbVIntervals_s",
                    (Standard_Integer (*)( const BRepAdaptor_Surface & , const GeomAbs_Shape ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Surface & , const GeomAbs_Shape ) >(&HLRBRep_BSurfaceTool::NbVIntervals),
                    R"#(None)#"  , py::arg("S"),  py::arg("Sh"))
        .def_static("UIntervals_s",
                    (void (*)( const BRepAdaptor_Surface & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) ) static_cast<void (*)( const BRepAdaptor_Surface & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) >(&HLRBRep_BSurfaceTool::UIntervals),
                    R"#(None)#"  , py::arg("S"),  py::arg("T"),  py::arg("Sh"))
        .def_static("VIntervals_s",
                    (void (*)( const BRepAdaptor_Surface & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) ) static_cast<void (*)( const BRepAdaptor_Surface & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) >(&HLRBRep_BSurfaceTool::VIntervals),
                    R"#(None)#"  , py::arg("S"),  py::arg("T"),  py::arg("Sh"))
        .def_static("UTrim_s",
                    (opencascade::handle<Adaptor3d_HSurface> (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<opencascade::handle<Adaptor3d_HSurface> (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , const Standard_Real ) >(&HLRBRep_BSurfaceTool::UTrim),
                    R"#(If <First> >= <Last>)#"  , py::arg("S"),  py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def_static("VTrim_s",
                    (opencascade::handle<Adaptor3d_HSurface> (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<opencascade::handle<Adaptor3d_HSurface> (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , const Standard_Real ) >(&HLRBRep_BSurfaceTool::VTrim),
                    R"#(If <First> >= <Last>)#"  , py::arg("S"),  py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def_static("IsUClosed_s",
                    (Standard_Boolean (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Boolean (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::IsUClosed),
                    R"#(None)#"  , py::arg("S"))
        .def_static("IsVClosed_s",
                    (Standard_Boolean (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Boolean (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::IsVClosed),
                    R"#(None)#"  , py::arg("S"))
        .def_static("IsUPeriodic_s",
                    (Standard_Boolean (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Boolean (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::IsUPeriodic),
                    R"#(None)#"  , py::arg("S"))
        .def_static("UPeriod_s",
                    (Standard_Real (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::UPeriod),
                    R"#(None)#"  , py::arg("S"))
        .def_static("IsVPeriodic_s",
                    (Standard_Boolean (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Boolean (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::IsVPeriodic),
                    R"#(None)#"  , py::arg("S"))
        .def_static("VPeriod_s",
                    (Standard_Real (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::VPeriod),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real ) ) static_cast<gp_Pnt (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real ) >(&HLRBRep_BSurfaceTool::Value),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"))
        .def_static("D0_s",
                    (void (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , gp_Pnt & ) ) static_cast<void (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , gp_Pnt & ) >(&HLRBRep_BSurfaceTool::D0),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&HLRBRep_BSurfaceTool::D1),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"),  py::arg("P"),  py::arg("D1u"),  py::arg("D1v"))
        .def_static("D2_s",
                    (void (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&HLRBRep_BSurfaceTool::D2),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def_static("D3_s",
                    (void (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&HLRBRep_BSurfaceTool::D3),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def_static("DN_s",
                    (gp_Vec (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ) ) static_cast<gp_Vec (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ) >(&HLRBRep_BSurfaceTool::DN),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"),  py::arg("Nu"),  py::arg("Nv"))
        .def_static("UContinuity_s",
                    (GeomAbs_Shape (*)( const BRepAdaptor_Surface & ) ) static_cast<GeomAbs_Shape (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::UContinuity),
                    R"#(None)#"  , py::arg("S"))
        .def_static("VContinuity_s",
                    (GeomAbs_Shape (*)( const BRepAdaptor_Surface & ) ) static_cast<GeomAbs_Shape (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::VContinuity),
                    R"#(None)#"  , py::arg("S"))
        .def_static("UDegree_s",
                    (Standard_Integer (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::UDegree),
                    R"#(None)#"  , py::arg("S"))
        .def_static("NbUPoles_s",
                    (Standard_Integer (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::NbUPoles),
                    R"#(None)#"  , py::arg("S"))
        .def_static("NbUKnots_s",
                    (Standard_Integer (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::NbUKnots),
                    R"#(None)#"  , py::arg("S"))
        .def_static("IsURational_s",
                    (Standard_Boolean (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Boolean (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::IsURational),
                    R"#(None)#"  , py::arg("S"))
        .def_static("VDegree_s",
                    (Standard_Integer (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::VDegree),
                    R"#(None)#"  , py::arg("S"))
        .def_static("NbVPoles_s",
                    (Standard_Integer (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::NbVPoles),
                    R"#(None)#"  , py::arg("S"))
        .def_static("NbVKnots_s",
                    (Standard_Integer (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::NbVKnots),
                    R"#(None)#"  , py::arg("S"))
        .def_static("IsVRational_s",
                    (Standard_Boolean (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Boolean (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::IsVRational),
                    R"#(None)#"  , py::arg("S"))
        .def_static("UResolution_s",
                    (Standard_Real (*)( const BRepAdaptor_Surface & , const Standard_Real ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Surface & , const Standard_Real ) >(&HLRBRep_BSurfaceTool::UResolution),
                    R"#(None)#"  , py::arg("S"),  py::arg("R3d"))
        .def_static("VResolution_s",
                    (Standard_Real (*)( const BRepAdaptor_Surface & , const Standard_Real ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Surface & , const Standard_Real ) >(&HLRBRep_BSurfaceTool::VResolution),
                    R"#(None)#"  , py::arg("S"),  py::arg("R3d"))
        .def_static("GetType_s",
                    (GeomAbs_SurfaceType (*)( const BRepAdaptor_Surface & ) ) static_cast<GeomAbs_SurfaceType (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::GetType),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Plane_s",
                    (gp_Pln (*)( const BRepAdaptor_Surface & ) ) static_cast<gp_Pln (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::Plane),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Cylinder_s",
                    (gp_Cylinder (*)( const BRepAdaptor_Surface & ) ) static_cast<gp_Cylinder (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::Cylinder),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Cone_s",
                    (gp_Cone (*)( const BRepAdaptor_Surface & ) ) static_cast<gp_Cone (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::Cone),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Torus_s",
                    (gp_Torus (*)( const BRepAdaptor_Surface & ) ) static_cast<gp_Torus (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::Torus),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Sphere_s",
                    (gp_Sphere (*)( const BRepAdaptor_Surface & ) ) static_cast<gp_Sphere (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::Sphere),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Bezier_s",
                    (opencascade::handle<Geom_BezierSurface> (*)( const BRepAdaptor_Surface & ) ) static_cast<opencascade::handle<Geom_BezierSurface> (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::Bezier),
                    R"#(None)#"  , py::arg("S"))
        .def_static("BSpline_s",
                    (opencascade::handle<Geom_BSplineSurface> (*)( const BRepAdaptor_Surface & ) ) static_cast<opencascade::handle<Geom_BSplineSurface> (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::BSpline),
                    R"#(None)#"  , py::arg("S"))
        .def_static("AxeOfRevolution_s",
                    (gp_Ax1 (*)( const BRepAdaptor_Surface & ) ) static_cast<gp_Ax1 (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::AxeOfRevolution),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Direction_s",
                    (gp_Dir (*)( const BRepAdaptor_Surface & ) ) static_cast<gp_Dir (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::Direction),
                    R"#(None)#"  , py::arg("S"))
        .def_static("BasisCurve_s",
                    (opencascade::handle<Adaptor3d_HCurve> (*)( const BRepAdaptor_Surface & ) ) static_cast<opencascade::handle<Adaptor3d_HCurve> (*)( const BRepAdaptor_Surface & ) >(&HLRBRep_BSurfaceTool::BasisCurve),
                    R"#(None)#"  , py::arg("S"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_BiPnt2D , shared_ptr<HLRBRep_BiPnt2D> >>(m.attr("HLRBRep_BiPnt2D"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const TopoDS_Shape &,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean >()  , py::arg("x1"),  py::arg("y1"),  py::arg("x2"),  py::arg("y2"),  py::arg("S"),  py::arg("reg1"),  py::arg("regn"),  py::arg("outl"),  py::arg("intl") )
        .def(py::init< const gp_XY &,const gp_XY &,const TopoDS_Shape &,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean >()  , py::arg("thePoint1"),  py::arg("thePoint2"),  py::arg("S"),  py::arg("reg1"),  py::arg("regn"),  py::arg("outl"),  py::arg("intl") )
    // custom constructors
    // methods
        .def("P1",
             (const gp_Pnt2d & (HLRBRep_BiPnt2D::*)() const) static_cast<const gp_Pnt2d & (HLRBRep_BiPnt2D::*)() const>(&HLRBRep_BiPnt2D::P1),
             R"#(None)#" )
        .def("P2",
             (const gp_Pnt2d & (HLRBRep_BiPnt2D::*)() const) static_cast<const gp_Pnt2d & (HLRBRep_BiPnt2D::*)() const>(&HLRBRep_BiPnt2D::P2),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (HLRBRep_BiPnt2D::*)() const) static_cast<const TopoDS_Shape & (HLRBRep_BiPnt2D::*)() const>(&HLRBRep_BiPnt2D::Shape),
             R"#(None)#" )
        .def("Shape",
             (void (HLRBRep_BiPnt2D::*)( const TopoDS_Shape & ) ) static_cast<void (HLRBRep_BiPnt2D::*)( const TopoDS_Shape & ) >(&HLRBRep_BiPnt2D::Shape),
             R"#(None)#"  , py::arg("S"))
        .def("Rg1Line",
             (Standard_Boolean (HLRBRep_BiPnt2D::*)() const) static_cast<Standard_Boolean (HLRBRep_BiPnt2D::*)() const>(&HLRBRep_BiPnt2D::Rg1Line),
             R"#(None)#" )
        .def("Rg1Line",
             (void (HLRBRep_BiPnt2D::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_BiPnt2D::*)( const Standard_Boolean ) >(&HLRBRep_BiPnt2D::Rg1Line),
             R"#(None)#"  , py::arg("B"))
        .def("RgNLine",
             (Standard_Boolean (HLRBRep_BiPnt2D::*)() const) static_cast<Standard_Boolean (HLRBRep_BiPnt2D::*)() const>(&HLRBRep_BiPnt2D::RgNLine),
             R"#(None)#" )
        .def("RgNLine",
             (void (HLRBRep_BiPnt2D::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_BiPnt2D::*)( const Standard_Boolean ) >(&HLRBRep_BiPnt2D::RgNLine),
             R"#(None)#"  , py::arg("B"))
        .def("OutLine",
             (Standard_Boolean (HLRBRep_BiPnt2D::*)() const) static_cast<Standard_Boolean (HLRBRep_BiPnt2D::*)() const>(&HLRBRep_BiPnt2D::OutLine),
             R"#(None)#" )
        .def("OutLine",
             (void (HLRBRep_BiPnt2D::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_BiPnt2D::*)( const Standard_Boolean ) >(&HLRBRep_BiPnt2D::OutLine),
             R"#(None)#"  , py::arg("B"))
        .def("IntLine",
             (Standard_Boolean (HLRBRep_BiPnt2D::*)() const) static_cast<Standard_Boolean (HLRBRep_BiPnt2D::*)() const>(&HLRBRep_BiPnt2D::IntLine),
             R"#(None)#" )
        .def("IntLine",
             (void (HLRBRep_BiPnt2D::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_BiPnt2D::*)( const Standard_Boolean ) >(&HLRBRep_BiPnt2D::IntLine),
             R"#(None)#"  , py::arg("B"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_BiPoint , shared_ptr<HLRBRep_BiPoint> >>(m.attr("HLRBRep_BiPoint"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const TopoDS_Shape &,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean >()  , py::arg("x1"),  py::arg("y1"),  py::arg("z1"),  py::arg("x2"),  py::arg("y2"),  py::arg("z2"),  py::arg("S"),  py::arg("reg1"),  py::arg("regn"),  py::arg("outl"),  py::arg("intl") )
    // custom constructors
    // methods
        .def("P1",
             (const gp_Pnt & (HLRBRep_BiPoint::*)() const) static_cast<const gp_Pnt & (HLRBRep_BiPoint::*)() const>(&HLRBRep_BiPoint::P1),
             R"#(None)#" )
        .def("P2",
             (const gp_Pnt & (HLRBRep_BiPoint::*)() const) static_cast<const gp_Pnt & (HLRBRep_BiPoint::*)() const>(&HLRBRep_BiPoint::P2),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (HLRBRep_BiPoint::*)() const) static_cast<const TopoDS_Shape & (HLRBRep_BiPoint::*)() const>(&HLRBRep_BiPoint::Shape),
             R"#(None)#" )
        .def("Shape",
             (void (HLRBRep_BiPoint::*)( const TopoDS_Shape & ) ) static_cast<void (HLRBRep_BiPoint::*)( const TopoDS_Shape & ) >(&HLRBRep_BiPoint::Shape),
             R"#(None)#"  , py::arg("S"))
        .def("Rg1Line",
             (Standard_Boolean (HLRBRep_BiPoint::*)() const) static_cast<Standard_Boolean (HLRBRep_BiPoint::*)() const>(&HLRBRep_BiPoint::Rg1Line),
             R"#(None)#" )
        .def("Rg1Line",
             (void (HLRBRep_BiPoint::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_BiPoint::*)( const Standard_Boolean ) >(&HLRBRep_BiPoint::Rg1Line),
             R"#(None)#"  , py::arg("B"))
        .def("RgNLine",
             (Standard_Boolean (HLRBRep_BiPoint::*)() const) static_cast<Standard_Boolean (HLRBRep_BiPoint::*)() const>(&HLRBRep_BiPoint::RgNLine),
             R"#(None)#" )
        .def("RgNLine",
             (void (HLRBRep_BiPoint::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_BiPoint::*)( const Standard_Boolean ) >(&HLRBRep_BiPoint::RgNLine),
             R"#(None)#"  , py::arg("B"))
        .def("OutLine",
             (Standard_Boolean (HLRBRep_BiPoint::*)() const) static_cast<Standard_Boolean (HLRBRep_BiPoint::*)() const>(&HLRBRep_BiPoint::OutLine),
             R"#(None)#" )
        .def("OutLine",
             (void (HLRBRep_BiPoint::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_BiPoint::*)( const Standard_Boolean ) >(&HLRBRep_BiPoint::OutLine),
             R"#(None)#"  , py::arg("B"))
        .def("IntLine",
             (Standard_Boolean (HLRBRep_BiPoint::*)() const) static_cast<Standard_Boolean (HLRBRep_BiPoint::*)() const>(&HLRBRep_BiPoint::IntLine),
             R"#(None)#" )
        .def("IntLine",
             (void (HLRBRep_BiPoint::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_BiPoint::*)( const Standard_Boolean ) >(&HLRBRep_BiPoint::IntLine),
             R"#(None)#"  , py::arg("B"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_CInter , shared_ptr<HLRBRep_CInter> , IntRes2d_Intersection>>(m.attr("HLRBRep_CInter"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_CLProps , shared_ptr<HLRBRep_CLProps> >>(m.attr("HLRBRep_CLProps"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_Curve , shared_ptr<HLRBRep_Curve> >>(m.attr("HLRBRep_Curve"))
    // constructors
    // custom constructors
    // methods
        .def("Projector",
             (void (HLRBRep_Curve::*)( const HLRAlgo_Projector * ) ) static_cast<void (HLRBRep_Curve::*)( const HLRAlgo_Projector * ) >(&HLRBRep_Curve::Projector),
             R"#(None)#"  , py::arg("Proj"))
        .def("Curve",
             (BRepAdaptor_Curve & (HLRBRep_Curve::*)() ) static_cast<BRepAdaptor_Curve & (HLRBRep_Curve::*)() >(&HLRBRep_Curve::Curve),
             R"#(Returns the 3D curve.)#" )
        .def("GetCurve",
             (const BRepAdaptor_Curve & (HLRBRep_Curve::*)() const) static_cast<const BRepAdaptor_Curve & (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::GetCurve),
             R"#(Returns the 3D curve.)#" )
        .def("Value3D",
             (gp_Pnt (HLRBRep_Curve::*)( const Standard_Real ) const) static_cast<gp_Pnt (HLRBRep_Curve::*)( const Standard_Real ) const>(&HLRBRep_Curve::Value3D),
             R"#(Computes the 3D point of parameter U on the curve.)#"  , py::arg("U"))
        .def("D0",
             (void (HLRBRep_Curve::*)( const Standard_Real , gp_Pnt & ) const) static_cast<void (HLRBRep_Curve::*)( const Standard_Real , gp_Pnt & ) const>(&HLRBRep_Curve::D0),
             R"#(Computes the 3D point of parameter U on the curve.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (HLRBRep_Curve::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const) static_cast<void (HLRBRep_Curve::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const>(&HLRBRep_Curve::D1),
             R"#(Computes the point of parameter U on the curve with its first derivative.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("FirstParameter",
             (Standard_Real (HLRBRep_Curve::*)() const) static_cast<Standard_Real (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (HLRBRep_Curve::*)() const) static_cast<Standard_Real (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (HLRBRep_Curve::*)() const) static_cast<GeomAbs_Shape (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (HLRBRep_Curve::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (HLRBRep_Curve::*)( const GeomAbs_Shape ) const>(&HLRBRep_Curve::NbIntervals),
             R"#(If necessary, breaks the curve in intervals of continuity <S>. And returns the number of intervals.)#"  , py::arg("S"))
        .def("Intervals",
             (void (HLRBRep_Curve::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (HLRBRep_Curve::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&HLRBRep_Curve::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("IsClosed",
             (Standard_Boolean (HLRBRep_Curve::*)() const) static_cast<Standard_Boolean (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (HLRBRep_Curve::*)() const) static_cast<Standard_Boolean (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (HLRBRep_Curve::*)() const) static_cast<Standard_Real (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt2d (HLRBRep_Curve::*)( const Standard_Real ) const) static_cast<gp_Pnt2d (HLRBRep_Curve::*)( const Standard_Real ) const>(&HLRBRep_Curve::Value),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"))
        .def("Resolution",
             (Standard_Real (HLRBRep_Curve::*)( const Standard_Real ) const) static_cast<Standard_Real (HLRBRep_Curve::*)( const Standard_Real ) const>(&HLRBRep_Curve::Resolution),
             R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (HLRBRep_Curve::*)() const) static_cast<GeomAbs_CurveType (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::GetType),
             R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#" )
        .def("IsRational",
             (Standard_Boolean (HLRBRep_Curve::*)() const) static_cast<Standard_Boolean (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::IsRational),
             R"#(None)#" )
        .def("Degree",
             (Standard_Integer (HLRBRep_Curve::*)() const) static_cast<Standard_Integer (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::Degree),
             R"#(None)#" )
        .def("NbPoles",
             (Standard_Integer (HLRBRep_Curve::*)() const) static_cast<Standard_Integer (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::NbPoles),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (HLRBRep_Curve::*)() const) static_cast<Standard_Integer (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::NbKnots),
             R"#(None)#" )
        .def("Curve",
             (BRepAdaptor_Curve & (HLRBRep_Curve::*)() ) static_cast<BRepAdaptor_Curve & (HLRBRep_Curve::*)() >(&HLRBRep_Curve::Curve),
             R"#(Returns the 3D curve.)#" )
        .def("GetCurve",
             (const BRepAdaptor_Curve & (HLRBRep_Curve::*)() const) static_cast<const BRepAdaptor_Curve & (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::GetCurve),
             R"#(Returns the 3D curve.)#" )
        .def("Value3D",
             (gp_Pnt (HLRBRep_Curve::*)( const Standard_Real ) const) static_cast<gp_Pnt (HLRBRep_Curve::*)( const Standard_Real ) const>(&HLRBRep_Curve::Value3D),
             R"#(Computes the 3D point of parameter U on the curve.)#"  , py::arg("U"))
        .def("D0",
             (void (HLRBRep_Curve::*)( const Standard_Real , gp_Pnt & ) const) static_cast<void (HLRBRep_Curve::*)( const Standard_Real , gp_Pnt & ) const>(&HLRBRep_Curve::D0),
             R"#(Computes the 3D point of parameter U on the curve.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (HLRBRep_Curve::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const) static_cast<void (HLRBRep_Curve::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const>(&HLRBRep_Curve::D1),
             R"#(Computes the point of parameter U on the curve with its first derivative.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("FirstParameter",
             (Standard_Real (HLRBRep_Curve::*)() const) static_cast<Standard_Real (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (HLRBRep_Curve::*)() const) static_cast<Standard_Real (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (HLRBRep_Curve::*)() const) static_cast<GeomAbs_Shape (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (HLRBRep_Curve::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (HLRBRep_Curve::*)( const GeomAbs_Shape ) const>(&HLRBRep_Curve::NbIntervals),
             R"#(If necessary, breaks the curve in intervals of continuity <S>. And returns the number of intervals.)#"  , py::arg("S"))
        .def("Intervals",
             (void (HLRBRep_Curve::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (HLRBRep_Curve::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&HLRBRep_Curve::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("Tab"),  py::arg("Sh"))
        .def("IsClosed",
             (Standard_Boolean (HLRBRep_Curve::*)() const) static_cast<Standard_Boolean (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (HLRBRep_Curve::*)() const) static_cast<Standard_Boolean (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (HLRBRep_Curve::*)() const) static_cast<Standard_Real (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt2d (HLRBRep_Curve::*)( const Standard_Real ) const) static_cast<gp_Pnt2d (HLRBRep_Curve::*)( const Standard_Real ) const>(&HLRBRep_Curve::Value),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"))
        .def("Resolution",
             (Standard_Real (HLRBRep_Curve::*)( const Standard_Real ) const) static_cast<Standard_Real (HLRBRep_Curve::*)( const Standard_Real ) const>(&HLRBRep_Curve::Resolution),
             R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (HLRBRep_Curve::*)() const) static_cast<GeomAbs_CurveType (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::GetType),
             R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#" )
        .def("Degree",
             (Standard_Integer (HLRBRep_Curve::*)() const) static_cast<Standard_Integer (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::Degree),
             R"#(None)#" )
        .def("NbPoles",
             (Standard_Integer (HLRBRep_Curve::*)() const) static_cast<Standard_Integer (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::NbPoles),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (HLRBRep_Curve::*)() const) static_cast<Standard_Integer (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::NbKnots),
             R"#(None)#" )
        .def("IsRational",
             (Standard_Boolean (HLRBRep_Curve::*)() const) static_cast<Standard_Boolean (HLRBRep_Curve::*)() const>(&HLRBRep_Curve::IsRational),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<HLRBRep_CurveTool , shared_ptr<HLRBRep_CurveTool>>(m,"HLRBRep_CurveTool");

    static_cast<py::class_<HLRBRep_CurveTool , shared_ptr<HLRBRep_CurveTool> >>(m.attr("HLRBRep_CurveTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FirstParameter_s",
                    (Standard_Real (*)( const Standard_Address ) ) static_cast<Standard_Real (*)( const Standard_Address ) >(&HLRBRep_CurveTool::FirstParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("LastParameter_s",
                    (Standard_Real (*)( const Standard_Address ) ) static_cast<Standard_Real (*)( const Standard_Address ) >(&HLRBRep_CurveTool::LastParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Continuity_s",
                    (GeomAbs_Shape (*)( const Standard_Address ) ) static_cast<GeomAbs_Shape (*)( const Standard_Address ) >(&HLRBRep_CurveTool::Continuity),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbIntervals_s",
                    (Standard_Integer (*)( const Standard_Address ) ) static_cast<Standard_Integer (*)( const Standard_Address ) >(&HLRBRep_CurveTool::NbIntervals),
                    R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(myclass) >= <S>)#"  , py::arg("C"))
        .def_static("Intervals_s",
                    (void (*)( const Standard_Address , NCollection_Array1<Standard_Real> & ) ) static_cast<void (*)( const Standard_Address , NCollection_Array1<Standard_Real> & ) >(&HLRBRep_CurveTool::Intervals),
                    R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("C"),  py::arg("T"))
        .def_static("IsClosed_s",
                    (Standard_Boolean (*)( const Standard_Address ) ) static_cast<Standard_Boolean (*)( const Standard_Address ) >(&HLRBRep_CurveTool::IsClosed),
                    R"#(None)#"  , py::arg("C"))
        .def_static("IsPeriodic_s",
                    (Standard_Boolean (*)( const Standard_Address ) ) static_cast<Standard_Boolean (*)( const Standard_Address ) >(&HLRBRep_CurveTool::IsPeriodic),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Period_s",
                    (Standard_Real (*)( const Standard_Address ) ) static_cast<Standard_Real (*)( const Standard_Address ) >(&HLRBRep_CurveTool::Period),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt2d (*)( const Standard_Address , const Standard_Real ) ) static_cast<gp_Pnt2d (*)( const Standard_Address , const Standard_Real ) >(&HLRBRep_CurveTool::Value),
                    R"#(Computes the point of parameter U on the curve.)#"  , py::arg("C"),  py::arg("U"))
        .def_static("D0_s",
                    (void (*)( const Standard_Address , const Standard_Real , gp_Pnt2d & ) ) static_cast<void (*)( const Standard_Address , const Standard_Real , gp_Pnt2d & ) >(&HLRBRep_CurveTool::D0),
                    R"#(Computes the point of parameter U on the curve.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const Standard_Address , const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) ) static_cast<void (*)( const Standard_Address , const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) >(&HLRBRep_CurveTool::D1),
                    R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def_static("D2_s",
                    (void (*)( const Standard_Address , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<void (*)( const Standard_Address , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) >(&HLRBRep_CurveTool::D2),
                    R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D3_s",
                    (void (*)( const Standard_Address , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<void (*)( const Standard_Address , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) >(&HLRBRep_CurveTool::D3),
                    R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C3.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("DN_s",
                    (gp_Vec2d (*)( const Standard_Address , const Standard_Real , const Standard_Integer ) ) static_cast<gp_Vec2d (*)( const Standard_Address , const Standard_Real , const Standard_Integer ) >(&HLRBRep_CurveTool::DN),
                    R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the current interval is not CN. Raised if N < 1.)#"  , py::arg("C"),  py::arg("U"),  py::arg("N"))
        .def_static("Resolution_s",
                    (Standard_Real (*)( const Standard_Address , const Standard_Real ) ) static_cast<Standard_Real (*)( const Standard_Address , const Standard_Real ) >(&HLRBRep_CurveTool::Resolution),
                    R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("C"),  py::arg("R3d"))
        .def_static("GetType_s",
                    (GeomAbs_CurveType (*)( const Standard_Address ) ) static_cast<GeomAbs_CurveType (*)( const Standard_Address ) >(&HLRBRep_CurveTool::GetType),
                    R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#"  , py::arg("C"))
        .def_static("TheType_s",
                    (GeomAbs_CurveType (*)( const Standard_Address ) ) static_cast<GeomAbs_CurveType (*)( const Standard_Address ) >(&HLRBRep_CurveTool::TheType),
                    R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#"  , py::arg("C"))
        .def_static("Line_s",
                    (gp_Lin2d (*)( const Standard_Address ) ) static_cast<gp_Lin2d (*)( const Standard_Address ) >(&HLRBRep_CurveTool::Line),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Circle_s",
                    (gp_Circ2d (*)( const Standard_Address ) ) static_cast<gp_Circ2d (*)( const Standard_Address ) >(&HLRBRep_CurveTool::Circle),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Ellipse_s",
                    (gp_Elips2d (*)( const Standard_Address ) ) static_cast<gp_Elips2d (*)( const Standard_Address ) >(&HLRBRep_CurveTool::Ellipse),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Hyperbola_s",
                    (gp_Hypr2d (*)( const Standard_Address ) ) static_cast<gp_Hypr2d (*)( const Standard_Address ) >(&HLRBRep_CurveTool::Hyperbola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Parabola_s",
                    (gp_Parab2d (*)( const Standard_Address ) ) static_cast<gp_Parab2d (*)( const Standard_Address ) >(&HLRBRep_CurveTool::Parabola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Bezier_s",
                    (opencascade::handle<Geom2d_BezierCurve> (*)( const Standard_Address ) ) static_cast<opencascade::handle<Geom2d_BezierCurve> (*)( const Standard_Address ) >(&HLRBRep_CurveTool::Bezier),
                    R"#(None)#"  , py::arg("C"))
        .def_static("BSpline_s",
                    (opencascade::handle<Geom2d_BSplineCurve> (*)( const Standard_Address ) ) static_cast<opencascade::handle<Geom2d_BSplineCurve> (*)( const Standard_Address ) >(&HLRBRep_CurveTool::BSpline),
                    R"#(None)#"  , py::arg("C"))
        .def_static("EpsX_s",
                    (Standard_Real (*)( const Standard_Address ) ) static_cast<Standard_Real (*)( const Standard_Address ) >(&HLRBRep_CurveTool::EpsX),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Degree_s",
                    (Standard_Integer (*)( const Standard_Address ) ) static_cast<Standard_Integer (*)( const Standard_Address ) >(&HLRBRep_CurveTool::Degree),
                    R"#(None)#"  , py::arg("C"))
    // static methods using call by reference i.s.o. return
        .def_static("GetInterval_s",
                    []( const Standard_Address C,const Standard_Integer Index, const NCollection_Array1<Standard_Real> & Tab ){ Standard_Real  U1; Standard_Real  U2; HLRBRep_CurveTool::GetInterval(C,Index,Tab,U1,U2); return std::make_tuple(U1,U2); },
                    R"#(output the bounds of interval of index <Index> used if Type == Composite.)#"  , py::arg("C"),  py::arg("Index"),  py::arg("Tab"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_Data ,opencascade::handle<HLRBRep_Data> , Standard_Transient>>(m.attr("HLRBRep_Data"))
    // constructors
    // custom constructors
    // methods
        .def("EDataArray",
             (HLRBRep_Array1OfEData & (HLRBRep_Data::*)() ) static_cast<HLRBRep_Array1OfEData & (HLRBRep_Data::*)() >(&HLRBRep_Data::EDataArray),
             R"#(None)#" )
        .def("FDataArray",
             (HLRBRep_Array1OfFData & (HLRBRep_Data::*)() ) static_cast<HLRBRep_Array1OfFData & (HLRBRep_Data::*)() >(&HLRBRep_Data::FDataArray),
             R"#(None)#" )
        .def("Tolerance",
             (void (HLRBRep_Data::*)( const Standard_ShortReal ) ) static_cast<void (HLRBRep_Data::*)( const Standard_ShortReal ) >(&HLRBRep_Data::Tolerance),
             R"#(Set the tolerance for the rejections during the exploration)#"  , py::arg("tol"))
        .def("Tolerance",
             (Standard_ShortReal (HLRBRep_Data::*)() const) static_cast<Standard_ShortReal (HLRBRep_Data::*)() const>(&HLRBRep_Data::Tolerance),
             R"#(returns the tolerance for the rejections during the exploration)#" )
        .def("Projector",
             (HLRAlgo_Projector & (HLRBRep_Data::*)() ) static_cast<HLRAlgo_Projector & (HLRBRep_Data::*)() >(&HLRBRep_Data::Projector),
             R"#(None)#" )
        .def("NbVertices",
             (Standard_Integer (HLRBRep_Data::*)() const) static_cast<Standard_Integer (HLRBRep_Data::*)() const>(&HLRBRep_Data::NbVertices),
             R"#(None)#" )
        .def("NbEdges",
             (Standard_Integer (HLRBRep_Data::*)() const) static_cast<Standard_Integer (HLRBRep_Data::*)() const>(&HLRBRep_Data::NbEdges),
             R"#(None)#" )
        .def("NbFaces",
             (Standard_Integer (HLRBRep_Data::*)() const) static_cast<Standard_Integer (HLRBRep_Data::*)() const>(&HLRBRep_Data::NbFaces),
             R"#(None)#" )
        .def("EdgeMap",
             (TopTools_IndexedMapOfShape & (HLRBRep_Data::*)() ) static_cast<TopTools_IndexedMapOfShape & (HLRBRep_Data::*)() >(&HLRBRep_Data::EdgeMap),
             R"#(None)#" )
        .def("FaceMap",
             (TopTools_IndexedMapOfShape & (HLRBRep_Data::*)() ) static_cast<TopTools_IndexedMapOfShape & (HLRBRep_Data::*)() >(&HLRBRep_Data::FaceMap),
             R"#(None)#" )
        .def("HidingTheFace",
             (Standard_Boolean (HLRBRep_Data::*)() const) static_cast<Standard_Boolean (HLRBRep_Data::*)() const>(&HLRBRep_Data::HidingTheFace),
             R"#(Returns true if the current edge to be hidden belongs to the hiding face.)#" )
        .def("SimpleHidingFace",
             (Standard_Boolean (HLRBRep_Data::*)() const) static_cast<Standard_Boolean (HLRBRep_Data::*)() const>(&HLRBRep_Data::SimpleHidingFace),
             R"#(Returns true if the current hiding face is not an auto-intersected one.)#" )
        .def("MoreInterference",
             (Standard_Boolean (HLRBRep_Data::*)() const) static_cast<Standard_Boolean (HLRBRep_Data::*)() const>(&HLRBRep_Data::MoreInterference),
             R"#(None)#" )
        .def("Interference",
             (HLRAlgo_Interference & (HLRBRep_Data::*)() ) static_cast<HLRAlgo_Interference & (HLRBRep_Data::*)() >(&HLRBRep_Data::Interference),
             R"#(None)#" )
        .def("EdgeOfTheHidingFace",
             (Standard_Boolean (HLRBRep_Data::*)( const Standard_Integer , const HLRBRep_EdgeData & ) const) static_cast<Standard_Boolean (HLRBRep_Data::*)( const Standard_Integer , const HLRBRep_EdgeData & ) const>(&HLRBRep_Data::EdgeOfTheHidingFace),
             R"#(Returns the true if the Edge <ED> belongs to the Hiding Face.)#"  , py::arg("E"),  py::arg("ED"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (HLRBRep_Data::*)() const) static_cast<const opencascade::handle<Standard_Type> & (HLRBRep_Data::*)() const>(&HLRBRep_Data::DynamicType),
             R"#(None)#" )
        .def("EDataArray",
             (HLRBRep_Array1OfEData & (HLRBRep_Data::*)() ) static_cast<HLRBRep_Array1OfEData & (HLRBRep_Data::*)() >(&HLRBRep_Data::EDataArray),
             R"#(None)#" )
        .def("FDataArray",
             (HLRBRep_Array1OfFData & (HLRBRep_Data::*)() ) static_cast<HLRBRep_Array1OfFData & (HLRBRep_Data::*)() >(&HLRBRep_Data::FDataArray),
             R"#(None)#" )
        .def("Tolerance",
             (void (HLRBRep_Data::*)( const Standard_ShortReal ) ) static_cast<void (HLRBRep_Data::*)( const Standard_ShortReal ) >(&HLRBRep_Data::Tolerance),
             R"#(Set the tolerance for the rejections during the exploration)#"  , py::arg("tol"))
        .def("Tolerance",
             (Standard_ShortReal (HLRBRep_Data::*)() const) static_cast<Standard_ShortReal (HLRBRep_Data::*)() const>(&HLRBRep_Data::Tolerance),
             R"#(returns the tolerance for the rejections during the exploration)#" )
        .def("Projector",
             (HLRAlgo_Projector & (HLRBRep_Data::*)() ) static_cast<HLRAlgo_Projector & (HLRBRep_Data::*)() >(&HLRBRep_Data::Projector),
             R"#(None)#" )
        .def("NbVertices",
             (Standard_Integer (HLRBRep_Data::*)() const) static_cast<Standard_Integer (HLRBRep_Data::*)() const>(&HLRBRep_Data::NbVertices),
             R"#(None)#" )
        .def("NbEdges",
             (Standard_Integer (HLRBRep_Data::*)() const) static_cast<Standard_Integer (HLRBRep_Data::*)() const>(&HLRBRep_Data::NbEdges),
             R"#(None)#" )
        .def("NbFaces",
             (Standard_Integer (HLRBRep_Data::*)() const) static_cast<Standard_Integer (HLRBRep_Data::*)() const>(&HLRBRep_Data::NbFaces),
             R"#(None)#" )
        .def("EdgeMap",
             (TopTools_IndexedMapOfShape & (HLRBRep_Data::*)() ) static_cast<TopTools_IndexedMapOfShape & (HLRBRep_Data::*)() >(&HLRBRep_Data::EdgeMap),
             R"#(None)#" )
        .def("FaceMap",
             (TopTools_IndexedMapOfShape & (HLRBRep_Data::*)() ) static_cast<TopTools_IndexedMapOfShape & (HLRBRep_Data::*)() >(&HLRBRep_Data::FaceMap),
             R"#(None)#" )
        .def("SimpleHidingFace",
             (Standard_Boolean (HLRBRep_Data::*)() const) static_cast<Standard_Boolean (HLRBRep_Data::*)() const>(&HLRBRep_Data::SimpleHidingFace),
             R"#(Returns true if the current hiding face is not an auto-intersected one.)#" )
        .def("HidingTheFace",
             (Standard_Boolean (HLRBRep_Data::*)() const) static_cast<Standard_Boolean (HLRBRep_Data::*)() const>(&HLRBRep_Data::HidingTheFace),
             R"#(Returns true if the current edge to be hidden belongs to the hiding face.)#" )
        .def("MoreInterference",
             (Standard_Boolean (HLRBRep_Data::*)() const) static_cast<Standard_Boolean (HLRBRep_Data::*)() const>(&HLRBRep_Data::MoreInterference),
             R"#(None)#" )
        .def("Interference",
             (HLRAlgo_Interference & (HLRBRep_Data::*)() ) static_cast<HLRAlgo_Interference & (HLRBRep_Data::*)() >(&HLRBRep_Data::Interference),
             R"#(None)#" )
        .def("EdgeOfTheHidingFace",
             (Standard_Boolean (HLRBRep_Data::*)( const Standard_Integer , const HLRBRep_EdgeData & ) const) static_cast<Standard_Boolean (HLRBRep_Data::*)( const Standard_Integer , const HLRBRep_EdgeData & ) const>(&HLRBRep_Data::EdgeOfTheHidingFace),
             R"#(Returns the true if the Edge <ED> belongs to the Hiding Face.)#"  , py::arg(""),  py::arg("ED"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&HLRBRep_Data::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_EdgeBuilder , shared_ptr<HLRBRep_EdgeBuilder> >>(m.attr("HLRBRep_EdgeBuilder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_EdgeData , shared_ptr<HLRBRep_EdgeData> >>(m.attr("HLRBRep_EdgeData"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Selected",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::Selected),
             R"#(None)#" )
        .def("Selected",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::Selected),
             R"#(None)#"  , py::arg("B"))
        .def("Rg1Line",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::Rg1Line),
             R"#(None)#" )
        .def("Rg1Line",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::Rg1Line),
             R"#(None)#"  , py::arg("B"))
        .def("RgNLine",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::RgNLine),
             R"#(None)#" )
        .def("RgNLine",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::RgNLine),
             R"#(None)#"  , py::arg("B"))
        .def("Vertical",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::Vertical),
             R"#(None)#" )
        .def("Vertical",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::Vertical),
             R"#(None)#"  , py::arg("B"))
        .def("Simple",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::Simple),
             R"#(None)#" )
        .def("Simple",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::Simple),
             R"#(None)#"  , py::arg("B"))
        .def("OutLVSta",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::OutLVSta),
             R"#(None)#" )
        .def("OutLVSta",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::OutLVSta),
             R"#(None)#"  , py::arg("B"))
        .def("OutLVEnd",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::OutLVEnd),
             R"#(None)#" )
        .def("OutLVEnd",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::OutLVEnd),
             R"#(None)#"  , py::arg("B"))
        .def("CutAtSta",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::CutAtSta),
             R"#(None)#" )
        .def("CutAtSta",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::CutAtSta),
             R"#(None)#"  , py::arg("B"))
        .def("CutAtEnd",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::CutAtEnd),
             R"#(None)#" )
        .def("CutAtEnd",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::CutAtEnd),
             R"#(None)#"  , py::arg("B"))
        .def("VerAtSta",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::VerAtSta),
             R"#(None)#" )
        .def("VerAtSta",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::VerAtSta),
             R"#(None)#"  , py::arg("B"))
        .def("VerAtEnd",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::VerAtEnd),
             R"#(None)#" )
        .def("VerAtEnd",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::VerAtEnd),
             R"#(None)#"  , py::arg("B"))
        .def("AutoIntersectionDone",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::AutoIntersectionDone),
             R"#(None)#" )
        .def("AutoIntersectionDone",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::AutoIntersectionDone),
             R"#(None)#"  , py::arg("B"))
        .def("Used",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::Used),
             R"#(None)#" )
        .def("Used",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::Used),
             R"#(None)#"  , py::arg("B"))
        .def("HideCount",
             (Standard_Integer (HLRBRep_EdgeData::*)() const) static_cast<Standard_Integer (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::HideCount),
             R"#(None)#" )
        .def("HideCount",
             (void (HLRBRep_EdgeData::*)( const Standard_Integer ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Integer ) >(&HLRBRep_EdgeData::HideCount),
             R"#(None)#"  , py::arg("I"))
        .def("VSta",
             (Standard_Integer (HLRBRep_EdgeData::*)() const) static_cast<Standard_Integer (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::VSta),
             R"#(None)#" )
        .def("VSta",
             (void (HLRBRep_EdgeData::*)( const Standard_Integer ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Integer ) >(&HLRBRep_EdgeData::VSta),
             R"#(None)#"  , py::arg("I"))
        .def("VEnd",
             (Standard_Integer (HLRBRep_EdgeData::*)() const) static_cast<Standard_Integer (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::VEnd),
             R"#(None)#" )
        .def("VEnd",
             (void (HLRBRep_EdgeData::*)( const Standard_Integer ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Integer ) >(&HLRBRep_EdgeData::VEnd),
             R"#(None)#"  , py::arg("I"))
        .def("UpdateMinMax",
             (void (HLRBRep_EdgeData::*)( const HLRAlgo_EdgesBlock::MinMaxIndices & ) ) static_cast<void (HLRBRep_EdgeData::*)( const HLRAlgo_EdgesBlock::MinMaxIndices & ) >(&HLRBRep_EdgeData::UpdateMinMax),
             R"#(None)#"  , py::arg("theTotMinMax"))
        .def("MinMax",
             (HLRAlgo_EdgesBlock::MinMaxIndices & (HLRBRep_EdgeData::*)() ) static_cast<HLRAlgo_EdgesBlock::MinMaxIndices & (HLRBRep_EdgeData::*)() >(&HLRBRep_EdgeData::MinMax),
             R"#(None)#" )
        .def("Status",
             (HLRAlgo_EdgeStatus & (HLRBRep_EdgeData::*)() ) static_cast<HLRAlgo_EdgeStatus & (HLRBRep_EdgeData::*)() >(&HLRBRep_EdgeData::Status),
             R"#(None)#" )
        .def("ChangeGeometry",
             (HLRBRep_Curve & (HLRBRep_EdgeData::*)() ) static_cast<HLRBRep_Curve & (HLRBRep_EdgeData::*)() >(&HLRBRep_EdgeData::ChangeGeometry),
             R"#(None)#" )
        .def("Geometry",
             (const HLRBRep_Curve & (HLRBRep_EdgeData::*)() const) static_cast<const HLRBRep_Curve & (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::Geometry),
             R"#(None)#" )
        .def("Curve",
             (HLRBRep_Curve * (HLRBRep_EdgeData::*)() ) static_cast<HLRBRep_Curve * (HLRBRep_EdgeData::*)() >(&HLRBRep_EdgeData::Curve),
             R"#(None)#" )
        .def("Tolerance",
             (Standard_ShortReal (HLRBRep_EdgeData::*)() const) static_cast<Standard_ShortReal (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::Tolerance),
             R"#(None)#" )
        .def("Selected",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::Selected),
             R"#(None)#" )
        .def("Selected",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::Selected),
             R"#(None)#"  , py::arg("B"))
        .def("Rg1Line",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::Rg1Line),
             R"#(None)#" )
        .def("Rg1Line",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::Rg1Line),
             R"#(None)#"  , py::arg("B"))
        .def("RgNLine",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::RgNLine),
             R"#(None)#" )
        .def("RgNLine",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::RgNLine),
             R"#(None)#"  , py::arg("B"))
        .def("Vertical",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::Vertical),
             R"#(None)#" )
        .def("Vertical",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::Vertical),
             R"#(None)#"  , py::arg("B"))
        .def("Simple",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::Simple),
             R"#(None)#" )
        .def("Simple",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::Simple),
             R"#(None)#"  , py::arg("B"))
        .def("OutLVSta",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::OutLVSta),
             R"#(None)#" )
        .def("OutLVSta",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::OutLVSta),
             R"#(None)#"  , py::arg("B"))
        .def("OutLVEnd",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::OutLVEnd),
             R"#(None)#" )
        .def("OutLVEnd",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::OutLVEnd),
             R"#(None)#"  , py::arg("B"))
        .def("CutAtSta",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::CutAtSta),
             R"#(None)#" )
        .def("CutAtSta",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::CutAtSta),
             R"#(None)#"  , py::arg("B"))
        .def("CutAtEnd",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::CutAtEnd),
             R"#(None)#" )
        .def("CutAtEnd",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::CutAtEnd),
             R"#(None)#"  , py::arg("B"))
        .def("VerAtSta",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::VerAtSta),
             R"#(None)#" )
        .def("VerAtSta",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::VerAtSta),
             R"#(None)#"  , py::arg("B"))
        .def("VerAtEnd",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::VerAtEnd),
             R"#(None)#" )
        .def("VerAtEnd",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::VerAtEnd),
             R"#(None)#"  , py::arg("B"))
        .def("AutoIntersectionDone",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::AutoIntersectionDone),
             R"#(None)#" )
        .def("AutoIntersectionDone",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::AutoIntersectionDone),
             R"#(None)#"  , py::arg("B"))
        .def("Used",
             (Standard_Boolean (HLRBRep_EdgeData::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::Used),
             R"#(None)#" )
        .def("Used",
             (void (HLRBRep_EdgeData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Boolean ) >(&HLRBRep_EdgeData::Used),
             R"#(None)#"  , py::arg("B"))
        .def("HideCount",
             (Standard_Integer (HLRBRep_EdgeData::*)() const) static_cast<Standard_Integer (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::HideCount),
             R"#(None)#" )
        .def("HideCount",
             (void (HLRBRep_EdgeData::*)( const Standard_Integer ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Integer ) >(&HLRBRep_EdgeData::HideCount),
             R"#(None)#"  , py::arg("I"))
        .def("VSta",
             (Standard_Integer (HLRBRep_EdgeData::*)() const) static_cast<Standard_Integer (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::VSta),
             R"#(None)#" )
        .def("VSta",
             (void (HLRBRep_EdgeData::*)( const Standard_Integer ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Integer ) >(&HLRBRep_EdgeData::VSta),
             R"#(None)#"  , py::arg("I"))
        .def("VEnd",
             (Standard_Integer (HLRBRep_EdgeData::*)() const) static_cast<Standard_Integer (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::VEnd),
             R"#(None)#" )
        .def("VEnd",
             (void (HLRBRep_EdgeData::*)( const Standard_Integer ) ) static_cast<void (HLRBRep_EdgeData::*)( const Standard_Integer ) >(&HLRBRep_EdgeData::VEnd),
             R"#(None)#"  , py::arg("I"))
        .def("Status",
             (HLRAlgo_EdgeStatus & (HLRBRep_EdgeData::*)() ) static_cast<HLRAlgo_EdgeStatus & (HLRBRep_EdgeData::*)() >(&HLRBRep_EdgeData::Status),
             R"#(None)#" )
        .def("ChangeGeometry",
             (HLRBRep_Curve & (HLRBRep_EdgeData::*)() ) static_cast<HLRBRep_Curve & (HLRBRep_EdgeData::*)() >(&HLRBRep_EdgeData::ChangeGeometry),
             R"#(None)#" )
        .def("Geometry",
             (const HLRBRep_Curve & (HLRBRep_EdgeData::*)() const) static_cast<const HLRBRep_Curve & (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::Geometry),
             R"#(None)#" )
        .def("Tolerance",
             (Standard_ShortReal (HLRBRep_EdgeData::*)() const) static_cast<Standard_ShortReal (HLRBRep_EdgeData::*)() const>(&HLRBRep_EdgeData::Tolerance),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<HLRBRep_EdgeFaceTool , shared_ptr<HLRBRep_EdgeFaceTool>>(m,"HLRBRep_EdgeFaceTool");

    static_cast<py::class_<HLRBRep_EdgeFaceTool , shared_ptr<HLRBRep_EdgeFaceTool> >>(m.attr("HLRBRep_EdgeFaceTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<HLRBRep_EdgeIList , shared_ptr<HLRBRep_EdgeIList>>(m,"HLRBRep_EdgeIList");

    static_cast<py::class_<HLRBRep_EdgeIList , shared_ptr<HLRBRep_EdgeIList> >>(m.attr("HLRBRep_EdgeIList"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_EdgeInterferenceTool , shared_ptr<HLRBRep_EdgeInterferenceTool> >>(m.attr("HLRBRep_EdgeInterferenceTool"))
    // constructors
    // custom constructors
    // methods
        .def("InitVertices",
             (void (HLRBRep_EdgeInterferenceTool::*)() ) static_cast<void (HLRBRep_EdgeInterferenceTool::*)() >(&HLRBRep_EdgeInterferenceTool::InitVertices),
             R"#(None)#" )
        .def("MoreVertices",
             (Standard_Boolean (HLRBRep_EdgeInterferenceTool::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeInterferenceTool::*)() const>(&HLRBRep_EdgeInterferenceTool::MoreVertices),
             R"#(None)#" )
        .def("NextVertex",
             (void (HLRBRep_EdgeInterferenceTool::*)() ) static_cast<void (HLRBRep_EdgeInterferenceTool::*)() >(&HLRBRep_EdgeInterferenceTool::NextVertex),
             R"#(None)#" )
        .def("CurrentVertex",
             (const HLRAlgo_Intersection & (HLRBRep_EdgeInterferenceTool::*)() const) static_cast<const HLRAlgo_Intersection & (HLRBRep_EdgeInterferenceTool::*)() const>(&HLRBRep_EdgeInterferenceTool::CurrentVertex),
             R"#(None)#" )
        .def("CurrentOrientation",
             (TopAbs_Orientation (HLRBRep_EdgeInterferenceTool::*)() const) static_cast<TopAbs_Orientation (HLRBRep_EdgeInterferenceTool::*)() const>(&HLRBRep_EdgeInterferenceTool::CurrentOrientation),
             R"#(None)#" )
        .def("CurrentParameter",
             (Standard_Real (HLRBRep_EdgeInterferenceTool::*)() const) static_cast<Standard_Real (HLRBRep_EdgeInterferenceTool::*)() const>(&HLRBRep_EdgeInterferenceTool::CurrentParameter),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (HLRBRep_EdgeInterferenceTool::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeInterferenceTool::*)() const>(&HLRBRep_EdgeInterferenceTool::IsPeriodic),
             R"#(None)#" )
        .def("ParameterOfInterference",
             (Standard_Real (HLRBRep_EdgeInterferenceTool::*)( const HLRAlgo_Interference & ) const) static_cast<Standard_Real (HLRBRep_EdgeInterferenceTool::*)( const HLRAlgo_Interference & ) const>(&HLRBRep_EdgeInterferenceTool::ParameterOfInterference),
             R"#(None)#"  , py::arg("I"))
        .def("InitVertices",
             (void (HLRBRep_EdgeInterferenceTool::*)() ) static_cast<void (HLRBRep_EdgeInterferenceTool::*)() >(&HLRBRep_EdgeInterferenceTool::InitVertices),
             R"#(None)#" )
        .def("MoreVertices",
             (Standard_Boolean (HLRBRep_EdgeInterferenceTool::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeInterferenceTool::*)() const>(&HLRBRep_EdgeInterferenceTool::MoreVertices),
             R"#(None)#" )
        .def("NextVertex",
             (void (HLRBRep_EdgeInterferenceTool::*)() ) static_cast<void (HLRBRep_EdgeInterferenceTool::*)() >(&HLRBRep_EdgeInterferenceTool::NextVertex),
             R"#(None)#" )
        .def("CurrentVertex",
             (const HLRAlgo_Intersection & (HLRBRep_EdgeInterferenceTool::*)() const) static_cast<const HLRAlgo_Intersection & (HLRBRep_EdgeInterferenceTool::*)() const>(&HLRBRep_EdgeInterferenceTool::CurrentVertex),
             R"#(None)#" )
        .def("CurrentOrientation",
             (TopAbs_Orientation (HLRBRep_EdgeInterferenceTool::*)() const) static_cast<TopAbs_Orientation (HLRBRep_EdgeInterferenceTool::*)() const>(&HLRBRep_EdgeInterferenceTool::CurrentOrientation),
             R"#(None)#" )
        .def("CurrentParameter",
             (Standard_Real (HLRBRep_EdgeInterferenceTool::*)() const) static_cast<Standard_Real (HLRBRep_EdgeInterferenceTool::*)() const>(&HLRBRep_EdgeInterferenceTool::CurrentParameter),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (HLRBRep_EdgeInterferenceTool::*)() const) static_cast<Standard_Boolean (HLRBRep_EdgeInterferenceTool::*)() const>(&HLRBRep_EdgeInterferenceTool::IsPeriodic),
             R"#(None)#" )
        .def("ParameterOfInterference",
             (Standard_Real (HLRBRep_EdgeInterferenceTool::*)( const HLRAlgo_Interference & ) const) static_cast<Standard_Real (HLRBRep_EdgeInterferenceTool::*)( const HLRAlgo_Interference & ) const>(&HLRBRep_EdgeInterferenceTool::ParameterOfInterference),
             R"#(None)#"  , py::arg("I"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter , shared_ptr<HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter> >>(m.attr("HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_FaceData , shared_ptr<HLRBRep_FaceData> >>(m.attr("HLRBRep_FaceData"))
    // constructors
    // custom constructors
    // methods
        .def("Selected",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Selected),
             R"#(None)#" )
        .def("Selected",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Selected),
             R"#(None)#"  , py::arg("B"))
        .def("Back",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Back),
             R"#(None)#" )
        .def("Back",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Back),
             R"#(None)#"  , py::arg("B"))
        .def("Side",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Side),
             R"#(None)#" )
        .def("Side",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Side),
             R"#(None)#"  , py::arg("B"))
        .def("Closed",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Closed),
             R"#(None)#" )
        .def("Closed",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Closed),
             R"#(None)#"  , py::arg("B"))
        .def("Hiding",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Hiding),
             R"#(None)#" )
        .def("Hiding",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Hiding),
             R"#(None)#"  , py::arg("B"))
        .def("Simple",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Simple),
             R"#(None)#" )
        .def("Simple",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Simple),
             R"#(None)#"  , py::arg("B"))
        .def("Cut",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Cut),
             R"#(None)#" )
        .def("Cut",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Cut),
             R"#(None)#"  , py::arg("B"))
        .def("WithOutL",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::WithOutL),
             R"#(None)#" )
        .def("WithOutL",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::WithOutL),
             R"#(None)#"  , py::arg("B"))
        .def("Plane",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Plane),
             R"#(None)#" )
        .def("Plane",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Plane),
             R"#(None)#"  , py::arg("B"))
        .def("Cylinder",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Cylinder),
             R"#(None)#" )
        .def("Cylinder",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Cylinder),
             R"#(None)#"  , py::arg("B"))
        .def("Cone",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Cone),
             R"#(None)#" )
        .def("Cone",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Cone),
             R"#(None)#"  , py::arg("B"))
        .def("Sphere",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Sphere),
             R"#(None)#" )
        .def("Sphere",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Sphere),
             R"#(None)#"  , py::arg("B"))
        .def("Torus",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Torus),
             R"#(None)#" )
        .def("Torus",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Torus),
             R"#(None)#"  , py::arg("B"))
        .def("Size",
             (Standard_Real (HLRBRep_FaceData::*)() const) static_cast<Standard_Real (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Size),
             R"#(None)#" )
        .def("Size",
             (void (HLRBRep_FaceData::*)( const Standard_Real ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Real ) >(&HLRBRep_FaceData::Size),
             R"#(None)#"  , py::arg("S"))
        .def("Orientation",
             (TopAbs_Orientation (HLRBRep_FaceData::*)() const) static_cast<TopAbs_Orientation (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Orientation),
             R"#(None)#" )
        .def("Orientation",
             (void (HLRBRep_FaceData::*)( const TopAbs_Orientation ) ) static_cast<void (HLRBRep_FaceData::*)( const TopAbs_Orientation ) >(&HLRBRep_FaceData::Orientation),
             R"#(None)#"  , py::arg("O"))
        .def("Wires",
             (opencascade::handle<HLRAlgo_WiresBlock> & (HLRBRep_FaceData::*)() ) static_cast<opencascade::handle<HLRAlgo_WiresBlock> & (HLRBRep_FaceData::*)() >(&HLRBRep_FaceData::Wires),
             R"#(None)#" )
        .def("Geometry",
             (HLRBRep_Surface & (HLRBRep_FaceData::*)() ) static_cast<HLRBRep_Surface & (HLRBRep_FaceData::*)() >(&HLRBRep_FaceData::Geometry),
             R"#(None)#" )
        .def("Tolerance",
             (Standard_ShortReal (HLRBRep_FaceData::*)() const) static_cast<Standard_ShortReal (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Tolerance),
             R"#(None)#" )
        .def("Selected",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Selected),
             R"#(None)#" )
        .def("Selected",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Selected),
             R"#(None)#"  , py::arg("B"))
        .def("Back",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Back),
             R"#(None)#" )
        .def("Back",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Back),
             R"#(None)#"  , py::arg("B"))
        .def("Side",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Side),
             R"#(None)#" )
        .def("Side",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Side),
             R"#(None)#"  , py::arg("B"))
        .def("Closed",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Closed),
             R"#(None)#" )
        .def("Closed",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Closed),
             R"#(None)#"  , py::arg("B"))
        .def("Hiding",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Hiding),
             R"#(None)#" )
        .def("Hiding",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Hiding),
             R"#(None)#"  , py::arg("B"))
        .def("Simple",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Simple),
             R"#(None)#" )
        .def("Simple",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Simple),
             R"#(None)#"  , py::arg("B"))
        .def("Cut",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Cut),
             R"#(None)#" )
        .def("Cut",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Cut),
             R"#(None)#"  , py::arg("B"))
        .def("WithOutL",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::WithOutL),
             R"#(None)#" )
        .def("WithOutL",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::WithOutL),
             R"#(None)#"  , py::arg("B"))
        .def("Plane",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Plane),
             R"#(None)#" )
        .def("Plane",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Plane),
             R"#(None)#"  , py::arg("B"))
        .def("Cylinder",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Cylinder),
             R"#(None)#" )
        .def("Cylinder",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Cylinder),
             R"#(None)#"  , py::arg("B"))
        .def("Cone",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Cone),
             R"#(None)#" )
        .def("Cone",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Cone),
             R"#(None)#"  , py::arg("B"))
        .def("Sphere",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Sphere),
             R"#(None)#" )
        .def("Sphere",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Sphere),
             R"#(None)#"  , py::arg("B"))
        .def("Torus",
             (Standard_Boolean (HLRBRep_FaceData::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Torus),
             R"#(None)#" )
        .def("Torus",
             (void (HLRBRep_FaceData::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Boolean ) >(&HLRBRep_FaceData::Torus),
             R"#(None)#"  , py::arg("B"))
        .def("Size",
             (Standard_Real (HLRBRep_FaceData::*)() const) static_cast<Standard_Real (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Size),
             R"#(None)#" )
        .def("Size",
             (void (HLRBRep_FaceData::*)( const Standard_Real ) ) static_cast<void (HLRBRep_FaceData::*)( const Standard_Real ) >(&HLRBRep_FaceData::Size),
             R"#(None)#"  , py::arg("S"))
        .def("Orientation",
             (TopAbs_Orientation (HLRBRep_FaceData::*)() const) static_cast<TopAbs_Orientation (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Orientation),
             R"#(None)#" )
        .def("Orientation",
             (void (HLRBRep_FaceData::*)( const TopAbs_Orientation ) ) static_cast<void (HLRBRep_FaceData::*)( const TopAbs_Orientation ) >(&HLRBRep_FaceData::Orientation),
             R"#(None)#"  , py::arg("O"))
        .def("Wires",
             (opencascade::handle<HLRAlgo_WiresBlock> & (HLRBRep_FaceData::*)() ) static_cast<opencascade::handle<HLRAlgo_WiresBlock> & (HLRBRep_FaceData::*)() >(&HLRBRep_FaceData::Wires),
             R"#(None)#" )
        .def("Geometry",
             (HLRBRep_Surface & (HLRBRep_FaceData::*)() ) static_cast<HLRBRep_Surface & (HLRBRep_FaceData::*)() >(&HLRBRep_FaceData::Geometry),
             R"#(None)#" )
        .def("Tolerance",
             (Standard_ShortReal (HLRBRep_FaceData::*)() const) static_cast<Standard_ShortReal (HLRBRep_FaceData::*)() const>(&HLRBRep_FaceData::Tolerance),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_FaceIterator , shared_ptr<HLRBRep_FaceIterator> >>(m.attr("HLRBRep_FaceIterator"))
    // constructors
    // custom constructors
    // methods
        .def("MoreEdge",
             (Standard_Boolean (HLRBRep_FaceIterator::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceIterator::*)() const>(&HLRBRep_FaceIterator::MoreEdge),
             R"#(None)#" )
        .def("BeginningOfWire",
             (Standard_Boolean (HLRBRep_FaceIterator::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceIterator::*)() const>(&HLRBRep_FaceIterator::BeginningOfWire),
             R"#(Returns True if the current edge is the first of a wire.)#" )
        .def("EndOfWire",
             (Standard_Boolean (HLRBRep_FaceIterator::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceIterator::*)() const>(&HLRBRep_FaceIterator::EndOfWire),
             R"#(Returns True if the current edge is the last of a wire.)#" )
        .def("SkipWire",
             (void (HLRBRep_FaceIterator::*)() ) static_cast<void (HLRBRep_FaceIterator::*)() >(&HLRBRep_FaceIterator::SkipWire),
             R"#(Skip the current wire in the exploration.)#" )
        .def("Wire",
             (opencascade::handle<HLRAlgo_EdgesBlock> (HLRBRep_FaceIterator::*)() const) static_cast<opencascade::handle<HLRAlgo_EdgesBlock> (HLRBRep_FaceIterator::*)() const>(&HLRBRep_FaceIterator::Wire),
             R"#(Returns the edges of the current wire.)#" )
        .def("Edge",
             (Standard_Integer (HLRBRep_FaceIterator::*)() const) static_cast<Standard_Integer (HLRBRep_FaceIterator::*)() const>(&HLRBRep_FaceIterator::Edge),
             R"#(None)#" )
        .def("Orientation",
             (TopAbs_Orientation (HLRBRep_FaceIterator::*)() const) static_cast<TopAbs_Orientation (HLRBRep_FaceIterator::*)() const>(&HLRBRep_FaceIterator::Orientation),
             R"#(None)#" )
        .def("OutLine",
             (Standard_Boolean (HLRBRep_FaceIterator::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceIterator::*)() const>(&HLRBRep_FaceIterator::OutLine),
             R"#(None)#" )
        .def("Internal",
             (Standard_Boolean (HLRBRep_FaceIterator::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceIterator::*)() const>(&HLRBRep_FaceIterator::Internal),
             R"#(None)#" )
        .def("Double",
             (Standard_Boolean (HLRBRep_FaceIterator::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceIterator::*)() const>(&HLRBRep_FaceIterator::Double),
             R"#(None)#" )
        .def("IsoLine",
             (Standard_Boolean (HLRBRep_FaceIterator::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceIterator::*)() const>(&HLRBRep_FaceIterator::IsoLine),
             R"#(None)#" )
        .def("MoreEdge",
             (Standard_Boolean (HLRBRep_FaceIterator::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceIterator::*)() const>(&HLRBRep_FaceIterator::MoreEdge),
             R"#(None)#" )
        .def("BeginningOfWire",
             (Standard_Boolean (HLRBRep_FaceIterator::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceIterator::*)() const>(&HLRBRep_FaceIterator::BeginningOfWire),
             R"#(Returns True if the current edge is the first of a wire.)#" )
        .def("EndOfWire",
             (Standard_Boolean (HLRBRep_FaceIterator::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceIterator::*)() const>(&HLRBRep_FaceIterator::EndOfWire),
             R"#(Returns True if the current edge is the last of a wire.)#" )
        .def("SkipWire",
             (void (HLRBRep_FaceIterator::*)() ) static_cast<void (HLRBRep_FaceIterator::*)() >(&HLRBRep_FaceIterator::SkipWire),
             R"#(Skip the current wire in the exploration.)#" )
        .def("Wire",
             (opencascade::handle<HLRAlgo_EdgesBlock> (HLRBRep_FaceIterator::*)() const) static_cast<opencascade::handle<HLRAlgo_EdgesBlock> (HLRBRep_FaceIterator::*)() const>(&HLRBRep_FaceIterator::Wire),
             R"#(Returns the edges of the current wire.)#" )
        .def("Edge",
             (Standard_Integer (HLRBRep_FaceIterator::*)() const) static_cast<Standard_Integer (HLRBRep_FaceIterator::*)() const>(&HLRBRep_FaceIterator::Edge),
             R"#(None)#" )
        .def("Orientation",
             (TopAbs_Orientation (HLRBRep_FaceIterator::*)() const) static_cast<TopAbs_Orientation (HLRBRep_FaceIterator::*)() const>(&HLRBRep_FaceIterator::Orientation),
             R"#(None)#" )
        .def("OutLine",
             (Standard_Boolean (HLRBRep_FaceIterator::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceIterator::*)() const>(&HLRBRep_FaceIterator::OutLine),
             R"#(None)#" )
        .def("Internal",
             (Standard_Boolean (HLRBRep_FaceIterator::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceIterator::*)() const>(&HLRBRep_FaceIterator::Internal),
             R"#(None)#" )
        .def("Double",
             (Standard_Boolean (HLRBRep_FaceIterator::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceIterator::*)() const>(&HLRBRep_FaceIterator::Double),
             R"#(None)#" )
        .def("IsoLine",
             (Standard_Boolean (HLRBRep_FaceIterator::*)() const) static_cast<Standard_Boolean (HLRBRep_FaceIterator::*)() const>(&HLRBRep_FaceIterator::IsoLine),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_HLRToShape , shared_ptr<HLRBRep_HLRToShape> >>(m.attr("HLRBRep_HLRToShape"))
    // constructors
    // custom constructors
    // methods
        .def("VCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)() >(&HLRBRep_HLRToShape::VCompound),
             R"#(None)#" )
        .def("VCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_HLRToShape::VCompound),
             R"#(None)#"  , py::arg("S"))
        .def("Rg1LineVCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)() >(&HLRBRep_HLRToShape::Rg1LineVCompound),
             R"#(None)#" )
        .def("Rg1LineVCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_HLRToShape::Rg1LineVCompound),
             R"#(None)#"  , py::arg("S"))
        .def("RgNLineVCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)() >(&HLRBRep_HLRToShape::RgNLineVCompound),
             R"#(None)#" )
        .def("RgNLineVCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_HLRToShape::RgNLineVCompound),
             R"#(None)#"  , py::arg("S"))
        .def("OutLineVCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)() >(&HLRBRep_HLRToShape::OutLineVCompound),
             R"#(None)#" )
        .def("OutLineVCompound3d",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)() >(&HLRBRep_HLRToShape::OutLineVCompound3d),
             R"#(None)#" )
        .def("OutLineVCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_HLRToShape::OutLineVCompound),
             R"#(None)#"  , py::arg("S"))
        .def("IsoLineVCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)() >(&HLRBRep_HLRToShape::IsoLineVCompound),
             R"#(None)#" )
        .def("IsoLineVCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_HLRToShape::IsoLineVCompound),
             R"#(None)#"  , py::arg("S"))
        .def("HCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)() >(&HLRBRep_HLRToShape::HCompound),
             R"#(None)#" )
        .def("HCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_HLRToShape::HCompound),
             R"#(None)#"  , py::arg("S"))
        .def("Rg1LineHCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)() >(&HLRBRep_HLRToShape::Rg1LineHCompound),
             R"#(None)#" )
        .def("Rg1LineHCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_HLRToShape::Rg1LineHCompound),
             R"#(None)#"  , py::arg("S"))
        .def("RgNLineHCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)() >(&HLRBRep_HLRToShape::RgNLineHCompound),
             R"#(None)#" )
        .def("RgNLineHCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_HLRToShape::RgNLineHCompound),
             R"#(None)#"  , py::arg("S"))
        .def("OutLineHCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)() >(&HLRBRep_HLRToShape::OutLineHCompound),
             R"#(None)#" )
        .def("OutLineHCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_HLRToShape::OutLineHCompound),
             R"#(None)#"  , py::arg("S"))
        .def("IsoLineHCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)() >(&HLRBRep_HLRToShape::IsoLineHCompound),
             R"#(None)#" )
        .def("IsoLineHCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_HLRToShape::IsoLineHCompound),
             R"#(None)#"  , py::arg("S"))
        .def("CompoundOfEdges",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const HLRBRep_TypeOfResultingEdge , const Standard_Boolean , const Standard_Boolean ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const HLRBRep_TypeOfResultingEdge , const Standard_Boolean , const Standard_Boolean ) >(&HLRBRep_HLRToShape::CompoundOfEdges),
             R"#(Returns compound of resulting edges of required type and visibility, taking into account the kind of space (2d or 3d))#"  , py::arg("type"),  py::arg("visible"),  py::arg("In3d"))
        .def("CompoundOfEdges",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & , const HLRBRep_TypeOfResultingEdge , const Standard_Boolean , const Standard_Boolean ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & , const HLRBRep_TypeOfResultingEdge , const Standard_Boolean , const Standard_Boolean ) >(&HLRBRep_HLRToShape::CompoundOfEdges),
             R"#(For specified shape returns compound of resulting edges of required type and visibility, taking into account the kind of space (2d or 3d))#"  , py::arg("S"),  py::arg("type"),  py::arg("visible"),  py::arg("In3d"))
        .def("VCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)() >(&HLRBRep_HLRToShape::VCompound),
             R"#(None)#" )
        .def("VCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_HLRToShape::VCompound),
             R"#(None)#"  , py::arg("S"))
        .def("Rg1LineVCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)() >(&HLRBRep_HLRToShape::Rg1LineVCompound),
             R"#(None)#" )
        .def("Rg1LineVCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_HLRToShape::Rg1LineVCompound),
             R"#(None)#"  , py::arg("S"))
        .def("RgNLineVCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)() >(&HLRBRep_HLRToShape::RgNLineVCompound),
             R"#(None)#" )
        .def("RgNLineVCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_HLRToShape::RgNLineVCompound),
             R"#(None)#"  , py::arg("S"))
        .def("OutLineVCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)() >(&HLRBRep_HLRToShape::OutLineVCompound),
             R"#(None)#" )
        .def("OutLineVCompound3d",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)() >(&HLRBRep_HLRToShape::OutLineVCompound3d),
             R"#(None)#" )
        .def("OutLineVCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_HLRToShape::OutLineVCompound),
             R"#(None)#"  , py::arg("S"))
        .def("IsoLineVCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)() >(&HLRBRep_HLRToShape::IsoLineVCompound),
             R"#(None)#" )
        .def("IsoLineVCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_HLRToShape::IsoLineVCompound),
             R"#(None)#"  , py::arg("S"))
        .def("HCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)() >(&HLRBRep_HLRToShape::HCompound),
             R"#(None)#" )
        .def("HCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_HLRToShape::HCompound),
             R"#(None)#"  , py::arg("S"))
        .def("Rg1LineHCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)() >(&HLRBRep_HLRToShape::Rg1LineHCompound),
             R"#(None)#" )
        .def("Rg1LineHCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_HLRToShape::Rg1LineHCompound),
             R"#(None)#"  , py::arg("S"))
        .def("RgNLineHCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)() >(&HLRBRep_HLRToShape::RgNLineHCompound),
             R"#(None)#" )
        .def("RgNLineHCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_HLRToShape::RgNLineHCompound),
             R"#(None)#"  , py::arg("S"))
        .def("OutLineHCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)() >(&HLRBRep_HLRToShape::OutLineHCompound),
             R"#(None)#" )
        .def("OutLineHCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_HLRToShape::OutLineHCompound),
             R"#(None)#"  , py::arg("S"))
        .def("IsoLineHCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)() >(&HLRBRep_HLRToShape::IsoLineHCompound),
             R"#(None)#" )
        .def("IsoLineHCompound",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_HLRToShape::IsoLineHCompound),
             R"#(None)#"  , py::arg("S"))
        .def("CompoundOfEdges",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const HLRBRep_TypeOfResultingEdge , const Standard_Boolean , const Standard_Boolean ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const HLRBRep_TypeOfResultingEdge , const Standard_Boolean , const Standard_Boolean ) >(&HLRBRep_HLRToShape::CompoundOfEdges),
             R"#(Returns compound of resulting edges of required type and visibility, taking into account the kind of space (2d or 3d))#"  , py::arg("type"),  py::arg("visible"),  py::arg("In3d"))
        .def("CompoundOfEdges",
             (TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & , const HLRBRep_TypeOfResultingEdge , const Standard_Boolean , const Standard_Boolean ) ) static_cast<TopoDS_Shape (HLRBRep_HLRToShape::*)( const TopoDS_Shape & , const HLRBRep_TypeOfResultingEdge , const Standard_Boolean , const Standard_Boolean ) >(&HLRBRep_HLRToShape::CompoundOfEdges),
             R"#(For specified shape returns compound of resulting edges of required type and visibility, taking into account the kind of space (2d or 3d))#"  , py::arg("S"),  py::arg("type"),  py::arg("visible"),  py::arg("In3d"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_Hider , shared_ptr<HLRBRep_Hider> >>(m.attr("HLRBRep_Hider"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_IntConicCurveOfCInter , shared_ptr<HLRBRep_IntConicCurveOfCInter> , IntRes2d_Intersection>>(m.attr("HLRBRep_IntConicCurveOfCInter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_InterCSurf , shared_ptr<HLRBRep_InterCSurf> , IntCurveSurface_Intersection>>(m.attr("HLRBRep_InterCSurf"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_InternalAlgo ,opencascade::handle<HLRBRep_InternalAlgo> , Standard_Transient>>(m.attr("HLRBRep_InternalAlgo"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (HLRBRep_InternalAlgo::*)() const) static_cast<const opencascade::handle<Standard_Type> & (HLRBRep_InternalAlgo::*)() const>(&HLRBRep_InternalAlgo::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&HLRBRep_InternalAlgo::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_Intersector , shared_ptr<HLRBRep_Intersector> >>(m.attr("HLRBRep_Intersector"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<HLRBRep_LineTool , shared_ptr<HLRBRep_LineTool>>(m,"HLRBRep_LineTool");

    static_cast<py::class_<HLRBRep_LineTool , shared_ptr<HLRBRep_LineTool> >>(m.attr("HLRBRep_LineTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FirstParameter_s",
                    (Standard_Real (*)( const gp_Lin & ) ) static_cast<Standard_Real (*)( const gp_Lin & ) >(&HLRBRep_LineTool::FirstParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("LastParameter_s",
                    (Standard_Real (*)( const gp_Lin & ) ) static_cast<Standard_Real (*)( const gp_Lin & ) >(&HLRBRep_LineTool::LastParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Continuity_s",
                    (GeomAbs_Shape (*)( const gp_Lin & ) ) static_cast<GeomAbs_Shape (*)( const gp_Lin & ) >(&HLRBRep_LineTool::Continuity),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbIntervals_s",
                    (Standard_Integer (*)( const gp_Lin & , const GeomAbs_Shape ) ) static_cast<Standard_Integer (*)( const gp_Lin & , const GeomAbs_Shape ) >(&HLRBRep_LineTool::NbIntervals),
                    R"#(If necessary, breaks the line in intervals of continuity <S>. And returns the number of intervals.)#"  , py::arg("C"),  py::arg("S"))
        .def_static("Intervals_s",
                    (void (*)( const gp_Lin & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) ) static_cast<void (*)( const gp_Lin & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) >(&HLRBRep_LineTool::Intervals),
                    R"#(Sets the current working interval.)#"  , py::arg("C"),  py::arg("T"),  py::arg("Sh"))
        .def_static("IntervalFirst_s",
                    (Standard_Real (*)( const gp_Lin & ) ) static_cast<Standard_Real (*)( const gp_Lin & ) >(&HLRBRep_LineTool::IntervalFirst),
                    R"#(Returns the first parameter of the current interval.)#"  , py::arg("C"))
        .def_static("IntervalLast_s",
                    (Standard_Real (*)( const gp_Lin & ) ) static_cast<Standard_Real (*)( const gp_Lin & ) >(&HLRBRep_LineTool::IntervalLast),
                    R"#(Returns the last parameter of the current interval.)#"  , py::arg("C"))
        .def_static("IntervalContinuity_s",
                    (GeomAbs_Shape (*)( const gp_Lin & ) ) static_cast<GeomAbs_Shape (*)( const gp_Lin & ) >(&HLRBRep_LineTool::IntervalContinuity),
                    R"#(None)#"  , py::arg("C"))
        .def_static("IsClosed_s",
                    (Standard_Boolean (*)( const gp_Lin & ) ) static_cast<Standard_Boolean (*)( const gp_Lin & ) >(&HLRBRep_LineTool::IsClosed),
                    R"#(None)#"  , py::arg("C"))
        .def_static("IsPeriodic_s",
                    (Standard_Boolean (*)( const gp_Lin & ) ) static_cast<Standard_Boolean (*)( const gp_Lin & ) >(&HLRBRep_LineTool::IsPeriodic),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Period_s",
                    (Standard_Real (*)( const gp_Lin & ) ) static_cast<Standard_Real (*)( const gp_Lin & ) >(&HLRBRep_LineTool::Period),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const gp_Lin & , const Standard_Real ) ) static_cast<gp_Pnt (*)( const gp_Lin & , const Standard_Real ) >(&HLRBRep_LineTool::Value),
                    R"#(Computes the point of parameter U on the line.)#"  , py::arg("C"),  py::arg("U"))
        .def_static("D0_s",
                    (void (*)( const gp_Lin & , const Standard_Real , gp_Pnt & ) ) static_cast<void (*)( const gp_Lin & , const Standard_Real , gp_Pnt & ) >(&HLRBRep_LineTool::D0),
                    R"#(Computes the point of parameter U on the line.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const gp_Lin & , const Standard_Real , gp_Pnt & , gp_Vec & ) ) static_cast<void (*)( const gp_Lin & , const Standard_Real , gp_Pnt & , gp_Vec & ) >(&HLRBRep_LineTool::D1),
                    R"#(Computes the point of parameter U on the line with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def_static("D2_s",
                    (void (*)( const gp_Lin & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const gp_Lin & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&HLRBRep_LineTool::D2),
                    R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D3_s",
                    (void (*)( const gp_Lin & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const gp_Lin & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&HLRBRep_LineTool::D3),
                    R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C3.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("DN_s",
                    (gp_Vec (*)( const gp_Lin & , const Standard_Real , const Standard_Integer ) ) static_cast<gp_Vec (*)( const gp_Lin & , const Standard_Real , const Standard_Integer ) >(&HLRBRep_LineTool::DN),
                    R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the current interval is not CN. Raised if N < 1.)#"  , py::arg("C"),  py::arg("U"),  py::arg("N"))
        .def_static("Resolution_s",
                    (Standard_Real (*)( const gp_Lin & , const Standard_Real ) ) static_cast<Standard_Real (*)( const gp_Lin & , const Standard_Real ) >(&HLRBRep_LineTool::Resolution),
                    R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("C"),  py::arg("R3d"))
        .def_static("GetType_s",
                    (GeomAbs_CurveType (*)( const gp_Lin & ) ) static_cast<GeomAbs_CurveType (*)( const gp_Lin & ) >(&HLRBRep_LineTool::GetType),
                    R"#(Returns the type of the line in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#"  , py::arg("C"))
        .def_static("Line_s",
                    (gp_Lin (*)( const gp_Lin & ) ) static_cast<gp_Lin (*)( const gp_Lin & ) >(&HLRBRep_LineTool::Line),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Circle_s",
                    (gp_Circ (*)( const gp_Lin & ) ) static_cast<gp_Circ (*)( const gp_Lin & ) >(&HLRBRep_LineTool::Circle),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Ellipse_s",
                    (gp_Elips (*)( const gp_Lin & ) ) static_cast<gp_Elips (*)( const gp_Lin & ) >(&HLRBRep_LineTool::Ellipse),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Hyperbola_s",
                    (gp_Hypr (*)( const gp_Lin & ) ) static_cast<gp_Hypr (*)( const gp_Lin & ) >(&HLRBRep_LineTool::Hyperbola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Parabola_s",
                    (gp_Parab (*)( const gp_Lin & ) ) static_cast<gp_Parab (*)( const gp_Lin & ) >(&HLRBRep_LineTool::Parabola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Bezier_s",
                    (opencascade::handle<Geom_BezierCurve> (*)( const gp_Lin & ) ) static_cast<opencascade::handle<Geom_BezierCurve> (*)( const gp_Lin & ) >(&HLRBRep_LineTool::Bezier),
                    R"#(None)#"  , py::arg("C"))
        .def_static("BSpline_s",
                    (opencascade::handle<Geom_BSplineCurve> (*)( const gp_Lin & ) ) static_cast<opencascade::handle<Geom_BSplineCurve> (*)( const gp_Lin & ) >(&HLRBRep_LineTool::BSpline),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Degree_s",
                    (Standard_Integer (*)( const gp_Lin & ) ) static_cast<Standard_Integer (*)( const gp_Lin & ) >(&HLRBRep_LineTool::Degree),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbPoles_s",
                    (Standard_Integer (*)( const gp_Lin & ) ) static_cast<Standard_Integer (*)( const gp_Lin & ) >(&HLRBRep_LineTool::NbPoles),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Poles_s",
                    (void (*)( const gp_Lin & , NCollection_Array1<gp_Pnt> & ) ) static_cast<void (*)( const gp_Lin & , NCollection_Array1<gp_Pnt> & ) >(&HLRBRep_LineTool::Poles),
                    R"#(None)#"  , py::arg("C"),  py::arg("TP"))
        .def_static("IsRational_s",
                    (Standard_Boolean (*)( const gp_Lin & ) ) static_cast<Standard_Boolean (*)( const gp_Lin & ) >(&HLRBRep_LineTool::IsRational),
                    R"#(None)#"  , py::arg("C"))
        .def_static("PolesAndWeights_s",
                    (void (*)( const gp_Lin & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<Standard_Real> & ) ) static_cast<void (*)( const gp_Lin & , NCollection_Array1<gp_Pnt> & , NCollection_Array1<Standard_Real> & ) >(&HLRBRep_LineTool::PolesAndWeights),
                    R"#(None)#"  , py::arg("C"),  py::arg("TP"),  py::arg("TW"))
        .def_static("NbKnots_s",
                    (Standard_Integer (*)( const gp_Lin & ) ) static_cast<Standard_Integer (*)( const gp_Lin & ) >(&HLRBRep_LineTool::NbKnots),
                    R"#(None)#"  , py::arg("C"))
        .def_static("KnotsAndMultiplicities_s",
                    (void (*)( const gp_Lin & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & ) ) static_cast<void (*)( const gp_Lin & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & ) >(&HLRBRep_LineTool::KnotsAndMultiplicities),
                    R"#(None)#"  , py::arg("C"),  py::arg("TK"),  py::arg("TM"))
        .def_static("NbSamples_s",
                    (Standard_Integer (*)( const gp_Lin & , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Integer (*)( const gp_Lin & , const Standard_Real , const Standard_Real ) >(&HLRBRep_LineTool::NbSamples),
                    R"#(None)#"  , py::arg("C"),  py::arg("U0"),  py::arg("U1"))
        .def_static("SamplePars_s",
                    (void (*)( const gp_Lin & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Integer , opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (*)( const gp_Lin & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Integer , opencascade::handle<TColStd_HArray1OfReal> & ) >(&HLRBRep_LineTool::SamplePars),
                    R"#(None)#"  , py::arg("C"),  py::arg("U0"),  py::arg("U1"),  py::arg("Defl"),  py::arg("NbMin"),  py::arg("Pars"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter , shared_ptr<HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter> , math_FunctionWithDerivative>>(m.attr("HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter::*)( const Standard_Real , Standard_Real & ) >(&HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter::Value),
             R"#(Computes the value of the signed distance between the implicit curve and the point at parameter Param on the parametrised curve.)#"  , py::arg("Param"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter::*)( const Standard_Real , Standard_Real & ) >(&HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter::Derivative),
             R"#(Computes the derivative of the previous function at parameter Param.)#"  , py::arg("Param"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter::Values),
             R"#(Computes the value and the derivative of the function.)#"  , py::arg("Param"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter , shared_ptr<HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter> , math_FunctionWithDerivative>>(m.attr("HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter::*)( const Standard_Real , Standard_Real & ) >(&HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter::Value),
             R"#(Calculation of F(U).)#"  , py::arg("U"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter::*)( const Standard_Real , Standard_Real & ) >(&HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter::Derivative),
             R"#(Calculation of F'(U).)#"  , py::arg("U"),  py::arg("DF"))
        .def("Values",
             (Standard_Boolean (HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter::Values),
             R"#(Calculation of F(U) and F'(U).)#"  , py::arg("U"),  py::arg("F"),  py::arg("DF"))
        .def("GetStateNumber",
             (Standard_Integer (HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter::*)() ) static_cast<Standard_Integer (HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter::*)() >(&HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter::GetStateNumber),
             R"#(Save the found extremum.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_PolyAlgo ,opencascade::handle<HLRBRep_PolyAlgo> , Standard_Transient>>(m.attr("HLRBRep_PolyAlgo"))
    // constructors
    // custom constructors
    // methods
        .def("NbShapes",
             (Standard_Integer (HLRBRep_PolyAlgo::*)() const) static_cast<Standard_Integer (HLRBRep_PolyAlgo::*)() const>(&HLRBRep_PolyAlgo::NbShapes),
             R"#(None)#" )
        .def("Load",
             (void (HLRBRep_PolyAlgo::*)( const TopoDS_Shape & ) ) static_cast<void (HLRBRep_PolyAlgo::*)( const TopoDS_Shape & ) >(&HLRBRep_PolyAlgo::Load),
             R"#(Loads the shape S into this framework. Warning S must have already been triangulated.)#"  , py::arg("S"))
        .def("Projector",
             (const HLRAlgo_Projector & (HLRBRep_PolyAlgo::*)() const) static_cast<const HLRAlgo_Projector & (HLRBRep_PolyAlgo::*)() const>(&HLRBRep_PolyAlgo::Projector),
             R"#(Sets the parameters of the view for this framework. These parameters are defined by an HLRAlgo_Projector object, which is returned by the Projector function on a Prs3d_Projector object.)#" )
        .def("Projector",
             (void (HLRBRep_PolyAlgo::*)( const HLRAlgo_Projector & ) ) static_cast<void (HLRBRep_PolyAlgo::*)( const HLRAlgo_Projector & ) >(&HLRBRep_PolyAlgo::Projector),
             R"#(None)#"  , py::arg("P"))
        .def("Angle",
             (Standard_Real (HLRBRep_PolyAlgo::*)() const) static_cast<Standard_Real (HLRBRep_PolyAlgo::*)() const>(&HLRBRep_PolyAlgo::Angle),
             R"#(None)#" )
        .def("Angle",
             (void (HLRBRep_PolyAlgo::*)( const Standard_Real ) ) static_cast<void (HLRBRep_PolyAlgo::*)( const Standard_Real ) >(&HLRBRep_PolyAlgo::Angle),
             R"#(None)#"  , py::arg("Ang"))
        .def("TolAngular",
             (Standard_Real (HLRBRep_PolyAlgo::*)() const) static_cast<Standard_Real (HLRBRep_PolyAlgo::*)() const>(&HLRBRep_PolyAlgo::TolAngular),
             R"#(None)#" )
        .def("TolAngular",
             (void (HLRBRep_PolyAlgo::*)( const Standard_Real ) ) static_cast<void (HLRBRep_PolyAlgo::*)( const Standard_Real ) >(&HLRBRep_PolyAlgo::TolAngular),
             R"#(None)#"  , py::arg("Tol"))
        .def("TolCoef",
             (Standard_Real (HLRBRep_PolyAlgo::*)() const) static_cast<Standard_Real (HLRBRep_PolyAlgo::*)() const>(&HLRBRep_PolyAlgo::TolCoef),
             R"#(None)#" )
        .def("TolCoef",
             (void (HLRBRep_PolyAlgo::*)( const Standard_Real ) ) static_cast<void (HLRBRep_PolyAlgo::*)( const Standard_Real ) >(&HLRBRep_PolyAlgo::TolCoef),
             R"#(None)#"  , py::arg("Tol"))
        .def("InitHide",
             (void (HLRBRep_PolyAlgo::*)() ) static_cast<void (HLRBRep_PolyAlgo::*)() >(&HLRBRep_PolyAlgo::InitHide),
             R"#(None)#" )
        .def("MoreHide",
             (Standard_Boolean (HLRBRep_PolyAlgo::*)() const) static_cast<Standard_Boolean (HLRBRep_PolyAlgo::*)() const>(&HLRBRep_PolyAlgo::MoreHide),
             R"#(None)#" )
        .def("NextHide",
             (void (HLRBRep_PolyAlgo::*)() ) static_cast<void (HLRBRep_PolyAlgo::*)() >(&HLRBRep_PolyAlgo::NextHide),
             R"#(None)#" )
        .def("InitShow",
             (void (HLRBRep_PolyAlgo::*)() ) static_cast<void (HLRBRep_PolyAlgo::*)() >(&HLRBRep_PolyAlgo::InitShow),
             R"#(None)#" )
        .def("MoreShow",
             (Standard_Boolean (HLRBRep_PolyAlgo::*)() const) static_cast<Standard_Boolean (HLRBRep_PolyAlgo::*)() const>(&HLRBRep_PolyAlgo::MoreShow),
             R"#(None)#" )
        .def("NextShow",
             (void (HLRBRep_PolyAlgo::*)() ) static_cast<void (HLRBRep_PolyAlgo::*)() >(&HLRBRep_PolyAlgo::NextShow),
             R"#(None)#" )
        .def("Debug",
             (Standard_Boolean (HLRBRep_PolyAlgo::*)() const) static_cast<Standard_Boolean (HLRBRep_PolyAlgo::*)() const>(&HLRBRep_PolyAlgo::Debug),
             R"#(None)#" )
        .def("Debug",
             (void (HLRBRep_PolyAlgo::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_PolyAlgo::*)( const Standard_Boolean ) >(&HLRBRep_PolyAlgo::Debug),
             R"#(None)#"  , py::arg("B"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (HLRBRep_PolyAlgo::*)() const) static_cast<const opencascade::handle<Standard_Type> & (HLRBRep_PolyAlgo::*)() const>(&HLRBRep_PolyAlgo::DynamicType),
             R"#(None)#" )
        .def("NbShapes",
             (Standard_Integer (HLRBRep_PolyAlgo::*)() const) static_cast<Standard_Integer (HLRBRep_PolyAlgo::*)() const>(&HLRBRep_PolyAlgo::NbShapes),
             R"#(None)#" )
        .def("Load",
             (void (HLRBRep_PolyAlgo::*)( const TopoDS_Shape & ) ) static_cast<void (HLRBRep_PolyAlgo::*)( const TopoDS_Shape & ) >(&HLRBRep_PolyAlgo::Load),
             R"#(Loads the shape S into this framework. Warning S must have already been triangulated.)#"  , py::arg("S"))
        .def("Projector",
             (const HLRAlgo_Projector & (HLRBRep_PolyAlgo::*)() const) static_cast<const HLRAlgo_Projector & (HLRBRep_PolyAlgo::*)() const>(&HLRBRep_PolyAlgo::Projector),
             R"#(Sets the parameters of the view for this framework. These parameters are defined by an HLRAlgo_Projector object, which is returned by the Projector function on a Prs3d_Projector object.)#" )
        .def("Projector",
             (void (HLRBRep_PolyAlgo::*)( const HLRAlgo_Projector & ) ) static_cast<void (HLRBRep_PolyAlgo::*)( const HLRAlgo_Projector & ) >(&HLRBRep_PolyAlgo::Projector),
             R"#(None)#"  , py::arg("P"))
        .def("Angle",
             (Standard_Real (HLRBRep_PolyAlgo::*)() const) static_cast<Standard_Real (HLRBRep_PolyAlgo::*)() const>(&HLRBRep_PolyAlgo::Angle),
             R"#(None)#" )
        .def("Angle",
             (void (HLRBRep_PolyAlgo::*)( const Standard_Real ) ) static_cast<void (HLRBRep_PolyAlgo::*)( const Standard_Real ) >(&HLRBRep_PolyAlgo::Angle),
             R"#(None)#"  , py::arg("Ang"))
        .def("TolAngular",
             (Standard_Real (HLRBRep_PolyAlgo::*)() const) static_cast<Standard_Real (HLRBRep_PolyAlgo::*)() const>(&HLRBRep_PolyAlgo::TolAngular),
             R"#(None)#" )
        .def("TolAngular",
             (void (HLRBRep_PolyAlgo::*)( const Standard_Real ) ) static_cast<void (HLRBRep_PolyAlgo::*)( const Standard_Real ) >(&HLRBRep_PolyAlgo::TolAngular),
             R"#(None)#"  , py::arg("Tol"))
        .def("TolCoef",
             (Standard_Real (HLRBRep_PolyAlgo::*)() const) static_cast<Standard_Real (HLRBRep_PolyAlgo::*)() const>(&HLRBRep_PolyAlgo::TolCoef),
             R"#(None)#" )
        .def("TolCoef",
             (void (HLRBRep_PolyAlgo::*)( const Standard_Real ) ) static_cast<void (HLRBRep_PolyAlgo::*)( const Standard_Real ) >(&HLRBRep_PolyAlgo::TolCoef),
             R"#(None)#"  , py::arg("Tol"))
        .def("InitHide",
             (void (HLRBRep_PolyAlgo::*)() ) static_cast<void (HLRBRep_PolyAlgo::*)() >(&HLRBRep_PolyAlgo::InitHide),
             R"#(None)#" )
        .def("MoreHide",
             (Standard_Boolean (HLRBRep_PolyAlgo::*)() const) static_cast<Standard_Boolean (HLRBRep_PolyAlgo::*)() const>(&HLRBRep_PolyAlgo::MoreHide),
             R"#(None)#" )
        .def("NextHide",
             (void (HLRBRep_PolyAlgo::*)() ) static_cast<void (HLRBRep_PolyAlgo::*)() >(&HLRBRep_PolyAlgo::NextHide),
             R"#(None)#" )
        .def("InitShow",
             (void (HLRBRep_PolyAlgo::*)() ) static_cast<void (HLRBRep_PolyAlgo::*)() >(&HLRBRep_PolyAlgo::InitShow),
             R"#(None)#" )
        .def("MoreShow",
             (Standard_Boolean (HLRBRep_PolyAlgo::*)() const) static_cast<Standard_Boolean (HLRBRep_PolyAlgo::*)() const>(&HLRBRep_PolyAlgo::MoreShow),
             R"#(None)#" )
        .def("NextShow",
             (void (HLRBRep_PolyAlgo::*)() ) static_cast<void (HLRBRep_PolyAlgo::*)() >(&HLRBRep_PolyAlgo::NextShow),
             R"#(None)#" )
        .def("Debug",
             (Standard_Boolean (HLRBRep_PolyAlgo::*)() const) static_cast<Standard_Boolean (HLRBRep_PolyAlgo::*)() const>(&HLRBRep_PolyAlgo::Debug),
             R"#(None)#" )
        .def("Debug",
             (void (HLRBRep_PolyAlgo::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_PolyAlgo::*)( const Standard_Boolean ) >(&HLRBRep_PolyAlgo::Debug),
             R"#(None)#"  , py::arg("B"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&HLRBRep_PolyAlgo::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_PolyHLRToShape , shared_ptr<HLRBRep_PolyHLRToShape> >>(m.attr("HLRBRep_PolyHLRToShape"))
    // constructors
    // custom constructors
    // methods
        .def("Show",
             (void (HLRBRep_PolyHLRToShape::*)() ) static_cast<void (HLRBRep_PolyHLRToShape::*)() >(&HLRBRep_PolyHLRToShape::Show),
             R"#(None)#" )
        .def("Hide",
             (void (HLRBRep_PolyHLRToShape::*)() ) static_cast<void (HLRBRep_PolyHLRToShape::*)() >(&HLRBRep_PolyHLRToShape::Hide),
             R"#(None)#" )
        .def("VCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() >(&HLRBRep_PolyHLRToShape::VCompound),
             R"#(None)#" )
        .def("VCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_PolyHLRToShape::VCompound),
             R"#(None)#"  , py::arg("S"))
        .def("Rg1LineVCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() >(&HLRBRep_PolyHLRToShape::Rg1LineVCompound),
             R"#(Sets the extraction filter for visible smooth edges.)#" )
        .def("Rg1LineVCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_PolyHLRToShape::Rg1LineVCompound),
             R"#(None)#"  , py::arg("S"))
        .def("RgNLineVCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() >(&HLRBRep_PolyHLRToShape::RgNLineVCompound),
             R"#(Sets the extraction filter for visible sewn edges.)#" )
        .def("RgNLineVCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_PolyHLRToShape::RgNLineVCompound),
             R"#(None)#"  , py::arg("S"))
        .def("OutLineVCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() >(&HLRBRep_PolyHLRToShape::OutLineVCompound),
             R"#(None)#" )
        .def("OutLineVCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_PolyHLRToShape::OutLineVCompound),
             R"#(Sets the extraction filter for visible outlines.)#"  , py::arg("S"))
        .def("HCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() >(&HLRBRep_PolyHLRToShape::HCompound),
             R"#(None)#" )
        .def("HCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_PolyHLRToShape::HCompound),
             R"#(None)#"  , py::arg("S"))
        .def("Rg1LineHCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() >(&HLRBRep_PolyHLRToShape::Rg1LineHCompound),
             R"#(None)#" )
        .def("Rg1LineHCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_PolyHLRToShape::Rg1LineHCompound),
             R"#(Sets the extraction filter for hidden smooth edges.)#"  , py::arg("S"))
        .def("RgNLineHCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() >(&HLRBRep_PolyHLRToShape::RgNLineHCompound),
             R"#(None)#" )
        .def("RgNLineHCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_PolyHLRToShape::RgNLineHCompound),
             R"#(Sets the extraction filter for hidden sewn edges.)#"  , py::arg("S"))
        .def("OutLineHCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() >(&HLRBRep_PolyHLRToShape::OutLineHCompound),
             R"#(None)#" )
        .def("OutLineHCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_PolyHLRToShape::OutLineHCompound),
             R"#(Sets the extraction filter for hidden outlines. Hidden outlines occur, for instance, in tori. In this case, the inner outlines of the torus seen on its side are hidden.)#"  , py::arg("S"))
        .def("Show",
             (void (HLRBRep_PolyHLRToShape::*)() ) static_cast<void (HLRBRep_PolyHLRToShape::*)() >(&HLRBRep_PolyHLRToShape::Show),
             R"#(None)#" )
        .def("Hide",
             (void (HLRBRep_PolyHLRToShape::*)() ) static_cast<void (HLRBRep_PolyHLRToShape::*)() >(&HLRBRep_PolyHLRToShape::Hide),
             R"#(None)#" )
        .def("VCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() >(&HLRBRep_PolyHLRToShape::VCompound),
             R"#(None)#" )
        .def("VCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_PolyHLRToShape::VCompound),
             R"#(None)#"  , py::arg("S"))
        .def("Rg1LineVCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() >(&HLRBRep_PolyHLRToShape::Rg1LineVCompound),
             R"#(Sets the extraction filter for visible smooth edges.)#" )
        .def("Rg1LineVCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_PolyHLRToShape::Rg1LineVCompound),
             R"#(None)#"  , py::arg("S"))
        .def("RgNLineVCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() >(&HLRBRep_PolyHLRToShape::RgNLineVCompound),
             R"#(Sets the extraction filter for visible sewn edges.)#" )
        .def("RgNLineVCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_PolyHLRToShape::RgNLineVCompound),
             R"#(None)#"  , py::arg("S"))
        .def("OutLineVCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() >(&HLRBRep_PolyHLRToShape::OutLineVCompound),
             R"#(None)#" )
        .def("OutLineVCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_PolyHLRToShape::OutLineVCompound),
             R"#(Sets the extraction filter for visible outlines.)#"  , py::arg("S"))
        .def("HCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() >(&HLRBRep_PolyHLRToShape::HCompound),
             R"#(None)#" )
        .def("HCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_PolyHLRToShape::HCompound),
             R"#(None)#"  , py::arg("S"))
        .def("Rg1LineHCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() >(&HLRBRep_PolyHLRToShape::Rg1LineHCompound),
             R"#(None)#" )
        .def("Rg1LineHCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_PolyHLRToShape::Rg1LineHCompound),
             R"#(Sets the extraction filter for hidden smooth edges.)#"  , py::arg("S"))
        .def("RgNLineHCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() >(&HLRBRep_PolyHLRToShape::RgNLineHCompound),
             R"#(None)#" )
        .def("RgNLineHCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_PolyHLRToShape::RgNLineHCompound),
             R"#(Sets the extraction filter for hidden sewn edges.)#"  , py::arg("S"))
        .def("OutLineHCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)() >(&HLRBRep_PolyHLRToShape::OutLineHCompound),
             R"#(None)#" )
        .def("OutLineHCompound",
             (TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (HLRBRep_PolyHLRToShape::*)( const TopoDS_Shape & ) >(&HLRBRep_PolyHLRToShape::OutLineHCompound),
             R"#(Sets the extraction filter for hidden outlines. Hidden outlines occur, for instance, in tori. In this case, the inner outlines of the torus seen on its side are hidden.)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_SLProps , shared_ptr<HLRBRep_SLProps> >>(m.attr("HLRBRep_SLProps"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<HLRBRep_SLPropsATool , shared_ptr<HLRBRep_SLPropsATool>>(m,"HLRBRep_SLPropsATool");

    static_cast<py::class_<HLRBRep_SLPropsATool , shared_ptr<HLRBRep_SLPropsATool> >>(m.attr("HLRBRep_SLPropsATool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Value_s",
                    (void (*)( const Standard_Address , const Standard_Real , const Standard_Real , gp_Pnt & ) ) static_cast<void (*)( const Standard_Address , const Standard_Real , const Standard_Real , gp_Pnt & ) >(&HLRBRep_SLPropsATool::Value),
                    R"#(Computes the point <P> of parameter <U> and <V> on the Surface <A>.)#"  , py::arg("A"),  py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const Standard_Address , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Address , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&HLRBRep_SLPropsATool::D1),
                    R"#(Computes the point <P> and first derivative <D1*> of parameter <U> and <V> on the Surface <A>.)#"  , py::arg("A"),  py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def_static("D2_s",
                    (void (*)( const Standard_Address , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Address , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&HLRBRep_SLPropsATool::D2),
                    R"#(Computes the point <P>, the first derivative <D1*> and second derivative <D2*> of parameter <U> and <V> on the Surface <A>.)#"  , py::arg("A"),  py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("DUV"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Standard_Address , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ) ) static_cast<gp_Vec (*)( const Standard_Address , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ) >(&HLRBRep_SLPropsATool::DN),
                    R"#(None)#"  , py::arg("A"),  py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def_static("Continuity_s",
                    (Standard_Integer (*)( const Standard_Address ) ) static_cast<Standard_Integer (*)( const Standard_Address ) >(&HLRBRep_SLPropsATool::Continuity),
                    R"#(returns the order of continuity of the Surface <A>. returns 1 : first derivative only is computable returns 2 : first and second derivative only are computable.)#"  , py::arg("A"))
    // static methods using call by reference i.s.o. return
        .def_static("Bounds_s",
                    []( const Standard_Address A ){ Standard_Real  U1; Standard_Real  V1; Standard_Real  U2; Standard_Real  V2; HLRBRep_SLPropsATool::Bounds(A,U1,V1,U2,V2); return std::make_tuple(U1,V1,U2,V2); },
                    R"#(returns the bounds of the Surface.)#"  , py::arg("A"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_ShapeBounds , shared_ptr<HLRBRep_ShapeBounds> >>(m.attr("HLRBRep_ShapeBounds"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Shape",
             (void (HLRBRep_ShapeBounds::*)( const opencascade::handle<HLRTopoBRep_OutLiner> & ) ) static_cast<void (HLRBRep_ShapeBounds::*)( const opencascade::handle<HLRTopoBRep_OutLiner> & ) >(&HLRBRep_ShapeBounds::Shape),
             R"#(None)#"  , py::arg("S"))
        .def("Shape",
             (const opencascade::handle<HLRTopoBRep_OutLiner> & (HLRBRep_ShapeBounds::*)() const) static_cast<const opencascade::handle<HLRTopoBRep_OutLiner> & (HLRBRep_ShapeBounds::*)() const>(&HLRBRep_ShapeBounds::Shape),
             R"#(None)#" )
        .def("ShapeData",
             (void (HLRBRep_ShapeBounds::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (HLRBRep_ShapeBounds::*)( const opencascade::handle<Standard_Transient> & ) >(&HLRBRep_ShapeBounds::ShapeData),
             R"#(None)#"  , py::arg("SD"))
        .def("ShapeData",
             (const opencascade::handle<Standard_Transient> & (HLRBRep_ShapeBounds::*)() const) static_cast<const opencascade::handle<Standard_Transient> & (HLRBRep_ShapeBounds::*)() const>(&HLRBRep_ShapeBounds::ShapeData),
             R"#(None)#" )
        .def("NbOfIso",
             (void (HLRBRep_ShapeBounds::*)( const Standard_Integer ) ) static_cast<void (HLRBRep_ShapeBounds::*)( const Standard_Integer ) >(&HLRBRep_ShapeBounds::NbOfIso),
             R"#(None)#"  , py::arg("nbIso"))
        .def("NbOfIso",
             (Standard_Integer (HLRBRep_ShapeBounds::*)() const) static_cast<Standard_Integer (HLRBRep_ShapeBounds::*)() const>(&HLRBRep_ShapeBounds::NbOfIso),
             R"#(None)#" )
        .def("UpdateMinMax",
             (void (HLRBRep_ShapeBounds::*)( const HLRAlgo_EdgesBlock::MinMaxIndices & ) ) static_cast<void (HLRBRep_ShapeBounds::*)( const HLRAlgo_EdgesBlock::MinMaxIndices & ) >(&HLRBRep_ShapeBounds::UpdateMinMax),
             R"#(None)#"  , py::arg("theTotMinMax"))
        .def("MinMax",
             (HLRAlgo_EdgesBlock::MinMaxIndices & (HLRBRep_ShapeBounds::*)() ) static_cast<HLRAlgo_EdgesBlock::MinMaxIndices & (HLRBRep_ShapeBounds::*)() >(&HLRBRep_ShapeBounds::MinMax),
             R"#(None)#" )
        .def("Shape",
             (void (HLRBRep_ShapeBounds::*)( const opencascade::handle<HLRTopoBRep_OutLiner> & ) ) static_cast<void (HLRBRep_ShapeBounds::*)( const opencascade::handle<HLRTopoBRep_OutLiner> & ) >(&HLRBRep_ShapeBounds::Shape),
             R"#(None)#"  , py::arg("S"))
        .def("Shape",
             (const opencascade::handle<HLRTopoBRep_OutLiner> & (HLRBRep_ShapeBounds::*)() const) static_cast<const opencascade::handle<HLRTopoBRep_OutLiner> & (HLRBRep_ShapeBounds::*)() const>(&HLRBRep_ShapeBounds::Shape),
             R"#(None)#" )
        .def("ShapeData",
             (void (HLRBRep_ShapeBounds::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (HLRBRep_ShapeBounds::*)( const opencascade::handle<Standard_Transient> & ) >(&HLRBRep_ShapeBounds::ShapeData),
             R"#(None)#"  , py::arg("SD"))
        .def("ShapeData",
             (const opencascade::handle<Standard_Transient> & (HLRBRep_ShapeBounds::*)() const) static_cast<const opencascade::handle<Standard_Transient> & (HLRBRep_ShapeBounds::*)() const>(&HLRBRep_ShapeBounds::ShapeData),
             R"#(None)#" )
        .def("NbOfIso",
             (void (HLRBRep_ShapeBounds::*)( const Standard_Integer ) ) static_cast<void (HLRBRep_ShapeBounds::*)( const Standard_Integer ) >(&HLRBRep_ShapeBounds::NbOfIso),
             R"#(None)#"  , py::arg("nbIso"))
        .def("NbOfIso",
             (Standard_Integer (HLRBRep_ShapeBounds::*)() const) static_cast<Standard_Integer (HLRBRep_ShapeBounds::*)() const>(&HLRBRep_ShapeBounds::NbOfIso),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<HLRBRep_ShapeToHLR , shared_ptr<HLRBRep_ShapeToHLR>>(m,"HLRBRep_ShapeToHLR");

    static_cast<py::class_<HLRBRep_ShapeToHLR , shared_ptr<HLRBRep_ShapeToHLR> >>(m.attr("HLRBRep_ShapeToHLR"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_Surface , shared_ptr<HLRBRep_Surface> >>(m.attr("HLRBRep_Surface"))
    // constructors
    // custom constructors
    // methods
        .def("Projector",
             (void (HLRBRep_Surface::*)( const HLRAlgo_Projector * ) ) static_cast<void (HLRBRep_Surface::*)( const HLRAlgo_Projector * ) >(&HLRBRep_Surface::Projector),
             R"#(None)#"  , py::arg("Proj"))
        .def("Surface",
             (BRepAdaptor_Surface & (HLRBRep_Surface::*)() ) static_cast<BRepAdaptor_Surface & (HLRBRep_Surface::*)() >(&HLRBRep_Surface::Surface),
             R"#(Returns the 3D Surface.)#" )
        .def("FirstUParameter",
             (Standard_Real (HLRBRep_Surface::*)() const) static_cast<Standard_Real (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::FirstUParameter),
             R"#(None)#" )
        .def("LastUParameter",
             (Standard_Real (HLRBRep_Surface::*)() const) static_cast<Standard_Real (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::LastUParameter),
             R"#(None)#" )
        .def("FirstVParameter",
             (Standard_Real (HLRBRep_Surface::*)() const) static_cast<Standard_Real (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::FirstVParameter),
             R"#(None)#" )
        .def("LastVParameter",
             (Standard_Real (HLRBRep_Surface::*)() const) static_cast<Standard_Real (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::LastVParameter),
             R"#(None)#" )
        .def("UContinuity",
             (GeomAbs_Shape (HLRBRep_Surface::*)() const) static_cast<GeomAbs_Shape (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::UContinuity),
             R"#(None)#" )
        .def("VContinuity",
             (GeomAbs_Shape (HLRBRep_Surface::*)() const) static_cast<GeomAbs_Shape (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::VContinuity),
             R"#(None)#" )
        .def("NbUIntervals",
             (Standard_Integer (HLRBRep_Surface::*)( const GeomAbs_Shape ) ) static_cast<Standard_Integer (HLRBRep_Surface::*)( const GeomAbs_Shape ) >(&HLRBRep_Surface::NbUIntervals),
             R"#(If necessary, breaks the surface in U intervals of continuity <S>. And returns the number of intervals.)#"  , py::arg("S"))
        .def("NbVIntervals",
             (Standard_Integer (HLRBRep_Surface::*)( const GeomAbs_Shape ) ) static_cast<Standard_Integer (HLRBRep_Surface::*)( const GeomAbs_Shape ) >(&HLRBRep_Surface::NbVIntervals),
             R"#(If necessary, breaks the surface in V intervals of continuity <S>. And returns the number of intervals.)#"  , py::arg("S"))
        .def("IsUClosed",
             (Standard_Boolean (HLRBRep_Surface::*)() const) static_cast<Standard_Boolean (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::IsUClosed),
             R"#(None)#" )
        .def("IsVClosed",
             (Standard_Boolean (HLRBRep_Surface::*)() const) static_cast<Standard_Boolean (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::IsVClosed),
             R"#(None)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (HLRBRep_Surface::*)() const) static_cast<Standard_Boolean (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::IsUPeriodic),
             R"#(None)#" )
        .def("UPeriod",
             (Standard_Real (HLRBRep_Surface::*)() const) static_cast<Standard_Real (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::UPeriod),
             R"#(None)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (HLRBRep_Surface::*)() const) static_cast<Standard_Boolean (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::IsVPeriodic),
             R"#(None)#" )
        .def("VPeriod",
             (Standard_Real (HLRBRep_Surface::*)() const) static_cast<Standard_Real (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::VPeriod),
             R"#(None)#" )
        .def("D0",
             (void (HLRBRep_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & ) const) static_cast<void (HLRBRep_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & ) const>(&HLRBRep_Surface::D0),
             R"#(Computes the point of parameters U,V on the surface.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("D1",
             (void (HLRBRep_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const) static_cast<void (HLRBRep_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const>(&HLRBRep_Surface::D1),
             R"#(Computes the point and the first derivatives on the surface. Raised if the continuity of the current intervals is not C1.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("D2",
             (void (HLRBRep_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const) static_cast<void (HLRBRep_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const>(&HLRBRep_Surface::D2),
             R"#(Computes the point, the first and second derivatives on the surface. Raised if the continuity of the current intervals is not C2.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("D3",
             (void (HLRBRep_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const) static_cast<void (HLRBRep_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const>(&HLRBRep_Surface::D3),
             R"#(Computes the point, the first, second and third derivatives on the surface. Raised if the continuity of the current intervals is not C3.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("DN",
             (gp_Vec (HLRBRep_Surface::*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ) const) static_cast<gp_Vec (HLRBRep_Surface::*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ) const>(&HLRBRep_Surface::DN),
             R"#(Computes the derivative of order Nu in the direction U and Nv in the direction V at the point P(U, V). Raised if the current U interval is not not CNu and the current V interval is not CNv. Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("GetType",
             (GeomAbs_SurfaceType (HLRBRep_Surface::*)() const) static_cast<GeomAbs_SurfaceType (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::GetType),
             R"#(Returns the type of the surface : Plane, Cylinder, Cone, Sphere, Torus, BezierSurface, BSplineSurface, SurfaceOfRevolution, SurfaceOfExtrusion, OtherSurface)#" )
        .def("Cylinder",
             (gp_Cylinder (HLRBRep_Surface::*)() const) static_cast<gp_Cylinder (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::Cylinder),
             R"#(None)#" )
        .def("Cone",
             (gp_Cone (HLRBRep_Surface::*)() const) static_cast<gp_Cone (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::Cone),
             R"#(None)#" )
        .def("Sphere",
             (gp_Sphere (HLRBRep_Surface::*)() const) static_cast<gp_Sphere (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::Sphere),
             R"#(None)#" )
        .def("Torus",
             (gp_Torus (HLRBRep_Surface::*)() const) static_cast<gp_Torus (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::Torus),
             R"#(None)#" )
        .def("UDegree",
             (Standard_Integer (HLRBRep_Surface::*)() const) static_cast<Standard_Integer (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::UDegree),
             R"#(None)#" )
        .def("NbUPoles",
             (Standard_Integer (HLRBRep_Surface::*)() const) static_cast<Standard_Integer (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::NbUPoles),
             R"#(None)#" )
        .def("VDegree",
             (Standard_Integer (HLRBRep_Surface::*)() const) static_cast<Standard_Integer (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::VDegree),
             R"#(None)#" )
        .def("NbVPoles",
             (Standard_Integer (HLRBRep_Surface::*)() const) static_cast<Standard_Integer (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::NbVPoles),
             R"#(None)#" )
        .def("NbUKnots",
             (Standard_Integer (HLRBRep_Surface::*)() const) static_cast<Standard_Integer (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::NbUKnots),
             R"#(None)#" )
        .def("NbVKnots",
             (Standard_Integer (HLRBRep_Surface::*)() const) static_cast<Standard_Integer (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::NbVKnots),
             R"#(None)#" )
        .def("Axis",
             (gp_Ax1 (HLRBRep_Surface::*)() const) static_cast<gp_Ax1 (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::Axis),
             R"#(None)#" )
        .def("Surface",
             (BRepAdaptor_Surface & (HLRBRep_Surface::*)() ) static_cast<BRepAdaptor_Surface & (HLRBRep_Surface::*)() >(&HLRBRep_Surface::Surface),
             R"#(Returns the 3D Surface.)#" )
        .def("FirstUParameter",
             (Standard_Real (HLRBRep_Surface::*)() const) static_cast<Standard_Real (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::FirstUParameter),
             R"#(None)#" )
        .def("LastUParameter",
             (Standard_Real (HLRBRep_Surface::*)() const) static_cast<Standard_Real (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::LastUParameter),
             R"#(None)#" )
        .def("FirstVParameter",
             (Standard_Real (HLRBRep_Surface::*)() const) static_cast<Standard_Real (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::FirstVParameter),
             R"#(None)#" )
        .def("LastVParameter",
             (Standard_Real (HLRBRep_Surface::*)() const) static_cast<Standard_Real (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::LastVParameter),
             R"#(None)#" )
        .def("UContinuity",
             (GeomAbs_Shape (HLRBRep_Surface::*)() const) static_cast<GeomAbs_Shape (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::UContinuity),
             R"#(None)#" )
        .def("VContinuity",
             (GeomAbs_Shape (HLRBRep_Surface::*)() const) static_cast<GeomAbs_Shape (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::VContinuity),
             R"#(None)#" )
        .def("NbUIntervals",
             (Standard_Integer (HLRBRep_Surface::*)( const GeomAbs_Shape ) ) static_cast<Standard_Integer (HLRBRep_Surface::*)( const GeomAbs_Shape ) >(&HLRBRep_Surface::NbUIntervals),
             R"#(If necessary, breaks the surface in U intervals of continuity <S>. And returns the number of intervals.)#"  , py::arg("S"))
        .def("NbVIntervals",
             (Standard_Integer (HLRBRep_Surface::*)( const GeomAbs_Shape ) ) static_cast<Standard_Integer (HLRBRep_Surface::*)( const GeomAbs_Shape ) >(&HLRBRep_Surface::NbVIntervals),
             R"#(If necessary, breaks the surface in V intervals of continuity <S>. And returns the number of intervals.)#"  , py::arg("S"))
        .def("IsUClosed",
             (Standard_Boolean (HLRBRep_Surface::*)() const) static_cast<Standard_Boolean (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::IsUClosed),
             R"#(None)#" )
        .def("IsVClosed",
             (Standard_Boolean (HLRBRep_Surface::*)() const) static_cast<Standard_Boolean (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::IsVClosed),
             R"#(None)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (HLRBRep_Surface::*)() const) static_cast<Standard_Boolean (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::IsUPeriodic),
             R"#(None)#" )
        .def("UPeriod",
             (Standard_Real (HLRBRep_Surface::*)() const) static_cast<Standard_Real (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::UPeriod),
             R"#(None)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (HLRBRep_Surface::*)() const) static_cast<Standard_Boolean (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::IsVPeriodic),
             R"#(None)#" )
        .def("VPeriod",
             (Standard_Real (HLRBRep_Surface::*)() const) static_cast<Standard_Real (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::VPeriod),
             R"#(None)#" )
        .def("D0",
             (void (HLRBRep_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & ) const) static_cast<void (HLRBRep_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & ) const>(&HLRBRep_Surface::D0),
             R"#(Computes the point of parameters U,V on the surface.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("D1",
             (void (HLRBRep_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const) static_cast<void (HLRBRep_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const>(&HLRBRep_Surface::D1),
             R"#(Computes the point and the first derivatives on the surface. Raised if the continuity of the current intervals is not C1.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("D2",
             (void (HLRBRep_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const) static_cast<void (HLRBRep_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const>(&HLRBRep_Surface::D2),
             R"#(Computes the point, the first and second derivatives on the surface. Raised if the continuity of the current intervals is not C2.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("D3",
             (void (HLRBRep_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const) static_cast<void (HLRBRep_Surface::*)( const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const>(&HLRBRep_Surface::D3),
             R"#(Computes the point, the first, second and third derivatives on the surface. Raised if the continuity of the current intervals is not C3.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("DN",
             (gp_Vec (HLRBRep_Surface::*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ) const) static_cast<gp_Vec (HLRBRep_Surface::*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ) const>(&HLRBRep_Surface::DN),
             R"#(Computes the derivative of order Nu in the direction U and Nv in the direction V at the point P(U, V). Raised if the current U interval is not not CNu and the current V interval is not CNv. Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("GetType",
             (GeomAbs_SurfaceType (HLRBRep_Surface::*)() const) static_cast<GeomAbs_SurfaceType (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::GetType),
             R"#(Returns the type of the surface : Plane, Cylinder, Cone, Sphere, Torus, BezierSurface, BSplineSurface, SurfaceOfRevolution, SurfaceOfExtrusion, OtherSurface)#" )
        .def("Cylinder",
             (gp_Cylinder (HLRBRep_Surface::*)() const) static_cast<gp_Cylinder (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::Cylinder),
             R"#(None)#" )
        .def("Cone",
             (gp_Cone (HLRBRep_Surface::*)() const) static_cast<gp_Cone (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::Cone),
             R"#(None)#" )
        .def("Sphere",
             (gp_Sphere (HLRBRep_Surface::*)() const) static_cast<gp_Sphere (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::Sphere),
             R"#(None)#" )
        .def("Torus",
             (gp_Torus (HLRBRep_Surface::*)() const) static_cast<gp_Torus (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::Torus),
             R"#(None)#" )
        .def("UDegree",
             (Standard_Integer (HLRBRep_Surface::*)() const) static_cast<Standard_Integer (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::UDegree),
             R"#(None)#" )
        .def("NbUPoles",
             (Standard_Integer (HLRBRep_Surface::*)() const) static_cast<Standard_Integer (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::NbUPoles),
             R"#(None)#" )
        .def("VDegree",
             (Standard_Integer (HLRBRep_Surface::*)() const) static_cast<Standard_Integer (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::VDegree),
             R"#(None)#" )
        .def("NbVPoles",
             (Standard_Integer (HLRBRep_Surface::*)() const) static_cast<Standard_Integer (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::NbVPoles),
             R"#(None)#" )
        .def("NbUKnots",
             (Standard_Integer (HLRBRep_Surface::*)() const) static_cast<Standard_Integer (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::NbUKnots),
             R"#(None)#" )
        .def("NbVKnots",
             (Standard_Integer (HLRBRep_Surface::*)() const) static_cast<Standard_Integer (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::NbVKnots),
             R"#(None)#" )
        .def("Axis",
             (gp_Ax1 (HLRBRep_Surface::*)() const) static_cast<gp_Ax1 (HLRBRep_Surface::*)() const>(&HLRBRep_Surface::Axis),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<HLRBRep_SurfaceTool , shared_ptr<HLRBRep_SurfaceTool>>(m,"HLRBRep_SurfaceTool");

    static_cast<py::class_<HLRBRep_SurfaceTool , shared_ptr<HLRBRep_SurfaceTool> >>(m.attr("HLRBRep_SurfaceTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FirstUParameter_s",
                    (Standard_Real (*)( const Standard_Address ) ) static_cast<Standard_Real (*)( const Standard_Address ) >(&HLRBRep_SurfaceTool::FirstUParameter),
                    R"#(None)#"  , py::arg("S"))
        .def_static("FirstVParameter_s",
                    (Standard_Real (*)( const Standard_Address ) ) static_cast<Standard_Real (*)( const Standard_Address ) >(&HLRBRep_SurfaceTool::FirstVParameter),
                    R"#(None)#"  , py::arg("S"))
        .def_static("LastUParameter_s",
                    (Standard_Real (*)( const Standard_Address ) ) static_cast<Standard_Real (*)( const Standard_Address ) >(&HLRBRep_SurfaceTool::LastUParameter),
                    R"#(None)#"  , py::arg("S"))
        .def_static("LastVParameter_s",
                    (Standard_Real (*)( const Standard_Address ) ) static_cast<Standard_Real (*)( const Standard_Address ) >(&HLRBRep_SurfaceTool::LastVParameter),
                    R"#(None)#"  , py::arg("S"))
        .def_static("NbUIntervals_s",
                    (Standard_Integer (*)( const Standard_Address , const GeomAbs_Shape ) ) static_cast<Standard_Integer (*)( const Standard_Address , const GeomAbs_Shape ) >(&HLRBRep_SurfaceTool::NbUIntervals),
                    R"#(None)#"  , py::arg("S"),  py::arg("Sh"))
        .def_static("NbVIntervals_s",
                    (Standard_Integer (*)( const Standard_Address , const GeomAbs_Shape ) ) static_cast<Standard_Integer (*)( const Standard_Address , const GeomAbs_Shape ) >(&HLRBRep_SurfaceTool::NbVIntervals),
                    R"#(None)#"  , py::arg("S"),  py::arg("Sh"))
        .def_static("UIntervals_s",
                    (void (*)( const Standard_Address , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) ) static_cast<void (*)( const Standard_Address , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) >(&HLRBRep_SurfaceTool::UIntervals),
                    R"#(None)#"  , py::arg("S"),  py::arg("T"),  py::arg("Sh"))
        .def_static("VIntervals_s",
                    (void (*)( const Standard_Address , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) ) static_cast<void (*)( const Standard_Address , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) >(&HLRBRep_SurfaceTool::VIntervals),
                    R"#(None)#"  , py::arg("S"),  py::arg("T"),  py::arg("Sh"))
        .def_static("UTrim_s",
                    (opencascade::handle<Adaptor3d_HSurface> (*)( const Standard_Address , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<opencascade::handle<Adaptor3d_HSurface> (*)( const Standard_Address , const Standard_Real , const Standard_Real , const Standard_Real ) >(&HLRBRep_SurfaceTool::UTrim),
                    R"#(If <First> >= <Last>)#"  , py::arg("S"),  py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def_static("VTrim_s",
                    (opencascade::handle<Adaptor3d_HSurface> (*)( const Standard_Address , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<opencascade::handle<Adaptor3d_HSurface> (*)( const Standard_Address , const Standard_Real , const Standard_Real , const Standard_Real ) >(&HLRBRep_SurfaceTool::VTrim),
                    R"#(If <First> >= <Last>)#"  , py::arg("S"),  py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def_static("IsUClosed_s",
                    (Standard_Boolean (*)( const Standard_Address ) ) static_cast<Standard_Boolean (*)( const Standard_Address ) >(&HLRBRep_SurfaceTool::IsUClosed),
                    R"#(None)#"  , py::arg("S"))
        .def_static("IsVClosed_s",
                    (Standard_Boolean (*)( const Standard_Address ) ) static_cast<Standard_Boolean (*)( const Standard_Address ) >(&HLRBRep_SurfaceTool::IsVClosed),
                    R"#(None)#"  , py::arg("S"))
        .def_static("IsUPeriodic_s",
                    (Standard_Boolean (*)( const Standard_Address ) ) static_cast<Standard_Boolean (*)( const Standard_Address ) >(&HLRBRep_SurfaceTool::IsUPeriodic),
                    R"#(None)#"  , py::arg("S"))
        .def_static("UPeriod_s",
                    (Standard_Real (*)( const Standard_Address ) ) static_cast<Standard_Real (*)( const Standard_Address ) >(&HLRBRep_SurfaceTool::UPeriod),
                    R"#(None)#"  , py::arg("S"))
        .def_static("IsVPeriodic_s",
                    (Standard_Boolean (*)( const Standard_Address ) ) static_cast<Standard_Boolean (*)( const Standard_Address ) >(&HLRBRep_SurfaceTool::IsVPeriodic),
                    R"#(None)#"  , py::arg("S"))
        .def_static("VPeriod_s",
                    (Standard_Real (*)( const Standard_Address ) ) static_cast<Standard_Real (*)( const Standard_Address ) >(&HLRBRep_SurfaceTool::VPeriod),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const Standard_Address , const Standard_Real , const Standard_Real ) ) static_cast<gp_Pnt (*)( const Standard_Address , const Standard_Real , const Standard_Real ) >(&HLRBRep_SurfaceTool::Value),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"))
        .def_static("D0_s",
                    (void (*)( const Standard_Address , const Standard_Real , const Standard_Real , gp_Pnt & ) ) static_cast<void (*)( const Standard_Address , const Standard_Real , const Standard_Real , gp_Pnt & ) >(&HLRBRep_SurfaceTool::D0),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const Standard_Address , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Address , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&HLRBRep_SurfaceTool::D1),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"),  py::arg("P"),  py::arg("D1u"),  py::arg("D1v"))
        .def_static("D2_s",
                    (void (*)( const Standard_Address , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Address , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&HLRBRep_SurfaceTool::D2),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def_static("D3_s",
                    (void (*)( const Standard_Address , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Address , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&HLRBRep_SurfaceTool::D3),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Standard_Address , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ) ) static_cast<gp_Vec (*)( const Standard_Address , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ) >(&HLRBRep_SurfaceTool::DN),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"),  py::arg("Nu"),  py::arg("Nv"))
        .def_static("UResolution_s",
                    (Standard_Real (*)( const Standard_Address , const Standard_Real ) ) static_cast<Standard_Real (*)( const Standard_Address , const Standard_Real ) >(&HLRBRep_SurfaceTool::UResolution),
                    R"#(None)#"  , py::arg("S"),  py::arg("R3d"))
        .def_static("VResolution_s",
                    (Standard_Real (*)( const Standard_Address , const Standard_Real ) ) static_cast<Standard_Real (*)( const Standard_Address , const Standard_Real ) >(&HLRBRep_SurfaceTool::VResolution),
                    R"#(None)#"  , py::arg("S"),  py::arg("R3d"))
        .def_static("GetType_s",
                    (GeomAbs_SurfaceType (*)( const Standard_Address ) ) static_cast<GeomAbs_SurfaceType (*)( const Standard_Address ) >(&HLRBRep_SurfaceTool::GetType),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Plane_s",
                    (gp_Pln (*)( const Standard_Address ) ) static_cast<gp_Pln (*)( const Standard_Address ) >(&HLRBRep_SurfaceTool::Plane),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Cylinder_s",
                    (gp_Cylinder (*)( const Standard_Address ) ) static_cast<gp_Cylinder (*)( const Standard_Address ) >(&HLRBRep_SurfaceTool::Cylinder),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Cone_s",
                    (gp_Cone (*)( const Standard_Address ) ) static_cast<gp_Cone (*)( const Standard_Address ) >(&HLRBRep_SurfaceTool::Cone),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Torus_s",
                    (gp_Torus (*)( const Standard_Address ) ) static_cast<gp_Torus (*)( const Standard_Address ) >(&HLRBRep_SurfaceTool::Torus),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Sphere_s",
                    (gp_Sphere (*)( const Standard_Address ) ) static_cast<gp_Sphere (*)( const Standard_Address ) >(&HLRBRep_SurfaceTool::Sphere),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Bezier_s",
                    (opencascade::handle<Geom_BezierSurface> (*)( const Standard_Address ) ) static_cast<opencascade::handle<Geom_BezierSurface> (*)( const Standard_Address ) >(&HLRBRep_SurfaceTool::Bezier),
                    R"#(None)#"  , py::arg("S"))
        .def_static("BSpline_s",
                    (opencascade::handle<Geom_BSplineSurface> (*)( const Standard_Address ) ) static_cast<opencascade::handle<Geom_BSplineSurface> (*)( const Standard_Address ) >(&HLRBRep_SurfaceTool::BSpline),
                    R"#(None)#"  , py::arg("S"))
        .def_static("AxeOfRevolution_s",
                    (gp_Ax1 (*)( const Standard_Address ) ) static_cast<gp_Ax1 (*)( const Standard_Address ) >(&HLRBRep_SurfaceTool::AxeOfRevolution),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Direction_s",
                    (gp_Dir (*)( const Standard_Address ) ) static_cast<gp_Dir (*)( const Standard_Address ) >(&HLRBRep_SurfaceTool::Direction),
                    R"#(None)#"  , py::arg("S"))
        .def_static("BasisCurve_s",
                    (opencascade::handle<Adaptor3d_HCurve> (*)( const Standard_Address ) ) static_cast<opencascade::handle<Adaptor3d_HCurve> (*)( const Standard_Address ) >(&HLRBRep_SurfaceTool::BasisCurve),
                    R"#(None)#"  , py::arg("S"))
        .def_static("BasisSurface_s",
                    (opencascade::handle<Adaptor3d_HSurface> (*)( const Standard_Address ) ) static_cast<opencascade::handle<Adaptor3d_HSurface> (*)( const Standard_Address ) >(&HLRBRep_SurfaceTool::BasisSurface),
                    R"#(None)#"  , py::arg("S"))
        .def_static("OffsetValue_s",
                    (Standard_Real (*)( const Standard_Address ) ) static_cast<Standard_Real (*)( const Standard_Address ) >(&HLRBRep_SurfaceTool::OffsetValue),
                    R"#(None)#"  , py::arg("S"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_TheCSFunctionOfInterCSurf , shared_ptr<HLRBRep_TheCSFunctionOfInterCSurf> , math_FunctionSetWithDerivatives>>(m.attr("HLRBRep_TheCSFunctionOfInterCSurf"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (HLRBRep_TheCSFunctionOfInterCSurf::*)() const) static_cast<Standard_Integer (HLRBRep_TheCSFunctionOfInterCSurf::*)() const>(&HLRBRep_TheCSFunctionOfInterCSurf::NbVariables),
             R"#(None)#" )
        .def("NbEquations",
             (Standard_Integer (HLRBRep_TheCSFunctionOfInterCSurf::*)() const) static_cast<Standard_Integer (HLRBRep_TheCSFunctionOfInterCSurf::*)() const>(&HLRBRep_TheCSFunctionOfInterCSurf::NbEquations),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (HLRBRep_TheCSFunctionOfInterCSurf::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (HLRBRep_TheCSFunctionOfInterCSurf::*)( const math_Vector & , math_Vector & ) >(&HLRBRep_TheCSFunctionOfInterCSurf::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (HLRBRep_TheCSFunctionOfInterCSurf::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (HLRBRep_TheCSFunctionOfInterCSurf::*)( const math_Vector & , math_Matrix & ) >(&HLRBRep_TheCSFunctionOfInterCSurf::Derivatives),
             R"#(None)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (HLRBRep_TheCSFunctionOfInterCSurf::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (HLRBRep_TheCSFunctionOfInterCSurf::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&HLRBRep_TheCSFunctionOfInterCSurf::Values),
             R"#(None)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter , shared_ptr<HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter>>(m,"HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter");

    static_cast<py::class_<HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter , shared_ptr<HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter> >>(m.attr("HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter , shared_ptr<HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter> , math_FunctionSetWithDerivatives>>(m.attr("HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter::*)() const) static_cast<Standard_Integer (HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter::*)() const>(&HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter::NbVariables),
             R"#(returns 2.)#" )
        .def("NbEquations",
             (Standard_Integer (HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter::*)() const) static_cast<Standard_Integer (HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter::*)() const>(&HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter::NbEquations),
             R"#(returns 2.)#" )
        .def("Value",
             (Standard_Boolean (HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter::*)( const math_Vector & , math_Vector & ) >(&HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter::*)( const math_Vector & , math_Matrix & ) >(&HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_TheExactInterCSurf , shared_ptr<HLRBRep_TheExactInterCSurf> >>(m.attr("HLRBRep_TheExactInterCSurf"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_TheIntConicCurveOfCInter , shared_ptr<HLRBRep_TheIntConicCurveOfCInter> , IntRes2d_Intersection>>(m.attr("HLRBRep_TheIntConicCurveOfCInter"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_TheIntPCurvePCurveOfCInter , shared_ptr<HLRBRep_TheIntPCurvePCurveOfCInter> , IntRes2d_Intersection>>(m.attr("HLRBRep_TheIntPCurvePCurveOfCInter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_TheInterferenceOfInterCSurf , shared_ptr<HLRBRep_TheInterferenceOfInterCSurf> , Intf_Interference>>(m.attr("HLRBRep_TheInterferenceOfInterCSurf"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_TheIntersectorOfTheIntConicCurveOfCInter , shared_ptr<HLRBRep_TheIntersectorOfTheIntConicCurveOfCInter> , IntRes2d_Intersection>>(m.attr("HLRBRep_TheIntersectorOfTheIntConicCurveOfCInter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter , shared_ptr<HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter> >>(m.attr("HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter , shared_ptr<HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter> , Intf_Polygon2d>>(m.attr("HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter"))
    // constructors
    // custom constructors
    // methods
        .def("DeflectionOverEstimation",
             (Standard_Real (HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::*)() const) static_cast<Standard_Real (HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::*)() const>(&HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::DeflectionOverEstimation),
             R"#(None)#" )
        .def("SetDeflectionOverEstimation",
             (void (HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::*)( const Standard_Real ) ) static_cast<void (HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::*)( const Standard_Real ) >(&HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::SetDeflectionOverEstimation),
             R"#(None)#"  , py::arg("x"))
        .def("Closed",
             (void (HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::*)( const Standard_Boolean ) >(&HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::Closed),
             R"#(None)#"  , py::arg("clos"))
        .def("Closed",
             (Standard_Boolean (HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::*)() const) static_cast<Standard_Boolean (HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::*)() const>(&HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::Closed),
             R"#(Returns True if the polyline is closed.)#" )
        .def("NbSegments",
             (Standard_Integer (HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::*)() const) static_cast<Standard_Integer (HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::*)() const>(&HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::NbSegments),
             R"#(Give the number of Segments in the polyline.)#" )
        .def("Segment",
             (void (HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::*)( const Standard_Integer , gp_Pnt2d & , gp_Pnt2d & ) const) static_cast<void (HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::*)( const Standard_Integer , gp_Pnt2d & , gp_Pnt2d & ) const>(&HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::Segment),
             R"#(Returns the points of the segment <Index> in the Polygon.)#"  , py::arg("theIndex"),  py::arg("theBegin"),  py::arg("theEnd"))
        .def("InfParameter",
             (Standard_Real (HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::*)() const) static_cast<Standard_Real (HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::*)() const>(&HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::InfParameter),
             R"#(Returns the parameter (On the curve) of the first point of the Polygon)#" )
        .def("SupParameter",
             (Standard_Real (HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::*)() const) static_cast<Standard_Real (HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::*)() const>(&HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::SupParameter),
             R"#(Returns the parameter (On the curve) of the last point of the Polygon)#" )
        .def("CalculRegion",
             (Standard_Integer (HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Integer (HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) const>(&HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter::CalculRegion),
             R"#(None)#"  , py::arg("x"),  py::arg("y"),  py::arg("x1"),  py::arg("x2"),  py::arg("y1"),  py::arg("y2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_ThePolygonOfInterCSurf , shared_ptr<HLRBRep_ThePolygonOfInterCSurf> >>(m.attr("HLRBRep_ThePolygonOfInterCSurf"))
    // constructors
    // custom constructors
    // methods
        .def("Bounding",
             (const Bnd_Box & (HLRBRep_ThePolygonOfInterCSurf::*)() const) static_cast<const Bnd_Box & (HLRBRep_ThePolygonOfInterCSurf::*)() const>(&HLRBRep_ThePolygonOfInterCSurf::Bounding),
             R"#(Give the bounding box of the polygon.)#" )
        .def("DeflectionOverEstimation",
             (Standard_Real (HLRBRep_ThePolygonOfInterCSurf::*)() const) static_cast<Standard_Real (HLRBRep_ThePolygonOfInterCSurf::*)() const>(&HLRBRep_ThePolygonOfInterCSurf::DeflectionOverEstimation),
             R"#(None)#" )
        .def("SetDeflectionOverEstimation",
             (void (HLRBRep_ThePolygonOfInterCSurf::*)( const Standard_Real ) ) static_cast<void (HLRBRep_ThePolygonOfInterCSurf::*)( const Standard_Real ) >(&HLRBRep_ThePolygonOfInterCSurf::SetDeflectionOverEstimation),
             R"#(None)#"  , py::arg("x"))
        .def("Closed",
             (void (HLRBRep_ThePolygonOfInterCSurf::*)( const Standard_Boolean ) ) static_cast<void (HLRBRep_ThePolygonOfInterCSurf::*)( const Standard_Boolean ) >(&HLRBRep_ThePolygonOfInterCSurf::Closed),
             R"#(None)#"  , py::arg("clos"))
        .def("Closed",
             (Standard_Boolean (HLRBRep_ThePolygonOfInterCSurf::*)() const) static_cast<Standard_Boolean (HLRBRep_ThePolygonOfInterCSurf::*)() const>(&HLRBRep_ThePolygonOfInterCSurf::Closed),
             R"#(None)#" )
        .def("NbSegments",
             (Standard_Integer (HLRBRep_ThePolygonOfInterCSurf::*)() const) static_cast<Standard_Integer (HLRBRep_ThePolygonOfInterCSurf::*)() const>(&HLRBRep_ThePolygonOfInterCSurf::NbSegments),
             R"#(Give the number of Segments in the polyline.)#" )
        .def("BeginOfSeg",
             (const gp_Pnt & (HLRBRep_ThePolygonOfInterCSurf::*)( const Standard_Integer ) const) static_cast<const gp_Pnt & (HLRBRep_ThePolygonOfInterCSurf::*)( const Standard_Integer ) const>(&HLRBRep_ThePolygonOfInterCSurf::BeginOfSeg),
             R"#(Give the point of range Index in the Polygon.)#"  , py::arg("Index"))
        .def("EndOfSeg",
             (const gp_Pnt & (HLRBRep_ThePolygonOfInterCSurf::*)( const Standard_Integer ) const) static_cast<const gp_Pnt & (HLRBRep_ThePolygonOfInterCSurf::*)( const Standard_Integer ) const>(&HLRBRep_ThePolygonOfInterCSurf::EndOfSeg),
             R"#(Give the point of range Index in the Polygon.)#"  , py::arg("Index"))
        .def("InfParameter",
             (Standard_Real (HLRBRep_ThePolygonOfInterCSurf::*)() const) static_cast<Standard_Real (HLRBRep_ThePolygonOfInterCSurf::*)() const>(&HLRBRep_ThePolygonOfInterCSurf::InfParameter),
             R"#(Returns the parameter (On the curve) of the first point of the Polygon)#" )
        .def("SupParameter",
             (Standard_Real (HLRBRep_ThePolygonOfInterCSurf::*)() const) static_cast<Standard_Real (HLRBRep_ThePolygonOfInterCSurf::*)() const>(&HLRBRep_ThePolygonOfInterCSurf::SupParameter),
             R"#(Returns the parameter (On the curve) of the last point of the Polygon)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<HLRBRep_ThePolygonToolOfInterCSurf , shared_ptr<HLRBRep_ThePolygonToolOfInterCSurf>>(m,"HLRBRep_ThePolygonToolOfInterCSurf");

    static_cast<py::class_<HLRBRep_ThePolygonToolOfInterCSurf , shared_ptr<HLRBRep_ThePolygonToolOfInterCSurf> >>(m.attr("HLRBRep_ThePolygonToolOfInterCSurf"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Bounding_s",
                    (const Bnd_Box & (*)( const HLRBRep_ThePolygonOfInterCSurf & ) ) static_cast<const Bnd_Box & (*)( const HLRBRep_ThePolygonOfInterCSurf & ) >(&HLRBRep_ThePolygonToolOfInterCSurf::Bounding),
                    R"#(Give the bounding box of the polygon.)#"  , py::arg("thePolygon"))
        .def_static("DeflectionOverEstimation_s",
                    (Standard_Real (*)( const HLRBRep_ThePolygonOfInterCSurf & ) ) static_cast<Standard_Real (*)( const HLRBRep_ThePolygonOfInterCSurf & ) >(&HLRBRep_ThePolygonToolOfInterCSurf::DeflectionOverEstimation),
                    R"#(None)#"  , py::arg("thePolygon"))
        .def_static("Closed_s",
                    (Standard_Boolean (*)( const HLRBRep_ThePolygonOfInterCSurf & ) ) static_cast<Standard_Boolean (*)( const HLRBRep_ThePolygonOfInterCSurf & ) >(&HLRBRep_ThePolygonToolOfInterCSurf::Closed),
                    R"#(None)#"  , py::arg("thePolygon"))
        .def_static("NbSegments_s",
                    (Standard_Integer (*)( const HLRBRep_ThePolygonOfInterCSurf & ) ) static_cast<Standard_Integer (*)( const HLRBRep_ThePolygonOfInterCSurf & ) >(&HLRBRep_ThePolygonToolOfInterCSurf::NbSegments),
                    R"#(None)#"  , py::arg("thePolygon"))
        .def_static("BeginOfSeg_s",
                    (const gp_Pnt & (*)( const HLRBRep_ThePolygonOfInterCSurf & , const Standard_Integer ) ) static_cast<const gp_Pnt & (*)( const HLRBRep_ThePolygonOfInterCSurf & , const Standard_Integer ) >(&HLRBRep_ThePolygonToolOfInterCSurf::BeginOfSeg),
                    R"#(Give the point of range Index in the Polygon.)#"  , py::arg("thePolygon"),  py::arg("Index"))
        .def_static("EndOfSeg_s",
                    (const gp_Pnt & (*)( const HLRBRep_ThePolygonOfInterCSurf & , const Standard_Integer ) ) static_cast<const gp_Pnt & (*)( const HLRBRep_ThePolygonOfInterCSurf & , const Standard_Integer ) >(&HLRBRep_ThePolygonToolOfInterCSurf::EndOfSeg),
                    R"#(Give the point of range Index in the Polygon.)#"  , py::arg("thePolygon"),  py::arg("Index"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_ThePolyhedronOfInterCSurf , shared_ptr<HLRBRep_ThePolyhedronOfInterCSurf> >>(m.attr("HLRBRep_ThePolyhedronOfInterCSurf"))
    // constructors
    // custom constructors
    // methods
        .def("GetBorderDeflection",
             (Standard_Real (HLRBRep_ThePolyhedronOfInterCSurf::*)() const) static_cast<Standard_Real (HLRBRep_ThePolyhedronOfInterCSurf::*)() const>(&HLRBRep_ThePolyhedronOfInterCSurf::GetBorderDeflection),
             R"#(This method returns a border deflection.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<HLRBRep_ThePolyhedronToolOfInterCSurf , shared_ptr<HLRBRep_ThePolyhedronToolOfInterCSurf>>(m,"HLRBRep_ThePolyhedronToolOfInterCSurf");

    static_cast<py::class_<HLRBRep_ThePolyhedronToolOfInterCSurf , shared_ptr<HLRBRep_ThePolyhedronToolOfInterCSurf> >>(m.attr("HLRBRep_ThePolyhedronToolOfInterCSurf"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Bounding_s",
                    (const Bnd_Box & (*)( const HLRBRep_ThePolyhedronOfInterCSurf & ) ) static_cast<const Bnd_Box & (*)( const HLRBRep_ThePolyhedronOfInterCSurf & ) >(&HLRBRep_ThePolyhedronToolOfInterCSurf::Bounding),
                    R"#(Give the bounding box of the PolyhedronTool.)#"  , py::arg("thePolyh"))
        .def_static("ComponentsBounding_s",
                    (const opencascade::handle<Bnd_HArray1OfBox> & (*)( const HLRBRep_ThePolyhedronOfInterCSurf & ) ) static_cast<const opencascade::handle<Bnd_HArray1OfBox> & (*)( const HLRBRep_ThePolyhedronOfInterCSurf & ) >(&HLRBRep_ThePolyhedronToolOfInterCSurf::ComponentsBounding),
                    R"#(Give the array of boxes. The box <n> corresponding to the triangle <n>.)#"  , py::arg("thePolyh"))
        .def_static("DeflectionOverEstimation_s",
                    (Standard_Real (*)( const HLRBRep_ThePolyhedronOfInterCSurf & ) ) static_cast<Standard_Real (*)( const HLRBRep_ThePolyhedronOfInterCSurf & ) >(&HLRBRep_ThePolyhedronToolOfInterCSurf::DeflectionOverEstimation),
                    R"#(Give the tolerance of the polygon.)#"  , py::arg("thePolyh"))
        .def_static("NbTriangles_s",
                    (Standard_Integer (*)( const HLRBRep_ThePolyhedronOfInterCSurf & ) ) static_cast<Standard_Integer (*)( const HLRBRep_ThePolyhedronOfInterCSurf & ) >(&HLRBRep_ThePolyhedronToolOfInterCSurf::NbTriangles),
                    R"#(Give the number of triangles in this polyedral surface.)#"  , py::arg("thePolyh"))
        .def_static("Point_s",
                    (const gp_Pnt & (*)( const HLRBRep_ThePolyhedronOfInterCSurf & , const Standard_Integer ) ) static_cast<const gp_Pnt & (*)( const HLRBRep_ThePolyhedronOfInterCSurf & , const Standard_Integer ) >(&HLRBRep_ThePolyhedronToolOfInterCSurf::Point),
                    R"#(Give the point of index i in the polyedral surface.)#"  , py::arg("thePolyh"),  py::arg("Index"))
        .def_static("TriConnex_s",
                    (Standard_Integer (*)( const HLRBRep_ThePolyhedronOfInterCSurf & , const Standard_Integer , const Standard_Integer , const Standard_Integer , Standard_Integer & , Standard_Integer & ) ) static_cast<Standard_Integer (*)( const HLRBRep_ThePolyhedronOfInterCSurf & , const Standard_Integer , const Standard_Integer , const Standard_Integer , Standard_Integer & , Standard_Integer & ) >(&HLRBRep_ThePolyhedronToolOfInterCSurf::TriConnex),
                    R"#(Give the addresse Tricon of the triangle connexe to the triangle of address Triang by the edge Pivot Pedge and the third point of this connexe triangle. When we are on a free edge TriCon==0 but the function return the value of the triangle in the other side of Pivot on the free edge. Used to turn around a vertex.)#"  , py::arg("thePolyh"),  py::arg("Triang"),  py::arg("Pivot"),  py::arg("Pedge"),  py::arg("TriCon"),  py::arg("OtherP"))
        .def_static("IsOnBound_s",
                    (Standard_Boolean (*)( const HLRBRep_ThePolyhedronOfInterCSurf & , const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Boolean (*)( const HLRBRep_ThePolyhedronOfInterCSurf & , const Standard_Integer , const Standard_Integer ) >(&HLRBRep_ThePolyhedronToolOfInterCSurf::IsOnBound),
                    R"#(This method returns true if the edge based on points with indices Index1 and Index2 represents a boundary edge. It is necessary to take into account the boundary deflection for this edge.)#"  , py::arg("thePolyh"),  py::arg("Index1"),  py::arg("Index2"))
        .def_static("GetBorderDeflection_s",
                    (Standard_Real (*)( const HLRBRep_ThePolyhedronOfInterCSurf & ) ) static_cast<Standard_Real (*)( const HLRBRep_ThePolyhedronOfInterCSurf & ) >(&HLRBRep_ThePolyhedronToolOfInterCSurf::GetBorderDeflection),
                    R"#(This method returns a border deflection of the polyhedron.)#"  , py::arg("thePolyh"))
    // static methods using call by reference i.s.o. return
        .def_static("Triangle_s",
                    []( const HLRBRep_ThePolyhedronOfInterCSurf & thePolyh,const Standard_Integer Index ){ Standard_Integer  P1; Standard_Integer  P2; Standard_Integer  P3; HLRBRep_ThePolyhedronToolOfInterCSurf::Triangle(thePolyh,Index,P1,P2,P3); return std::make_tuple(P1,P2,P3); },
                    R"#(Give the indices of the 3 points of the triangle of address Index in the PolyhedronTool.)#"  , py::arg("thePolyh"),  py::arg("Index"))
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<HLRBRep_TheProjPCurOfCInter , shared_ptr<HLRBRep_TheProjPCurOfCInter>>(m,"HLRBRep_TheProjPCurOfCInter");

    static_cast<py::class_<HLRBRep_TheProjPCurOfCInter , shared_ptr<HLRBRep_TheProjPCurOfCInter> >>(m.attr("HLRBRep_TheProjPCurOfCInter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_TheQuadCurvExactInterCSurf , shared_ptr<HLRBRep_TheQuadCurvExactInterCSurf> >>(m.attr("HLRBRep_TheQuadCurvExactInterCSurf"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf , shared_ptr<HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf> , math_FunctionWithDerivative>>(m.attr("HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf::*)( const Standard_Real , Standard_Real & ) >(&HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf::Value),
             R"#(Computes the value of the signed distance between the implicit surface and the point at parameter Param on the parametrised curve. Value always returns True.)#"  , py::arg("Param"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf::*)( const Standard_Real , Standard_Real & ) >(&HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf::Derivative),
             R"#(Computes the derivative of the previous function at parameter Param. Derivative always returns True.)#"  , py::arg("Param"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf::Values),
             R"#(Computes the value and the derivative of the function. returns True.)#"  , py::arg("Param"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_VertexList , shared_ptr<HLRBRep_VertexList> >>(m.attr("HLRBRep_VertexList"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HLRBRep_Algo ,opencascade::handle<HLRBRep_Algo> , HLRBRep_InternalAlgo>>(m.attr("HLRBRep_Algo"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (HLRBRep_Algo::*)() const) static_cast<const opencascade::handle<Standard_Type> & (HLRBRep_Algo::*)() const>(&HLRBRep_Algo::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&HLRBRep_Algo::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/HLRBRep_Array1OfEData.hxx
// ./opencascade/HLRBRep_CLPropsATool.hxx
// ./opencascade/HLRBRep.hxx
// ./opencascade/HLRBRep_SLPropsATool.hxx
// ./opencascade/HLRBRep_TheQuadCurvExactInterCSurf.hxx
// ./opencascade/HLRBRep_CurveTool.hxx
// ./opencascade/HLRBRep_TheIntersectorOfTheIntConicCurveOfCInter.hxx
// ./opencascade/HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter.hxx
// ./opencascade/HLRBRep_ThePolyhedronToolOfInterCSurf.hxx
// ./opencascade/HLRBRep_InternalAlgo.hxx
// ./opencascade/HLRBRep_EdgeFaceTool.hxx
// ./opencascade/HLRBRep_ListOfBPnt2D.hxx
// ./opencascade/HLRBRep_ListIteratorOfListOfBPnt2D.hxx
// ./opencascade/HLRBRep_SeqOfShapeBounds.hxx
// ./opencascade/HLRBRep_HLRToShape.hxx
// ./opencascade/HLRBRep_EdgeInterferenceTool.hxx
// ./opencascade/HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter.hxx
// ./opencascade/HLRBRep_ListIteratorOfListOfBPoint.hxx
// ./opencascade/HLRBRep_Algo.hxx
// ./opencascade/HLRBRep_Array1OfFData.hxx
// ./opencascade/HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter.hxx
// ./opencascade/HLRBRep_CInter.hxx
// ./opencascade/HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter.hxx
// ./opencascade/HLRBRep_BiPoint.hxx
// ./opencascade/HLRBRep_BSurfaceTool.hxx
// ./opencascade/HLRBRep_Intersector.hxx
// ./opencascade/HLRBRep_BCurveTool.hxx
// ./opencascade/HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf.hxx
// ./opencascade/HLRBRep_CLProps.hxx
// ./opencascade/HLRBRep_PolyAlgo.hxx
// ./opencascade/HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter.hxx
// ./opencascade/HLRBRep_PolyHLRToShape.hxx
// ./opencascade/HLRBRep_LineTool.hxx
// ./opencascade/HLRBRep_TheCSFunctionOfInterCSurf.hxx
// ./opencascade/HLRBRep_SurfaceTool.hxx
// ./opencascade/HLRBRep_TheProjPCurOfCInter.hxx
// ./opencascade/HLRBRep_TheExactInterCSurf.hxx
// ./opencascade/HLRBRep_AreaLimit.hxx
// ./opencascade/HLRBRep_EdgeBuilder.hxx
// ./opencascade/HLRBRep_ThePolygonToolOfInterCSurf.hxx
// ./opencascade/HLRBRep_Data.hxx
// ./opencascade/HLRBRep_FaceData.hxx
// ./opencascade/HLRBRep_TheInterferenceOfInterCSurf.hxx
// ./opencascade/HLRBRep_Hider.hxx
// ./opencascade/HLRBRep_Curve.hxx
// ./opencascade/HLRBRep_EdgeData.hxx
// ./opencascade/HLRBRep_ThePolygonOfInterCSurf.hxx
// ./opencascade/HLRBRep_TheIntPCurvePCurveOfCInter.hxx
// ./opencascade/HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter.hxx
// ./opencascade/HLRBRep_ShapeBounds.hxx
// ./opencascade/HLRBRep_ListOfBPoint.hxx
// ./opencascade/HLRBRep_InterCSurf.hxx
// ./opencascade/HLRBRep_ThePolyhedronOfInterCSurf.hxx
// ./opencascade/HLRBRep_TypeOfResultingEdge.hxx
// ./opencascade/HLRBRep_IntConicCurveOfCInter.hxx
// ./opencascade/HLRBRep_Surface.hxx
// ./opencascade/HLRBRep_BiPnt2D.hxx
// ./opencascade/HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter.hxx
// ./opencascade/HLRBRep_SLProps.hxx
// ./opencascade/HLRBRep_TheIntConicCurveOfCInter.hxx
// ./opencascade/HLRBRep_ShapeToHLR.hxx
// ./opencascade/HLRBRep_FaceIterator.hxx
// ./opencascade/HLRBRep_VertexList.hxx
// ./opencascade/HLRBRep_EdgeIList.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<HLRBRep_EdgeData>(m,"HLRBRep_Array1OfEData");
    register_template_NCollection_List<HLRBRep_BiPnt2D>(m,"HLRBRep_ListOfBPnt2D");
    register_template_NCollection_Sequence<HLRBRep_ShapeBounds>(m,"HLRBRep_SeqOfShapeBounds");
    register_template_NCollection_Array1<HLRBRep_FaceData>(m,"HLRBRep_Array1OfFData");
    register_template_NCollection_List<HLRBRep_BiPoint>(m,"HLRBRep_ListOfBPoint");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

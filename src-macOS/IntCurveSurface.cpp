
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntCurveSurface_ThePolygonOfHInter.hxx>
#include <IntCurveSurface_ThePolygonToolOfHInter.hxx>
#include <IntCurveSurface_ThePolyhedronOfHInter.hxx>
#include <IntCurveSurface_ThePolyhedronToolOfHInter.hxx>
#include <IntCurveSurface_TheInterferenceOfHInter.hxx>
#include <IntCurveSurface_TheCSFunctionOfHInter.hxx>
#include <IntCurveSurface_TheExactHInter.hxx>
#include <IntCurveSurface_TheQuadCurvExactHInter.hxx>
#include <IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter.hxx>
#include <Bnd_BoundSortBox.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <IntAna_IntConicQuad.hxx>
#include <Bnd_Box.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <math_Matrix.hxx>
#include <Standard_NoSuchObject.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <math_FunctionSetRoot.hxx>
#include <IntCurveSurface_ThePolygonOfHInter.hxx>
#include <IntCurveSurface_ThePolygonToolOfHInter.hxx>
#include <IntCurveSurface_ThePolyhedronOfHInter.hxx>
#include <IntCurveSurface_ThePolyhedronToolOfHInter.hxx>
#include <Bnd_BoundSortBox.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>

// module includes
#include <IntCurveSurface_HInter.hxx>
#include <IntCurveSurface_Intersection.hxx>
#include <IntCurveSurface_IntersectionPoint.hxx>
#include <IntCurveSurface_IntersectionSegment.hxx>
#include <IntCurveSurface_SequenceOfPnt.hxx>
#include <IntCurveSurface_SequenceOfSeg.hxx>
#include <IntCurveSurface_TheCSFunctionOfHInter.hxx>
#include <IntCurveSurface_TheExactHInter.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <IntCurveSurface_TheInterferenceOfHInter.hxx>
#include <IntCurveSurface_ThePolygonOfHInter.hxx>
#include <IntCurveSurface_ThePolygonToolOfHInter.hxx>
#include <IntCurveSurface_ThePolyhedronOfHInter.hxx>
#include <IntCurveSurface_ThePolyhedronToolOfHInter.hxx>
#include <IntCurveSurface_TheQuadCurvExactHInter.hxx>
#include <IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter.hxx>
#include <IntCurveSurface_TransitionOnCurve.hxx>

// template related includes
// ./opencascade/IntCurveSurface_SequenceOfSeg.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntCurveSurface_SequenceOfPnt.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntCurveSurface(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IntCurveSurface"));


//Python trampoline classes

// classes


    static_cast<py::class_<IntCurveSurface_Intersection , shared_ptr_nodelete<IntCurveSurface_Intersection> >>(m.attr("IntCurveSurface_Intersection"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntCurveSurface_IntersectionPoint , shared_ptr<IntCurveSurface_IntersectionPoint> >>(m.attr("IntCurveSurface_IntersectionPoint"))
    // constructors
    // custom constructors
    // methods
        .def("Pnt",
             (const gp_Pnt & (IntCurveSurface_IntersectionPoint::*)() const) static_cast<const gp_Pnt & (IntCurveSurface_IntersectionPoint::*)() const>(&IntCurveSurface_IntersectionPoint::Pnt),
             R"#(returns the geometric point.)#" )
        .def("U",
             (Standard_Real (IntCurveSurface_IntersectionPoint::*)() const) static_cast<Standard_Real (IntCurveSurface_IntersectionPoint::*)() const>(&IntCurveSurface_IntersectionPoint::U),
             R"#(returns the U parameter on the surface.)#" )
        .def("V",
             (Standard_Real (IntCurveSurface_IntersectionPoint::*)() const) static_cast<Standard_Real (IntCurveSurface_IntersectionPoint::*)() const>(&IntCurveSurface_IntersectionPoint::V),
             R"#(returns the V parameter on the surface.)#" )
        .def("W",
             (Standard_Real (IntCurveSurface_IntersectionPoint::*)() const) static_cast<Standard_Real (IntCurveSurface_IntersectionPoint::*)() const>(&IntCurveSurface_IntersectionPoint::W),
             R"#(returns the parameter on the curve.)#" )
        .def("Transition",
             (IntCurveSurface_TransitionOnCurve (IntCurveSurface_IntersectionPoint::*)() const) static_cast<IntCurveSurface_TransitionOnCurve (IntCurveSurface_IntersectionPoint::*)() const>(&IntCurveSurface_IntersectionPoint::Transition),
             R"#(returns the Transition of the point.)#" )
        .def("Pnt",
             (const gp_Pnt & (IntCurveSurface_IntersectionPoint::*)() const) static_cast<const gp_Pnt & (IntCurveSurface_IntersectionPoint::*)() const>(&IntCurveSurface_IntersectionPoint::Pnt),
             R"#(returns the geometric point.)#" )
        .def("U",
             (Standard_Real (IntCurveSurface_IntersectionPoint::*)() const) static_cast<Standard_Real (IntCurveSurface_IntersectionPoint::*)() const>(&IntCurveSurface_IntersectionPoint::U),
             R"#(returns the U parameter on the surface.)#" )
        .def("V",
             (Standard_Real (IntCurveSurface_IntersectionPoint::*)() const) static_cast<Standard_Real (IntCurveSurface_IntersectionPoint::*)() const>(&IntCurveSurface_IntersectionPoint::V),
             R"#(returns the V parameter on the surface.)#" )
        .def("W",
             (Standard_Real (IntCurveSurface_IntersectionPoint::*)() const) static_cast<Standard_Real (IntCurveSurface_IntersectionPoint::*)() const>(&IntCurveSurface_IntersectionPoint::W),
             R"#(returns the parameter on the curve.)#" )
        .def("Transition",
             (IntCurveSurface_TransitionOnCurve (IntCurveSurface_IntersectionPoint::*)() const) static_cast<IntCurveSurface_TransitionOnCurve (IntCurveSurface_IntersectionPoint::*)() const>(&IntCurveSurface_IntersectionPoint::Transition),
             R"#(returns the Transition of the point.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntCurveSurface_IntersectionSegment , shared_ptr<IntCurveSurface_IntersectionSegment> >>(m.attr("IntCurveSurface_IntersectionSegment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntCurveSurface_TheCSFunctionOfHInter , shared_ptr<IntCurveSurface_TheCSFunctionOfHInter> , math_FunctionSetWithDerivatives>>(m.attr("IntCurveSurface_TheCSFunctionOfHInter"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (IntCurveSurface_TheCSFunctionOfHInter::*)() const) static_cast<Standard_Integer (IntCurveSurface_TheCSFunctionOfHInter::*)() const>(&IntCurveSurface_TheCSFunctionOfHInter::NbVariables),
             R"#(None)#" )
        .def("NbEquations",
             (Standard_Integer (IntCurveSurface_TheCSFunctionOfHInter::*)() const) static_cast<Standard_Integer (IntCurveSurface_TheCSFunctionOfHInter::*)() const>(&IntCurveSurface_TheCSFunctionOfHInter::NbEquations),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (IntCurveSurface_TheCSFunctionOfHInter::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (IntCurveSurface_TheCSFunctionOfHInter::*)( const math_Vector & , math_Vector & ) >(&IntCurveSurface_TheCSFunctionOfHInter::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (IntCurveSurface_TheCSFunctionOfHInter::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (IntCurveSurface_TheCSFunctionOfHInter::*)( const math_Vector & , math_Matrix & ) >(&IntCurveSurface_TheCSFunctionOfHInter::Derivatives),
             R"#(None)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (IntCurveSurface_TheCSFunctionOfHInter::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (IntCurveSurface_TheCSFunctionOfHInter::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&IntCurveSurface_TheCSFunctionOfHInter::Values),
             R"#(None)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntCurveSurface_TheExactHInter , shared_ptr<IntCurveSurface_TheExactHInter> >>(m.attr("IntCurveSurface_TheExactHInter"))
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
    register_default_constructor<IntCurveSurface_TheHCurveTool , shared_ptr<IntCurveSurface_TheHCurveTool>>(m,"IntCurveSurface_TheHCurveTool");

    static_cast<py::class_<IntCurveSurface_TheHCurveTool , shared_ptr<IntCurveSurface_TheHCurveTool> >>(m.attr("IntCurveSurface_TheHCurveTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FirstParameter_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&IntCurveSurface_TheHCurveTool::FirstParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("LastParameter_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&IntCurveSurface_TheHCurveTool::LastParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Continuity_s",
                    (GeomAbs_Shape (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<GeomAbs_Shape (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&IntCurveSurface_TheHCurveTool::Continuity),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbIntervals_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor3d_HCurve> & , const GeomAbs_Shape ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor3d_HCurve> & , const GeomAbs_Shape ) >(&IntCurveSurface_TheHCurveTool::NbIntervals),
                    R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(myclass) >= <S>)#"  , py::arg("C"),  py::arg("S"))
        .def_static("Intervals_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HCurve> & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HCurve> & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) >(&IntCurveSurface_TheHCurveTool::Intervals),
                    R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("C"),  py::arg("T"),  py::arg("S"))
        .def_static("IsClosed_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&IntCurveSurface_TheHCurveTool::IsClosed),
                    R"#(None)#"  , py::arg("C"))
        .def_static("IsPeriodic_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&IntCurveSurface_TheHCurveTool::IsPeriodic),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Period_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&IntCurveSurface_TheHCurveTool::Period),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real ) ) static_cast<gp_Pnt (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real ) >(&IntCurveSurface_TheHCurveTool::Value),
                    R"#(Computes the point of parameter U on the curve.)#"  , py::arg("C"),  py::arg("U"))
        .def_static("D0_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & ) >(&IntCurveSurface_TheHCurveTool::D0),
                    R"#(Computes the point of parameter U on the curve.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & , gp_Vec & ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & , gp_Vec & ) >(&IntCurveSurface_TheHCurveTool::D1),
                    R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def_static("D2_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&IntCurveSurface_TheHCurveTool::D2),
                    R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D3_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&IntCurveSurface_TheHCurveTool::D3),
                    R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C3.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("DN_s",
                    (gp_Vec (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , const Standard_Integer ) ) static_cast<gp_Vec (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real , const Standard_Integer ) >(&IntCurveSurface_TheHCurveTool::DN),
                    R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the current interval is not CN. Raised if N < 1.)#"  , py::arg("C"),  py::arg("U"),  py::arg("N"))
        .def_static("Resolution_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HCurve> & , const Standard_Real ) >(&IntCurveSurface_TheHCurveTool::Resolution),
                    R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("C"),  py::arg("R3d"))
        .def_static("GetType_s",
                    (GeomAbs_CurveType (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<GeomAbs_CurveType (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&IntCurveSurface_TheHCurveTool::GetType),
                    R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#"  , py::arg("C"))
        .def_static("Line_s",
                    (gp_Lin (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<gp_Lin (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&IntCurveSurface_TheHCurveTool::Line),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Circle_s",
                    (gp_Circ (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<gp_Circ (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&IntCurveSurface_TheHCurveTool::Circle),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Ellipse_s",
                    (gp_Elips (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<gp_Elips (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&IntCurveSurface_TheHCurveTool::Ellipse),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Hyperbola_s",
                    (gp_Hypr (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<gp_Hypr (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&IntCurveSurface_TheHCurveTool::Hyperbola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Parabola_s",
                    (gp_Parab (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<gp_Parab (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&IntCurveSurface_TheHCurveTool::Parabola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Bezier_s",
                    (opencascade::handle<Geom_BezierCurve> (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<opencascade::handle<Geom_BezierCurve> (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&IntCurveSurface_TheHCurveTool::Bezier),
                    R"#(None)#"  , py::arg("C"))
        .def_static("BSpline_s",
                    (opencascade::handle<Geom_BSplineCurve> (*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<opencascade::handle<Geom_BSplineCurve> (*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&IntCurveSurface_TheHCurveTool::BSpline),
                    R"#(None)#"  , py::arg("C"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntCurveSurface_TheInterferenceOfHInter , shared_ptr<IntCurveSurface_TheInterferenceOfHInter> , Intf_Interference>>(m.attr("IntCurveSurface_TheInterferenceOfHInter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntCurveSurface_ThePolygonOfHInter , shared_ptr<IntCurveSurface_ThePolygonOfHInter> >>(m.attr("IntCurveSurface_ThePolygonOfHInter"))
    // constructors
    // custom constructors
    // methods
        .def("Bounding",
             (const Bnd_Box & (IntCurveSurface_ThePolygonOfHInter::*)() const) static_cast<const Bnd_Box & (IntCurveSurface_ThePolygonOfHInter::*)() const>(&IntCurveSurface_ThePolygonOfHInter::Bounding),
             R"#(Give the bounding box of the polygon.)#" )
        .def("DeflectionOverEstimation",
             (Standard_Real (IntCurveSurface_ThePolygonOfHInter::*)() const) static_cast<Standard_Real (IntCurveSurface_ThePolygonOfHInter::*)() const>(&IntCurveSurface_ThePolygonOfHInter::DeflectionOverEstimation),
             R"#(None)#" )
        .def("SetDeflectionOverEstimation",
             (void (IntCurveSurface_ThePolygonOfHInter::*)( const Standard_Real ) ) static_cast<void (IntCurveSurface_ThePolygonOfHInter::*)( const Standard_Real ) >(&IntCurveSurface_ThePolygonOfHInter::SetDeflectionOverEstimation),
             R"#(None)#"  , py::arg("x"))
        .def("Closed",
             (void (IntCurveSurface_ThePolygonOfHInter::*)( const Standard_Boolean ) ) static_cast<void (IntCurveSurface_ThePolygonOfHInter::*)( const Standard_Boolean ) >(&IntCurveSurface_ThePolygonOfHInter::Closed),
             R"#(None)#"  , py::arg("clos"))
        .def("Closed",
             (Standard_Boolean (IntCurveSurface_ThePolygonOfHInter::*)() const) static_cast<Standard_Boolean (IntCurveSurface_ThePolygonOfHInter::*)() const>(&IntCurveSurface_ThePolygonOfHInter::Closed),
             R"#(None)#" )
        .def("NbSegments",
             (Standard_Integer (IntCurveSurface_ThePolygonOfHInter::*)() const) static_cast<Standard_Integer (IntCurveSurface_ThePolygonOfHInter::*)() const>(&IntCurveSurface_ThePolygonOfHInter::NbSegments),
             R"#(Give the number of Segments in the polyline.)#" )
        .def("BeginOfSeg",
             (const gp_Pnt & (IntCurveSurface_ThePolygonOfHInter::*)( const Standard_Integer ) const) static_cast<const gp_Pnt & (IntCurveSurface_ThePolygonOfHInter::*)( const Standard_Integer ) const>(&IntCurveSurface_ThePolygonOfHInter::BeginOfSeg),
             R"#(Give the point of range Index in the Polygon.)#"  , py::arg("Index"))
        .def("EndOfSeg",
             (const gp_Pnt & (IntCurveSurface_ThePolygonOfHInter::*)( const Standard_Integer ) const) static_cast<const gp_Pnt & (IntCurveSurface_ThePolygonOfHInter::*)( const Standard_Integer ) const>(&IntCurveSurface_ThePolygonOfHInter::EndOfSeg),
             R"#(Give the point of range Index in the Polygon.)#"  , py::arg("Index"))
        .def("InfParameter",
             (Standard_Real (IntCurveSurface_ThePolygonOfHInter::*)() const) static_cast<Standard_Real (IntCurveSurface_ThePolygonOfHInter::*)() const>(&IntCurveSurface_ThePolygonOfHInter::InfParameter),
             R"#(Returns the parameter (On the curve) of the first point of the Polygon)#" )
        .def("SupParameter",
             (Standard_Real (IntCurveSurface_ThePolygonOfHInter::*)() const) static_cast<Standard_Real (IntCurveSurface_ThePolygonOfHInter::*)() const>(&IntCurveSurface_ThePolygonOfHInter::SupParameter),
             R"#(Returns the parameter (On the curve) of the last point of the Polygon)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<IntCurveSurface_ThePolygonToolOfHInter , shared_ptr<IntCurveSurface_ThePolygonToolOfHInter>>(m,"IntCurveSurface_ThePolygonToolOfHInter");

    static_cast<py::class_<IntCurveSurface_ThePolygonToolOfHInter , shared_ptr<IntCurveSurface_ThePolygonToolOfHInter> >>(m.attr("IntCurveSurface_ThePolygonToolOfHInter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Bounding_s",
                    (const Bnd_Box & (*)( const IntCurveSurface_ThePolygonOfHInter & ) ) static_cast<const Bnd_Box & (*)( const IntCurveSurface_ThePolygonOfHInter & ) >(&IntCurveSurface_ThePolygonToolOfHInter::Bounding),
                    R"#(Give the bounding box of the polygon.)#"  , py::arg("thePolygon"))
        .def_static("DeflectionOverEstimation_s",
                    (Standard_Real (*)( const IntCurveSurface_ThePolygonOfHInter & ) ) static_cast<Standard_Real (*)( const IntCurveSurface_ThePolygonOfHInter & ) >(&IntCurveSurface_ThePolygonToolOfHInter::DeflectionOverEstimation),
                    R"#(None)#"  , py::arg("thePolygon"))
        .def_static("Closed_s",
                    (Standard_Boolean (*)( const IntCurveSurface_ThePolygonOfHInter & ) ) static_cast<Standard_Boolean (*)( const IntCurveSurface_ThePolygonOfHInter & ) >(&IntCurveSurface_ThePolygonToolOfHInter::Closed),
                    R"#(None)#"  , py::arg("thePolygon"))
        .def_static("NbSegments_s",
                    (Standard_Integer (*)( const IntCurveSurface_ThePolygonOfHInter & ) ) static_cast<Standard_Integer (*)( const IntCurveSurface_ThePolygonOfHInter & ) >(&IntCurveSurface_ThePolygonToolOfHInter::NbSegments),
                    R"#(None)#"  , py::arg("thePolygon"))
        .def_static("BeginOfSeg_s",
                    (const gp_Pnt & (*)( const IntCurveSurface_ThePolygonOfHInter & , const Standard_Integer ) ) static_cast<const gp_Pnt & (*)( const IntCurveSurface_ThePolygonOfHInter & , const Standard_Integer ) >(&IntCurveSurface_ThePolygonToolOfHInter::BeginOfSeg),
                    R"#(Give the point of range Index in the Polygon.)#"  , py::arg("thePolygon"),  py::arg("Index"))
        .def_static("EndOfSeg_s",
                    (const gp_Pnt & (*)( const IntCurveSurface_ThePolygonOfHInter & , const Standard_Integer ) ) static_cast<const gp_Pnt & (*)( const IntCurveSurface_ThePolygonOfHInter & , const Standard_Integer ) >(&IntCurveSurface_ThePolygonToolOfHInter::EndOfSeg),
                    R"#(Give the point of range Index in the Polygon.)#"  , py::arg("thePolygon"),  py::arg("Index"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntCurveSurface_ThePolyhedronOfHInter , shared_ptr<IntCurveSurface_ThePolyhedronOfHInter> >>(m.attr("IntCurveSurface_ThePolyhedronOfHInter"))
    // constructors
    // custom constructors
    // methods
        .def("GetBorderDeflection",
             (Standard_Real (IntCurveSurface_ThePolyhedronOfHInter::*)() const) static_cast<Standard_Real (IntCurveSurface_ThePolyhedronOfHInter::*)() const>(&IntCurveSurface_ThePolyhedronOfHInter::GetBorderDeflection),
             R"#(This method returns a border deflection.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<IntCurveSurface_ThePolyhedronToolOfHInter , shared_ptr<IntCurveSurface_ThePolyhedronToolOfHInter>>(m,"IntCurveSurface_ThePolyhedronToolOfHInter");

    static_cast<py::class_<IntCurveSurface_ThePolyhedronToolOfHInter , shared_ptr<IntCurveSurface_ThePolyhedronToolOfHInter> >>(m.attr("IntCurveSurface_ThePolyhedronToolOfHInter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Bounding_s",
                    (const Bnd_Box & (*)( const IntCurveSurface_ThePolyhedronOfHInter & ) ) static_cast<const Bnd_Box & (*)( const IntCurveSurface_ThePolyhedronOfHInter & ) >(&IntCurveSurface_ThePolyhedronToolOfHInter::Bounding),
                    R"#(Give the bounding box of the PolyhedronTool.)#"  , py::arg("thePolyh"))
        .def_static("ComponentsBounding_s",
                    (const opencascade::handle<Bnd_HArray1OfBox> & (*)( const IntCurveSurface_ThePolyhedronOfHInter & ) ) static_cast<const opencascade::handle<Bnd_HArray1OfBox> & (*)( const IntCurveSurface_ThePolyhedronOfHInter & ) >(&IntCurveSurface_ThePolyhedronToolOfHInter::ComponentsBounding),
                    R"#(Give the array of boxes. The box <n> corresponding to the triangle <n>.)#"  , py::arg("thePolyh"))
        .def_static("DeflectionOverEstimation_s",
                    (Standard_Real (*)( const IntCurveSurface_ThePolyhedronOfHInter & ) ) static_cast<Standard_Real (*)( const IntCurveSurface_ThePolyhedronOfHInter & ) >(&IntCurveSurface_ThePolyhedronToolOfHInter::DeflectionOverEstimation),
                    R"#(Give the tolerance of the polygon.)#"  , py::arg("thePolyh"))
        .def_static("NbTriangles_s",
                    (Standard_Integer (*)( const IntCurveSurface_ThePolyhedronOfHInter & ) ) static_cast<Standard_Integer (*)( const IntCurveSurface_ThePolyhedronOfHInter & ) >(&IntCurveSurface_ThePolyhedronToolOfHInter::NbTriangles),
                    R"#(Give the number of triangles in this polyedral surface.)#"  , py::arg("thePolyh"))
        .def_static("Point_s",
                    (const gp_Pnt & (*)( const IntCurveSurface_ThePolyhedronOfHInter & , const Standard_Integer ) ) static_cast<const gp_Pnt & (*)( const IntCurveSurface_ThePolyhedronOfHInter & , const Standard_Integer ) >(&IntCurveSurface_ThePolyhedronToolOfHInter::Point),
                    R"#(Give the point of index i in the polyedral surface.)#"  , py::arg("thePolyh"),  py::arg("Index"))
        .def_static("TriConnex_s",
                    (Standard_Integer (*)( const IntCurveSurface_ThePolyhedronOfHInter & , const Standard_Integer , const Standard_Integer , const Standard_Integer , Standard_Integer & , Standard_Integer & ) ) static_cast<Standard_Integer (*)( const IntCurveSurface_ThePolyhedronOfHInter & , const Standard_Integer , const Standard_Integer , const Standard_Integer , Standard_Integer & , Standard_Integer & ) >(&IntCurveSurface_ThePolyhedronToolOfHInter::TriConnex),
                    R"#(Give the addresse Tricon of the triangle connexe to the triangle of address Triang by the edge Pivot Pedge and the third point of this connexe triangle. When we are on a free edge TriCon==0 but the function return the value of the triangle in the other side of Pivot on the free edge. Used to turn around a vertex.)#"  , py::arg("thePolyh"),  py::arg("Triang"),  py::arg("Pivot"),  py::arg("Pedge"),  py::arg("TriCon"),  py::arg("OtherP"))
        .def_static("IsOnBound_s",
                    (Standard_Boolean (*)( const IntCurveSurface_ThePolyhedronOfHInter & , const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Boolean (*)( const IntCurveSurface_ThePolyhedronOfHInter & , const Standard_Integer , const Standard_Integer ) >(&IntCurveSurface_ThePolyhedronToolOfHInter::IsOnBound),
                    R"#(This method returns true if the edge based on points with indices Index1 and Index2 represents a boundary edge. It is necessary to take into account the boundary deflection for this edge.)#"  , py::arg("thePolyh"),  py::arg("Index1"),  py::arg("Index2"))
        .def_static("GetBorderDeflection_s",
                    (Standard_Real (*)( const IntCurveSurface_ThePolyhedronOfHInter & ) ) static_cast<Standard_Real (*)( const IntCurveSurface_ThePolyhedronOfHInter & ) >(&IntCurveSurface_ThePolyhedronToolOfHInter::GetBorderDeflection),
                    R"#(This method returns a border deflection of the polyhedron.)#"  , py::arg("thePolyh"))
    // static methods using call by reference i.s.o. return
        .def_static("Triangle_s",
                    []( const IntCurveSurface_ThePolyhedronOfHInter & thePolyh,const Standard_Integer Index ){ Standard_Integer  P1; Standard_Integer  P2; Standard_Integer  P3; IntCurveSurface_ThePolyhedronToolOfHInter::Triangle(thePolyh,Index,P1,P2,P3); return std::make_tuple(P1,P2,P3); },
                    R"#(Give the indices of the 3 points of the triangle of address Index in the PolyhedronTool.)#"  , py::arg("thePolyh"),  py::arg("Index"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntCurveSurface_TheQuadCurvExactHInter , shared_ptr<IntCurveSurface_TheQuadCurvExactHInter> >>(m.attr("IntCurveSurface_TheQuadCurvExactHInter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter , shared_ptr<IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter> , math_FunctionWithDerivative>>(m.attr("IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter::*)( const Standard_Real , Standard_Real & ) >(&IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter::Value),
             R"#(Computes the value of the signed distance between the implicit surface and the point at parameter Param on the parametrised curve. Value always returns True.)#"  , py::arg("Param"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter::*)( const Standard_Real , Standard_Real & ) >(&IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter::Derivative),
             R"#(Computes the derivative of the previous function at parameter Param. Derivative always returns True.)#"  , py::arg("Param"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter::Values),
             R"#(Computes the value and the derivative of the function. returns True.)#"  , py::arg("Param"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntCurveSurface_HInter , shared_ptr<IntCurveSurface_HInter> , IntCurveSurface_Intersection>>(m.attr("IntCurveSurface_HInter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IntCurveSurface_ThePolygonToolOfHInter.hxx
// ./opencascade/IntCurveSurface_ThePolyhedronOfHInter.hxx
// ./opencascade/IntCurveSurface_TransitionOnCurve.hxx
// ./opencascade/IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter.hxx
// ./opencascade/IntCurveSurface_HInter.hxx
// ./opencascade/IntCurveSurface_IntersectionPoint.hxx
// ./opencascade/IntCurveSurface_Intersection.hxx
// ./opencascade/IntCurveSurface_TheQuadCurvExactHInter.hxx
// ./opencascade/IntCurveSurface_TheCSFunctionOfHInter.hxx
// ./opencascade/IntCurveSurface_TheHCurveTool.hxx
// ./opencascade/IntCurveSurface_SequenceOfSeg.hxx
// ./opencascade/IntCurveSurface_IntersectionSegment.hxx
// ./opencascade/IntCurveSurface_TheExactHInter.hxx
// ./opencascade/IntCurveSurface_ThePolyhedronToolOfHInter.hxx
// ./opencascade/IntCurveSurface_TheInterferenceOfHInter.hxx
// ./opencascade/IntCurveSurface_ThePolygonOfHInter.hxx
// ./opencascade/IntCurveSurface_SequenceOfPnt.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<IntCurveSurface_IntersectionSegment>(m,"IntCurveSurface_SequenceOfSeg");
    register_template_NCollection_Sequence<IntCurveSurface_IntersectionPoint>(m,"IntCurveSurface_SequenceOfPnt");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

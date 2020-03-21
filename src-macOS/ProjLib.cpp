
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_BezierCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NotImplemented.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <Standard_NoSuchObject.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Pln.hxx>
#include <gp_Pnt.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Hypr.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <ProjLib_ProjectOnPlane.hxx>
#include <ProjLib_ProjectOnSurface.hxx>
#include <ProjLib_ComputeApprox.hxx>
#include <ProjLib_ComputeApproxOnPolarSurface.hxx>
#include <ProjLib_ProjectedCurve.hxx>
#include <ProjLib_HProjectedCurve.hxx>
#include <ProjLib_CompProjectedCurve.hxx>
#include <ProjLib_HCompProjectedCurve.hxx>
#include <ProjLib_PrjResolve.hxx>
#include <ProjLib_PrjFunc.hxx>
#include <ProjLib_Projector.hxx>
#include <ProjLib_Plane.hxx>
#include <ProjLib_Cylinder.hxx>
#include <ProjLib_Cone.hxx>
#include <ProjLib_Sphere.hxx>
#include <ProjLib_Torus.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_BezierCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_Curve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NotImplemented.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Geom2d_BezierCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NotImplemented.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <gp_Circ.hxx>
#include <gp_Lin.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomAdaptor_HCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NotImplemented.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <math_Matrix.hxx>
#include <gp_Pnt2d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <gp_Circ.hxx>
#include <gp_Lin.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <Standard_NoSuchObject.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>

// module includes
#include <ProjLib.hxx>
#include <ProjLib_CompProjectedCurve.hxx>
#include <ProjLib_ComputeApprox.hxx>
#include <ProjLib_ComputeApproxOnPolarSurface.hxx>
#include <ProjLib_Cone.hxx>
#include <ProjLib_Cylinder.hxx>
#include <ProjLib_HCompProjectedCurve.hxx>
#include <ProjLib_HProjectedCurve.hxx>
#include <ProjLib_HSequenceOfHSequenceOfPnt.hxx>
#include <ProjLib_Plane.hxx>
#include <ProjLib_PrjFunc.hxx>
#include <ProjLib_PrjResolve.hxx>
#include <ProjLib_ProjectedCurve.hxx>
#include <ProjLib_ProjectOnPlane.hxx>
#include <ProjLib_ProjectOnSurface.hxx>
#include <ProjLib_Projector.hxx>
#include <ProjLib_SequenceOfHSequenceOfPnt.hxx>
#include <ProjLib_Sphere.hxx>
#include <ProjLib_Torus.hxx>

// template related includes
// ./opencascade/ProjLib_SequenceOfHSequenceOfPnt.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ProjLib(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ProjLib"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<ProjLib , shared_ptr<ProjLib>>(m,"ProjLib");

    static_cast<py::class_<ProjLib , shared_ptr<ProjLib> >>(m.attr("ProjLib"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ProjLib_CompProjectedCurve , shared_ptr<ProjLib_CompProjectedCurve> , Adaptor2d_Curve2d>>(m.attr("ProjLib_CompProjectedCurve"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (gp_Pnt2d (ProjLib_CompProjectedCurve::*)( const Standard_Real ) const) static_cast<gp_Pnt2d (ProjLib_CompProjectedCurve::*)( const Standard_Real ) const>(&ProjLib_CompProjectedCurve::Value),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"))
        .def("D0",
             (void (ProjLib_CompProjectedCurve::*)( const Standard_Real , gp_Pnt2d & ) const) static_cast<void (ProjLib_CompProjectedCurve::*)( const Standard_Real , gp_Pnt2d & ) const>(&ProjLib_CompProjectedCurve::D0),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (ProjLib_CompProjectedCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (ProjLib_CompProjectedCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&ProjLib_CompProjectedCurve::D1),
             R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (ProjLib_CompProjectedCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (ProjLib_CompProjectedCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const>(&ProjLib_CompProjectedCurve::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("DN",
             (gp_Vec2d (ProjLib_CompProjectedCurve::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec2d (ProjLib_CompProjectedCurve::*)( const Standard_Real , const Standard_Integer ) const>(&ProjLib_CompProjectedCurve::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if N < 1. Raised if N > 2.)#"  , py::arg("U"),  py::arg("N"))
        .def("FirstParameter",
             (Standard_Real (ProjLib_CompProjectedCurve::*)() const) static_cast<Standard_Real (ProjLib_CompProjectedCurve::*)() const>(&ProjLib_CompProjectedCurve::FirstParameter),
             R"#(Returns the first parameter of the curve C which has a projection on S.)#" )
        .def("LastParameter",
             (Standard_Real (ProjLib_CompProjectedCurve::*)() const) static_cast<Standard_Real (ProjLib_CompProjectedCurve::*)() const>(&ProjLib_CompProjectedCurve::LastParameter),
             R"#(Returns the last parameter of the curve C which has a projection on S.)#" )
        .def("NbIntervals",
             (Standard_Integer (ProjLib_CompProjectedCurve::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (ProjLib_CompProjectedCurve::*)( const GeomAbs_Shape ) const>(&ProjLib_CompProjectedCurve::NbIntervals),
             R"#(Returns the number of intervals which define an S continuous part of the projected curve)#"  , py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor2d_HCurve2d> (ProjLib_CompProjectedCurve::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<opencascade::handle<Adaptor2d_HCurve2d> (ProjLib_CompProjectedCurve::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const>(&ProjLib_CompProjectedCurve::Trim),
             R"#(Returns a curve equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 2d points confusion. If <First> >= <Last>)#"  , py::arg("FirstParam"),  py::arg("LastParam"),  py::arg("Tol"))
        .def("Intervals",
             (void (ProjLib_CompProjectedCurve::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (ProjLib_CompProjectedCurve::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&ProjLib_CompProjectedCurve::Intervals),
             R"#(Returns the parameters corresponding to S discontinuities.)#"  , py::arg("T"),  py::arg("S"))
        .def("GetType",
             (GeomAbs_CurveType (ProjLib_CompProjectedCurve::*)() const) static_cast<GeomAbs_CurveType (ProjLib_CompProjectedCurve::*)() const>(&ProjLib_CompProjectedCurve::GetType),
             R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ProjLib_ComputeApprox , shared_ptr<ProjLib_ComputeApprox> >>(m.attr("ProjLib_ComputeApprox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ProjLib_ComputeApproxOnPolarSurface , shared_ptr<ProjLib_ComputeApproxOnPolarSurface> >>(m.attr("ProjLib_ComputeApproxOnPolarSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ProjLib_HCompProjectedCurve ,opencascade::handle<ProjLib_HCompProjectedCurve> , Adaptor2d_HCurve2d>>(m.attr("ProjLib_HCompProjectedCurve"))
    // constructors
    // custom constructors
    // methods
        .def("Curve2d",
             (const Adaptor2d_Curve2d & (ProjLib_HCompProjectedCurve::*)() const) static_cast<const Adaptor2d_Curve2d & (ProjLib_HCompProjectedCurve::*)() const>(&ProjLib_HCompProjectedCurve::Curve2d),
             R"#(Returns the curve used to create the GenHCurve2d. This is redefined from HCurve2d, cannot be inline.)#" )
        .def("ChangeCurve2d",
             (ProjLib_CompProjectedCurve & (ProjLib_HCompProjectedCurve::*)() ) static_cast<ProjLib_CompProjectedCurve & (ProjLib_HCompProjectedCurve::*)() >(&ProjLib_HCompProjectedCurve::ChangeCurve2d),
             R"#(Returns the curve used to create the GenHCurve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ProjLib_HCompProjectedCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ProjLib_HCompProjectedCurve::*)() const>(&ProjLib_HCompProjectedCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ProjLib_HCompProjectedCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ProjLib_HCompProjectedCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ProjLib_HProjectedCurve ,opencascade::handle<ProjLib_HProjectedCurve> , Adaptor2d_HCurve2d>>(m.attr("ProjLib_HProjectedCurve"))
    // constructors
    // custom constructors
    // methods
        .def("Curve2d",
             (const Adaptor2d_Curve2d & (ProjLib_HProjectedCurve::*)() const) static_cast<const Adaptor2d_Curve2d & (ProjLib_HProjectedCurve::*)() const>(&ProjLib_HProjectedCurve::Curve2d),
             R"#(Returns the curve used to create the GenHCurve2d. This is redefined from HCurve2d, cannot be inline.)#" )
        .def("ChangeCurve2d",
             (ProjLib_ProjectedCurve & (ProjLib_HProjectedCurve::*)() ) static_cast<ProjLib_ProjectedCurve & (ProjLib_HProjectedCurve::*)() >(&ProjLib_HProjectedCurve::ChangeCurve2d),
             R"#(Returns the curve used to create the GenHCurve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ProjLib_HProjectedCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ProjLib_HProjectedCurve::*)() const>(&ProjLib_HProjectedCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ProjLib_HProjectedCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ProjLib_HProjectedCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ProjLib_HSequenceOfHSequenceOfPnt ,opencascade::handle<ProjLib_HSequenceOfHSequenceOfPnt> , ProjLib_SequenceOfHSequenceOfPnt, Standard_Transient>>(m.attr("ProjLib_HSequenceOfHSequenceOfPnt"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<TColgp_HSequenceOfPnt> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const ProjLib_SequenceOfHSequenceOfPnt & (ProjLib_HSequenceOfHSequenceOfPnt::*)() const) static_cast<const ProjLib_SequenceOfHSequenceOfPnt & (ProjLib_HSequenceOfHSequenceOfPnt::*)() const>(&ProjLib_HSequenceOfHSequenceOfPnt::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (ProjLib_HSequenceOfHSequenceOfPnt::*)(  const opencascade::handle<TColgp_HSequenceOfPnt> & ) ) static_cast<void (ProjLib_HSequenceOfHSequenceOfPnt::*)(  const opencascade::handle<TColgp_HSequenceOfPnt> & ) >(&ProjLib_HSequenceOfHSequenceOfPnt::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (ProjLib_HSequenceOfHSequenceOfPnt::*)( NCollection_Sequence<opencascade::handle<TColgp_HSequenceOfPnt> > & ) ) static_cast<void (ProjLib_HSequenceOfHSequenceOfPnt::*)( NCollection_Sequence<opencascade::handle<TColgp_HSequenceOfPnt> > & ) >(&ProjLib_HSequenceOfHSequenceOfPnt::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (ProjLib_SequenceOfHSequenceOfPnt & (ProjLib_HSequenceOfHSequenceOfPnt::*)() ) static_cast<ProjLib_SequenceOfHSequenceOfPnt & (ProjLib_HSequenceOfHSequenceOfPnt::*)() >(&ProjLib_HSequenceOfHSequenceOfPnt::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ProjLib_HSequenceOfHSequenceOfPnt::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ProjLib_HSequenceOfHSequenceOfPnt::*)() const>(&ProjLib_HSequenceOfHSequenceOfPnt::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ProjLib_HSequenceOfHSequenceOfPnt::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ProjLib_HSequenceOfHSequenceOfPnt::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ProjLib_PrjFunc , shared_ptr<ProjLib_PrjFunc> , math_FunctionSetWithDerivatives>>(m.attr("ProjLib_PrjFunc"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (ProjLib_PrjFunc::*)() const) static_cast<Standard_Integer (ProjLib_PrjFunc::*)() const>(&ProjLib_PrjFunc::NbVariables),
             R"#(returns the number of variables of the function.)#" )
        .def("NbEquations",
             (Standard_Integer (ProjLib_PrjFunc::*)() const) static_cast<Standard_Integer (ProjLib_PrjFunc::*)() const>(&ProjLib_PrjFunc::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (ProjLib_PrjFunc::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (ProjLib_PrjFunc::*)( const math_Vector & , math_Vector & ) >(&ProjLib_PrjFunc::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (ProjLib_PrjFunc::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (ProjLib_PrjFunc::*)( const math_Vector & , math_Matrix & ) >(&ProjLib_PrjFunc::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (ProjLib_PrjFunc::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (ProjLib_PrjFunc::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&ProjLib_PrjFunc::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ProjLib_PrjResolve , shared_ptr<ProjLib_PrjResolve> >>(m.attr("ProjLib_PrjResolve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ProjLib_ProjectOnPlane , shared_ptr<ProjLib_ProjectOnPlane> , Adaptor3d_Curve>>(m.attr("ProjLib_ProjectOnPlane"))
    // constructors
    // custom constructors
    // methods
        .def("FirstParameter",
             (Standard_Real (ProjLib_ProjectOnPlane::*)() const) static_cast<Standard_Real (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (ProjLib_ProjectOnPlane::*)() const) static_cast<Standard_Real (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (ProjLib_ProjectOnPlane::*)() const) static_cast<GeomAbs_Shape (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (ProjLib_ProjectOnPlane::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (ProjLib_ProjectOnPlane::*)( const GeomAbs_Shape ) const>(&ProjLib_ProjectOnPlane::NbIntervals),
             R"#(If necessary, breaks the curve in intervals of continuity <S>. And returns the number of intervals.)#"  , py::arg("S"))
        .def("Intervals",
             (void (ProjLib_ProjectOnPlane::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (ProjLib_ProjectOnPlane::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&ProjLib_ProjectOnPlane::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor3d_HCurve> (ProjLib_ProjectOnPlane::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<opencascade::handle<Adaptor3d_HCurve> (ProjLib_ProjectOnPlane::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const>(&ProjLib_ProjectOnPlane::Trim),
             R"#(Returns a curve equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsClosed",
             (Standard_Boolean (ProjLib_ProjectOnPlane::*)() const) static_cast<Standard_Boolean (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (ProjLib_ProjectOnPlane::*)() const) static_cast<Standard_Boolean (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (ProjLib_ProjectOnPlane::*)() const) static_cast<Standard_Real (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt (ProjLib_ProjectOnPlane::*)( const Standard_Real ) const) static_cast<gp_Pnt (ProjLib_ProjectOnPlane::*)( const Standard_Real ) const>(&ProjLib_ProjectOnPlane::Value),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"))
        .def("D0",
             (void (ProjLib_ProjectOnPlane::*)( const Standard_Real , gp_Pnt & ) const) static_cast<void (ProjLib_ProjectOnPlane::*)( const Standard_Real , gp_Pnt & ) const>(&ProjLib_ProjectOnPlane::D0),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (ProjLib_ProjectOnPlane::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const) static_cast<void (ProjLib_ProjectOnPlane::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const>(&ProjLib_ProjectOnPlane::D1),
             R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (ProjLib_ProjectOnPlane::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const) static_cast<void (ProjLib_ProjectOnPlane::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const>(&ProjLib_ProjectOnPlane::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (ProjLib_ProjectOnPlane::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) const) static_cast<void (ProjLib_ProjectOnPlane::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) const>(&ProjLib_ProjectOnPlane::D3),
             R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (ProjLib_ProjectOnPlane::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec (ProjLib_ProjectOnPlane::*)( const Standard_Real , const Standard_Integer ) const>(&ProjLib_ProjectOnPlane::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the current interval is not CN. Raised if N < 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Resolution",
             (Standard_Real (ProjLib_ProjectOnPlane::*)( const Standard_Real ) const) static_cast<Standard_Real (ProjLib_ProjectOnPlane::*)( const Standard_Real ) const>(&ProjLib_ProjectOnPlane::Resolution),
             R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (ProjLib_ProjectOnPlane::*)() const) static_cast<GeomAbs_CurveType (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::GetType),
             R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#" )
        .def("Line",
             (gp_Lin (ProjLib_ProjectOnPlane::*)() const) static_cast<gp_Lin (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ (ProjLib_ProjectOnPlane::*)() const) static_cast<gp_Circ (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::Circle),
             R"#(None)#" )
        .def("Ellipse",
             (gp_Elips (ProjLib_ProjectOnPlane::*)() const) static_cast<gp_Elips (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::Ellipse),
             R"#(None)#" )
        .def("Hyperbola",
             (gp_Hypr (ProjLib_ProjectOnPlane::*)() const) static_cast<gp_Hypr (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::Hyperbola),
             R"#(None)#" )
        .def("Parabola",
             (gp_Parab (ProjLib_ProjectOnPlane::*)() const) static_cast<gp_Parab (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::Parabola),
             R"#(None)#" )
        .def("Degree",
             (Standard_Integer (ProjLib_ProjectOnPlane::*)() const) static_cast<Standard_Integer (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::Degree),
             R"#(None)#" )
        .def("IsRational",
             (Standard_Boolean (ProjLib_ProjectOnPlane::*)() const) static_cast<Standard_Boolean (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::IsRational),
             R"#(None)#" )
        .def("NbPoles",
             (Standard_Integer (ProjLib_ProjectOnPlane::*)() const) static_cast<Standard_Integer (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::NbPoles),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (ProjLib_ProjectOnPlane::*)() const) static_cast<Standard_Integer (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::NbKnots),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom_BezierCurve> (ProjLib_ProjectOnPlane::*)() const) static_cast<opencascade::handle<Geom_BezierCurve> (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::Bezier),
             R"#(Warning ! this will NOT make a copy of the Bezier Curve : If you want to modify the Curve please make a copy yourself Also it will NOT trim the surface to myFirst/Last.)#" )
        .def("BSpline",
             (opencascade::handle<Geom_BSplineCurve> (ProjLib_ProjectOnPlane::*)() const) static_cast<opencascade::handle<Geom_BSplineCurve> (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::BSpline),
             R"#(Warning ! this will NOT make a copy of the BSpline Curve : If you want to modify the Curve please make a copy yourself Also it will NOT trim the surface to myFirst/Last.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ProjLib_ProjectOnSurface , shared_ptr<ProjLib_ProjectOnSurface> >>(m.attr("ProjLib_ProjectOnSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ProjLib_ProjectedCurve , shared_ptr<ProjLib_ProjectedCurve> , Adaptor2d_Curve2d>>(m.attr("ProjLib_ProjectedCurve"))
    // constructors
    // custom constructors
    // methods
        .def("FirstParameter",
             (Standard_Real (ProjLib_ProjectedCurve::*)() const) static_cast<Standard_Real (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (ProjLib_ProjectedCurve::*)() const) static_cast<Standard_Real (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (ProjLib_ProjectedCurve::*)() const) static_cast<GeomAbs_Shape (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (ProjLib_ProjectedCurve::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (ProjLib_ProjectedCurve::*)( const GeomAbs_Shape ) const>(&ProjLib_ProjectedCurve::NbIntervals),
             R"#(If necessary, breaks the curve in intervals of continuity <S>. And returns the number of intervals.)#"  , py::arg("S"))
        .def("Intervals",
             (void (ProjLib_ProjectedCurve::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (ProjLib_ProjectedCurve::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&ProjLib_ProjectedCurve::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor2d_HCurve2d> (ProjLib_ProjectedCurve::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<opencascade::handle<Adaptor2d_HCurve2d> (ProjLib_ProjectedCurve::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const>(&ProjLib_ProjectedCurve::Trim),
             R"#(Returns a curve equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsClosed",
             (Standard_Boolean (ProjLib_ProjectedCurve::*)() const) static_cast<Standard_Boolean (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (ProjLib_ProjectedCurve::*)() const) static_cast<Standard_Boolean (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (ProjLib_ProjectedCurve::*)() const) static_cast<Standard_Real (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt2d (ProjLib_ProjectedCurve::*)( const Standard_Real ) const) static_cast<gp_Pnt2d (ProjLib_ProjectedCurve::*)( const Standard_Real ) const>(&ProjLib_ProjectedCurve::Value),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"))
        .def("D0",
             (void (ProjLib_ProjectedCurve::*)( const Standard_Real , gp_Pnt2d & ) const) static_cast<void (ProjLib_ProjectedCurve::*)( const Standard_Real , gp_Pnt2d & ) const>(&ProjLib_ProjectedCurve::D0),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (ProjLib_ProjectedCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (ProjLib_ProjectedCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&ProjLib_ProjectedCurve::D1),
             R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (ProjLib_ProjectedCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (ProjLib_ProjectedCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const>(&ProjLib_ProjectedCurve::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (ProjLib_ProjectedCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (ProjLib_ProjectedCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const>(&ProjLib_ProjectedCurve::D3),
             R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (ProjLib_ProjectedCurve::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec2d (ProjLib_ProjectedCurve::*)( const Standard_Real , const Standard_Integer ) const>(&ProjLib_ProjectedCurve::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the current interval is not CN. Raised if N < 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Resolution",
             (Standard_Real (ProjLib_ProjectedCurve::*)( const Standard_Real ) const) static_cast<Standard_Real (ProjLib_ProjectedCurve::*)( const Standard_Real ) const>(&ProjLib_ProjectedCurve::Resolution),
             R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (ProjLib_ProjectedCurve::*)() const) static_cast<GeomAbs_CurveType (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::GetType),
             R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#" )
        .def("Line",
             (gp_Lin2d (ProjLib_ProjectedCurve::*)() const) static_cast<gp_Lin2d (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ2d (ProjLib_ProjectedCurve::*)() const) static_cast<gp_Circ2d (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::Circle),
             R"#(None)#" )
        .def("Ellipse",
             (gp_Elips2d (ProjLib_ProjectedCurve::*)() const) static_cast<gp_Elips2d (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::Ellipse),
             R"#(None)#" )
        .def("Hyperbola",
             (gp_Hypr2d (ProjLib_ProjectedCurve::*)() const) static_cast<gp_Hypr2d (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::Hyperbola),
             R"#(None)#" )
        .def("Parabola",
             (gp_Parab2d (ProjLib_ProjectedCurve::*)() const) static_cast<gp_Parab2d (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::Parabola),
             R"#(None)#" )
        .def("Degree",
             (Standard_Integer (ProjLib_ProjectedCurve::*)() const) static_cast<Standard_Integer (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::Degree),
             R"#(None)#" )
        .def("IsRational",
             (Standard_Boolean (ProjLib_ProjectedCurve::*)() const) static_cast<Standard_Boolean (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::IsRational),
             R"#(None)#" )
        .def("NbPoles",
             (Standard_Integer (ProjLib_ProjectedCurve::*)() const) static_cast<Standard_Integer (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::NbPoles),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (ProjLib_ProjectedCurve::*)() const) static_cast<Standard_Integer (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::NbKnots),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom2d_BezierCurve> (ProjLib_ProjectedCurve::*)() const) static_cast<opencascade::handle<Geom2d_BezierCurve> (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::Bezier),
             R"#(Warning ! This will NOT make a copy of the -- Bezier Curve - If you want to modify -- the Curve please make a copy yourself -- Also it will NOT trim the surface to -- myFirst/Last.)#" )
        .def("BSpline",
             (opencascade::handle<Geom2d_BSplineCurve> (ProjLib_ProjectedCurve::*)() const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::BSpline),
             R"#(Warning ! This will NOT make a copy of the BSpline Curve - If you want to modify the Curve please make a copy yourself Also it will NOT trim the surface to myFirst/Last.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ProjLib_Projector , shared_ptr<ProjLib_Projector> >>(m.attr("ProjLib_Projector"))
    // constructors
    // custom constructors
    // methods
        .def("Project",
             (void (ProjLib_Projector::*)( const gp_Lin & ) ) static_cast<void (ProjLib_Projector::*)( const gp_Lin & ) >(&ProjLib_Projector::Project),
             R"#(None)#"  , py::arg("L"))
        .def("Project",
             (void (ProjLib_Projector::*)( const gp_Circ & ) ) static_cast<void (ProjLib_Projector::*)( const gp_Circ & ) >(&ProjLib_Projector::Project),
             R"#(None)#"  , py::arg("C"))
        .def("Project",
             (void (ProjLib_Projector::*)( const gp_Elips & ) ) static_cast<void (ProjLib_Projector::*)( const gp_Elips & ) >(&ProjLib_Projector::Project),
             R"#(None)#"  , py::arg("E"))
        .def("Project",
             (void (ProjLib_Projector::*)( const gp_Parab & ) ) static_cast<void (ProjLib_Projector::*)( const gp_Parab & ) >(&ProjLib_Projector::Project),
             R"#(None)#"  , py::arg("P"))
        .def("Project",
             (void (ProjLib_Projector::*)( const gp_Hypr & ) ) static_cast<void (ProjLib_Projector::*)( const gp_Hypr & ) >(&ProjLib_Projector::Project),
             R"#(None)#"  , py::arg("H"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ProjLib_Cone , shared_ptr<ProjLib_Cone> , ProjLib_Projector>>(m.attr("ProjLib_Cone"))
    // constructors
    // custom constructors
    // methods
        .def("Project",
             (void (ProjLib_Cone::*)( const gp_Lin & ) ) static_cast<void (ProjLib_Cone::*)( const gp_Lin & ) >(&ProjLib_Cone::Project),
             R"#(None)#"  , py::arg("L"))
        .def("Project",
             (void (ProjLib_Cone::*)( const gp_Circ & ) ) static_cast<void (ProjLib_Cone::*)( const gp_Circ & ) >(&ProjLib_Cone::Project),
             R"#(None)#"  , py::arg("C"))
        .def("Project",
             (void (ProjLib_Cone::*)( const gp_Elips & ) ) static_cast<void (ProjLib_Cone::*)( const gp_Elips & ) >(&ProjLib_Cone::Project),
             R"#(None)#"  , py::arg("E"))
        .def("Project",
             (void (ProjLib_Cone::*)( const gp_Parab & ) ) static_cast<void (ProjLib_Cone::*)( const gp_Parab & ) >(&ProjLib_Cone::Project),
             R"#(None)#"  , py::arg("P"))
        .def("Project",
             (void (ProjLib_Cone::*)( const gp_Hypr & ) ) static_cast<void (ProjLib_Cone::*)( const gp_Hypr & ) >(&ProjLib_Cone::Project),
             R"#(None)#"  , py::arg("H"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ProjLib_Cylinder , shared_ptr<ProjLib_Cylinder> , ProjLib_Projector>>(m.attr("ProjLib_Cylinder"))
    // constructors
    // custom constructors
    // methods
        .def("Project",
             (void (ProjLib_Cylinder::*)( const gp_Lin & ) ) static_cast<void (ProjLib_Cylinder::*)( const gp_Lin & ) >(&ProjLib_Cylinder::Project),
             R"#(None)#"  , py::arg("L"))
        .def("Project",
             (void (ProjLib_Cylinder::*)( const gp_Circ & ) ) static_cast<void (ProjLib_Cylinder::*)( const gp_Circ & ) >(&ProjLib_Cylinder::Project),
             R"#(None)#"  , py::arg("C"))
        .def("Project",
             (void (ProjLib_Cylinder::*)( const gp_Elips & ) ) static_cast<void (ProjLib_Cylinder::*)( const gp_Elips & ) >(&ProjLib_Cylinder::Project),
             R"#(None)#"  , py::arg("E"))
        .def("Project",
             (void (ProjLib_Cylinder::*)( const gp_Parab & ) ) static_cast<void (ProjLib_Cylinder::*)( const gp_Parab & ) >(&ProjLib_Cylinder::Project),
             R"#(None)#"  , py::arg("P"))
        .def("Project",
             (void (ProjLib_Cylinder::*)( const gp_Hypr & ) ) static_cast<void (ProjLib_Cylinder::*)( const gp_Hypr & ) >(&ProjLib_Cylinder::Project),
             R"#(None)#"  , py::arg("H"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ProjLib_Plane , shared_ptr<ProjLib_Plane> , ProjLib_Projector>>(m.attr("ProjLib_Plane"))
    // constructors
    // custom constructors
    // methods
        .def("Project",
             (void (ProjLib_Plane::*)( const gp_Lin & ) ) static_cast<void (ProjLib_Plane::*)( const gp_Lin & ) >(&ProjLib_Plane::Project),
             R"#(None)#"  , py::arg("L"))
        .def("Project",
             (void (ProjLib_Plane::*)( const gp_Circ & ) ) static_cast<void (ProjLib_Plane::*)( const gp_Circ & ) >(&ProjLib_Plane::Project),
             R"#(None)#"  , py::arg("C"))
        .def("Project",
             (void (ProjLib_Plane::*)( const gp_Elips & ) ) static_cast<void (ProjLib_Plane::*)( const gp_Elips & ) >(&ProjLib_Plane::Project),
             R"#(None)#"  , py::arg("E"))
        .def("Project",
             (void (ProjLib_Plane::*)( const gp_Parab & ) ) static_cast<void (ProjLib_Plane::*)( const gp_Parab & ) >(&ProjLib_Plane::Project),
             R"#(None)#"  , py::arg("P"))
        .def("Project",
             (void (ProjLib_Plane::*)( const gp_Hypr & ) ) static_cast<void (ProjLib_Plane::*)( const gp_Hypr & ) >(&ProjLib_Plane::Project),
             R"#(None)#"  , py::arg("H"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ProjLib_Sphere , shared_ptr<ProjLib_Sphere> , ProjLib_Projector>>(m.attr("ProjLib_Sphere"))
    // constructors
    // custom constructors
    // methods
        .def("Project",
             (void (ProjLib_Sphere::*)( const gp_Lin & ) ) static_cast<void (ProjLib_Sphere::*)( const gp_Lin & ) >(&ProjLib_Sphere::Project),
             R"#(None)#"  , py::arg("L"))
        .def("Project",
             (void (ProjLib_Sphere::*)( const gp_Circ & ) ) static_cast<void (ProjLib_Sphere::*)( const gp_Circ & ) >(&ProjLib_Sphere::Project),
             R"#(None)#"  , py::arg("C"))
        .def("Project",
             (void (ProjLib_Sphere::*)( const gp_Elips & ) ) static_cast<void (ProjLib_Sphere::*)( const gp_Elips & ) >(&ProjLib_Sphere::Project),
             R"#(None)#"  , py::arg("E"))
        .def("Project",
             (void (ProjLib_Sphere::*)( const gp_Parab & ) ) static_cast<void (ProjLib_Sphere::*)( const gp_Parab & ) >(&ProjLib_Sphere::Project),
             R"#(None)#"  , py::arg("P"))
        .def("Project",
             (void (ProjLib_Sphere::*)( const gp_Hypr & ) ) static_cast<void (ProjLib_Sphere::*)( const gp_Hypr & ) >(&ProjLib_Sphere::Project),
             R"#(None)#"  , py::arg("H"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ProjLib_Torus , shared_ptr<ProjLib_Torus> , ProjLib_Projector>>(m.attr("ProjLib_Torus"))
    // constructors
    // custom constructors
    // methods
        .def("Project",
             (void (ProjLib_Torus::*)( const gp_Lin & ) ) static_cast<void (ProjLib_Torus::*)( const gp_Lin & ) >(&ProjLib_Torus::Project),
             R"#(None)#"  , py::arg("L"))
        .def("Project",
             (void (ProjLib_Torus::*)( const gp_Circ & ) ) static_cast<void (ProjLib_Torus::*)( const gp_Circ & ) >(&ProjLib_Torus::Project),
             R"#(None)#"  , py::arg("C"))
        .def("Project",
             (void (ProjLib_Torus::*)( const gp_Elips & ) ) static_cast<void (ProjLib_Torus::*)( const gp_Elips & ) >(&ProjLib_Torus::Project),
             R"#(None)#"  , py::arg("E"))
        .def("Project",
             (void (ProjLib_Torus::*)( const gp_Parab & ) ) static_cast<void (ProjLib_Torus::*)( const gp_Parab & ) >(&ProjLib_Torus::Project),
             R"#(None)#"  , py::arg("P"))
        .def("Project",
             (void (ProjLib_Torus::*)( const gp_Hypr & ) ) static_cast<void (ProjLib_Torus::*)( const gp_Hypr & ) >(&ProjLib_Torus::Project),
             R"#(None)#"  , py::arg("H"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/ProjLib_Projector.hxx
// ./opencascade/ProjLib_Cylinder.hxx
// ./opencascade/ProjLib.hxx
// ./opencascade/ProjLib_ComputeApprox.hxx
// ./opencascade/ProjLib_ComputeApproxOnPolarSurface.hxx
// ./opencascade/ProjLib_HCompProjectedCurve.hxx
// ./opencascade/ProjLib_Plane.hxx
// ./opencascade/ProjLib_ProjectedCurve.hxx
// ./opencascade/ProjLib_SequenceOfHSequenceOfPnt.hxx
// ./opencascade/ProjLib_CompProjectedCurve.hxx
// ./opencascade/ProjLib_Torus.hxx
// ./opencascade/ProjLib_ProjectOnPlane.hxx
// ./opencascade/ProjLib_PrjResolve.hxx
// ./opencascade/ProjLib_HSequenceOfHSequenceOfPnt.hxx
// ./opencascade/ProjLib_ProjectOnSurface.hxx
// ./opencascade/ProjLib_HProjectedCurve.hxx
// ./opencascade/ProjLib_PrjFunc.hxx
// ./opencascade/ProjLib_Sphere.hxx
// ./opencascade/ProjLib_Cone.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<TColgp_HSequenceOfPnt> >(m,"ProjLib_SequenceOfHSequenceOfPnt");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

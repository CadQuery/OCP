
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Adaptor2d_HCurve2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Geom2d_BezierCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <Geom2dAdaptor_GHCurve.hxx>
#include <Geom2dAdaptor_HCurve.hxx>

// module includes
#include <Geom2dAdaptor.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <Geom2dAdaptor_GHCurve.hxx>
#include <Geom2dAdaptor_HCurve.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2dAdaptor(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Geom2dAdaptor"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<Geom2dAdaptor , shared_ptr<Geom2dAdaptor>>(m,"Geom2dAdaptor");

    static_cast<py::class_<Geom2dAdaptor , shared_ptr<Geom2dAdaptor>  >>(m.attr("Geom2dAdaptor"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("MakeCurve_s",
                    (opencascade::handle<Geom2d_Curve> (*)( const Adaptor2d_Curve2d &  ) ) static_cast<opencascade::handle<Geom2d_Curve> (*)( const Adaptor2d_Curve2d &  ) >(&Geom2dAdaptor::MakeCurve),
                    R"#(Inherited from GHCurve. Provides a curve handled by reference. Creates a 2d curve from a HCurve2d. This cannot process the OtherCurves.)#"  , py::arg("HC"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dAdaptor_Curve , shared_ptr<Geom2dAdaptor_Curve>  , Adaptor2d_Curve2d >>(m.attr("Geom2dAdaptor_Curve"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom2d_Curve> & >()  , py::arg("C") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("UFirst"),  py::arg("ULast") )
    // custom constructors
    // methods
        .def("Reset",
             (void (Geom2dAdaptor_Curve::*)() ) static_cast<void (Geom2dAdaptor_Curve::*)() >(&Geom2dAdaptor_Curve::Reset),
             R"#(Reset currently loaded curve (undone Load()).)#" )
        .def("Load",
             (void (Geom2dAdaptor_Curve::*)( const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<void (Geom2dAdaptor_Curve::*)( const opencascade::handle<Geom2d_Curve> &  ) >(&Geom2dAdaptor_Curve::Load),
             R"#(None)#"  , py::arg("C"))
        .def("Load",
             (void (Geom2dAdaptor_Curve::*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Geom2dAdaptor_Curve::*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real  ) >(&Geom2dAdaptor_Curve::Load),
             R"#(ConstructionError is raised if Ufirst>Ulast)#"  , py::arg("C"),  py::arg("UFirst"),  py::arg("ULast"))
        .def("Curve",
             (const opencascade::handle<Geom2d_Curve> & (Geom2dAdaptor_Curve::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::Curve),
             R"#(None)#" )
        .def("FirstParameter",
             (Standard_Real (Geom2dAdaptor_Curve::*)() const) static_cast<Standard_Real (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (Geom2dAdaptor_Curve::*)() const) static_cast<Standard_Real (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (Geom2dAdaptor_Curve::*)() const) static_cast<GeomAbs_Shape (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (Geom2dAdaptor_Curve::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (Geom2dAdaptor_Curve::*)( const GeomAbs_Shape  ) const>(&Geom2dAdaptor_Curve::NbIntervals),
             R"#(If necessary, breaks the curve in intervals of continuity <S>. And returns the number of intervals.)#"  , py::arg("S"))
        .def("Intervals",
             (void (Geom2dAdaptor_Curve::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (Geom2dAdaptor_Curve::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&Geom2dAdaptor_Curve::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor2d_HCurve2d> (Geom2dAdaptor_Curve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor2d_HCurve2d> (Geom2dAdaptor_Curve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&Geom2dAdaptor_Curve::Trim),
             R"#(Returns a curve equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsClosed",
             (Standard_Boolean (Geom2dAdaptor_Curve::*)() const) static_cast<Standard_Boolean (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Geom2dAdaptor_Curve::*)() const) static_cast<Standard_Boolean (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (Geom2dAdaptor_Curve::*)() const) static_cast<Standard_Real (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt2d (Geom2dAdaptor_Curve::*)( const Standard_Real  ) const) static_cast<gp_Pnt2d (Geom2dAdaptor_Curve::*)( const Standard_Real  ) const>(&Geom2dAdaptor_Curve::Value),
             R"#(Computes the point of parameter U on the curve)#"  , py::arg("U"))
        .def("D0",
             (void (Geom2dAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt2d &  ) const) static_cast<void (Geom2dAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt2d &  ) const>(&Geom2dAdaptor_Curve::D0),
             R"#(Computes the point of parameter U.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom2dAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2dAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const>(&Geom2dAdaptor_Curve::D1),
             R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (Geom2dAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2dAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2dAdaptor_Curve::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom2dAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2dAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2dAdaptor_Curve::D3),
             R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Geom2dAdaptor_Curve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec2d (Geom2dAdaptor_Curve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Geom2dAdaptor_Curve::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the current interval is not CN. Raised if N < 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Resolution",
             (Standard_Real (Geom2dAdaptor_Curve::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom2dAdaptor_Curve::*)( const Standard_Real  ) const>(&Geom2dAdaptor_Curve::Resolution),
             R"#(returns the parametric resolution)#"  , py::arg("Ruv"))
        .def("GetType",
             (GeomAbs_CurveType (Geom2dAdaptor_Curve::*)() const) static_cast<GeomAbs_CurveType (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::GetType),
             R"#(None)#" )
        .def("Line",
             (gp_Lin2d (Geom2dAdaptor_Curve::*)() const) static_cast<gp_Lin2d (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ2d (Geom2dAdaptor_Curve::*)() const) static_cast<gp_Circ2d (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::Circle),
             R"#(None)#" )
        .def("Ellipse",
             (gp_Elips2d (Geom2dAdaptor_Curve::*)() const) static_cast<gp_Elips2d (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::Ellipse),
             R"#(None)#" )
        .def("Hyperbola",
             (gp_Hypr2d (Geom2dAdaptor_Curve::*)() const) static_cast<gp_Hypr2d (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::Hyperbola),
             R"#(None)#" )
        .def("Parabola",
             (gp_Parab2d (Geom2dAdaptor_Curve::*)() const) static_cast<gp_Parab2d (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::Parabola),
             R"#(None)#" )
        .def("Degree",
             (Standard_Integer (Geom2dAdaptor_Curve::*)() const) static_cast<Standard_Integer (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::Degree),
             R"#(None)#" )
        .def("IsRational",
             (Standard_Boolean (Geom2dAdaptor_Curve::*)() const) static_cast<Standard_Boolean (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::IsRational),
             R"#(None)#" )
        .def("NbPoles",
             (Standard_Integer (Geom2dAdaptor_Curve::*)() const) static_cast<Standard_Integer (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::NbPoles),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (Geom2dAdaptor_Curve::*)() const) static_cast<Standard_Integer (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::NbKnots),
             R"#(None)#" )
        .def("NbSamples",
             (Standard_Integer (Geom2dAdaptor_Curve::*)() const) static_cast<Standard_Integer (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::NbSamples),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom2d_BezierCurve> (Geom2dAdaptor_Curve::*)() const) static_cast<opencascade::handle<Geom2d_BezierCurve> (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::Bezier),
             R"#(None)#" )
        .def("BSpline",
             (opencascade::handle<Geom2d_BSplineCurve> (Geom2dAdaptor_Curve::*)() const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::BSpline),
             R"#(None)#" )
        .def("FirstParameter",
             (Standard_Real (Geom2dAdaptor_Curve::*)() const) static_cast<Standard_Real (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (Geom2dAdaptor_Curve::*)() const) static_cast<Standard_Real (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::LastParameter),
             R"#(None)#" )
        .def("Curve",
             (const opencascade::handle<Geom2d_Curve> & (Geom2dAdaptor_Curve::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::Curve),
             R"#(None)#" )
        .def("GetType",
             (GeomAbs_CurveType (Geom2dAdaptor_Curve::*)() const) static_cast<GeomAbs_CurveType (Geom2dAdaptor_Curve::*)() const>(&Geom2dAdaptor_Curve::GetType),
             R"#(None)#" )
        .def("Load",
             (void (Geom2dAdaptor_Curve::*)( const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<void (Geom2dAdaptor_Curve::*)( const opencascade::handle<Geom2d_Curve> &  ) >(&Geom2dAdaptor_Curve::Load),
             R"#(None)#"  , py::arg("C"))
        .def("Load",
             (void (Geom2dAdaptor_Curve::*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Geom2dAdaptor_Curve::*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real  ) >(&Geom2dAdaptor_Curve::Load),
             R"#(ConstructionError is raised if Ufirst>Ulast)#"  , py::arg("C"),  py::arg("UFirst"),  py::arg("ULast"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dAdaptor_GHCurve ,opencascade::handle<Geom2dAdaptor_GHCurve>  , Adaptor2d_HCurve2d >>(m.attr("Geom2dAdaptor_GHCurve"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Geom2dAdaptor_Curve & >()  , py::arg("C") )
    // custom constructors
    // methods
        .def("Set",
             (void (Geom2dAdaptor_GHCurve::*)( const Geom2dAdaptor_Curve &  ) ) static_cast<void (Geom2dAdaptor_GHCurve::*)( const Geom2dAdaptor_Curve &  ) >(&Geom2dAdaptor_GHCurve::Set),
             R"#(Sets the field of the GenHCurve2d.)#"  , py::arg("C"))
        .def("Curve2d",
             (const Adaptor2d_Curve2d & (Geom2dAdaptor_GHCurve::*)() const) static_cast<const Adaptor2d_Curve2d & (Geom2dAdaptor_GHCurve::*)() const>(&Geom2dAdaptor_GHCurve::Curve2d),
             R"#(Returns the curve used to create the GenHCurve2d. This is redefined from HCurve2d, cannot be inline.)#" )
        .def("ChangeCurve2d",
             (Geom2dAdaptor_Curve & (Geom2dAdaptor_GHCurve::*)() ) static_cast<Geom2dAdaptor_Curve & (Geom2dAdaptor_GHCurve::*)() >(&Geom2dAdaptor_GHCurve::ChangeCurve2d),
             R"#(Returns the curve used to create the GenHCurve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2dAdaptor_GHCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2dAdaptor_GHCurve::*)() const>(&Geom2dAdaptor_GHCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2dAdaptor_GHCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2dAdaptor_GHCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dAdaptor_HCurve ,opencascade::handle<Geom2dAdaptor_HCurve>  , Geom2dAdaptor_GHCurve >>(m.attr("Geom2dAdaptor_HCurve"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Geom2dAdaptor_Curve & >()  , py::arg("AS") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> & >()  , py::arg("S") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const Standard_Real,const Standard_Real >()  , py::arg("S"),  py::arg("UFirst"),  py::arg("ULast") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2dAdaptor_HCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2dAdaptor_HCurve::*)() const>(&Geom2dAdaptor_HCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2dAdaptor_HCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2dAdaptor_HCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Geom2dAdaptor_Curve.hxx
// ./opencascade/Geom2dAdaptor_HCurve.hxx
// ./opencascade/Geom2dAdaptor.hxx
// ./opencascade/Geom2dAdaptor_GHCurve.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post


// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom_BSplineSurface.hxx>
#include <Standard_ConstructionError.hxx>
#include <Geom_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Curve.hxx>
#include <gp_Ax2.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_GTrsf2d.hxx>
#include <Adaptor3d_CurveOnSurface.hxx>
#include <Geom_BoundedCurve.hxx>
#include <Geom_BoundedSurface.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_Surface.hxx>
#include <GeomLib_MakeCurvefromApprox.hxx>
#include <GeomLib_Interpolate.hxx>
#include <GeomLib_DenominatorMultiplier.hxx>
#include <GeomLib_CheckBSplineCurve.hxx>
#include <GeomLib_Check2dBSplineCurve.hxx>
#include <GeomLib_IsPlanarSurface.hxx>
#include <GeomLib_Tool.hxx>
#include <GeomLib_PolyFunc.hxx>
#include <GeomLib_LogSample.hxx>
#include <GeomLib_DenominatorMultiplier.hxx>
#include <Geom_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_OutOfRange.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Curve.hxx>
#include <gp_Pnt.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Pnt2d.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>

// module includes
#include <GeomLib.hxx>
#include <GeomLib_Array1OfMat.hxx>
#include <GeomLib_Check2dBSplineCurve.hxx>
#include <GeomLib_CheckBSplineCurve.hxx>
#include <GeomLib_CheckCurveOnSurface.hxx>
#include <GeomLib_DenominatorMultiplier.hxx>
#include <GeomLib_DenominatorMultiplierPtr.hxx>
#include <GeomLib_Interpolate.hxx>
#include <GeomLib_InterpolationErrors.hxx>
#include <GeomLib_IsPlanarSurface.hxx>
#include <GeomLib_LogSample.hxx>
#include <GeomLib_MakeCurvefromApprox.hxx>
#include <GeomLib_PolyFunc.hxx>
#include <GeomLib_Tool.hxx>

// template related includes
// ./opencascade/GeomLib_Array1OfMat.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomLib(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GeomLib"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<GeomLib , shared_ptr<GeomLib>>(m,"GeomLib");

    static_cast<py::class_<GeomLib , shared_ptr<GeomLib> >>(m.attr("GeomLib"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomLib_Check2dBSplineCurve , shared_ptr<GeomLib_Check2dBSplineCurve> >>(m.attr("GeomLib_Check2dBSplineCurve"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (GeomLib_Check2dBSplineCurve::*)() const) static_cast<Standard_Boolean (GeomLib_Check2dBSplineCurve::*)() const>(&GeomLib_Check2dBSplineCurve::IsDone),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (GeomLib_Check2dBSplineCurve::*)() const) static_cast<Standard_Boolean (GeomLib_Check2dBSplineCurve::*)() const>(&GeomLib_Check2dBSplineCurve::IsDone),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomLib_CheckBSplineCurve , shared_ptr<GeomLib_CheckBSplineCurve> >>(m.attr("GeomLib_CheckBSplineCurve"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (GeomLib_CheckBSplineCurve::*)() const) static_cast<Standard_Boolean (GeomLib_CheckBSplineCurve::*)() const>(&GeomLib_CheckBSplineCurve::IsDone),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (GeomLib_CheckBSplineCurve::*)() const) static_cast<Standard_Boolean (GeomLib_CheckBSplineCurve::*)() const>(&GeomLib_CheckBSplineCurve::IsDone),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomLib_CheckCurveOnSurface , shared_ptr<GeomLib_CheckCurveOnSurface> >>(m.attr("GeomLib_CheckCurveOnSurface"))
    // constructors
    // custom constructors
    // methods
        .def("Curve",
             (const opencascade::handle<Geom_Curve> & (GeomLib_CheckCurveOnSurface::*)() const) static_cast<const opencascade::handle<Geom_Curve> & (GeomLib_CheckCurveOnSurface::*)() const>(&GeomLib_CheckCurveOnSurface::Curve),
             R"#(Returns my3DCurve)#" )
        .def("Surface",
             (const opencascade::handle<Geom_Surface> & (GeomLib_CheckCurveOnSurface::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (GeomLib_CheckCurveOnSurface::*)() const>(&GeomLib_CheckCurveOnSurface::Surface),
             R"#(Returns mySurface)#" )
        .def("IsDone",
             (Standard_Boolean (GeomLib_CheckCurveOnSurface::*)() const) static_cast<Standard_Boolean (GeomLib_CheckCurveOnSurface::*)() const>(&GeomLib_CheckCurveOnSurface::IsDone),
             R"#(Returns true if the max distance has been found)#" )
        .def("ErrorStatus",
             (Standard_Integer (GeomLib_CheckCurveOnSurface::*)() const) static_cast<Standard_Integer (GeomLib_CheckCurveOnSurface::*)() const>(&GeomLib_CheckCurveOnSurface::ErrorStatus),
             R"#(Returns error status The possible values are: 0 - OK; 1 - null curve or surface or 2d curve; 2 - invalid parametric range; 3 - error in calculations.)#" )
        .def("MaxDistance",
             (Standard_Real (GeomLib_CheckCurveOnSurface::*)() const) static_cast<Standard_Real (GeomLib_CheckCurveOnSurface::*)() const>(&GeomLib_CheckCurveOnSurface::MaxDistance),
             R"#(Returns max distance)#" )
        .def("MaxParameter",
             (Standard_Real (GeomLib_CheckCurveOnSurface::*)() const) static_cast<Standard_Real (GeomLib_CheckCurveOnSurface::*)() const>(&GeomLib_CheckCurveOnSurface::MaxParameter),
             R"#(Returns parameter in which the distance is maximal)#" )
    // methods using call by reference i.s.o. return
        .def("Range",
             []( GeomLib_CheckCurveOnSurface &self   ){ Standard_Real  theFirst; Standard_Real  theLast; self.Range(theFirst,theLast); return std::make_tuple(theFirst,theLast); },
             R"#(Returns first and last parameter of the curves (2D- and 3D-curves are considered to have same range))#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomLib_DenominatorMultiplier , shared_ptr<GeomLib_DenominatorMultiplier> >>(m.attr("GeomLib_DenominatorMultiplier"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomLib_Interpolate , shared_ptr<GeomLib_Interpolate> >>(m.attr("GeomLib_Interpolate"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (GeomLib_Interpolate::*)() const) static_cast<Standard_Boolean (GeomLib_Interpolate::*)() const>(&GeomLib_Interpolate::IsDone),
             R"#(returns if everything went OK)#" )
        .def("Error",
             (GeomLib_InterpolationErrors (GeomLib_Interpolate::*)() const) static_cast<GeomLib_InterpolationErrors (GeomLib_Interpolate::*)() const>(&GeomLib_Interpolate::Error),
             R"#(returns the error type if any)#" )
        .def("IsDone",
             (Standard_Boolean (GeomLib_Interpolate::*)() const) static_cast<Standard_Boolean (GeomLib_Interpolate::*)() const>(&GeomLib_Interpolate::IsDone),
             R"#(returns if everything went OK)#" )
        .def("Error",
             (GeomLib_InterpolationErrors (GeomLib_Interpolate::*)() const) static_cast<GeomLib_InterpolationErrors (GeomLib_Interpolate::*)() const>(&GeomLib_Interpolate::Error),
             R"#(returns the error type if any)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomLib_IsPlanarSurface , shared_ptr<GeomLib_IsPlanarSurface> >>(m.attr("GeomLib_IsPlanarSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomLib_LogSample , shared_ptr<GeomLib_LogSample> , math_FunctionSample>>(m.attr("GeomLib_LogSample"))
    // constructors
    // custom constructors
    // methods
        .def("GetParameter",
             (Standard_Real (GeomLib_LogSample::*)( const Standard_Integer ) const) static_cast<Standard_Real (GeomLib_LogSample::*)( const Standard_Integer ) const>(&GeomLib_LogSample::GetParameter),
             R"#(Returns the value of parameter of the point of range Index : A + ((Index-1)/(NbPoints-1))*B. An exception is raised if Index<=0 or Index>NbPoints.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomLib_MakeCurvefromApprox , shared_ptr<GeomLib_MakeCurvefromApprox> >>(m.attr("GeomLib_MakeCurvefromApprox"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (GeomLib_MakeCurvefromApprox::*)() const) static_cast<Standard_Boolean (GeomLib_MakeCurvefromApprox::*)() const>(&GeomLib_MakeCurvefromApprox::IsDone),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (GeomLib_MakeCurvefromApprox::*)() const) static_cast<Standard_Boolean (GeomLib_MakeCurvefromApprox::*)() const>(&GeomLib_MakeCurvefromApprox::IsDone),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomLib_PolyFunc , shared_ptr<GeomLib_PolyFunc> , math_FunctionWithDerivative>>(m.attr("GeomLib_PolyFunc"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (GeomLib_PolyFunc::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (GeomLib_PolyFunc::*)( const Standard_Real , Standard_Real & ) >(&GeomLib_PolyFunc::Value),
             R"#(computes the value <F>of the function for the variable <X>. Returns True if the calculation were successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (GeomLib_PolyFunc::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (GeomLib_PolyFunc::*)( const Standard_Real , Standard_Real & ) >(&GeomLib_PolyFunc::Derivative),
             R"#(computes the derivative <D> of the function for the variable <X>. Returns True if the calculation were successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (GeomLib_PolyFunc::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (GeomLib_PolyFunc::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&GeomLib_PolyFunc::Values),
             R"#(computes the value <F> and the derivative <D> of the function for the variable <X>. Returns True if the calculation were successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<GeomLib_Tool , shared_ptr<GeomLib_Tool>>(m,"GeomLib_Tool");

    static_cast<py::class_<GeomLib_Tool , shared_ptr<GeomLib_Tool> >>(m.attr("GeomLib_Tool"))
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
// ./opencascade/GeomLib_DenominatorMultiplier.hxx
// ./opencascade/GeomLib_Interpolate.hxx
// ./opencascade/GeomLib.hxx
// ./opencascade/GeomLib_DenominatorMultiplierPtr.hxx
// ./opencascade/GeomLib_CheckBSplineCurve.hxx
// ./opencascade/GeomLib_Array1OfMat.hxx
// ./opencascade/GeomLib_PolyFunc.hxx
// ./opencascade/GeomLib_LogSample.hxx
// ./opencascade/GeomLib_CheckCurveOnSurface.hxx
// ./opencascade/GeomLib_InterpolationErrors.hxx
// ./opencascade/GeomLib_MakeCurvefromApprox.hxx
// ./opencascade/GeomLib_Check2dBSplineCurve.hxx
// ./opencascade/GeomLib_Tool.hxx
// ./opencascade/GeomLib_IsPlanarSurface.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<gp_Mat>(m,"GeomLib_Array1OfMat");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

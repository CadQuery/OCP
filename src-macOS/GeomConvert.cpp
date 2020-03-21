
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom_BSplineCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_ConstructionError.hxx>
#include <Geom_Curve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NotImplemented.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BoundedCurve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Standard_OutOfRange.hxx>
#include <Geom_Surface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_Surface.hxx>
#include <GeomConvert_BSplineCurveKnotSplitting.hxx>
#include <GeomConvert_BSplineSurfaceKnotSplitting.hxx>
#include <GeomConvert_BSplineCurveToBezierCurve.hxx>
#include <GeomConvert_CompCurveToBSplineCurve.hxx>
#include <GeomConvert_BSplineSurfaceToBezierSurface.hxx>
#include <GeomConvert_CompBezierSurfacesToBSplineSurface.hxx>
#include <GeomConvert_ApproxSurface.hxx>
#include <GeomConvert_ApproxCurve.hxx>
#include <Geom_BSplineSurface.hxx>

// module includes
#include <GeomConvert.hxx>
#include <GeomConvert_ApproxCurve.hxx>
#include <GeomConvert_ApproxSurface.hxx>
#include <GeomConvert_BSplineCurveKnotSplitting.hxx>
#include <GeomConvert_BSplineCurveToBezierCurve.hxx>
#include <GeomConvert_BSplineSurfaceKnotSplitting.hxx>
#include <GeomConvert_BSplineSurfaceToBezierSurface.hxx>
#include <GeomConvert_CompBezierSurfacesToBSplineSurface.hxx>
#include <GeomConvert_CompCurveToBSplineCurve.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomConvert(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GeomConvert"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<GeomConvert , shared_ptr<GeomConvert>>(m,"GeomConvert");

    static_cast<py::class_<GeomConvert , shared_ptr<GeomConvert> >>(m.attr("GeomConvert"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomConvert_ApproxCurve , shared_ptr<GeomConvert_ApproxCurve> >>(m.attr("GeomConvert_ApproxCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomConvert_ApproxSurface , shared_ptr<GeomConvert_ApproxSurface> >>(m.attr("GeomConvert_ApproxSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomConvert_BSplineCurveKnotSplitting , shared_ptr<GeomConvert_BSplineCurveKnotSplitting> >>(m.attr("GeomConvert_BSplineCurveKnotSplitting"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomConvert_BSplineCurveToBezierCurve , shared_ptr<GeomConvert_BSplineCurveToBezierCurve> >>(m.attr("GeomConvert_BSplineCurveToBezierCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomConvert_BSplineSurfaceKnotSplitting , shared_ptr<GeomConvert_BSplineSurfaceKnotSplitting> >>(m.attr("GeomConvert_BSplineSurfaceKnotSplitting"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomConvert_BSplineSurfaceToBezierSurface , shared_ptr<GeomConvert_BSplineSurfaceToBezierSurface> >>(m.attr("GeomConvert_BSplineSurfaceToBezierSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomConvert_CompBezierSurfacesToBSplineSurface , shared_ptr<GeomConvert_CompBezierSurfacesToBSplineSurface> >>(m.attr("GeomConvert_CompBezierSurfacesToBSplineSurface"))
    // constructors
    // custom constructors
    // methods
        .def("NbUKnots",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::NbUKnots),
             R"#(Returns the number of knots in the U direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("NbUPoles",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::NbUPoles),
             R"#(Returns number of poles in the U direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("NbVKnots",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::NbVKnots),
             R"#(Returns the number of knots in the V direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("NbVPoles",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::NbVPoles),
             R"#(Returns the number of poles in the V direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("Poles",
             (const opencascade::handle<TColgp_HArray2OfPnt> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<const opencascade::handle<TColgp_HArray2OfPnt> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::Poles),
             R"#(Returns the table of poles of the BSpline surface whose data is computed in this framework.)#" )
        .def("UKnots",
             (const opencascade::handle<TColStd_HArray1OfReal> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfReal> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::UKnots),
             R"#(Returns the knots table for the u parametric direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("UDegree",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::UDegree),
             R"#(Returns the degree for the u parametric direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("VKnots",
             (const opencascade::handle<TColStd_HArray1OfReal> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfReal> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::VKnots),
             R"#(Returns the knots table for the v parametric direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("VDegree",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::VDegree),
             R"#(Returns the degree for the v parametric direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("UMultiplicities",
             (const opencascade::handle<TColStd_HArray1OfInteger> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfInteger> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::UMultiplicities),
             R"#(Returns the multiplicities table for the u parametric direction of the knots of the BSpline surface whose data is computed in this framework.)#" )
        .def("VMultiplicities",
             (const opencascade::handle<TColStd_HArray1OfInteger> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfInteger> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::VMultiplicities),
             R"#(-- Returns the multiplicities table for the v parametric direction of the knots of the BSpline surface whose data is computed in this framework.)#" )
        .def("NbUKnots",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::NbUKnots),
             R"#(Returns the number of knots in the U direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("NbUPoles",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::NbUPoles),
             R"#(Returns number of poles in the U direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("NbVKnots",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::NbVKnots),
             R"#(Returns the number of knots in the V direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("NbVPoles",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::NbVPoles),
             R"#(Returns the number of poles in the V direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("Poles",
             (const opencascade::handle<TColgp_HArray2OfPnt> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<const opencascade::handle<TColgp_HArray2OfPnt> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::Poles),
             R"#(Returns the table of poles of the BSpline surface whose data is computed in this framework.)#" )
        .def("UKnots",
             (const opencascade::handle<TColStd_HArray1OfReal> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfReal> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::UKnots),
             R"#(Returns the knots table for the u parametric direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("UDegree",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::UDegree),
             R"#(Returns the degree for the u parametric direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("VKnots",
             (const opencascade::handle<TColStd_HArray1OfReal> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfReal> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::VKnots),
             R"#(Returns the knots table for the v parametric direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("VDegree",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::VDegree),
             R"#(Returns the degree for the v parametric direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("UMultiplicities",
             (const opencascade::handle<TColStd_HArray1OfInteger> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfInteger> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::UMultiplicities),
             R"#(Returns the multiplicities table for the u parametric direction of the knots of the BSpline surface whose data is computed in this framework.)#" )
        .def("VMultiplicities",
             (const opencascade::handle<TColStd_HArray1OfInteger> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfInteger> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::VMultiplicities),
             R"#(-- Returns the multiplicities table for the v parametric direction of the knots of the BSpline surface whose data is computed in this framework.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomConvert_CompCurveToBSplineCurve , shared_ptr<GeomConvert_CompCurveToBSplineCurve> >>(m.attr("GeomConvert_CompCurveToBSplineCurve"))
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
// ./opencascade/GeomConvert_BSplineCurveKnotSplitting.hxx
// ./opencascade/GeomConvert_ApproxCurve.hxx
// ./opencascade/GeomConvert_CompBezierSurfacesToBSplineSurface.hxx
// ./opencascade/GeomConvert_CompCurveToBSplineCurve.hxx
// ./opencascade/GeomConvert_BSplineSurfaceKnotSplitting.hxx
// ./opencascade/GeomConvert_BSplineCurveToBezierCurve.hxx
// ./opencascade/GeomConvert_ApproxSurface.hxx
// ./opencascade/GeomConvert.hxx
// ./opencascade/GeomConvert_BSplineSurfaceToBezierSurface.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

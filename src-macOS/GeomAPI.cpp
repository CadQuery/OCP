
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
#include <StdFail_NotDone.hxx>
#include <Geom_Curve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Geom_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pln.hxx>
#include <GeomAPI_ProjectPointOnCurve.hxx>
#include <GeomAPI_ProjectPointOnSurf.hxx>
#include <GeomAPI_ExtremaCurveCurve.hxx>
#include <GeomAPI_ExtremaCurveSurface.hxx>
#include <GeomAPI_ExtremaSurfaceSurface.hxx>
#include <GeomAPI_PointsToBSpline.hxx>
#include <GeomAPI_PointsToBSplineSurface.hxx>
#include <GeomAPI_Interpolate.hxx>
#include <GeomAPI_IntSS.hxx>
#include <GeomAPI_IntCS.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>

// module includes
#include <GeomAPI.hxx>
#include <GeomAPI_ExtremaCurveCurve.hxx>
#include <GeomAPI_ExtremaCurveSurface.hxx>
#include <GeomAPI_ExtremaSurfaceSurface.hxx>
#include <GeomAPI_IntCS.hxx>
#include <GeomAPI_Interpolate.hxx>
#include <GeomAPI_IntSS.hxx>
#include <GeomAPI_PointsToBSpline.hxx>
#include <GeomAPI_PointsToBSplineSurface.hxx>
#include <GeomAPI_ProjectPointOnCurve.hxx>
#include <GeomAPI_ProjectPointOnSurf.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomAPI(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GeomAPI"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<GeomAPI , shared_ptr<GeomAPI>>(m,"GeomAPI");

    static_cast<py::class_<GeomAPI , shared_ptr<GeomAPI> >>(m.attr("GeomAPI"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomAPI_ExtremaCurveCurve , shared_ptr<GeomAPI_ExtremaCurveCurve> >>(m.attr("GeomAPI_ExtremaCurveCurve"))
    // constructors
    // custom constructors
    // methods
        .def("Extrema",
             (const Extrema_ExtCC & (GeomAPI_ExtremaCurveCurve::*)() const) static_cast<const Extrema_ExtCC & (GeomAPI_ExtremaCurveCurve::*)() const>(&GeomAPI_ExtremaCurveCurve::Extrema),
             R"#(return the algorithmic object from Extrema)#" )
        .def("Extrema",
             (const Extrema_ExtCC & (GeomAPI_ExtremaCurveCurve::*)() const) static_cast<const Extrema_ExtCC & (GeomAPI_ExtremaCurveCurve::*)() const>(&GeomAPI_ExtremaCurveCurve::Extrema),
             R"#(return the algorithmic object from Extrema)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomAPI_ExtremaCurveSurface , shared_ptr<GeomAPI_ExtremaCurveSurface> >>(m.attr("GeomAPI_ExtremaCurveSurface"))
    // constructors
    // custom constructors
    // methods
        .def("Extrema",
             (const Extrema_ExtCS & (GeomAPI_ExtremaCurveSurface::*)() const) static_cast<const Extrema_ExtCS & (GeomAPI_ExtremaCurveSurface::*)() const>(&GeomAPI_ExtremaCurveSurface::Extrema),
             R"#(Returns the algorithmic object from Extrema)#" )
        .def("Extrema",
             (const Extrema_ExtCS & (GeomAPI_ExtremaCurveSurface::*)() const) static_cast<const Extrema_ExtCS & (GeomAPI_ExtremaCurveSurface::*)() const>(&GeomAPI_ExtremaCurveSurface::Extrema),
             R"#(Returns the algorithmic object from Extrema)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomAPI_ExtremaSurfaceSurface , shared_ptr<GeomAPI_ExtremaSurfaceSurface> >>(m.attr("GeomAPI_ExtremaSurfaceSurface"))
    // constructors
    // custom constructors
    // methods
        .def("Extrema",
             (const Extrema_ExtSS & (GeomAPI_ExtremaSurfaceSurface::*)() const) static_cast<const Extrema_ExtSS & (GeomAPI_ExtremaSurfaceSurface::*)() const>(&GeomAPI_ExtremaSurfaceSurface::Extrema),
             R"#(return the algorithmic object from Extrema)#" )
        .def("Extrema",
             (const Extrema_ExtSS & (GeomAPI_ExtremaSurfaceSurface::*)() const) static_cast<const Extrema_ExtSS & (GeomAPI_ExtremaSurfaceSurface::*)() const>(&GeomAPI_ExtremaSurfaceSurface::Extrema),
             R"#(return the algorithmic object from Extrema)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomAPI_IntCS , shared_ptr<GeomAPI_IntCS> >>(m.attr("GeomAPI_IntCS"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomAPI_IntSS , shared_ptr<GeomAPI_IntSS> >>(m.attr("GeomAPI_IntSS"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const opencascade::handle<Geom_Surface> &,const Standard_Real >()  , py::arg("S1"),  py::arg("S2"),  py::arg("Tol") )
    // custom constructors
    // methods
        .def("Perform",
             (void (GeomAPI_IntSS::*)( const opencascade::handle<Geom_Surface> & , const opencascade::handle<Geom_Surface> & , const Standard_Real ) ) static_cast<void (GeomAPI_IntSS::*)( const opencascade::handle<Geom_Surface> & , const opencascade::handle<Geom_Surface> & , const Standard_Real ) >(&GeomAPI_IntSS::Perform),
             R"#(Initializes an algorithm with the given arguments and computes the intersection curves between the two surfaces S1 and S2. Parameter Tol defines the precision of curves computation. For most cases the value 1.0e-7 is recommended to use. Warning Use function IsDone to verify that the intersections are successfully computed.)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("Tol"))
        .def("IsDone",
             (Standard_Boolean (GeomAPI_IntSS::*)() const) static_cast<Standard_Boolean (GeomAPI_IntSS::*)() const>(&GeomAPI_IntSS::IsDone),
             R"#(Returns True if the intersection was successful.)#" )
        .def("NbLines",
             (Standard_Integer (GeomAPI_IntSS::*)() const) static_cast<Standard_Integer (GeomAPI_IntSS::*)() const>(&GeomAPI_IntSS::NbLines),
             R"#(Returns the number of computed intersection curves. Exceptions StdFail_NotDone if the computation fails.)#" )
        .def("Line",
             (const opencascade::handle<Geom_Curve> & (GeomAPI_IntSS::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Geom_Curve> & (GeomAPI_IntSS::*)( const Standard_Integer ) const>(&GeomAPI_IntSS::Line),
             R"#(Returns the computed intersection curve of index Index. Exceptions StdFail_NotDone if the computation fails. Standard_OutOfRange if Index is out of range [1, NbLines] where NbLines is the number of computed intersection curves.)#"  , py::arg("Index"))
        .def("Perform",
             (void (GeomAPI_IntSS::*)( const opencascade::handle<Geom_Surface> & , const opencascade::handle<Geom_Surface> & , const Standard_Real ) ) static_cast<void (GeomAPI_IntSS::*)( const opencascade::handle<Geom_Surface> & , const opencascade::handle<Geom_Surface> & , const Standard_Real ) >(&GeomAPI_IntSS::Perform),
             R"#(Initializes an algorithm with the given arguments and computes the intersection curves between the two surfaces S1 and S2. Parameter Tol defines the precision of curves computation. For most cases the value 1.0e-7 is recommended to use. Warning Use function IsDone to verify that the intersections are successfully computed.)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("Tol"))
        .def("IsDone",
             (Standard_Boolean (GeomAPI_IntSS::*)() const) static_cast<Standard_Boolean (GeomAPI_IntSS::*)() const>(&GeomAPI_IntSS::IsDone),
             R"#(Returns True if the intersection was successful.)#" )
        .def("NbLines",
             (Standard_Integer (GeomAPI_IntSS::*)() const) static_cast<Standard_Integer (GeomAPI_IntSS::*)() const>(&GeomAPI_IntSS::NbLines),
             R"#(Returns the number of computed intersection curves. Exceptions StdFail_NotDone if the computation fails.)#" )
        .def("Line",
             (const opencascade::handle<Geom_Curve> & (GeomAPI_IntSS::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Geom_Curve> & (GeomAPI_IntSS::*)( const Standard_Integer ) const>(&GeomAPI_IntSS::Line),
             R"#(Returns the computed intersection curve of index Index. Exceptions StdFail_NotDone if the computation fails. Standard_OutOfRange if Index is out of range [1, NbLines] where NbLines is the number of computed intersection curves.)#"  , py::arg("I"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomAPI_Interpolate , shared_ptr<GeomAPI_Interpolate> >>(m.attr("GeomAPI_Interpolate"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomAPI_PointsToBSpline , shared_ptr<GeomAPI_PointsToBSpline> >>(m.attr("GeomAPI_PointsToBSpline"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomAPI_PointsToBSplineSurface , shared_ptr<GeomAPI_PointsToBSplineSurface> >>(m.attr("GeomAPI_PointsToBSplineSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomAPI_ProjectPointOnCurve , shared_ptr<GeomAPI_ProjectPointOnCurve> >>(m.attr("GeomAPI_ProjectPointOnCurve"))
    // constructors
    // custom constructors
    // methods
        .def("Extrema",
             (const Extrema_ExtPC & (GeomAPI_ProjectPointOnCurve::*)() const) static_cast<const Extrema_ExtPC & (GeomAPI_ProjectPointOnCurve::*)() const>(&GeomAPI_ProjectPointOnCurve::Extrema),
             R"#(return the algorithmic object from Extrema)#" )
        .def("Extrema",
             (const Extrema_ExtPC & (GeomAPI_ProjectPointOnCurve::*)() const) static_cast<const Extrema_ExtPC & (GeomAPI_ProjectPointOnCurve::*)() const>(&GeomAPI_ProjectPointOnCurve::Extrema),
             R"#(return the algorithmic object from Extrema)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomAPI_ProjectPointOnSurf , shared_ptr<GeomAPI_ProjectPointOnSurf> >>(m.attr("GeomAPI_ProjectPointOnSurf"))
    // constructors
    // custom constructors
    // methods
        .def("SetExtremaAlgo",
             (void (GeomAPI_ProjectPointOnSurf::*)( const Extrema_ExtAlgo ) ) static_cast<void (GeomAPI_ProjectPointOnSurf::*)( const Extrema_ExtAlgo ) >(&GeomAPI_ProjectPointOnSurf::SetExtremaAlgo),
             R"#(Sets the Extrema search algorithm - Grad or Tree. By default the Extrema is initialized with Grad algorithm.)#"  , py::arg("theAlgo"))
        .def("SetExtremaFlag",
             (void (GeomAPI_ProjectPointOnSurf::*)( const Extrema_ExtFlag ) ) static_cast<void (GeomAPI_ProjectPointOnSurf::*)( const Extrema_ExtFlag ) >(&GeomAPI_ProjectPointOnSurf::SetExtremaFlag),
             R"#(Sets the Extrema search flag - MIN or MAX or MINMAX. By default the Extrema is set to search the MinMax solutions.)#"  , py::arg("theExtFlag"))
        .def("Extrema",
             (const Extrema_ExtPS & (GeomAPI_ProjectPointOnSurf::*)() const) static_cast<const Extrema_ExtPS & (GeomAPI_ProjectPointOnSurf::*)() const>(&GeomAPI_ProjectPointOnSurf::Extrema),
             R"#(return the algorithmic object from Extrema)#" )
        .def("Extrema",
             (const Extrema_ExtPS & (GeomAPI_ProjectPointOnSurf::*)() const) static_cast<const Extrema_ExtPS & (GeomAPI_ProjectPointOnSurf::*)() const>(&GeomAPI_ProjectPointOnSurf::Extrema),
             R"#(return the algorithmic object from Extrema)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/GeomAPI_PointsToBSplineSurface.hxx
// ./opencascade/GeomAPI_IntCS.hxx
// ./opencascade/GeomAPI_ExtremaCurveSurface.hxx
// ./opencascade/GeomAPI_PointsToBSpline.hxx
// ./opencascade/GeomAPI_IntSS.hxx
// ./opencascade/GeomAPI_ProjectPointOnCurve.hxx
// ./opencascade/GeomAPI.hxx
// ./opencascade/GeomAPI_ExtremaSurfaceSurface.hxx
// ./opencascade/GeomAPI_ProjectPointOnSurf.hxx
// ./opencascade/GeomAPI_Interpolate.hxx
// ./opencascade/GeomAPI_ExtremaCurveCurve.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

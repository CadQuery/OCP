
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Geom2d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <Geom2dAdaptor_GHCurve.hxx>
#include <Geom2dAdaptor_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Geom2d_BezierCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>

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
void register_Geom2dAdaptor_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Geom2dAdaptor", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<Geom2dAdaptor , shared_ptr<Geom2dAdaptor> >(m,"Geom2dAdaptor",R"#(this package contains the geometric definition of 2d curves compatible with the Adaptor package templates.)#");
    py::class_<Geom2dAdaptor_Curve , shared_ptr<Geom2dAdaptor_Curve> , Adaptor2d_Curve2d>(m,"Geom2dAdaptor_Curve",R"#(An interface between the services provided by any curve from the package Geom2d and those required of the curve by algorithms which use it.)#");
    py::class_<Geom2dAdaptor_GHCurve ,opencascade::handle<Geom2dAdaptor_GHCurve> , Adaptor2d_HCurve2d>(m,"Geom2dAdaptor_GHCurve",R"#()#");
    py::class_<Geom2dAdaptor_HCurve ,opencascade::handle<Geom2dAdaptor_HCurve> , Geom2dAdaptor_GHCurve>(m,"Geom2dAdaptor_HCurve",R"#(Provides an interface between the services provided by any curve from the package Geom2d and those required of the curve by algorithms, which use it.Provides an interface between the services provided by any curve from the package Geom2d and those required of the curve by algorithms, which use it.Provides an interface between the services provided by any curve from the package Geom2d and those required of the curve by algorithms, which use it.)#");

};

// user-defined post-inclusion per module

// user-defined post

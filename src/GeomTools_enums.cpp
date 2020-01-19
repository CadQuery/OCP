
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <GeomTools_UndefinedTypeHandler.hxx>
#include <GeomTools_UndefinedTypeHandler.hxx>
#include <GeomTools_SurfaceSet.hxx>
#include <GeomTools_CurveSet.hxx>
#include <GeomTools_Curve2dSet.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Message_ProgressIndicator.hxx>
#include <Geom2d_Curve.hxx>
#include <Message_ProgressIndicator.hxx>
#include <Geom_Surface.hxx>
#include <Message_ProgressIndicator.hxx>
#include <Geom_Curve.hxx>

// module includes
#include <GeomTools.hxx>
#include <GeomTools_Curve2dSet.hxx>
#include <GeomTools_CurveSet.hxx>
#include <GeomTools_SurfaceSet.hxx>
#include <GeomTools_UndefinedTypeHandler.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomTools_enums(py::module &main_module) {


py::module m = main_module.def_submodule("GeomTools", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<GeomTools , shared_ptr<GeomTools>  >(m,"GeomTools",R"#(The GeomTools package provides utilities for Geometry.)#");
    py::class_<GeomTools_Curve2dSet , shared_ptr<GeomTools_Curve2dSet>  >(m,"GeomTools_Curve2dSet",R"#(Stores a set of Curves from Geom2d.)#");
    py::class_<GeomTools_CurveSet , shared_ptr<GeomTools_CurveSet>  >(m,"GeomTools_CurveSet",R"#(Stores a set of Curves from Geom.)#");
    py::class_<GeomTools_SurfaceSet , shared_ptr<GeomTools_SurfaceSet>  >(m,"GeomTools_SurfaceSet",R"#(Stores a set of Surfaces from Geom.)#");
    py::class_<GeomTools_UndefinedTypeHandler ,opencascade::handle<GeomTools_UndefinedTypeHandler>  , Standard_Transient >(m,"GeomTools_UndefinedTypeHandler",R"#()#");

};

// user-defined post-inclusion per module

// user-defined post

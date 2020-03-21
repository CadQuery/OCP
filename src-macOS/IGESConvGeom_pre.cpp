
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <IGESGeom_CopiousData.hxx>
#include <gp_Ax3.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax1.hxx>
#include <IGESGeom_TransformationMatrix.hxx>
#include <IGESGeom_SplineCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <IGESGeom_SplineSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <IGESConvGeom_GeomBuilder.hxx>

// module includes
#include <IGESConvGeom.hxx>
#include <IGESConvGeom_GeomBuilder.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESConvGeom_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IGESConvGeom", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<IGESConvGeom , shared_ptr<IGESConvGeom> >(m,"IGESConvGeom",R"#(This package is intended to gather geometric conversion which are not immediate but can be used for several purposes : mainly, standard conversion to and from CasCade geometric and topologic data, and adaptations of IGES files as required (as replacing Spline entities to BSpline equivalents).)#");
    py::class_<IGESConvGeom_GeomBuilder , shared_ptr<IGESConvGeom_GeomBuilder> >(m,"IGESConvGeom_GeomBuilder",R"#(This class provides some useful basic tools to build IGESGeom curves, especially : define a curve in a plane in 3D space (ex. Circular or Conic arc, or Copious Data defined in 2D) make a CopiousData from a list of points/vectors)#");

};

// user-defined post-inclusion per module

// user-defined post

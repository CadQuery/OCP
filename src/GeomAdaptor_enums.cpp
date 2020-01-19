
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <gp_Ax1.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <GeomAdaptor_Surface.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_OffsetCurve.hxx>
#include <Geom_Curve.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Adaptor3d_Surface.hxx>
#include <GeomAdaptor_Curve.hxx>
#include <GeomAdaptor_Surface.hxx>
#include <GeomAdaptor_GHSurface.hxx>
#include <GeomAdaptor_HSurface.hxx>
#include <GeomAdaptor_GHCurve.hxx>
#include <GeomAdaptor_HCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <gp_Ax1.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NoSuchObject.hxx>

// module includes
#include <GeomAdaptor.hxx>
#include <GeomAdaptor_Curve.hxx>
#include <GeomAdaptor_GHCurve.hxx>
#include <GeomAdaptor_GHSurface.hxx>
#include <GeomAdaptor_HCurve.hxx>
#include <GeomAdaptor_HSurface.hxx>
#include <GeomAdaptor_HSurfaceOfLinearExtrusion.hxx>
#include <GeomAdaptor_HSurfaceOfRevolution.hxx>
#include <GeomAdaptor_Surface.hxx>
#include <GeomAdaptor_SurfaceOfLinearExtrusion.hxx>
#include <GeomAdaptor_SurfaceOfRevolution.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomAdaptor_enums(py::module &main_module) {


py::module m = main_module.def_submodule("GeomAdaptor", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<GeomAdaptor , shared_ptr<GeomAdaptor>  >(m,"GeomAdaptor",R"#(this package contains the geometric definition of curve and surface necessary to use algorithmes.)#");
    py::class_<GeomAdaptor_Curve , shared_ptr<GeomAdaptor_Curve>  , Adaptor3d_Curve >(m,"GeomAdaptor_Curve",R"#(This class provides an interface between the services provided by any curve from the package Geom and those required of the curve by algorithms which use it. Creation of the loaded curve the curve is C1 by piece.)#");
    py::class_<GeomAdaptor_GHCurve ,opencascade::handle<GeomAdaptor_GHCurve>  , Adaptor3d_HCurve >(m,"GeomAdaptor_GHCurve",R"#()#");
    py::class_<GeomAdaptor_GHSurface ,opencascade::handle<GeomAdaptor_GHSurface>  , Adaptor3d_HSurface >(m,"GeomAdaptor_GHSurface",R"#()#");
    py::class_<GeomAdaptor_HSurfaceOfLinearExtrusion ,opencascade::handle<GeomAdaptor_HSurfaceOfLinearExtrusion>  , Adaptor3d_HSurface >(m,"GeomAdaptor_HSurfaceOfLinearExtrusion",R"#()#");
    py::class_<GeomAdaptor_HSurfaceOfRevolution ,opencascade::handle<GeomAdaptor_HSurfaceOfRevolution>  , Adaptor3d_HSurface >(m,"GeomAdaptor_HSurfaceOfRevolution",R"#()#");
    py::class_<GeomAdaptor_Surface , shared_ptr<GeomAdaptor_Surface>  , Adaptor3d_Surface >(m,"GeomAdaptor_Surface",R"#(An interface between the services provided by any surface from the package Geom and those required of the surface by algorithms which use it. Creation of the loaded surface the surface is C1 by piece)#");
    py::class_<GeomAdaptor_HCurve ,opencascade::handle<GeomAdaptor_HCurve>  , GeomAdaptor_GHCurve >(m,"GeomAdaptor_HCurve",R"#(An interface between the services provided by any curve from the package Geom and those required of the curve by algorithms which use it.An interface between the services provided by any curve from the package Geom and those required of the curve by algorithms which use it.An interface between the services provided by any curve from the package Geom and those required of the curve by algorithms which use it.)#");
    py::class_<GeomAdaptor_HSurface ,opencascade::handle<GeomAdaptor_HSurface>  , GeomAdaptor_GHSurface >(m,"GeomAdaptor_HSurface",R"#(An interface between the services provided by any surface from the package Geom and those required of the surface by algorithms which use it. Provides a surface handled by reference.An interface between the services provided by any surface from the package Geom and those required of the surface by algorithms which use it. Provides a surface handled by reference.An interface between the services provided by any surface from the package Geom and those required of the surface by algorithms which use it. Provides a surface handled by reference.)#");
    py::class_<GeomAdaptor_SurfaceOfLinearExtrusion , shared_ptr<GeomAdaptor_SurfaceOfLinearExtrusion>  , GeomAdaptor_Surface >(m,"GeomAdaptor_SurfaceOfLinearExtrusion",R"#(Generalised cylinder. This surface is obtained by sweeping a curve in a given direction. The parametrization range for the parameter U is defined with referenced the curve. The parametrization range for the parameter V is ]-infinite,+infinite[ The position of the curve gives the origin for the parameter V. The continuity of the surface is CN in the V direction.)#");
    py::class_<GeomAdaptor_SurfaceOfRevolution , shared_ptr<GeomAdaptor_SurfaceOfRevolution>  , GeomAdaptor_Surface >(m,"GeomAdaptor_SurfaceOfRevolution",R"#(This class defines a complete surface of revolution. The surface is obtained by rotating a curve a complete revolution about an axis. The curve and the axis must be in the same plane. If the curve and the axis are not in the same plane it is always possible to be in the previous case after a cylindrical projection of the curve in a referenced plane. For a complete surface of revolution the parametric range is 0 <= U <= 2*PI. -- The parametric range for V is defined with the revolved curve. The origin of the U parametrization is given by the position of the revolved curve (reference). The direction of the revolution axis defines the positive sense of rotation (trigonometric sense) corresponding to the increasing of the parametric value U. The derivatives are always defined for the u direction. For the v direction the definition of the derivatives depends on the degree of continuity of the referenced curve.)#");

};

// user-defined post-inclusion per module

// user-defined post


// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <IGESData_IGESEntity.hxx>
#include <Geom_Curve.hxx>
#include <Geom_BoundedCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <Geom_Conic.hxx>
#include <Geom_Circle.hxx>
#include <Geom_Ellipse.hxx>
#include <Geom_Hyperbola.hxx>
#include <Geom_Line.hxx>
#include <Geom_Parabola.hxx>
#include <Geom_OffsetCurve.hxx>
#include <IGESGeom_Point.hxx>
#include <Geom_Point.hxx>
#include <Geom_CartesianPoint.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Geom_Surface.hxx>
#include <Geom_BoundedSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_RectangularTrimmedSurface.hxx>
#include <Geom_ElementarySurface.hxx>
#include <Geom_Plane.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <Geom_ConicalSurface.hxx>
#include <Geom_SphericalSurface.hxx>
#include <Geom_ToroidalSurface.hxx>
#include <Geom_SweptSurface.hxx>
#include <Geom_SurfaceOfLinearExtrusion.hxx>
#include <Geom_SurfaceOfRevolution.hxx>
#include <Geom_OffsetSurface.hxx>
#include <IGESGeom_Direction.hxx>
#include <Geom_Vector.hxx>
#include <Geom_VectorWithMagnitude.hxx>
#include <Geom_Direction.hxx>
#include <IGESData_IGESModel.hxx>

// module includes
#include <GeomToIGES_GeomCurve.hxx>
#include <GeomToIGES_GeomEntity.hxx>
#include <GeomToIGES_GeomPoint.hxx>
#include <GeomToIGES_GeomSurface.hxx>
#include <GeomToIGES_GeomVector.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomToIGES_enums(py::module &main_module) {


py::module m = main_module.def_submodule("GeomToIGES", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<GeomToIGES_GeomEntity , shared_ptr<GeomToIGES_GeomEntity> >(m,"GeomToIGES_GeomEntity",R"#(provides methods to transfer Geom entity from CASCADE to IGES.)#");
    py::class_<GeomToIGES_GeomCurve , shared_ptr<GeomToIGES_GeomCurve> , GeomToIGES_GeomEntity>(m,"GeomToIGES_GeomCurve",R"#(This class implements the transfer of the Curve Entity from Geom To IGES. These can be : Curve . BoundedCurve * BSplineCurve * BezierCurve * TrimmedCurve . Conic * Circle * Ellipse * Hyperbloa * Line * Parabola . OffsetCurve)#");
    py::class_<GeomToIGES_GeomPoint , shared_ptr<GeomToIGES_GeomPoint> , GeomToIGES_GeomEntity>(m,"GeomToIGES_GeomPoint",R"#(This class implements the transfer of the Point Entity from Geom to IGES . These are : . Point * CartesianPoint)#");
    py::class_<GeomToIGES_GeomSurface , shared_ptr<GeomToIGES_GeomSurface> , GeomToIGES_GeomEntity>(m,"GeomToIGES_GeomSurface",R"#(This class implements the transfer of the Surface Entity from Geom To IGES. These can be : . BoundedSurface * BSplineSurface * BezierSurface * RectangularTrimmedSurface . ElementarySurface * Plane * CylindricalSurface * ConicalSurface * SphericalSurface * ToroidalSurface . SweptSurface * SurfaceOfLinearExtrusion * SurfaceOfRevolution . OffsetSurface)#");
    py::class_<GeomToIGES_GeomVector , shared_ptr<GeomToIGES_GeomVector> , GeomToIGES_GeomEntity>(m,"GeomToIGES_GeomVector",R"#(This class implements the transfer of the Vector from Geom to IGES . These can be : . Vector * Direction * VectorWithMagnitude)#");

};

// user-defined post-inclusion per module

// user-defined post


// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <IGESGeom_Direction.hxx>
#include <Geom2d_Vector.hxx>
#include <Geom2d_VectorWithMagnitude.hxx>
#include <Geom2d_Direction.hxx>
#include <IGESGeom_Point.hxx>
#include <Geom2d_Point.hxx>
#include <Geom2d_CartesianPoint.hxx>
#include <IGESData_IGESModel.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Geom2d_Curve.hxx>

// module includes
#include <Geom2dToIGES_Geom2dCurve.hxx>
#include <Geom2dToIGES_Geom2dEntity.hxx>
#include <Geom2dToIGES_Geom2dPoint.hxx>
#include <Geom2dToIGES_Geom2dVector.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2dToIGES_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Geom2dToIGES", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<Geom2dToIGES_Geom2dEntity , shared_ptr<Geom2dToIGES_Geom2dEntity>  >(m,"Geom2dToIGES_Geom2dEntity",R"#(provides methods to transfer Geom2d entity from CASCADE to IGES.)#");
    py::class_<Geom2dToIGES_Geom2dCurve , shared_ptr<Geom2dToIGES_Geom2dCurve>  , Geom2dToIGES_Geom2dEntity >(m,"Geom2dToIGES_Geom2dCurve",R"#(This class implements the transfer of the Curve Entity from Geom2d To IGES. These can be : Curve . BoundedCurve * BSplineCurve * BezierCurve * TrimmedCurve . Conic * Circle * Ellipse * Hyperbloa * Line * Parabola . OffsetCurve)#");
    py::class_<Geom2dToIGES_Geom2dPoint , shared_ptr<Geom2dToIGES_Geom2dPoint>  , Geom2dToIGES_Geom2dEntity >(m,"Geom2dToIGES_Geom2dPoint",R"#(This class implements the transfer of the Point Entity from Geom2d to IGES . These are : . 2dPoint * 2dCartesianPoint)#");
    py::class_<Geom2dToIGES_Geom2dVector , shared_ptr<Geom2dToIGES_Geom2dVector>  , Geom2dToIGES_Geom2dEntity >(m,"Geom2dToIGES_Geom2dVector",R"#(This class implements the transfer of the Vector from Geom2d to IGES . These can be : . Vector * Direction * VectorWithMagnitude)#");

};

// user-defined post-inclusion per module

// user-defined post

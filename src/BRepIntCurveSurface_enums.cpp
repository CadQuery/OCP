
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <GeomAdaptor_HCurve.hxx>
#include <BRepTopAdaptor_TopolTool.hxx>
#include <StdFail_NotDone.hxx>
#include <GeomAdaptor_Curve.hxx>
#include <gp_Lin.hxx>
#include <TopoDS_Face.hxx>

// module includes
#include <BRepIntCurveSurface_Inter.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepIntCurveSurface_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepIntCurveSurface", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<BRepIntCurveSurface_Inter ,std::unique_ptr<BRepIntCurveSurface_Inter>  >(m,"BRepIntCurveSurface_Inter",R"#(Computes the intersection between a face and a curve. To intersect one curve with shape method Init(Shape, curve, tTol) should be used. To intersect a few curves with specified shape it is necessary to load shape one time using method Load(shape, tol) and find intersection points for each curve using method Init(curve). For iteration by intersection points method More() and Next() should be used.)#");

// pre-register typdefs
// ./opencascade/BRepIntCurveSurface_Inter.hxx

};

// user-defined post-inclusion per module

// user-defined post


// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TopoDS_Edge.hxx>
#include <BRepGProp_Face.hxx>
#include <gp_Pln.hxx>
#include <BRepGProp_Domain.hxx>
#include <TopoDS_Edge.hxx>
#include <BRepGProp_Face.hxx>
#include <BRepGProp_Domain.hxx>
#include <gp_Pln.hxx>
#include <BRepGProp_Face.hxx>
#include <BRepGProp_Domain.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <TopoDS_Shape.hxx>
#include <GProp_GProps.hxx>
#include <gp_Pln.hxx>
#include <BRepGProp_EdgeTool.hxx>
#include <BRepGProp_Face.hxx>
#include <BRepGProp_Domain.hxx>
#include <BRepGProp_Cinert.hxx>
#include <BRepGProp_Sinert.hxx>
#include <BRepGProp_Vinert.hxx>
#include <BRepGProp_VinertGK.hxx>
#include <BRepGProp_UFunction.hxx>
#include <BRepGProp_TFunction.hxx>

// module includes
#include <BRepGProp.hxx>
#include <BRepGProp_Cinert.hxx>
#include <BRepGProp_Domain.hxx>
#include <BRepGProp_EdgeTool.hxx>
#include <BRepGProp_Face.hxx>
#include <BRepGProp_Sinert.hxx>
#include <BRepGProp_TFunction.hxx>
#include <BRepGProp_UFunction.hxx>
#include <BRepGProp_Vinert.hxx>
#include <BRepGProp_VinertGK.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepGProp_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepGProp", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<BRepGProp_TFunction ,std::unique_ptr<BRepGProp_TFunction>  , math_Function >(m,"BRepGProp_TFunction",R"#(This class represents the integrand function for the outer integral computation. The returned value represents the integral of UFunction. It depends on the value type and the flag IsByPoint.)#");
    py::class_<BRepGProp_Vinert ,std::unique_ptr<BRepGProp_Vinert>  , GProp_GProps >(m,"BRepGProp_Vinert",R"#(Computes the global properties of a geometric solid (3D closed region of space) delimited with : . a surface . a point and a surface . a plane and a surface)#");
    py::class_<BRepGProp_UFunction ,std::unique_ptr<BRepGProp_UFunction>  , math_Function >(m,"BRepGProp_UFunction",R"#(This class represents the integrand function for computation of an inner integral. The returned value depends on the value type and the flag IsByPoint.)#");
    py::class_<BRepGProp_Sinert ,std::unique_ptr<BRepGProp_Sinert>  , GProp_GProps >(m,"BRepGProp_Sinert",R"#(Computes the global properties of a face in 3D space. The face 's requirements to evaluate the global properties are defined in the template FaceTool from package GProp.)#");
    py::class_<BRepGProp_EdgeTool ,std::unique_ptr<BRepGProp_EdgeTool>  >(m,"BRepGProp_EdgeTool",R"#(Provides the required methods to instantiate CGProps from GProp with a Curve from BRepAdaptor.)#");
    py::class_<BRepGProp_Domain ,std::unique_ptr<BRepGProp_Domain>  >(m,"BRepGProp_Domain",R"#(Arc iterator. Returns only Forward and Reversed edges from the face in an undigested order.)#");
    py::class_<BRepGProp_VinertGK ,std::unique_ptr<BRepGProp_VinertGK>  , GProp_GProps >(m,"BRepGProp_VinertGK",R"#(Computes the global properties of a geometric solid (3D closed region of space) delimited with : - a point and a surface - a plane and a surface)#");
    py::class_<BRepGProp ,std::unique_ptr<BRepGProp>  >(m,"BRepGProp",R"#(Provides global functions to compute a shape's global properties for lines, surfaces or volumes, and bring them together with the global properties already computed for a geometric system. The global properties computed for a system are : - its mass, - its center of mass, - its matrix of inertia, - its moment about an axis, - its radius of gyration about an axis, - and its principal properties of inertia such as principal axis, principal moments, principal radius of gyration.)#");
    py::class_<BRepGProp_Face ,std::unique_ptr<BRepGProp_Face>  >(m,"BRepGProp_Face",R"#(None)#");
    py::class_<BRepGProp_Cinert ,std::unique_ptr<BRepGProp_Cinert>  , GProp_GProps >(m,"BRepGProp_Cinert",R"#(Computes the global properties of bounded curves in 3D space. The curve must have at least a continuity C1. It can be a curve as defined in the template CurveTool from package GProp. This template gives the minimum of methods required to evaluate the global properties of a curve 3D with the algorithmes of GProp.)#");

// pre-register typdefs
// ./opencascade/BRepGProp_TFunction.hxx
// ./opencascade/BRepGProp_Domain.hxx
// ./opencascade/BRepGProp_Vinert.hxx
// ./opencascade/BRepGProp_Face.hxx
// ./opencascade/BRepGProp_UFunction.hxx
// ./opencascade/BRepGProp_VinertGK.hxx
// ./opencascade/BRepGProp_Sinert.hxx
// ./opencascade/BRepGProp_Cinert.hxx
// ./opencascade/BRepGProp_EdgeTool.hxx
// ./opencascade/BRepGProp.hxx

};

// user-defined post-inclusion per module

// user-defined post

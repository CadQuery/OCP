
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <ShapeAlgo_AlgoContainer.hxx>
#include <ShapeAlgo_ToolContainer.hxx>
#include <ShapeAlgo_AlgoContainer.hxx>
#include <ShapeFix_Shape.hxx>
#include <ShapeFix_EdgeProjAux.hxx>
#include <ShapeAlgo_ToolContainer.hxx>
#include <ShapeAnalysis_Wire.hxx>
#include <ShapeExtend_WireData.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <TopoDS_Shape.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>

// module includes
#include <ShapeAlgo.hxx>
#include <ShapeAlgo_AlgoContainer.hxx>
#include <ShapeAlgo_ToolContainer.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ShapeAlgo_enums(py::module &main_module) {


py::module m = main_module.def_submodule("ShapeAlgo", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<ShapeAlgo , shared_ptr<ShapeAlgo>  >(m,"ShapeAlgo",R"#(None)#");
    py::class_<ShapeAlgo_AlgoContainer ,opencascade::handle<ShapeAlgo_AlgoContainer>  , Standard_Transient >(m,"ShapeAlgo_AlgoContainer",R"#()#");
    py::class_<ShapeAlgo_ToolContainer ,opencascade::handle<ShapeAlgo_ToolContainer>  , Standard_Transient >(m,"ShapeAlgo_ToolContainer",R"#(Returns tools used by AlgoContainerReturns tools used by AlgoContainerReturns tools used by AlgoContainer)#");

};

// user-defined post-inclusion per module

// user-defined post

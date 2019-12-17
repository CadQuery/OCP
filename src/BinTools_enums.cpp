
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Geom_Surface.hxx>
#include <BinTools_LocationSet.hxx>
#include <TopoDS_Shape.hxx>
#include <BinTools_ShapeSet.hxx>
#include <BinTools_Curve2dSet.hxx>
#include <BinTools_CurveSet.hxx>
#include <BinTools_SurfaceSet.hxx>
#include <BinTools_LocationSet.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>

// module includes
#include <BinTools.hxx>
#include <BinTools_Curve2dSet.hxx>
#include <BinTools_CurveSet.hxx>
#include <BinTools_LocationSet.hxx>
#include <BinTools_LocationSetPtr.hxx>
#include <BinTools_ShapeSet.hxx>
#include <BinTools_SurfaceSet.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BinTools_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BinTools", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<BinTools_SurfaceSet ,std::unique_ptr<BinTools_SurfaceSet>  >(m,"BinTools_SurfaceSet",R"#(Stores a set of Surfaces from Geom in binary format.)#");
    py::class_<BinTools_ShapeSet ,std::unique_ptr<BinTools_ShapeSet>  >(m,"BinTools_ShapeSet",R"#(Writes topology in OStream in binary format)#");
    py::class_<BinTools_Curve2dSet ,std::unique_ptr<BinTools_Curve2dSet>  >(m,"BinTools_Curve2dSet",R"#(Stores a set of Curves from Geom2d in binary format)#");
    py::class_<BinTools_LocationSet ,std::unique_ptr<BinTools_LocationSet>  >(m,"BinTools_LocationSet",R"#(The class LocationSet stores a set of location in a relocatable state.)#");
    py::class_<BinTools_CurveSet ,std::unique_ptr<BinTools_CurveSet>  >(m,"BinTools_CurveSet",R"#(Stores a set of Curves from Geom in binary format.)#");
    py::class_<BinTools ,std::unique_ptr<BinTools>  >(m,"BinTools",R"#(Tool to keep shapes in binary format)#");

// pre-register typdefs
// ./opencascade/BinTools_SurfaceSet.hxx
// ./opencascade/BinTools_LocationSetPtr.hxx
// ./opencascade/BinTools_LocationSet.hxx
// ./opencascade/BinTools_ShapeSet.hxx
// ./opencascade/BinTools.hxx
// ./opencascade/BinTools_Curve2dSet.hxx
// ./opencascade/BinTools_CurveSet.hxx

};

// user-defined post-inclusion per module

// user-defined post

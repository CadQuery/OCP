
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Geom_Plane.hxx>
#include <ShapeBuild_Vertex.hxx>
#include <ShapeBuild_Edge.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Trsf2d.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <gp_Pnt.hxx>

// module includes
#include <ShapeBuild.hxx>
#include <ShapeBuild_Edge.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <ShapeBuild_Vertex.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ShapeBuild_enums(py::module &main_module) {


py::module m = main_module.def_submodule("ShapeBuild", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<ShapeBuild , shared_ptr<ShapeBuild>  >(m,"ShapeBuild",R"#(This package provides basic building tools for other packages in ShapeHealing. These tools are rather internal for ShapeHealing .)#");
    py::class_<ShapeBuild_Edge , shared_ptr<ShapeBuild_Edge>  >(m,"ShapeBuild_Edge",R"#(This class provides low-level operators for building an edge 3d curve, copying edge with replaced vertices etc.)#");
    py::class_<ShapeBuild_ReShape ,opencascade::handle<ShapeBuild_ReShape>  , BRepTools_ReShape >(m,"ShapeBuild_ReShape",R"#(Rebuilds a Shape by making pre-defined substitutions on some of its componentsRebuilds a Shape by making pre-defined substitutions on some of its componentsRebuilds a Shape by making pre-defined substitutions on some of its components)#");
    py::class_<ShapeBuild_Vertex , shared_ptr<ShapeBuild_Vertex>  >(m,"ShapeBuild_Vertex",R"#(Provides low-level functions used for constructing vertices)#");

};

// user-defined post-inclusion per module

// user-defined post

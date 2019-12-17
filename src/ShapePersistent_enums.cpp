
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StdObjMgt_MapOfInstantiators.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <Poly_Polygon2D.hxx>
#include <Poly_Polygon3D.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <Poly_Triangulation.hxx>

// module includes
#include <ShapePersistent.hxx>
#include <ShapePersistent_BRep.hxx>
#include <ShapePersistent_Geom.hxx>
#include <ShapePersistent_Geom2d.hxx>
#include <ShapePersistent_Geom2d_Curve.hxx>
#include <ShapePersistent_Geom_Curve.hxx>
#include <ShapePersistent_Geom_Surface.hxx>
#include <ShapePersistent_HArray1.hxx>
#include <ShapePersistent_HArray2.hxx>
#include <ShapePersistent_HSequence.hxx>
#include <ShapePersistent_Poly.hxx>
#include <ShapePersistent_TopoDS.hxx>
#include <ShapePersistent_TriangleMode.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ShapePersistent_enums(py::module &main_module) {


py::module m = main_module.def_submodule("ShapePersistent", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<ShapePersistent_TriangleMode>(m, "ShapePersistent_TriangleMode",R"#(None)#")
        .value("ShapePersistent_WithTriangle",ShapePersistent_TriangleMode::ShapePersistent_WithTriangle)
        .value("ShapePersistent_WithoutTriangle",ShapePersistent_TriangleMode::ShapePersistent_WithoutTriangle).export_values();

//Python trampoline classes

// classes forward declarations only
    py::class_<ShapePersistent_HArray1 ,std::unique_ptr<ShapePersistent_HArray1>  >(m,"ShapePersistent_HArray1",R"#(None)#");
    py::class_<ShapePersistent_Geom_Curve ,std::unique_ptr<ShapePersistent_Geom_Curve>  >(m,"ShapePersistent_Geom_Curve",R"#(None)#");
    py::class_<ShapePersistent_Geom ,std::unique_ptr<ShapePersistent_Geom>  , StdObjMgt_SharedObject >(m,"ShapePersistent_Geom",R"#(None)#");
    py::class_<ShapePersistent_Geom2d ,std::unique_ptr<ShapePersistent_Geom2d>  , ShapePersistent_Geom >(m,"ShapePersistent_Geom2d",R"#(None)#");
    py::class_<ShapePersistent_HSequence ,std::unique_ptr<ShapePersistent_HSequence>  >(m,"ShapePersistent_HSequence",R"#(None)#");
    py::class_<ShapePersistent_Geom2d_Curve ,std::unique_ptr<ShapePersistent_Geom2d_Curve>  , ShapePersistent_Geom2d >(m,"ShapePersistent_Geom2d_Curve",R"#(None)#");
    py::class_<ShapePersistent_TopoDS ,std::unique_ptr<ShapePersistent_TopoDS>  , StdPersistent_TopoDS >(m,"ShapePersistent_TopoDS",R"#(None)#");
    py::class_<ShapePersistent ,std::unique_ptr<ShapePersistent>  >(m,"ShapePersistent",R"#(None)#");
    py::class_<ShapePersistent_Poly ,std::unique_ptr<ShapePersistent_Poly>  >(m,"ShapePersistent_Poly",R"#(None)#");
    py::class_<ShapePersistent_Geom_Surface ,std::unique_ptr<ShapePersistent_Geom_Surface>  >(m,"ShapePersistent_Geom_Surface",R"#(None)#");
    py::class_<ShapePersistent_BRep ,std::unique_ptr<ShapePersistent_BRep>  , ShapePersistent_TopoDS >(m,"ShapePersistent_BRep",R"#(None)#");
    py::class_<ShapePersistent_HArray2 ,std::unique_ptr<ShapePersistent_HArray2>  >(m,"ShapePersistent_HArray2",R"#(None)#");

// pre-register typdefs
// ./opencascade/ShapePersistent_Geom2d_Curve.hxx
// ./opencascade/ShapePersistent_HArray1.hxx
// ./opencascade/ShapePersistent_Geom_Surface.hxx
// ./opencascade/ShapePersistent_TriangleMode.hxx
// ./opencascade/ShapePersistent_Geom_Curve.hxx
// ./opencascade/ShapePersistent_TopoDS.hxx
// ./opencascade/ShapePersistent_Geom.hxx
// ./opencascade/ShapePersistent_HArray2.hxx
// ./opencascade/ShapePersistent_Geom2d.hxx
// ./opencascade/ShapePersistent.hxx
// ./opencascade/ShapePersistent_BRep.hxx
// ./opencascade/ShapePersistent_HSequence.hxx
// ./opencascade/ShapePersistent_Poly.hxx

};

// user-defined post-inclusion per module

// user-defined post


// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


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
void register_ShapePersistent(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ShapePersistent"));


//Python trampoline classes

// classes

// functions
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

// operators

// register typdefs
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


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

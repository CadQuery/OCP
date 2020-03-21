
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Geom_Curve.hxx>
#include <gp_Pnt.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Pnt2d.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <ShapeConstruct_Curve.hxx>
#include <ShapeConstruct_ProjectCurveOnSurface.hxx>
#include <ShapeConstruct_MakeTriangulation.hxx>
#include <ShapeAnalysis_Surface.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>

// module includes
#include <ShapeConstruct.hxx>
#include <ShapeConstruct_Curve.hxx>
#include <ShapeConstruct_MakeTriangulation.hxx>
#include <ShapeConstruct_ProjectCurveOnSurface.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ShapeConstruct_enums(py::module &main_module) {


py::module m = main_module.def_submodule("ShapeConstruct", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<ShapeConstruct , shared_ptr<ShapeConstruct> >(m,"ShapeConstruct",R"#(This package provides new algorithms for constructing new geometrical objects and topological shapes. It complements and extends algorithms available in Open CASCADE topological and geometrical toolkist. The functionality provided by this package are the following: projecting curves on surface, adjusting curve to have given start and end points. P)#");
    py::class_<ShapeConstruct_Curve , shared_ptr<ShapeConstruct_Curve> >(m,"ShapeConstruct_Curve",R"#(Adjusts curve to have start and end points at the given points (currently works on lines and B-Splines only))#");
    py::class_<ShapeConstruct_MakeTriangulation , shared_ptr<ShapeConstruct_MakeTriangulation> , BRepBuilderAPI_MakeShape>(m,"ShapeConstruct_MakeTriangulation",R"#(None)#");
    py::class_<ShapeConstruct_ProjectCurveOnSurface ,opencascade::handle<ShapeConstruct_ProjectCurveOnSurface> , Standard_Transient>(m,"ShapeConstruct_ProjectCurveOnSurface",R"#(This tool provides a method for computing pcurve by projecting 3d curve onto a surface. Projection is done by 23 or more points (this number is changed for B-Splines according to the following rule: the total number of the points is not less than number of spans * (degree + 1); it is increased recursively starting with 23 and is added with 22 until the condition is fulfilled). Isoparametric cases (if curve corresponds to U=const or V=const on the surface) are recognized with the given precision.This tool provides a method for computing pcurve by projecting 3d curve onto a surface. Projection is done by 23 or more points (this number is changed for B-Splines according to the following rule: the total number of the points is not less than number of spans * (degree + 1); it is increased recursively starting with 23 and is added with 22 until the condition is fulfilled). Isoparametric cases (if curve corresponds to U=const or V=const on the surface) are recognized with the given precision.This tool provides a method for computing pcurve by projecting 3d curve onto a surface. Projection is done by 23 or more points (this number is changed for B-Splines according to the following rule: the total number of the points is not less than number of spans * (degree + 1); it is increased recursively starting with 23 and is added with 22 until the condition is fulfilled). Isoparametric cases (if curve corresponds to U=const or V=const on the surface) are recognized with the given precision.)#");

};

// user-defined post-inclusion per module

// user-defined post

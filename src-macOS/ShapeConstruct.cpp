
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <ShapeAnalysis_Surface.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
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
#include <Geom_Curve.hxx>
#include <gp_Pnt.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Pnt2d.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>

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
void register_ShapeConstruct(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ShapeConstruct"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<ShapeConstruct , shared_ptr<ShapeConstruct>>(m,"ShapeConstruct");

    static_cast<py::class_<ShapeConstruct , shared_ptr<ShapeConstruct> >>(m.attr("ShapeConstruct"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<ShapeConstruct_Curve , shared_ptr<ShapeConstruct_Curve>>(m,"ShapeConstruct_Curve");

    static_cast<py::class_<ShapeConstruct_Curve , shared_ptr<ShapeConstruct_Curve> >>(m.attr("ShapeConstruct_Curve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeConstruct_MakeTriangulation , shared_ptr<ShapeConstruct_MakeTriangulation> , BRepBuilderAPI_MakeShape>>(m.attr("ShapeConstruct_MakeTriangulation"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (ShapeConstruct_MakeTriangulation::*)() ) static_cast<void (ShapeConstruct_MakeTriangulation::*)() >(&ShapeConstruct_MakeTriangulation::Build),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (ShapeConstruct_MakeTriangulation::*)() const) static_cast<Standard_Boolean (ShapeConstruct_MakeTriangulation::*)() const>(&ShapeConstruct_MakeTriangulation::IsDone),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeConstruct_ProjectCurveOnSurface ,opencascade::handle<ShapeConstruct_ProjectCurveOnSurface> , Standard_Transient>>(m.attr("ShapeConstruct_ProjectCurveOnSurface"))
    // constructors
    // custom constructors
    // methods
        .def("Init",
             (void (ShapeConstruct_ProjectCurveOnSurface::*)( const opencascade::handle<Geom_Surface> & , const Standard_Real ) ) static_cast<void (ShapeConstruct_ProjectCurveOnSurface::*)( const opencascade::handle<Geom_Surface> & , const Standard_Real ) >(&ShapeConstruct_ProjectCurveOnSurface::Init),
             R"#(Initializes the object with all necessary parameters, i.e. surface and precision)#"  , py::arg("surf"),  py::arg("preci"))
        .def("Init",
             (void (ShapeConstruct_ProjectCurveOnSurface::*)( const opencascade::handle<ShapeAnalysis_Surface> & , const Standard_Real ) ) static_cast<void (ShapeConstruct_ProjectCurveOnSurface::*)( const opencascade::handle<ShapeAnalysis_Surface> & , const Standard_Real ) >(&ShapeConstruct_ProjectCurveOnSurface::Init),
             R"#(Initializes the object with all necessary parameters, i.e. surface and precision)#"  , py::arg("surf"),  py::arg("preci"))
        .def("Perform",
             (Standard_Boolean (ShapeConstruct_ProjectCurveOnSurface::*)( opencascade::handle<Geom_Curve> & , const Standard_Real , const Standard_Real , opencascade::handle<Geom2d_Curve> & , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Boolean (ShapeConstruct_ProjectCurveOnSurface::*)( opencascade::handle<Geom_Curve> & , const Standard_Real , const Standard_Real , opencascade::handle<Geom2d_Curve> & , const Standard_Real , const Standard_Real ) >(&ShapeConstruct_ProjectCurveOnSurface::Perform),
             R"#(Computes the projection of 3d curve onto a surface using the specialized algorithm. Returns False if projector fails, otherwise, if pcurve computed successfully, returns True. The output curve 2D is guaranteed to be same-parameter with input curve 3D on the interval [First, Last]. If the output curve lies on a direct line the infinite line is returned, in the case same-parameter condition is satisfied. TolFirst and TolLast are the tolerances at the ends of input curve 3D.)#"  , py::arg("c3d"),  py::arg("First"),  py::arg("Last"),  py::arg("c2d"),  py::arg("TolFirst")=static_cast<const Standard_Real>(- 1),  py::arg("TolLast")=static_cast<const Standard_Real>(- 1))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeConstruct_ProjectCurveOnSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeConstruct_ProjectCurveOnSurface::*)() const>(&ShapeConstruct_ProjectCurveOnSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeConstruct_ProjectCurveOnSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/ShapeConstruct_ProjectCurveOnSurface.hxx
// ./opencascade/ShapeConstruct.hxx
// ./opencascade/ShapeConstruct_MakeTriangulation.hxx
// ./opencascade/ShapeConstruct_Curve.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

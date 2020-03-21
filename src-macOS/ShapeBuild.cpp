
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
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
#include <Geom_Plane.hxx>
#include <ShapeBuild_Vertex.hxx>
#include <ShapeBuild_Edge.hxx>
#include <ShapeBuild_ReShape.hxx>

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
void register_ShapeBuild(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ShapeBuild"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<ShapeBuild , shared_ptr<ShapeBuild>>(m,"ShapeBuild");

    static_cast<py::class_<ShapeBuild , shared_ptr<ShapeBuild> >>(m.attr("ShapeBuild"))
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
    register_default_constructor<ShapeBuild_Edge , shared_ptr<ShapeBuild_Edge>>(m,"ShapeBuild_Edge");

    static_cast<py::class_<ShapeBuild_Edge , shared_ptr<ShapeBuild_Edge> >>(m.attr("ShapeBuild_Edge"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeBuild_ReShape ,opencascade::handle<ShapeBuild_ReShape> , BRepTools_ReShape>>(m.attr("ShapeBuild_ReShape"))
    // constructors
    // custom constructors
    // methods
        .def("Apply",
             (TopoDS_Shape (ShapeBuild_ReShape::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum , const Standard_Integer ) ) static_cast<TopoDS_Shape (ShapeBuild_ReShape::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum , const Standard_Integer ) >(&ShapeBuild_ReShape::Apply),
             R"#(Applies the substitutions requests to a shape)#"  , py::arg("shape"),  py::arg("until"),  py::arg("buildmode"))
        .def("Apply",
             (TopoDS_Shape (ShapeBuild_ReShape::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum ) ) static_cast<TopoDS_Shape (ShapeBuild_ReShape::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum ) >(&ShapeBuild_ReShape::Apply),
             R"#(Applies the substitutions requests to a shape.)#"  , py::arg("shape"),  py::arg("until")=static_cast<const TopAbs_ShapeEnum>(TopAbs_SHAPE))
        .def("Status",
             (Standard_Integer (ShapeBuild_ReShape::*)( const TopoDS_Shape & , TopoDS_Shape & , const Standard_Boolean ) ) static_cast<Standard_Integer (ShapeBuild_ReShape::*)( const TopoDS_Shape & , TopoDS_Shape & , const Standard_Boolean ) >(&ShapeBuild_ReShape::Status),
             R"#(Returns a complete substitution status for a shape 0 : not recorded, <newsh> = original <shape> < 0: to be removed, <newsh> is NULL > 0: to be replaced, <newsh> is a new item If <last> is False, returns status and new shape recorded in the map directly for the shape, if True and status > 0 then recursively searches for the last status and new shape.)#"  , py::arg("shape"),  py::arg("newsh"),  py::arg("last")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Status",
             (Standard_Boolean (ShapeBuild_ReShape::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeBuild_ReShape::*)( const ShapeExtend_Status ) const>(&ShapeBuild_ReShape::Status),
             R"#(Queries the status of last call to Apply(shape,enum) OK : no (sub)shapes replaced or removed DONE1: source (starting) shape replaced DONE2: source (starting) shape removed DONE3: some subshapes replaced DONE4: some subshapes removed FAIL1: some replacements not done because of bad type of subshape)#"  , py::arg("status"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeBuild_ReShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeBuild_ReShape::*)() const>(&ShapeBuild_ReShape::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeBuild_ReShape::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<ShapeBuild_Vertex , shared_ptr<ShapeBuild_Vertex>>(m,"ShapeBuild_Vertex");

    static_cast<py::class_<ShapeBuild_Vertex , shared_ptr<ShapeBuild_Vertex> >>(m.attr("ShapeBuild_Vertex"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/ShapeBuild_Edge.hxx
// ./opencascade/ShapeBuild_Vertex.hxx
// ./opencascade/ShapeBuild_ReShape.hxx
// ./opencascade/ShapeBuild.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

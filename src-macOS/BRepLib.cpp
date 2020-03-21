
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom_Surface.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TopoDS_Shape.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Wire.hxx>
#include <Geom_Curve.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_Face.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom2d_Curve.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Geom_Plane.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_Face.hxx>
#include <BRepLib_Command.hxx>
#include <BRepLib_MakeShape.hxx>
#include <BRepLib_MakeVertex.hxx>
#include <BRepLib_MakeEdge.hxx>
#include <BRepLib_MakeEdge2d.hxx>
#include <BRepLib_MakePolygon.hxx>
#include <BRepLib_MakeFace.hxx>
#include <BRepLib_MakeWire.hxx>
#include <BRepLib_MakeShell.hxx>
#include <BRepLib_MakeSolid.hxx>
#include <BRepLib_FindSurface.hxx>
#include <BRepLib_FuseEdges.hxx>
#include <BRepTools_ReShape.hxx>
#include <TopoDS_Vertex.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Shell.hxx>

// module includes
#include <BRepLib.hxx>
#include <BRepLib_Command.hxx>
#include <BRepLib_EdgeError.hxx>
#include <BRepLib_FaceError.hxx>
#include <BRepLib_FindSurface.hxx>
#include <BRepLib_FuseEdges.hxx>
#include <BRepLib_MakeEdge.hxx>
#include <BRepLib_MakeEdge2d.hxx>
#include <BRepLib_MakeFace.hxx>
#include <BRepLib_MakePolygon.hxx>
#include <BRepLib_MakeShape.hxx>
#include <BRepLib_MakeShell.hxx>
#include <BRepLib_MakeSolid.hxx>
#include <BRepLib_MakeVertex.hxx>
#include <BRepLib_MakeWire.hxx>
#include <BRepLib_ShapeModification.hxx>
#include <BRepLib_ShellError.hxx>
#include <BRepLib_WireError.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepLib(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepLib"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BRepLib , shared_ptr<BRepLib>>(m,"BRepLib");

    static_cast<py::class_<BRepLib , shared_ptr<BRepLib> >>(m.attr("BRepLib"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_Command , shared_ptr<BRepLib_Command> >>(m.attr("BRepLib_Command"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_FindSurface , shared_ptr<BRepLib_FindSurface> >>(m.attr("BRepLib_FindSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_FuseEdges , shared_ptr<BRepLib_FuseEdges> >>(m.attr("BRepLib_FuseEdges"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_MakeShape , shared_ptr<BRepLib_MakeShape> , BRepLib_Command>>(m.attr("BRepLib_MakeShape"))
    // constructors
    // custom constructors
    // methods
        .def("FaceStatus",
             (BRepLib_ShapeModification (BRepLib_MakeShape::*)( const TopoDS_Face & ) const) static_cast<BRepLib_ShapeModification (BRepLib_MakeShape::*)( const TopoDS_Face & ) const>(&BRepLib_MakeShape::FaceStatus),
             R"#(returns the status of the Face after the shape creation.)#"  , py::arg("F"))
        .def("HasDescendants",
             (Standard_Boolean (BRepLib_MakeShape::*)( const TopoDS_Face & ) const) static_cast<Standard_Boolean (BRepLib_MakeShape::*)( const TopoDS_Face & ) const>(&BRepLib_MakeShape::HasDescendants),
             R"#(Returns True if the Face generates new topology.)#"  , py::arg("F"))
        .def("DescendantFaces",
             (const TopTools_ListOfShape & (BRepLib_MakeShape::*)( const TopoDS_Face & ) ) static_cast<const TopTools_ListOfShape & (BRepLib_MakeShape::*)( const TopoDS_Face & ) >(&BRepLib_MakeShape::DescendantFaces),
             R"#(returns the list of generated Faces.)#"  , py::arg("F"))
        .def("NbSurfaces",
             (Standard_Integer (BRepLib_MakeShape::*)() const) static_cast<Standard_Integer (BRepLib_MakeShape::*)() const>(&BRepLib_MakeShape::NbSurfaces),
             R"#(returns the number of surfaces after the shape creation.)#" )
        .def("NewFaces",
             (const TopTools_ListOfShape & (BRepLib_MakeShape::*)( const Standard_Integer ) ) static_cast<const TopTools_ListOfShape & (BRepLib_MakeShape::*)( const Standard_Integer ) >(&BRepLib_MakeShape::NewFaces),
             R"#(Return the faces created for surface I.)#"  , py::arg("I"))
        .def("FacesFromEdges",
             (const TopTools_ListOfShape & (BRepLib_MakeShape::*)( const TopoDS_Edge & ) ) static_cast<const TopTools_ListOfShape & (BRepLib_MakeShape::*)( const TopoDS_Edge & ) >(&BRepLib_MakeShape::FacesFromEdges),
             R"#(returns a list of the created faces from the edge <E>.)#"  , py::arg("E"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_MakeEdge , shared_ptr<BRepLib_MakeEdge> , BRepLib_MakeShape>>(m.attr("BRepLib_MakeEdge"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_MakeEdge2d , shared_ptr<BRepLib_MakeEdge2d> , BRepLib_MakeShape>>(m.attr("BRepLib_MakeEdge2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_MakeFace , shared_ptr<BRepLib_MakeFace> , BRepLib_MakeShape>>(m.attr("BRepLib_MakeFace"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_MakePolygon , shared_ptr<BRepLib_MakePolygon> , BRepLib_MakeShape>>(m.attr("BRepLib_MakePolygon"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_MakeShell , shared_ptr<BRepLib_MakeShell> , BRepLib_MakeShape>>(m.attr("BRepLib_MakeShell"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_MakeSolid , shared_ptr<BRepLib_MakeSolid> , BRepLib_MakeShape>>(m.attr("BRepLib_MakeSolid"))
    // constructors
    // custom constructors
    // methods
        .def("FaceStatus",
             (BRepLib_ShapeModification (BRepLib_MakeSolid::*)( const TopoDS_Face & ) const) static_cast<BRepLib_ShapeModification (BRepLib_MakeSolid::*)( const TopoDS_Face & ) const>(&BRepLib_MakeSolid::FaceStatus),
             R"#(returns the status of the Face after the shape creation.)#"  , py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_MakeVertex , shared_ptr<BRepLib_MakeVertex> , BRepLib_MakeShape>>(m.attr("BRepLib_MakeVertex"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLib_MakeWire , shared_ptr<BRepLib_MakeWire> , BRepLib_MakeShape>>(m.attr("BRepLib_MakeWire"))
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
// ./opencascade/BRepLib_EdgeError.hxx
// ./opencascade/BRepLib_FindSurface.hxx
// ./opencascade/BRepLib_MakeFace.hxx
// ./opencascade/BRepLib_ShellError.hxx
// ./opencascade/BRepLib_MakeEdge2d.hxx
// ./opencascade/BRepLib_WireError.hxx
// ./opencascade/BRepLib_MakeWire.hxx
// ./opencascade/BRepLib_ShapeModification.hxx
// ./opencascade/BRepLib_MakeEdge.hxx
// ./opencascade/BRepLib_FuseEdges.hxx
// ./opencascade/BRepLib_MakePolygon.hxx
// ./opencascade/BRepLib_MakeSolid.hxx
// ./opencascade/BRepLib_MakeShape.hxx
// ./opencascade/BRepLib.hxx
// ./opencascade/BRepLib_MakeVertex.hxx
// ./opencascade/BRepLib_FaceError.hxx
// ./opencascade/BRepLib_Command.hxx
// ./opencascade/BRepLib_MakeShell.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

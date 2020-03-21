
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom_Plane.hxx>
#include <ShapeBuild_Vertex.hxx>
#include <ShapeBuild_Edge.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <TopoDS_Vertex.hxx>
#include <gp_Pnt.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Trsf2d.hxx>
#include <Geom_Curve.hxx>

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
        .def_static("PlaneXOY_s",
                    (opencascade::handle<Geom_Plane> (*)() ) static_cast<opencascade::handle<Geom_Plane> (*)() >(&ShapeBuild::PlaneXOY),
                    R"#(Rebuilds a shape with substitution of some components Returns a Geom_Surface which is the Plane XOY (Z positive) This allows to consider an UV space homologous to a 3D space, with this support surface)#" )
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
        .def("CopyReplaceVertices",
             (TopoDS_Edge (ShapeBuild_Edge::*)( const TopoDS_Edge & , const TopoDS_Vertex & , const TopoDS_Vertex & ) const) static_cast<TopoDS_Edge (ShapeBuild_Edge::*)( const TopoDS_Edge & , const TopoDS_Vertex & , const TopoDS_Vertex & ) const>(&ShapeBuild_Edge::CopyReplaceVertices),
             R"#(Copy edge and replace one or both its vertices to a given one(s). Vertex V1 replaces FORWARD vertex, and V2 - REVERSED, as they are found by TopoDS_Iterator. If V1 or V2 is NULL, the original vertex is taken)#"  , py::arg("edge"),  py::arg("V1"),  py::arg("V2"))
        .def("CopyRanges",
             (void (ShapeBuild_Edge::*)( const TopoDS_Edge & , const TopoDS_Edge & , const Standard_Real , const Standard_Real ) const) static_cast<void (ShapeBuild_Edge::*)( const TopoDS_Edge & , const TopoDS_Edge & , const Standard_Real , const Standard_Real ) const>(&ShapeBuild_Edge::CopyRanges),
             R"#(Copies ranges for curve3d and all common pcurves from edge <fromedge> into edge <toedge>.)#"  , py::arg("toedge"),  py::arg("fromedge"),  py::arg("alpha")=static_cast<const Standard_Real>(0),  py::arg("beta")=static_cast<const Standard_Real>(1))
        .def("SetRange3d",
             (void (ShapeBuild_Edge::*)( const TopoDS_Edge & , const Standard_Real , const Standard_Real ) const) static_cast<void (ShapeBuild_Edge::*)( const TopoDS_Edge & , const Standard_Real , const Standard_Real ) const>(&ShapeBuild_Edge::SetRange3d),
             R"#(Sets range on 3d curve only.)#"  , py::arg("edge"),  py::arg("first"),  py::arg("last"))
        .def("CopyPCurves",
             (void (ShapeBuild_Edge::*)( const TopoDS_Edge & , const TopoDS_Edge & ) const) static_cast<void (ShapeBuild_Edge::*)( const TopoDS_Edge & , const TopoDS_Edge & ) const>(&ShapeBuild_Edge::CopyPCurves),
             R"#(Makes a copy of pcurves from edge <fromedge> into edge <toedge>. Pcurves which are already present in <toedge>, are replaced by copies, other are copied. Ranges are also copied.)#"  , py::arg("toedge"),  py::arg("fromedge"))
        .def("Copy",
             (TopoDS_Edge (ShapeBuild_Edge::*)( const TopoDS_Edge & , const Standard_Boolean ) const) static_cast<TopoDS_Edge (ShapeBuild_Edge::*)( const TopoDS_Edge & , const Standard_Boolean ) const>(&ShapeBuild_Edge::Copy),
             R"#(Make a copy of <edge> by call to CopyReplaceVertices() (i.e. construct new TEdge with the same pcurves and vertices). If <sharepcurves> is False, pcurves are also replaced by their copies with help of method CopyPCurves)#"  , py::arg("edge"),  py::arg("sharepcurves")=static_cast<const Standard_Boolean>(Standard_True))
        .def("RemovePCurve",
             (void (ShapeBuild_Edge::*)( const TopoDS_Edge & , const TopoDS_Face & ) const) static_cast<void (ShapeBuild_Edge::*)( const TopoDS_Edge & , const TopoDS_Face & ) const>(&ShapeBuild_Edge::RemovePCurve),
             R"#(Removes the PCurve(s) which could be recorded in an Edge for the given Face)#"  , py::arg("edge"),  py::arg("face"))
        .def("RemovePCurve",
             (void (ShapeBuild_Edge::*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & ) const) static_cast<void (ShapeBuild_Edge::*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & ) const>(&ShapeBuild_Edge::RemovePCurve),
             R"#(Removes the PCurve(s) which could be recorded in an Edge for the given Surface)#"  , py::arg("edge"),  py::arg("surf"))
        .def("RemovePCurve",
             (void (ShapeBuild_Edge::*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const) static_cast<void (ShapeBuild_Edge::*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const>(&ShapeBuild_Edge::RemovePCurve),
             R"#(Removes the PCurve(s) which could be recorded in an Edge for the given Surface, with given Location)#"  , py::arg("edge"),  py::arg("surf"),  py::arg("loc"))
        .def("ReplacePCurve",
             (void (ShapeBuild_Edge::*)( const TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const TopoDS_Face & ) const) static_cast<void (ShapeBuild_Edge::*)( const TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const TopoDS_Face & ) const>(&ShapeBuild_Edge::ReplacePCurve),
             R"#(Replace the PCurve in an Edge for the given Face In case if edge is seam, i.e. has 2 pcurves on that face, only pcurve corresponding to the orientation of the edge is replaced)#"  , py::arg("edge"),  py::arg("pcurve"),  py::arg("face"))
        .def("ReassignPCurve",
             (Standard_Boolean (ShapeBuild_Edge::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) const) static_cast<Standard_Boolean (ShapeBuild_Edge::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) const>(&ShapeBuild_Edge::ReassignPCurve),
             R"#(Reassign edge pcurve lying on face <old> to another face . If edge has two pcurves on <old> face, only one of them will be reassigned, and other will left alone. Similarly, if edge already had a pcurve on face , it will have two pcurves on it. Returns True if succeeded, False if no pcurve lying on <old> found.)#"  , py::arg("edge"),  py::arg("old"),  py::arg("sub"))
        .def("TransformPCurve",
             (opencascade::handle<Geom2d_Curve> (ShapeBuild_Edge::*)( const opencascade::handle<Geom2d_Curve> & , const gp_Trsf2d & , const Standard_Real , Standard_Real & , Standard_Real & ) const) static_cast<opencascade::handle<Geom2d_Curve> (ShapeBuild_Edge::*)( const opencascade::handle<Geom2d_Curve> & , const gp_Trsf2d & , const Standard_Real , Standard_Real & , Standard_Real & ) const>(&ShapeBuild_Edge::TransformPCurve),
             R"#(Transforms the PCurve with given matrix and affinity U factor.)#"  , py::arg("pcurve"),  py::arg("trans"),  py::arg("uFact"),  py::arg("aFirst"),  py::arg("aLast"))
        .def("RemoveCurve3d",
             (void (ShapeBuild_Edge::*)( const TopoDS_Edge & ) const) static_cast<void (ShapeBuild_Edge::*)( const TopoDS_Edge & ) const>(&ShapeBuild_Edge::RemoveCurve3d),
             R"#(Removes the Curve3D recorded in an Edge)#"  , py::arg("edge"))
        .def("BuildCurve3d",
             (Standard_Boolean (ShapeBuild_Edge::*)( const TopoDS_Edge & ) const) static_cast<Standard_Boolean (ShapeBuild_Edge::*)( const TopoDS_Edge & ) const>(&ShapeBuild_Edge::BuildCurve3d),
             R"#(Calls BRepTools::BuildCurve3D)#"  , py::arg("edge"))
        .def("MakeEdge",
             (void (ShapeBuild_Edge::*)( TopoDS_Edge & , const opencascade::handle<Geom_Curve> & , const TopLoc_Location & ) const) static_cast<void (ShapeBuild_Edge::*)( TopoDS_Edge & , const opencascade::handle<Geom_Curve> & , const TopLoc_Location & ) const>(&ShapeBuild_Edge::MakeEdge),
             R"#(Makes edge with curve and location)#"  , py::arg("edge"),  py::arg("curve"),  py::arg("L"))
        .def("MakeEdge",
             (void (ShapeBuild_Edge::*)( TopoDS_Edge & , const opencascade::handle<Geom_Curve> & , const TopLoc_Location & , const Standard_Real , const Standard_Real ) const) static_cast<void (ShapeBuild_Edge::*)( TopoDS_Edge & , const opencascade::handle<Geom_Curve> & , const TopLoc_Location & , const Standard_Real , const Standard_Real ) const>(&ShapeBuild_Edge::MakeEdge),
             R"#(Makes edge with curve, location and range [p1, p2])#"  , py::arg("edge"),  py::arg("curve"),  py::arg("L"),  py::arg("p1"),  py::arg("p2"))
        .def("MakeEdge",
             (void (ShapeBuild_Edge::*)( TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const TopoDS_Face & ) const) static_cast<void (ShapeBuild_Edge::*)( TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const TopoDS_Face & ) const>(&ShapeBuild_Edge::MakeEdge),
             R"#(Makes edge with pcurve and face)#"  , py::arg("edge"),  py::arg("pcurve"),  py::arg("face"))
        .def("MakeEdge",
             (void (ShapeBuild_Edge::*)( TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const TopoDS_Face & , const Standard_Real , const Standard_Real ) const) static_cast<void (ShapeBuild_Edge::*)( TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const TopoDS_Face & , const Standard_Real , const Standard_Real ) const>(&ShapeBuild_Edge::MakeEdge),
             R"#(Makes edge with pcurve, face and range [p1, p2])#"  , py::arg("edge"),  py::arg("pcurve"),  py::arg("face"),  py::arg("p1"),  py::arg("p2"))
        .def("MakeEdge",
             (void (ShapeBuild_Edge::*)( TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const) static_cast<void (ShapeBuild_Edge::*)( TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) const>(&ShapeBuild_Edge::MakeEdge),
             R"#(Makes edge with pcurve, surface and location)#"  , py::arg("edge"),  py::arg("pcurve"),  py::arg("S"),  py::arg("L"))
        .def("MakeEdge",
             (void (ShapeBuild_Edge::*)( TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const Standard_Real , const Standard_Real ) const) static_cast<void (ShapeBuild_Edge::*)( TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const Standard_Real , const Standard_Real ) const>(&ShapeBuild_Edge::MakeEdge),
             R"#(Makes edge with pcurve, surface, location and range [p1, p2])#"  , py::arg("edge"),  py::arg("pcurve"),  py::arg("S"),  py::arg("L"),  py::arg("p1"),  py::arg("p2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeBuild_ReShape ,opencascade::handle<ShapeBuild_ReShape> , BRepTools_ReShape>>(m.attr("ShapeBuild_ReShape"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeBuild_ReShape::get_type_descriptor),
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
        .def("CombineVertex",
             (TopoDS_Vertex (ShapeBuild_Vertex::*)( const TopoDS_Vertex & , const TopoDS_Vertex & , const Standard_Real ) const) static_cast<TopoDS_Vertex (ShapeBuild_Vertex::*)( const TopoDS_Vertex & , const TopoDS_Vertex & , const Standard_Real ) const>(&ShapeBuild_Vertex::CombineVertex),
             R"#(Combines new vertex from two others. This new one is the smallest vertex which comprises both of the source vertices. The function takes into account the positions and tolerances of the source vertices. The tolerance of the new vertex will be equal to the minimal tolerance that is required to comprise source vertices multiplied by tolFactor (in order to avoid errors because of discreteness of calculations).)#"  , py::arg("V1"),  py::arg("V2"),  py::arg("tolFactor")=static_cast<const Standard_Real>(1.0001))
        .def("CombineVertex",
             (TopoDS_Vertex (ShapeBuild_Vertex::*)( const gp_Pnt & , const gp_Pnt & , const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<TopoDS_Vertex (ShapeBuild_Vertex::*)( const gp_Pnt & , const gp_Pnt & , const Standard_Real , const Standard_Real , const Standard_Real ) const>(&ShapeBuild_Vertex::CombineVertex),
             R"#(The same function as above, except that it accepts two points and two tolerances instead of vertices)#"  , py::arg("pnt1"),  py::arg("pnt2"),  py::arg("tol1"),  py::arg("tol2"),  py::arg("tolFactor")=static_cast<const Standard_Real>(1.0001))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\ShapeBuild.hxx
// ./opencascade\ShapeBuild_ReShape.hxx
// ./opencascade\ShapeBuild_Vertex.hxx
// ./opencascade\ShapeBuild_Edge.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

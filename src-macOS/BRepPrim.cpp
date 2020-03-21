
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <BRep_Builder.hxx>
#include <Geom_Surface.hxx>
#include <gp_Pln.hxx>
#include <TopoDS_Edge.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Pln.hxx>
#include <gp_Lin.hxx>

// module includes
#include <BRepPrim_Builder.hxx>
#include <BRepPrim_Cone.hxx>
#include <BRepPrim_Cylinder.hxx>
#include <BRepPrim_Direction.hxx>
#include <BRepPrim_FaceBuilder.hxx>
#include <BRepPrim_GWedge.hxx>
#include <BRepPrim_OneAxis.hxx>
#include <BRepPrim_Revolution.hxx>
#include <BRepPrim_Sphere.hxx>
#include <BRepPrim_Torus.hxx>
#include <BRepPrim_Wedge.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepPrim(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepPrim"));


//Python trampoline classes
    class Py_BRepPrim_OneAxis : public BRepPrim_OneAxis{
    public:
        using BRepPrim_OneAxis::BRepPrim_OneAxis;


        // public pure virtual
        TopoDS_Face MakeEmptyLateralFace() const  override { PYBIND11_OVERLOAD_PURE(TopoDS_Face,BRepPrim_OneAxis,MakeEmptyLateralFace,) };
        TopoDS_Edge MakeEmptyMeridianEdge(const Standard_Real Ang) const  override { PYBIND11_OVERLOAD_PURE(TopoDS_Edge,BRepPrim_OneAxis,MakeEmptyMeridianEdge,Ang) };
        void SetMeridianPCurve(TopoDS_Edge & E,const TopoDS_Face & F) const  override { PYBIND11_OVERLOAD_PURE(void,BRepPrim_OneAxis,SetMeridianPCurve,E,F) };
        gp_Pnt2d MeridianValue(const Standard_Real V) const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt2d,BRepPrim_OneAxis,MeridianValue,V) };


        // protected pure virtual


        // private pure virtual

    };

// classes


    static_cast<py::class_<BRepPrim_Builder , shared_ptr<BRepPrim_Builder> >>(m.attr("BRepPrim_Builder"))
    // constructors
    // custom constructors
    // methods
        .def("Builder",
             (const BRep_Builder & (BRepPrim_Builder::*)() const) static_cast<const BRep_Builder & (BRepPrim_Builder::*)() const>(&BRepPrim_Builder::Builder),
             R"#(None)#" )
        .def("Builder",
             (const BRep_Builder & (BRepPrim_Builder::*)() const) static_cast<const BRep_Builder & (BRepPrim_Builder::*)() const>(&BRepPrim_Builder::Builder),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrim_FaceBuilder , shared_ptr<BRepPrim_FaceBuilder> >>(m.attr("BRepPrim_FaceBuilder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrim_GWedge , shared_ptr<BRepPrim_GWedge> >>(m.attr("BRepPrim_GWedge"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrim_OneAxis , shared_ptr<BRepPrim_OneAxis>,Py_BRepPrim_OneAxis >>(m.attr("BRepPrim_OneAxis"))
    // constructors
    // custom constructors
    // methods
        .def("MakeEmptyLateralFace",
             (TopoDS_Face (BRepPrim_OneAxis::*)() const) static_cast<TopoDS_Face (BRepPrim_OneAxis::*)() const>(&BRepPrim_OneAxis::MakeEmptyLateralFace),
             R"#(Returns a face with no edges. The surface is the lateral surface with normals pointing outward. The U parameter is the angle with the origin on the X axis. The V parameter is the parameter of the meridian.)#" )
        .def("MakeEmptyMeridianEdge",
             (TopoDS_Edge (BRepPrim_OneAxis::*)( const Standard_Real ) const) static_cast<TopoDS_Edge (BRepPrim_OneAxis::*)( const Standard_Real ) const>(&BRepPrim_OneAxis::MakeEmptyMeridianEdge),
             R"#(Returns an edge with a 3D curve made from the meridian in the XZ plane rotated by <Ang> around the Z-axis. Ang may be 0 or myAngle.)#"  , py::arg("Ang"))
        .def("SetMeridianPCurve",
             (void (BRepPrim_OneAxis::*)( TopoDS_Edge & , const TopoDS_Face & ) const) static_cast<void (BRepPrim_OneAxis::*)( TopoDS_Edge & , const TopoDS_Face & ) const>(&BRepPrim_OneAxis::SetMeridianPCurve),
             R"#(Sets the parametric curve of the edge <E> in the face <F> to be the 2d representation of the meridian.)#"  , py::arg("E"),  py::arg("F"))
        .def("MeridianValue",
             (gp_Pnt2d (BRepPrim_OneAxis::*)( const Standard_Real ) const) static_cast<gp_Pnt2d (BRepPrim_OneAxis::*)( const Standard_Real ) const>(&BRepPrim_OneAxis::MeridianValue),
             R"#(Returns the meridian point at parameter <V> in the plane XZ.)#"  , py::arg("V"))
        .def("MeridianOnAxis",
             (Standard_Boolean (BRepPrim_OneAxis::*)( const Standard_Real ) const) static_cast<Standard_Boolean (BRepPrim_OneAxis::*)( const Standard_Real ) const>(&BRepPrim_OneAxis::MeridianOnAxis),
             R"#(Returns True if the point of parameter <V> on the meridian is on the Axis. Default implementation is Abs(MeridianValue(V).X()) < Precision::Confusion())#"  , py::arg("V"))
        .def("MeridianClosed",
             (Standard_Boolean (BRepPrim_OneAxis::*)() const) static_cast<Standard_Boolean (BRepPrim_OneAxis::*)() const>(&BRepPrim_OneAxis::MeridianClosed),
             R"#(Returns True if the meridian is closed. Default implementation is MeridianValue(VMin).IsEqual(MeridianValue(VMax), Precision::Confusion()))#" )
        .def("VMaxInfinite",
             (Standard_Boolean (BRepPrim_OneAxis::*)() const) static_cast<Standard_Boolean (BRepPrim_OneAxis::*)() const>(&BRepPrim_OneAxis::VMaxInfinite),
             R"#(Returns True if VMax is infinite. Default Precision::IsPositiveInfinite(VMax);)#" )
        .def("VMinInfinite",
             (Standard_Boolean (BRepPrim_OneAxis::*)() const) static_cast<Standard_Boolean (BRepPrim_OneAxis::*)() const>(&BRepPrim_OneAxis::VMinInfinite),
             R"#(Returns True if VMin is infinite. Default Precision::IsNegativeInfinite(VMax);)#" )
        .def("HasTop",
             (Standard_Boolean (BRepPrim_OneAxis::*)() const) static_cast<Standard_Boolean (BRepPrim_OneAxis::*)() const>(&BRepPrim_OneAxis::HasTop),
             R"#(Returns True if there is a top face.)#" )
        .def("HasBottom",
             (Standard_Boolean (BRepPrim_OneAxis::*)() const) static_cast<Standard_Boolean (BRepPrim_OneAxis::*)() const>(&BRepPrim_OneAxis::HasBottom),
             R"#(Returns True if there is a bottom face.)#" )
        .def("HasSides",
             (Standard_Boolean (BRepPrim_OneAxis::*)() const) static_cast<Standard_Boolean (BRepPrim_OneAxis::*)() const>(&BRepPrim_OneAxis::HasSides),
             R"#(Returns True if there are Start and End faces.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrim_Revolution , shared_ptr<BRepPrim_Revolution> , BRepPrim_OneAxis>>(m.attr("BRepPrim_Revolution"))
    // constructors
    // custom constructors
    // methods
        .def("MakeEmptyLateralFace",
             (TopoDS_Face (BRepPrim_Revolution::*)() const) static_cast<TopoDS_Face (BRepPrim_Revolution::*)() const>(&BRepPrim_Revolution::MakeEmptyLateralFace),
             R"#(The surface normal should be directed towards the outside.)#" )
        .def("MakeEmptyMeridianEdge",
             (TopoDS_Edge (BRepPrim_Revolution::*)( const Standard_Real ) const) static_cast<TopoDS_Edge (BRepPrim_Revolution::*)( const Standard_Real ) const>(&BRepPrim_Revolution::MakeEmptyMeridianEdge),
             R"#(Returns an edge with a 3D curve made from the meridian in the XZ plane rotated by <Ang> around the Z-axis. Ang may be 0 or myAngle.)#"  , py::arg("Ang"))
        .def("MeridianValue",
             (gp_Pnt2d (BRepPrim_Revolution::*)( const Standard_Real ) const) static_cast<gp_Pnt2d (BRepPrim_Revolution::*)( const Standard_Real ) const>(&BRepPrim_Revolution::MeridianValue),
             R"#(Returns the meridian point at parameter <V> in the plane XZ.)#"  , py::arg("V"))
        .def("SetMeridianPCurve",
             (void (BRepPrim_Revolution::*)( TopoDS_Edge & , const TopoDS_Face & ) const) static_cast<void (BRepPrim_Revolution::*)( TopoDS_Edge & , const TopoDS_Face & ) const>(&BRepPrim_Revolution::SetMeridianPCurve),
             R"#(Sets the parametric urve of the edge <E> in the face <F> to be the 2d representation of the meridian.)#"  , py::arg("E"),  py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrim_Wedge , shared_ptr<BRepPrim_Wedge> , BRepPrim_GWedge>>(m.attr("BRepPrim_Wedge"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrim_Cone , shared_ptr<BRepPrim_Cone> , BRepPrim_Revolution>>(m.attr("BRepPrim_Cone"))
    // constructors
    // custom constructors
    // methods
        .def("MakeEmptyLateralFace",
             (TopoDS_Face (BRepPrim_Cone::*)() const) static_cast<TopoDS_Face (BRepPrim_Cone::*)() const>(&BRepPrim_Cone::MakeEmptyLateralFace),
             R"#(The surface normal should be directed towards the outside.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrim_Cylinder , shared_ptr<BRepPrim_Cylinder> , BRepPrim_Revolution>>(m.attr("BRepPrim_Cylinder"))
    // constructors
    // custom constructors
    // methods
        .def("MakeEmptyLateralFace",
             (TopoDS_Face (BRepPrim_Cylinder::*)() const) static_cast<TopoDS_Face (BRepPrim_Cylinder::*)() const>(&BRepPrim_Cylinder::MakeEmptyLateralFace),
             R"#(The surface normal should be directed towards the outside.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrim_Sphere , shared_ptr<BRepPrim_Sphere> , BRepPrim_Revolution>>(m.attr("BRepPrim_Sphere"))
    // constructors
    // custom constructors
    // methods
        .def("MakeEmptyLateralFace",
             (TopoDS_Face (BRepPrim_Sphere::*)() const) static_cast<TopoDS_Face (BRepPrim_Sphere::*)() const>(&BRepPrim_Sphere::MakeEmptyLateralFace),
             R"#(The surface normal should be directed towards the outside.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrim_Torus , shared_ptr<BRepPrim_Torus> , BRepPrim_Revolution>>(m.attr("BRepPrim_Torus"))
    // constructors
    // custom constructors
    // methods
        .def("MakeEmptyLateralFace",
             (TopoDS_Face (BRepPrim_Torus::*)() const) static_cast<TopoDS_Face (BRepPrim_Torus::*)() const>(&BRepPrim_Torus::MakeEmptyLateralFace),
             R"#(The surface normal should be directed towards the outside.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepPrim_Wedge.hxx
// ./opencascade/BRepPrim_Torus.hxx
// ./opencascade/BRepPrim_Revolution.hxx
// ./opencascade/BRepPrim_Cone.hxx
// ./opencascade/BRepPrim_FaceBuilder.hxx
// ./opencascade/BRepPrim_Cylinder.hxx
// ./opencascade/BRepPrim_Builder.hxx
// ./opencascade/BRepPrim_Sphere.hxx
// ./opencascade/BRepPrim_OneAxis.hxx
// ./opencascade/BRepPrim_GWedge.hxx
// ./opencascade/BRepPrim_Direction.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

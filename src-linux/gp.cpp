
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Ax1.hxx>
#include <gp_Ax2.hxx>
#include <Standard_ConstructionError.hxx>
#include <gp_Trsf2d.hxx>
#include <gp_GTrsf2d.hxx>
#include <gp_XY.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax2.hxx>
#include <gp_Quaternion.hxx>
#include <gp_Ax3.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax2.hxx>
#include <gp_XYZ.hxx>
#include <gp_Trsf.hxx>
#include <gp_GTrsf.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax2.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Dir2d.hxx>
#include <gp_Ax2d.hxx>
#include <gp_XYZ.hxx>
#include <gp_Mat.hxx>
#include <gp_Quaternion.hxx>
#include <gp_Trsf.hxx>
#include <gp_GTrsf.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Dir.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax3.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <gp_Cone.hxx>
#include <gp_XY.hxx>
#include <gp_Mat2d.hxx>
#include <gp_Trsf2d.hxx>
#include <gp_GTrsf2d.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Dir2d.hxx>
#include <gp_Ax2d.hxx>
#include <gp_Ax22d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_GTrsf2d.hxx>

// module includes
#include <gp.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax22d.hxx>
#include <gp_Ax2d.hxx>
#include <gp_Ax3.hxx>
#include <gp_Circ.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Cone.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Dir.hxx>
#include <gp_Dir2d.hxx>
#include <gp_Elips.hxx>
#include <gp_Elips2d.hxx>
#include <gp_EulerSequence.hxx>
#include <gp_GTrsf.hxx>
#include <gp_GTrsf2d.hxx>
#include <gp_Hypr.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Lin.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Mat.hxx>
#include <gp_Mat2d.hxx>
#include <gp_Parab.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Pln.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Quaternion.hxx>
#include <gp_QuaternionNLerp.hxx>
#include <gp_QuaternionSLerp.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <gp_Trsf.hxx>
#include <gp_Trsf2d.hxx>
#include <gp_TrsfForm.hxx>
#include <gp_TrsfNLerp.hxx>
#include <gp_Vec.hxx>
#include <gp_Vec2d.hxx>
#include <gp_VectorWithNullMagnitude.hxx>
#include <gp_XY.hxx>
#include <gp_XYZ.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_gp(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("gp"));


//Python trampoline classes

// classes


    static_cast<py::class_<NCollection_Lerp<gp_Trsf> , shared_ptr<NCollection_Lerp<gp_Trsf>> >>(m.attr("NCollection_Lerp_gp_Trsf"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Trsf &,const gp_Trsf & >()  , py::arg("theStart"),  py::arg("theEnd") )
    // custom constructors
    // methods
        .def("Init",
             (void (NCollection_Lerp<gp_Trsf>::*)( const gp_Trsf & , const gp_Trsf & ) ) static_cast<void (NCollection_Lerp<gp_Trsf>::*)( const gp_Trsf & , const gp_Trsf & ) >(&NCollection_Lerp<gp_Trsf>::Init),
             R"#(Initialize values.)#"  , py::arg("theStart"),  py::arg("theEnd"))
        .def("Interpolate",
             (void (NCollection_Lerp<gp_Trsf>::*)( double , gp_Trsf & ) const) static_cast<void (NCollection_Lerp<gp_Trsf>::*)( double , gp_Trsf & ) const>(&NCollection_Lerp<gp_Trsf>::Interpolate),
             R"#(Compute interpolated value between two values.)#"  , py::arg("theT"),  py::arg("theResult"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<gp , shared_ptr<gp>>(m,"gp");

    static_cast<py::class_<gp , shared_ptr<gp> >>(m.attr("gp"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Resolution_s",
                    (Standard_Real (*)() ) static_cast<Standard_Real (*)() >(&gp::Resolution),
                    R"#(Method of package gp)#" )
        .def_static("Origin_s",
                    (const gp_Pnt & (*)() ) static_cast<const gp_Pnt & (*)() >(&gp::Origin),
                    R"#(Identifies a Cartesian point with coordinates X = Y = Z = 0.0.0)#" )
        .def_static("DX_s",
                    (const gp_Dir & (*)() ) static_cast<const gp_Dir & (*)() >(&gp::DX),
                    R"#(Returns a unit vector with the combination (1,0,0))#" )
        .def_static("DY_s",
                    (const gp_Dir & (*)() ) static_cast<const gp_Dir & (*)() >(&gp::DY),
                    R"#(Returns a unit vector with the combination (0,1,0))#" )
        .def_static("DZ_s",
                    (const gp_Dir & (*)() ) static_cast<const gp_Dir & (*)() >(&gp::DZ),
                    R"#(Returns a unit vector with the combination (0,0,1))#" )
        .def_static("OX_s",
                    (const gp_Ax1 & (*)() ) static_cast<const gp_Ax1 & (*)() >(&gp::OX),
                    R"#(Identifies an axis where its origin is Origin and its unit vector coordinates X = 1.0, Y = Z = 0.0)#" )
        .def_static("OY_s",
                    (const gp_Ax1 & (*)() ) static_cast<const gp_Ax1 & (*)() >(&gp::OY),
                    R"#(Identifies an axis where its origin is Origin and its unit vector coordinates Y = 1.0, X = Z = 0.0)#" )
        .def_static("OZ_s",
                    (const gp_Ax1 & (*)() ) static_cast<const gp_Ax1 & (*)() >(&gp::OZ),
                    R"#(Identifies an axis where its origin is Origin and its unit vector coordinates Z = 1.0, Y = X = 0.0)#" )
        .def_static("XOY_s",
                    (const gp_Ax2 & (*)() ) static_cast<const gp_Ax2 & (*)() >(&gp::XOY),
                    R"#(Identifies a coordinate system where its origin is Origin, and its "main Direction" and "X Direction" coordinates Z = 1.0, X = Y =0.0 and X direction coordinates X = 1.0, Y = Z = 0.0)#" )
        .def_static("ZOX_s",
                    (const gp_Ax2 & (*)() ) static_cast<const gp_Ax2 & (*)() >(&gp::ZOX),
                    R"#(Identifies a coordinate system where its origin is Origin, and its "main Direction" and "X Direction" coordinates Y = 1.0, X = Z =0.0 and X direction coordinates Z = 1.0, X = Y = 0.0)#" )
        .def_static("YOZ_s",
                    (const gp_Ax2 & (*)() ) static_cast<const gp_Ax2 & (*)() >(&gp::YOZ),
                    R"#(Identifies a coordinate system where its origin is Origin, and its "main Direction" and "X Direction" coordinates X = 1.0, Z = Y =0.0 and X direction coordinates Y = 1.0, X = Z = 0.0 In 2D space)#" )
        .def_static("Origin2d_s",
                    (const gp_Pnt2d & (*)() ) static_cast<const gp_Pnt2d & (*)() >(&gp::Origin2d),
                    R"#(Identifies a Cartesian point with coordinates X = Y = 0.0)#" )
        .def_static("DX2d_s",
                    (const gp_Dir2d & (*)() ) static_cast<const gp_Dir2d & (*)() >(&gp::DX2d),
                    R"#(Returns a unit vector with the combinations (1,0))#" )
        .def_static("DY2d_s",
                    (const gp_Dir2d & (*)() ) static_cast<const gp_Dir2d & (*)() >(&gp::DY2d),
                    R"#(Returns a unit vector with the combinations (0,1))#" )
        .def_static("OX2d_s",
                    (const gp_Ax2d & (*)() ) static_cast<const gp_Ax2d & (*)() >(&gp::OX2d),
                    R"#(Identifies an axis where its origin is Origin2d and its unit vector coordinates are: X = 1.0, Y = 0.0)#" )
        .def_static("OY2d_s",
                    (const gp_Ax2d & (*)() ) static_cast<const gp_Ax2d & (*)() >(&gp::OY2d),
                    R"#(Identifies an axis where its origin is Origin2d and its unit vector coordinates are Y = 1.0, X = 0.0)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_Ax1 , shared_ptr<gp_Ax1> >>(m.attr("gp_Ax1"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const gp_Dir & >()  , py::arg("P"),  py::arg("V") )
    // custom constructors
    // methods
        .def("SetDirection",
             (void (gp_Ax1::*)( const gp_Dir & ) ) static_cast<void (gp_Ax1::*)( const gp_Dir & ) >(&gp_Ax1::SetDirection),
             R"#(Assigns V as the "Direction" of this axis.)#"  , py::arg("V"))
        .def("SetLocation",
             (void (gp_Ax1::*)( const gp_Pnt & ) ) static_cast<void (gp_Ax1::*)( const gp_Pnt & ) >(&gp_Ax1::SetLocation),
             R"#(Assigns P as the origin of this axis.)#"  , py::arg("P"))
        .def("Direction",
             (const gp_Dir & (gp_Ax1::*)() const) static_cast<const gp_Dir & (gp_Ax1::*)() const>(&gp_Ax1::Direction),
             R"#(Returns the direction of <me>.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Ax1::*)() const) static_cast<const gp_Pnt & (gp_Ax1::*)() const>(&gp_Ax1::Location),
             R"#(Returns the location point of <me>.)#" )
        .def("IsCoaxial",
             (Standard_Boolean (gp_Ax1::*)( const gp_Ax1 & , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Ax1::*)( const gp_Ax1 & , const Standard_Real , const Standard_Real ) const>(&gp_Ax1::IsCoaxial),
             R"#(Returns True if : . the angle between <me> and <Other> is lower or equal to <AngularTolerance> and . the distance between <me>.Location() and <Other> is lower or equal to <LinearTolerance> and . the distance between <Other>.Location() and <me> is lower or equal to LinearTolerance.)#"  , py::arg("Other"),  py::arg("AngularTolerance"),  py::arg("LinearTolerance"))
        .def("IsNormal",
             (Standard_Boolean (gp_Ax1::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Ax1::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Ax1::IsNormal),
             R"#(Returns True if the direction of the <me> and <Other> are normal to each other. That is, if the angle between the two axes is equal to Pi/2. Note: the tolerance criterion is given by AngularTolerance..)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsOpposite",
             (Standard_Boolean (gp_Ax1::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Ax1::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Ax1::IsOpposite),
             R"#(Returns True if the direction of <me> and <Other> are parallel with opposite orientation. That is, if the angle between the two axes is equal to Pi. Note: the tolerance criterion is given by AngularTolerance.)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsParallel",
             (Standard_Boolean (gp_Ax1::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Ax1::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Ax1::IsParallel),
             R"#(Returns True if the direction of <me> and <Other> are parallel with same orientation or opposite orientation. That is, if the angle between the two axes is equal to 0 or Pi. Note: the tolerance criterion is given by AngularTolerance.)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("Angle",
             (Standard_Real (gp_Ax1::*)( const gp_Ax1 & ) const) static_cast<Standard_Real (gp_Ax1::*)( const gp_Ax1 & ) const>(&gp_Ax1::Angle),
             R"#(Computes the angular value, in radians, between <me>.Direction() and <Other>.Direction(). Returns the angle between 0 and 2*PI radians.)#"  , py::arg("Other"))
        .def("Reverse",
             (void (gp_Ax1::*)() ) static_cast<void (gp_Ax1::*)() >(&gp_Ax1::Reverse),
             R"#(Reverses the unit vector of this axis. and assigns the result to this axis.)#" )
        .def("Reversed",
             (gp_Ax1 (gp_Ax1::*)() const) static_cast<gp_Ax1 (gp_Ax1::*)() const>(&gp_Ax1::Reversed),
             R"#(Reverses the unit vector of this axis and creates a new one.)#" )
        .def("Mirror",
             (void (gp_Ax1::*)( const gp_Pnt & ) ) static_cast<void (gp_Ax1::*)( const gp_Pnt & ) >(&gp_Ax1::Mirror),
             R"#(Performs the symmetrical transformation of an axis placement with respect to the point P which is the center of the symmetry and assigns the result to this axis.)#"  , py::arg("P"))
        .def("Mirrored",
             (gp_Ax1 (gp_Ax1::*)( const gp_Pnt & ) const) static_cast<gp_Ax1 (gp_Ax1::*)( const gp_Pnt & ) const>(&gp_Ax1::Mirrored),
             R"#(Performs the symmetrical transformation of an axis placement with respect to the point P which is the center of the symmetry and creates a new axis.)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Ax1::*)( const gp_Ax1 & ) ) static_cast<void (gp_Ax1::*)( const gp_Ax1 & ) >(&gp_Ax1::Mirror),
             R"#(Performs the symmetrical transformation of an axis placement with respect to an axis placement which is the axis of the symmetry and assigns the result to this axis.)#"  , py::arg("A1"))
        .def("Mirrored",
             (gp_Ax1 (gp_Ax1::*)( const gp_Ax1 & ) const) static_cast<gp_Ax1 (gp_Ax1::*)( const gp_Ax1 & ) const>(&gp_Ax1::Mirrored),
             R"#(Performs the symmetrical transformation of an axis placement with respect to an axis placement which is the axis of the symmetry and creates a new axis.)#"  , py::arg("A1"))
        .def("Mirror",
             (void (gp_Ax1::*)( const gp_Ax2 & ) ) static_cast<void (gp_Ax1::*)( const gp_Ax2 & ) >(&gp_Ax1::Mirror),
             R"#(Performs the symmetrical transformation of an axis placement with respect to a plane. The axis placement <A2> locates the plane of the symmetry : (Location, XDirection, YDirection) and assigns the result to this axis.)#"  , py::arg("A2"))
        .def("Mirrored",
             (gp_Ax1 (gp_Ax1::*)( const gp_Ax2 & ) const) static_cast<gp_Ax1 (gp_Ax1::*)( const gp_Ax2 & ) const>(&gp_Ax1::Mirrored),
             R"#(Performs the symmetrical transformation of an axis placement with respect to a plane. The axis placement <A2> locates the plane of the symmetry : (Location, XDirection, YDirection) and creates a new axis.)#"  , py::arg("A2"))
        .def("Rotate",
             (void (gp_Ax1::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Ax1::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Ax1::Rotate),
             R"#(Rotates this axis at an angle Ang (in radians) about the axis A1 and assigns the result to this axis.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Ax1 (gp_Ax1::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Ax1 (gp_Ax1::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Ax1::Rotated),
             R"#(Rotates this axis at an angle Ang (in radians) about the axis A1 and creates a new one.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Ax1::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Ax1::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Ax1::Scale),
             R"#(Applies a scaling transformation to this axis with: - scale factor S, and - center P and assigns the result to this axis.)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Ax1 (gp_Ax1::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Ax1 (gp_Ax1::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Ax1::Scaled),
             R"#(Applies a scaling transformation to this axis with: - scale factor S, and - center P and creates a new axis.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Ax1::*)( const gp_Trsf & ) ) static_cast<void (gp_Ax1::*)( const gp_Trsf & ) >(&gp_Ax1::Transform),
             R"#(Applies the transformation T to this axis. and assigns the result to this axis.)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Ax1 (gp_Ax1::*)( const gp_Trsf & ) const) static_cast<gp_Ax1 (gp_Ax1::*)( const gp_Trsf & ) const>(&gp_Ax1::Transformed),
             R"#(Applies the transformation T to this axis and creates a new one.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Ax1::*)( const gp_Vec & ) ) static_cast<void (gp_Ax1::*)( const gp_Vec & ) >(&gp_Ax1::Translate),
             R"#(Translates this axis by the vector V, and assigns the result to this axis.)#"  , py::arg("V"))
        .def("Translated",
             (gp_Ax1 (gp_Ax1::*)( const gp_Vec & ) const) static_cast<gp_Ax1 (gp_Ax1::*)( const gp_Vec & ) const>(&gp_Ax1::Translated),
             R"#(Translates this axis by the vector V, and creates a new one.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Ax1::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Ax1::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Ax1::Translate),
             R"#(Translates this axis by: the vector (P1, P2) defined from point P1 to point P2. and assigns the result to this axis.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Ax1 (gp_Ax1::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Ax1 (gp_Ax1::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Ax1::Translated),
             R"#(Translates this axis by: the vector (P1, P2) defined from point P1 to point P2. and creates a new one.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetDirection",
             (void (gp_Ax1::*)( const gp_Dir & ) ) static_cast<void (gp_Ax1::*)( const gp_Dir & ) >(&gp_Ax1::SetDirection),
             R"#(Assigns V as the "Direction" of this axis.)#"  , py::arg("V"))
        .def("SetLocation",
             (void (gp_Ax1::*)( const gp_Pnt & ) ) static_cast<void (gp_Ax1::*)( const gp_Pnt & ) >(&gp_Ax1::SetLocation),
             R"#(Assigns P as the origin of this axis.)#"  , py::arg("P"))
        .def("Direction",
             (const gp_Dir & (gp_Ax1::*)() const) static_cast<const gp_Dir & (gp_Ax1::*)() const>(&gp_Ax1::Direction),
             R"#(Returns the direction of <me>.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Ax1::*)() const) static_cast<const gp_Pnt & (gp_Ax1::*)() const>(&gp_Ax1::Location),
             R"#(Returns the location point of <me>.)#" )
        .def("IsNormal",
             (Standard_Boolean (gp_Ax1::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Ax1::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Ax1::IsNormal),
             R"#(Returns True if the direction of the <me> and <Other> are normal to each other. That is, if the angle between the two axes is equal to Pi/2. Note: the tolerance criterion is given by AngularTolerance..)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsOpposite",
             (Standard_Boolean (gp_Ax1::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Ax1::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Ax1::IsOpposite),
             R"#(Returns True if the direction of <me> and <Other> are parallel with opposite orientation. That is, if the angle between the two axes is equal to Pi. Note: the tolerance criterion is given by AngularTolerance.)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsParallel",
             (Standard_Boolean (gp_Ax1::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Ax1::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Ax1::IsParallel),
             R"#(Returns True if the direction of <me> and <Other> are parallel with same orientation or opposite orientation. That is, if the angle between the two axes is equal to 0 or Pi. Note: the tolerance criterion is given by AngularTolerance.)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("Angle",
             (Standard_Real (gp_Ax1::*)( const gp_Ax1 & ) const) static_cast<Standard_Real (gp_Ax1::*)( const gp_Ax1 & ) const>(&gp_Ax1::Angle),
             R"#(Computes the angular value, in radians, between <me>.Direction() and <Other>.Direction(). Returns the angle between 0 and 2*PI radians.)#"  , py::arg("Other"))
        .def("Reverse",
             (void (gp_Ax1::*)() ) static_cast<void (gp_Ax1::*)() >(&gp_Ax1::Reverse),
             R"#(Reverses the unit vector of this axis. and assigns the result to this axis.)#" )
        .def("Reversed",
             (gp_Ax1 (gp_Ax1::*)() const) static_cast<gp_Ax1 (gp_Ax1::*)() const>(&gp_Ax1::Reversed),
             R"#(Reverses the unit vector of this axis and creates a new one.)#" )
        .def("Rotate",
             (void (gp_Ax1::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Ax1::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Ax1::Rotate),
             R"#(Rotates this axis at an angle Ang (in radians) about the axis A1 and assigns the result to this axis.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Ax1 (gp_Ax1::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Ax1 (gp_Ax1::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Ax1::Rotated),
             R"#(Rotates this axis at an angle Ang (in radians) about the axis A1 and creates a new one.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Ax1::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Ax1::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Ax1::Scale),
             R"#(Applies a scaling transformation to this axis with: - scale factor S, and - center P and assigns the result to this axis.)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Ax1 (gp_Ax1::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Ax1 (gp_Ax1::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Ax1::Scaled),
             R"#(Applies a scaling transformation to this axis with: - scale factor S, and - center P and creates a new axis.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Ax1::*)( const gp_Trsf & ) ) static_cast<void (gp_Ax1::*)( const gp_Trsf & ) >(&gp_Ax1::Transform),
             R"#(Applies the transformation T to this axis. and assigns the result to this axis.)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Ax1 (gp_Ax1::*)( const gp_Trsf & ) const) static_cast<gp_Ax1 (gp_Ax1::*)( const gp_Trsf & ) const>(&gp_Ax1::Transformed),
             R"#(Applies the transformation T to this axis and creates a new one.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Ax1::*)( const gp_Vec & ) ) static_cast<void (gp_Ax1::*)( const gp_Vec & ) >(&gp_Ax1::Translate),
             R"#(Translates this axis by the vector V, and assigns the result to this axis.)#"  , py::arg("V"))
        .def("Translated",
             (gp_Ax1 (gp_Ax1::*)( const gp_Vec & ) const) static_cast<gp_Ax1 (gp_Ax1::*)( const gp_Vec & ) const>(&gp_Ax1::Translated),
             R"#(Translates this axis by the vector V, and creates a new one.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Ax1::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Ax1::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Ax1::Translate),
             R"#(Translates this axis by: the vector (P1, P2) defined from point P1 to point P2. and assigns the result to this axis.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Ax1 (gp_Ax1::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Ax1 (gp_Ax1::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Ax1::Translated),
             R"#(Translates this axis by: the vector (P1, P2) defined from point P1 to point P2. and creates a new one.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_Ax2 , shared_ptr<gp_Ax2> >>(m.attr("gp_Ax2"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const gp_Dir &,const gp_Dir & >()  , py::arg("P"),  py::arg("N"),  py::arg("Vx") )
        .def(py::init< const gp_Pnt &,const gp_Dir & >()  , py::arg("P"),  py::arg("V") )
    // custom constructors
    // methods
        .def("SetAxis",
             (void (gp_Ax2::*)( const gp_Ax1 & ) ) static_cast<void (gp_Ax2::*)( const gp_Ax1 & ) >(&gp_Ax2::SetAxis),
             R"#(Assigns the origin and "main Direction" of the axis A1 to this coordinate system, then recomputes its "X Direction" and "Y Direction". Note: The new "X Direction" is computed as follows: new "X Direction" = V1 ^(previous "X Direction" ^ V) where V is the "Direction" of A1. Exceptions Standard_ConstructionError if A1 is parallel to the "X Direction" of this coordinate system.)#"  , py::arg("A1"))
        .def("SetDirection",
             (void (gp_Ax2::*)( const gp_Dir & ) ) static_cast<void (gp_Ax2::*)( const gp_Dir & ) >(&gp_Ax2::SetDirection),
             R"#(Changes the "main Direction" of this coordinate system, then recomputes its "X Direction" and "Y Direction". Note: the new "X Direction" is computed as follows: new "X Direction" = V ^ (previous "X Direction" ^ V) Exceptions Standard_ConstructionError if V is parallel to the "X Direction" of this coordinate system.)#"  , py::arg("V"))
        .def("SetLocation",
             (void (gp_Ax2::*)( const gp_Pnt & ) ) static_cast<void (gp_Ax2::*)( const gp_Pnt & ) >(&gp_Ax2::SetLocation),
             R"#(Changes the "Location" point (origin) of <me>.)#"  , py::arg("P"))
        .def("SetXDirection",
             (void (gp_Ax2::*)( const gp_Dir & ) ) static_cast<void (gp_Ax2::*)( const gp_Dir & ) >(&gp_Ax2::SetXDirection),
             R"#(Changes the "Xdirection" of <me>. The main direction "Direction" is not modified, the "Ydirection" is modified. If <Vx> is not normal to the main direction then <XDirection> is computed as follows XDirection = Direction ^ (Vx ^ Direction). Exceptions Standard_ConstructionError if Vx or Vy is parallel to the "main Direction" of this coordinate system.)#"  , py::arg("Vx"))
        .def("SetYDirection",
             (void (gp_Ax2::*)( const gp_Dir & ) ) static_cast<void (gp_Ax2::*)( const gp_Dir & ) >(&gp_Ax2::SetYDirection),
             R"#(Changes the "Ydirection" of <me>. The main direction is not modified but the "Xdirection" is changed. If <Vy> is not normal to the main direction then "YDirection" is computed as follows YDirection = Direction ^ (<Vy> ^ Direction). Exceptions Standard_ConstructionError if Vx or Vy is parallel to the "main Direction" of this coordinate system.)#"  , py::arg("Vy"))
        .def("Angle",
             (Standard_Real (gp_Ax2::*)( const gp_Ax2 & ) const) static_cast<Standard_Real (gp_Ax2::*)( const gp_Ax2 & ) const>(&gp_Ax2::Angle),
             R"#(Computes the angular value, in radians, between the main direction of <me> and the main direction of <Other>. Returns the angle between 0 and PI in radians.)#"  , py::arg("Other"))
        .def("Axis",
             (const gp_Ax1 & (gp_Ax2::*)() const) static_cast<const gp_Ax1 & (gp_Ax2::*)() const>(&gp_Ax2::Axis),
             R"#(Returns the main axis of <me>. It is the "Location" point and the main "Direction".)#" )
        .def("Direction",
             (const gp_Dir & (gp_Ax2::*)() const) static_cast<const gp_Dir & (gp_Ax2::*)() const>(&gp_Ax2::Direction),
             R"#(Returns the main direction of <me>.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Ax2::*)() const) static_cast<const gp_Pnt & (gp_Ax2::*)() const>(&gp_Ax2::Location),
             R"#(Returns the "Location" point (origin) of <me>.)#" )
        .def("XDirection",
             (const gp_Dir & (gp_Ax2::*)() const) static_cast<const gp_Dir & (gp_Ax2::*)() const>(&gp_Ax2::XDirection),
             R"#(Returns the "XDirection" of <me>.)#" )
        .def("YDirection",
             (const gp_Dir & (gp_Ax2::*)() const) static_cast<const gp_Dir & (gp_Ax2::*)() const>(&gp_Ax2::YDirection),
             R"#(Returns the "YDirection" of <me>.)#" )
        .def("IsCoplanar",
             (Standard_Boolean (gp_Ax2::*)( const gp_Ax2 & , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Ax2::*)( const gp_Ax2 & , const Standard_Real , const Standard_Real ) const>(&gp_Ax2::IsCoplanar),
             R"#(None)#"  , py::arg("Other"),  py::arg("LinearTolerance"),  py::arg("AngularTolerance"))
        .def("IsCoplanar",
             (Standard_Boolean (gp_Ax2::*)( const gp_Ax1 & , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Ax2::*)( const gp_Ax1 & , const Standard_Real , const Standard_Real ) const>(&gp_Ax2::IsCoplanar),
             R"#(Returns True if . the distance between <me> and the "Location" point of A1 is lower of equal to LinearTolerance and . the main direction of <me> and the direction of A1 are normal. Note: the tolerance criterion for angular equality is given by AngularTolerance.)#"  , py::arg("A1"),  py::arg("LinearTolerance"),  py::arg("AngularTolerance"))
        .def("Mirror",
             (void (gp_Ax2::*)( const gp_Pnt & ) ) static_cast<void (gp_Ax2::*)( const gp_Pnt & ) >(&gp_Ax2::Mirror),
             R"#(Performs a symmetrical transformation of this coordinate system with respect to: - the point P, and assigns the result to this coordinate system. Warning This transformation is always performed on the origin. In case of a reflection with respect to a point: - the main direction of the coordinate system is not changed, and - the "X Direction" and the "Y Direction" are simply reversed In case of a reflection with respect to an axis or a plane: - the transformation is applied to the "X Direction" and the "Y Direction", then - the "main Direction" is recomputed as the cross product "X Direction" ^ "Y Direction". This maintains the right-handed property of the coordinate system.)#"  , py::arg("P"))
        .def("Mirrored",
             (gp_Ax2 (gp_Ax2::*)( const gp_Pnt & ) const) static_cast<gp_Ax2 (gp_Ax2::*)( const gp_Pnt & ) const>(&gp_Ax2::Mirrored),
             R"#(Performs a symmetrical transformation of this coordinate system with respect to: - the point P, and creates a new one. Warning This transformation is always performed on the origin. In case of a reflection with respect to a point: - the main direction of the coordinate system is not changed, and - the "X Direction" and the "Y Direction" are simply reversed In case of a reflection with respect to an axis or a plane: - the transformation is applied to the "X Direction" and the "Y Direction", then - the "main Direction" is recomputed as the cross product "X Direction" ^ "Y Direction". This maintains the right-handed property of the coordinate system.)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Ax2::*)( const gp_Ax1 & ) ) static_cast<void (gp_Ax2::*)( const gp_Ax1 & ) >(&gp_Ax2::Mirror),
             R"#(Performs a symmetrical transformation of this coordinate system with respect to: - the axis A1, and assigns the result to this coordinate systeme. Warning This transformation is always performed on the origin. In case of a reflection with respect to a point: - the main direction of the coordinate system is not changed, and - the "X Direction" and the "Y Direction" are simply reversed In case of a reflection with respect to an axis or a plane: - the transformation is applied to the "X Direction" and the "Y Direction", then - the "main Direction" is recomputed as the cross product "X Direction" ^ "Y Direction". This maintains the right-handed property of the coordinate system.)#"  , py::arg("A1"))
        .def("Mirrored",
             (gp_Ax2 (gp_Ax2::*)( const gp_Ax1 & ) const) static_cast<gp_Ax2 (gp_Ax2::*)( const gp_Ax1 & ) const>(&gp_Ax2::Mirrored),
             R"#(Performs a symmetrical transformation of this coordinate system with respect to: - the axis A1, and creates a new one. Warning This transformation is always performed on the origin. In case of a reflection with respect to a point: - the main direction of the coordinate system is not changed, and - the "X Direction" and the "Y Direction" are simply reversed In case of a reflection with respect to an axis or a plane: - the transformation is applied to the "X Direction" and the "Y Direction", then - the "main Direction" is recomputed as the cross product "X Direction" ^ "Y Direction". This maintains the right-handed property of the coordinate system.)#"  , py::arg("A1"))
        .def("Mirror",
             (void (gp_Ax2::*)( const gp_Ax2 & ) ) static_cast<void (gp_Ax2::*)( const gp_Ax2 & ) >(&gp_Ax2::Mirror),
             R"#(Performs a symmetrical transformation of this coordinate system with respect to: - the plane defined by the origin, "X Direction" and "Y Direction" of coordinate system A2 and assigns the result to this coordinate systeme. Warning This transformation is always performed on the origin. In case of a reflection with respect to a point: - the main direction of the coordinate system is not changed, and - the "X Direction" and the "Y Direction" are simply reversed In case of a reflection with respect to an axis or a plane: - the transformation is applied to the "X Direction" and the "Y Direction", then - the "main Direction" is recomputed as the cross product "X Direction" ^ "Y Direction". This maintains the right-handed property of the coordinate system.)#"  , py::arg("A2"))
        .def("Mirrored",
             (gp_Ax2 (gp_Ax2::*)( const gp_Ax2 & ) const) static_cast<gp_Ax2 (gp_Ax2::*)( const gp_Ax2 & ) const>(&gp_Ax2::Mirrored),
             R"#(Performs a symmetrical transformation of this coordinate system with respect to: - the plane defined by the origin, "X Direction" and "Y Direction" of coordinate system A2 and creates a new one. Warning This transformation is always performed on the origin. In case of a reflection with respect to a point: - the main direction of the coordinate system is not changed, and - the "X Direction" and the "Y Direction" are simply reversed In case of a reflection with respect to an axis or a plane: - the transformation is applied to the "X Direction" and the "Y Direction", then - the "main Direction" is recomputed as the cross product "X Direction" ^ "Y Direction". This maintains the right-handed property of the coordinate system.)#"  , py::arg("A2"))
        .def("Rotate",
             (void (gp_Ax2::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Ax2::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Ax2::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Ax2 (gp_Ax2::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Ax2 (gp_Ax2::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Ax2::Rotated),
             R"#(Rotates an axis placement. <A1> is the axis of the rotation . Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Ax2::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Ax2::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Ax2::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Ax2 (gp_Ax2::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Ax2 (gp_Ax2::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Ax2::Scaled),
             R"#(Applies a scaling transformation on the axis placement. The "Location" point of the axisplacement is modified. Warnings : If the scale <S> is negative : . the main direction of the axis placement is not changed. . The "XDirection" and the "YDirection" are reversed. So the axis placement stay right handed.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Ax2::*)( const gp_Trsf & ) ) static_cast<void (gp_Ax2::*)( const gp_Trsf & ) >(&gp_Ax2::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Ax2 (gp_Ax2::*)( const gp_Trsf & ) const) static_cast<gp_Ax2 (gp_Ax2::*)( const gp_Trsf & ) const>(&gp_Ax2::Transformed),
             R"#(Transforms an axis placement with a Trsf. The "Location" point, the "XDirection" and the "YDirection" are transformed with T. The resulting main "Direction" of <me> is the cross product between the "XDirection" and the "YDirection" after transformation.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Ax2::*)( const gp_Vec & ) ) static_cast<void (gp_Ax2::*)( const gp_Vec & ) >(&gp_Ax2::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Ax2 (gp_Ax2::*)( const gp_Vec & ) const) static_cast<gp_Ax2 (gp_Ax2::*)( const gp_Vec & ) const>(&gp_Ax2::Translated),
             R"#(Translates an axis plaxement in the direction of the vector <V>. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Ax2::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Ax2::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Ax2::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Ax2 (gp_Ax2::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Ax2 (gp_Ax2::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Ax2::Translated),
             R"#(Translates an axis placement from the point <P1> to the point <P2>.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetAxis",
             (void (gp_Ax2::*)( const gp_Ax1 & ) ) static_cast<void (gp_Ax2::*)( const gp_Ax1 & ) >(&gp_Ax2::SetAxis),
             R"#(Assigns the origin and "main Direction" of the axis A1 to this coordinate system, then recomputes its "X Direction" and "Y Direction". Note: The new "X Direction" is computed as follows: new "X Direction" = V1 ^(previous "X Direction" ^ V) where V is the "Direction" of A1. Exceptions Standard_ConstructionError if A1 is parallel to the "X Direction" of this coordinate system.)#"  , py::arg("A1"))
        .def("SetDirection",
             (void (gp_Ax2::*)( const gp_Dir & ) ) static_cast<void (gp_Ax2::*)( const gp_Dir & ) >(&gp_Ax2::SetDirection),
             R"#(Changes the "main Direction" of this coordinate system, then recomputes its "X Direction" and "Y Direction". Note: the new "X Direction" is computed as follows: new "X Direction" = V ^ (previous "X Direction" ^ V) Exceptions Standard_ConstructionError if V is parallel to the "X Direction" of this coordinate system.)#"  , py::arg("V"))
        .def("SetLocation",
             (void (gp_Ax2::*)( const gp_Pnt & ) ) static_cast<void (gp_Ax2::*)( const gp_Pnt & ) >(&gp_Ax2::SetLocation),
             R"#(Changes the "Location" point (origin) of <me>.)#"  , py::arg("P"))
        .def("SetXDirection",
             (void (gp_Ax2::*)( const gp_Dir & ) ) static_cast<void (gp_Ax2::*)( const gp_Dir & ) >(&gp_Ax2::SetXDirection),
             R"#(Changes the "Xdirection" of <me>. The main direction "Direction" is not modified, the "Ydirection" is modified. If <Vx> is not normal to the main direction then <XDirection> is computed as follows XDirection = Direction ^ (Vx ^ Direction). Exceptions Standard_ConstructionError if Vx or Vy is parallel to the "main Direction" of this coordinate system.)#"  , py::arg("Vx"))
        .def("SetYDirection",
             (void (gp_Ax2::*)( const gp_Dir & ) ) static_cast<void (gp_Ax2::*)( const gp_Dir & ) >(&gp_Ax2::SetYDirection),
             R"#(Changes the "Ydirection" of <me>. The main direction is not modified but the "Xdirection" is changed. If <Vy> is not normal to the main direction then "YDirection" is computed as follows YDirection = Direction ^ (<Vy> ^ Direction). Exceptions Standard_ConstructionError if Vx or Vy is parallel to the "main Direction" of this coordinate system.)#"  , py::arg("Vy"))
        .def("Angle",
             (Standard_Real (gp_Ax2::*)( const gp_Ax2 & ) const) static_cast<Standard_Real (gp_Ax2::*)( const gp_Ax2 & ) const>(&gp_Ax2::Angle),
             R"#(Computes the angular value, in radians, between the main direction of <me> and the main direction of <Other>. Returns the angle between 0 and PI in radians.)#"  , py::arg("Other"))
        .def("Axis",
             (const gp_Ax1 & (gp_Ax2::*)() const) static_cast<const gp_Ax1 & (gp_Ax2::*)() const>(&gp_Ax2::Axis),
             R"#(Returns the main axis of <me>. It is the "Location" point and the main "Direction".)#" )
        .def("Direction",
             (const gp_Dir & (gp_Ax2::*)() const) static_cast<const gp_Dir & (gp_Ax2::*)() const>(&gp_Ax2::Direction),
             R"#(Returns the main direction of <me>.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Ax2::*)() const) static_cast<const gp_Pnt & (gp_Ax2::*)() const>(&gp_Ax2::Location),
             R"#(Returns the "Location" point (origin) of <me>.)#" )
        .def("XDirection",
             (const gp_Dir & (gp_Ax2::*)() const) static_cast<const gp_Dir & (gp_Ax2::*)() const>(&gp_Ax2::XDirection),
             R"#(Returns the "XDirection" of <me>.)#" )
        .def("YDirection",
             (const gp_Dir & (gp_Ax2::*)() const) static_cast<const gp_Dir & (gp_Ax2::*)() const>(&gp_Ax2::YDirection),
             R"#(Returns the "YDirection" of <me>.)#" )
        .def("IsCoplanar",
             (Standard_Boolean (gp_Ax2::*)( const gp_Ax2 & , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Ax2::*)( const gp_Ax2 & , const Standard_Real , const Standard_Real ) const>(&gp_Ax2::IsCoplanar),
             R"#(None)#"  , py::arg("Other"),  py::arg("LinearTolerance"),  py::arg("AngularTolerance"))
        .def("IsCoplanar",
             (Standard_Boolean (gp_Ax2::*)( const gp_Ax1 & , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Ax2::*)( const gp_Ax1 & , const Standard_Real , const Standard_Real ) const>(&gp_Ax2::IsCoplanar),
             R"#(Returns True if . the distance between <me> and the "Location" point of A1 is lower of equal to LinearTolerance and . the main direction of <me> and the direction of A1 are normal. Note: the tolerance criterion for angular equality is given by AngularTolerance.)#"  , py::arg("A"),  py::arg("LinearTolerance"),  py::arg("AngularTolerance"))
        .def("Rotate",
             (void (gp_Ax2::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Ax2::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Ax2::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Ax2 (gp_Ax2::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Ax2 (gp_Ax2::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Ax2::Rotated),
             R"#(Rotates an axis placement. <A1> is the axis of the rotation . Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Ax2::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Ax2::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Ax2::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Ax2 (gp_Ax2::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Ax2 (gp_Ax2::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Ax2::Scaled),
             R"#(Applies a scaling transformation on the axis placement. The "Location" point of the axisplacement is modified. Warnings : If the scale <S> is negative : . the main direction of the axis placement is not changed. . The "XDirection" and the "YDirection" are reversed. So the axis placement stay right handed.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Ax2::*)( const gp_Trsf & ) ) static_cast<void (gp_Ax2::*)( const gp_Trsf & ) >(&gp_Ax2::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Ax2 (gp_Ax2::*)( const gp_Trsf & ) const) static_cast<gp_Ax2 (gp_Ax2::*)( const gp_Trsf & ) const>(&gp_Ax2::Transformed),
             R"#(Transforms an axis placement with a Trsf. The "Location" point, the "XDirection" and the "YDirection" are transformed with T. The resulting main "Direction" of <me> is the cross product between the "XDirection" and the "YDirection" after transformation.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Ax2::*)( const gp_Vec & ) ) static_cast<void (gp_Ax2::*)( const gp_Vec & ) >(&gp_Ax2::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Ax2 (gp_Ax2::*)( const gp_Vec & ) const) static_cast<gp_Ax2 (gp_Ax2::*)( const gp_Vec & ) const>(&gp_Ax2::Translated),
             R"#(Translates an axis plaxement in the direction of the vector <V>. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Ax2::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Ax2::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Ax2::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Ax2 (gp_Ax2::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Ax2 (gp_Ax2::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Ax2::Translated),
             R"#(Translates an axis placement from the point <P1> to the point <P2>.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_Ax22d , shared_ptr<gp_Ax22d> >>(m.attr("gp_Ax22d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt2d &,const gp_Dir2d &,const gp_Dir2d & >()  , py::arg("P"),  py::arg("Vx"),  py::arg("Vy") )
        .def(py::init< const gp_Pnt2d &,const gp_Dir2d &,const Standard_Boolean >()  , py::arg("P"),  py::arg("V"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Ax2d &,const Standard_Boolean >()  , py::arg("A"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("SetAxis",
             (void (gp_Ax22d::*)( const gp_Ax22d & ) ) static_cast<void (gp_Ax22d::*)( const gp_Ax22d & ) >(&gp_Ax22d::SetAxis),
             R"#(Assigns the origin and the two unit vectors of the coordinate system A1 to this coordinate system.)#"  , py::arg("A1"))
        .def("SetXAxis",
             (void (gp_Ax22d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Ax22d::*)( const gp_Ax2d & ) >(&gp_Ax22d::SetXAxis),
             R"#(Changes the XAxis and YAxis ("Location" point and "Direction") of <me>. The "YDirection" is recomputed in the same sense as before.)#"  , py::arg("A1"))
        .def("SetYAxis",
             (void (gp_Ax22d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Ax22d::*)( const gp_Ax2d & ) >(&gp_Ax22d::SetYAxis),
             R"#(Changes the XAxis and YAxis ("Location" point and "Direction") of <me>. The "XDirection" is recomputed in the same sense as before.)#"  , py::arg("A1"))
        .def("SetLocation",
             (void (gp_Ax22d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Ax22d::*)( const gp_Pnt2d & ) >(&gp_Ax22d::SetLocation),
             R"#(Changes the "Location" point (origin) of <me>.)#"  , py::arg("P"))
        .def("SetXDirection",
             (void (gp_Ax22d::*)( const gp_Dir2d & ) ) static_cast<void (gp_Ax22d::*)( const gp_Dir2d & ) >(&gp_Ax22d::SetXDirection),
             R"#(Assigns Vx to the "X Direction" of this coordinate system. The other unit vector of this coordinate system is recomputed, normal to Vx , without modifying the orientation (right-handed or left-handed) of this coordinate system.)#"  , py::arg("Vx"))
        .def("SetYDirection",
             (void (gp_Ax22d::*)( const gp_Dir2d & ) ) static_cast<void (gp_Ax22d::*)( const gp_Dir2d & ) >(&gp_Ax22d::SetYDirection),
             R"#(Assignsr Vy to the "Y Direction" of this coordinate system. The other unit vector of this coordinate system is recomputed, normal to Vy, without modifying the orientation (right-handed or left-handed) of this coordinate system.)#"  , py::arg("Vy"))
        .def("XAxis",
             (gp_Ax2d (gp_Ax22d::*)() const) static_cast<gp_Ax2d (gp_Ax22d::*)() const>(&gp_Ax22d::XAxis),
             R"#(Returns an axis, for which - the origin is that of this coordinate system, and - the unit vector is either the "X Direction" of this coordinate system. Note: the result is the "X Axis" of this coordinate system.)#" )
        .def("YAxis",
             (gp_Ax2d (gp_Ax22d::*)() const) static_cast<gp_Ax2d (gp_Ax22d::*)() const>(&gp_Ax22d::YAxis),
             R"#(Returns an axis, for which - the origin is that of this coordinate system, and - the unit vector is either the "Y Direction" of this coordinate system. Note: the result is the "Y Axis" of this coordinate system.)#" )
        .def("Location",
             (const gp_Pnt2d & (gp_Ax22d::*)() const) static_cast<const gp_Pnt2d & (gp_Ax22d::*)() const>(&gp_Ax22d::Location),
             R"#(Returns the "Location" point (origin) of <me>.)#" )
        .def("XDirection",
             (const gp_Dir2d & (gp_Ax22d::*)() const) static_cast<const gp_Dir2d & (gp_Ax22d::*)() const>(&gp_Ax22d::XDirection),
             R"#(Returns the "XDirection" of <me>.)#" )
        .def("YDirection",
             (const gp_Dir2d & (gp_Ax22d::*)() const) static_cast<const gp_Dir2d & (gp_Ax22d::*)() const>(&gp_Ax22d::YDirection),
             R"#(Returns the "YDirection" of <me>.)#" )
        .def("Mirror",
             (void (gp_Ax22d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Ax22d::*)( const gp_Pnt2d & ) >(&gp_Ax22d::Mirror),
             R"#(None)#"  , py::arg("P"))
        .def("Mirrored",
             (gp_Ax22d (gp_Ax22d::*)( const gp_Pnt2d & ) const) static_cast<gp_Ax22d (gp_Ax22d::*)( const gp_Pnt2d & ) const>(&gp_Ax22d::Mirrored),
             R"#(Performs the symmetrical transformation of an axis placement with respect to the point P which is the center of the symmetry. Warnings : The main direction of the axis placement is not changed. The "XDirection" and the "YDirection" are reversed. So the axis placement stay right handed.)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Ax22d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Ax22d::*)( const gp_Ax2d & ) >(&gp_Ax22d::Mirror),
             R"#(None)#"  , py::arg("A"))
        .def("Mirrored",
             (gp_Ax22d (gp_Ax22d::*)( const gp_Ax2d & ) const) static_cast<gp_Ax22d (gp_Ax22d::*)( const gp_Ax2d & ) const>(&gp_Ax22d::Mirrored),
             R"#(Performs the symmetrical transformation of an axis placement with respect to an axis placement which is the axis of the symmetry. The transformation is performed on the "Location" point, on the "XDirection" and "YDirection". The resulting main "Direction" is the cross product between the "XDirection" and the "YDirection" after transformation.)#"  , py::arg("A"))
        .def("Rotate",
             (void (gp_Ax22d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Ax22d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Ax22d::Rotate),
             R"#(None)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Ax22d (gp_Ax22d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Ax22d (gp_Ax22d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Ax22d::Rotated),
             R"#(Rotates an axis placement. <A1> is the axis of the rotation . Ang is the angular value of the rotation in radians.)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Ax22d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Ax22d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Ax22d::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Ax22d (gp_Ax22d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Ax22d (gp_Ax22d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Ax22d::Scaled),
             R"#(Applies a scaling transformation on the axis placement. The "Location" point of the axisplacement is modified. Warnings : If the scale <S> is negative : . the main direction of the axis placement is not changed. . The "XDirection" and the "YDirection" are reversed. So the axis placement stay right handed.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Ax22d::*)( const gp_Trsf2d & ) ) static_cast<void (gp_Ax22d::*)( const gp_Trsf2d & ) >(&gp_Ax22d::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Ax22d (gp_Ax22d::*)( const gp_Trsf2d & ) const) static_cast<gp_Ax22d (gp_Ax22d::*)( const gp_Trsf2d & ) const>(&gp_Ax22d::Transformed),
             R"#(Transforms an axis placement with a Trsf. The "Location" point, the "XDirection" and the "YDirection" are transformed with T. The resulting main "Direction" of <me> is the cross product between the "XDirection" and the "YDirection" after transformation.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Ax22d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Ax22d::*)( const gp_Vec2d & ) >(&gp_Ax22d::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Ax22d (gp_Ax22d::*)( const gp_Vec2d & ) const) static_cast<gp_Ax22d (gp_Ax22d::*)( const gp_Vec2d & ) const>(&gp_Ax22d::Translated),
             R"#(Translates an axis plaxement in the direction of the vector <V>. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Ax22d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (gp_Ax22d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&gp_Ax22d::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Ax22d (gp_Ax22d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const) static_cast<gp_Ax22d (gp_Ax22d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const>(&gp_Ax22d::Translated),
             R"#(Translates an axis placement from the point <P1> to the point <P2>.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetAxis",
             (void (gp_Ax22d::*)( const gp_Ax22d & ) ) static_cast<void (gp_Ax22d::*)( const gp_Ax22d & ) >(&gp_Ax22d::SetAxis),
             R"#(Assigns the origin and the two unit vectors of the coordinate system A1 to this coordinate system.)#"  , py::arg("A1"))
        .def("SetXAxis",
             (void (gp_Ax22d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Ax22d::*)( const gp_Ax2d & ) >(&gp_Ax22d::SetXAxis),
             R"#(Changes the XAxis and YAxis ("Location" point and "Direction") of <me>. The "YDirection" is recomputed in the same sense as before.)#"  , py::arg("A1"))
        .def("SetYAxis",
             (void (gp_Ax22d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Ax22d::*)( const gp_Ax2d & ) >(&gp_Ax22d::SetYAxis),
             R"#(Changes the XAxis and YAxis ("Location" point and "Direction") of <me>. The "XDirection" is recomputed in the same sense as before.)#"  , py::arg("A1"))
        .def("SetLocation",
             (void (gp_Ax22d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Ax22d::*)( const gp_Pnt2d & ) >(&gp_Ax22d::SetLocation),
             R"#(Changes the "Location" point (origin) of <me>.)#"  , py::arg("P"))
        .def("SetXDirection",
             (void (gp_Ax22d::*)( const gp_Dir2d & ) ) static_cast<void (gp_Ax22d::*)( const gp_Dir2d & ) >(&gp_Ax22d::SetXDirection),
             R"#(Assigns Vx to the "X Direction" of this coordinate system. The other unit vector of this coordinate system is recomputed, normal to Vx , without modifying the orientation (right-handed or left-handed) of this coordinate system.)#"  , py::arg("Vx"))
        .def("SetYDirection",
             (void (gp_Ax22d::*)( const gp_Dir2d & ) ) static_cast<void (gp_Ax22d::*)( const gp_Dir2d & ) >(&gp_Ax22d::SetYDirection),
             R"#(Assignsr Vy to the "Y Direction" of this coordinate system. The other unit vector of this coordinate system is recomputed, normal to Vy, without modifying the orientation (right-handed or left-handed) of this coordinate system.)#"  , py::arg("Vy"))
        .def("XAxis",
             (gp_Ax2d (gp_Ax22d::*)() const) static_cast<gp_Ax2d (gp_Ax22d::*)() const>(&gp_Ax22d::XAxis),
             R"#(Returns an axis, for which - the origin is that of this coordinate system, and - the unit vector is either the "X Direction" of this coordinate system. Note: the result is the "X Axis" of this coordinate system.)#" )
        .def("YAxis",
             (gp_Ax2d (gp_Ax22d::*)() const) static_cast<gp_Ax2d (gp_Ax22d::*)() const>(&gp_Ax22d::YAxis),
             R"#(Returns an axis, for which - the origin is that of this coordinate system, and - the unit vector is either the "Y Direction" of this coordinate system. Note: the result is the "Y Axis" of this coordinate system.)#" )
        .def("Location",
             (const gp_Pnt2d & (gp_Ax22d::*)() const) static_cast<const gp_Pnt2d & (gp_Ax22d::*)() const>(&gp_Ax22d::Location),
             R"#(Returns the "Location" point (origin) of <me>.)#" )
        .def("XDirection",
             (const gp_Dir2d & (gp_Ax22d::*)() const) static_cast<const gp_Dir2d & (gp_Ax22d::*)() const>(&gp_Ax22d::XDirection),
             R"#(Returns the "XDirection" of <me>.)#" )
        .def("YDirection",
             (const gp_Dir2d & (gp_Ax22d::*)() const) static_cast<const gp_Dir2d & (gp_Ax22d::*)() const>(&gp_Ax22d::YDirection),
             R"#(Returns the "YDirection" of <me>.)#" )
        .def("Rotate",
             (void (gp_Ax22d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Ax22d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Ax22d::Rotate),
             R"#(None)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Ax22d (gp_Ax22d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Ax22d (gp_Ax22d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Ax22d::Rotated),
             R"#(Rotates an axis placement. <A1> is the axis of the rotation . Ang is the angular value of the rotation in radians.)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Ax22d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Ax22d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Ax22d::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Ax22d (gp_Ax22d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Ax22d (gp_Ax22d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Ax22d::Scaled),
             R"#(Applies a scaling transformation on the axis placement. The "Location" point of the axisplacement is modified. Warnings : If the scale <S> is negative : . the main direction of the axis placement is not changed. . The "XDirection" and the "YDirection" are reversed. So the axis placement stay right handed.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Ax22d::*)( const gp_Trsf2d & ) ) static_cast<void (gp_Ax22d::*)( const gp_Trsf2d & ) >(&gp_Ax22d::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Ax22d (gp_Ax22d::*)( const gp_Trsf2d & ) const) static_cast<gp_Ax22d (gp_Ax22d::*)( const gp_Trsf2d & ) const>(&gp_Ax22d::Transformed),
             R"#(Transforms an axis placement with a Trsf. The "Location" point, the "XDirection" and the "YDirection" are transformed with T. The resulting main "Direction" of <me> is the cross product between the "XDirection" and the "YDirection" after transformation.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Ax22d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Ax22d::*)( const gp_Vec2d & ) >(&gp_Ax22d::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Ax22d (gp_Ax22d::*)( const gp_Vec2d & ) const) static_cast<gp_Ax22d (gp_Ax22d::*)( const gp_Vec2d & ) const>(&gp_Ax22d::Translated),
             R"#(Translates an axis plaxement in the direction of the vector <V>. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Ax22d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (gp_Ax22d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&gp_Ax22d::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Ax22d (gp_Ax22d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const) static_cast<gp_Ax22d (gp_Ax22d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const>(&gp_Ax22d::Translated),
             R"#(Translates an axis placement from the point <P1> to the point <P2>.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_Ax2d , shared_ptr<gp_Ax2d> >>(m.attr("gp_Ax2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt2d &,const gp_Dir2d & >()  , py::arg("P"),  py::arg("V") )
    // custom constructors
    // methods
        .def("SetLocation",
             (void (gp_Ax2d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Ax2d::*)( const gp_Pnt2d & ) >(&gp_Ax2d::SetLocation),
             R"#(Changes the "Location" point (origin) of <me>.)#"  , py::arg("Locat"))
        .def("SetDirection",
             (void (gp_Ax2d::*)( const gp_Dir2d & ) ) static_cast<void (gp_Ax2d::*)( const gp_Dir2d & ) >(&gp_Ax2d::SetDirection),
             R"#(Changes the direction of <me>.)#"  , py::arg("V"))
        .def("Location",
             (const gp_Pnt2d & (gp_Ax2d::*)() const) static_cast<const gp_Pnt2d & (gp_Ax2d::*)() const>(&gp_Ax2d::Location),
             R"#(Returns the origin of <me>.)#" )
        .def("Direction",
             (const gp_Dir2d & (gp_Ax2d::*)() const) static_cast<const gp_Dir2d & (gp_Ax2d::*)() const>(&gp_Ax2d::Direction),
             R"#(Returns the direction of <me>.)#" )
        .def("IsCoaxial",
             (Standard_Boolean (gp_Ax2d::*)( const gp_Ax2d & , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Ax2d::*)( const gp_Ax2d & , const Standard_Real , const Standard_Real ) const>(&gp_Ax2d::IsCoaxial),
             R"#(Returns True if : . the angle between <me> and <Other> is lower or equal to <AngularTolerance> and . the distance between <me>.Location() and <Other> is lower or equal to <LinearTolerance> and . the distance between <Other>.Location() and <me> is lower or equal to LinearTolerance.)#"  , py::arg("Other"),  py::arg("AngularTolerance"),  py::arg("LinearTolerance"))
        .def("IsNormal",
             (Standard_Boolean (gp_Ax2d::*)( const gp_Ax2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Ax2d::*)( const gp_Ax2d & , const Standard_Real ) const>(&gp_Ax2d::IsNormal),
             R"#(Returns true if this axis and the axis Other are normal to each other. That is, if the angle between the two axes is equal to Pi/2 or -Pi/2. Note: the tolerance criterion is given by AngularTolerance.)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsOpposite",
             (Standard_Boolean (gp_Ax2d::*)( const gp_Ax2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Ax2d::*)( const gp_Ax2d & , const Standard_Real ) const>(&gp_Ax2d::IsOpposite),
             R"#(Returns true if this axis and the axis Other are parallel, and have opposite orientations. That is, if the angle between the two axes is equal to Pi or -Pi. Note: the tolerance criterion is given by AngularTolerance.)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsParallel",
             (Standard_Boolean (gp_Ax2d::*)( const gp_Ax2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Ax2d::*)( const gp_Ax2d & , const Standard_Real ) const>(&gp_Ax2d::IsParallel),
             R"#(Returns true if this axis and the axis Other are parallel, and have either the same or opposite orientations. That is, if the angle between the two axes is equal to 0, Pi or -Pi. Note: the tolerance criterion is given by AngularTolerance.)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("Angle",
             (Standard_Real (gp_Ax2d::*)( const gp_Ax2d & ) const) static_cast<Standard_Real (gp_Ax2d::*)( const gp_Ax2d & ) const>(&gp_Ax2d::Angle),
             R"#(Computes the angle, in radians, between this axis and the axis Other. The value of the angle is between -Pi and Pi.)#"  , py::arg("Other"))
        .def("Reverse",
             (void (gp_Ax2d::*)() ) static_cast<void (gp_Ax2d::*)() >(&gp_Ax2d::Reverse),
             R"#(Reverses the direction of <me> and assigns the result to this axis.)#" )
        .def("Reversed",
             (gp_Ax2d (gp_Ax2d::*)() const) static_cast<gp_Ax2d (gp_Ax2d::*)() const>(&gp_Ax2d::Reversed),
             R"#(Computes a new axis placement with a direction opposite to the direction of <me>.)#" )
        .def("Mirror",
             (void (gp_Ax2d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Ax2d::*)( const gp_Pnt2d & ) >(&gp_Ax2d::Mirror),
             R"#(None)#"  , py::arg("P"))
        .def("Mirrored",
             (gp_Ax2d (gp_Ax2d::*)( const gp_Pnt2d & ) const) static_cast<gp_Ax2d (gp_Ax2d::*)( const gp_Pnt2d & ) const>(&gp_Ax2d::Mirrored),
             R"#(Performs the symmetrical transformation of an axis placement with respect to the point P which is the center of the symmetry.)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Ax2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Ax2d::*)( const gp_Ax2d & ) >(&gp_Ax2d::Mirror),
             R"#(None)#"  , py::arg("A"))
        .def("Mirrored",
             (gp_Ax2d (gp_Ax2d::*)( const gp_Ax2d & ) const) static_cast<gp_Ax2d (gp_Ax2d::*)( const gp_Ax2d & ) const>(&gp_Ax2d::Mirrored),
             R"#(Performs the symmetrical transformation of an axis placement with respect to an axis placement which is the axis of the symmetry.)#"  , py::arg("A"))
        .def("Rotate",
             (void (gp_Ax2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Ax2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Ax2d::Rotate),
             R"#(None)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Ax2d (gp_Ax2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Ax2d (gp_Ax2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Ax2d::Rotated),
             R"#(Rotates an axis placement. <P> is the center of the rotation . Ang is the angular value of the rotation in radians.)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Ax2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Ax2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Ax2d::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Ax2d (gp_Ax2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Ax2d (gp_Ax2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Ax2d::Scaled),
             R"#(Applies a scaling transformation on the axis placement. The "Location" point of the axisplacement is modified. The "Direction" is reversed if the scale is negative.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Ax2d::*)( const gp_Trsf2d & ) ) static_cast<void (gp_Ax2d::*)( const gp_Trsf2d & ) >(&gp_Ax2d::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Ax2d (gp_Ax2d::*)( const gp_Trsf2d & ) const) static_cast<gp_Ax2d (gp_Ax2d::*)( const gp_Trsf2d & ) const>(&gp_Ax2d::Transformed),
             R"#(Transforms an axis placement with a Trsf.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Ax2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Ax2d::*)( const gp_Vec2d & ) >(&gp_Ax2d::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Ax2d (gp_Ax2d::*)( const gp_Vec2d & ) const) static_cast<gp_Ax2d (gp_Ax2d::*)( const gp_Vec2d & ) const>(&gp_Ax2d::Translated),
             R"#(Translates an axis placement in the direction of the vector <V>. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Ax2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (gp_Ax2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&gp_Ax2d::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Ax2d (gp_Ax2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const) static_cast<gp_Ax2d (gp_Ax2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const>(&gp_Ax2d::Translated),
             R"#(Translates an axis placement from the point <P1> to the point <P2>.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetLocation",
             (void (gp_Ax2d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Ax2d::*)( const gp_Pnt2d & ) >(&gp_Ax2d::SetLocation),
             R"#(Changes the "Location" point (origin) of <me>.)#"  , py::arg("P"))
        .def("SetDirection",
             (void (gp_Ax2d::*)( const gp_Dir2d & ) ) static_cast<void (gp_Ax2d::*)( const gp_Dir2d & ) >(&gp_Ax2d::SetDirection),
             R"#(Changes the direction of <me>.)#"  , py::arg("V"))
        .def("Location",
             (const gp_Pnt2d & (gp_Ax2d::*)() const) static_cast<const gp_Pnt2d & (gp_Ax2d::*)() const>(&gp_Ax2d::Location),
             R"#(Returns the origin of <me>.)#" )
        .def("Direction",
             (const gp_Dir2d & (gp_Ax2d::*)() const) static_cast<const gp_Dir2d & (gp_Ax2d::*)() const>(&gp_Ax2d::Direction),
             R"#(Returns the direction of <me>.)#" )
        .def("IsNormal",
             (Standard_Boolean (gp_Ax2d::*)( const gp_Ax2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Ax2d::*)( const gp_Ax2d & , const Standard_Real ) const>(&gp_Ax2d::IsNormal),
             R"#(Returns true if this axis and the axis Other are normal to each other. That is, if the angle between the two axes is equal to Pi/2 or -Pi/2. Note: the tolerance criterion is given by AngularTolerance.)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsOpposite",
             (Standard_Boolean (gp_Ax2d::*)( const gp_Ax2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Ax2d::*)( const gp_Ax2d & , const Standard_Real ) const>(&gp_Ax2d::IsOpposite),
             R"#(Returns true if this axis and the axis Other are parallel, and have opposite orientations. That is, if the angle between the two axes is equal to Pi or -Pi. Note: the tolerance criterion is given by AngularTolerance.)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsParallel",
             (Standard_Boolean (gp_Ax2d::*)( const gp_Ax2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Ax2d::*)( const gp_Ax2d & , const Standard_Real ) const>(&gp_Ax2d::IsParallel),
             R"#(Returns true if this axis and the axis Other are parallel, and have either the same or opposite orientations. That is, if the angle between the two axes is equal to 0, Pi or -Pi. Note: the tolerance criterion is given by AngularTolerance.)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("Angle",
             (Standard_Real (gp_Ax2d::*)( const gp_Ax2d & ) const) static_cast<Standard_Real (gp_Ax2d::*)( const gp_Ax2d & ) const>(&gp_Ax2d::Angle),
             R"#(Computes the angle, in radians, between this axis and the axis Other. The value of the angle is between -Pi and Pi.)#"  , py::arg("Other"))
        .def("Reverse",
             (void (gp_Ax2d::*)() ) static_cast<void (gp_Ax2d::*)() >(&gp_Ax2d::Reverse),
             R"#(Reverses the direction of <me> and assigns the result to this axis.)#" )
        .def("Reversed",
             (gp_Ax2d (gp_Ax2d::*)() const) static_cast<gp_Ax2d (gp_Ax2d::*)() const>(&gp_Ax2d::Reversed),
             R"#(Computes a new axis placement with a direction opposite to the direction of <me>.)#" )
        .def("Rotate",
             (void (gp_Ax2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Ax2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Ax2d::Rotate),
             R"#(None)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Ax2d (gp_Ax2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Ax2d (gp_Ax2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Ax2d::Rotated),
             R"#(Rotates an axis placement. <P> is the center of the rotation . Ang is the angular value of the rotation in radians.)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Scaled",
             (gp_Ax2d (gp_Ax2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Ax2d (gp_Ax2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Ax2d::Scaled),
             R"#(Applies a scaling transformation on the axis placement. The "Location" point of the axisplacement is modified. The "Direction" is reversed if the scale is negative.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Ax2d::*)( const gp_Trsf2d & ) ) static_cast<void (gp_Ax2d::*)( const gp_Trsf2d & ) >(&gp_Ax2d::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Ax2d (gp_Ax2d::*)( const gp_Trsf2d & ) const) static_cast<gp_Ax2d (gp_Ax2d::*)( const gp_Trsf2d & ) const>(&gp_Ax2d::Transformed),
             R"#(Transforms an axis placement with a Trsf.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Ax2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Ax2d::*)( const gp_Vec2d & ) >(&gp_Ax2d::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Ax2d (gp_Ax2d::*)( const gp_Vec2d & ) const) static_cast<gp_Ax2d (gp_Ax2d::*)( const gp_Vec2d & ) const>(&gp_Ax2d::Translated),
             R"#(Translates an axis placement in the direction of the vector <V>. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Ax2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (gp_Ax2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&gp_Ax2d::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Ax2d (gp_Ax2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const) static_cast<gp_Ax2d (gp_Ax2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const>(&gp_Ax2d::Translated),
             R"#(Translates an axis placement from the point <P1> to the point <P2>.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_Ax3 , shared_ptr<gp_Ax3> >>(m.attr("gp_Ax3"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Ax2 & >()  , py::arg("A") )
        .def(py::init< const gp_Pnt &,const gp_Dir &,const gp_Dir & >()  , py::arg("P"),  py::arg("N"),  py::arg("Vx") )
        .def(py::init< const gp_Pnt &,const gp_Dir & >()  , py::arg("P"),  py::arg("V") )
    // custom constructors
    // methods
        .def("XReverse",
             (void (gp_Ax3::*)() ) static_cast<void (gp_Ax3::*)() >(&gp_Ax3::XReverse),
             R"#(Reverses the X direction of <me>.)#" )
        .def("YReverse",
             (void (gp_Ax3::*)() ) static_cast<void (gp_Ax3::*)() >(&gp_Ax3::YReverse),
             R"#(Reverses the Y direction of <me>.)#" )
        .def("ZReverse",
             (void (gp_Ax3::*)() ) static_cast<void (gp_Ax3::*)() >(&gp_Ax3::ZReverse),
             R"#(Reverses the Z direction of <me>.)#" )
        .def("SetAxis",
             (void (gp_Ax3::*)( const gp_Ax1 & ) ) static_cast<void (gp_Ax3::*)( const gp_Ax1 & ) >(&gp_Ax3::SetAxis),
             R"#(Assigns the origin and "main Direction" of the axis A1 to this coordinate system, then recomputes its "X Direction" and "Y Direction". Note: - The new "X Direction" is computed as follows: new "X Direction" = V1 ^(previous "X Direction" ^ V) where V is the "Direction" of A1. - The orientation of this coordinate system (right-handed or left-handed) is not modified. Raises ConstructionError if the "Direction" of <A1> and the "XDirection" of <me> are parallel (same or opposite orientation) because it is impossible to calculate the new "XDirection" and the new "YDirection".)#"  , py::arg("A1"))
        .def("SetDirection",
             (void (gp_Ax3::*)( const gp_Dir & ) ) static_cast<void (gp_Ax3::*)( const gp_Dir & ) >(&gp_Ax3::SetDirection),
             R"#(Changes the main direction of this coordinate system, then recomputes its "X Direction" and "Y Direction". Note: - The new "X Direction" is computed as follows: new "X Direction" = V ^ (previous "X Direction" ^ V). - The orientation of this coordinate system (left- or right-handed) is not modified. Raises ConstructionError if <V< and the previous "XDirection" are parallel because it is impossible to calculate the new "XDirection" and the new "YDirection".)#"  , py::arg("V"))
        .def("SetLocation",
             (void (gp_Ax3::*)( const gp_Pnt & ) ) static_cast<void (gp_Ax3::*)( const gp_Pnt & ) >(&gp_Ax3::SetLocation),
             R"#(Changes the "Location" point (origin) of <me>.)#"  , py::arg("P"))
        .def("SetXDirection",
             (void (gp_Ax3::*)( const gp_Dir & ) ) static_cast<void (gp_Ax3::*)( const gp_Dir & ) >(&gp_Ax3::SetXDirection),
             R"#(Changes the "Xdirection" of <me>. The main direction "Direction" is not modified, the "Ydirection" is modified. If <Vx> is not normal to the main direction then <XDirection> is computed as follows XDirection = Direction ^ (Vx ^ Direction). Raises ConstructionError if <Vx> is parallel (same or opposite orientation) to the main direction of <me>)#"  , py::arg("Vx"))
        .def("SetYDirection",
             (void (gp_Ax3::*)( const gp_Dir & ) ) static_cast<void (gp_Ax3::*)( const gp_Dir & ) >(&gp_Ax3::SetYDirection),
             R"#(Changes the "Ydirection" of <me>. The main direction is not modified but the "Xdirection" is changed. If <Vy> is not normal to the main direction then "YDirection" is computed as follows YDirection = Direction ^ (<Vy> ^ Direction). Raises ConstructionError if <Vy> is parallel to the main direction of <me>)#"  , py::arg("Vy"))
        .def("Angle",
             (Standard_Real (gp_Ax3::*)( const gp_Ax3 & ) const) static_cast<Standard_Real (gp_Ax3::*)( const gp_Ax3 & ) const>(&gp_Ax3::Angle),
             R"#(Computes the angular value between the main direction of <me> and the main direction of <Other>. Returns the angle between 0 and PI in radians.)#"  , py::arg("Other"))
        .def("Axis",
             (const gp_Ax1 & (gp_Ax3::*)() const) static_cast<const gp_Ax1 & (gp_Ax3::*)() const>(&gp_Ax3::Axis),
             R"#(Returns the main axis of <me>. It is the "Location" point and the main "Direction".)#" )
        .def("Ax2",
             (gp_Ax2 (gp_Ax3::*)() const) static_cast<gp_Ax2 (gp_Ax3::*)() const>(&gp_Ax3::Ax2),
             R"#(Computes a right-handed coordinate system with the same "X Direction" and "Y Direction" as those of this coordinate system, then recomputes the "main Direction". If this coordinate system is right-handed, the result returned is the same coordinate system. If this coordinate system is left-handed, the result is reversed.)#" )
        .def("Direction",
             (const gp_Dir & (gp_Ax3::*)() const) static_cast<const gp_Dir & (gp_Ax3::*)() const>(&gp_Ax3::Direction),
             R"#(Returns the main direction of <me>.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Ax3::*)() const) static_cast<const gp_Pnt & (gp_Ax3::*)() const>(&gp_Ax3::Location),
             R"#(Returns the "Location" point (origin) of <me>.)#" )
        .def("XDirection",
             (const gp_Dir & (gp_Ax3::*)() const) static_cast<const gp_Dir & (gp_Ax3::*)() const>(&gp_Ax3::XDirection),
             R"#(Returns the "XDirection" of <me>.)#" )
        .def("YDirection",
             (const gp_Dir & (gp_Ax3::*)() const) static_cast<const gp_Dir & (gp_Ax3::*)() const>(&gp_Ax3::YDirection),
             R"#(Returns the "YDirection" of <me>.)#" )
        .def("Direct",
             (Standard_Boolean (gp_Ax3::*)() const) static_cast<Standard_Boolean (gp_Ax3::*)() const>(&gp_Ax3::Direct),
             R"#(Returns True if the coordinate system is right-handed. i.e. XDirection().Crossed(YDirection()).Dot(Direction()) > 0)#" )
        .def("IsCoplanar",
             (Standard_Boolean (gp_Ax3::*)( const gp_Ax3 & , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Ax3::*)( const gp_Ax3 & , const Standard_Real , const Standard_Real ) const>(&gp_Ax3::IsCoplanar),
             R"#(Returns True if . the distance between the "Location" point of <me> and <Other> is lower or equal to LinearTolerance and . the distance between the "Location" point of <Other> and <me> is lower or equal to LinearTolerance and . the main direction of <me> and the main direction of <Other> are parallel (same or opposite orientation).)#"  , py::arg("Other"),  py::arg("LinearTolerance"),  py::arg("AngularTolerance"))
        .def("IsCoplanar",
             (Standard_Boolean (gp_Ax3::*)( const gp_Ax1 & , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Ax3::*)( const gp_Ax1 & , const Standard_Real , const Standard_Real ) const>(&gp_Ax3::IsCoplanar),
             R"#(Returns True if . the distance between <me> and the "Location" point of A1 is lower of equal to LinearTolerance and . the distance between A1 and the "Location" point of <me> is lower or equal to LinearTolerance and . the main direction of <me> and the direction of A1 are normal.)#"  , py::arg("A1"),  py::arg("LinearTolerance"),  py::arg("AngularTolerance"))
        .def("Mirror",
             (void (gp_Ax3::*)( const gp_Pnt & ) ) static_cast<void (gp_Ax3::*)( const gp_Pnt & ) >(&gp_Ax3::Mirror),
             R"#(None)#"  , py::arg("P"))
        .def("Mirrored",
             (gp_Ax3 (gp_Ax3::*)( const gp_Pnt & ) const) static_cast<gp_Ax3 (gp_Ax3::*)( const gp_Pnt & ) const>(&gp_Ax3::Mirrored),
             R"#(Performs the symmetrical transformation of an axis placement with respect to the point P which is the center of the symmetry. Warnings : The main direction of the axis placement is not changed. The "XDirection" and the "YDirection" are reversed. So the axis placement stay right handed.)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Ax3::*)( const gp_Ax1 & ) ) static_cast<void (gp_Ax3::*)( const gp_Ax1 & ) >(&gp_Ax3::Mirror),
             R"#(None)#"  , py::arg("A1"))
        .def("Mirrored",
             (gp_Ax3 (gp_Ax3::*)( const gp_Ax1 & ) const) static_cast<gp_Ax3 (gp_Ax3::*)( const gp_Ax1 & ) const>(&gp_Ax3::Mirrored),
             R"#(Performs the symmetrical transformation of an axis placement with respect to an axis placement which is the axis of the symmetry. The transformation is performed on the "Location" point, on the "XDirection" and "YDirection". The resulting main "Direction" is the cross product between the "XDirection" and the "YDirection" after transformation.)#"  , py::arg("A1"))
        .def("Mirror",
             (void (gp_Ax3::*)( const gp_Ax2 & ) ) static_cast<void (gp_Ax3::*)( const gp_Ax2 & ) >(&gp_Ax3::Mirror),
             R"#(None)#"  , py::arg("A2"))
        .def("Mirrored",
             (gp_Ax3 (gp_Ax3::*)( const gp_Ax2 & ) const) static_cast<gp_Ax3 (gp_Ax3::*)( const gp_Ax2 & ) const>(&gp_Ax3::Mirrored),
             R"#(Performs the symmetrical transformation of an axis placement with respect to a plane. The axis placement <A2> locates the plane of the symmetry : (Location, XDirection, YDirection). The transformation is performed on the "Location" point, on the "XDirection" and "YDirection". The resulting main "Direction" is the cross product between the "XDirection" and the "YDirection" after transformation.)#"  , py::arg("A2"))
        .def("Rotate",
             (void (gp_Ax3::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Ax3::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Ax3::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Ax3 (gp_Ax3::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Ax3 (gp_Ax3::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Ax3::Rotated),
             R"#(Rotates an axis placement. <A1> is the axis of the rotation . Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Ax3::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Ax3::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Ax3::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Ax3 (gp_Ax3::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Ax3 (gp_Ax3::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Ax3::Scaled),
             R"#(Applies a scaling transformation on the axis placement. The "Location" point of the axisplacement is modified. Warnings : If the scale <S> is negative : . the main direction of the axis placement is not changed. . The "XDirection" and the "YDirection" are reversed. So the axis placement stay right handed.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Ax3::*)( const gp_Trsf & ) ) static_cast<void (gp_Ax3::*)( const gp_Trsf & ) >(&gp_Ax3::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Ax3 (gp_Ax3::*)( const gp_Trsf & ) const) static_cast<gp_Ax3 (gp_Ax3::*)( const gp_Trsf & ) const>(&gp_Ax3::Transformed),
             R"#(Transforms an axis placement with a Trsf. The "Location" point, the "XDirection" and the "YDirection" are transformed with T. The resulting main "Direction" of <me> is the cross product between the "XDirection" and the "YDirection" after transformation.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Ax3::*)( const gp_Vec & ) ) static_cast<void (gp_Ax3::*)( const gp_Vec & ) >(&gp_Ax3::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Ax3 (gp_Ax3::*)( const gp_Vec & ) const) static_cast<gp_Ax3 (gp_Ax3::*)( const gp_Vec & ) const>(&gp_Ax3::Translated),
             R"#(Translates an axis plaxement in the direction of the vector <V>. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Ax3::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Ax3::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Ax3::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Ax3 (gp_Ax3::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Ax3 (gp_Ax3::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Ax3::Translated),
             R"#(Translates an axis placement from the point <P1> to the point <P2>.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("XReverse",
             (void (gp_Ax3::*)() ) static_cast<void (gp_Ax3::*)() >(&gp_Ax3::XReverse),
             R"#(Reverses the X direction of <me>.)#" )
        .def("YReverse",
             (void (gp_Ax3::*)() ) static_cast<void (gp_Ax3::*)() >(&gp_Ax3::YReverse),
             R"#(Reverses the Y direction of <me>.)#" )
        .def("ZReverse",
             (void (gp_Ax3::*)() ) static_cast<void (gp_Ax3::*)() >(&gp_Ax3::ZReverse),
             R"#(Reverses the Z direction of <me>.)#" )
        .def("SetAxis",
             (void (gp_Ax3::*)( const gp_Ax1 & ) ) static_cast<void (gp_Ax3::*)( const gp_Ax1 & ) >(&gp_Ax3::SetAxis),
             R"#(Assigns the origin and "main Direction" of the axis A1 to this coordinate system, then recomputes its "X Direction" and "Y Direction". Note: - The new "X Direction" is computed as follows: new "X Direction" = V1 ^(previous "X Direction" ^ V) where V is the "Direction" of A1. - The orientation of this coordinate system (right-handed or left-handed) is not modified. Raises ConstructionError if the "Direction" of <A1> and the "XDirection" of <me> are parallel (same or opposite orientation) because it is impossible to calculate the new "XDirection" and the new "YDirection".)#"  , py::arg("A1"))
        .def("SetDirection",
             (void (gp_Ax3::*)( const gp_Dir & ) ) static_cast<void (gp_Ax3::*)( const gp_Dir & ) >(&gp_Ax3::SetDirection),
             R"#(Changes the main direction of this coordinate system, then recomputes its "X Direction" and "Y Direction". Note: - The new "X Direction" is computed as follows: new "X Direction" = V ^ (previous "X Direction" ^ V). - The orientation of this coordinate system (left- or right-handed) is not modified. Raises ConstructionError if <V< and the previous "XDirection" are parallel because it is impossible to calculate the new "XDirection" and the new "YDirection".)#"  , py::arg("V"))
        .def("SetLocation",
             (void (gp_Ax3::*)( const gp_Pnt & ) ) static_cast<void (gp_Ax3::*)( const gp_Pnt & ) >(&gp_Ax3::SetLocation),
             R"#(Changes the "Location" point (origin) of <me>.)#"  , py::arg("P"))
        .def("SetXDirection",
             (void (gp_Ax3::*)( const gp_Dir & ) ) static_cast<void (gp_Ax3::*)( const gp_Dir & ) >(&gp_Ax3::SetXDirection),
             R"#(Changes the "Xdirection" of <me>. The main direction "Direction" is not modified, the "Ydirection" is modified. If <Vx> is not normal to the main direction then <XDirection> is computed as follows XDirection = Direction ^ (Vx ^ Direction). Raises ConstructionError if <Vx> is parallel (same or opposite orientation) to the main direction of <me>)#"  , py::arg("Vx"))
        .def("SetYDirection",
             (void (gp_Ax3::*)( const gp_Dir & ) ) static_cast<void (gp_Ax3::*)( const gp_Dir & ) >(&gp_Ax3::SetYDirection),
             R"#(Changes the "Ydirection" of <me>. The main direction is not modified but the "Xdirection" is changed. If <Vy> is not normal to the main direction then "YDirection" is computed as follows YDirection = Direction ^ (<Vy> ^ Direction). Raises ConstructionError if <Vy> is parallel to the main direction of <me>)#"  , py::arg("Vy"))
        .def("Angle",
             (Standard_Real (gp_Ax3::*)( const gp_Ax3 & ) const) static_cast<Standard_Real (gp_Ax3::*)( const gp_Ax3 & ) const>(&gp_Ax3::Angle),
             R"#(Computes the angular value between the main direction of <me> and the main direction of <Other>. Returns the angle between 0 and PI in radians.)#"  , py::arg("Other"))
        .def("Axis",
             (const gp_Ax1 & (gp_Ax3::*)() const) static_cast<const gp_Ax1 & (gp_Ax3::*)() const>(&gp_Ax3::Axis),
             R"#(Returns the main axis of <me>. It is the "Location" point and the main "Direction".)#" )
        .def("Ax2",
             (gp_Ax2 (gp_Ax3::*)() const) static_cast<gp_Ax2 (gp_Ax3::*)() const>(&gp_Ax3::Ax2),
             R"#(Computes a right-handed coordinate system with the same "X Direction" and "Y Direction" as those of this coordinate system, then recomputes the "main Direction". If this coordinate system is right-handed, the result returned is the same coordinate system. If this coordinate system is left-handed, the result is reversed.)#" )
        .def("Direction",
             (const gp_Dir & (gp_Ax3::*)() const) static_cast<const gp_Dir & (gp_Ax3::*)() const>(&gp_Ax3::Direction),
             R"#(Returns the main direction of <me>.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Ax3::*)() const) static_cast<const gp_Pnt & (gp_Ax3::*)() const>(&gp_Ax3::Location),
             R"#(Returns the "Location" point (origin) of <me>.)#" )
        .def("XDirection",
             (const gp_Dir & (gp_Ax3::*)() const) static_cast<const gp_Dir & (gp_Ax3::*)() const>(&gp_Ax3::XDirection),
             R"#(Returns the "XDirection" of <me>.)#" )
        .def("YDirection",
             (const gp_Dir & (gp_Ax3::*)() const) static_cast<const gp_Dir & (gp_Ax3::*)() const>(&gp_Ax3::YDirection),
             R"#(Returns the "YDirection" of <me>.)#" )
        .def("Direct",
             (Standard_Boolean (gp_Ax3::*)() const) static_cast<Standard_Boolean (gp_Ax3::*)() const>(&gp_Ax3::Direct),
             R"#(Returns True if the coordinate system is right-handed. i.e. XDirection().Crossed(YDirection()).Dot(Direction()) > 0)#" )
        .def("IsCoplanar",
             (Standard_Boolean (gp_Ax3::*)( const gp_Ax3 & , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Ax3::*)( const gp_Ax3 & , const Standard_Real , const Standard_Real ) const>(&gp_Ax3::IsCoplanar),
             R"#(Returns True if . the distance between the "Location" point of <me> and <Other> is lower or equal to LinearTolerance and . the distance between the "Location" point of <Other> and <me> is lower or equal to LinearTolerance and . the main direction of <me> and the main direction of <Other> are parallel (same or opposite orientation).)#"  , py::arg("Other"),  py::arg("LinearTolerance"),  py::arg("AngularTolerance"))
        .def("IsCoplanar",
             (Standard_Boolean (gp_Ax3::*)( const gp_Ax1 & , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Ax3::*)( const gp_Ax1 & , const Standard_Real , const Standard_Real ) const>(&gp_Ax3::IsCoplanar),
             R"#(Returns True if . the distance between <me> and the "Location" point of A1 is lower of equal to LinearTolerance and . the distance between A1 and the "Location" point of <me> is lower or equal to LinearTolerance and . the main direction of <me> and the direction of A1 are normal.)#"  , py::arg("A1"),  py::arg("LinearTolerance"),  py::arg("AngularTolerance"))
        .def("Rotate",
             (void (gp_Ax3::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Ax3::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Ax3::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Ax3 (gp_Ax3::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Ax3 (gp_Ax3::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Ax3::Rotated),
             R"#(Rotates an axis placement. <A1> is the axis of the rotation . Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Ax3::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Ax3::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Ax3::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Ax3 (gp_Ax3::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Ax3 (gp_Ax3::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Ax3::Scaled),
             R"#(Applies a scaling transformation on the axis placement. The "Location" point of the axisplacement is modified. Warnings : If the scale <S> is negative : . the main direction of the axis placement is not changed. . The "XDirection" and the "YDirection" are reversed. So the axis placement stay right handed.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Ax3::*)( const gp_Trsf & ) ) static_cast<void (gp_Ax3::*)( const gp_Trsf & ) >(&gp_Ax3::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Ax3 (gp_Ax3::*)( const gp_Trsf & ) const) static_cast<gp_Ax3 (gp_Ax3::*)( const gp_Trsf & ) const>(&gp_Ax3::Transformed),
             R"#(Transforms an axis placement with a Trsf. The "Location" point, the "XDirection" and the "YDirection" are transformed with T. The resulting main "Direction" of <me> is the cross product between the "XDirection" and the "YDirection" after transformation.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Ax3::*)( const gp_Vec & ) ) static_cast<void (gp_Ax3::*)( const gp_Vec & ) >(&gp_Ax3::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Ax3 (gp_Ax3::*)( const gp_Vec & ) const) static_cast<gp_Ax3 (gp_Ax3::*)( const gp_Vec & ) const>(&gp_Ax3::Translated),
             R"#(Translates an axis plaxement in the direction of the vector <V>. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Ax3::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Ax3::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Ax3::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Ax3 (gp_Ax3::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Ax3 (gp_Ax3::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Ax3::Translated),
             R"#(Translates an axis placement from the point <P1> to the point <P2>.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_Circ , shared_ptr<gp_Circ> >>(m.attr("gp_Circ"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Ax2 &,const Standard_Real >()  , py::arg("A2"),  py::arg("Radius") )
    // custom constructors
    // methods
        .def("SetAxis",
             (void (gp_Circ::*)( const gp_Ax1 & ) ) static_cast<void (gp_Circ::*)( const gp_Ax1 & ) >(&gp_Circ::SetAxis),
             R"#(Changes the main axis of the circle. It is the axis perpendicular to the plane of the circle. Raises ConstructionError if the direction of A1 is parallel to the "XAxis" of the circle.)#"  , py::arg("A1"))
        .def("SetLocation",
             (void (gp_Circ::*)( const gp_Pnt & ) ) static_cast<void (gp_Circ::*)( const gp_Pnt & ) >(&gp_Circ::SetLocation),
             R"#(Changes the "Location" point (center) of the circle.)#"  , py::arg("P"))
        .def("SetPosition",
             (void (gp_Circ::*)( const gp_Ax2 & ) ) static_cast<void (gp_Circ::*)( const gp_Ax2 & ) >(&gp_Circ::SetPosition),
             R"#(Changes the position of the circle.)#"  , py::arg("A2"))
        .def("SetRadius",
             (void (gp_Circ::*)( const Standard_Real ) ) static_cast<void (gp_Circ::*)( const Standard_Real ) >(&gp_Circ::SetRadius),
             R"#(Modifies the radius of this circle. Warning. This class does not prevent the creation of a circle where Radius is null. Exceptions Standard_ConstructionError if Radius is negative.)#"  , py::arg("Radius"))
        .def("Area",
             (Standard_Real (gp_Circ::*)() const) static_cast<Standard_Real (gp_Circ::*)() const>(&gp_Circ::Area),
             R"#(Computes the area of the circle.)#" )
        .def("Axis",
             (const gp_Ax1 & (gp_Circ::*)() const) static_cast<const gp_Ax1 & (gp_Circ::*)() const>(&gp_Circ::Axis),
             R"#(Returns the main axis of the circle. It is the axis perpendicular to the plane of the circle, passing through the "Location" point (center) of the circle.)#" )
        .def("Length",
             (Standard_Real (gp_Circ::*)() const) static_cast<Standard_Real (gp_Circ::*)() const>(&gp_Circ::Length),
             R"#(Computes the circumference of the circle.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Circ::*)() const) static_cast<const gp_Pnt & (gp_Circ::*)() const>(&gp_Circ::Location),
             R"#(Returns the center of the circle. It is the "Location" point of the local coordinate system of the circle)#" )
        .def("Position",
             (const gp_Ax2 & (gp_Circ::*)() const) static_cast<const gp_Ax2 & (gp_Circ::*)() const>(&gp_Circ::Position),
             R"#(Returns the position of the circle. It is the local coordinate system of the circle.)#" )
        .def("Radius",
             (Standard_Real (gp_Circ::*)() const) static_cast<Standard_Real (gp_Circ::*)() const>(&gp_Circ::Radius),
             R"#(Returns the radius of this circle.)#" )
        .def("XAxis",
             (gp_Ax1 (gp_Circ::*)() const) static_cast<gp_Ax1 (gp_Circ::*)() const>(&gp_Circ::XAxis),
             R"#(Returns the "XAxis" of the circle. This axis is perpendicular to the axis of the conic. This axis and the "Yaxis" define the plane of the conic.)#" )
        .def("YAxis",
             (gp_Ax1 (gp_Circ::*)() const) static_cast<gp_Ax1 (gp_Circ::*)() const>(&gp_Circ::YAxis),
             R"#(Returns the "YAxis" of the circle. This axis and the "Xaxis" define the plane of the conic. The "YAxis" is perpendicular to the "Xaxis".)#" )
        .def("Distance",
             (Standard_Real (gp_Circ::*)( const gp_Pnt & ) const) static_cast<Standard_Real (gp_Circ::*)( const gp_Pnt & ) const>(&gp_Circ::Distance),
             R"#(Computes the minimum of distance between the point P and any point on the circumference of the circle.)#"  , py::arg("P"))
        .def("SquareDistance",
             (Standard_Real (gp_Circ::*)( const gp_Pnt & ) const) static_cast<Standard_Real (gp_Circ::*)( const gp_Pnt & ) const>(&gp_Circ::SquareDistance),
             R"#(Computes the square distance between <me> and the point P.)#"  , py::arg("P"))
        .def("Contains",
             (Standard_Boolean (gp_Circ::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Circ::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Circ::Contains),
             R"#(Returns True if the point P is on the circumference. The distance between <me> and <P> must be lower or equal to LinearTolerance.)#"  , py::arg("P"),  py::arg("LinearTolerance"))
        .def("Mirror",
             (void (gp_Circ::*)( const gp_Pnt & ) ) static_cast<void (gp_Circ::*)( const gp_Pnt & ) >(&gp_Circ::Mirror),
             R"#(None)#"  , py::arg("P"))
        .def("Mirrored",
             (gp_Circ (gp_Circ::*)( const gp_Pnt & ) const) static_cast<gp_Circ (gp_Circ::*)( const gp_Pnt & ) const>(&gp_Circ::Mirrored),
             R"#(Performs the symmetrical transformation of a circle with respect to the point P which is the center of the symmetry.)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Circ::*)( const gp_Ax1 & ) ) static_cast<void (gp_Circ::*)( const gp_Ax1 & ) >(&gp_Circ::Mirror),
             R"#(None)#"  , py::arg("A1"))
        .def("Mirrored",
             (gp_Circ (gp_Circ::*)( const gp_Ax1 & ) const) static_cast<gp_Circ (gp_Circ::*)( const gp_Ax1 & ) const>(&gp_Circ::Mirrored),
             R"#(Performs the symmetrical transformation of a circle with respect to an axis placement which is the axis of the symmetry.)#"  , py::arg("A1"))
        .def("Mirror",
             (void (gp_Circ::*)( const gp_Ax2 & ) ) static_cast<void (gp_Circ::*)( const gp_Ax2 & ) >(&gp_Circ::Mirror),
             R"#(None)#"  , py::arg("A2"))
        .def("Mirrored",
             (gp_Circ (gp_Circ::*)( const gp_Ax2 & ) const) static_cast<gp_Circ (gp_Circ::*)( const gp_Ax2 & ) const>(&gp_Circ::Mirrored),
             R"#(Performs the symmetrical transformation of a circle with respect to a plane. The axis placement A2 locates the plane of the of the symmetry : (Location, XDirection, YDirection).)#"  , py::arg("A2"))
        .def("Rotate",
             (void (gp_Circ::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Circ::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Circ::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Circ (gp_Circ::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Circ (gp_Circ::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Circ::Rotated),
             R"#(Rotates a circle. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Circ::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Circ::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Circ::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Circ (gp_Circ::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Circ (gp_Circ::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Circ::Scaled),
             R"#(Scales a circle. S is the scaling value. Warnings : If S is negative the radius stay positive but the "XAxis" and the "YAxis" are reversed as for an ellipse.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Circ::*)( const gp_Trsf & ) ) static_cast<void (gp_Circ::*)( const gp_Trsf & ) >(&gp_Circ::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Circ (gp_Circ::*)( const gp_Trsf & ) const) static_cast<gp_Circ (gp_Circ::*)( const gp_Trsf & ) const>(&gp_Circ::Transformed),
             R"#(Transforms a circle with the transformation T from class Trsf.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Circ::*)( const gp_Vec & ) ) static_cast<void (gp_Circ::*)( const gp_Vec & ) >(&gp_Circ::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Circ (gp_Circ::*)( const gp_Vec & ) const) static_cast<gp_Circ (gp_Circ::*)( const gp_Vec & ) const>(&gp_Circ::Translated),
             R"#(Translates a circle in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Circ::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Circ::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Circ::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Circ (gp_Circ::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Circ (gp_Circ::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Circ::Translated),
             R"#(Translates a circle from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetAxis",
             (void (gp_Circ::*)( const gp_Ax1 & ) ) static_cast<void (gp_Circ::*)( const gp_Ax1 & ) >(&gp_Circ::SetAxis),
             R"#(Changes the main axis of the circle. It is the axis perpendicular to the plane of the circle. Raises ConstructionError if the direction of A1 is parallel to the "XAxis" of the circle.)#"  , py::arg("A1"))
        .def("SetLocation",
             (void (gp_Circ::*)( const gp_Pnt & ) ) static_cast<void (gp_Circ::*)( const gp_Pnt & ) >(&gp_Circ::SetLocation),
             R"#(Changes the "Location" point (center) of the circle.)#"  , py::arg("P"))
        .def("SetPosition",
             (void (gp_Circ::*)( const gp_Ax2 & ) ) static_cast<void (gp_Circ::*)( const gp_Ax2 & ) >(&gp_Circ::SetPosition),
             R"#(Changes the position of the circle.)#"  , py::arg("A2"))
        .def("SetRadius",
             (void (gp_Circ::*)( const Standard_Real ) ) static_cast<void (gp_Circ::*)( const Standard_Real ) >(&gp_Circ::SetRadius),
             R"#(Modifies the radius of this circle. Warning. This class does not prevent the creation of a circle where Radius is null. Exceptions Standard_ConstructionError if Radius is negative.)#"  , py::arg("R"))
        .def("Area",
             (Standard_Real (gp_Circ::*)() const) static_cast<Standard_Real (gp_Circ::*)() const>(&gp_Circ::Area),
             R"#(Computes the area of the circle.)#" )
        .def("Axis",
             (const gp_Ax1 & (gp_Circ::*)() const) static_cast<const gp_Ax1 & (gp_Circ::*)() const>(&gp_Circ::Axis),
             R"#(Returns the main axis of the circle. It is the axis perpendicular to the plane of the circle, passing through the "Location" point (center) of the circle.)#" )
        .def("Length",
             (Standard_Real (gp_Circ::*)() const) static_cast<Standard_Real (gp_Circ::*)() const>(&gp_Circ::Length),
             R"#(Computes the circumference of the circle.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Circ::*)() const) static_cast<const gp_Pnt & (gp_Circ::*)() const>(&gp_Circ::Location),
             R"#(Returns the center of the circle. It is the "Location" point of the local coordinate system of the circle)#" )
        .def("Position",
             (const gp_Ax2 & (gp_Circ::*)() const) static_cast<const gp_Ax2 & (gp_Circ::*)() const>(&gp_Circ::Position),
             R"#(Returns the position of the circle. It is the local coordinate system of the circle.)#" )
        .def("Radius",
             (Standard_Real (gp_Circ::*)() const) static_cast<Standard_Real (gp_Circ::*)() const>(&gp_Circ::Radius),
             R"#(Returns the radius of this circle.)#" )
        .def("XAxis",
             (gp_Ax1 (gp_Circ::*)() const) static_cast<gp_Ax1 (gp_Circ::*)() const>(&gp_Circ::XAxis),
             R"#(Returns the "XAxis" of the circle. This axis is perpendicular to the axis of the conic. This axis and the "Yaxis" define the plane of the conic.)#" )
        .def("YAxis",
             (gp_Ax1 (gp_Circ::*)() const) static_cast<gp_Ax1 (gp_Circ::*)() const>(&gp_Circ::YAxis),
             R"#(Returns the "YAxis" of the circle. This axis and the "Xaxis" define the plane of the conic. The "YAxis" is perpendicular to the "Xaxis".)#" )
        .def("Distance",
             (Standard_Real (gp_Circ::*)( const gp_Pnt & ) const) static_cast<Standard_Real (gp_Circ::*)( const gp_Pnt & ) const>(&gp_Circ::Distance),
             R"#(Computes the minimum of distance between the point P and any point on the circumference of the circle.)#"  , py::arg("P"))
        .def("SquareDistance",
             (Standard_Real (gp_Circ::*)( const gp_Pnt & ) const) static_cast<Standard_Real (gp_Circ::*)( const gp_Pnt & ) const>(&gp_Circ::SquareDistance),
             R"#(Computes the square distance between <me> and the point P.)#"  , py::arg("P"))
        .def("Contains",
             (Standard_Boolean (gp_Circ::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Circ::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Circ::Contains),
             R"#(Returns True if the point P is on the circumference. The distance between <me> and <P> must be lower or equal to LinearTolerance.)#"  , py::arg("P"),  py::arg("LinearTolerance"))
        .def("Rotate",
             (void (gp_Circ::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Circ::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Circ::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Circ (gp_Circ::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Circ (gp_Circ::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Circ::Rotated),
             R"#(Rotates a circle. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Circ::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Circ::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Circ::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Circ (gp_Circ::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Circ (gp_Circ::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Circ::Scaled),
             R"#(Scales a circle. S is the scaling value. Warnings : If S is negative the radius stay positive but the "XAxis" and the "YAxis" are reversed as for an ellipse.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Circ::*)( const gp_Trsf & ) ) static_cast<void (gp_Circ::*)( const gp_Trsf & ) >(&gp_Circ::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Circ (gp_Circ::*)( const gp_Trsf & ) const) static_cast<gp_Circ (gp_Circ::*)( const gp_Trsf & ) const>(&gp_Circ::Transformed),
             R"#(Transforms a circle with the transformation T from class Trsf.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Circ::*)( const gp_Vec & ) ) static_cast<void (gp_Circ::*)( const gp_Vec & ) >(&gp_Circ::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Circ (gp_Circ::*)( const gp_Vec & ) const) static_cast<gp_Circ (gp_Circ::*)( const gp_Vec & ) const>(&gp_Circ::Translated),
             R"#(Translates a circle in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Circ::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Circ::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Circ::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Circ (gp_Circ::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Circ (gp_Circ::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Circ::Translated),
             R"#(Translates a circle from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_Circ2d , shared_ptr<gp_Circ2d> >>(m.attr("gp_Circ2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Ax2d &,const Standard_Real,const Standard_Boolean >()  , py::arg("XAxis"),  py::arg("Radius"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Ax22d &,const Standard_Real >()  , py::arg("Axis"),  py::arg("Radius") )
    // custom constructors
    // methods
        .def("SetLocation",
             (void (gp_Circ2d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Circ2d::*)( const gp_Pnt2d & ) >(&gp_Circ2d::SetLocation),
             R"#(Changes the location point (center) of the circle.)#"  , py::arg("P"))
        .def("SetXAxis",
             (void (gp_Circ2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Circ2d::*)( const gp_Ax2d & ) >(&gp_Circ2d::SetXAxis),
             R"#(Changes the X axis of the circle.)#"  , py::arg("A"))
        .def("SetAxis",
             (void (gp_Circ2d::*)( const gp_Ax22d & ) ) static_cast<void (gp_Circ2d::*)( const gp_Ax22d & ) >(&gp_Circ2d::SetAxis),
             R"#(Changes the X axis of the circle.)#"  , py::arg("A"))
        .def("SetYAxis",
             (void (gp_Circ2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Circ2d::*)( const gp_Ax2d & ) >(&gp_Circ2d::SetYAxis),
             R"#(Changes the Y axis of the circle.)#"  , py::arg("A"))
        .def("SetRadius",
             (void (gp_Circ2d::*)( const Standard_Real ) ) static_cast<void (gp_Circ2d::*)( const Standard_Real ) >(&gp_Circ2d::SetRadius),
             R"#(Modifies the radius of this circle. This class does not prevent the creation of a circle where Radius is null. Exceptions Standard_ConstructionError if Radius is negative.)#"  , py::arg("Radius"))
        .def("Area",
             (Standard_Real (gp_Circ2d::*)() const) static_cast<Standard_Real (gp_Circ2d::*)() const>(&gp_Circ2d::Area),
             R"#(Computes the area of the circle.)#" )
        .def("Contains",
             (Standard_Boolean (gp_Circ2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Circ2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Circ2d::Contains),
             R"#(Does <me> contain P ? Returns True if the distance between P and any point on the circumference of the circle is lower of equal to <LinearTolerance>.)#"  , py::arg("P"),  py::arg("LinearTolerance"))
        .def("Distance",
             (Standard_Real (gp_Circ2d::*)( const gp_Pnt2d & ) const) static_cast<Standard_Real (gp_Circ2d::*)( const gp_Pnt2d & ) const>(&gp_Circ2d::Distance),
             R"#(Computes the minimum of distance between the point P and any point on the circumference of the circle.)#"  , py::arg("P"))
        .def("SquareDistance",
             (Standard_Real (gp_Circ2d::*)( const gp_Pnt2d & ) const) static_cast<Standard_Real (gp_Circ2d::*)( const gp_Pnt2d & ) const>(&gp_Circ2d::SquareDistance),
             R"#(Computes the square distance between <me> and the point P.)#"  , py::arg("P"))
        .def("Length",
             (Standard_Real (gp_Circ2d::*)() const) static_cast<Standard_Real (gp_Circ2d::*)() const>(&gp_Circ2d::Length),
             R"#(computes the circumference of the circle.)#" )
        .def("Location",
             (const gp_Pnt2d & (gp_Circ2d::*)() const) static_cast<const gp_Pnt2d & (gp_Circ2d::*)() const>(&gp_Circ2d::Location),
             R"#(Returns the location point (center) of the circle.)#" )
        .def("Radius",
             (Standard_Real (gp_Circ2d::*)() const) static_cast<Standard_Real (gp_Circ2d::*)() const>(&gp_Circ2d::Radius),
             R"#(Returns the radius value of the circle.)#" )
        .def("Axis",
             (const gp_Ax22d & (gp_Circ2d::*)() const) static_cast<const gp_Ax22d & (gp_Circ2d::*)() const>(&gp_Circ2d::Axis),
             R"#(returns the position of the circle.)#" )
        .def("Position",
             (const gp_Ax22d & (gp_Circ2d::*)() const) static_cast<const gp_Ax22d & (gp_Circ2d::*)() const>(&gp_Circ2d::Position),
             R"#(returns the position of the circle. Idem Axis(me).)#" )
        .def("XAxis",
             (gp_Ax2d (gp_Circ2d::*)() const) static_cast<gp_Ax2d (gp_Circ2d::*)() const>(&gp_Circ2d::XAxis),
             R"#(returns the X axis of the circle.)#" )
        .def("YAxis",
             (gp_Ax2d (gp_Circ2d::*)() const) static_cast<gp_Ax2d (gp_Circ2d::*)() const>(&gp_Circ2d::YAxis),
             R"#(Returns the Y axis of the circle. Reverses the direction of the circle.)#" )
        .def("Reverse",
             (void (gp_Circ2d::*)() ) static_cast<void (gp_Circ2d::*)() >(&gp_Circ2d::Reverse),
             R"#(Reverses the orientation of the local coordinate system of this circle (the "Y Direction" is reversed) and therefore changes the implicit orientation of this circle. Reverse assigns the result to this circle,)#" )
        .def("Reversed",
             (gp_Circ2d (gp_Circ2d::*)() const) static_cast<gp_Circ2d (gp_Circ2d::*)() const>(&gp_Circ2d::Reversed),
             R"#(Reverses the orientation of the local coordinate system of this circle (the "Y Direction" is reversed) and therefore changes the implicit orientation of this circle. Reversed creates a new circle.)#" )
        .def("IsDirect",
             (Standard_Boolean (gp_Circ2d::*)() const) static_cast<Standard_Boolean (gp_Circ2d::*)() const>(&gp_Circ2d::IsDirect),
             R"#(Returns true if the local coordinate system is direct and false in the other case.)#" )
        .def("Mirror",
             (void (gp_Circ2d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Circ2d::*)( const gp_Pnt2d & ) >(&gp_Circ2d::Mirror),
             R"#(None)#"  , py::arg("P"))
        .def("Mirrored",
             (gp_Circ2d (gp_Circ2d::*)( const gp_Pnt2d & ) const) static_cast<gp_Circ2d (gp_Circ2d::*)( const gp_Pnt2d & ) const>(&gp_Circ2d::Mirrored),
             R"#(Performs the symmetrical transformation of a circle with respect to the point P which is the center of the symmetry)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Circ2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Circ2d::*)( const gp_Ax2d & ) >(&gp_Circ2d::Mirror),
             R"#(None)#"  , py::arg("A"))
        .def("Mirrored",
             (gp_Circ2d (gp_Circ2d::*)( const gp_Ax2d & ) const) static_cast<gp_Circ2d (gp_Circ2d::*)( const gp_Ax2d & ) const>(&gp_Circ2d::Mirrored),
             R"#(Performs the symmetrical transformation of a circle with respect to an axis placement which is the axis of the symmetry.)#"  , py::arg("A"))
        .def("Rotate",
             (void (gp_Circ2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Circ2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Circ2d::Rotate),
             R"#(None)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Circ2d (gp_Circ2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Circ2d (gp_Circ2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Circ2d::Rotated),
             R"#(Rotates a circle. P is the center of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Circ2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Circ2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Circ2d::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Circ2d (gp_Circ2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Circ2d (gp_Circ2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Circ2d::Scaled),
             R"#(Scales a circle. S is the scaling value. Warnings : If S is negative the radius stay positive but the "XAxis" and the "YAxis" are reversed as for an ellipse.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Circ2d::*)( const gp_Trsf2d & ) ) static_cast<void (gp_Circ2d::*)( const gp_Trsf2d & ) >(&gp_Circ2d::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Circ2d (gp_Circ2d::*)( const gp_Trsf2d & ) const) static_cast<gp_Circ2d (gp_Circ2d::*)( const gp_Trsf2d & ) const>(&gp_Circ2d::Transformed),
             R"#(Transforms a circle with the transformation T from class Trsf2d.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Circ2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Circ2d::*)( const gp_Vec2d & ) >(&gp_Circ2d::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Circ2d (gp_Circ2d::*)( const gp_Vec2d & ) const) static_cast<gp_Circ2d (gp_Circ2d::*)( const gp_Vec2d & ) const>(&gp_Circ2d::Translated),
             R"#(Translates a circle in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Circ2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (gp_Circ2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&gp_Circ2d::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Circ2d (gp_Circ2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const) static_cast<gp_Circ2d (gp_Circ2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const>(&gp_Circ2d::Translated),
             R"#(Translates a circle from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetLocation",
             (void (gp_Circ2d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Circ2d::*)( const gp_Pnt2d & ) >(&gp_Circ2d::SetLocation),
             R"#(Changes the location point (center) of the circle.)#"  , py::arg("P"))
        .def("SetXAxis",
             (void (gp_Circ2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Circ2d::*)( const gp_Ax2d & ) >(&gp_Circ2d::SetXAxis),
             R"#(Changes the X axis of the circle.)#"  , py::arg("A"))
        .def("SetAxis",
             (void (gp_Circ2d::*)( const gp_Ax22d & ) ) static_cast<void (gp_Circ2d::*)( const gp_Ax22d & ) >(&gp_Circ2d::SetAxis),
             R"#(Changes the X axis of the circle.)#"  , py::arg("A"))
        .def("SetYAxis",
             (void (gp_Circ2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Circ2d::*)( const gp_Ax2d & ) >(&gp_Circ2d::SetYAxis),
             R"#(Changes the Y axis of the circle.)#"  , py::arg("A"))
        .def("SetRadius",
             (void (gp_Circ2d::*)( const Standard_Real ) ) static_cast<void (gp_Circ2d::*)( const Standard_Real ) >(&gp_Circ2d::SetRadius),
             R"#(Modifies the radius of this circle. This class does not prevent the creation of a circle where Radius is null. Exceptions Standard_ConstructionError if Radius is negative.)#"  , py::arg("Radius"))
        .def("Area",
             (Standard_Real (gp_Circ2d::*)() const) static_cast<Standard_Real (gp_Circ2d::*)() const>(&gp_Circ2d::Area),
             R"#(Computes the area of the circle.)#" )
        .def("Contains",
             (Standard_Boolean (gp_Circ2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Circ2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Circ2d::Contains),
             R"#(Does <me> contain P ? Returns True if the distance between P and any point on the circumference of the circle is lower of equal to <LinearTolerance>.)#"  , py::arg("P"),  py::arg("LinearTolerance"))
        .def("Distance",
             (Standard_Real (gp_Circ2d::*)( const gp_Pnt2d & ) const) static_cast<Standard_Real (gp_Circ2d::*)( const gp_Pnt2d & ) const>(&gp_Circ2d::Distance),
             R"#(Computes the minimum of distance between the point P and any point on the circumference of the circle.)#"  , py::arg("P"))
        .def("SquareDistance",
             (Standard_Real (gp_Circ2d::*)( const gp_Pnt2d & ) const) static_cast<Standard_Real (gp_Circ2d::*)( const gp_Pnt2d & ) const>(&gp_Circ2d::SquareDistance),
             R"#(Computes the square distance between <me> and the point P.)#"  , py::arg("P"))
        .def("Length",
             (Standard_Real (gp_Circ2d::*)() const) static_cast<Standard_Real (gp_Circ2d::*)() const>(&gp_Circ2d::Length),
             R"#(computes the circumference of the circle.)#" )
        .def("Location",
             (const gp_Pnt2d & (gp_Circ2d::*)() const) static_cast<const gp_Pnt2d & (gp_Circ2d::*)() const>(&gp_Circ2d::Location),
             R"#(Returns the location point (center) of the circle.)#" )
        .def("Radius",
             (Standard_Real (gp_Circ2d::*)() const) static_cast<Standard_Real (gp_Circ2d::*)() const>(&gp_Circ2d::Radius),
             R"#(Returns the radius value of the circle.)#" )
        .def("Axis",
             (const gp_Ax22d & (gp_Circ2d::*)() const) static_cast<const gp_Ax22d & (gp_Circ2d::*)() const>(&gp_Circ2d::Axis),
             R"#(returns the position of the circle.)#" )
        .def("Position",
             (const gp_Ax22d & (gp_Circ2d::*)() const) static_cast<const gp_Ax22d & (gp_Circ2d::*)() const>(&gp_Circ2d::Position),
             R"#(returns the position of the circle. Idem Axis(me).)#" )
        .def("XAxis",
             (gp_Ax2d (gp_Circ2d::*)() const) static_cast<gp_Ax2d (gp_Circ2d::*)() const>(&gp_Circ2d::XAxis),
             R"#(returns the X axis of the circle.)#" )
        .def("YAxis",
             (gp_Ax2d (gp_Circ2d::*)() const) static_cast<gp_Ax2d (gp_Circ2d::*)() const>(&gp_Circ2d::YAxis),
             R"#(Returns the Y axis of the circle. Reverses the direction of the circle.)#" )
        .def("Reverse",
             (void (gp_Circ2d::*)() ) static_cast<void (gp_Circ2d::*)() >(&gp_Circ2d::Reverse),
             R"#(Reverses the orientation of the local coordinate system of this circle (the "Y Direction" is reversed) and therefore changes the implicit orientation of this circle. Reverse assigns the result to this circle,)#" )
        .def("Reversed",
             (gp_Circ2d (gp_Circ2d::*)() const) static_cast<gp_Circ2d (gp_Circ2d::*)() const>(&gp_Circ2d::Reversed),
             R"#(Reverses the orientation of the local coordinate system of this circle (the "Y Direction" is reversed) and therefore changes the implicit orientation of this circle. Reversed creates a new circle.)#" )
        .def("IsDirect",
             (Standard_Boolean (gp_Circ2d::*)() const) static_cast<Standard_Boolean (gp_Circ2d::*)() const>(&gp_Circ2d::IsDirect),
             R"#(Returns true if the local coordinate system is direct and false in the other case.)#" )
        .def("Rotate",
             (void (gp_Circ2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Circ2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Circ2d::Rotate),
             R"#(None)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Circ2d (gp_Circ2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Circ2d (gp_Circ2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Circ2d::Rotated),
             R"#(Rotates a circle. P is the center of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Circ2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Circ2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Circ2d::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Circ2d (gp_Circ2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Circ2d (gp_Circ2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Circ2d::Scaled),
             R"#(Scales a circle. S is the scaling value. Warnings : If S is negative the radius stay positive but the "XAxis" and the "YAxis" are reversed as for an ellipse.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Circ2d::*)( const gp_Trsf2d & ) ) static_cast<void (gp_Circ2d::*)( const gp_Trsf2d & ) >(&gp_Circ2d::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Circ2d (gp_Circ2d::*)( const gp_Trsf2d & ) const) static_cast<gp_Circ2d (gp_Circ2d::*)( const gp_Trsf2d & ) const>(&gp_Circ2d::Transformed),
             R"#(Transforms a circle with the transformation T from class Trsf2d.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Circ2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Circ2d::*)( const gp_Vec2d & ) >(&gp_Circ2d::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Circ2d (gp_Circ2d::*)( const gp_Vec2d & ) const) static_cast<gp_Circ2d (gp_Circ2d::*)( const gp_Vec2d & ) const>(&gp_Circ2d::Translated),
             R"#(Translates a circle in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Circ2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (gp_Circ2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&gp_Circ2d::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Circ2d (gp_Circ2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const) static_cast<gp_Circ2d (gp_Circ2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const>(&gp_Circ2d::Translated),
             R"#(Translates a circle from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
        .def("Coefficients",
             []( gp_Circ2d &self   ){ Standard_Real  A; Standard_Real  B; Standard_Real  C; Standard_Real  D; Standard_Real  E; Standard_Real  F; self.Coefficients(A,B,C,D,E,F); return std::make_tuple(A,B,C,D,E,F); },
             R"#(Returns the normalized coefficients from the implicit equation of the circle : A * (X**2) + B * (Y**2) + 2*C*(X*Y) + 2*D*X + 2*E*Y + F = 0.0)#" )
        .def("Coefficients",
             []( gp_Circ2d &self   ){ Standard_Real  A; Standard_Real  B; Standard_Real  C; Standard_Real  D; Standard_Real  E; Standard_Real  F; self.Coefficients(A,B,C,D,E,F); return std::make_tuple(A,B,C,D,E,F); },
             R"#(Returns the normalized coefficients from the implicit equation of the circle : A * (X**2) + B * (Y**2) + 2*C*(X*Y) + 2*D*X + 2*E*Y + F = 0.0)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_Cone , shared_ptr<gp_Cone> >>(m.attr("gp_Cone"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Ax3 &,const Standard_Real,const Standard_Real >()  , py::arg("A3"),  py::arg("Ang"),  py::arg("Radius") )
    // custom constructors
    // methods
        .def("SetAxis",
             (void (gp_Cone::*)( const gp_Ax1 & ) ) static_cast<void (gp_Cone::*)( const gp_Ax1 & ) >(&gp_Cone::SetAxis),
             R"#(Changes the symmetry axis of the cone. Raises ConstructionError the direction of A1 is parallel to the "XDirection" of the coordinate system of the cone.)#"  , py::arg("A1"))
        .def("SetLocation",
             (void (gp_Cone::*)( const gp_Pnt & ) ) static_cast<void (gp_Cone::*)( const gp_Pnt & ) >(&gp_Cone::SetLocation),
             R"#(Changes the location of the cone.)#"  , py::arg("Loc"))
        .def("SetPosition",
             (void (gp_Cone::*)( const gp_Ax3 & ) ) static_cast<void (gp_Cone::*)( const gp_Ax3 & ) >(&gp_Cone::SetPosition),
             R"#(Changes the local coordinate system of the cone. This coordinate system defines the reference plane of the cone.)#"  , py::arg("A3"))
        .def("SetRadius",
             (void (gp_Cone::*)( const Standard_Real ) ) static_cast<void (gp_Cone::*)( const Standard_Real ) >(&gp_Cone::SetRadius),
             R"#(Changes the radius of the cone in the reference plane of the cone. Raised if R < 0.0)#"  , py::arg("R"))
        .def("SetSemiAngle",
             (void (gp_Cone::*)( const Standard_Real ) ) static_cast<void (gp_Cone::*)( const Standard_Real ) >(&gp_Cone::SetSemiAngle),
             R"#(Changes the semi-angle of the cone. Semi-angle can be negative. Its absolute value Abs(Ang) is in range ]0,PI/2[. Raises ConstructionError if Abs(Ang) < Resolution from gp or Abs(Ang) >= PI/2 - Resolution)#"  , py::arg("Ang"))
        .def("Apex",
             (gp_Pnt (gp_Cone::*)() const) static_cast<gp_Pnt (gp_Cone::*)() const>(&gp_Cone::Apex),
             R"#(Computes the cone's top. The Apex of the cone is on the negative side of the symmetry axis of the cone.)#" )
        .def("UReverse",
             (void (gp_Cone::*)() ) static_cast<void (gp_Cone::*)() >(&gp_Cone::UReverse),
             R"#(Reverses the U parametrization of the cone reversing the YAxis.)#" )
        .def("VReverse",
             (void (gp_Cone::*)() ) static_cast<void (gp_Cone::*)() >(&gp_Cone::VReverse),
             R"#(Reverses the V parametrization of the cone reversing the ZAxis.)#" )
        .def("Direct",
             (Standard_Boolean (gp_Cone::*)() const) static_cast<Standard_Boolean (gp_Cone::*)() const>(&gp_Cone::Direct),
             R"#(Returns true if the local coordinate system of this cone is right-handed.)#" )
        .def("Axis",
             (const gp_Ax1 & (gp_Cone::*)() const) static_cast<const gp_Ax1 & (gp_Cone::*)() const>(&gp_Cone::Axis),
             R"#(returns the symmetry axis of the cone.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Cone::*)() const) static_cast<const gp_Pnt & (gp_Cone::*)() const>(&gp_Cone::Location),
             R"#(returns the "Location" point of the cone.)#" )
        .def("Position",
             (const gp_Ax3 & (gp_Cone::*)() const) static_cast<const gp_Ax3 & (gp_Cone::*)() const>(&gp_Cone::Position),
             R"#(Returns the local coordinates system of the cone.)#" )
        .def("RefRadius",
             (Standard_Real (gp_Cone::*)() const) static_cast<Standard_Real (gp_Cone::*)() const>(&gp_Cone::RefRadius),
             R"#(Returns the radius of the cone in the reference plane.)#" )
        .def("SemiAngle",
             (Standard_Real (gp_Cone::*)() const) static_cast<Standard_Real (gp_Cone::*)() const>(&gp_Cone::SemiAngle),
             R"#(Returns the half-angle at the apex of this cone. Attention! Semi-angle can be negative.)#" )
        .def("XAxis",
             (gp_Ax1 (gp_Cone::*)() const) static_cast<gp_Ax1 (gp_Cone::*)() const>(&gp_Cone::XAxis),
             R"#(Returns the XAxis of the reference plane.)#" )
        .def("YAxis",
             (gp_Ax1 (gp_Cone::*)() const) static_cast<gp_Ax1 (gp_Cone::*)() const>(&gp_Cone::YAxis),
             R"#(Returns the YAxis of the reference plane.)#" )
        .def("Mirror",
             (void (gp_Cone::*)( const gp_Pnt & ) ) static_cast<void (gp_Cone::*)( const gp_Pnt & ) >(&gp_Cone::Mirror),
             R"#(None)#"  , py::arg("P"))
        .def("Mirrored",
             (gp_Cone (gp_Cone::*)( const gp_Pnt & ) const) static_cast<gp_Cone (gp_Cone::*)( const gp_Pnt & ) const>(&gp_Cone::Mirrored),
             R"#(Performs the symmetrical transformation of a cone with respect to the point P which is the center of the symmetry.)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Cone::*)( const gp_Ax1 & ) ) static_cast<void (gp_Cone::*)( const gp_Ax1 & ) >(&gp_Cone::Mirror),
             R"#(None)#"  , py::arg("A1"))
        .def("Mirrored",
             (gp_Cone (gp_Cone::*)( const gp_Ax1 & ) const) static_cast<gp_Cone (gp_Cone::*)( const gp_Ax1 & ) const>(&gp_Cone::Mirrored),
             R"#(Performs the symmetrical transformation of a cone with respect to an axis placement which is the axis of the symmetry.)#"  , py::arg("A1"))
        .def("Mirror",
             (void (gp_Cone::*)( const gp_Ax2 & ) ) static_cast<void (gp_Cone::*)( const gp_Ax2 & ) >(&gp_Cone::Mirror),
             R"#(None)#"  , py::arg("A2"))
        .def("Mirrored",
             (gp_Cone (gp_Cone::*)( const gp_Ax2 & ) const) static_cast<gp_Cone (gp_Cone::*)( const gp_Ax2 & ) const>(&gp_Cone::Mirrored),
             R"#(Performs the symmetrical transformation of a cone with respect to a plane. The axis placement A2 locates the plane of the of the symmetry : (Location, XDirection, YDirection).)#"  , py::arg("A2"))
        .def("Rotate",
             (void (gp_Cone::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Cone::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Cone::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Cone (gp_Cone::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Cone (gp_Cone::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Cone::Rotated),
             R"#(Rotates a cone. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Cone::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Cone::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Cone::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Cone (gp_Cone::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Cone (gp_Cone::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Cone::Scaled),
             R"#(Scales a cone. S is the scaling value. The absolute value of S is used to scale the cone)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Cone::*)( const gp_Trsf & ) ) static_cast<void (gp_Cone::*)( const gp_Trsf & ) >(&gp_Cone::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Cone (gp_Cone::*)( const gp_Trsf & ) const) static_cast<gp_Cone (gp_Cone::*)( const gp_Trsf & ) const>(&gp_Cone::Transformed),
             R"#(Transforms a cone with the transformation T from class Trsf.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Cone::*)( const gp_Vec & ) ) static_cast<void (gp_Cone::*)( const gp_Vec & ) >(&gp_Cone::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Cone (gp_Cone::*)( const gp_Vec & ) const) static_cast<gp_Cone (gp_Cone::*)( const gp_Vec & ) const>(&gp_Cone::Translated),
             R"#(Translates a cone in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Cone::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Cone::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Cone::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Cone (gp_Cone::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Cone (gp_Cone::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Cone::Translated),
             R"#(Translates a cone from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetAxis",
             (void (gp_Cone::*)( const gp_Ax1 & ) ) static_cast<void (gp_Cone::*)( const gp_Ax1 & ) >(&gp_Cone::SetAxis),
             R"#(Changes the symmetry axis of the cone. Raises ConstructionError the direction of A1 is parallel to the "XDirection" of the coordinate system of the cone.)#"  , py::arg("A1"))
        .def("SetLocation",
             (void (gp_Cone::*)( const gp_Pnt & ) ) static_cast<void (gp_Cone::*)( const gp_Pnt & ) >(&gp_Cone::SetLocation),
             R"#(Changes the location of the cone.)#"  , py::arg("Loc"))
        .def("SetPosition",
             (void (gp_Cone::*)( const gp_Ax3 & ) ) static_cast<void (gp_Cone::*)( const gp_Ax3 & ) >(&gp_Cone::SetPosition),
             R"#(Changes the local coordinate system of the cone. This coordinate system defines the reference plane of the cone.)#"  , py::arg("A3"))
        .def("SetRadius",
             (void (gp_Cone::*)( const Standard_Real ) ) static_cast<void (gp_Cone::*)( const Standard_Real ) >(&gp_Cone::SetRadius),
             R"#(Changes the radius of the cone in the reference plane of the cone. Raised if R < 0.0)#"  , py::arg("R"))
        .def("SetSemiAngle",
             (void (gp_Cone::*)( const Standard_Real ) ) static_cast<void (gp_Cone::*)( const Standard_Real ) >(&gp_Cone::SetSemiAngle),
             R"#(Changes the semi-angle of the cone. Semi-angle can be negative. Its absolute value Abs(Ang) is in range ]0,PI/2[. Raises ConstructionError if Abs(Ang) < Resolution from gp or Abs(Ang) >= PI/2 - Resolution)#"  , py::arg("Ang"))
        .def("Apex",
             (gp_Pnt (gp_Cone::*)() const) static_cast<gp_Pnt (gp_Cone::*)() const>(&gp_Cone::Apex),
             R"#(Computes the cone's top. The Apex of the cone is on the negative side of the symmetry axis of the cone.)#" )
        .def("UReverse",
             (void (gp_Cone::*)() ) static_cast<void (gp_Cone::*)() >(&gp_Cone::UReverse),
             R"#(Reverses the U parametrization of the cone reversing the YAxis.)#" )
        .def("VReverse",
             (void (gp_Cone::*)() ) static_cast<void (gp_Cone::*)() >(&gp_Cone::VReverse),
             R"#(Reverses the V parametrization of the cone reversing the ZAxis.)#" )
        .def("Direct",
             (Standard_Boolean (gp_Cone::*)() const) static_cast<Standard_Boolean (gp_Cone::*)() const>(&gp_Cone::Direct),
             R"#(Returns true if the local coordinate system of this cone is right-handed.)#" )
        .def("Axis",
             (const gp_Ax1 & (gp_Cone::*)() const) static_cast<const gp_Ax1 & (gp_Cone::*)() const>(&gp_Cone::Axis),
             R"#(returns the symmetry axis of the cone.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Cone::*)() const) static_cast<const gp_Pnt & (gp_Cone::*)() const>(&gp_Cone::Location),
             R"#(returns the "Location" point of the cone.)#" )
        .def("Position",
             (const gp_Ax3 & (gp_Cone::*)() const) static_cast<const gp_Ax3 & (gp_Cone::*)() const>(&gp_Cone::Position),
             R"#(Returns the local coordinates system of the cone.)#" )
        .def("RefRadius",
             (Standard_Real (gp_Cone::*)() const) static_cast<Standard_Real (gp_Cone::*)() const>(&gp_Cone::RefRadius),
             R"#(Returns the radius of the cone in the reference plane.)#" )
        .def("SemiAngle",
             (Standard_Real (gp_Cone::*)() const) static_cast<Standard_Real (gp_Cone::*)() const>(&gp_Cone::SemiAngle),
             R"#(Returns the half-angle at the apex of this cone. Attention! Semi-angle can be negative.)#" )
        .def("XAxis",
             (gp_Ax1 (gp_Cone::*)() const) static_cast<gp_Ax1 (gp_Cone::*)() const>(&gp_Cone::XAxis),
             R"#(Returns the XAxis of the reference plane.)#" )
        .def("YAxis",
             (gp_Ax1 (gp_Cone::*)() const) static_cast<gp_Ax1 (gp_Cone::*)() const>(&gp_Cone::YAxis),
             R"#(Returns the YAxis of the reference plane.)#" )
        .def("Rotate",
             (void (gp_Cone::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Cone::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Cone::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Cone (gp_Cone::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Cone (gp_Cone::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Cone::Rotated),
             R"#(Rotates a cone. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Cone::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Cone::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Cone::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Cone (gp_Cone::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Cone (gp_Cone::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Cone::Scaled),
             R"#(Scales a cone. S is the scaling value. The absolute value of S is used to scale the cone)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Cone::*)( const gp_Trsf & ) ) static_cast<void (gp_Cone::*)( const gp_Trsf & ) >(&gp_Cone::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Cone (gp_Cone::*)( const gp_Trsf & ) const) static_cast<gp_Cone (gp_Cone::*)( const gp_Trsf & ) const>(&gp_Cone::Transformed),
             R"#(Transforms a cone with the transformation T from class Trsf.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Cone::*)( const gp_Vec & ) ) static_cast<void (gp_Cone::*)( const gp_Vec & ) >(&gp_Cone::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Cone (gp_Cone::*)( const gp_Vec & ) const) static_cast<gp_Cone (gp_Cone::*)( const gp_Vec & ) const>(&gp_Cone::Translated),
             R"#(Translates a cone in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Cone::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Cone::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Cone::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Cone (gp_Cone::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Cone (gp_Cone::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Cone::Translated),
             R"#(Translates a cone from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
        .def("Coefficients",
             []( gp_Cone &self   ){ Standard_Real  A1; Standard_Real  A2; Standard_Real  A3; Standard_Real  B1; Standard_Real  B2; Standard_Real  B3; Standard_Real  C1; Standard_Real  C2; Standard_Real  C3; Standard_Real  D; self.Coefficients(A1,A2,A3,B1,B2,B3,C1,C2,C3,D); return std::make_tuple(A1,A2,A3,B1,B2,B3,C1,C2,C3,D); },
             R"#(Computes the coefficients of the implicit equation of the quadric in the absolute cartesian coordinates system : A1.X**2 + A2.Y**2 + A3.Z**2 + 2.(B1.X.Y + B2.X.Z + B3.Y.Z) + 2.(C1.X + C2.Y + C3.Z) + D = 0.0)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_Cylinder , shared_ptr<gp_Cylinder> >>(m.attr("gp_Cylinder"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Ax3 &,const Standard_Real >()  , py::arg("A3"),  py::arg("Radius") )
    // custom constructors
    // methods
        .def("SetAxis",
             (void (gp_Cylinder::*)( const gp_Ax1 & ) ) static_cast<void (gp_Cylinder::*)( const gp_Ax1 & ) >(&gp_Cylinder::SetAxis),
             R"#(Changes the symmetry axis of the cylinder. Raises ConstructionError if the direction of A1 is parallel to the "XDirection" of the coordinate system of the cylinder.)#"  , py::arg("A1"))
        .def("SetLocation",
             (void (gp_Cylinder::*)( const gp_Pnt & ) ) static_cast<void (gp_Cylinder::*)( const gp_Pnt & ) >(&gp_Cylinder::SetLocation),
             R"#(Changes the location of the surface.)#"  , py::arg("Loc"))
        .def("SetPosition",
             (void (gp_Cylinder::*)( const gp_Ax3 & ) ) static_cast<void (gp_Cylinder::*)( const gp_Ax3 & ) >(&gp_Cylinder::SetPosition),
             R"#(Change the local coordinate system of the surface.)#"  , py::arg("A3"))
        .def("SetRadius",
             (void (gp_Cylinder::*)( const Standard_Real ) ) static_cast<void (gp_Cylinder::*)( const Standard_Real ) >(&gp_Cylinder::SetRadius),
             R"#(Modifies the radius of this cylinder. Exceptions Standard_ConstructionError if R is negative.)#"  , py::arg("R"))
        .def("UReverse",
             (void (gp_Cylinder::*)() ) static_cast<void (gp_Cylinder::*)() >(&gp_Cylinder::UReverse),
             R"#(Reverses the U parametrization of the cylinder reversing the YAxis.)#" )
        .def("VReverse",
             (void (gp_Cylinder::*)() ) static_cast<void (gp_Cylinder::*)() >(&gp_Cylinder::VReverse),
             R"#(Reverses the V parametrization of the plane reversing the Axis.)#" )
        .def("Direct",
             (Standard_Boolean (gp_Cylinder::*)() const) static_cast<Standard_Boolean (gp_Cylinder::*)() const>(&gp_Cylinder::Direct),
             R"#(Returns true if the local coordinate system of this cylinder is right-handed.)#" )
        .def("Axis",
             (const gp_Ax1 & (gp_Cylinder::*)() const) static_cast<const gp_Ax1 & (gp_Cylinder::*)() const>(&gp_Cylinder::Axis),
             R"#(Returns the symmetry axis of the cylinder.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Cylinder::*)() const) static_cast<const gp_Pnt & (gp_Cylinder::*)() const>(&gp_Cylinder::Location),
             R"#(Returns the "Location" point of the cylinder.)#" )
        .def("Position",
             (const gp_Ax3 & (gp_Cylinder::*)() const) static_cast<const gp_Ax3 & (gp_Cylinder::*)() const>(&gp_Cylinder::Position),
             R"#(Returns the local coordinate system of the cylinder.)#" )
        .def("Radius",
             (Standard_Real (gp_Cylinder::*)() const) static_cast<Standard_Real (gp_Cylinder::*)() const>(&gp_Cylinder::Radius),
             R"#(Returns the radius of the cylinder.)#" )
        .def("XAxis",
             (gp_Ax1 (gp_Cylinder::*)() const) static_cast<gp_Ax1 (gp_Cylinder::*)() const>(&gp_Cylinder::XAxis),
             R"#(Returns the axis X of the cylinder.)#" )
        .def("YAxis",
             (gp_Ax1 (gp_Cylinder::*)() const) static_cast<gp_Ax1 (gp_Cylinder::*)() const>(&gp_Cylinder::YAxis),
             R"#(Returns the axis Y of the cylinder.)#" )
        .def("Mirror",
             (void (gp_Cylinder::*)( const gp_Pnt & ) ) static_cast<void (gp_Cylinder::*)( const gp_Pnt & ) >(&gp_Cylinder::Mirror),
             R"#(None)#"  , py::arg("P"))
        .def("Mirrored",
             (gp_Cylinder (gp_Cylinder::*)( const gp_Pnt & ) const) static_cast<gp_Cylinder (gp_Cylinder::*)( const gp_Pnt & ) const>(&gp_Cylinder::Mirrored),
             R"#(Performs the symmetrical transformation of a cylinder with respect to the point P which is the center of the symmetry.)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Cylinder::*)( const gp_Ax1 & ) ) static_cast<void (gp_Cylinder::*)( const gp_Ax1 & ) >(&gp_Cylinder::Mirror),
             R"#(None)#"  , py::arg("A1"))
        .def("Mirrored",
             (gp_Cylinder (gp_Cylinder::*)( const gp_Ax1 & ) const) static_cast<gp_Cylinder (gp_Cylinder::*)( const gp_Ax1 & ) const>(&gp_Cylinder::Mirrored),
             R"#(Performs the symmetrical transformation of a cylinder with respect to an axis placement which is the axis of the symmetry.)#"  , py::arg("A1"))
        .def("Mirror",
             (void (gp_Cylinder::*)( const gp_Ax2 & ) ) static_cast<void (gp_Cylinder::*)( const gp_Ax2 & ) >(&gp_Cylinder::Mirror),
             R"#(None)#"  , py::arg("A2"))
        .def("Mirrored",
             (gp_Cylinder (gp_Cylinder::*)( const gp_Ax2 & ) const) static_cast<gp_Cylinder (gp_Cylinder::*)( const gp_Ax2 & ) const>(&gp_Cylinder::Mirrored),
             R"#(Performs the symmetrical transformation of a cylinder with respect to a plane. The axis placement A2 locates the plane of the of the symmetry : (Location, XDirection, YDirection).)#"  , py::arg("A2"))
        .def("Rotate",
             (void (gp_Cylinder::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Cylinder::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Cylinder::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Cylinder (gp_Cylinder::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Cylinder (gp_Cylinder::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Cylinder::Rotated),
             R"#(Rotates a cylinder. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Cylinder::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Cylinder::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Cylinder::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Cylinder (gp_Cylinder::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Cylinder (gp_Cylinder::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Cylinder::Scaled),
             R"#(Scales a cylinder. S is the scaling value. The absolute value of S is used to scale the cylinder)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Cylinder::*)( const gp_Trsf & ) ) static_cast<void (gp_Cylinder::*)( const gp_Trsf & ) >(&gp_Cylinder::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Cylinder (gp_Cylinder::*)( const gp_Trsf & ) const) static_cast<gp_Cylinder (gp_Cylinder::*)( const gp_Trsf & ) const>(&gp_Cylinder::Transformed),
             R"#(Transforms a cylinder with the transformation T from class Trsf.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Cylinder::*)( const gp_Vec & ) ) static_cast<void (gp_Cylinder::*)( const gp_Vec & ) >(&gp_Cylinder::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Cylinder (gp_Cylinder::*)( const gp_Vec & ) const) static_cast<gp_Cylinder (gp_Cylinder::*)( const gp_Vec & ) const>(&gp_Cylinder::Translated),
             R"#(Translates a cylinder in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Cylinder::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Cylinder::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Cylinder::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Cylinder (gp_Cylinder::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Cylinder (gp_Cylinder::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Cylinder::Translated),
             R"#(Translates a cylinder from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetAxis",
             (void (gp_Cylinder::*)( const gp_Ax1 & ) ) static_cast<void (gp_Cylinder::*)( const gp_Ax1 & ) >(&gp_Cylinder::SetAxis),
             R"#(Changes the symmetry axis of the cylinder. Raises ConstructionError if the direction of A1 is parallel to the "XDirection" of the coordinate system of the cylinder.)#"  , py::arg("A1"))
        .def("SetLocation",
             (void (gp_Cylinder::*)( const gp_Pnt & ) ) static_cast<void (gp_Cylinder::*)( const gp_Pnt & ) >(&gp_Cylinder::SetLocation),
             R"#(Changes the location of the surface.)#"  , py::arg("Loc"))
        .def("SetPosition",
             (void (gp_Cylinder::*)( const gp_Ax3 & ) ) static_cast<void (gp_Cylinder::*)( const gp_Ax3 & ) >(&gp_Cylinder::SetPosition),
             R"#(Change the local coordinate system of the surface.)#"  , py::arg("A3"))
        .def("SetRadius",
             (void (gp_Cylinder::*)( const Standard_Real ) ) static_cast<void (gp_Cylinder::*)( const Standard_Real ) >(&gp_Cylinder::SetRadius),
             R"#(Modifies the radius of this cylinder. Exceptions Standard_ConstructionError if R is negative.)#"  , py::arg("R"))
        .def("UReverse",
             (void (gp_Cylinder::*)() ) static_cast<void (gp_Cylinder::*)() >(&gp_Cylinder::UReverse),
             R"#(Reverses the U parametrization of the cylinder reversing the YAxis.)#" )
        .def("VReverse",
             (void (gp_Cylinder::*)() ) static_cast<void (gp_Cylinder::*)() >(&gp_Cylinder::VReverse),
             R"#(Reverses the V parametrization of the plane reversing the Axis.)#" )
        .def("Direct",
             (Standard_Boolean (gp_Cylinder::*)() const) static_cast<Standard_Boolean (gp_Cylinder::*)() const>(&gp_Cylinder::Direct),
             R"#(Returns true if the local coordinate system of this cylinder is right-handed.)#" )
        .def("Axis",
             (const gp_Ax1 & (gp_Cylinder::*)() const) static_cast<const gp_Ax1 & (gp_Cylinder::*)() const>(&gp_Cylinder::Axis),
             R"#(Returns the symmetry axis of the cylinder.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Cylinder::*)() const) static_cast<const gp_Pnt & (gp_Cylinder::*)() const>(&gp_Cylinder::Location),
             R"#(Returns the "Location" point of the cylinder.)#" )
        .def("Position",
             (const gp_Ax3 & (gp_Cylinder::*)() const) static_cast<const gp_Ax3 & (gp_Cylinder::*)() const>(&gp_Cylinder::Position),
             R"#(Returns the local coordinate system of the cylinder.)#" )
        .def("Radius",
             (Standard_Real (gp_Cylinder::*)() const) static_cast<Standard_Real (gp_Cylinder::*)() const>(&gp_Cylinder::Radius),
             R"#(Returns the radius of the cylinder.)#" )
        .def("XAxis",
             (gp_Ax1 (gp_Cylinder::*)() const) static_cast<gp_Ax1 (gp_Cylinder::*)() const>(&gp_Cylinder::XAxis),
             R"#(Returns the axis X of the cylinder.)#" )
        .def("YAxis",
             (gp_Ax1 (gp_Cylinder::*)() const) static_cast<gp_Ax1 (gp_Cylinder::*)() const>(&gp_Cylinder::YAxis),
             R"#(Returns the axis Y of the cylinder.)#" )
        .def("Rotate",
             (void (gp_Cylinder::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Cylinder::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Cylinder::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Cylinder (gp_Cylinder::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Cylinder (gp_Cylinder::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Cylinder::Rotated),
             R"#(Rotates a cylinder. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Cylinder::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Cylinder::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Cylinder::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Cylinder (gp_Cylinder::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Cylinder (gp_Cylinder::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Cylinder::Scaled),
             R"#(Scales a cylinder. S is the scaling value. The absolute value of S is used to scale the cylinder)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Cylinder::*)( const gp_Trsf & ) ) static_cast<void (gp_Cylinder::*)( const gp_Trsf & ) >(&gp_Cylinder::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Cylinder (gp_Cylinder::*)( const gp_Trsf & ) const) static_cast<gp_Cylinder (gp_Cylinder::*)( const gp_Trsf & ) const>(&gp_Cylinder::Transformed),
             R"#(Transforms a cylinder with the transformation T from class Trsf.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Cylinder::*)( const gp_Vec & ) ) static_cast<void (gp_Cylinder::*)( const gp_Vec & ) >(&gp_Cylinder::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Cylinder (gp_Cylinder::*)( const gp_Vec & ) const) static_cast<gp_Cylinder (gp_Cylinder::*)( const gp_Vec & ) const>(&gp_Cylinder::Translated),
             R"#(Translates a cylinder in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Cylinder::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Cylinder::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Cylinder::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Cylinder (gp_Cylinder::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Cylinder (gp_Cylinder::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Cylinder::Translated),
             R"#(Translates a cylinder from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
        .def("Coefficients",
             []( gp_Cylinder &self   ){ Standard_Real  A1; Standard_Real  A2; Standard_Real  A3; Standard_Real  B1; Standard_Real  B2; Standard_Real  B3; Standard_Real  C1; Standard_Real  C2; Standard_Real  C3; Standard_Real  D; self.Coefficients(A1,A2,A3,B1,B2,B3,C1,C2,C3,D); return std::make_tuple(A1,A2,A3,B1,B2,B3,C1,C2,C3,D); },
             R"#(Computes the coefficients of the implicit equation of the quadric in the absolute cartesian coordinate system : A1.X**2 + A2.Y**2 + A3.Z**2 + 2.(B1.X.Y + B2.X.Z + B3.Y.Z) + 2.(C1.X + C2.Y + C3.Z) + D = 0.0)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_Dir , shared_ptr<gp_Dir> >>(m.attr("gp_Dir"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Vec & >()  , py::arg("V") )
        .def(py::init< const gp_XYZ & >()  , py::arg("Coord") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Xv"),  py::arg("Yv"),  py::arg("Zv") )
    // custom constructors
    // methods
        .def("SetCoord",
             (void (gp_Dir::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_Dir::*)( const Standard_Integer , const Standard_Real ) >(&gp_Dir::SetCoord),
             R"#(For this unit vector, assigns the value Xi to: - the X coordinate if Index is 1, or - the Y coordinate if Index is 2, or - the Z coordinate if Index is 3, and then normalizes it. Warning Remember that all the coordinates of a unit vector are implicitly modified when any single one is changed directly. Exceptions Standard_OutOfRange if Index is not 1, 2, or 3. Standard_ConstructionError if either of the following is less than or equal to gp::Resolution(): - Sqrt(Xv*Xv + Yv*Yv + Zv*Zv), or - the modulus of the number triple formed by the new value Xi and the two other coordinates of this vector that were not directly modified.)#"  , py::arg("Index"),  py::arg("Xi"))
        .def("SetCoord",
             (void (gp_Dir::*)( const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (gp_Dir::*)( const Standard_Real , const Standard_Real , const Standard_Real ) >(&gp_Dir::SetCoord),
             R"#(For this unit vector, assigns the values Xv, Yv and Zv to its three coordinates. Remember that all the coordinates of a unit vector are implicitly modified when any single one is changed directly.)#"  , py::arg("Xv"),  py::arg("Yv"),  py::arg("Zv"))
        .def("SetX",
             (void (gp_Dir::*)( const Standard_Real ) ) static_cast<void (gp_Dir::*)( const Standard_Real ) >(&gp_Dir::SetX),
             R"#(Assigns the given value to the X coordinate of this unit vector.)#"  , py::arg("X"))
        .def("SetY",
             (void (gp_Dir::*)( const Standard_Real ) ) static_cast<void (gp_Dir::*)( const Standard_Real ) >(&gp_Dir::SetY),
             R"#(Assigns the given value to the Y coordinate of this unit vector.)#"  , py::arg("Y"))
        .def("SetZ",
             (void (gp_Dir::*)( const Standard_Real ) ) static_cast<void (gp_Dir::*)( const Standard_Real ) >(&gp_Dir::SetZ),
             R"#(Assigns the given value to the Z coordinate of this unit vector.)#"  , py::arg("Z"))
        .def("SetXYZ",
             (void (gp_Dir::*)( const gp_XYZ & ) ) static_cast<void (gp_Dir::*)( const gp_XYZ & ) >(&gp_Dir::SetXYZ),
             R"#(Assigns the three coordinates of Coord to this unit vector.)#"  , py::arg("Coord"))
        .def("Coord",
             (Standard_Real (gp_Dir::*)( const Standard_Integer ) const) static_cast<Standard_Real (gp_Dir::*)( const Standard_Integer ) const>(&gp_Dir::Coord),
             R"#(Returns the coordinate of range Index : Index = 1 => X is returned Index = 2 => Y is returned Index = 3 => Z is returned Exceptions Standard_OutOfRange if Index is not 1, 2, or 3.)#"  , py::arg("Index"))
        .def("X",
             (Standard_Real (gp_Dir::*)() const) static_cast<Standard_Real (gp_Dir::*)() const>(&gp_Dir::X),
             R"#(Returns the X coordinate for a unit vector.)#" )
        .def("Y",
             (Standard_Real (gp_Dir::*)() const) static_cast<Standard_Real (gp_Dir::*)() const>(&gp_Dir::Y),
             R"#(Returns the Y coordinate for a unit vector.)#" )
        .def("Z",
             (Standard_Real (gp_Dir::*)() const) static_cast<Standard_Real (gp_Dir::*)() const>(&gp_Dir::Z),
             R"#(Returns the Z coordinate for a unit vector.)#" )
        .def("XYZ",
             (const gp_XYZ & (gp_Dir::*)() const) static_cast<const gp_XYZ & (gp_Dir::*)() const>(&gp_Dir::XYZ),
             R"#(for this unit vector, returns its three coordinates as a number triplea.)#" )
        .def("IsEqual",
             (Standard_Boolean (gp_Dir::*)( const gp_Dir & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Dir::*)( const gp_Dir & , const Standard_Real ) const>(&gp_Dir::IsEqual),
             R"#(Returns True if the angle between the two directions is lower or equal to AngularTolerance.)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsNormal",
             (Standard_Boolean (gp_Dir::*)( const gp_Dir & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Dir::*)( const gp_Dir & , const Standard_Real ) const>(&gp_Dir::IsNormal),
             R"#(Returns True if the angle between this unit vector and the unit vector Other is equal to Pi/2 (normal).)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsOpposite",
             (Standard_Boolean (gp_Dir::*)( const gp_Dir & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Dir::*)( const gp_Dir & , const Standard_Real ) const>(&gp_Dir::IsOpposite),
             R"#(Returns True if the angle between this unit vector and the unit vector Other is equal to Pi (opposite).)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsParallel",
             (Standard_Boolean (gp_Dir::*)( const gp_Dir & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Dir::*)( const gp_Dir & , const Standard_Real ) const>(&gp_Dir::IsParallel),
             R"#(Returns true if the angle between this unit vector and the unit vector Other is equal to 0 or to Pi. Note: the tolerance criterion is given by AngularTolerance.)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("Angle",
             (Standard_Real (gp_Dir::*)( const gp_Dir & ) const) static_cast<Standard_Real (gp_Dir::*)( const gp_Dir & ) const>(&gp_Dir::Angle),
             R"#(Computes the angular value in radians between <me> and <Other>. This value is always positive in 3D space. Returns the angle in the range [0, PI])#"  , py::arg("Other"))
        .def("AngleWithRef",
             (Standard_Real (gp_Dir::*)( const gp_Dir & , const gp_Dir & ) const) static_cast<Standard_Real (gp_Dir::*)( const gp_Dir & , const gp_Dir & ) const>(&gp_Dir::AngleWithRef),
             R"#(Computes the angular value between <me> and <Other>. <VRef> is the direction of reference normal to <me> and <Other> and its orientation gives the positive sense of rotation. If the cross product <me> ^ <Other> has the same orientation as <VRef> the angular value is positive else negative. Returns the angular value in the range -PI and PI (in radians). Raises DomainError if <me> and <Other> are not parallel this exception is raised when <VRef> is in the same plane as <me> and <Other> The tolerance criterion is Resolution from package gp.)#"  , py::arg("Other"),  py::arg("VRef"))
        .def("Cross",
             (void (gp_Dir::*)( const gp_Dir & ) ) static_cast<void (gp_Dir::*)( const gp_Dir & ) >(&gp_Dir::Cross),
             R"#(Computes the cross product between two directions Raises the exception ConstructionError if the two directions are parallel because the computed vector cannot be normalized to create a direction.)#"  , py::arg("Right"))
        .def("Crossed",
             (gp_Dir (gp_Dir::*)( const gp_Dir & ) const) static_cast<gp_Dir (gp_Dir::*)( const gp_Dir & ) const>(&gp_Dir::Crossed),
             R"#(Computes the triple vector product. <me> ^ (V1 ^ V2) Raises the exception ConstructionError if V1 and V2 are parallel or <me> and (V1^V2) are parallel because the computed vector can't be normalized to create a direction.)#"  , py::arg("Right"))
        .def("CrossCross",
             (void (gp_Dir::*)( const gp_Dir & , const gp_Dir & ) ) static_cast<void (gp_Dir::*)( const gp_Dir & , const gp_Dir & ) >(&gp_Dir::CrossCross),
             R"#(None)#"  , py::arg("V1"),  py::arg("V2"))
        .def("CrossCrossed",
             (gp_Dir (gp_Dir::*)( const gp_Dir & , const gp_Dir & ) const) static_cast<gp_Dir (gp_Dir::*)( const gp_Dir & , const gp_Dir & ) const>(&gp_Dir::CrossCrossed),
             R"#(Computes the double vector product this ^ (V1 ^ V2). - CrossCrossed creates a new unit vector. Exceptions Standard_ConstructionError if: - V1 and V2 are parallel, or - this unit vector and (V1 ^ V2) are parallel. This is because, in these conditions, the computed vector is null and cannot be normalized.)#"  , py::arg("V1"),  py::arg("V2"))
        .def("Dot",
             (Standard_Real (gp_Dir::*)( const gp_Dir & ) const) static_cast<Standard_Real (gp_Dir::*)( const gp_Dir & ) const>(&gp_Dir::Dot),
             R"#(Computes the scalar product)#"  , py::arg("Other"))
        .def("DotCross",
             (Standard_Real (gp_Dir::*)( const gp_Dir & , const gp_Dir & ) const) static_cast<Standard_Real (gp_Dir::*)( const gp_Dir & , const gp_Dir & ) const>(&gp_Dir::DotCross),
             R"#(Computes the triple scalar product <me> * (V1 ^ V2). Warnings : The computed vector V1' = V1 ^ V2 is not normalized to create a unitary vector. So this method never raises an exception even if V1 and V2 are parallel.)#"  , py::arg("V1"),  py::arg("V2"))
        .def("Reverse",
             (void (gp_Dir::*)() ) static_cast<void (gp_Dir::*)() >(&gp_Dir::Reverse),
             R"#(None)#" )
        .def("Reversed",
             (gp_Dir (gp_Dir::*)() const) static_cast<gp_Dir (gp_Dir::*)() const>(&gp_Dir::Reversed),
             R"#(Reverses the orientation of a direction geometric transformations Performs the symmetrical transformation of a direction with respect to the direction V which is the center of the symmetry.])#" )
        .def("Mirror",
             (void (gp_Dir::*)( const gp_Dir & ) ) static_cast<void (gp_Dir::*)( const gp_Dir & ) >(&gp_Dir::Mirror),
             R"#(None)#"  , py::arg("V"))
        .def("Mirrored",
             (gp_Dir (gp_Dir::*)( const gp_Dir & ) const) static_cast<gp_Dir (gp_Dir::*)( const gp_Dir & ) const>(&gp_Dir::Mirrored),
             R"#(Performs the symmetrical transformation of a direction with respect to the direction V which is the center of the symmetry.)#"  , py::arg("V"))
        .def("Mirror",
             (void (gp_Dir::*)( const gp_Ax1 & ) ) static_cast<void (gp_Dir::*)( const gp_Ax1 & ) >(&gp_Dir::Mirror),
             R"#(None)#"  , py::arg("A1"))
        .def("Mirrored",
             (gp_Dir (gp_Dir::*)( const gp_Ax1 & ) const) static_cast<gp_Dir (gp_Dir::*)( const gp_Ax1 & ) const>(&gp_Dir::Mirrored),
             R"#(Performs the symmetrical transformation of a direction with respect to an axis placement which is the axis of the symmetry.)#"  , py::arg("A1"))
        .def("Mirror",
             (void (gp_Dir::*)( const gp_Ax2 & ) ) static_cast<void (gp_Dir::*)( const gp_Ax2 & ) >(&gp_Dir::Mirror),
             R"#(None)#"  , py::arg("A2"))
        .def("Mirrored",
             (gp_Dir (gp_Dir::*)( const gp_Ax2 & ) const) static_cast<gp_Dir (gp_Dir::*)( const gp_Ax2 & ) const>(&gp_Dir::Mirrored),
             R"#(Performs the symmetrical transformation of a direction with respect to a plane. The axis placement A2 locates the plane of the symmetry : (Location, XDirection, YDirection).)#"  , py::arg("A2"))
        .def("Rotate",
             (void (gp_Dir::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Dir::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Dir::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Dir (gp_Dir::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Dir (gp_Dir::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Dir::Rotated),
             R"#(Rotates a direction. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Transform",
             (void (gp_Dir::*)( const gp_Trsf & ) ) static_cast<void (gp_Dir::*)( const gp_Trsf & ) >(&gp_Dir::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Dir (gp_Dir::*)( const gp_Trsf & ) const) static_cast<gp_Dir (gp_Dir::*)( const gp_Trsf & ) const>(&gp_Dir::Transformed),
             R"#(Transforms a direction with a "Trsf" from gp. Warnings : If the scale factor of the "Trsf" T is negative then the direction <me> is reversed.)#"  , py::arg("T"))
        .def("SetCoord",
             (void (gp_Dir::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_Dir::*)( const Standard_Integer , const Standard_Real ) >(&gp_Dir::SetCoord),
             R"#(For this unit vector, assigns the value Xi to: - the X coordinate if Index is 1, or - the Y coordinate if Index is 2, or - the Z coordinate if Index is 3, and then normalizes it. Warning Remember that all the coordinates of a unit vector are implicitly modified when any single one is changed directly. Exceptions Standard_OutOfRange if Index is not 1, 2, or 3. Standard_ConstructionError if either of the following is less than or equal to gp::Resolution(): - Sqrt(Xv*Xv + Yv*Yv + Zv*Zv), or - the modulus of the number triple formed by the new value Xi and the two other coordinates of this vector that were not directly modified.)#"  , py::arg("Index"),  py::arg("Xi"))
        .def("SetCoord",
             (void (gp_Dir::*)( const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (gp_Dir::*)( const Standard_Real , const Standard_Real , const Standard_Real ) >(&gp_Dir::SetCoord),
             R"#(For this unit vector, assigns the values Xv, Yv and Zv to its three coordinates. Remember that all the coordinates of a unit vector are implicitly modified when any single one is changed directly.)#"  , py::arg("Xv"),  py::arg("Yv"),  py::arg("Zv"))
        .def("SetX",
             (void (gp_Dir::*)( const Standard_Real ) ) static_cast<void (gp_Dir::*)( const Standard_Real ) >(&gp_Dir::SetX),
             R"#(Assigns the given value to the X coordinate of this unit vector.)#"  , py::arg("X"))
        .def("SetY",
             (void (gp_Dir::*)( const Standard_Real ) ) static_cast<void (gp_Dir::*)( const Standard_Real ) >(&gp_Dir::SetY),
             R"#(Assigns the given value to the Y coordinate of this unit vector.)#"  , py::arg("Y"))
        .def("SetZ",
             (void (gp_Dir::*)( const Standard_Real ) ) static_cast<void (gp_Dir::*)( const Standard_Real ) >(&gp_Dir::SetZ),
             R"#(Assigns the given value to the Z coordinate of this unit vector.)#"  , py::arg("Z"))
        .def("SetXYZ",
             (void (gp_Dir::*)( const gp_XYZ & ) ) static_cast<void (gp_Dir::*)( const gp_XYZ & ) >(&gp_Dir::SetXYZ),
             R"#(Assigns the three coordinates of Coord to this unit vector.)#"  , py::arg("XYZ"))
        .def("Coord",
             (Standard_Real (gp_Dir::*)( const Standard_Integer ) const) static_cast<Standard_Real (gp_Dir::*)( const Standard_Integer ) const>(&gp_Dir::Coord),
             R"#(Returns the coordinate of range Index : Index = 1 => X is returned Index = 2 => Y is returned Index = 3 => Z is returned Exceptions Standard_OutOfRange if Index is not 1, 2, or 3.)#"  , py::arg("Index"))
        .def("X",
             (Standard_Real (gp_Dir::*)() const) static_cast<Standard_Real (gp_Dir::*)() const>(&gp_Dir::X),
             R"#(Returns the X coordinate for a unit vector.)#" )
        .def("Y",
             (Standard_Real (gp_Dir::*)() const) static_cast<Standard_Real (gp_Dir::*)() const>(&gp_Dir::Y),
             R"#(Returns the Y coordinate for a unit vector.)#" )
        .def("Z",
             (Standard_Real (gp_Dir::*)() const) static_cast<Standard_Real (gp_Dir::*)() const>(&gp_Dir::Z),
             R"#(Returns the Z coordinate for a unit vector.)#" )
        .def("XYZ",
             (const gp_XYZ & (gp_Dir::*)() const) static_cast<const gp_XYZ & (gp_Dir::*)() const>(&gp_Dir::XYZ),
             R"#(for this unit vector, returns its three coordinates as a number triplea.)#" )
        .def("IsEqual",
             (Standard_Boolean (gp_Dir::*)( const gp_Dir & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Dir::*)( const gp_Dir & , const Standard_Real ) const>(&gp_Dir::IsEqual),
             R"#(Returns True if the angle between the two directions is lower or equal to AngularTolerance.)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsNormal",
             (Standard_Boolean (gp_Dir::*)( const gp_Dir & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Dir::*)( const gp_Dir & , const Standard_Real ) const>(&gp_Dir::IsNormal),
             R"#(Returns True if the angle between this unit vector and the unit vector Other is equal to Pi/2 (normal).)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsOpposite",
             (Standard_Boolean (gp_Dir::*)( const gp_Dir & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Dir::*)( const gp_Dir & , const Standard_Real ) const>(&gp_Dir::IsOpposite),
             R"#(Returns True if the angle between this unit vector and the unit vector Other is equal to Pi (opposite).)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsParallel",
             (Standard_Boolean (gp_Dir::*)( const gp_Dir & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Dir::*)( const gp_Dir & , const Standard_Real ) const>(&gp_Dir::IsParallel),
             R"#(Returns true if the angle between this unit vector and the unit vector Other is equal to 0 or to Pi. Note: the tolerance criterion is given by AngularTolerance.)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("Cross",
             (void (gp_Dir::*)( const gp_Dir & ) ) static_cast<void (gp_Dir::*)( const gp_Dir & ) >(&gp_Dir::Cross),
             R"#(Computes the cross product between two directions Raises the exception ConstructionError if the two directions are parallel because the computed vector cannot be normalized to create a direction.)#"  , py::arg("Right"))
        .def("Crossed",
             (gp_Dir (gp_Dir::*)( const gp_Dir & ) const) static_cast<gp_Dir (gp_Dir::*)( const gp_Dir & ) const>(&gp_Dir::Crossed),
             R"#(Computes the triple vector product. <me> ^ (V1 ^ V2) Raises the exception ConstructionError if V1 and V2 are parallel or <me> and (V1^V2) are parallel because the computed vector can't be normalized to create a direction.)#"  , py::arg("Right"))
        .def("CrossCross",
             (void (gp_Dir::*)( const gp_Dir & , const gp_Dir & ) ) static_cast<void (gp_Dir::*)( const gp_Dir & , const gp_Dir & ) >(&gp_Dir::CrossCross),
             R"#(None)#"  , py::arg("V1"),  py::arg("V2"))
        .def("CrossCrossed",
             (gp_Dir (gp_Dir::*)( const gp_Dir & , const gp_Dir & ) const) static_cast<gp_Dir (gp_Dir::*)( const gp_Dir & , const gp_Dir & ) const>(&gp_Dir::CrossCrossed),
             R"#(Computes the double vector product this ^ (V1 ^ V2). - CrossCrossed creates a new unit vector. Exceptions Standard_ConstructionError if: - V1 and V2 are parallel, or - this unit vector and (V1 ^ V2) are parallel. This is because, in these conditions, the computed vector is null and cannot be normalized.)#"  , py::arg("V1"),  py::arg("V2"))
        .def("Dot",
             (Standard_Real (gp_Dir::*)( const gp_Dir & ) const) static_cast<Standard_Real (gp_Dir::*)( const gp_Dir & ) const>(&gp_Dir::Dot),
             R"#(Computes the scalar product)#"  , py::arg("Other"))
        .def("DotCross",
             (Standard_Real (gp_Dir::*)( const gp_Dir & , const gp_Dir & ) const) static_cast<Standard_Real (gp_Dir::*)( const gp_Dir & , const gp_Dir & ) const>(&gp_Dir::DotCross),
             R"#(Computes the triple scalar product <me> * (V1 ^ V2). Warnings : The computed vector V1' = V1 ^ V2 is not normalized to create a unitary vector. So this method never raises an exception even if V1 and V2 are parallel.)#"  , py::arg("V1"),  py::arg("V2"))
        .def("Reverse",
             (void (gp_Dir::*)() ) static_cast<void (gp_Dir::*)() >(&gp_Dir::Reverse),
             R"#(None)#" )
        .def("Reversed",
             (gp_Dir (gp_Dir::*)() const) static_cast<gp_Dir (gp_Dir::*)() const>(&gp_Dir::Reversed),
             R"#(Reverses the orientation of a direction geometric transformations Performs the symmetrical transformation of a direction with respect to the direction V which is the center of the symmetry.])#" )
        .def("Rotate",
             (void (gp_Dir::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Dir::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Dir::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Dir (gp_Dir::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Dir (gp_Dir::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Dir::Rotated),
             R"#(Rotates a direction. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Transformed",
             (gp_Dir (gp_Dir::*)( const gp_Trsf & ) const) static_cast<gp_Dir (gp_Dir::*)( const gp_Trsf & ) const>(&gp_Dir::Transformed),
             R"#(Transforms a direction with a "Trsf" from gp. Warnings : If the scale factor of the "Trsf" T is negative then the direction <me> is reversed.)#"  , py::arg("T"))
    // methods using call by reference i.s.o. return
        .def("Coord",
             []( gp_Dir &self   ){ Standard_Real  Xv; Standard_Real  Yv; Standard_Real  Zv; self.Coord(Xv,Yv,Zv); return std::make_tuple(Xv,Yv,Zv); },
             R"#(Returns for the unit vector its three coordinates Xv, Yv, and Zv.)#" )
        .def("Coord",
             []( gp_Dir &self   ){ Standard_Real  Xv; Standard_Real  Yv; Standard_Real  Zv; self.Coord(Xv,Yv,Zv); return std::make_tuple(Xv,Yv,Zv); },
             R"#(Returns for the unit vector its three coordinates Xv, Yv, and Zv.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
        .def("__ipow__",
             (void (gp_Dir::*)( const gp_Dir & ) ) static_cast<void (gp_Dir::*)( const gp_Dir & ) >(&gp_Dir::operator^=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__pow__",
             (gp_Dir (gp_Dir::*)( const gp_Dir & ) const) static_cast<gp_Dir (gp_Dir::*)( const gp_Dir & ) const>(&gp_Dir::operator^),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__mul__",
             (Standard_Real (gp_Dir::*)( const gp_Dir & ) const) static_cast<Standard_Real (gp_Dir::*)( const gp_Dir & ) const>(&gp_Dir::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__rmul__",
             (Standard_Real (gp_Dir::*)( const gp_Dir & ) const) static_cast<Standard_Real (gp_Dir::*)( const gp_Dir & ) const>(&gp_Dir::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__sub__",
             (gp_Dir (gp_Dir::*)() const) static_cast<gp_Dir (gp_Dir::*)() const>(&gp_Dir::operator-),
             py::is_operator(),
             R"#(None)#" )
    // additional methods and static methods
;


    static_cast<py::class_<gp_Dir2d , shared_ptr<gp_Dir2d> >>(m.attr("gp_Dir2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Vec2d & >()  , py::arg("V") )
        .def(py::init< const gp_XY & >()  , py::arg("Coord") )
        .def(py::init< const Standard_Real,const Standard_Real >()  , py::arg("Xv"),  py::arg("Yv") )
    // custom constructors
    // methods
        .def("SetCoord",
             (void (gp_Dir2d::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_Dir2d::*)( const Standard_Integer , const Standard_Real ) >(&gp_Dir2d::SetCoord),
             R"#(For this unit vector, assigns: the value Xi to: - the X coordinate if Index is 1, or - the Y coordinate if Index is 2, and then normalizes it. Warning Remember that all the coordinates of a unit vector are implicitly modified when any single one is changed directly. Exceptions Standard_OutOfRange if Index is not 1 or 2. Standard_ConstructionError if either of the following is less than or equal to gp::Resolution(): - Sqrt(Xv*Xv + Yv*Yv), or - the modulus of the number pair formed by the new value Xi and the other coordinate of this vector that was not directly modified. Raises OutOfRange if Index != {1, 2}.)#"  , py::arg("Index"),  py::arg("Xi"))
        .def("SetCoord",
             (void (gp_Dir2d::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (gp_Dir2d::*)( const Standard_Real , const Standard_Real ) >(&gp_Dir2d::SetCoord),
             R"#(For this unit vector, assigns: - the values Xv and Yv to its two coordinates, Warning Remember that all the coordinates of a unit vector are implicitly modified when any single one is changed directly. Exceptions Standard_OutOfRange if Index is not 1 or 2. Standard_ConstructionError if either of the following is less than or equal to gp::Resolution(): - Sqrt(Xv*Xv + Yv*Yv), or - the modulus of the number pair formed by the new value Xi and the other coordinate of this vector that was not directly modified. Raises OutOfRange if Index != {1, 2}.)#"  , py::arg("Xv"),  py::arg("Yv"))
        .def("SetX",
             (void (gp_Dir2d::*)( const Standard_Real ) ) static_cast<void (gp_Dir2d::*)( const Standard_Real ) >(&gp_Dir2d::SetX),
             R"#(Assigns the given value to the X coordinate of this unit vector, and then normalizes it. Warning Remember that all the coordinates of a unit vector are implicitly modified when any single one is changed directly. Exceptions Standard_ConstructionError if either of the following is less than or equal to gp::Resolution(): - the modulus of Coord, or - the modulus of the number pair formed from the new X or Y coordinate and the other coordinate of this vector that was not directly modified.)#"  , py::arg("X"))
        .def("SetY",
             (void (gp_Dir2d::*)( const Standard_Real ) ) static_cast<void (gp_Dir2d::*)( const Standard_Real ) >(&gp_Dir2d::SetY),
             R"#(Assigns the given value to the Y coordinate of this unit vector, and then normalizes it. Warning Remember that all the coordinates of a unit vector are implicitly modified when any single one is changed directly. Exceptions Standard_ConstructionError if either of the following is less than or equal to gp::Resolution(): - the modulus of Coord, or - the modulus of the number pair formed from the new X or Y coordinate and the other coordinate of this vector that was not directly modified.)#"  , py::arg("Y"))
        .def("SetXY",
             (void (gp_Dir2d::*)( const gp_XY & ) ) static_cast<void (gp_Dir2d::*)( const gp_XY & ) >(&gp_Dir2d::SetXY),
             R"#(Assigns: - the two coordinates of Coord to this unit vector, and then normalizes it. Warning Remember that all the coordinates of a unit vector are implicitly modified when any single one is changed directly. Exceptions Standard_ConstructionError if either of the following is less than or equal to gp::Resolution(): - the modulus of Coord, or - the modulus of the number pair formed from the new X or Y coordinate and the other coordinate of this vector that was not directly modified.)#"  , py::arg("Coord"))
        .def("Coord",
             (Standard_Real (gp_Dir2d::*)( const Standard_Integer ) const) static_cast<Standard_Real (gp_Dir2d::*)( const Standard_Integer ) const>(&gp_Dir2d::Coord),
             R"#(For this unit vector returns the coordinate of range Index : Index = 1 => X is returned Index = 2 => Y is returned Raises OutOfRange if Index != {1, 2}.)#"  , py::arg("Index"))
        .def("X",
             (Standard_Real (gp_Dir2d::*)() const) static_cast<Standard_Real (gp_Dir2d::*)() const>(&gp_Dir2d::X),
             R"#(For this unit vector, returns its X coordinate.)#" )
        .def("Y",
             (Standard_Real (gp_Dir2d::*)() const) static_cast<Standard_Real (gp_Dir2d::*)() const>(&gp_Dir2d::Y),
             R"#(For this unit vector, returns its Y coordinate.)#" )
        .def("XY",
             (const gp_XY & (gp_Dir2d::*)() const) static_cast<const gp_XY & (gp_Dir2d::*)() const>(&gp_Dir2d::XY),
             R"#(For this unit vector, returns its two coordinates as a number pair. Comparison between Directions The precision value is an input data.)#" )
        .def("IsEqual",
             (Standard_Boolean (gp_Dir2d::*)( const gp_Dir2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Dir2d::*)( const gp_Dir2d & , const Standard_Real ) const>(&gp_Dir2d::IsEqual),
             R"#(Returns True if the two vectors have the same direction i.e. the angle between this unit vector and the unit vector Other is less than or equal to AngularTolerance.)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsNormal",
             (Standard_Boolean (gp_Dir2d::*)( const gp_Dir2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Dir2d::*)( const gp_Dir2d & , const Standard_Real ) const>(&gp_Dir2d::IsNormal),
             R"#(Returns True if the angle between this unit vector and the unit vector Other is equal to Pi/2 or -Pi/2 (normal) i.e. Abs(Abs(<me>.Angle(Other)) - PI/2.) <= AngularTolerance)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsOpposite",
             (Standard_Boolean (gp_Dir2d::*)( const gp_Dir2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Dir2d::*)( const gp_Dir2d & , const Standard_Real ) const>(&gp_Dir2d::IsOpposite),
             R"#(Returns True if the angle between this unit vector and the unit vector Other is equal to Pi or -Pi (opposite). i.e. PI - Abs(<me>.Angle(Other)) <= AngularTolerance)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsParallel",
             (Standard_Boolean (gp_Dir2d::*)( const gp_Dir2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Dir2d::*)( const gp_Dir2d & , const Standard_Real ) const>(&gp_Dir2d::IsParallel),
             R"#(returns true if if the angle between this unit vector and unit vector Other is equal to 0, Pi or -Pi. i.e. Abs(Angle(<me>, Other)) <= AngularTolerance or PI - Abs(Angle(<me>, Other)) <= AngularTolerance)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("Angle",
             (Standard_Real (gp_Dir2d::*)( const gp_Dir2d & ) const) static_cast<Standard_Real (gp_Dir2d::*)( const gp_Dir2d & ) const>(&gp_Dir2d::Angle),
             R"#(Computes the angular value in radians between <me> and <Other>. Returns the angle in the range [-PI, PI].)#"  , py::arg("Other"))
        .def("Crossed",
             (Standard_Real (gp_Dir2d::*)( const gp_Dir2d & ) const) static_cast<Standard_Real (gp_Dir2d::*)( const gp_Dir2d & ) const>(&gp_Dir2d::Crossed),
             R"#(Computes the cross product between two directions.)#"  , py::arg("Right"))
        .def("Dot",
             (Standard_Real (gp_Dir2d::*)( const gp_Dir2d & ) const) static_cast<Standard_Real (gp_Dir2d::*)( const gp_Dir2d & ) const>(&gp_Dir2d::Dot),
             R"#(Computes the scalar product)#"  , py::arg("Other"))
        .def("Reverse",
             (void (gp_Dir2d::*)() ) static_cast<void (gp_Dir2d::*)() >(&gp_Dir2d::Reverse),
             R"#(None)#" )
        .def("Reversed",
             (gp_Dir2d (gp_Dir2d::*)() const) static_cast<gp_Dir2d (gp_Dir2d::*)() const>(&gp_Dir2d::Reversed),
             R"#(Reverses the orientation of a direction)#" )
        .def("Mirror",
             (void (gp_Dir2d::*)( const gp_Dir2d & ) ) static_cast<void (gp_Dir2d::*)( const gp_Dir2d & ) >(&gp_Dir2d::Mirror),
             R"#(None)#"  , py::arg("V"))
        .def("Mirrored",
             (gp_Dir2d (gp_Dir2d::*)( const gp_Dir2d & ) const) static_cast<gp_Dir2d (gp_Dir2d::*)( const gp_Dir2d & ) const>(&gp_Dir2d::Mirrored),
             R"#(Performs the symmetrical transformation of a direction with respect to the direction V which is the center of the symmetry.)#"  , py::arg("V"))
        .def("Mirror",
             (void (gp_Dir2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Dir2d::*)( const gp_Ax2d & ) >(&gp_Dir2d::Mirror),
             R"#(None)#"  , py::arg("A"))
        .def("Mirrored",
             (gp_Dir2d (gp_Dir2d::*)( const gp_Ax2d & ) const) static_cast<gp_Dir2d (gp_Dir2d::*)( const gp_Ax2d & ) const>(&gp_Dir2d::Mirrored),
             R"#(Performs the symmetrical transformation of a direction with respect to an axis placement which is the axis of the symmetry.)#"  , py::arg("A"))
        .def("Rotate",
             (void (gp_Dir2d::*)( const Standard_Real ) ) static_cast<void (gp_Dir2d::*)( const Standard_Real ) >(&gp_Dir2d::Rotate),
             R"#(None)#"  , py::arg("Ang"))
        .def("Rotated",
             (gp_Dir2d (gp_Dir2d::*)( const Standard_Real ) const) static_cast<gp_Dir2d (gp_Dir2d::*)( const Standard_Real ) const>(&gp_Dir2d::Rotated),
             R"#(Rotates a direction. Ang is the angular value of the rotation in radians.)#"  , py::arg("Ang"))
        .def("Transform",
             (void (gp_Dir2d::*)( const gp_Trsf2d & ) ) static_cast<void (gp_Dir2d::*)( const gp_Trsf2d & ) >(&gp_Dir2d::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Dir2d (gp_Dir2d::*)( const gp_Trsf2d & ) const) static_cast<gp_Dir2d (gp_Dir2d::*)( const gp_Trsf2d & ) const>(&gp_Dir2d::Transformed),
             R"#(Transforms a direction with the "Trsf" T. Warnings : If the scale factor of the "Trsf" T is negative then the direction <me> is reversed.)#"  , py::arg("T"))
        .def("SetCoord",
             (void (gp_Dir2d::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_Dir2d::*)( const Standard_Integer , const Standard_Real ) >(&gp_Dir2d::SetCoord),
             R"#(For this unit vector, assigns: the value Xi to: - the X coordinate if Index is 1, or - the Y coordinate if Index is 2, and then normalizes it. Warning Remember that all the coordinates of a unit vector are implicitly modified when any single one is changed directly. Exceptions Standard_OutOfRange if Index is not 1 or 2. Standard_ConstructionError if either of the following is less than or equal to gp::Resolution(): - Sqrt(Xv*Xv + Yv*Yv), or - the modulus of the number pair formed by the new value Xi and the other coordinate of this vector that was not directly modified. Raises OutOfRange if Index != {1, 2}.)#"  , py::arg("Index"),  py::arg("Xi"))
        .def("SetCoord",
             (void (gp_Dir2d::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (gp_Dir2d::*)( const Standard_Real , const Standard_Real ) >(&gp_Dir2d::SetCoord),
             R"#(For this unit vector, assigns: - the values Xv and Yv to its two coordinates, Warning Remember that all the coordinates of a unit vector are implicitly modified when any single one is changed directly. Exceptions Standard_OutOfRange if Index is not 1 or 2. Standard_ConstructionError if either of the following is less than or equal to gp::Resolution(): - Sqrt(Xv*Xv + Yv*Yv), or - the modulus of the number pair formed by the new value Xi and the other coordinate of this vector that was not directly modified. Raises OutOfRange if Index != {1, 2}.)#"  , py::arg("Xv"),  py::arg("Yv"))
        .def("SetX",
             (void (gp_Dir2d::*)( const Standard_Real ) ) static_cast<void (gp_Dir2d::*)( const Standard_Real ) >(&gp_Dir2d::SetX),
             R"#(Assigns the given value to the X coordinate of this unit vector, and then normalizes it. Warning Remember that all the coordinates of a unit vector are implicitly modified when any single one is changed directly. Exceptions Standard_ConstructionError if either of the following is less than or equal to gp::Resolution(): - the modulus of Coord, or - the modulus of the number pair formed from the new X or Y coordinate and the other coordinate of this vector that was not directly modified.)#"  , py::arg("X"))
        .def("SetY",
             (void (gp_Dir2d::*)( const Standard_Real ) ) static_cast<void (gp_Dir2d::*)( const Standard_Real ) >(&gp_Dir2d::SetY),
             R"#(Assigns the given value to the Y coordinate of this unit vector, and then normalizes it. Warning Remember that all the coordinates of a unit vector are implicitly modified when any single one is changed directly. Exceptions Standard_ConstructionError if either of the following is less than or equal to gp::Resolution(): - the modulus of Coord, or - the modulus of the number pair formed from the new X or Y coordinate and the other coordinate of this vector that was not directly modified.)#"  , py::arg("Y"))
        .def("SetXY",
             (void (gp_Dir2d::*)( const gp_XY & ) ) static_cast<void (gp_Dir2d::*)( const gp_XY & ) >(&gp_Dir2d::SetXY),
             R"#(Assigns: - the two coordinates of Coord to this unit vector, and then normalizes it. Warning Remember that all the coordinates of a unit vector are implicitly modified when any single one is changed directly. Exceptions Standard_ConstructionError if either of the following is less than or equal to gp::Resolution(): - the modulus of Coord, or - the modulus of the number pair formed from the new X or Y coordinate and the other coordinate of this vector that was not directly modified.)#"  , py::arg("XY"))
        .def("Coord",
             (Standard_Real (gp_Dir2d::*)( const Standard_Integer ) const) static_cast<Standard_Real (gp_Dir2d::*)( const Standard_Integer ) const>(&gp_Dir2d::Coord),
             R"#(For this unit vector returns the coordinate of range Index : Index = 1 => X is returned Index = 2 => Y is returned Raises OutOfRange if Index != {1, 2}.)#"  , py::arg("Index"))
        .def("X",
             (Standard_Real (gp_Dir2d::*)() const) static_cast<Standard_Real (gp_Dir2d::*)() const>(&gp_Dir2d::X),
             R"#(For this unit vector, returns its X coordinate.)#" )
        .def("Y",
             (Standard_Real (gp_Dir2d::*)() const) static_cast<Standard_Real (gp_Dir2d::*)() const>(&gp_Dir2d::Y),
             R"#(For this unit vector, returns its Y coordinate.)#" )
        .def("XY",
             (const gp_XY & (gp_Dir2d::*)() const) static_cast<const gp_XY & (gp_Dir2d::*)() const>(&gp_Dir2d::XY),
             R"#(For this unit vector, returns its two coordinates as a number pair. Comparison between Directions The precision value is an input data.)#" )
        .def("IsEqual",
             (Standard_Boolean (gp_Dir2d::*)( const gp_Dir2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Dir2d::*)( const gp_Dir2d & , const Standard_Real ) const>(&gp_Dir2d::IsEqual),
             R"#(Returns True if the two vectors have the same direction i.e. the angle between this unit vector and the unit vector Other is less than or equal to AngularTolerance.)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsNormal",
             (Standard_Boolean (gp_Dir2d::*)( const gp_Dir2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Dir2d::*)( const gp_Dir2d & , const Standard_Real ) const>(&gp_Dir2d::IsNormal),
             R"#(Returns True if the angle between this unit vector and the unit vector Other is equal to Pi/2 or -Pi/2 (normal) i.e. Abs(Abs(<me>.Angle(Other)) - PI/2.) <= AngularTolerance)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsOpposite",
             (Standard_Boolean (gp_Dir2d::*)( const gp_Dir2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Dir2d::*)( const gp_Dir2d & , const Standard_Real ) const>(&gp_Dir2d::IsOpposite),
             R"#(Returns True if the angle between this unit vector and the unit vector Other is equal to Pi or -Pi (opposite). i.e. PI - Abs(<me>.Angle(Other)) <= AngularTolerance)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsParallel",
             (Standard_Boolean (gp_Dir2d::*)( const gp_Dir2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Dir2d::*)( const gp_Dir2d & , const Standard_Real ) const>(&gp_Dir2d::IsParallel),
             R"#(returns true if if the angle between this unit vector and unit vector Other is equal to 0, Pi or -Pi. i.e. Abs(Angle(<me>, Other)) <= AngularTolerance or PI - Abs(Angle(<me>, Other)) <= AngularTolerance)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("Crossed",
             (Standard_Real (gp_Dir2d::*)( const gp_Dir2d & ) const) static_cast<Standard_Real (gp_Dir2d::*)( const gp_Dir2d & ) const>(&gp_Dir2d::Crossed),
             R"#(Computes the cross product between two directions.)#"  , py::arg("Right"))
        .def("Dot",
             (Standard_Real (gp_Dir2d::*)( const gp_Dir2d & ) const) static_cast<Standard_Real (gp_Dir2d::*)( const gp_Dir2d & ) const>(&gp_Dir2d::Dot),
             R"#(Computes the scalar product)#"  , py::arg("Other"))
        .def("Reverse",
             (void (gp_Dir2d::*)() ) static_cast<void (gp_Dir2d::*)() >(&gp_Dir2d::Reverse),
             R"#(None)#" )
        .def("Reversed",
             (gp_Dir2d (gp_Dir2d::*)() const) static_cast<gp_Dir2d (gp_Dir2d::*)() const>(&gp_Dir2d::Reversed),
             R"#(Reverses the orientation of a direction)#" )
        .def("Rotate",
             (void (gp_Dir2d::*)( const Standard_Real ) ) static_cast<void (gp_Dir2d::*)( const Standard_Real ) >(&gp_Dir2d::Rotate),
             R"#(None)#"  , py::arg("Ang"))
        .def("Rotated",
             (gp_Dir2d (gp_Dir2d::*)( const Standard_Real ) const) static_cast<gp_Dir2d (gp_Dir2d::*)( const Standard_Real ) const>(&gp_Dir2d::Rotated),
             R"#(Rotates a direction. Ang is the angular value of the rotation in radians.)#"  , py::arg("Ang"))
        .def("Transformed",
             (gp_Dir2d (gp_Dir2d::*)( const gp_Trsf2d & ) const) static_cast<gp_Dir2d (gp_Dir2d::*)( const gp_Trsf2d & ) const>(&gp_Dir2d::Transformed),
             R"#(Transforms a direction with the "Trsf" T. Warnings : If the scale factor of the "Trsf" T is negative then the direction <me> is reversed.)#"  , py::arg("T"))
    // methods using call by reference i.s.o. return
        .def("Coord",
             []( gp_Dir2d &self   ){ Standard_Real  Xv; Standard_Real  Yv; self.Coord(Xv,Yv); return std::make_tuple(Xv,Yv); },
             R"#(For this unit vector returns its two coordinates Xv and Yv. Raises OutOfRange if Index != {1, 2}.)#" )
        .def("Coord",
             []( gp_Dir2d &self   ){ Standard_Real  Xv; Standard_Real  Yv; self.Coord(Xv,Yv); return std::make_tuple(Xv,Yv); },
             R"#(For this unit vector returns its two coordinates Xv and Yv. Raises OutOfRange if Index != {1, 2}.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
        .def("__pow__",
             (Standard_Real (gp_Dir2d::*)( const gp_Dir2d & ) const) static_cast<Standard_Real (gp_Dir2d::*)( const gp_Dir2d & ) const>(&gp_Dir2d::operator^),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__mul__",
             (Standard_Real (gp_Dir2d::*)( const gp_Dir2d & ) const) static_cast<Standard_Real (gp_Dir2d::*)( const gp_Dir2d & ) const>(&gp_Dir2d::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__rmul__",
             (Standard_Real (gp_Dir2d::*)( const gp_Dir2d & ) const) static_cast<Standard_Real (gp_Dir2d::*)( const gp_Dir2d & ) const>(&gp_Dir2d::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__sub__",
             (gp_Dir2d (gp_Dir2d::*)() const) static_cast<gp_Dir2d (gp_Dir2d::*)() const>(&gp_Dir2d::operator-),
             py::is_operator(),
             R"#(None)#" )
    // additional methods and static methods
;


    static_cast<py::class_<gp_Elips , shared_ptr<gp_Elips> >>(m.attr("gp_Elips"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real >()  , py::arg("A2"),  py::arg("MajorRadius"),  py::arg("MinorRadius") )
    // custom constructors
    // methods
        .def("SetAxis",
             (void (gp_Elips::*)( const gp_Ax1 & ) ) static_cast<void (gp_Elips::*)( const gp_Ax1 & ) >(&gp_Elips::SetAxis),
             R"#(Changes the axis normal to the plane of the ellipse. It modifies the definition of this plane. The "XAxis" and the "YAxis" are recomputed. The local coordinate system is redefined so that: - its origin and "main Direction" become those of the axis A1 (the "X Direction" and "Y Direction" are then recomputed in the same way as for any gp_Ax2), or Raises ConstructionError if the direction of A1 is parallel to the direction of the "XAxis" of the ellipse.)#"  , py::arg("A1"))
        .def("SetLocation",
             (void (gp_Elips::*)( const gp_Pnt & ) ) static_cast<void (gp_Elips::*)( const gp_Pnt & ) >(&gp_Elips::SetLocation),
             R"#(Modifies this ellipse, by redefining its local coordinate so that its origin becomes P.)#"  , py::arg("P"))
        .def("SetMajorRadius",
             (void (gp_Elips::*)( const Standard_Real ) ) static_cast<void (gp_Elips::*)( const Standard_Real ) >(&gp_Elips::SetMajorRadius),
             R"#(The major radius of the ellipse is on the "XAxis" (major axis) of the ellipse. Raises ConstructionError if MajorRadius < MinorRadius.)#"  , py::arg("MajorRadius"))
        .def("SetMinorRadius",
             (void (gp_Elips::*)( const Standard_Real ) ) static_cast<void (gp_Elips::*)( const Standard_Real ) >(&gp_Elips::SetMinorRadius),
             R"#(The minor radius of the ellipse is on the "YAxis" (minor axis) of the ellipse. Raises ConstructionError if MinorRadius > MajorRadius or MinorRadius < 0.)#"  , py::arg("MinorRadius"))
        .def("SetPosition",
             (void (gp_Elips::*)( const gp_Ax2 & ) ) static_cast<void (gp_Elips::*)( const gp_Ax2 & ) >(&gp_Elips::SetPosition),
             R"#(Modifies this ellipse, by redefining its local coordinate so that it becomes A2e.)#"  , py::arg("A2"))
        .def("Area",
             (Standard_Real (gp_Elips::*)() const) static_cast<Standard_Real (gp_Elips::*)() const>(&gp_Elips::Area),
             R"#(Computes the area of the Ellipse.)#" )
        .def("Axis",
             (const gp_Ax1 & (gp_Elips::*)() const) static_cast<const gp_Ax1 & (gp_Elips::*)() const>(&gp_Elips::Axis),
             R"#(Computes the axis normal to the plane of the ellipse.)#" )
        .def("Directrix1",
             (gp_Ax1 (gp_Elips::*)() const) static_cast<gp_Ax1 (gp_Elips::*)() const>(&gp_Elips::Directrix1),
             R"#(Computes the first or second directrix of this ellipse. These are the lines, in the plane of the ellipse, normal to the major axis, at a distance equal to MajorRadius/e from the center of the ellipse, where e is the eccentricity of the ellipse. The first directrix (Directrix1) is on the positive side of the major axis. The second directrix (Directrix2) is on the negative side. The directrix is returned as an axis (gp_Ax1 object), the origin of which is situated on the "X Axis" of the local coordinate system of this ellipse. Exceptions Standard_ConstructionError if the eccentricity is null (the ellipse has degenerated into a circle).)#" )
        .def("Directrix2",
             (gp_Ax1 (gp_Elips::*)() const) static_cast<gp_Ax1 (gp_Elips::*)() const>(&gp_Elips::Directrix2),
             R"#(This line is obtained by the symmetrical transformation of "Directrix1" with respect to the "YAxis" of the ellipse. Exceptions Standard_ConstructionError if the eccentricity is null (the ellipse has degenerated into a circle).)#" )
        .def("Eccentricity",
             (Standard_Real (gp_Elips::*)() const) static_cast<Standard_Real (gp_Elips::*)() const>(&gp_Elips::Eccentricity),
             R"#(Returns the eccentricity of the ellipse between 0.0 and 1.0 If f is the distance between the center of the ellipse and the Focus1 then the eccentricity e = f / MajorRadius. Raises ConstructionError if MajorRadius = 0.0)#" )
        .def("Focal",
             (Standard_Real (gp_Elips::*)() const) static_cast<Standard_Real (gp_Elips::*)() const>(&gp_Elips::Focal),
             R"#(Computes the focal distance. It is the distance between the two focus focus1 and focus2 of the ellipse.)#" )
        .def("Focus1",
             (gp_Pnt (gp_Elips::*)() const) static_cast<gp_Pnt (gp_Elips::*)() const>(&gp_Elips::Focus1),
             R"#(Returns the first focus of the ellipse. This focus is on the positive side of the "XAxis" of the ellipse.)#" )
        .def("Focus2",
             (gp_Pnt (gp_Elips::*)() const) static_cast<gp_Pnt (gp_Elips::*)() const>(&gp_Elips::Focus2),
             R"#(Returns the second focus of the ellipse. This focus is on the negative side of the "XAxis" of the ellipse.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Elips::*)() const) static_cast<const gp_Pnt & (gp_Elips::*)() const>(&gp_Elips::Location),
             R"#(Returns the center of the ellipse. It is the "Location" point of the coordinate system of the ellipse.)#" )
        .def("MajorRadius",
             (Standard_Real (gp_Elips::*)() const) static_cast<Standard_Real (gp_Elips::*)() const>(&gp_Elips::MajorRadius),
             R"#(Returns the major radius of the ellipse.)#" )
        .def("MinorRadius",
             (Standard_Real (gp_Elips::*)() const) static_cast<Standard_Real (gp_Elips::*)() const>(&gp_Elips::MinorRadius),
             R"#(Returns the minor radius of the ellipse.)#" )
        .def("Parameter",
             (Standard_Real (gp_Elips::*)() const) static_cast<Standard_Real (gp_Elips::*)() const>(&gp_Elips::Parameter),
             R"#(Returns p = (1 - e * e) * MajorRadius where e is the eccentricity of the ellipse. Returns 0 if MajorRadius = 0)#" )
        .def("Position",
             (const gp_Ax2 & (gp_Elips::*)() const) static_cast<const gp_Ax2 & (gp_Elips::*)() const>(&gp_Elips::Position),
             R"#(Returns the coordinate system of the ellipse.)#" )
        .def("XAxis",
             (gp_Ax1 (gp_Elips::*)() const) static_cast<gp_Ax1 (gp_Elips::*)() const>(&gp_Elips::XAxis),
             R"#(Returns the "XAxis" of the ellipse whose origin is the center of this ellipse. It is the major axis of the ellipse.)#" )
        .def("YAxis",
             (gp_Ax1 (gp_Elips::*)() const) static_cast<gp_Ax1 (gp_Elips::*)() const>(&gp_Elips::YAxis),
             R"#(Returns the "YAxis" of the ellipse whose unit vector is the "X Direction" or the "Y Direction" of the local coordinate system of this ellipse. This is the minor axis of the ellipse.)#" )
        .def("Mirror",
             (void (gp_Elips::*)( const gp_Pnt & ) ) static_cast<void (gp_Elips::*)( const gp_Pnt & ) >(&gp_Elips::Mirror),
             R"#(None)#"  , py::arg("P"))
        .def("Mirrored",
             (gp_Elips (gp_Elips::*)( const gp_Pnt & ) const) static_cast<gp_Elips (gp_Elips::*)( const gp_Pnt & ) const>(&gp_Elips::Mirrored),
             R"#(Performs the symmetrical transformation of an ellipse with respect to the point P which is the center of the symmetry.)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Elips::*)( const gp_Ax1 & ) ) static_cast<void (gp_Elips::*)( const gp_Ax1 & ) >(&gp_Elips::Mirror),
             R"#(None)#"  , py::arg("A1"))
        .def("Mirrored",
             (gp_Elips (gp_Elips::*)( const gp_Ax1 & ) const) static_cast<gp_Elips (gp_Elips::*)( const gp_Ax1 & ) const>(&gp_Elips::Mirrored),
             R"#(Performs the symmetrical transformation of an ellipse with respect to an axis placement which is the axis of the symmetry.)#"  , py::arg("A1"))
        .def("Mirror",
             (void (gp_Elips::*)( const gp_Ax2 & ) ) static_cast<void (gp_Elips::*)( const gp_Ax2 & ) >(&gp_Elips::Mirror),
             R"#(None)#"  , py::arg("A2"))
        .def("Mirrored",
             (gp_Elips (gp_Elips::*)( const gp_Ax2 & ) const) static_cast<gp_Elips (gp_Elips::*)( const gp_Ax2 & ) const>(&gp_Elips::Mirrored),
             R"#(Performs the symmetrical transformation of an ellipse with respect to a plane. The axis placement A2 locates the plane of the symmetry (Location, XDirection, YDirection).)#"  , py::arg("A2"))
        .def("Rotate",
             (void (gp_Elips::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Elips::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Elips::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Elips (gp_Elips::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Elips (gp_Elips::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Elips::Rotated),
             R"#(Rotates an ellipse. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Elips::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Elips::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Elips::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Elips (gp_Elips::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Elips (gp_Elips::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Elips::Scaled),
             R"#(Scales an ellipse. S is the scaling value.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Elips::*)( const gp_Trsf & ) ) static_cast<void (gp_Elips::*)( const gp_Trsf & ) >(&gp_Elips::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Elips (gp_Elips::*)( const gp_Trsf & ) const) static_cast<gp_Elips (gp_Elips::*)( const gp_Trsf & ) const>(&gp_Elips::Transformed),
             R"#(Transforms an ellipse with the transformation T from class Trsf.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Elips::*)( const gp_Vec & ) ) static_cast<void (gp_Elips::*)( const gp_Vec & ) >(&gp_Elips::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Elips (gp_Elips::*)( const gp_Vec & ) const) static_cast<gp_Elips (gp_Elips::*)( const gp_Vec & ) const>(&gp_Elips::Translated),
             R"#(Translates an ellipse in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Elips::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Elips::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Elips::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Elips (gp_Elips::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Elips (gp_Elips::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Elips::Translated),
             R"#(Translates an ellipse from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Area",
             (Standard_Real (gp_Elips::*)() const) static_cast<Standard_Real (gp_Elips::*)() const>(&gp_Elips::Area),
             R"#(Computes the area of the Ellipse.)#" )
        .def("MajorRadius",
             (Standard_Real (gp_Elips::*)() const) static_cast<Standard_Real (gp_Elips::*)() const>(&gp_Elips::MajorRadius),
             R"#(Returns the major radius of the ellipse.)#" )
        .def("MinorRadius",
             (Standard_Real (gp_Elips::*)() const) static_cast<Standard_Real (gp_Elips::*)() const>(&gp_Elips::MinorRadius),
             R"#(Returns the minor radius of the ellipse.)#" )
        .def("Parameter",
             (Standard_Real (gp_Elips::*)() const) static_cast<Standard_Real (gp_Elips::*)() const>(&gp_Elips::Parameter),
             R"#(Returns p = (1 - e * e) * MajorRadius where e is the eccentricity of the ellipse. Returns 0 if MajorRadius = 0)#" )
        .def("Position",
             (const gp_Ax2 & (gp_Elips::*)() const) static_cast<const gp_Ax2 & (gp_Elips::*)() const>(&gp_Elips::Position),
             R"#(Returns the coordinate system of the ellipse.)#" )
        .def("Axis",
             (const gp_Ax1 & (gp_Elips::*)() const) static_cast<const gp_Ax1 & (gp_Elips::*)() const>(&gp_Elips::Axis),
             R"#(Computes the axis normal to the plane of the ellipse.)#" )
        .def("Directrix1",
             (gp_Ax1 (gp_Elips::*)() const) static_cast<gp_Ax1 (gp_Elips::*)() const>(&gp_Elips::Directrix1),
             R"#(Computes the first or second directrix of this ellipse. These are the lines, in the plane of the ellipse, normal to the major axis, at a distance equal to MajorRadius/e from the center of the ellipse, where e is the eccentricity of the ellipse. The first directrix (Directrix1) is on the positive side of the major axis. The second directrix (Directrix2) is on the negative side. The directrix is returned as an axis (gp_Ax1 object), the origin of which is situated on the "X Axis" of the local coordinate system of this ellipse. Exceptions Standard_ConstructionError if the eccentricity is null (the ellipse has degenerated into a circle).)#" )
        .def("Directrix2",
             (gp_Ax1 (gp_Elips::*)() const) static_cast<gp_Ax1 (gp_Elips::*)() const>(&gp_Elips::Directrix2),
             R"#(This line is obtained by the symmetrical transformation of "Directrix1" with respect to the "YAxis" of the ellipse. Exceptions Standard_ConstructionError if the eccentricity is null (the ellipse has degenerated into a circle).)#" )
        .def("Eccentricity",
             (Standard_Real (gp_Elips::*)() const) static_cast<Standard_Real (gp_Elips::*)() const>(&gp_Elips::Eccentricity),
             R"#(Returns the eccentricity of the ellipse between 0.0 and 1.0 If f is the distance between the center of the ellipse and the Focus1 then the eccentricity e = f / MajorRadius. Raises ConstructionError if MajorRadius = 0.0)#" )
        .def("Focal",
             (Standard_Real (gp_Elips::*)() const) static_cast<Standard_Real (gp_Elips::*)() const>(&gp_Elips::Focal),
             R"#(Computes the focal distance. It is the distance between the two focus focus1 and focus2 of the ellipse.)#" )
        .def("Focus1",
             (gp_Pnt (gp_Elips::*)() const) static_cast<gp_Pnt (gp_Elips::*)() const>(&gp_Elips::Focus1),
             R"#(Returns the first focus of the ellipse. This focus is on the positive side of the "XAxis" of the ellipse.)#" )
        .def("Focus2",
             (gp_Pnt (gp_Elips::*)() const) static_cast<gp_Pnt (gp_Elips::*)() const>(&gp_Elips::Focus2),
             R"#(Returns the second focus of the ellipse. This focus is on the negative side of the "XAxis" of the ellipse.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Elips::*)() const) static_cast<const gp_Pnt & (gp_Elips::*)() const>(&gp_Elips::Location),
             R"#(Returns the center of the ellipse. It is the "Location" point of the coordinate system of the ellipse.)#" )
        .def("XAxis",
             (gp_Ax1 (gp_Elips::*)() const) static_cast<gp_Ax1 (gp_Elips::*)() const>(&gp_Elips::XAxis),
             R"#(Returns the "XAxis" of the ellipse whose origin is the center of this ellipse. It is the major axis of the ellipse.)#" )
        .def("YAxis",
             (gp_Ax1 (gp_Elips::*)() const) static_cast<gp_Ax1 (gp_Elips::*)() const>(&gp_Elips::YAxis),
             R"#(Returns the "YAxis" of the ellipse whose unit vector is the "X Direction" or the "Y Direction" of the local coordinate system of this ellipse. This is the minor axis of the ellipse.)#" )
        .def("SetAxis",
             (void (gp_Elips::*)( const gp_Ax1 & ) ) static_cast<void (gp_Elips::*)( const gp_Ax1 & ) >(&gp_Elips::SetAxis),
             R"#(Changes the axis normal to the plane of the ellipse. It modifies the definition of this plane. The "XAxis" and the "YAxis" are recomputed. The local coordinate system is redefined so that: - its origin and "main Direction" become those of the axis A1 (the "X Direction" and "Y Direction" are then recomputed in the same way as for any gp_Ax2), or Raises ConstructionError if the direction of A1 is parallel to the direction of the "XAxis" of the ellipse.)#"  , py::arg("A1"))
        .def("SetPosition",
             (void (gp_Elips::*)( const gp_Ax2 & ) ) static_cast<void (gp_Elips::*)( const gp_Ax2 & ) >(&gp_Elips::SetPosition),
             R"#(Modifies this ellipse, by redefining its local coordinate so that it becomes A2e.)#"  , py::arg("A2"))
        .def("SetLocation",
             (void (gp_Elips::*)( const gp_Pnt & ) ) static_cast<void (gp_Elips::*)( const gp_Pnt & ) >(&gp_Elips::SetLocation),
             R"#(Modifies this ellipse, by redefining its local coordinate so that its origin becomes P.)#"  , py::arg("P"))
        .def("SetMajorRadius",
             (void (gp_Elips::*)( const Standard_Real ) ) static_cast<void (gp_Elips::*)( const Standard_Real ) >(&gp_Elips::SetMajorRadius),
             R"#(The major radius of the ellipse is on the "XAxis" (major axis) of the ellipse. Raises ConstructionError if MajorRadius < MinorRadius.)#"  , py::arg("R"))
        .def("SetMinorRadius",
             (void (gp_Elips::*)( const Standard_Real ) ) static_cast<void (gp_Elips::*)( const Standard_Real ) >(&gp_Elips::SetMinorRadius),
             R"#(The minor radius of the ellipse is on the "YAxis" (minor axis) of the ellipse. Raises ConstructionError if MinorRadius > MajorRadius or MinorRadius < 0.)#"  , py::arg("R"))
        .def("Rotate",
             (void (gp_Elips::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Elips::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Elips::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Elips (gp_Elips::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Elips (gp_Elips::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Elips::Rotated),
             R"#(Rotates an ellipse. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Elips::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Elips::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Elips::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Elips (gp_Elips::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Elips (gp_Elips::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Elips::Scaled),
             R"#(Scales an ellipse. S is the scaling value.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Elips::*)( const gp_Trsf & ) ) static_cast<void (gp_Elips::*)( const gp_Trsf & ) >(&gp_Elips::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Elips (gp_Elips::*)( const gp_Trsf & ) const) static_cast<gp_Elips (gp_Elips::*)( const gp_Trsf & ) const>(&gp_Elips::Transformed),
             R"#(Transforms an ellipse with the transformation T from class Trsf.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Elips::*)( const gp_Vec & ) ) static_cast<void (gp_Elips::*)( const gp_Vec & ) >(&gp_Elips::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Elips (gp_Elips::*)( const gp_Vec & ) const) static_cast<gp_Elips (gp_Elips::*)( const gp_Vec & ) const>(&gp_Elips::Translated),
             R"#(Translates an ellipse in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Elips::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Elips::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Elips::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Elips (gp_Elips::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Elips (gp_Elips::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Elips::Translated),
             R"#(Translates an ellipse from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_Elips2d , shared_ptr<gp_Elips2d> >>(m.attr("gp_Elips2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Ax2d &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("MajorAxis"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Ax22d &,const Standard_Real,const Standard_Real >()  , py::arg("A"),  py::arg("MajorRadius"),  py::arg("MinorRadius") )
    // custom constructors
    // methods
        .def("SetLocation",
             (void (gp_Elips2d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Elips2d::*)( const gp_Pnt2d & ) >(&gp_Elips2d::SetLocation),
             R"#(Modifies this ellipse, by redefining its local coordinate system so that - its origin becomes P.)#"  , py::arg("P"))
        .def("SetMajorRadius",
             (void (gp_Elips2d::*)( const Standard_Real ) ) static_cast<void (gp_Elips2d::*)( const Standard_Real ) >(&gp_Elips2d::SetMajorRadius),
             R"#(Changes the value of the major radius. Raises ConstructionError if MajorRadius < MinorRadius.)#"  , py::arg("MajorRadius"))
        .def("SetMinorRadius",
             (void (gp_Elips2d::*)( const Standard_Real ) ) static_cast<void (gp_Elips2d::*)( const Standard_Real ) >(&gp_Elips2d::SetMinorRadius),
             R"#(Changes the value of the minor radius. Raises ConstructionError if MajorRadius < MinorRadius or MinorRadius < 0.0)#"  , py::arg("MinorRadius"))
        .def("SetAxis",
             (void (gp_Elips2d::*)( const gp_Ax22d & ) ) static_cast<void (gp_Elips2d::*)( const gp_Ax22d & ) >(&gp_Elips2d::SetAxis),
             R"#(Modifies this ellipse, by redefining its local coordinate system so that it becomes A.)#"  , py::arg("A"))
        .def("SetXAxis",
             (void (gp_Elips2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Elips2d::*)( const gp_Ax2d & ) >(&gp_Elips2d::SetXAxis),
             R"#(Modifies this ellipse, by redefining its local coordinate system so that its origin and its "X Direction" become those of the axis A. The "Y Direction" is then recomputed. The orientation of the local coordinate system is not modified.)#"  , py::arg("A"))
        .def("SetYAxis",
             (void (gp_Elips2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Elips2d::*)( const gp_Ax2d & ) >(&gp_Elips2d::SetYAxis),
             R"#(Modifies this ellipse, by redefining its local coordinate system so that its origin and its "Y Direction" become those of the axis A. The "X Direction" is then recomputed. The orientation of the local coordinate system is not modified.)#"  , py::arg("A"))
        .def("Area",
             (Standard_Real (gp_Elips2d::*)() const) static_cast<Standard_Real (gp_Elips2d::*)() const>(&gp_Elips2d::Area),
             R"#(Computes the area of the ellipse.)#" )
        .def("Directrix1",
             (gp_Ax2d (gp_Elips2d::*)() const) static_cast<gp_Ax2d (gp_Elips2d::*)() const>(&gp_Elips2d::Directrix1),
             R"#(This directrix is the line normal to the XAxis of the ellipse in the local plane (Z = 0) at a distance d = MajorRadius / e from the center of the ellipse, where e is the eccentricity of the ellipse. This line is parallel to the "YAxis". The intersection point between directrix1 and the "XAxis" is the location point of the directrix1. This point is on the positive side of the "XAxis".)#" )
        .def("Directrix2",
             (gp_Ax2d (gp_Elips2d::*)() const) static_cast<gp_Ax2d (gp_Elips2d::*)() const>(&gp_Elips2d::Directrix2),
             R"#(This line is obtained by the symmetrical transformation of "Directrix1" with respect to the minor axis of the ellipse.)#" )
        .def("Eccentricity",
             (Standard_Real (gp_Elips2d::*)() const) static_cast<Standard_Real (gp_Elips2d::*)() const>(&gp_Elips2d::Eccentricity),
             R"#(Returns the eccentricity of the ellipse between 0.0 and 1.0 If f is the distance between the center of the ellipse and the Focus1 then the eccentricity e = f / MajorRadius. Returns 0 if MajorRadius = 0.)#" )
        .def("Focal",
             (Standard_Real (gp_Elips2d::*)() const) static_cast<Standard_Real (gp_Elips2d::*)() const>(&gp_Elips2d::Focal),
             R"#(Returns the distance between the center of the ellipse and focus1 or focus2.)#" )
        .def("Focus1",
             (gp_Pnt2d (gp_Elips2d::*)() const) static_cast<gp_Pnt2d (gp_Elips2d::*)() const>(&gp_Elips2d::Focus1),
             R"#(Returns the first focus of the ellipse. This focus is on the positive side of the major axis of the ellipse.)#" )
        .def("Focus2",
             (gp_Pnt2d (gp_Elips2d::*)() const) static_cast<gp_Pnt2d (gp_Elips2d::*)() const>(&gp_Elips2d::Focus2),
             R"#(Returns the second focus of the ellipse. This focus is on the negative side of the major axis of the ellipse.)#" )
        .def("Location",
             (const gp_Pnt2d & (gp_Elips2d::*)() const) static_cast<const gp_Pnt2d & (gp_Elips2d::*)() const>(&gp_Elips2d::Location),
             R"#(Returns the center of the ellipse.)#" )
        .def("MajorRadius",
             (Standard_Real (gp_Elips2d::*)() const) static_cast<Standard_Real (gp_Elips2d::*)() const>(&gp_Elips2d::MajorRadius),
             R"#(Returns the major radius of the Ellipse.)#" )
        .def("MinorRadius",
             (Standard_Real (gp_Elips2d::*)() const) static_cast<Standard_Real (gp_Elips2d::*)() const>(&gp_Elips2d::MinorRadius),
             R"#(Returns the minor radius of the Ellipse.)#" )
        .def("Parameter",
             (Standard_Real (gp_Elips2d::*)() const) static_cast<Standard_Real (gp_Elips2d::*)() const>(&gp_Elips2d::Parameter),
             R"#(Returns p = (1 - e * e) * MajorRadius where e is the eccentricity of the ellipse. Returns 0 if MajorRadius = 0)#" )
        .def("Axis",
             (const gp_Ax22d & (gp_Elips2d::*)() const) static_cast<const gp_Ax22d & (gp_Elips2d::*)() const>(&gp_Elips2d::Axis),
             R"#(Returns the major axis of the ellipse.)#" )
        .def("XAxis",
             (gp_Ax2d (gp_Elips2d::*)() const) static_cast<gp_Ax2d (gp_Elips2d::*)() const>(&gp_Elips2d::XAxis),
             R"#(Returns the major axis of the ellipse.)#" )
        .def("YAxis",
             (gp_Ax2d (gp_Elips2d::*)() const) static_cast<gp_Ax2d (gp_Elips2d::*)() const>(&gp_Elips2d::YAxis),
             R"#(Returns the minor axis of the ellipse. Reverses the direction of the circle.)#" )
        .def("Reverse",
             (void (gp_Elips2d::*)() ) static_cast<void (gp_Elips2d::*)() >(&gp_Elips2d::Reverse),
             R"#(None)#" )
        .def("Reversed",
             (gp_Elips2d (gp_Elips2d::*)() const) static_cast<gp_Elips2d (gp_Elips2d::*)() const>(&gp_Elips2d::Reversed),
             R"#(None)#" )
        .def("IsDirect",
             (Standard_Boolean (gp_Elips2d::*)() const) static_cast<Standard_Boolean (gp_Elips2d::*)() const>(&gp_Elips2d::IsDirect),
             R"#(Returns true if the local coordinate system is direct and false in the other case.)#" )
        .def("Mirror",
             (void (gp_Elips2d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Elips2d::*)( const gp_Pnt2d & ) >(&gp_Elips2d::Mirror),
             R"#(None)#"  , py::arg("P"))
        .def("Mirrored",
             (gp_Elips2d (gp_Elips2d::*)( const gp_Pnt2d & ) const) static_cast<gp_Elips2d (gp_Elips2d::*)( const gp_Pnt2d & ) const>(&gp_Elips2d::Mirrored),
             R"#(Performs the symmetrical transformation of a ellipse with respect to the point P which is the center of the symmetry)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Elips2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Elips2d::*)( const gp_Ax2d & ) >(&gp_Elips2d::Mirror),
             R"#(None)#"  , py::arg("A"))
        .def("Mirrored",
             (gp_Elips2d (gp_Elips2d::*)( const gp_Ax2d & ) const) static_cast<gp_Elips2d (gp_Elips2d::*)( const gp_Ax2d & ) const>(&gp_Elips2d::Mirrored),
             R"#(Performs the symmetrical transformation of a ellipse with respect to an axis placement which is the axis of the symmetry.)#"  , py::arg("A"))
        .def("Rotate",
             (void (gp_Elips2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Elips2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Elips2d::Rotate),
             R"#(None)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Elips2d (gp_Elips2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Elips2d (gp_Elips2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Elips2d::Rotated),
             R"#(None)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Elips2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Elips2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Elips2d::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Elips2d (gp_Elips2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Elips2d (gp_Elips2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Elips2d::Scaled),
             R"#(Scales a ellipse. S is the scaling value.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Elips2d::*)( const gp_Trsf2d & ) ) static_cast<void (gp_Elips2d::*)( const gp_Trsf2d & ) >(&gp_Elips2d::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Elips2d (gp_Elips2d::*)( const gp_Trsf2d & ) const) static_cast<gp_Elips2d (gp_Elips2d::*)( const gp_Trsf2d & ) const>(&gp_Elips2d::Transformed),
             R"#(Transforms an ellipse with the transformation T from class Trsf2d.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Elips2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Elips2d::*)( const gp_Vec2d & ) >(&gp_Elips2d::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Elips2d (gp_Elips2d::*)( const gp_Vec2d & ) const) static_cast<gp_Elips2d (gp_Elips2d::*)( const gp_Vec2d & ) const>(&gp_Elips2d::Translated),
             R"#(Translates a ellipse in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Elips2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (gp_Elips2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&gp_Elips2d::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Elips2d (gp_Elips2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const) static_cast<gp_Elips2d (gp_Elips2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const>(&gp_Elips2d::Translated),
             R"#(Translates a ellipse from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetLocation",
             (void (gp_Elips2d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Elips2d::*)( const gp_Pnt2d & ) >(&gp_Elips2d::SetLocation),
             R"#(Modifies this ellipse, by redefining its local coordinate system so that - its origin becomes P.)#"  , py::arg("P"))
        .def("SetMajorRadius",
             (void (gp_Elips2d::*)( const Standard_Real ) ) static_cast<void (gp_Elips2d::*)( const Standard_Real ) >(&gp_Elips2d::SetMajorRadius),
             R"#(Changes the value of the major radius. Raises ConstructionError if MajorRadius < MinorRadius.)#"  , py::arg("MajorRadius"))
        .def("SetMinorRadius",
             (void (gp_Elips2d::*)( const Standard_Real ) ) static_cast<void (gp_Elips2d::*)( const Standard_Real ) >(&gp_Elips2d::SetMinorRadius),
             R"#(Changes the value of the minor radius. Raises ConstructionError if MajorRadius < MinorRadius or MinorRadius < 0.0)#"  , py::arg("MinorRadius"))
        .def("SetXAxis",
             (void (gp_Elips2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Elips2d::*)( const gp_Ax2d & ) >(&gp_Elips2d::SetXAxis),
             R"#(Modifies this ellipse, by redefining its local coordinate system so that its origin and its "X Direction" become those of the axis A. The "Y Direction" is then recomputed. The orientation of the local coordinate system is not modified.)#"  , py::arg("A"))
        .def("SetAxis",
             (void (gp_Elips2d::*)( const gp_Ax22d & ) ) static_cast<void (gp_Elips2d::*)( const gp_Ax22d & ) >(&gp_Elips2d::SetAxis),
             R"#(Modifies this ellipse, by redefining its local coordinate system so that it becomes A.)#"  , py::arg("A"))
        .def("SetYAxis",
             (void (gp_Elips2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Elips2d::*)( const gp_Ax2d & ) >(&gp_Elips2d::SetYAxis),
             R"#(Modifies this ellipse, by redefining its local coordinate system so that its origin and its "Y Direction" become those of the axis A. The "X Direction" is then recomputed. The orientation of the local coordinate system is not modified.)#"  , py::arg("A"))
        .def("Area",
             (Standard_Real (gp_Elips2d::*)() const) static_cast<Standard_Real (gp_Elips2d::*)() const>(&gp_Elips2d::Area),
             R"#(Computes the area of the ellipse.)#" )
        .def("Directrix1",
             (gp_Ax2d (gp_Elips2d::*)() const) static_cast<gp_Ax2d (gp_Elips2d::*)() const>(&gp_Elips2d::Directrix1),
             R"#(This directrix is the line normal to the XAxis of the ellipse in the local plane (Z = 0) at a distance d = MajorRadius / e from the center of the ellipse, where e is the eccentricity of the ellipse. This line is parallel to the "YAxis". The intersection point between directrix1 and the "XAxis" is the location point of the directrix1. This point is on the positive side of the "XAxis".)#" )
        .def("Directrix2",
             (gp_Ax2d (gp_Elips2d::*)() const) static_cast<gp_Ax2d (gp_Elips2d::*)() const>(&gp_Elips2d::Directrix2),
             R"#(This line is obtained by the symmetrical transformation of "Directrix1" with respect to the minor axis of the ellipse.)#" )
        .def("Eccentricity",
             (Standard_Real (gp_Elips2d::*)() const) static_cast<Standard_Real (gp_Elips2d::*)() const>(&gp_Elips2d::Eccentricity),
             R"#(Returns the eccentricity of the ellipse between 0.0 and 1.0 If f is the distance between the center of the ellipse and the Focus1 then the eccentricity e = f / MajorRadius. Returns 0 if MajorRadius = 0.)#" )
        .def("Focal",
             (Standard_Real (gp_Elips2d::*)() const) static_cast<Standard_Real (gp_Elips2d::*)() const>(&gp_Elips2d::Focal),
             R"#(Returns the distance between the center of the ellipse and focus1 or focus2.)#" )
        .def("Focus1",
             (gp_Pnt2d (gp_Elips2d::*)() const) static_cast<gp_Pnt2d (gp_Elips2d::*)() const>(&gp_Elips2d::Focus1),
             R"#(Returns the first focus of the ellipse. This focus is on the positive side of the major axis of the ellipse.)#" )
        .def("Focus2",
             (gp_Pnt2d (gp_Elips2d::*)() const) static_cast<gp_Pnt2d (gp_Elips2d::*)() const>(&gp_Elips2d::Focus2),
             R"#(Returns the second focus of the ellipse. This focus is on the negative side of the major axis of the ellipse.)#" )
        .def("Location",
             (const gp_Pnt2d & (gp_Elips2d::*)() const) static_cast<const gp_Pnt2d & (gp_Elips2d::*)() const>(&gp_Elips2d::Location),
             R"#(Returns the center of the ellipse.)#" )
        .def("MajorRadius",
             (Standard_Real (gp_Elips2d::*)() const) static_cast<Standard_Real (gp_Elips2d::*)() const>(&gp_Elips2d::MajorRadius),
             R"#(Returns the major radius of the Ellipse.)#" )
        .def("MinorRadius",
             (Standard_Real (gp_Elips2d::*)() const) static_cast<Standard_Real (gp_Elips2d::*)() const>(&gp_Elips2d::MinorRadius),
             R"#(Returns the minor radius of the Ellipse.)#" )
        .def("Parameter",
             (Standard_Real (gp_Elips2d::*)() const) static_cast<Standard_Real (gp_Elips2d::*)() const>(&gp_Elips2d::Parameter),
             R"#(Returns p = (1 - e * e) * MajorRadius where e is the eccentricity of the ellipse. Returns 0 if MajorRadius = 0)#" )
        .def("Axis",
             (const gp_Ax22d & (gp_Elips2d::*)() const) static_cast<const gp_Ax22d & (gp_Elips2d::*)() const>(&gp_Elips2d::Axis),
             R"#(Returns the major axis of the ellipse.)#" )
        .def("YAxis",
             (gp_Ax2d (gp_Elips2d::*)() const) static_cast<gp_Ax2d (gp_Elips2d::*)() const>(&gp_Elips2d::YAxis),
             R"#(Returns the minor axis of the ellipse. Reverses the direction of the circle.)#" )
        .def("XAxis",
             (gp_Ax2d (gp_Elips2d::*)() const) static_cast<gp_Ax2d (gp_Elips2d::*)() const>(&gp_Elips2d::XAxis),
             R"#(Returns the major axis of the ellipse.)#" )
        .def("Reverse",
             (void (gp_Elips2d::*)() ) static_cast<void (gp_Elips2d::*)() >(&gp_Elips2d::Reverse),
             R"#(None)#" )
        .def("Reversed",
             (gp_Elips2d (gp_Elips2d::*)() const) static_cast<gp_Elips2d (gp_Elips2d::*)() const>(&gp_Elips2d::Reversed),
             R"#(None)#" )
        .def("IsDirect",
             (Standard_Boolean (gp_Elips2d::*)() const) static_cast<Standard_Boolean (gp_Elips2d::*)() const>(&gp_Elips2d::IsDirect),
             R"#(Returns true if the local coordinate system is direct and false in the other case.)#" )
        .def("Rotate",
             (void (gp_Elips2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Elips2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Elips2d::Rotate),
             R"#(None)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Elips2d (gp_Elips2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Elips2d (gp_Elips2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Elips2d::Rotated),
             R"#(None)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Elips2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Elips2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Elips2d::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Elips2d (gp_Elips2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Elips2d (gp_Elips2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Elips2d::Scaled),
             R"#(Scales a ellipse. S is the scaling value.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Elips2d::*)( const gp_Trsf2d & ) ) static_cast<void (gp_Elips2d::*)( const gp_Trsf2d & ) >(&gp_Elips2d::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Elips2d (gp_Elips2d::*)( const gp_Trsf2d & ) const) static_cast<gp_Elips2d (gp_Elips2d::*)( const gp_Trsf2d & ) const>(&gp_Elips2d::Transformed),
             R"#(Transforms an ellipse with the transformation T from class Trsf2d.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Elips2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Elips2d::*)( const gp_Vec2d & ) >(&gp_Elips2d::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Elips2d (gp_Elips2d::*)( const gp_Vec2d & ) const) static_cast<gp_Elips2d (gp_Elips2d::*)( const gp_Vec2d & ) const>(&gp_Elips2d::Translated),
             R"#(Translates a ellipse in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Elips2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (gp_Elips2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&gp_Elips2d::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Elips2d (gp_Elips2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const) static_cast<gp_Elips2d (gp_Elips2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const>(&gp_Elips2d::Translated),
             R"#(Translates a ellipse from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
        .def("Coefficients",
             []( gp_Elips2d &self   ){ Standard_Real  A; Standard_Real  B; Standard_Real  C; Standard_Real  D; Standard_Real  E; Standard_Real  F; self.Coefficients(A,B,C,D,E,F); return std::make_tuple(A,B,C,D,E,F); },
             R"#(Returns the coefficients of the implicit equation of the ellipse. A * (X**2) + B * (Y**2) + 2*C*(X*Y) + 2*D*X + 2*E*Y + F = 0.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_GTrsf , shared_ptr<gp_GTrsf> >>(m.attr("gp_GTrsf"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Trsf & >()  , py::arg("T") )
        .def(py::init< const gp_Mat &,const gp_XYZ & >()  , py::arg("M"),  py::arg("V") )
    // custom constructors
    // methods
        .def("SetAffinity",
             (void (gp_GTrsf::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_GTrsf::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_GTrsf::SetAffinity),
             R"#(Changes this transformation into an affinity of ratio Ratio with respect to the axis A1. Note: an affinity is a point-by-point transformation that transforms any point P into a point P' such that if H is the orthogonal projection of P on the axis A1 or the plane A2, the vectors HP and HP' satisfy: HP' = Ratio * HP.)#"  , py::arg("A1"),  py::arg("Ratio"))
        .def("SetAffinity",
             (void (gp_GTrsf::*)( const gp_Ax2 & , const Standard_Real ) ) static_cast<void (gp_GTrsf::*)( const gp_Ax2 & , const Standard_Real ) >(&gp_GTrsf::SetAffinity),
             R"#(Changes this transformation into an affinity of ratio Ratio with respect to the plane defined by the origin, the "X Direction" and the "Y Direction" of coordinate system A2. Note: an affinity is a point-by-point transformation that transforms any point P into a point P' such that if H is the orthogonal projection of P on the axis A1 or the plane A2, the vectors HP and HP' satisfy: HP' = Ratio * HP.)#"  , py::arg("A2"),  py::arg("Ratio"))
        .def("SetValue",
             (void (gp_GTrsf::*)( const Standard_Integer , const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_GTrsf::*)( const Standard_Integer , const Standard_Integer , const Standard_Real ) >(&gp_GTrsf::SetValue),
             R"#(Replaces the coefficient (Row, Col) of the matrix representing this transformation by Value. Raises OutOfRange if Row < 1 or Row > 3 or Col < 1 or Col > 4)#"  , py::arg("Row"),  py::arg("Col"),  py::arg("Value"))
        .def("SetVectorialPart",
             (void (gp_GTrsf::*)( const gp_Mat & ) ) static_cast<void (gp_GTrsf::*)( const gp_Mat & ) >(&gp_GTrsf::SetVectorialPart),
             R"#(Replaces the vectorial part of this transformation by Matrix.)#"  , py::arg("Matrix"))
        .def("SetTranslationPart",
             (void (gp_GTrsf::*)( const gp_XYZ & ) ) static_cast<void (gp_GTrsf::*)( const gp_XYZ & ) >(&gp_GTrsf::SetTranslationPart),
             R"#(Replaces the translation part of this transformation by the coordinates of the number triple Coord.)#"  , py::arg("Coord"))
        .def("SetTrsf",
             (void (gp_GTrsf::*)( const gp_Trsf & ) ) static_cast<void (gp_GTrsf::*)( const gp_Trsf & ) >(&gp_GTrsf::SetTrsf),
             R"#(Assigns the vectorial and translation parts of T to this transformation.)#"  , py::arg("T"))
        .def("IsNegative",
             (Standard_Boolean (gp_GTrsf::*)() const) static_cast<Standard_Boolean (gp_GTrsf::*)() const>(&gp_GTrsf::IsNegative),
             R"#(Returns true if the determinant of the vectorial part of this transformation is negative.)#" )
        .def("IsSingular",
             (Standard_Boolean (gp_GTrsf::*)() const) static_cast<Standard_Boolean (gp_GTrsf::*)() const>(&gp_GTrsf::IsSingular),
             R"#(Returns true if this transformation is singular (and therefore, cannot be inverted). Note: The Gauss LU decomposition is used to invert the transformation matrix. Consequently, the transformation is considered as singular if the largest pivot found is less than or equal to gp::Resolution(). Warning If this transformation is singular, it cannot be inverted.)#" )
        .def("Form",
             (gp_TrsfForm (gp_GTrsf::*)() const) static_cast<gp_TrsfForm (gp_GTrsf::*)() const>(&gp_GTrsf::Form),
             R"#(Returns the nature of the transformation. It can be an identity transformation, a rotation, a translation, a mirror transformation (relative to a point, an axis or a plane), a scaling transformation, a compound transformation or some other type of transformation.)#" )
        .def("SetForm",
             (void (gp_GTrsf::*)() ) static_cast<void (gp_GTrsf::*)() >(&gp_GTrsf::SetForm),
             R"#(verify and set the shape of the GTrsf Other or CompoundTrsf Ex : myGTrsf.SetValue(row1,col1,val1); myGTrsf.SetValue(row2,col2,val2); ... myGTrsf.SetForm();)#" )
        .def("TranslationPart",
             (const gp_XYZ & (gp_GTrsf::*)() const) static_cast<const gp_XYZ & (gp_GTrsf::*)() const>(&gp_GTrsf::TranslationPart),
             R"#(Returns the translation part of the GTrsf.)#" )
        .def("VectorialPart",
             (const gp_Mat & (gp_GTrsf::*)() const) static_cast<const gp_Mat & (gp_GTrsf::*)() const>(&gp_GTrsf::VectorialPart),
             R"#(Computes the vectorial part of the GTrsf. The returned Matrix is a 3*3 matrix.)#" )
        .def("Value",
             (Standard_Real (gp_GTrsf::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (gp_GTrsf::*)( const Standard_Integer , const Standard_Integer ) const>(&gp_GTrsf::Value),
             R"#(Returns the coefficients of the global matrix of transformation. Raises OutOfRange if Row < 1 or Row > 3 or Col < 1 or Col > 4)#"  , py::arg("Row"),  py::arg("Col"))
        .def("Invert",
             (void (gp_GTrsf::*)() ) static_cast<void (gp_GTrsf::*)() >(&gp_GTrsf::Invert),
             R"#(None)#" )
        .def("Inverted",
             (gp_GTrsf (gp_GTrsf::*)() const) static_cast<gp_GTrsf (gp_GTrsf::*)() const>(&gp_GTrsf::Inverted),
             R"#(Computes the reverse transformation. Raises an exception if the matrix of the transformation is not inversible.)#" )
        .def("Multiplied",
             (gp_GTrsf (gp_GTrsf::*)( const gp_GTrsf & ) const) static_cast<gp_GTrsf (gp_GTrsf::*)( const gp_GTrsf & ) const>(&gp_GTrsf::Multiplied),
             R"#(Computes the transformation composed from T and <me>. In a C++ implementation you can also write Tcomposed = <me> * T. Example : GTrsf T1, T2, Tcomp; ............... //composition : Tcomp = T2.Multiplied(T1); // or (Tcomp = T2 * T1) // transformation of a point XYZ P(10.,3.,4.); XYZ P1(P); Tcomp.Transforms(P1); //using Tcomp XYZ P2(P); T1.Transforms(P2); //using T1 then T2 T2.Transforms(P2); // P1 = P2 !!!)#"  , py::arg("T"))
        .def("Multiply",
             (void (gp_GTrsf::*)( const gp_GTrsf & ) ) static_cast<void (gp_GTrsf::*)( const gp_GTrsf & ) >(&gp_GTrsf::Multiply),
             R"#(Computes the transformation composed with <me> and T. <me> = <me> * T)#"  , py::arg("T"))
        .def("PreMultiply",
             (void (gp_GTrsf::*)( const gp_GTrsf & ) ) static_cast<void (gp_GTrsf::*)( const gp_GTrsf & ) >(&gp_GTrsf::PreMultiply),
             R"#(Computes the product of the transformation T and this transformation and assigns the result to this transformation. this = T * this)#"  , py::arg("T"))
        .def("Power",
             (void (gp_GTrsf::*)( const Standard_Integer ) ) static_cast<void (gp_GTrsf::*)( const Standard_Integer ) >(&gp_GTrsf::Power),
             R"#(None)#"  , py::arg("N"))
        .def("Powered",
             (gp_GTrsf (gp_GTrsf::*)( const Standard_Integer ) const) static_cast<gp_GTrsf (gp_GTrsf::*)( const Standard_Integer ) const>(&gp_GTrsf::Powered),
             R"#(Computes: - the product of this transformation multiplied by itself N times, if N is positive, or - the product of the inverse of this transformation multiplied by itself |N| times, if N is negative. If N equals zero, the result is equal to the Identity transformation. I.e.: <me> * <me> * .......* <me>, N time. if N =0 <me> = Identity if N < 0 <me> = <me>.Inverse() *...........* <me>.Inverse().)#"  , py::arg("N"))
        .def("Transforms",
             (void (gp_GTrsf::*)( gp_XYZ & ) const) static_cast<void (gp_GTrsf::*)( gp_XYZ & ) const>(&gp_GTrsf::Transforms),
             R"#(None)#"  , py::arg("Coord"))
        .def("Trsf",
             (gp_Trsf (gp_GTrsf::*)() const) static_cast<gp_Trsf (gp_GTrsf::*)() const>(&gp_GTrsf::Trsf),
             R"#(None)#" )
        .def("SetAffinity",
             (void (gp_GTrsf::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_GTrsf::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_GTrsf::SetAffinity),
             R"#(Changes this transformation into an affinity of ratio Ratio with respect to the axis A1. Note: an affinity is a point-by-point transformation that transforms any point P into a point P' such that if H is the orthogonal projection of P on the axis A1 or the plane A2, the vectors HP and HP' satisfy: HP' = Ratio * HP.)#"  , py::arg("A1"),  py::arg("Ratio"))
        .def("SetAffinity",
             (void (gp_GTrsf::*)( const gp_Ax2 & , const Standard_Real ) ) static_cast<void (gp_GTrsf::*)( const gp_Ax2 & , const Standard_Real ) >(&gp_GTrsf::SetAffinity),
             R"#(Changes this transformation into an affinity of ratio Ratio with respect to the plane defined by the origin, the "X Direction" and the "Y Direction" of coordinate system A2. Note: an affinity is a point-by-point transformation that transforms any point P into a point P' such that if H is the orthogonal projection of P on the axis A1 or the plane A2, the vectors HP and HP' satisfy: HP' = Ratio * HP.)#"  , py::arg("A2"),  py::arg("Ratio"))
        .def("SetValue",
             (void (gp_GTrsf::*)( const Standard_Integer , const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_GTrsf::*)( const Standard_Integer , const Standard_Integer , const Standard_Real ) >(&gp_GTrsf::SetValue),
             R"#(Replaces the coefficient (Row, Col) of the matrix representing this transformation by Value. Raises OutOfRange if Row < 1 or Row > 3 or Col < 1 or Col > 4)#"  , py::arg("Row"),  py::arg("Col"),  py::arg("Value"))
        .def("SetVectorialPart",
             (void (gp_GTrsf::*)( const gp_Mat & ) ) static_cast<void (gp_GTrsf::*)( const gp_Mat & ) >(&gp_GTrsf::SetVectorialPart),
             R"#(Replaces the vectorial part of this transformation by Matrix.)#"  , py::arg("Matrix"))
        .def("SetTrsf",
             (void (gp_GTrsf::*)( const gp_Trsf & ) ) static_cast<void (gp_GTrsf::*)( const gp_Trsf & ) >(&gp_GTrsf::SetTrsf),
             R"#(Assigns the vectorial and translation parts of T to this transformation.)#"  , py::arg("T"))
        .def("IsNegative",
             (Standard_Boolean (gp_GTrsf::*)() const) static_cast<Standard_Boolean (gp_GTrsf::*)() const>(&gp_GTrsf::IsNegative),
             R"#(Returns true if the determinant of the vectorial part of this transformation is negative.)#" )
        .def("IsSingular",
             (Standard_Boolean (gp_GTrsf::*)() const) static_cast<Standard_Boolean (gp_GTrsf::*)() const>(&gp_GTrsf::IsSingular),
             R"#(Returns true if this transformation is singular (and therefore, cannot be inverted). Note: The Gauss LU decomposition is used to invert the transformation matrix. Consequently, the transformation is considered as singular if the largest pivot found is less than or equal to gp::Resolution(). Warning If this transformation is singular, it cannot be inverted.)#" )
        .def("Form",
             (gp_TrsfForm (gp_GTrsf::*)() const) static_cast<gp_TrsfForm (gp_GTrsf::*)() const>(&gp_GTrsf::Form),
             R"#(Returns the nature of the transformation. It can be an identity transformation, a rotation, a translation, a mirror transformation (relative to a point, an axis or a plane), a scaling transformation, a compound transformation or some other type of transformation.)#" )
        .def("TranslationPart",
             (const gp_XYZ & (gp_GTrsf::*)() const) static_cast<const gp_XYZ & (gp_GTrsf::*)() const>(&gp_GTrsf::TranslationPart),
             R"#(Returns the translation part of the GTrsf.)#" )
        .def("VectorialPart",
             (const gp_Mat & (gp_GTrsf::*)() const) static_cast<const gp_Mat & (gp_GTrsf::*)() const>(&gp_GTrsf::VectorialPart),
             R"#(Computes the vectorial part of the GTrsf. The returned Matrix is a 3*3 matrix.)#" )
        .def("Value",
             (Standard_Real (gp_GTrsf::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (gp_GTrsf::*)( const Standard_Integer , const Standard_Integer ) const>(&gp_GTrsf::Value),
             R"#(Returns the coefficients of the global matrix of transformation. Raises OutOfRange if Row < 1 or Row > 3 or Col < 1 or Col > 4)#"  , py::arg("Row"),  py::arg("Col"))
        .def("Inverted",
             (gp_GTrsf (gp_GTrsf::*)() const) static_cast<gp_GTrsf (gp_GTrsf::*)() const>(&gp_GTrsf::Inverted),
             R"#(Computes the reverse transformation. Raises an exception if the matrix of the transformation is not inversible.)#" )
        .def("Multiplied",
             (gp_GTrsf (gp_GTrsf::*)( const gp_GTrsf & ) const) static_cast<gp_GTrsf (gp_GTrsf::*)( const gp_GTrsf & ) const>(&gp_GTrsf::Multiplied),
             R"#(Computes the transformation composed from T and <me>. In a C++ implementation you can also write Tcomposed = <me> * T. Example : GTrsf T1, T2, Tcomp; ............... //composition : Tcomp = T2.Multiplied(T1); // or (Tcomp = T2 * T1) // transformation of a point XYZ P(10.,3.,4.); XYZ P1(P); Tcomp.Transforms(P1); //using Tcomp XYZ P2(P); T1.Transforms(P2); //using T1 then T2 T2.Transforms(P2); // P1 = P2 !!!)#"  , py::arg("T"))
        .def("Powered",
             (gp_GTrsf (gp_GTrsf::*)( const Standard_Integer ) const) static_cast<gp_GTrsf (gp_GTrsf::*)( const Standard_Integer ) const>(&gp_GTrsf::Powered),
             R"#(Computes: - the product of this transformation multiplied by itself N times, if N is positive, or - the product of the inverse of this transformation multiplied by itself |N| times, if N is negative. If N equals zero, the result is equal to the Identity transformation. I.e.: <me> * <me> * .......* <me>, N time. if N =0 <me> = Identity if N < 0 <me> = <me>.Inverse() *...........* <me>.Inverse().)#"  , py::arg("N"))
        .def("Transforms",
             (void (gp_GTrsf::*)( gp_XYZ & ) const) static_cast<void (gp_GTrsf::*)( gp_XYZ & ) const>(&gp_GTrsf::Transforms),
             R"#(None)#"  , py::arg("Coord"))
        .def("Trsf",
             (gp_Trsf (gp_GTrsf::*)() const) static_cast<gp_Trsf (gp_GTrsf::*)() const>(&gp_GTrsf::Trsf),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Transforms",
             []( gp_GTrsf &self   ){ Standard_Real  X; Standard_Real  Y; Standard_Real  Z; self.Transforms(X,Y,Z); return std::make_tuple(X,Y,Z); },
             R"#(Transforms a triplet XYZ with a GTrsf.)#" )
        .def("Transforms",
             []( gp_GTrsf &self   ){ Standard_Real  X; Standard_Real  Y; Standard_Real  Z; self.Transforms(X,Y,Z); return std::make_tuple(X,Y,Z); },
             R"#(Transforms a triplet XYZ with a GTrsf.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
        .def("__mul__",
             (gp_GTrsf (gp_GTrsf::*)( const gp_GTrsf & ) const) static_cast<gp_GTrsf (gp_GTrsf::*)( const gp_GTrsf & ) const>(&gp_GTrsf::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("T"))
        .def("__rmul__",
             (gp_GTrsf (gp_GTrsf::*)( const gp_GTrsf & ) const) static_cast<gp_GTrsf (gp_GTrsf::*)( const gp_GTrsf & ) const>(&gp_GTrsf::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("T"))
        .def("__imul__",
             (void (gp_GTrsf::*)( const gp_GTrsf & ) ) static_cast<void (gp_GTrsf::*)( const gp_GTrsf & ) >(&gp_GTrsf::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("T"))
    // additional methods and static methods
;


    static_cast<py::class_<gp_GTrsf2d , shared_ptr<gp_GTrsf2d> >>(m.attr("gp_GTrsf2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Trsf2d & >()  , py::arg("T") )
        .def(py::init< const gp_Mat2d &,const gp_XY & >()  , py::arg("M"),  py::arg("V") )
    // custom constructors
    // methods
        .def("SetAffinity",
             (void (gp_GTrsf2d::*)( const gp_Ax2d & , const Standard_Real ) ) static_cast<void (gp_GTrsf2d::*)( const gp_Ax2d & , const Standard_Real ) >(&gp_GTrsf2d::SetAffinity),
             R"#(Changes this transformation into an affinity of ratio Ratio with respect to the axis A. Note: An affinity is a point-by-point transformation that transforms any point P into a point P' such that if H is the orthogonal projection of P on the axis A, the vectors HP and HP' satisfy: HP' = Ratio * HP.)#"  , py::arg("A"),  py::arg("Ratio"))
        .def("SetValue",
             (void (gp_GTrsf2d::*)( const Standard_Integer , const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_GTrsf2d::*)( const Standard_Integer , const Standard_Integer , const Standard_Real ) >(&gp_GTrsf2d::SetValue),
             R"#(Replaces the coefficient (Row, Col) of the matrix representing this transformation by Value, Raises OutOfRange if Row < 1 or Row > 2 or Col < 1 or Col > 3)#"  , py::arg("Row"),  py::arg("Col"),  py::arg("Value"))
        .def("SetTranslationPart",
             (void (gp_GTrsf2d::*)( const gp_XY & ) ) static_cast<void (gp_GTrsf2d::*)( const gp_XY & ) >(&gp_GTrsf2d::SetTranslationPart),
             R"#(Replacesthe translation part of this transformation by the coordinates of the number pair Coord.)#"  , py::arg("Coord"))
        .def("SetTrsf2d",
             (void (gp_GTrsf2d::*)( const gp_Trsf2d & ) ) static_cast<void (gp_GTrsf2d::*)( const gp_Trsf2d & ) >(&gp_GTrsf2d::SetTrsf2d),
             R"#(Assigns the vectorial and translation parts of T to this transformation.)#"  , py::arg("T"))
        .def("SetVectorialPart",
             (void (gp_GTrsf2d::*)( const gp_Mat2d & ) ) static_cast<void (gp_GTrsf2d::*)( const gp_Mat2d & ) >(&gp_GTrsf2d::SetVectorialPart),
             R"#(Replaces the vectorial part of this transformation by Matrix.)#"  , py::arg("Matrix"))
        .def("IsNegative",
             (Standard_Boolean (gp_GTrsf2d::*)() const) static_cast<Standard_Boolean (gp_GTrsf2d::*)() const>(&gp_GTrsf2d::IsNegative),
             R"#(Returns true if the determinant of the vectorial part of this transformation is negative.)#" )
        .def("IsSingular",
             (Standard_Boolean (gp_GTrsf2d::*)() const) static_cast<Standard_Boolean (gp_GTrsf2d::*)() const>(&gp_GTrsf2d::IsSingular),
             R"#(Returns true if this transformation is singular (and therefore, cannot be inverted). Note: The Gauss LU decomposition is used to invert the transformation matrix. Consequently, the transformation is considered as singular if the largest pivot found is less than or equal to gp::Resolution(). Warning If this transformation is singular, it cannot be inverted.)#" )
        .def("Form",
             (gp_TrsfForm (gp_GTrsf2d::*)() const) static_cast<gp_TrsfForm (gp_GTrsf2d::*)() const>(&gp_GTrsf2d::Form),
             R"#(Returns the nature of the transformation. It can be an identity transformation, a rotation, a translation, a mirror transformation (relative to a point or axis), a scaling transformation, a compound transformation or some other type of transformation.)#" )
        .def("TranslationPart",
             (const gp_XY & (gp_GTrsf2d::*)() const) static_cast<const gp_XY & (gp_GTrsf2d::*)() const>(&gp_GTrsf2d::TranslationPart),
             R"#(Returns the translation part of the GTrsf2d.)#" )
        .def("VectorialPart",
             (const gp_Mat2d & (gp_GTrsf2d::*)() const) static_cast<const gp_Mat2d & (gp_GTrsf2d::*)() const>(&gp_GTrsf2d::VectorialPart),
             R"#(Computes the vectorial part of the GTrsf2d. The returned Matrix is a 2*2 matrix.)#" )
        .def("Value",
             (Standard_Real (gp_GTrsf2d::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (gp_GTrsf2d::*)( const Standard_Integer , const Standard_Integer ) const>(&gp_GTrsf2d::Value),
             R"#(Returns the coefficients of the global matrix of transformation. Raised OutOfRange if Row < 1 or Row > 2 or Col < 1 or Col > 3)#"  , py::arg("Row"),  py::arg("Col"))
        .def("Invert",
             (void (gp_GTrsf2d::*)() ) static_cast<void (gp_GTrsf2d::*)() >(&gp_GTrsf2d::Invert),
             R"#(None)#" )
        .def("Inverted",
             (gp_GTrsf2d (gp_GTrsf2d::*)() const) static_cast<gp_GTrsf2d (gp_GTrsf2d::*)() const>(&gp_GTrsf2d::Inverted),
             R"#(Computes the reverse transformation. Raised an exception if the matrix of the transformation is not inversible.)#" )
        .def("Multiplied",
             (gp_GTrsf2d (gp_GTrsf2d::*)( const gp_GTrsf2d & ) const) static_cast<gp_GTrsf2d (gp_GTrsf2d::*)( const gp_GTrsf2d & ) const>(&gp_GTrsf2d::Multiplied),
             R"#(Computes the transformation composed with T and <me>. In a C++ implementation you can also write Tcomposed = <me> * T. Example : GTrsf2d T1, T2, Tcomp; ............... //composition : Tcomp = T2.Multiplied(T1); // or (Tcomp = T2 * T1) // transformation of a point XY P(10.,3.); XY P1(P); Tcomp.Transforms(P1); //using Tcomp XY P2(P); T1.Transforms(P2); //using T1 then T2 T2.Transforms(P2); // P1 = P2 !!!)#"  , py::arg("T"))
        .def("Multiply",
             (void (gp_GTrsf2d::*)( const gp_GTrsf2d & ) ) static_cast<void (gp_GTrsf2d::*)( const gp_GTrsf2d & ) >(&gp_GTrsf2d::Multiply),
             R"#(None)#"  , py::arg("T"))
        .def("PreMultiply",
             (void (gp_GTrsf2d::*)( const gp_GTrsf2d & ) ) static_cast<void (gp_GTrsf2d::*)( const gp_GTrsf2d & ) >(&gp_GTrsf2d::PreMultiply),
             R"#(Computes the product of the transformation T and this transformation, and assigns the result to this transformation: this = T * this)#"  , py::arg("T"))
        .def("Power",
             (void (gp_GTrsf2d::*)( const Standard_Integer ) ) static_cast<void (gp_GTrsf2d::*)( const Standard_Integer ) >(&gp_GTrsf2d::Power),
             R"#(None)#"  , py::arg("N"))
        .def("Powered",
             (gp_GTrsf2d (gp_GTrsf2d::*)( const Standard_Integer ) const) static_cast<gp_GTrsf2d (gp_GTrsf2d::*)( const Standard_Integer ) const>(&gp_GTrsf2d::Powered),
             R"#(Computes the following composition of transformations <me> * <me> * .......* <me>, N time. if N = 0 <me> = Identity if N < 0 <me> = <me>.Inverse() *...........* <me>.Inverse().)#"  , py::arg("N"))
        .def("Transforms",
             (void (gp_GTrsf2d::*)( gp_XY & ) const) static_cast<void (gp_GTrsf2d::*)( gp_XY & ) const>(&gp_GTrsf2d::Transforms),
             R"#(None)#"  , py::arg("Coord"))
        .def("Transformed",
             (gp_XY (gp_GTrsf2d::*)( const gp_XY & ) const) static_cast<gp_XY (gp_GTrsf2d::*)( const gp_XY & ) const>(&gp_GTrsf2d::Transformed),
             R"#(None)#"  , py::arg("Coord"))
        .def("Trsf2d",
             (gp_Trsf2d (gp_GTrsf2d::*)() const) static_cast<gp_Trsf2d (gp_GTrsf2d::*)() const>(&gp_GTrsf2d::Trsf2d),
             R"#(Converts this transformation into a gp_Trsf2d transformation. Exceptions Standard_ConstructionError if this transformation cannot be converted, i.e. if its form is gp_Other.)#" )
        .def("SetValue",
             (void (gp_GTrsf2d::*)( const Standard_Integer , const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_GTrsf2d::*)( const Standard_Integer , const Standard_Integer , const Standard_Real ) >(&gp_GTrsf2d::SetValue),
             R"#(Replaces the coefficient (Row, Col) of the matrix representing this transformation by Value, Raises OutOfRange if Row < 1 or Row > 2 or Col < 1 or Col > 3)#"  , py::arg("Row"),  py::arg("Col"),  py::arg("Value"))
        .def("SetTrsf2d",
             (void (gp_GTrsf2d::*)( const gp_Trsf2d & ) ) static_cast<void (gp_GTrsf2d::*)( const gp_Trsf2d & ) >(&gp_GTrsf2d::SetTrsf2d),
             R"#(Assigns the vectorial and translation parts of T to this transformation.)#"  , py::arg("T"))
        .def("SetVectorialPart",
             (void (gp_GTrsf2d::*)( const gp_Mat2d & ) ) static_cast<void (gp_GTrsf2d::*)( const gp_Mat2d & ) >(&gp_GTrsf2d::SetVectorialPart),
             R"#(Replaces the vectorial part of this transformation by Matrix.)#"  , py::arg("Matrix"))
        .def("IsNegative",
             (Standard_Boolean (gp_GTrsf2d::*)() const) static_cast<Standard_Boolean (gp_GTrsf2d::*)() const>(&gp_GTrsf2d::IsNegative),
             R"#(Returns true if the determinant of the vectorial part of this transformation is negative.)#" )
        .def("IsSingular",
             (Standard_Boolean (gp_GTrsf2d::*)() const) static_cast<Standard_Boolean (gp_GTrsf2d::*)() const>(&gp_GTrsf2d::IsSingular),
             R"#(Returns true if this transformation is singular (and therefore, cannot be inverted). Note: The Gauss LU decomposition is used to invert the transformation matrix. Consequently, the transformation is considered as singular if the largest pivot found is less than or equal to gp::Resolution(). Warning If this transformation is singular, it cannot be inverted.)#" )
        .def("VectorialPart",
             (const gp_Mat2d & (gp_GTrsf2d::*)() const) static_cast<const gp_Mat2d & (gp_GTrsf2d::*)() const>(&gp_GTrsf2d::VectorialPart),
             R"#(Computes the vectorial part of the GTrsf2d. The returned Matrix is a 2*2 matrix.)#" )
        .def("Value",
             (Standard_Real (gp_GTrsf2d::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (gp_GTrsf2d::*)( const Standard_Integer , const Standard_Integer ) const>(&gp_GTrsf2d::Value),
             R"#(Returns the coefficients of the global matrix of transformation. Raised OutOfRange if Row < 1 or Row > 2 or Col < 1 or Col > 3)#"  , py::arg("Row"),  py::arg("Col"))
        .def("Form",
             (gp_TrsfForm (gp_GTrsf2d::*)() const) static_cast<gp_TrsfForm (gp_GTrsf2d::*)() const>(&gp_GTrsf2d::Form),
             R"#(Returns the nature of the transformation. It can be an identity transformation, a rotation, a translation, a mirror transformation (relative to a point or axis), a scaling transformation, a compound transformation or some other type of transformation.)#" )
        .def("TranslationPart",
             (const gp_XY & (gp_GTrsf2d::*)() const) static_cast<const gp_XY & (gp_GTrsf2d::*)() const>(&gp_GTrsf2d::TranslationPart),
             R"#(Returns the translation part of the GTrsf2d.)#" )
        .def("Inverted",
             (gp_GTrsf2d (gp_GTrsf2d::*)() const) static_cast<gp_GTrsf2d (gp_GTrsf2d::*)() const>(&gp_GTrsf2d::Inverted),
             R"#(Computes the reverse transformation. Raised an exception if the matrix of the transformation is not inversible.)#" )
        .def("Multiplied",
             (gp_GTrsf2d (gp_GTrsf2d::*)( const gp_GTrsf2d & ) const) static_cast<gp_GTrsf2d (gp_GTrsf2d::*)( const gp_GTrsf2d & ) const>(&gp_GTrsf2d::Multiplied),
             R"#(Computes the transformation composed with T and <me>. In a C++ implementation you can also write Tcomposed = <me> * T. Example : GTrsf2d T1, T2, Tcomp; ............... //composition : Tcomp = T2.Multiplied(T1); // or (Tcomp = T2 * T1) // transformation of a point XY P(10.,3.); XY P1(P); Tcomp.Transforms(P1); //using Tcomp XY P2(P); T1.Transforms(P2); //using T1 then T2 T2.Transforms(P2); // P1 = P2 !!!)#"  , py::arg("T"))
        .def("Powered",
             (gp_GTrsf2d (gp_GTrsf2d::*)( const Standard_Integer ) const) static_cast<gp_GTrsf2d (gp_GTrsf2d::*)( const Standard_Integer ) const>(&gp_GTrsf2d::Powered),
             R"#(Computes the following composition of transformations <me> * <me> * .......* <me>, N time. if N = 0 <me> = Identity if N < 0 <me> = <me>.Inverse() *...........* <me>.Inverse().)#"  , py::arg("N"))
        .def("Transforms",
             (void (gp_GTrsf2d::*)( gp_XY & ) const) static_cast<void (gp_GTrsf2d::*)( gp_XY & ) const>(&gp_GTrsf2d::Transforms),
             R"#(None)#"  , py::arg("Coord"))
        .def("Transformed",
             (gp_XY (gp_GTrsf2d::*)( const gp_XY & ) const) static_cast<gp_XY (gp_GTrsf2d::*)( const gp_XY & ) const>(&gp_GTrsf2d::Transformed),
             R"#(None)#"  , py::arg("Coord"))
    // methods using call by reference i.s.o. return
        .def("Transforms",
             []( gp_GTrsf2d &self   ){ Standard_Real  X; Standard_Real  Y; self.Transforms(X,Y); return std::make_tuple(X,Y); },
             R"#(Applies this transformation to the coordinates: - of the number pair Coord, or - X and Y.)#" )
        .def("Transforms",
             []( gp_GTrsf2d &self   ){ Standard_Real  X; Standard_Real  Y; self.Transforms(X,Y); return std::make_tuple(X,Y); },
             R"#(Applies this transformation to the coordinates: - of the number pair Coord, or - X and Y.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
        .def("__mul__",
             (gp_GTrsf2d (gp_GTrsf2d::*)( const gp_GTrsf2d & ) const) static_cast<gp_GTrsf2d (gp_GTrsf2d::*)( const gp_GTrsf2d & ) const>(&gp_GTrsf2d::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("T"))
        .def("__rmul__",
             (gp_GTrsf2d (gp_GTrsf2d::*)( const gp_GTrsf2d & ) const) static_cast<gp_GTrsf2d (gp_GTrsf2d::*)( const gp_GTrsf2d & ) const>(&gp_GTrsf2d::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("T"))
        .def("__imul__",
             (void (gp_GTrsf2d::*)( const gp_GTrsf2d & ) ) static_cast<void (gp_GTrsf2d::*)( const gp_GTrsf2d & ) >(&gp_GTrsf2d::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("T"))
    // additional methods and static methods
;


    static_cast<py::class_<gp_Hypr , shared_ptr<gp_Hypr> >>(m.attr("gp_Hypr"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real >()  , py::arg("A2"),  py::arg("MajorRadius"),  py::arg("MinorRadius") )
    // custom constructors
    // methods
        .def("SetAxis",
             (void (gp_Hypr::*)( const gp_Ax1 & ) ) static_cast<void (gp_Hypr::*)( const gp_Ax1 & ) >(&gp_Hypr::SetAxis),
             R"#(Modifies this hyperbola, by redefining its local coordinate system so that: - its origin and "main Direction" become those of the axis A1 (the "X Direction" and "Y Direction" are then recomputed in the same way as for any gp_Ax2). Raises ConstructionError if the direction of A1 is parallel to the direction of the "XAxis" of the hyperbola.)#"  , py::arg("A1"))
        .def("SetLocation",
             (void (gp_Hypr::*)( const gp_Pnt & ) ) static_cast<void (gp_Hypr::*)( const gp_Pnt & ) >(&gp_Hypr::SetLocation),
             R"#(Modifies this hyperbola, by redefining its local coordinate system so that its origin becomes P.)#"  , py::arg("P"))
        .def("SetMajorRadius",
             (void (gp_Hypr::*)( const Standard_Real ) ) static_cast<void (gp_Hypr::*)( const Standard_Real ) >(&gp_Hypr::SetMajorRadius),
             R"#(Modifies the major radius of this hyperbola. Exceptions Standard_ConstructionError if MajorRadius is negative.)#"  , py::arg("MajorRadius"))
        .def("SetMinorRadius",
             (void (gp_Hypr::*)( const Standard_Real ) ) static_cast<void (gp_Hypr::*)( const Standard_Real ) >(&gp_Hypr::SetMinorRadius),
             R"#(Modifies the minor radius of this hyperbola. Exceptions Standard_ConstructionError if MinorRadius is negative.)#"  , py::arg("MinorRadius"))
        .def("SetPosition",
             (void (gp_Hypr::*)( const gp_Ax2 & ) ) static_cast<void (gp_Hypr::*)( const gp_Ax2 & ) >(&gp_Hypr::SetPosition),
             R"#(Modifies this hyperbola, by redefining its local coordinate system so that it becomes A2.)#"  , py::arg("A2"))
        .def("Asymptote1",
             (gp_Ax1 (gp_Hypr::*)() const) static_cast<gp_Ax1 (gp_Hypr::*)() const>(&gp_Hypr::Asymptote1),
             R"#(In the local coordinate system of the hyperbola the equation of the hyperbola is (X*X)/(A*A) - (Y*Y)/(B*B) = 1.0 and the equation of the first asymptote is Y = (B/A)*X where A is the major radius and B is the minor radius. Raises ConstructionError if MajorRadius = 0.0)#" )
        .def("Asymptote2",
             (gp_Ax1 (gp_Hypr::*)() const) static_cast<gp_Ax1 (gp_Hypr::*)() const>(&gp_Hypr::Asymptote2),
             R"#(In the local coordinate system of the hyperbola the equation of the hyperbola is (X*X)/(A*A) - (Y*Y)/(B*B) = 1.0 and the equation of the first asymptote is Y = -(B/A)*X. where A is the major radius and B is the minor radius. Raises ConstructionError if MajorRadius = 0.0)#" )
        .def("Axis",
             (const gp_Ax1 & (gp_Hypr::*)() const) static_cast<const gp_Ax1 & (gp_Hypr::*)() const>(&gp_Hypr::Axis),
             R"#(Returns the axis passing through the center, and normal to the plane of this hyperbola.)#" )
        .def("ConjugateBranch1",
             (gp_Hypr (gp_Hypr::*)() const) static_cast<gp_Hypr (gp_Hypr::*)() const>(&gp_Hypr::ConjugateBranch1),
             R"#(Computes the branch of hyperbola which is on the positive side of the "YAxis" of <me>.)#" )
        .def("ConjugateBranch2",
             (gp_Hypr (gp_Hypr::*)() const) static_cast<gp_Hypr (gp_Hypr::*)() const>(&gp_Hypr::ConjugateBranch2),
             R"#(Computes the branch of hyperbola which is on the negative side of the "YAxis" of <me>.)#" )
        .def("Directrix1",
             (gp_Ax1 (gp_Hypr::*)() const) static_cast<gp_Ax1 (gp_Hypr::*)() const>(&gp_Hypr::Directrix1),
             R"#(This directrix is the line normal to the XAxis of the hyperbola in the local plane (Z = 0) at a distance d = MajorRadius / e from the center of the hyperbola, where e is the eccentricity of the hyperbola. This line is parallel to the "YAxis". The intersection point between the directrix1 and the "XAxis" is the "Location" point of the directrix1. This point is on the positive side of the "XAxis".)#" )
        .def("Directrix2",
             (gp_Ax1 (gp_Hypr::*)() const) static_cast<gp_Ax1 (gp_Hypr::*)() const>(&gp_Hypr::Directrix2),
             R"#(This line is obtained by the symmetrical transformation of "Directrix1" with respect to the "YAxis" of the hyperbola.)#" )
        .def("Eccentricity",
             (Standard_Real (gp_Hypr::*)() const) static_cast<Standard_Real (gp_Hypr::*)() const>(&gp_Hypr::Eccentricity),
             R"#(Returns the excentricity of the hyperbola (e > 1). If f is the distance between the location of the hyperbola and the Focus1 then the eccentricity e = f / MajorRadius. Raises DomainError if MajorRadius = 0.0)#" )
        .def("Focal",
             (Standard_Real (gp_Hypr::*)() const) static_cast<Standard_Real (gp_Hypr::*)() const>(&gp_Hypr::Focal),
             R"#(Computes the focal distance. It is the distance between the the two focus of the hyperbola.)#" )
        .def("Focus1",
             (gp_Pnt (gp_Hypr::*)() const) static_cast<gp_Pnt (gp_Hypr::*)() const>(&gp_Hypr::Focus1),
             R"#(Returns the first focus of the hyperbola. This focus is on the positive side of the "XAxis" of the hyperbola.)#" )
        .def("Focus2",
             (gp_Pnt (gp_Hypr::*)() const) static_cast<gp_Pnt (gp_Hypr::*)() const>(&gp_Hypr::Focus2),
             R"#(Returns the second focus of the hyperbola. This focus is on the negative side of the "XAxis" of the hyperbola.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Hypr::*)() const) static_cast<const gp_Pnt & (gp_Hypr::*)() const>(&gp_Hypr::Location),
             R"#(Returns the location point of the hyperbola. It is the intersection point between the "XAxis" and the "YAxis".)#" )
        .def("MajorRadius",
             (Standard_Real (gp_Hypr::*)() const) static_cast<Standard_Real (gp_Hypr::*)() const>(&gp_Hypr::MajorRadius),
             R"#(Returns the major radius of the hyperbola. It is the radius on the "XAxis" of the hyperbola.)#" )
        .def("MinorRadius",
             (Standard_Real (gp_Hypr::*)() const) static_cast<Standard_Real (gp_Hypr::*)() const>(&gp_Hypr::MinorRadius),
             R"#(Returns the minor radius of the hyperbola. It is the radius on the "YAxis" of the hyperbola.)#" )
        .def("OtherBranch",
             (gp_Hypr (gp_Hypr::*)() const) static_cast<gp_Hypr (gp_Hypr::*)() const>(&gp_Hypr::OtherBranch),
             R"#(Returns the branch of hyperbola obtained by doing the symmetrical transformation of <me> with respect to the "YAxis" of <me>.)#" )
        .def("Parameter",
             (Standard_Real (gp_Hypr::*)() const) static_cast<Standard_Real (gp_Hypr::*)() const>(&gp_Hypr::Parameter),
             R"#(Returns p = (e * e - 1) * MajorRadius where e is the eccentricity of the hyperbola. Raises DomainError if MajorRadius = 0.0)#" )
        .def("Position",
             (const gp_Ax2 & (gp_Hypr::*)() const) static_cast<const gp_Ax2 & (gp_Hypr::*)() const>(&gp_Hypr::Position),
             R"#(Returns the coordinate system of the hyperbola.)#" )
        .def("XAxis",
             (gp_Ax1 (gp_Hypr::*)() const) static_cast<gp_Ax1 (gp_Hypr::*)() const>(&gp_Hypr::XAxis),
             R"#(Computes an axis, whose - the origin is the center of this hyperbola, and - the unit vector is the "X Direction" of the local coordinate system of this hyperbola. These axes are, the major axis (the "X Axis") and of this hyperboReturns the "XAxis" of the hyperbola.)#" )
        .def("YAxis",
             (gp_Ax1 (gp_Hypr::*)() const) static_cast<gp_Ax1 (gp_Hypr::*)() const>(&gp_Hypr::YAxis),
             R"#(Computes an axis, whose - the origin is the center of this hyperbola, and - the unit vector is the "Y Direction" of the local coordinate system of this hyperbola. These axes are the minor axis (the "Y Axis") of this hyperbola)#" )
        .def("Mirror",
             (void (gp_Hypr::*)( const gp_Pnt & ) ) static_cast<void (gp_Hypr::*)( const gp_Pnt & ) >(&gp_Hypr::Mirror),
             R"#(None)#"  , py::arg("P"))
        .def("Mirrored",
             (gp_Hypr (gp_Hypr::*)( const gp_Pnt & ) const) static_cast<gp_Hypr (gp_Hypr::*)( const gp_Pnt & ) const>(&gp_Hypr::Mirrored),
             R"#(Performs the symmetrical transformation of an hyperbola with respect to the point P which is the center of the symmetry.)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Hypr::*)( const gp_Ax1 & ) ) static_cast<void (gp_Hypr::*)( const gp_Ax1 & ) >(&gp_Hypr::Mirror),
             R"#(None)#"  , py::arg("A1"))
        .def("Mirrored",
             (gp_Hypr (gp_Hypr::*)( const gp_Ax1 & ) const) static_cast<gp_Hypr (gp_Hypr::*)( const gp_Ax1 & ) const>(&gp_Hypr::Mirrored),
             R"#(Performs the symmetrical transformation of an hyperbola with respect to an axis placement which is the axis of the symmetry.)#"  , py::arg("A1"))
        .def("Mirror",
             (void (gp_Hypr::*)( const gp_Ax2 & ) ) static_cast<void (gp_Hypr::*)( const gp_Ax2 & ) >(&gp_Hypr::Mirror),
             R"#(None)#"  , py::arg("A2"))
        .def("Mirrored",
             (gp_Hypr (gp_Hypr::*)( const gp_Ax2 & ) const) static_cast<gp_Hypr (gp_Hypr::*)( const gp_Ax2 & ) const>(&gp_Hypr::Mirrored),
             R"#(Performs the symmetrical transformation of an hyperbola with respect to a plane. The axis placement A2 locates the plane of the symmetry (Location, XDirection, YDirection).)#"  , py::arg("A2"))
        .def("Rotate",
             (void (gp_Hypr::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Hypr::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Hypr::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Hypr (gp_Hypr::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Hypr (gp_Hypr::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Hypr::Rotated),
             R"#(Rotates an hyperbola. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Hypr::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Hypr::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Hypr::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Hypr (gp_Hypr::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Hypr (gp_Hypr::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Hypr::Scaled),
             R"#(Scales an hyperbola. S is the scaling value.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Hypr::*)( const gp_Trsf & ) ) static_cast<void (gp_Hypr::*)( const gp_Trsf & ) >(&gp_Hypr::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Hypr (gp_Hypr::*)( const gp_Trsf & ) const) static_cast<gp_Hypr (gp_Hypr::*)( const gp_Trsf & ) const>(&gp_Hypr::Transformed),
             R"#(Transforms an hyperbola with the transformation T from class Trsf.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Hypr::*)( const gp_Vec & ) ) static_cast<void (gp_Hypr::*)( const gp_Vec & ) >(&gp_Hypr::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Hypr (gp_Hypr::*)( const gp_Vec & ) const) static_cast<gp_Hypr (gp_Hypr::*)( const gp_Vec & ) const>(&gp_Hypr::Translated),
             R"#(Translates an hyperbola in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Hypr::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Hypr::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Hypr::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Hypr (gp_Hypr::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Hypr (gp_Hypr::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Hypr::Translated),
             R"#(Translates an hyperbola from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetAxis",
             (void (gp_Hypr::*)( const gp_Ax1 & ) ) static_cast<void (gp_Hypr::*)( const gp_Ax1 & ) >(&gp_Hypr::SetAxis),
             R"#(Modifies this hyperbola, by redefining its local coordinate system so that: - its origin and "main Direction" become those of the axis A1 (the "X Direction" and "Y Direction" are then recomputed in the same way as for any gp_Ax2). Raises ConstructionError if the direction of A1 is parallel to the direction of the "XAxis" of the hyperbola.)#"  , py::arg("A1"))
        .def("SetLocation",
             (void (gp_Hypr::*)( const gp_Pnt & ) ) static_cast<void (gp_Hypr::*)( const gp_Pnt & ) >(&gp_Hypr::SetLocation),
             R"#(Modifies this hyperbola, by redefining its local coordinate system so that its origin becomes P.)#"  , py::arg("P"))
        .def("SetMajorRadius",
             (void (gp_Hypr::*)( const Standard_Real ) ) static_cast<void (gp_Hypr::*)( const Standard_Real ) >(&gp_Hypr::SetMajorRadius),
             R"#(Modifies the major radius of this hyperbola. Exceptions Standard_ConstructionError if MajorRadius is negative.)#"  , py::arg("R"))
        .def("SetMinorRadius",
             (void (gp_Hypr::*)( const Standard_Real ) ) static_cast<void (gp_Hypr::*)( const Standard_Real ) >(&gp_Hypr::SetMinorRadius),
             R"#(Modifies the minor radius of this hyperbola. Exceptions Standard_ConstructionError if MinorRadius is negative.)#"  , py::arg("R"))
        .def("SetPosition",
             (void (gp_Hypr::*)( const gp_Ax2 & ) ) static_cast<void (gp_Hypr::*)( const gp_Ax2 & ) >(&gp_Hypr::SetPosition),
             R"#(Modifies this hyperbola, by redefining its local coordinate system so that it becomes A2.)#"  , py::arg("A2"))
        .def("Asymptote1",
             (gp_Ax1 (gp_Hypr::*)() const) static_cast<gp_Ax1 (gp_Hypr::*)() const>(&gp_Hypr::Asymptote1),
             R"#(In the local coordinate system of the hyperbola the equation of the hyperbola is (X*X)/(A*A) - (Y*Y)/(B*B) = 1.0 and the equation of the first asymptote is Y = (B/A)*X where A is the major radius and B is the minor radius. Raises ConstructionError if MajorRadius = 0.0)#" )
        .def("Asymptote2",
             (gp_Ax1 (gp_Hypr::*)() const) static_cast<gp_Ax1 (gp_Hypr::*)() const>(&gp_Hypr::Asymptote2),
             R"#(In the local coordinate system of the hyperbola the equation of the hyperbola is (X*X)/(A*A) - (Y*Y)/(B*B) = 1.0 and the equation of the first asymptote is Y = -(B/A)*X. where A is the major radius and B is the minor radius. Raises ConstructionError if MajorRadius = 0.0)#" )
        .def("Axis",
             (const gp_Ax1 & (gp_Hypr::*)() const) static_cast<const gp_Ax1 & (gp_Hypr::*)() const>(&gp_Hypr::Axis),
             R"#(Returns the axis passing through the center, and normal to the plane of this hyperbola.)#" )
        .def("ConjugateBranch1",
             (gp_Hypr (gp_Hypr::*)() const) static_cast<gp_Hypr (gp_Hypr::*)() const>(&gp_Hypr::ConjugateBranch1),
             R"#(Computes the branch of hyperbola which is on the positive side of the "YAxis" of <me>.)#" )
        .def("ConjugateBranch2",
             (gp_Hypr (gp_Hypr::*)() const) static_cast<gp_Hypr (gp_Hypr::*)() const>(&gp_Hypr::ConjugateBranch2),
             R"#(Computes the branch of hyperbola which is on the negative side of the "YAxis" of <me>.)#" )
        .def("Directrix1",
             (gp_Ax1 (gp_Hypr::*)() const) static_cast<gp_Ax1 (gp_Hypr::*)() const>(&gp_Hypr::Directrix1),
             R"#(This directrix is the line normal to the XAxis of the hyperbola in the local plane (Z = 0) at a distance d = MajorRadius / e from the center of the hyperbola, where e is the eccentricity of the hyperbola. This line is parallel to the "YAxis". The intersection point between the directrix1 and the "XAxis" is the "Location" point of the directrix1. This point is on the positive side of the "XAxis".)#" )
        .def("Directrix2",
             (gp_Ax1 (gp_Hypr::*)() const) static_cast<gp_Ax1 (gp_Hypr::*)() const>(&gp_Hypr::Directrix2),
             R"#(This line is obtained by the symmetrical transformation of "Directrix1" with respect to the "YAxis" of the hyperbola.)#" )
        .def("Eccentricity",
             (Standard_Real (gp_Hypr::*)() const) static_cast<Standard_Real (gp_Hypr::*)() const>(&gp_Hypr::Eccentricity),
             R"#(Returns the excentricity of the hyperbola (e > 1). If f is the distance between the location of the hyperbola and the Focus1 then the eccentricity e = f / MajorRadius. Raises DomainError if MajorRadius = 0.0)#" )
        .def("Focal",
             (Standard_Real (gp_Hypr::*)() const) static_cast<Standard_Real (gp_Hypr::*)() const>(&gp_Hypr::Focal),
             R"#(Computes the focal distance. It is the distance between the the two focus of the hyperbola.)#" )
        .def("Focus1",
             (gp_Pnt (gp_Hypr::*)() const) static_cast<gp_Pnt (gp_Hypr::*)() const>(&gp_Hypr::Focus1),
             R"#(Returns the first focus of the hyperbola. This focus is on the positive side of the "XAxis" of the hyperbola.)#" )
        .def("Focus2",
             (gp_Pnt (gp_Hypr::*)() const) static_cast<gp_Pnt (gp_Hypr::*)() const>(&gp_Hypr::Focus2),
             R"#(Returns the second focus of the hyperbola. This focus is on the negative side of the "XAxis" of the hyperbola.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Hypr::*)() const) static_cast<const gp_Pnt & (gp_Hypr::*)() const>(&gp_Hypr::Location),
             R"#(Returns the location point of the hyperbola. It is the intersection point between the "XAxis" and the "YAxis".)#" )
        .def("MajorRadius",
             (Standard_Real (gp_Hypr::*)() const) static_cast<Standard_Real (gp_Hypr::*)() const>(&gp_Hypr::MajorRadius),
             R"#(Returns the major radius of the hyperbola. It is the radius on the "XAxis" of the hyperbola.)#" )
        .def("MinorRadius",
             (Standard_Real (gp_Hypr::*)() const) static_cast<Standard_Real (gp_Hypr::*)() const>(&gp_Hypr::MinorRadius),
             R"#(Returns the minor radius of the hyperbola. It is the radius on the "YAxis" of the hyperbola.)#" )
        .def("OtherBranch",
             (gp_Hypr (gp_Hypr::*)() const) static_cast<gp_Hypr (gp_Hypr::*)() const>(&gp_Hypr::OtherBranch),
             R"#(Returns the branch of hyperbola obtained by doing the symmetrical transformation of <me> with respect to the "YAxis" of <me>.)#" )
        .def("Parameter",
             (Standard_Real (gp_Hypr::*)() const) static_cast<Standard_Real (gp_Hypr::*)() const>(&gp_Hypr::Parameter),
             R"#(Returns p = (e * e - 1) * MajorRadius where e is the eccentricity of the hyperbola. Raises DomainError if MajorRadius = 0.0)#" )
        .def("Position",
             (const gp_Ax2 & (gp_Hypr::*)() const) static_cast<const gp_Ax2 & (gp_Hypr::*)() const>(&gp_Hypr::Position),
             R"#(Returns the coordinate system of the hyperbola.)#" )
        .def("XAxis",
             (gp_Ax1 (gp_Hypr::*)() const) static_cast<gp_Ax1 (gp_Hypr::*)() const>(&gp_Hypr::XAxis),
             R"#(Computes an axis, whose - the origin is the center of this hyperbola, and - the unit vector is the "X Direction" of the local coordinate system of this hyperbola. These axes are, the major axis (the "X Axis") and of this hyperboReturns the "XAxis" of the hyperbola.)#" )
        .def("YAxis",
             (gp_Ax1 (gp_Hypr::*)() const) static_cast<gp_Ax1 (gp_Hypr::*)() const>(&gp_Hypr::YAxis),
             R"#(Computes an axis, whose - the origin is the center of this hyperbola, and - the unit vector is the "Y Direction" of the local coordinate system of this hyperbola. These axes are the minor axis (the "Y Axis") of this hyperbola)#" )
        .def("Rotate",
             (void (gp_Hypr::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Hypr::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Hypr::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Hypr (gp_Hypr::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Hypr (gp_Hypr::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Hypr::Rotated),
             R"#(Rotates an hyperbola. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Hypr::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Hypr::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Hypr::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Hypr (gp_Hypr::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Hypr (gp_Hypr::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Hypr::Scaled),
             R"#(Scales an hyperbola. S is the scaling value.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Hypr::*)( const gp_Trsf & ) ) static_cast<void (gp_Hypr::*)( const gp_Trsf & ) >(&gp_Hypr::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Hypr (gp_Hypr::*)( const gp_Trsf & ) const) static_cast<gp_Hypr (gp_Hypr::*)( const gp_Trsf & ) const>(&gp_Hypr::Transformed),
             R"#(Transforms an hyperbola with the transformation T from class Trsf.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Hypr::*)( const gp_Vec & ) ) static_cast<void (gp_Hypr::*)( const gp_Vec & ) >(&gp_Hypr::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Hypr (gp_Hypr::*)( const gp_Vec & ) const) static_cast<gp_Hypr (gp_Hypr::*)( const gp_Vec & ) const>(&gp_Hypr::Translated),
             R"#(Translates an hyperbola in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Hypr::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Hypr::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Hypr::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Hypr (gp_Hypr::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Hypr (gp_Hypr::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Hypr::Translated),
             R"#(Translates an hyperbola from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_Hypr2d , shared_ptr<gp_Hypr2d> >>(m.attr("gp_Hypr2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Ax2d &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("MajorAxis"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Ax22d &,const Standard_Real,const Standard_Real >()  , py::arg("A"),  py::arg("MajorRadius"),  py::arg("MinorRadius") )
    // custom constructors
    // methods
        .def("SetLocation",
             (void (gp_Hypr2d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Hypr2d::*)( const gp_Pnt2d & ) >(&gp_Hypr2d::SetLocation),
             R"#(Modifies this hyperbola, by redefining its local coordinate system so that its origin becomes P.)#"  , py::arg("P"))
        .def("SetMajorRadius",
             (void (gp_Hypr2d::*)( const Standard_Real ) ) static_cast<void (gp_Hypr2d::*)( const Standard_Real ) >(&gp_Hypr2d::SetMajorRadius),
             R"#(Modifies the major or minor radius of this hyperbola. Exceptions Standard_ConstructionError if MajorRadius or MinorRadius is negative.)#"  , py::arg("MajorRadius"))
        .def("SetMinorRadius",
             (void (gp_Hypr2d::*)( const Standard_Real ) ) static_cast<void (gp_Hypr2d::*)( const Standard_Real ) >(&gp_Hypr2d::SetMinorRadius),
             R"#(Modifies the major or minor radius of this hyperbola. Exceptions Standard_ConstructionError if MajorRadius or MinorRadius is negative.)#"  , py::arg("MinorRadius"))
        .def("SetAxis",
             (void (gp_Hypr2d::*)( const gp_Ax22d & ) ) static_cast<void (gp_Hypr2d::*)( const gp_Ax22d & ) >(&gp_Hypr2d::SetAxis),
             R"#(Modifies this hyperbola, by redefining its local coordinate system so that it becomes A.)#"  , py::arg("A"))
        .def("SetXAxis",
             (void (gp_Hypr2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Hypr2d::*)( const gp_Ax2d & ) >(&gp_Hypr2d::SetXAxis),
             R"#(Changes the major axis of the hyperbola. The minor axis is recomputed and the location of the hyperbola too.)#"  , py::arg("A"))
        .def("SetYAxis",
             (void (gp_Hypr2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Hypr2d::*)( const gp_Ax2d & ) >(&gp_Hypr2d::SetYAxis),
             R"#(Changes the minor axis of the hyperbola.The minor axis is recomputed and the location of the hyperbola too.)#"  , py::arg("A"))
        .def("Asymptote1",
             (gp_Ax2d (gp_Hypr2d::*)() const) static_cast<gp_Ax2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::Asymptote1),
             R"#(In the local coordinate system of the hyperbola the equation of the hyperbola is (X*X)/(A*A) - (Y*Y)/(B*B) = 1.0 and the equation of the first asymptote is Y = (B/A)*X where A is the major radius of the hyperbola and B the minor radius of the hyperbola. Raises ConstructionError if MajorRadius = 0.0)#" )
        .def("Asymptote2",
             (gp_Ax2d (gp_Hypr2d::*)() const) static_cast<gp_Ax2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::Asymptote2),
             R"#(In the local coordinate system of the hyperbola the equation of the hyperbola is (X*X)/(A*A) - (Y*Y)/(B*B) = 1.0 and the equation of the first asymptote is Y = -(B/A)*X where A is the major radius of the hyperbola and B the minor radius of the hyperbola. Raises ConstructionError if MajorRadius = 0.0)#" )
        .def("ConjugateBranch1",
             (gp_Hypr2d (gp_Hypr2d::*)() const) static_cast<gp_Hypr2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::ConjugateBranch1),
             R"#(Computes the branch of hyperbola which is on the positive side of the "YAxis" of <me>.)#" )
        .def("ConjugateBranch2",
             (gp_Hypr2d (gp_Hypr2d::*)() const) static_cast<gp_Hypr2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::ConjugateBranch2),
             R"#(Computes the branch of hyperbola which is on the negative side of the "YAxis" of <me>.)#" )
        .def("Directrix1",
             (gp_Ax2d (gp_Hypr2d::*)() const) static_cast<gp_Ax2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::Directrix1),
             R"#(Computes the directrix which is the line normal to the XAxis of the hyperbola in the local plane (Z = 0) at a distance d = MajorRadius / e from the center of the hyperbola, where e is the eccentricity of the hyperbola. This line is parallel to the "YAxis". The intersection point between the "Directrix1" and the "XAxis" is the "Location" point of the "Directrix1". This point is on the positive side of the "XAxis".)#" )
        .def("Directrix2",
             (gp_Ax2d (gp_Hypr2d::*)() const) static_cast<gp_Ax2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::Directrix2),
             R"#(This line is obtained by the symmetrical transformation of "Directrix1" with respect to the "YAxis" of the hyperbola.)#" )
        .def("Eccentricity",
             (Standard_Real (gp_Hypr2d::*)() const) static_cast<Standard_Real (gp_Hypr2d::*)() const>(&gp_Hypr2d::Eccentricity),
             R"#(Returns the excentricity of the hyperbola (e > 1). If f is the distance between the location of the hyperbola and the Focus1 then the eccentricity e = f / MajorRadius. Raises DomainError if MajorRadius = 0.0.)#" )
        .def("Focal",
             (Standard_Real (gp_Hypr2d::*)() const) static_cast<Standard_Real (gp_Hypr2d::*)() const>(&gp_Hypr2d::Focal),
             R"#(Computes the focal distance. It is the distance between the "Location" of the hyperbola and "Focus1" or "Focus2".)#" )
        .def("Focus1",
             (gp_Pnt2d (gp_Hypr2d::*)() const) static_cast<gp_Pnt2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::Focus1),
             R"#(Returns the first focus of the hyperbola. This focus is on the positive side of the "XAxis" of the hyperbola.)#" )
        .def("Focus2",
             (gp_Pnt2d (gp_Hypr2d::*)() const) static_cast<gp_Pnt2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::Focus2),
             R"#(Returns the second focus of the hyperbola. This focus is on the negative side of the "XAxis" of the hyperbola.)#" )
        .def("Location",
             (const gp_Pnt2d & (gp_Hypr2d::*)() const) static_cast<const gp_Pnt2d & (gp_Hypr2d::*)() const>(&gp_Hypr2d::Location),
             R"#(Returns the location point of the hyperbola. It is the intersection point between the "XAxis" and the "YAxis".)#" )
        .def("MajorRadius",
             (Standard_Real (gp_Hypr2d::*)() const) static_cast<Standard_Real (gp_Hypr2d::*)() const>(&gp_Hypr2d::MajorRadius),
             R"#(Returns the major radius of the hyperbola (it is the radius corresponding to the "XAxis" of the hyperbola).)#" )
        .def("MinorRadius",
             (Standard_Real (gp_Hypr2d::*)() const) static_cast<Standard_Real (gp_Hypr2d::*)() const>(&gp_Hypr2d::MinorRadius),
             R"#(Returns the minor radius of the hyperbola (it is the radius corresponding to the "YAxis" of the hyperbola).)#" )
        .def("OtherBranch",
             (gp_Hypr2d (gp_Hypr2d::*)() const) static_cast<gp_Hypr2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::OtherBranch),
             R"#(Returns the branch of hyperbola obtained by doing the symmetrical transformation of <me> with respect to the "YAxis" of <me>.)#" )
        .def("Parameter",
             (Standard_Real (gp_Hypr2d::*)() const) static_cast<Standard_Real (gp_Hypr2d::*)() const>(&gp_Hypr2d::Parameter),
             R"#(Returns p = (e * e - 1) * MajorRadius where e is the eccentricity of the hyperbola. Raises DomainError if MajorRadius = 0.0)#" )
        .def("Axis",
             (const gp_Ax22d & (gp_Hypr2d::*)() const) static_cast<const gp_Ax22d & (gp_Hypr2d::*)() const>(&gp_Hypr2d::Axis),
             R"#(Returns the axisplacement of the hyperbola.)#" )
        .def("XAxis",
             (gp_Ax2d (gp_Hypr2d::*)() const) static_cast<gp_Ax2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::XAxis),
             R"#(Computes an axis whose - the origin is the center of this hyperbola, and - the unit vector is the "X Direction" or "Y Direction" respectively of the local coordinate system of this hyperbola Returns the major axis of the hyperbola.)#" )
        .def("YAxis",
             (gp_Ax2d (gp_Hypr2d::*)() const) static_cast<gp_Ax2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::YAxis),
             R"#(Computes an axis whose - the origin is the center of this hyperbola, and - the unit vector is the "X Direction" or "Y Direction" respectively of the local coordinate system of this hyperbola Returns the minor axis of the hyperbola.)#" )
        .def("Reverse",
             (void (gp_Hypr2d::*)() ) static_cast<void (gp_Hypr2d::*)() >(&gp_Hypr2d::Reverse),
             R"#(None)#" )
        .def("Reversed",
             (gp_Hypr2d (gp_Hypr2d::*)() const) static_cast<gp_Hypr2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::Reversed),
             R"#(Reverses the orientation of the local coordinate system of this hyperbola (the "Y Axis" is reversed). Therefore, the implicit orientation of this hyperbola is reversed. Note: - Reverse assigns the result to this hyperbola, while - Reversed creates a new one.)#" )
        .def("IsDirect",
             (Standard_Boolean (gp_Hypr2d::*)() const) static_cast<Standard_Boolean (gp_Hypr2d::*)() const>(&gp_Hypr2d::IsDirect),
             R"#(Returns true if the local coordinate system is direct and false in the other case.)#" )
        .def("Mirror",
             (void (gp_Hypr2d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Hypr2d::*)( const gp_Pnt2d & ) >(&gp_Hypr2d::Mirror),
             R"#(None)#"  , py::arg("P"))
        .def("Mirrored",
             (gp_Hypr2d (gp_Hypr2d::*)( const gp_Pnt2d & ) const) static_cast<gp_Hypr2d (gp_Hypr2d::*)( const gp_Pnt2d & ) const>(&gp_Hypr2d::Mirrored),
             R"#(Performs the symmetrical transformation of an hyperbola with respect to the point P which is the center of the symmetry.)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Hypr2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Hypr2d::*)( const gp_Ax2d & ) >(&gp_Hypr2d::Mirror),
             R"#(None)#"  , py::arg("A"))
        .def("Mirrored",
             (gp_Hypr2d (gp_Hypr2d::*)( const gp_Ax2d & ) const) static_cast<gp_Hypr2d (gp_Hypr2d::*)( const gp_Ax2d & ) const>(&gp_Hypr2d::Mirrored),
             R"#(Performs the symmetrical transformation of an hyperbola with respect to an axis placement which is the axis of the symmetry.)#"  , py::arg("A"))
        .def("Rotate",
             (void (gp_Hypr2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Hypr2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Hypr2d::Rotate),
             R"#(None)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Hypr2d (gp_Hypr2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Hypr2d (gp_Hypr2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Hypr2d::Rotated),
             R"#(Rotates an hyperbola. P is the center of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Hypr2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Hypr2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Hypr2d::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Hypr2d (gp_Hypr2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Hypr2d (gp_Hypr2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Hypr2d::Scaled),
             R"#(Scales an hyperbola. <S> is the scaling value. If <S> is positive only the location point is modified. But if <S> is negative the "XAxis" is reversed and the "YAxis" too.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Hypr2d::*)( const gp_Trsf2d & ) ) static_cast<void (gp_Hypr2d::*)( const gp_Trsf2d & ) >(&gp_Hypr2d::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Hypr2d (gp_Hypr2d::*)( const gp_Trsf2d & ) const) static_cast<gp_Hypr2d (gp_Hypr2d::*)( const gp_Trsf2d & ) const>(&gp_Hypr2d::Transformed),
             R"#(Transforms an hyperbola with the transformation T from class Trsf2d.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Hypr2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Hypr2d::*)( const gp_Vec2d & ) >(&gp_Hypr2d::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Hypr2d (gp_Hypr2d::*)( const gp_Vec2d & ) const) static_cast<gp_Hypr2d (gp_Hypr2d::*)( const gp_Vec2d & ) const>(&gp_Hypr2d::Translated),
             R"#(Translates an hyperbola in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Hypr2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (gp_Hypr2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&gp_Hypr2d::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Hypr2d (gp_Hypr2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const) static_cast<gp_Hypr2d (gp_Hypr2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const>(&gp_Hypr2d::Translated),
             R"#(Translates an hyperbola from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetLocation",
             (void (gp_Hypr2d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Hypr2d::*)( const gp_Pnt2d & ) >(&gp_Hypr2d::SetLocation),
             R"#(Modifies this hyperbola, by redefining its local coordinate system so that its origin becomes P.)#"  , py::arg("P"))
        .def("SetMajorRadius",
             (void (gp_Hypr2d::*)( const Standard_Real ) ) static_cast<void (gp_Hypr2d::*)( const Standard_Real ) >(&gp_Hypr2d::SetMajorRadius),
             R"#(Modifies the major or minor radius of this hyperbola. Exceptions Standard_ConstructionError if MajorRadius or MinorRadius is negative.)#"  , py::arg("MajorRadius"))
        .def("SetMinorRadius",
             (void (gp_Hypr2d::*)( const Standard_Real ) ) static_cast<void (gp_Hypr2d::*)( const Standard_Real ) >(&gp_Hypr2d::SetMinorRadius),
             R"#(Modifies the major or minor radius of this hyperbola. Exceptions Standard_ConstructionError if MajorRadius or MinorRadius is negative.)#"  , py::arg("MinorRadius"))
        .def("SetAxis",
             (void (gp_Hypr2d::*)( const gp_Ax22d & ) ) static_cast<void (gp_Hypr2d::*)( const gp_Ax22d & ) >(&gp_Hypr2d::SetAxis),
             R"#(Modifies this hyperbola, by redefining its local coordinate system so that it becomes A.)#"  , py::arg("A"))
        .def("SetXAxis",
             (void (gp_Hypr2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Hypr2d::*)( const gp_Ax2d & ) >(&gp_Hypr2d::SetXAxis),
             R"#(Changes the major axis of the hyperbola. The minor axis is recomputed and the location of the hyperbola too.)#"  , py::arg("A"))
        .def("SetYAxis",
             (void (gp_Hypr2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Hypr2d::*)( const gp_Ax2d & ) >(&gp_Hypr2d::SetYAxis),
             R"#(Changes the minor axis of the hyperbola.The minor axis is recomputed and the location of the hyperbola too.)#"  , py::arg("A"))
        .def("Asymptote1",
             (gp_Ax2d (gp_Hypr2d::*)() const) static_cast<gp_Ax2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::Asymptote1),
             R"#(In the local coordinate system of the hyperbola the equation of the hyperbola is (X*X)/(A*A) - (Y*Y)/(B*B) = 1.0 and the equation of the first asymptote is Y = (B/A)*X where A is the major radius of the hyperbola and B the minor radius of the hyperbola. Raises ConstructionError if MajorRadius = 0.0)#" )
        .def("Asymptote2",
             (gp_Ax2d (gp_Hypr2d::*)() const) static_cast<gp_Ax2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::Asymptote2),
             R"#(In the local coordinate system of the hyperbola the equation of the hyperbola is (X*X)/(A*A) - (Y*Y)/(B*B) = 1.0 and the equation of the first asymptote is Y = -(B/A)*X where A is the major radius of the hyperbola and B the minor radius of the hyperbola. Raises ConstructionError if MajorRadius = 0.0)#" )
        .def("ConjugateBranch1",
             (gp_Hypr2d (gp_Hypr2d::*)() const) static_cast<gp_Hypr2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::ConjugateBranch1),
             R"#(Computes the branch of hyperbola which is on the positive side of the "YAxis" of <me>.)#" )
        .def("ConjugateBranch2",
             (gp_Hypr2d (gp_Hypr2d::*)() const) static_cast<gp_Hypr2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::ConjugateBranch2),
             R"#(Computes the branch of hyperbola which is on the negative side of the "YAxis" of <me>.)#" )
        .def("Directrix1",
             (gp_Ax2d (gp_Hypr2d::*)() const) static_cast<gp_Ax2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::Directrix1),
             R"#(Computes the directrix which is the line normal to the XAxis of the hyperbola in the local plane (Z = 0) at a distance d = MajorRadius / e from the center of the hyperbola, where e is the eccentricity of the hyperbola. This line is parallel to the "YAxis". The intersection point between the "Directrix1" and the "XAxis" is the "Location" point of the "Directrix1". This point is on the positive side of the "XAxis".)#" )
        .def("Directrix2",
             (gp_Ax2d (gp_Hypr2d::*)() const) static_cast<gp_Ax2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::Directrix2),
             R"#(This line is obtained by the symmetrical transformation of "Directrix1" with respect to the "YAxis" of the hyperbola.)#" )
        .def("Eccentricity",
             (Standard_Real (gp_Hypr2d::*)() const) static_cast<Standard_Real (gp_Hypr2d::*)() const>(&gp_Hypr2d::Eccentricity),
             R"#(Returns the excentricity of the hyperbola (e > 1). If f is the distance between the location of the hyperbola and the Focus1 then the eccentricity e = f / MajorRadius. Raises DomainError if MajorRadius = 0.0.)#" )
        .def("Focal",
             (Standard_Real (gp_Hypr2d::*)() const) static_cast<Standard_Real (gp_Hypr2d::*)() const>(&gp_Hypr2d::Focal),
             R"#(Computes the focal distance. It is the distance between the "Location" of the hyperbola and "Focus1" or "Focus2".)#" )
        .def("Focus1",
             (gp_Pnt2d (gp_Hypr2d::*)() const) static_cast<gp_Pnt2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::Focus1),
             R"#(Returns the first focus of the hyperbola. This focus is on the positive side of the "XAxis" of the hyperbola.)#" )
        .def("Focus2",
             (gp_Pnt2d (gp_Hypr2d::*)() const) static_cast<gp_Pnt2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::Focus2),
             R"#(Returns the second focus of the hyperbola. This focus is on the negative side of the "XAxis" of the hyperbola.)#" )
        .def("Location",
             (const gp_Pnt2d & (gp_Hypr2d::*)() const) static_cast<const gp_Pnt2d & (gp_Hypr2d::*)() const>(&gp_Hypr2d::Location),
             R"#(Returns the location point of the hyperbola. It is the intersection point between the "XAxis" and the "YAxis".)#" )
        .def("MajorRadius",
             (Standard_Real (gp_Hypr2d::*)() const) static_cast<Standard_Real (gp_Hypr2d::*)() const>(&gp_Hypr2d::MajorRadius),
             R"#(Returns the major radius of the hyperbola (it is the radius corresponding to the "XAxis" of the hyperbola).)#" )
        .def("MinorRadius",
             (Standard_Real (gp_Hypr2d::*)() const) static_cast<Standard_Real (gp_Hypr2d::*)() const>(&gp_Hypr2d::MinorRadius),
             R"#(Returns the minor radius of the hyperbola (it is the radius corresponding to the "YAxis" of the hyperbola).)#" )
        .def("OtherBranch",
             (gp_Hypr2d (gp_Hypr2d::*)() const) static_cast<gp_Hypr2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::OtherBranch),
             R"#(Returns the branch of hyperbola obtained by doing the symmetrical transformation of <me> with respect to the "YAxis" of <me>.)#" )
        .def("Parameter",
             (Standard_Real (gp_Hypr2d::*)() const) static_cast<Standard_Real (gp_Hypr2d::*)() const>(&gp_Hypr2d::Parameter),
             R"#(Returns p = (e * e - 1) * MajorRadius where e is the eccentricity of the hyperbola. Raises DomainError if MajorRadius = 0.0)#" )
        .def("Axis",
             (const gp_Ax22d & (gp_Hypr2d::*)() const) static_cast<const gp_Ax22d & (gp_Hypr2d::*)() const>(&gp_Hypr2d::Axis),
             R"#(Returns the axisplacement of the hyperbola.)#" )
        .def("XAxis",
             (gp_Ax2d (gp_Hypr2d::*)() const) static_cast<gp_Ax2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::XAxis),
             R"#(Computes an axis whose - the origin is the center of this hyperbola, and - the unit vector is the "X Direction" or "Y Direction" respectively of the local coordinate system of this hyperbola Returns the major axis of the hyperbola.)#" )
        .def("YAxis",
             (gp_Ax2d (gp_Hypr2d::*)() const) static_cast<gp_Ax2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::YAxis),
             R"#(Computes an axis whose - the origin is the center of this hyperbola, and - the unit vector is the "X Direction" or "Y Direction" respectively of the local coordinate system of this hyperbola Returns the minor axis of the hyperbola.)#" )
        .def("Reverse",
             (void (gp_Hypr2d::*)() ) static_cast<void (gp_Hypr2d::*)() >(&gp_Hypr2d::Reverse),
             R"#(None)#" )
        .def("Reversed",
             (gp_Hypr2d (gp_Hypr2d::*)() const) static_cast<gp_Hypr2d (gp_Hypr2d::*)() const>(&gp_Hypr2d::Reversed),
             R"#(Reverses the orientation of the local coordinate system of this hyperbola (the "Y Axis" is reversed). Therefore, the implicit orientation of this hyperbola is reversed. Note: - Reverse assigns the result to this hyperbola, while - Reversed creates a new one.)#" )
        .def("IsDirect",
             (Standard_Boolean (gp_Hypr2d::*)() const) static_cast<Standard_Boolean (gp_Hypr2d::*)() const>(&gp_Hypr2d::IsDirect),
             R"#(Returns true if the local coordinate system is direct and false in the other case.)#" )
        .def("Rotate",
             (void (gp_Hypr2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Hypr2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Hypr2d::Rotate),
             R"#(None)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Hypr2d (gp_Hypr2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Hypr2d (gp_Hypr2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Hypr2d::Rotated),
             R"#(Rotates an hyperbola. P is the center of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Hypr2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Hypr2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Hypr2d::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Hypr2d (gp_Hypr2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Hypr2d (gp_Hypr2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Hypr2d::Scaled),
             R"#(Scales an hyperbola. <S> is the scaling value. If <S> is positive only the location point is modified. But if <S> is negative the "XAxis" is reversed and the "YAxis" too.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Hypr2d::*)( const gp_Trsf2d & ) ) static_cast<void (gp_Hypr2d::*)( const gp_Trsf2d & ) >(&gp_Hypr2d::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Hypr2d (gp_Hypr2d::*)( const gp_Trsf2d & ) const) static_cast<gp_Hypr2d (gp_Hypr2d::*)( const gp_Trsf2d & ) const>(&gp_Hypr2d::Transformed),
             R"#(Transforms an hyperbola with the transformation T from class Trsf2d.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Hypr2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Hypr2d::*)( const gp_Vec2d & ) >(&gp_Hypr2d::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Hypr2d (gp_Hypr2d::*)( const gp_Vec2d & ) const) static_cast<gp_Hypr2d (gp_Hypr2d::*)( const gp_Vec2d & ) const>(&gp_Hypr2d::Translated),
             R"#(Translates an hyperbola in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Hypr2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (gp_Hypr2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&gp_Hypr2d::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Hypr2d (gp_Hypr2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const) static_cast<gp_Hypr2d (gp_Hypr2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const>(&gp_Hypr2d::Translated),
             R"#(Translates an hyperbola from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
        .def("Coefficients",
             []( gp_Hypr2d &self   ){ Standard_Real  A; Standard_Real  B; Standard_Real  C; Standard_Real  D; Standard_Real  E; Standard_Real  F; self.Coefficients(A,B,C,D,E,F); return std::make_tuple(A,B,C,D,E,F); },
             R"#(Computes the coefficients of the implicit equation of the hyperbola : A * (X**2) + B * (Y**2) + 2*C*(X*Y) + 2*D*X + 2*E*Y + F = 0.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_Lin , shared_ptr<gp_Lin> >>(m.attr("gp_Lin"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Ax1 & >()  , py::arg("A1") )
        .def(py::init< const gp_Pnt &,const gp_Dir & >()  , py::arg("P"),  py::arg("V") )
    // custom constructors
    // methods
        .def("Reverse",
             (void (gp_Lin::*)() ) static_cast<void (gp_Lin::*)() >(&gp_Lin::Reverse),
             R"#(None)#" )
        .def("Reversed",
             (gp_Lin (gp_Lin::*)() const) static_cast<gp_Lin (gp_Lin::*)() const>(&gp_Lin::Reversed),
             R"#(Reverses the direction of the line. Note: - Reverse assigns the result to this line, while - Reversed creates a new one.)#" )
        .def("SetDirection",
             (void (gp_Lin::*)( const gp_Dir & ) ) static_cast<void (gp_Lin::*)( const gp_Dir & ) >(&gp_Lin::SetDirection),
             R"#(Changes the direction of the line.)#"  , py::arg("V"))
        .def("SetLocation",
             (void (gp_Lin::*)( const gp_Pnt & ) ) static_cast<void (gp_Lin::*)( const gp_Pnt & ) >(&gp_Lin::SetLocation),
             R"#(Changes the location point (origin) of the line.)#"  , py::arg("P"))
        .def("SetPosition",
             (void (gp_Lin::*)( const gp_Ax1 & ) ) static_cast<void (gp_Lin::*)( const gp_Ax1 & ) >(&gp_Lin::SetPosition),
             R"#(Complete redefinition of the line. The "Location" point of <A1> is the origin of the line. The "Direction" of <A1> is the direction of the line.)#"  , py::arg("A1"))
        .def("Direction",
             (const gp_Dir & (gp_Lin::*)() const) static_cast<const gp_Dir & (gp_Lin::*)() const>(&gp_Lin::Direction),
             R"#(Returns the direction of the line.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Lin::*)() const) static_cast<const gp_Pnt & (gp_Lin::*)() const>(&gp_Lin::Location),
             R"#(Returns the location point (origin) of the line.)#" )
        .def("Position",
             (const gp_Ax1 & (gp_Lin::*)() const) static_cast<const gp_Ax1 & (gp_Lin::*)() const>(&gp_Lin::Position),
             R"#(Returns the axis placement one axis whith the same location and direction as <me>.)#" )
        .def("Angle",
             (Standard_Real (gp_Lin::*)( const gp_Lin & ) const) static_cast<Standard_Real (gp_Lin::*)( const gp_Lin & ) const>(&gp_Lin::Angle),
             R"#(Computes the angle between two lines in radians.)#"  , py::arg("Other"))
        .def("Contains",
             (Standard_Boolean (gp_Lin::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Lin::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Lin::Contains),
             R"#(Returns true if this line contains the point P, that is, if the distance between point P and this line is less than or equal to LinearTolerance..)#"  , py::arg("P"),  py::arg("LinearTolerance"))
        .def("Distance",
             (Standard_Real (gp_Lin::*)( const gp_Pnt & ) const) static_cast<Standard_Real (gp_Lin::*)( const gp_Pnt & ) const>(&gp_Lin::Distance),
             R"#(Computes the distance between <me> and the point P.)#"  , py::arg("P"))
        .def("Distance",
             (Standard_Real (gp_Lin::*)( const gp_Lin & ) const) static_cast<Standard_Real (gp_Lin::*)( const gp_Lin & ) const>(&gp_Lin::Distance),
             R"#(Computes the distance between two lines.)#"  , py::arg("Other"))
        .def("SquareDistance",
             (Standard_Real (gp_Lin::*)( const gp_Pnt & ) const) static_cast<Standard_Real (gp_Lin::*)( const gp_Pnt & ) const>(&gp_Lin::SquareDistance),
             R"#(Computes the square distance between <me> and the point P.)#"  , py::arg("P"))
        .def("SquareDistance",
             (Standard_Real (gp_Lin::*)( const gp_Lin & ) const) static_cast<Standard_Real (gp_Lin::*)( const gp_Lin & ) const>(&gp_Lin::SquareDistance),
             R"#(Computes the square distance between two lines.)#"  , py::arg("Other"))
        .def("Normal",
             (gp_Lin (gp_Lin::*)( const gp_Pnt & ) const) static_cast<gp_Lin (gp_Lin::*)( const gp_Pnt & ) const>(&gp_Lin::Normal),
             R"#(Computes the line normal to the direction of <me>, passing through the point P. Raises ConstructionError if the distance between <me> and the point P is lower or equal to Resolution from gp because there is an infinity of solutions in 3D space.)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Lin::*)( const gp_Pnt & ) ) static_cast<void (gp_Lin::*)( const gp_Pnt & ) >(&gp_Lin::Mirror),
             R"#(None)#"  , py::arg("P"))
        .def("Mirrored",
             (gp_Lin (gp_Lin::*)( const gp_Pnt & ) const) static_cast<gp_Lin (gp_Lin::*)( const gp_Pnt & ) const>(&gp_Lin::Mirrored),
             R"#(Performs the symmetrical transformation of a line with respect to the point P which is the center of the symmetry.)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Lin::*)( const gp_Ax1 & ) ) static_cast<void (gp_Lin::*)( const gp_Ax1 & ) >(&gp_Lin::Mirror),
             R"#(None)#"  , py::arg("A1"))
        .def("Mirrored",
             (gp_Lin (gp_Lin::*)( const gp_Ax1 & ) const) static_cast<gp_Lin (gp_Lin::*)( const gp_Ax1 & ) const>(&gp_Lin::Mirrored),
             R"#(Performs the symmetrical transformation of a line with respect to an axis placement which is the axis of the symmetry.)#"  , py::arg("A1"))
        .def("Mirror",
             (void (gp_Lin::*)( const gp_Ax2 & ) ) static_cast<void (gp_Lin::*)( const gp_Ax2 & ) >(&gp_Lin::Mirror),
             R"#(None)#"  , py::arg("A2"))
        .def("Mirrored",
             (gp_Lin (gp_Lin::*)( const gp_Ax2 & ) const) static_cast<gp_Lin (gp_Lin::*)( const gp_Ax2 & ) const>(&gp_Lin::Mirrored),
             R"#(Performs the symmetrical transformation of a line with respect to a plane. The axis placement <A2> locates the plane of the symmetry : (Location, XDirection, YDirection).)#"  , py::arg("A2"))
        .def("Rotate",
             (void (gp_Lin::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Lin::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Lin::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Lin (gp_Lin::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Lin (gp_Lin::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Lin::Rotated),
             R"#(Rotates a line. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Lin::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Lin::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Lin::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Lin (gp_Lin::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Lin (gp_Lin::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Lin::Scaled),
             R"#(Scales a line. S is the scaling value. The "Location" point (origin) of the line is modified. The "Direction" is reversed if the scale is negative.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Lin::*)( const gp_Trsf & ) ) static_cast<void (gp_Lin::*)( const gp_Trsf & ) >(&gp_Lin::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Lin (gp_Lin::*)( const gp_Trsf & ) const) static_cast<gp_Lin (gp_Lin::*)( const gp_Trsf & ) const>(&gp_Lin::Transformed),
             R"#(Transforms a line with the transformation T from class Trsf.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Lin::*)( const gp_Vec & ) ) static_cast<void (gp_Lin::*)( const gp_Vec & ) >(&gp_Lin::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Lin (gp_Lin::*)( const gp_Vec & ) const) static_cast<gp_Lin (gp_Lin::*)( const gp_Vec & ) const>(&gp_Lin::Translated),
             R"#(Translates a line in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Lin::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Lin::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Lin::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Lin (gp_Lin::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Lin (gp_Lin::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Lin::Translated),
             R"#(Translates a line from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Reverse",
             (void (gp_Lin::*)() ) static_cast<void (gp_Lin::*)() >(&gp_Lin::Reverse),
             R"#(None)#" )
        .def("Reversed",
             (gp_Lin (gp_Lin::*)() const) static_cast<gp_Lin (gp_Lin::*)() const>(&gp_Lin::Reversed),
             R"#(Reverses the direction of the line. Note: - Reverse assigns the result to this line, while - Reversed creates a new one.)#" )
        .def("SetDirection",
             (void (gp_Lin::*)( const gp_Dir & ) ) static_cast<void (gp_Lin::*)( const gp_Dir & ) >(&gp_Lin::SetDirection),
             R"#(Changes the direction of the line.)#"  , py::arg("V"))
        .def("SetLocation",
             (void (gp_Lin::*)( const gp_Pnt & ) ) static_cast<void (gp_Lin::*)( const gp_Pnt & ) >(&gp_Lin::SetLocation),
             R"#(Changes the location point (origin) of the line.)#"  , py::arg("P"))
        .def("SetPosition",
             (void (gp_Lin::*)( const gp_Ax1 & ) ) static_cast<void (gp_Lin::*)( const gp_Ax1 & ) >(&gp_Lin::SetPosition),
             R"#(Complete redefinition of the line. The "Location" point of <A1> is the origin of the line. The "Direction" of <A1> is the direction of the line.)#"  , py::arg("A1"))
        .def("Direction",
             (const gp_Dir & (gp_Lin::*)() const) static_cast<const gp_Dir & (gp_Lin::*)() const>(&gp_Lin::Direction),
             R"#(Returns the direction of the line.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Lin::*)() const) static_cast<const gp_Pnt & (gp_Lin::*)() const>(&gp_Lin::Location),
             R"#(Returns the location point (origin) of the line.)#" )
        .def("Position",
             (const gp_Ax1 & (gp_Lin::*)() const) static_cast<const gp_Ax1 & (gp_Lin::*)() const>(&gp_Lin::Position),
             R"#(Returns the axis placement one axis whith the same location and direction as <me>.)#" )
        .def("Angle",
             (Standard_Real (gp_Lin::*)( const gp_Lin & ) const) static_cast<Standard_Real (gp_Lin::*)( const gp_Lin & ) const>(&gp_Lin::Angle),
             R"#(Computes the angle between two lines in radians.)#"  , py::arg("Other"))
        .def("Contains",
             (Standard_Boolean (gp_Lin::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Lin::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Lin::Contains),
             R"#(Returns true if this line contains the point P, that is, if the distance between point P and this line is less than or equal to LinearTolerance..)#"  , py::arg("P"),  py::arg("LinearTolerance"))
        .def("Distance",
             (Standard_Real (gp_Lin::*)( const gp_Pnt & ) const) static_cast<Standard_Real (gp_Lin::*)( const gp_Pnt & ) const>(&gp_Lin::Distance),
             R"#(Computes the distance between <me> and the point P.)#"  , py::arg("P"))
        .def("SquareDistance",
             (Standard_Real (gp_Lin::*)( const gp_Pnt & ) const) static_cast<Standard_Real (gp_Lin::*)( const gp_Pnt & ) const>(&gp_Lin::SquareDistance),
             R"#(Computes the square distance between <me> and the point P.)#"  , py::arg("P"))
        .def("SquareDistance",
             (Standard_Real (gp_Lin::*)( const gp_Lin & ) const) static_cast<Standard_Real (gp_Lin::*)( const gp_Lin & ) const>(&gp_Lin::SquareDistance),
             R"#(Computes the square distance between two lines.)#"  , py::arg("Other"))
        .def("Normal",
             (gp_Lin (gp_Lin::*)( const gp_Pnt & ) const) static_cast<gp_Lin (gp_Lin::*)( const gp_Pnt & ) const>(&gp_Lin::Normal),
             R"#(Computes the line normal to the direction of <me>, passing through the point P. Raises ConstructionError if the distance between <me> and the point P is lower or equal to Resolution from gp because there is an infinity of solutions in 3D space.)#"  , py::arg("P"))
        .def("Rotate",
             (void (gp_Lin::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Lin::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Lin::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Lin (gp_Lin::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Lin (gp_Lin::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Lin::Rotated),
             R"#(Rotates a line. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Lin::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Lin::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Lin::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Lin (gp_Lin::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Lin (gp_Lin::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Lin::Scaled),
             R"#(Scales a line. S is the scaling value. The "Location" point (origin) of the line is modified. The "Direction" is reversed if the scale is negative.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Lin::*)( const gp_Trsf & ) ) static_cast<void (gp_Lin::*)( const gp_Trsf & ) >(&gp_Lin::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Lin (gp_Lin::*)( const gp_Trsf & ) const) static_cast<gp_Lin (gp_Lin::*)( const gp_Trsf & ) const>(&gp_Lin::Transformed),
             R"#(Transforms a line with the transformation T from class Trsf.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Lin::*)( const gp_Vec & ) ) static_cast<void (gp_Lin::*)( const gp_Vec & ) >(&gp_Lin::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Lin (gp_Lin::*)( const gp_Vec & ) const) static_cast<gp_Lin (gp_Lin::*)( const gp_Vec & ) const>(&gp_Lin::Translated),
             R"#(Translates a line in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Lin::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Lin::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Lin::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Lin (gp_Lin::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Lin (gp_Lin::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Lin::Translated),
             R"#(Translates a line from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_Lin2d , shared_ptr<gp_Lin2d> >>(m.attr("gp_Lin2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Ax2d & >()  , py::arg("A") )
        .def(py::init< const gp_Pnt2d &,const gp_Dir2d & >()  , py::arg("P"),  py::arg("V") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("A"),  py::arg("B"),  py::arg("C") )
    // custom constructors
    // methods
        .def("Reverse",
             (void (gp_Lin2d::*)() ) static_cast<void (gp_Lin2d::*)() >(&gp_Lin2d::Reverse),
             R"#(None)#" )
        .def("Reversed",
             (gp_Lin2d (gp_Lin2d::*)() const) static_cast<gp_Lin2d (gp_Lin2d::*)() const>(&gp_Lin2d::Reversed),
             R"#(Reverses the positioning axis of this line. Note: - Reverse assigns the result to this line, while - Reversed creates a new one.)#" )
        .def("SetDirection",
             (void (gp_Lin2d::*)( const gp_Dir2d & ) ) static_cast<void (gp_Lin2d::*)( const gp_Dir2d & ) >(&gp_Lin2d::SetDirection),
             R"#(Changes the direction of the line.)#"  , py::arg("V"))
        .def("SetLocation",
             (void (gp_Lin2d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Lin2d::*)( const gp_Pnt2d & ) >(&gp_Lin2d::SetLocation),
             R"#(Changes the origin of the line.)#"  , py::arg("P"))
        .def("SetPosition",
             (void (gp_Lin2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Lin2d::*)( const gp_Ax2d & ) >(&gp_Lin2d::SetPosition),
             R"#(Complete redefinition of the line. The "Location" point of <A> is the origin of the line. The "Direction" of <A> is the direction of the line.)#"  , py::arg("A"))
        .def("Direction",
             (const gp_Dir2d & (gp_Lin2d::*)() const) static_cast<const gp_Dir2d & (gp_Lin2d::*)() const>(&gp_Lin2d::Direction),
             R"#(Returns the direction of the line.)#" )
        .def("Location",
             (const gp_Pnt2d & (gp_Lin2d::*)() const) static_cast<const gp_Pnt2d & (gp_Lin2d::*)() const>(&gp_Lin2d::Location),
             R"#(Returns the location point (origin) of the line.)#" )
        .def("Position",
             (const gp_Ax2d & (gp_Lin2d::*)() const) static_cast<const gp_Ax2d & (gp_Lin2d::*)() const>(&gp_Lin2d::Position),
             R"#(Returns the axis placement one axis whith the same location and direction as <me>.)#" )
        .def("Angle",
             (Standard_Real (gp_Lin2d::*)( const gp_Lin2d & ) const) static_cast<Standard_Real (gp_Lin2d::*)( const gp_Lin2d & ) const>(&gp_Lin2d::Angle),
             R"#(Computes the angle between two lines in radians.)#"  , py::arg("Other"))
        .def("Contains",
             (Standard_Boolean (gp_Lin2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Lin2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Lin2d::Contains),
             R"#(Returns true if this line contains the point P, that is, if the distance between point P and this line is less than or equal to LinearTolerance.)#"  , py::arg("P"),  py::arg("LinearTolerance"))
        .def("Distance",
             (Standard_Real (gp_Lin2d::*)( const gp_Pnt2d & ) const) static_cast<Standard_Real (gp_Lin2d::*)( const gp_Pnt2d & ) const>(&gp_Lin2d::Distance),
             R"#(Computes the distance between <me> and the point <P>.)#"  , py::arg("P"))
        .def("Distance",
             (Standard_Real (gp_Lin2d::*)( const gp_Lin2d & ) const) static_cast<Standard_Real (gp_Lin2d::*)( const gp_Lin2d & ) const>(&gp_Lin2d::Distance),
             R"#(Computes the distance between two lines.)#"  , py::arg("Other"))
        .def("SquareDistance",
             (Standard_Real (gp_Lin2d::*)( const gp_Pnt2d & ) const) static_cast<Standard_Real (gp_Lin2d::*)( const gp_Pnt2d & ) const>(&gp_Lin2d::SquareDistance),
             R"#(Computes the square distance between <me> and the point <P>.)#"  , py::arg("P"))
        .def("SquareDistance",
             (Standard_Real (gp_Lin2d::*)( const gp_Lin2d & ) const) static_cast<Standard_Real (gp_Lin2d::*)( const gp_Lin2d & ) const>(&gp_Lin2d::SquareDistance),
             R"#(Computes the square distance between two lines.)#"  , py::arg("Other"))
        .def("Normal",
             (gp_Lin2d (gp_Lin2d::*)( const gp_Pnt2d & ) const) static_cast<gp_Lin2d (gp_Lin2d::*)( const gp_Pnt2d & ) const>(&gp_Lin2d::Normal),
             R"#(Computes the line normal to the direction of <me>, passing through the point <P>.)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Lin2d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Lin2d::*)( const gp_Pnt2d & ) >(&gp_Lin2d::Mirror),
             R"#(None)#"  , py::arg("P"))
        .def("Mirrored",
             (gp_Lin2d (gp_Lin2d::*)( const gp_Pnt2d & ) const) static_cast<gp_Lin2d (gp_Lin2d::*)( const gp_Pnt2d & ) const>(&gp_Lin2d::Mirrored),
             R"#(Performs the symmetrical transformation of a line with respect to the point <P> which is the center of the symmetry)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Lin2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Lin2d::*)( const gp_Ax2d & ) >(&gp_Lin2d::Mirror),
             R"#(None)#"  , py::arg("A"))
        .def("Mirrored",
             (gp_Lin2d (gp_Lin2d::*)( const gp_Ax2d & ) const) static_cast<gp_Lin2d (gp_Lin2d::*)( const gp_Ax2d & ) const>(&gp_Lin2d::Mirrored),
             R"#(Performs the symmetrical transformation of a line with respect to an axis placement which is the axis of the symmetry.)#"  , py::arg("A"))
        .def("Rotate",
             (void (gp_Lin2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Lin2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Lin2d::Rotate),
             R"#(None)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Lin2d (gp_Lin2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Lin2d (gp_Lin2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Lin2d::Rotated),
             R"#(Rotates a line. P is the center of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Lin2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Lin2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Lin2d::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Lin2d (gp_Lin2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Lin2d (gp_Lin2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Lin2d::Scaled),
             R"#(Scales a line. S is the scaling value. Only the origin of the line is modified.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Lin2d::*)( const gp_Trsf2d & ) ) static_cast<void (gp_Lin2d::*)( const gp_Trsf2d & ) >(&gp_Lin2d::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Lin2d (gp_Lin2d::*)( const gp_Trsf2d & ) const) static_cast<gp_Lin2d (gp_Lin2d::*)( const gp_Trsf2d & ) const>(&gp_Lin2d::Transformed),
             R"#(Transforms a line with the transformation T from class Trsf2d.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Lin2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Lin2d::*)( const gp_Vec2d & ) >(&gp_Lin2d::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Lin2d (gp_Lin2d::*)( const gp_Vec2d & ) const) static_cast<gp_Lin2d (gp_Lin2d::*)( const gp_Vec2d & ) const>(&gp_Lin2d::Translated),
             R"#(Translates a line in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Lin2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (gp_Lin2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&gp_Lin2d::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Lin2d (gp_Lin2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const) static_cast<gp_Lin2d (gp_Lin2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const>(&gp_Lin2d::Translated),
             R"#(Translates a line from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Reverse",
             (void (gp_Lin2d::*)() ) static_cast<void (gp_Lin2d::*)() >(&gp_Lin2d::Reverse),
             R"#(None)#" )
        .def("Reversed",
             (gp_Lin2d (gp_Lin2d::*)() const) static_cast<gp_Lin2d (gp_Lin2d::*)() const>(&gp_Lin2d::Reversed),
             R"#(Reverses the positioning axis of this line. Note: - Reverse assigns the result to this line, while - Reversed creates a new one.)#" )
        .def("SetDirection",
             (void (gp_Lin2d::*)( const gp_Dir2d & ) ) static_cast<void (gp_Lin2d::*)( const gp_Dir2d & ) >(&gp_Lin2d::SetDirection),
             R"#(Changes the direction of the line.)#"  , py::arg("V"))
        .def("SetLocation",
             (void (gp_Lin2d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Lin2d::*)( const gp_Pnt2d & ) >(&gp_Lin2d::SetLocation),
             R"#(Changes the origin of the line.)#"  , py::arg("P"))
        .def("SetPosition",
             (void (gp_Lin2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Lin2d::*)( const gp_Ax2d & ) >(&gp_Lin2d::SetPosition),
             R"#(Complete redefinition of the line. The "Location" point of <A> is the origin of the line. The "Direction" of <A> is the direction of the line.)#"  , py::arg("A"))
        .def("Direction",
             (const gp_Dir2d & (gp_Lin2d::*)() const) static_cast<const gp_Dir2d & (gp_Lin2d::*)() const>(&gp_Lin2d::Direction),
             R"#(Returns the direction of the line.)#" )
        .def("Location",
             (const gp_Pnt2d & (gp_Lin2d::*)() const) static_cast<const gp_Pnt2d & (gp_Lin2d::*)() const>(&gp_Lin2d::Location),
             R"#(Returns the location point (origin) of the line.)#" )
        .def("Position",
             (const gp_Ax2d & (gp_Lin2d::*)() const) static_cast<const gp_Ax2d & (gp_Lin2d::*)() const>(&gp_Lin2d::Position),
             R"#(Returns the axis placement one axis whith the same location and direction as <me>.)#" )
        .def("Angle",
             (Standard_Real (gp_Lin2d::*)( const gp_Lin2d & ) const) static_cast<Standard_Real (gp_Lin2d::*)( const gp_Lin2d & ) const>(&gp_Lin2d::Angle),
             R"#(Computes the angle between two lines in radians.)#"  , py::arg("Other"))
        .def("Contains",
             (Standard_Boolean (gp_Lin2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Lin2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Lin2d::Contains),
             R"#(Returns true if this line contains the point P, that is, if the distance between point P and this line is less than or equal to LinearTolerance.)#"  , py::arg("P"),  py::arg("LinearTolerance"))
        .def("Distance",
             (Standard_Real (gp_Lin2d::*)( const gp_Pnt2d & ) const) static_cast<Standard_Real (gp_Lin2d::*)( const gp_Pnt2d & ) const>(&gp_Lin2d::Distance),
             R"#(Computes the distance between <me> and the point <P>.)#"  , py::arg("P"))
        .def("Distance",
             (Standard_Real (gp_Lin2d::*)( const gp_Lin2d & ) const) static_cast<Standard_Real (gp_Lin2d::*)( const gp_Lin2d & ) const>(&gp_Lin2d::Distance),
             R"#(Computes the distance between two lines.)#"  , py::arg("Other"))
        .def("SquareDistance",
             (Standard_Real (gp_Lin2d::*)( const gp_Pnt2d & ) const) static_cast<Standard_Real (gp_Lin2d::*)( const gp_Pnt2d & ) const>(&gp_Lin2d::SquareDistance),
             R"#(Computes the square distance between <me> and the point <P>.)#"  , py::arg("P"))
        .def("SquareDistance",
             (Standard_Real (gp_Lin2d::*)( const gp_Lin2d & ) const) static_cast<Standard_Real (gp_Lin2d::*)( const gp_Lin2d & ) const>(&gp_Lin2d::SquareDistance),
             R"#(Computes the square distance between two lines.)#"  , py::arg("Other"))
        .def("Normal",
             (gp_Lin2d (gp_Lin2d::*)( const gp_Pnt2d & ) const) static_cast<gp_Lin2d (gp_Lin2d::*)( const gp_Pnt2d & ) const>(&gp_Lin2d::Normal),
             R"#(Computes the line normal to the direction of <me>, passing through the point <P>.)#"  , py::arg("P"))
        .def("Rotate",
             (void (gp_Lin2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Lin2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Lin2d::Rotate),
             R"#(None)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Lin2d (gp_Lin2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Lin2d (gp_Lin2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Lin2d::Rotated),
             R"#(Rotates a line. P is the center of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Lin2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Lin2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Lin2d::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Lin2d (gp_Lin2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Lin2d (gp_Lin2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Lin2d::Scaled),
             R"#(Scales a line. S is the scaling value. Only the origin of the line is modified.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Lin2d::*)( const gp_Trsf2d & ) ) static_cast<void (gp_Lin2d::*)( const gp_Trsf2d & ) >(&gp_Lin2d::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Lin2d (gp_Lin2d::*)( const gp_Trsf2d & ) const) static_cast<gp_Lin2d (gp_Lin2d::*)( const gp_Trsf2d & ) const>(&gp_Lin2d::Transformed),
             R"#(Transforms a line with the transformation T from class Trsf2d.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Lin2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Lin2d::*)( const gp_Vec2d & ) >(&gp_Lin2d::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Lin2d (gp_Lin2d::*)( const gp_Vec2d & ) const) static_cast<gp_Lin2d (gp_Lin2d::*)( const gp_Vec2d & ) const>(&gp_Lin2d::Translated),
             R"#(Translates a line in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Lin2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (gp_Lin2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&gp_Lin2d::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Lin2d (gp_Lin2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const) static_cast<gp_Lin2d (gp_Lin2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const>(&gp_Lin2d::Translated),
             R"#(Translates a line from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
        .def("Coefficients",
             []( gp_Lin2d &self   ){ Standard_Real  A; Standard_Real  B; Standard_Real  C; self.Coefficients(A,B,C); return std::make_tuple(A,B,C); },
             R"#(Returns the normalized coefficients of the line : A * X + B * Y + C = 0.)#" )
        .def("Coefficients",
             []( gp_Lin2d &self   ){ Standard_Real  A; Standard_Real  B; Standard_Real  C; self.Coefficients(A,B,C); return std::make_tuple(A,B,C); },
             R"#(Returns the normalized coefficients of the line : A * X + B * Y + C = 0.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_Mat , shared_ptr<gp_Mat> >>(m.attr("gp_Mat"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("a11"),  py::arg("a12"),  py::arg("a13"),  py::arg("a21"),  py::arg("a22"),  py::arg("a23"),  py::arg("a31"),  py::arg("a32"),  py::arg("a33") )
        .def(py::init< const gp_XYZ &,const gp_XYZ &,const gp_XYZ & >()  , py::arg("Col1"),  py::arg("Col2"),  py::arg("Col3") )
    // custom constructors
    // methods
        .def("SetCol",
             (void (gp_Mat::*)( const Standard_Integer , const gp_XYZ & ) ) static_cast<void (gp_Mat::*)( const Standard_Integer , const gp_XYZ & ) >(&gp_Mat::SetCol),
             R"#(Assigns the three coordinates of Value to the column of index Col of this matrix. Raises OutOfRange if Col < 1 or Col > 3.)#"  , py::arg("Col"),  py::arg("Value"))
        .def("SetCols",
             (void (gp_Mat::*)( const gp_XYZ & , const gp_XYZ & , const gp_XYZ & ) ) static_cast<void (gp_Mat::*)( const gp_XYZ & , const gp_XYZ & , const gp_XYZ & ) >(&gp_Mat::SetCols),
             R"#(Assigns the number triples Col1, Col2, Col3 to the three columns of this matrix.)#"  , py::arg("Col1"),  py::arg("Col2"),  py::arg("Col3"))
        .def("SetCross",
             (void (gp_Mat::*)( const gp_XYZ & ) ) static_cast<void (gp_Mat::*)( const gp_XYZ & ) >(&gp_Mat::SetCross),
             R"#(Modifies the matrix M so that applying it to any number triple (X, Y, Z) produces the same result as the cross product of Ref and the number triple (X, Y, Z): i.e.: M * {X,Y,Z}t = Ref.Cross({X, Y ,Z}) this matrix is anti symmetric. To apply this matrix to the triplet {XYZ} is the same as to do the cross product between the triplet Ref and the triplet {XYZ}. Note: this matrix is anti-symmetric.)#"  , py::arg("Ref"))
        .def("SetDiagonal",
             (void (gp_Mat::*)( const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (gp_Mat::*)( const Standard_Real , const Standard_Real , const Standard_Real ) >(&gp_Mat::SetDiagonal),
             R"#(Modifies the main diagonal of the matrix. <me>.Value (1, 1) = X1 <me>.Value (2, 2) = X2 <me>.Value (3, 3) = X3 The other coefficients of the matrix are not modified.)#"  , py::arg("X1"),  py::arg("X2"),  py::arg("X3"))
        .def("SetDot",
             (void (gp_Mat::*)( const gp_XYZ & ) ) static_cast<void (gp_Mat::*)( const gp_XYZ & ) >(&gp_Mat::SetDot),
             R"#(Modifies this matrix so that applying it to any number triple (X, Y, Z) produces the same result as the scalar product of Ref and the number triple (X, Y, Z): this * (X,Y,Z) = Ref.(X,Y,Z) Note: this matrix is symmetric.)#"  , py::arg("Ref"))
        .def("SetIdentity",
             (void (gp_Mat::*)() ) static_cast<void (gp_Mat::*)() >(&gp_Mat::SetIdentity),
             R"#(Modifies this matrix so that it represents the Identity matrix.)#" )
        .def("SetRotation",
             (void (gp_Mat::*)( const gp_XYZ & , const Standard_Real ) ) static_cast<void (gp_Mat::*)( const gp_XYZ & , const Standard_Real ) >(&gp_Mat::SetRotation),
             R"#(Modifies this matrix so that it represents a rotation. Ang is the angular value in radians and the XYZ axis gives the direction of the rotation. Raises ConstructionError if XYZ.Modulus() <= Resolution())#"  , py::arg("Axis"),  py::arg("Ang"))
        .def("SetRow",
             (void (gp_Mat::*)( const Standard_Integer , const gp_XYZ & ) ) static_cast<void (gp_Mat::*)( const Standard_Integer , const gp_XYZ & ) >(&gp_Mat::SetRow),
             R"#(Assigns the three coordinates of Value to the row of index Row of this matrix. Raises OutOfRange if Row < 1 or Row > 3.)#"  , py::arg("Row"),  py::arg("Value"))
        .def("SetRows",
             (void (gp_Mat::*)( const gp_XYZ & , const gp_XYZ & , const gp_XYZ & ) ) static_cast<void (gp_Mat::*)( const gp_XYZ & , const gp_XYZ & , const gp_XYZ & ) >(&gp_Mat::SetRows),
             R"#(Assigns the number triples Row1, Row2, Row3 to the three rows of this matrix.)#"  , py::arg("Row1"),  py::arg("Row2"),  py::arg("Row3"))
        .def("SetScale",
             (void (gp_Mat::*)( const Standard_Real ) ) static_cast<void (gp_Mat::*)( const Standard_Real ) >(&gp_Mat::SetScale),
             R"#(Modifies the the matrix so that it represents a scaling transformation, where S is the scale factor. : | S 0.0 0.0 | <me> = | 0.0 S 0.0 | | 0.0 0.0 S |)#"  , py::arg("S"))
        .def("SetValue",
             (void (gp_Mat::*)( const Standard_Integer , const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_Mat::*)( const Standard_Integer , const Standard_Integer , const Standard_Real ) >(&gp_Mat::SetValue),
             R"#(Assigns <Value> to the coefficient of row Row, column Col of this matrix. Raises OutOfRange if Row < 1 or Row > 3 or Col < 1 or Col > 3)#"  , py::arg("Row"),  py::arg("Col"),  py::arg("Value"))
        .def("Column",
             (gp_XYZ (gp_Mat::*)( const Standard_Integer ) const) static_cast<gp_XYZ (gp_Mat::*)( const Standard_Integer ) const>(&gp_Mat::Column),
             R"#(Returns the column of Col index. Raises OutOfRange if Col < 1 or Col > 3)#"  , py::arg("Col"))
        .def("Determinant",
             (Standard_Real (gp_Mat::*)() const) static_cast<Standard_Real (gp_Mat::*)() const>(&gp_Mat::Determinant),
             R"#(Computes the determinant of the matrix.)#" )
        .def("Diagonal",
             (gp_XYZ (gp_Mat::*)() const) static_cast<gp_XYZ (gp_Mat::*)() const>(&gp_Mat::Diagonal),
             R"#(Returns the main diagonal of the matrix.)#" )
        .def("Row",
             (gp_XYZ (gp_Mat::*)( const Standard_Integer ) const) static_cast<gp_XYZ (gp_Mat::*)( const Standard_Integer ) const>(&gp_Mat::Row),
             R"#(returns the row of Row index. Raises OutOfRange if Row < 1 or Row > 3)#"  , py::arg("Row"))
        .def("Value",
             (const Standard_Real & (gp_Mat::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<const Standard_Real & (gp_Mat::*)( const Standard_Integer , const Standard_Integer ) const>(&gp_Mat::Value),
             R"#(Returns the coefficient of range (Row, Col) Raises OutOfRange if Row < 1 or Row > 3 or Col < 1 or Col > 3)#"  , py::arg("Row"),  py::arg("Col"))
        .def("ChangeValue",
             (Standard_Real & (gp_Mat::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Real & (gp_Mat::*)( const Standard_Integer , const Standard_Integer ) >(&gp_Mat::ChangeValue),
             R"#(Returns the coefficient of range (Row, Col) Raises OutOfRange if Row < 1 or Row > 3 or Col < 1 or Col > 3)#"  , py::arg("Row"),  py::arg("Col"))
        .def("IsSingular",
             (Standard_Boolean (gp_Mat::*)() const) static_cast<Standard_Boolean (gp_Mat::*)() const>(&gp_Mat::IsSingular),
             R"#(The Gauss LU decomposition is used to invert the matrix (see Math package) so the matrix is considered as singular if the largest pivot found is lower or equal to Resolution from gp.)#" )
        .def("Add",
             (void (gp_Mat::*)( const gp_Mat & ) ) static_cast<void (gp_Mat::*)( const gp_Mat & ) >(&gp_Mat::Add),
             R"#(None)#"  , py::arg("Other"))
        .def("Added",
             (gp_Mat (gp_Mat::*)( const gp_Mat & ) const) static_cast<gp_Mat (gp_Mat::*)( const gp_Mat & ) const>(&gp_Mat::Added),
             R"#(Computes the sum of this matrix and the matrix Other for each coefficient of the matrix : <me>.Coef(i,j) + <Other>.Coef(i,j))#"  , py::arg("Other"))
        .def("Divide",
             (void (gp_Mat::*)( const Standard_Real ) ) static_cast<void (gp_Mat::*)( const Standard_Real ) >(&gp_Mat::Divide),
             R"#(None)#"  , py::arg("Scalar"))
        .def("Divided",
             (gp_Mat (gp_Mat::*)( const Standard_Real ) const) static_cast<gp_Mat (gp_Mat::*)( const Standard_Real ) const>(&gp_Mat::Divided),
             R"#(Divides all the coefficients of the matrix by Scalar)#"  , py::arg("Scalar"))
        .def("Invert",
             (void (gp_Mat::*)() ) static_cast<void (gp_Mat::*)() >(&gp_Mat::Invert),
             R"#(None)#" )
        .def("Inverted",
             (gp_Mat (gp_Mat::*)() const) static_cast<gp_Mat (gp_Mat::*)() const>(&gp_Mat::Inverted),
             R"#(Inverses the matrix and raises if the matrix is singular. - Invert assigns the result to this matrix, while - Inverted creates a new one. Warning The Gauss LU decomposition is used to invert the matrix. Consequently, the matrix is considered as singular if the largest pivot found is less than or equal to gp::Resolution(). Exceptions Standard_ConstructionError if this matrix is singular, and therefore cannot be inverted.)#" )
        .def("Multiplied",
             (gp_Mat (gp_Mat::*)( const gp_Mat & ) const) static_cast<gp_Mat (gp_Mat::*)( const gp_Mat & ) const>(&gp_Mat::Multiplied),
             R"#(Computes the product of two matrices <me> * <Other>)#"  , py::arg("Other"))
        .def("Multiply",
             (void (gp_Mat::*)( const gp_Mat & ) ) static_cast<void (gp_Mat::*)( const gp_Mat & ) >(&gp_Mat::Multiply),
             R"#(Computes the product of two matrices <me> = <Other> * <me>.)#"  , py::arg("Other"))
        .def("PreMultiply",
             (void (gp_Mat::*)( const gp_Mat & ) ) static_cast<void (gp_Mat::*)( const gp_Mat & ) >(&gp_Mat::PreMultiply),
             R"#(None)#"  , py::arg("Other"))
        .def("Multiplied",
             (gp_Mat (gp_Mat::*)( const Standard_Real ) const) static_cast<gp_Mat (gp_Mat::*)( const Standard_Real ) const>(&gp_Mat::Multiplied),
             R"#(None)#"  , py::arg("Scalar"))
        .def("Multiply",
             (void (gp_Mat::*)( const Standard_Real ) ) static_cast<void (gp_Mat::*)( const Standard_Real ) >(&gp_Mat::Multiply),
             R"#(Multiplies all the coefficients of the matrix by Scalar)#"  , py::arg("Scalar"))
        .def("Power",
             (void (gp_Mat::*)( const Standard_Integer ) ) static_cast<void (gp_Mat::*)( const Standard_Integer ) >(&gp_Mat::Power),
             R"#(None)#"  , py::arg("N"))
        .def("Powered",
             (gp_Mat (gp_Mat::*)( const Standard_Integer ) const) static_cast<gp_Mat (gp_Mat::*)( const Standard_Integer ) const>(&gp_Mat::Powered),
             R"#(Computes <me> = <me> * <me> * .......* <me>, N time. if N = 0 <me> = Identity if N < 0 <me> = <me>.Invert() *...........* <me>.Invert(). If N < 0 an exception will be raised if the matrix is not inversible)#"  , py::arg("N"))
        .def("Subtract",
             (void (gp_Mat::*)( const gp_Mat & ) ) static_cast<void (gp_Mat::*)( const gp_Mat & ) >(&gp_Mat::Subtract),
             R"#(None)#"  , py::arg("Other"))
        .def("Subtracted",
             (gp_Mat (gp_Mat::*)( const gp_Mat & ) const) static_cast<gp_Mat (gp_Mat::*)( const gp_Mat & ) const>(&gp_Mat::Subtracted),
             R"#(cOmputes for each coefficient of the matrix : <me>.Coef(i,j) - <Other>.Coef(i,j))#"  , py::arg("Other"))
        .def("Transpose",
             (void (gp_Mat::*)() ) static_cast<void (gp_Mat::*)() >(&gp_Mat::Transpose),
             R"#(None)#" )
        .def("Transposed",
             (gp_Mat (gp_Mat::*)() const) static_cast<gp_Mat (gp_Mat::*)() const>(&gp_Mat::Transposed),
             R"#(Transposes the matrix. A(j, i) -> A (i, j))#" )
        .def("DumpJson",
             (void (gp_Mat::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (gp_Mat::*)( std::ostream & , const Standard_Integer ) const>(&gp_Mat::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
        .def("SetDiagonal",
             (void (gp_Mat::*)( const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (gp_Mat::*)( const Standard_Real , const Standard_Real , const Standard_Real ) >(&gp_Mat::SetDiagonal),
             R"#(Modifies the main diagonal of the matrix. <me>.Value (1, 1) = X1 <me>.Value (2, 2) = X2 <me>.Value (3, 3) = X3 The other coefficients of the matrix are not modified.)#"  , py::arg("X1"),  py::arg("X2"),  py::arg("X3"))
        .def("SetIdentity",
             (void (gp_Mat::*)() ) static_cast<void (gp_Mat::*)() >(&gp_Mat::SetIdentity),
             R"#(Modifies this matrix so that it represents the Identity matrix.)#" )
        .def("SetScale",
             (void (gp_Mat::*)( const Standard_Real ) ) static_cast<void (gp_Mat::*)( const Standard_Real ) >(&gp_Mat::SetScale),
             R"#(Modifies the the matrix so that it represents a scaling transformation, where S is the scale factor. : | S 0.0 0.0 | <me> = | 0.0 S 0.0 | | 0.0 0.0 S |)#"  , py::arg("S"))
        .def("SetValue",
             (void (gp_Mat::*)( const Standard_Integer , const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_Mat::*)( const Standard_Integer , const Standard_Integer , const Standard_Real ) >(&gp_Mat::SetValue),
             R"#(Assigns <Value> to the coefficient of row Row, column Col of this matrix. Raises OutOfRange if Row < 1 or Row > 3 or Col < 1 or Col > 3)#"  , py::arg("Row"),  py::arg("Col"),  py::arg("Value"))
        .def("Determinant",
             (Standard_Real (gp_Mat::*)() const) static_cast<Standard_Real (gp_Mat::*)() const>(&gp_Mat::Determinant),
             R"#(Computes the determinant of the matrix.)#" )
        .def("Value",
             (const Standard_Real & (gp_Mat::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<const Standard_Real & (gp_Mat::*)( const Standard_Integer , const Standard_Integer ) const>(&gp_Mat::Value),
             R"#(Returns the coefficient of range (Row, Col) Raises OutOfRange if Row < 1 or Row > 3 or Col < 1 or Col > 3)#"  , py::arg("Row"),  py::arg("Col"))
        .def("ChangeValue",
             (Standard_Real & (gp_Mat::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Real & (gp_Mat::*)( const Standard_Integer , const Standard_Integer ) >(&gp_Mat::ChangeValue),
             R"#(Returns the coefficient of range (Row, Col) Raises OutOfRange if Row < 1 or Row > 3 or Col < 1 or Col > 3)#"  , py::arg("Row"),  py::arg("Col"))
        .def("IsSingular",
             (Standard_Boolean (gp_Mat::*)() const) static_cast<Standard_Boolean (gp_Mat::*)() const>(&gp_Mat::IsSingular),
             R"#(The Gauss LU decomposition is used to invert the matrix (see Math package) so the matrix is considered as singular if the largest pivot found is lower or equal to Resolution from gp.)#" )
        .def("Add",
             (void (gp_Mat::*)( const gp_Mat & ) ) static_cast<void (gp_Mat::*)( const gp_Mat & ) >(&gp_Mat::Add),
             R"#(None)#"  , py::arg("Other"))
        .def("Added",
             (gp_Mat (gp_Mat::*)( const gp_Mat & ) const) static_cast<gp_Mat (gp_Mat::*)( const gp_Mat & ) const>(&gp_Mat::Added),
             R"#(Computes the sum of this matrix and the matrix Other for each coefficient of the matrix : <me>.Coef(i,j) + <Other>.Coef(i,j))#"  , py::arg("Other"))
        .def("Divide",
             (void (gp_Mat::*)( const Standard_Real ) ) static_cast<void (gp_Mat::*)( const Standard_Real ) >(&gp_Mat::Divide),
             R"#(None)#"  , py::arg("Scalar"))
        .def("Divided",
             (gp_Mat (gp_Mat::*)( const Standard_Real ) const) static_cast<gp_Mat (gp_Mat::*)( const Standard_Real ) const>(&gp_Mat::Divided),
             R"#(Divides all the coefficients of the matrix by Scalar)#"  , py::arg("Scalar"))
        .def("Multiplied",
             (gp_Mat (gp_Mat::*)( const gp_Mat & ) const) static_cast<gp_Mat (gp_Mat::*)( const gp_Mat & ) const>(&gp_Mat::Multiplied),
             R"#(Computes the product of two matrices <me> * <Other>)#"  , py::arg("Other"))
        .def("Multiply",
             (void (gp_Mat::*)( const gp_Mat & ) ) static_cast<void (gp_Mat::*)( const gp_Mat & ) >(&gp_Mat::Multiply),
             R"#(Computes the product of two matrices <me> = <Other> * <me>.)#"  , py::arg("Other"))
        .def("PreMultiply",
             (void (gp_Mat::*)( const gp_Mat & ) ) static_cast<void (gp_Mat::*)( const gp_Mat & ) >(&gp_Mat::PreMultiply),
             R"#(None)#"  , py::arg("Other"))
        .def("Multiplied",
             (gp_Mat (gp_Mat::*)( const Standard_Real ) const) static_cast<gp_Mat (gp_Mat::*)( const Standard_Real ) const>(&gp_Mat::Multiplied),
             R"#(None)#"  , py::arg("Scalar"))
        .def("Multiply",
             (void (gp_Mat::*)( const Standard_Real ) ) static_cast<void (gp_Mat::*)( const Standard_Real ) >(&gp_Mat::Multiply),
             R"#(Multiplies all the coefficients of the matrix by Scalar)#"  , py::arg("Scalar"))
        .def("Powered",
             (gp_Mat (gp_Mat::*)( const Standard_Integer ) const) static_cast<gp_Mat (gp_Mat::*)( const Standard_Integer ) const>(&gp_Mat::Powered),
             R"#(Computes <me> = <me> * <me> * .......* <me>, N time. if N = 0 <me> = Identity if N < 0 <me> = <me>.Invert() *...........* <me>.Invert(). If N < 0 an exception will be raised if the matrix is not inversible)#"  , py::arg("N"))
        .def("Subtract",
             (void (gp_Mat::*)( const gp_Mat & ) ) static_cast<void (gp_Mat::*)( const gp_Mat & ) >(&gp_Mat::Subtract),
             R"#(None)#"  , py::arg("Other"))
        .def("Subtracted",
             (gp_Mat (gp_Mat::*)( const gp_Mat & ) const) static_cast<gp_Mat (gp_Mat::*)( const gp_Mat & ) const>(&gp_Mat::Subtracted),
             R"#(cOmputes for each coefficient of the matrix : <me>.Coef(i,j) - <Other>.Coef(i,j))#"  , py::arg("Other"))
        .def("Transpose",
             (void (gp_Mat::*)() ) static_cast<void (gp_Mat::*)() >(&gp_Mat::Transpose),
             R"#(None)#" )
        .def("Transposed",
             (gp_Mat (gp_Mat::*)() const) static_cast<gp_Mat (gp_Mat::*)() const>(&gp_Mat::Transposed),
             R"#(Transposes the matrix. A(j, i) -> A (i, j))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
        .def("__iadd__",
             (void (gp_Mat::*)( const gp_Mat & ) ) static_cast<void (gp_Mat::*)( const gp_Mat & ) >(&gp_Mat::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__add__",
             (gp_Mat (gp_Mat::*)( const gp_Mat & ) const) static_cast<gp_Mat (gp_Mat::*)( const gp_Mat & ) const>(&gp_Mat::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__itruediv__",
             (void (gp_Mat::*)( const Standard_Real ) ) static_cast<void (gp_Mat::*)( const Standard_Real ) >(&gp_Mat::operator/=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__truediv__",
             (gp_Mat (gp_Mat::*)( const Standard_Real ) const) static_cast<gp_Mat (gp_Mat::*)( const Standard_Real ) const>(&gp_Mat::operator/),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__mul__",
             (gp_Mat (gp_Mat::*)( const gp_Mat & ) const) static_cast<gp_Mat (gp_Mat::*)( const gp_Mat & ) const>(&gp_Mat::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__rmul__",
             (gp_Mat (gp_Mat::*)( const gp_Mat & ) const) static_cast<gp_Mat (gp_Mat::*)( const gp_Mat & ) const>(&gp_Mat::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__imul__",
             (void (gp_Mat::*)( const gp_Mat & ) ) static_cast<void (gp_Mat::*)( const gp_Mat & ) >(&gp_Mat::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__mul__",
             (gp_Mat (gp_Mat::*)( const Standard_Real ) const) static_cast<gp_Mat (gp_Mat::*)( const Standard_Real ) const>(&gp_Mat::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__rmul__",
             (gp_Mat (gp_Mat::*)( const Standard_Real ) const) static_cast<gp_Mat (gp_Mat::*)( const Standard_Real ) const>(&gp_Mat::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__imul__",
             (void (gp_Mat::*)( const Standard_Real ) ) static_cast<void (gp_Mat::*)( const Standard_Real ) >(&gp_Mat::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__isub__",
             (void (gp_Mat::*)( const gp_Mat & ) ) static_cast<void (gp_Mat::*)( const gp_Mat & ) >(&gp_Mat::operator-=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__sub__",
             (gp_Mat (gp_Mat::*)( const gp_Mat & ) const) static_cast<gp_Mat (gp_Mat::*)( const gp_Mat & ) const>(&gp_Mat::operator-),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
    // additional methods and static methods
;


    static_cast<py::class_<gp_Mat2d , shared_ptr<gp_Mat2d> >>(m.attr("gp_Mat2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_XY &,const gp_XY & >()  , py::arg("Col1"),  py::arg("Col2") )
    // custom constructors
    // methods
        .def("SetCol",
             (void (gp_Mat2d::*)( const Standard_Integer , const gp_XY & ) ) static_cast<void (gp_Mat2d::*)( const Standard_Integer , const gp_XY & ) >(&gp_Mat2d::SetCol),
             R"#(Assigns the two coordinates of Value to the column of range Col of this matrix Raises OutOfRange if Col < 1 or Col > 2.)#"  , py::arg("Col"),  py::arg("Value"))
        .def("SetCols",
             (void (gp_Mat2d::*)( const gp_XY & , const gp_XY & ) ) static_cast<void (gp_Mat2d::*)( const gp_XY & , const gp_XY & ) >(&gp_Mat2d::SetCols),
             R"#(Assigns the number pairs Col1, Col2 to the two columns of this matrix)#"  , py::arg("Col1"),  py::arg("Col2"))
        .def("SetDiagonal",
             (void (gp_Mat2d::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (gp_Mat2d::*)( const Standard_Real , const Standard_Real ) >(&gp_Mat2d::SetDiagonal),
             R"#(Modifies the main diagonal of the matrix. <me>.Value (1, 1) = X1 <me>.Value (2, 2) = X2 The other coefficients of the matrix are not modified.)#"  , py::arg("X1"),  py::arg("X2"))
        .def("SetIdentity",
             (void (gp_Mat2d::*)() ) static_cast<void (gp_Mat2d::*)() >(&gp_Mat2d::SetIdentity),
             R"#(Modifies this matrix, so that it represents the Identity matrix.)#" )
        .def("SetRotation",
             (void (gp_Mat2d::*)( const Standard_Real ) ) static_cast<void (gp_Mat2d::*)( const Standard_Real ) >(&gp_Mat2d::SetRotation),
             R"#(Modifies this matrix, so that it representso a rotation. Ang is the angular value in radian of the rotation.)#"  , py::arg("Ang"))
        .def("SetRow",
             (void (gp_Mat2d::*)( const Standard_Integer , const gp_XY & ) ) static_cast<void (gp_Mat2d::*)( const Standard_Integer , const gp_XY & ) >(&gp_Mat2d::SetRow),
             R"#(Assigns the two coordinates of Value to the row of index Row of this matrix. Raises OutOfRange if Row < 1 or Row > 2.)#"  , py::arg("Row"),  py::arg("Value"))
        .def("SetRows",
             (void (gp_Mat2d::*)( const gp_XY & , const gp_XY & ) ) static_cast<void (gp_Mat2d::*)( const gp_XY & , const gp_XY & ) >(&gp_Mat2d::SetRows),
             R"#(Assigns the number pairs Row1, Row2 to the two rows of this matrix.)#"  , py::arg("Row1"),  py::arg("Row2"))
        .def("SetScale",
             (void (gp_Mat2d::*)( const Standard_Real ) ) static_cast<void (gp_Mat2d::*)( const Standard_Real ) >(&gp_Mat2d::SetScale),
             R"#(Modifies the matrix such that it represents a scaling transformation, where S is the scale factor : | S 0.0 | <me> = | 0.0 S |)#"  , py::arg("S"))
        .def("SetValue",
             (void (gp_Mat2d::*)( const Standard_Integer , const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_Mat2d::*)( const Standard_Integer , const Standard_Integer , const Standard_Real ) >(&gp_Mat2d::SetValue),
             R"#(Assigns <Value> to the coefficient of row Row, column Col of this matrix. Raises OutOfRange if Row < 1 or Row > 2 or Col < 1 or Col > 2)#"  , py::arg("Row"),  py::arg("Col"),  py::arg("Value"))
        .def("Column",
             (gp_XY (gp_Mat2d::*)( const Standard_Integer ) const) static_cast<gp_XY (gp_Mat2d::*)( const Standard_Integer ) const>(&gp_Mat2d::Column),
             R"#(Returns the column of Col index. Raises OutOfRange if Col < 1 or Col > 2)#"  , py::arg("Col"))
        .def("Determinant",
             (Standard_Real (gp_Mat2d::*)() const) static_cast<Standard_Real (gp_Mat2d::*)() const>(&gp_Mat2d::Determinant),
             R"#(Computes the determinant of the matrix.)#" )
        .def("Diagonal",
             (gp_XY (gp_Mat2d::*)() const) static_cast<gp_XY (gp_Mat2d::*)() const>(&gp_Mat2d::Diagonal),
             R"#(Returns the main diagonal of the matrix.)#" )
        .def("Row",
             (gp_XY (gp_Mat2d::*)( const Standard_Integer ) const) static_cast<gp_XY (gp_Mat2d::*)( const Standard_Integer ) const>(&gp_Mat2d::Row),
             R"#(Returns the row of index Row. Raised if Row < 1 or Row > 2)#"  , py::arg("Row"))
        .def("Value",
             (const Standard_Real & (gp_Mat2d::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<const Standard_Real & (gp_Mat2d::*)( const Standard_Integer , const Standard_Integer ) const>(&gp_Mat2d::Value),
             R"#(Returns the coefficient of range (Row, Col) Raises OutOfRange if Row < 1 or Row > 2 or Col < 1 or Col > 2)#"  , py::arg("Row"),  py::arg("Col"))
        .def("ChangeValue",
             (Standard_Real & (gp_Mat2d::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Real & (gp_Mat2d::*)( const Standard_Integer , const Standard_Integer ) >(&gp_Mat2d::ChangeValue),
             R"#(Returns the coefficient of range (Row, Col) Raises OutOfRange if Row < 1 or Row > 2 or Col < 1 or Col > 2)#"  , py::arg("Row"),  py::arg("Col"))
        .def("IsSingular",
             (Standard_Boolean (gp_Mat2d::*)() const) static_cast<Standard_Boolean (gp_Mat2d::*)() const>(&gp_Mat2d::IsSingular),
             R"#(Returns true if this matrix is singular (and therefore, cannot be inverted). The Gauss LU decomposition is used to invert the matrix so the matrix is considered as singular if the largest pivot found is lower or equal to Resolution from gp.)#" )
        .def("Add",
             (void (gp_Mat2d::*)( const gp_Mat2d & ) ) static_cast<void (gp_Mat2d::*)( const gp_Mat2d & ) >(&gp_Mat2d::Add),
             R"#(None)#"  , py::arg("Other"))
        .def("Added",
             (gp_Mat2d (gp_Mat2d::*)( const gp_Mat2d & ) const) static_cast<gp_Mat2d (gp_Mat2d::*)( const gp_Mat2d & ) const>(&gp_Mat2d::Added),
             R"#(Computes the sum of this matrix and the matrix Other.for each coefficient of the matrix : <me>.Coef(i,j) + <Other>.Coef(i,j) Note: - operator += assigns the result to this matrix, while - operator + creates a new one.)#"  , py::arg("Other"))
        .def("Divide",
             (void (gp_Mat2d::*)( const Standard_Real ) ) static_cast<void (gp_Mat2d::*)( const Standard_Real ) >(&gp_Mat2d::Divide),
             R"#(None)#"  , py::arg("Scalar"))
        .def("Divided",
             (gp_Mat2d (gp_Mat2d::*)( const Standard_Real ) const) static_cast<gp_Mat2d (gp_Mat2d::*)( const Standard_Real ) const>(&gp_Mat2d::Divided),
             R"#(Divides all the coefficients of the matrix by a scalar.)#"  , py::arg("Scalar"))
        .def("Invert",
             (void (gp_Mat2d::*)() ) static_cast<void (gp_Mat2d::*)() >(&gp_Mat2d::Invert),
             R"#(None)#" )
        .def("Inverted",
             (gp_Mat2d (gp_Mat2d::*)() const) static_cast<gp_Mat2d (gp_Mat2d::*)() const>(&gp_Mat2d::Inverted),
             R"#(Inverses the matrix and raises exception if the matrix is singular.)#" )
        .def("Multiplied",
             (gp_Mat2d (gp_Mat2d::*)( const gp_Mat2d & ) const) static_cast<gp_Mat2d (gp_Mat2d::*)( const gp_Mat2d & ) const>(&gp_Mat2d::Multiplied),
             R"#(None)#"  , py::arg("Other"))
        .def("Multiply",
             (void (gp_Mat2d::*)( const gp_Mat2d & ) ) static_cast<void (gp_Mat2d::*)( const gp_Mat2d & ) >(&gp_Mat2d::Multiply),
             R"#(Computes the product of two matrices <me> * <Other>)#"  , py::arg("Other"))
        .def("PreMultiply",
             (void (gp_Mat2d::*)( const gp_Mat2d & ) ) static_cast<void (gp_Mat2d::*)( const gp_Mat2d & ) >(&gp_Mat2d::PreMultiply),
             R"#(Modifies this matrix by premultiplying it by the matrix Other <me> = Other * <me>.)#"  , py::arg("Other"))
        .def("Multiplied",
             (gp_Mat2d (gp_Mat2d::*)( const Standard_Real ) const) static_cast<gp_Mat2d (gp_Mat2d::*)( const Standard_Real ) const>(&gp_Mat2d::Multiplied),
             R"#(None)#"  , py::arg("Scalar"))
        .def("Multiply",
             (void (gp_Mat2d::*)( const Standard_Real ) ) static_cast<void (gp_Mat2d::*)( const Standard_Real ) >(&gp_Mat2d::Multiply),
             R"#(Multiplies all the coefficients of the matrix by a scalar.)#"  , py::arg("Scalar"))
        .def("Power",
             (void (gp_Mat2d::*)( const Standard_Integer ) ) static_cast<void (gp_Mat2d::*)( const Standard_Integer ) >(&gp_Mat2d::Power),
             R"#(None)#"  , py::arg("N"))
        .def("Powered",
             (gp_Mat2d (gp_Mat2d::*)( const Standard_Integer ) const) static_cast<gp_Mat2d (gp_Mat2d::*)( const Standard_Integer ) const>(&gp_Mat2d::Powered),
             R"#(computes <me> = <me> * <me> * .......* <me>, N time. if N = 0 <me> = Identity if N < 0 <me> = <me>.Invert() *...........* <me>.Invert(). If N < 0 an exception can be raised if the matrix is not inversible)#"  , py::arg("N"))
        .def("Subtract",
             (void (gp_Mat2d::*)( const gp_Mat2d & ) ) static_cast<void (gp_Mat2d::*)( const gp_Mat2d & ) >(&gp_Mat2d::Subtract),
             R"#(None)#"  , py::arg("Other"))
        .def("Subtracted",
             (gp_Mat2d (gp_Mat2d::*)( const gp_Mat2d & ) const) static_cast<gp_Mat2d (gp_Mat2d::*)( const gp_Mat2d & ) const>(&gp_Mat2d::Subtracted),
             R"#(Computes for each coefficient of the matrix : <me>.Coef(i,j) - <Other>.Coef(i,j))#"  , py::arg("Other"))
        .def("Transpose",
             (void (gp_Mat2d::*)() ) static_cast<void (gp_Mat2d::*)() >(&gp_Mat2d::Transpose),
             R"#(None)#" )
        .def("Transposed",
             (gp_Mat2d (gp_Mat2d::*)() const) static_cast<gp_Mat2d (gp_Mat2d::*)() const>(&gp_Mat2d::Transposed),
             R"#(Transposes the matrix. A(j, i) -> A (i, j))#" )
        .def("SetDiagonal",
             (void (gp_Mat2d::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (gp_Mat2d::*)( const Standard_Real , const Standard_Real ) >(&gp_Mat2d::SetDiagonal),
             R"#(Modifies the main diagonal of the matrix. <me>.Value (1, 1) = X1 <me>.Value (2, 2) = X2 The other coefficients of the matrix are not modified.)#"  , py::arg("X1"),  py::arg("X2"))
        .def("SetIdentity",
             (void (gp_Mat2d::*)() ) static_cast<void (gp_Mat2d::*)() >(&gp_Mat2d::SetIdentity),
             R"#(Modifies this matrix, so that it represents the Identity matrix.)#" )
        .def("SetRotation",
             (void (gp_Mat2d::*)( const Standard_Real ) ) static_cast<void (gp_Mat2d::*)( const Standard_Real ) >(&gp_Mat2d::SetRotation),
             R"#(Modifies this matrix, so that it representso a rotation. Ang is the angular value in radian of the rotation.)#"  , py::arg("Ang"))
        .def("SetScale",
             (void (gp_Mat2d::*)( const Standard_Real ) ) static_cast<void (gp_Mat2d::*)( const Standard_Real ) >(&gp_Mat2d::SetScale),
             R"#(Modifies the matrix such that it represents a scaling transformation, where S is the scale factor : | S 0.0 | <me> = | 0.0 S |)#"  , py::arg("S"))
        .def("SetValue",
             (void (gp_Mat2d::*)( const Standard_Integer , const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_Mat2d::*)( const Standard_Integer , const Standard_Integer , const Standard_Real ) >(&gp_Mat2d::SetValue),
             R"#(Assigns <Value> to the coefficient of row Row, column Col of this matrix. Raises OutOfRange if Row < 1 or Row > 2 or Col < 1 or Col > 2)#"  , py::arg("Row"),  py::arg("Col"),  py::arg("Value"))
        .def("Determinant",
             (Standard_Real (gp_Mat2d::*)() const) static_cast<Standard_Real (gp_Mat2d::*)() const>(&gp_Mat2d::Determinant),
             R"#(Computes the determinant of the matrix.)#" )
        .def("Value",
             (const Standard_Real & (gp_Mat2d::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<const Standard_Real & (gp_Mat2d::*)( const Standard_Integer , const Standard_Integer ) const>(&gp_Mat2d::Value),
             R"#(Returns the coefficient of range (Row, Col) Raises OutOfRange if Row < 1 or Row > 2 or Col < 1 or Col > 2)#"  , py::arg("Row"),  py::arg("Col"))
        .def("ChangeValue",
             (Standard_Real & (gp_Mat2d::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Real & (gp_Mat2d::*)( const Standard_Integer , const Standard_Integer ) >(&gp_Mat2d::ChangeValue),
             R"#(Returns the coefficient of range (Row, Col) Raises OutOfRange if Row < 1 or Row > 2 or Col < 1 or Col > 2)#"  , py::arg("Row"),  py::arg("Col"))
        .def("IsSingular",
             (Standard_Boolean (gp_Mat2d::*)() const) static_cast<Standard_Boolean (gp_Mat2d::*)() const>(&gp_Mat2d::IsSingular),
             R"#(Returns true if this matrix is singular (and therefore, cannot be inverted). The Gauss LU decomposition is used to invert the matrix so the matrix is considered as singular if the largest pivot found is lower or equal to Resolution from gp.)#" )
        .def("Add",
             (void (gp_Mat2d::*)( const gp_Mat2d & ) ) static_cast<void (gp_Mat2d::*)( const gp_Mat2d & ) >(&gp_Mat2d::Add),
             R"#(None)#"  , py::arg("Other"))
        .def("Added",
             (gp_Mat2d (gp_Mat2d::*)( const gp_Mat2d & ) const) static_cast<gp_Mat2d (gp_Mat2d::*)( const gp_Mat2d & ) const>(&gp_Mat2d::Added),
             R"#(Computes the sum of this matrix and the matrix Other.for each coefficient of the matrix : <me>.Coef(i,j) + <Other>.Coef(i,j) Note: - operator += assigns the result to this matrix, while - operator + creates a new one.)#"  , py::arg("Other"))
        .def("Divide",
             (void (gp_Mat2d::*)( const Standard_Real ) ) static_cast<void (gp_Mat2d::*)( const Standard_Real ) >(&gp_Mat2d::Divide),
             R"#(None)#"  , py::arg("Scalar"))
        .def("Divided",
             (gp_Mat2d (gp_Mat2d::*)( const Standard_Real ) const) static_cast<gp_Mat2d (gp_Mat2d::*)( const Standard_Real ) const>(&gp_Mat2d::Divided),
             R"#(Divides all the coefficients of the matrix by a scalar.)#"  , py::arg("Scalar"))
        .def("Inverted",
             (gp_Mat2d (gp_Mat2d::*)() const) static_cast<gp_Mat2d (gp_Mat2d::*)() const>(&gp_Mat2d::Inverted),
             R"#(Inverses the matrix and raises exception if the matrix is singular.)#" )
        .def("Multiplied",
             (gp_Mat2d (gp_Mat2d::*)( const gp_Mat2d & ) const) static_cast<gp_Mat2d (gp_Mat2d::*)( const gp_Mat2d & ) const>(&gp_Mat2d::Multiplied),
             R"#(None)#"  , py::arg("Other"))
        .def("Multiply",
             (void (gp_Mat2d::*)( const gp_Mat2d & ) ) static_cast<void (gp_Mat2d::*)( const gp_Mat2d & ) >(&gp_Mat2d::Multiply),
             R"#(Computes the product of two matrices <me> * <Other>)#"  , py::arg("Other"))
        .def("PreMultiply",
             (void (gp_Mat2d::*)( const gp_Mat2d & ) ) static_cast<void (gp_Mat2d::*)( const gp_Mat2d & ) >(&gp_Mat2d::PreMultiply),
             R"#(Modifies this matrix by premultiplying it by the matrix Other <me> = Other * <me>.)#"  , py::arg("Other"))
        .def("Multiplied",
             (gp_Mat2d (gp_Mat2d::*)( const Standard_Real ) const) static_cast<gp_Mat2d (gp_Mat2d::*)( const Standard_Real ) const>(&gp_Mat2d::Multiplied),
             R"#(None)#"  , py::arg("Scalar"))
        .def("Multiply",
             (void (gp_Mat2d::*)( const Standard_Real ) ) static_cast<void (gp_Mat2d::*)( const Standard_Real ) >(&gp_Mat2d::Multiply),
             R"#(Multiplies all the coefficients of the matrix by a scalar.)#"  , py::arg("Scalar"))
        .def("Powered",
             (gp_Mat2d (gp_Mat2d::*)( const Standard_Integer ) const) static_cast<gp_Mat2d (gp_Mat2d::*)( const Standard_Integer ) const>(&gp_Mat2d::Powered),
             R"#(computes <me> = <me> * <me> * .......* <me>, N time. if N = 0 <me> = Identity if N < 0 <me> = <me>.Invert() *...........* <me>.Invert(). If N < 0 an exception can be raised if the matrix is not inversible)#"  , py::arg("N"))
        .def("Subtract",
             (void (gp_Mat2d::*)( const gp_Mat2d & ) ) static_cast<void (gp_Mat2d::*)( const gp_Mat2d & ) >(&gp_Mat2d::Subtract),
             R"#(None)#"  , py::arg("Other"))
        .def("Subtracted",
             (gp_Mat2d (gp_Mat2d::*)( const gp_Mat2d & ) const) static_cast<gp_Mat2d (gp_Mat2d::*)( const gp_Mat2d & ) const>(&gp_Mat2d::Subtracted),
             R"#(Computes for each coefficient of the matrix : <me>.Coef(i,j) - <Other>.Coef(i,j))#"  , py::arg("Other"))
        .def("Transpose",
             (void (gp_Mat2d::*)() ) static_cast<void (gp_Mat2d::*)() >(&gp_Mat2d::Transpose),
             R"#(None)#" )
        .def("Transposed",
             (gp_Mat2d (gp_Mat2d::*)() const) static_cast<gp_Mat2d (gp_Mat2d::*)() const>(&gp_Mat2d::Transposed),
             R"#(Transposes the matrix. A(j, i) -> A (i, j))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
        .def("__iadd__",
             (void (gp_Mat2d::*)( const gp_Mat2d & ) ) static_cast<void (gp_Mat2d::*)( const gp_Mat2d & ) >(&gp_Mat2d::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__add__",
             (gp_Mat2d (gp_Mat2d::*)( const gp_Mat2d & ) const) static_cast<gp_Mat2d (gp_Mat2d::*)( const gp_Mat2d & ) const>(&gp_Mat2d::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__itruediv__",
             (void (gp_Mat2d::*)( const Standard_Real ) ) static_cast<void (gp_Mat2d::*)( const Standard_Real ) >(&gp_Mat2d::operator/=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__truediv__",
             (gp_Mat2d (gp_Mat2d::*)( const Standard_Real ) const) static_cast<gp_Mat2d (gp_Mat2d::*)( const Standard_Real ) const>(&gp_Mat2d::operator/),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__mul__",
             (gp_Mat2d (gp_Mat2d::*)( const gp_Mat2d & ) const) static_cast<gp_Mat2d (gp_Mat2d::*)( const gp_Mat2d & ) const>(&gp_Mat2d::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__rmul__",
             (gp_Mat2d (gp_Mat2d::*)( const gp_Mat2d & ) const) static_cast<gp_Mat2d (gp_Mat2d::*)( const gp_Mat2d & ) const>(&gp_Mat2d::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__mul__",
             (gp_Mat2d (gp_Mat2d::*)( const Standard_Real ) const) static_cast<gp_Mat2d (gp_Mat2d::*)( const Standard_Real ) const>(&gp_Mat2d::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__rmul__",
             (gp_Mat2d (gp_Mat2d::*)( const Standard_Real ) const) static_cast<gp_Mat2d (gp_Mat2d::*)( const Standard_Real ) const>(&gp_Mat2d::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__imul__",
             (void (gp_Mat2d::*)( const Standard_Real ) ) static_cast<void (gp_Mat2d::*)( const Standard_Real ) >(&gp_Mat2d::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__isub__",
             (void (gp_Mat2d::*)( const gp_Mat2d & ) ) static_cast<void (gp_Mat2d::*)( const gp_Mat2d & ) >(&gp_Mat2d::operator-=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__sub__",
             (gp_Mat2d (gp_Mat2d::*)( const gp_Mat2d & ) const) static_cast<gp_Mat2d (gp_Mat2d::*)( const gp_Mat2d & ) const>(&gp_Mat2d::operator-),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
    // additional methods and static methods
;


    static_cast<py::class_<gp_Parab , shared_ptr<gp_Parab> >>(m.attr("gp_Parab"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Ax2 &,const Standard_Real >()  , py::arg("A2"),  py::arg("Focal") )
        .def(py::init< const gp_Ax1 &,const gp_Pnt & >()  , py::arg("D"),  py::arg("F") )
    // custom constructors
    // methods
        .def("SetAxis",
             (void (gp_Parab::*)( const gp_Ax1 & ) ) static_cast<void (gp_Parab::*)( const gp_Ax1 & ) >(&gp_Parab::SetAxis),
             R"#(Modifies this parabola by redefining its local coordinate system so that - its origin and "main Direction" become those of the axis A1 (the "X Direction" and "Y Direction" are then recomputed in the same way as for any gp_Ax2) Raises ConstructionError if the direction of A1 is parallel to the previous XAxis of the parabola.)#"  , py::arg("A1"))
        .def("SetFocal",
             (void (gp_Parab::*)( const Standard_Real ) ) static_cast<void (gp_Parab::*)( const Standard_Real ) >(&gp_Parab::SetFocal),
             R"#(Changes the focal distance of the parabola. Raises ConstructionError if Focal < 0.0)#"  , py::arg("Focal"))
        .def("SetLocation",
             (void (gp_Parab::*)( const gp_Pnt & ) ) static_cast<void (gp_Parab::*)( const gp_Pnt & ) >(&gp_Parab::SetLocation),
             R"#(Changes the location of the parabola. It is the vertex of the parabola.)#"  , py::arg("P"))
        .def("SetPosition",
             (void (gp_Parab::*)( const gp_Ax2 & ) ) static_cast<void (gp_Parab::*)( const gp_Ax2 & ) >(&gp_Parab::SetPosition),
             R"#(Changes the local coordinate system of the parabola.)#"  , py::arg("A2"))
        .def("Axis",
             (const gp_Ax1 & (gp_Parab::*)() const) static_cast<const gp_Ax1 & (gp_Parab::*)() const>(&gp_Parab::Axis),
             R"#(Returns the main axis of the parabola. It is the axis normal to the plane of the parabola passing through the vertex of the parabola.)#" )
        .def("Directrix",
             (gp_Ax1 (gp_Parab::*)() const) static_cast<gp_Ax1 (gp_Parab::*)() const>(&gp_Parab::Directrix),
             R"#(Computes the directrix of this parabola. The directrix is: - a line parallel to the "Y Direction" of the local coordinate system of this parabola, and - located on the negative side of the axis of symmetry, at a distance from the apex which is equal to the focal length of this parabola. The directrix is returned as an axis (a gp_Ax1 object), the origin of which is situated on the "X Axis" of this parabola.)#" )
        .def("Focal",
             (Standard_Real (gp_Parab::*)() const) static_cast<Standard_Real (gp_Parab::*)() const>(&gp_Parab::Focal),
             R"#(Returns the distance between the vertex and the focus of the parabola.)#" )
        .def("Focus",
             (gp_Pnt (gp_Parab::*)() const) static_cast<gp_Pnt (gp_Parab::*)() const>(&gp_Parab::Focus),
             R"#(- Computes the focus of the parabola.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Parab::*)() const) static_cast<const gp_Pnt & (gp_Parab::*)() const>(&gp_Parab::Location),
             R"#(Returns the vertex of the parabola. It is the "Location" point of the coordinate system of the parabola.)#" )
        .def("Parameter",
             (Standard_Real (gp_Parab::*)() const) static_cast<Standard_Real (gp_Parab::*)() const>(&gp_Parab::Parameter),
             R"#(Computes the parameter of the parabola. It is the distance between the focus and the directrix of the parabola. This distance is twice the focal length.)#" )
        .def("Position",
             (const gp_Ax2 & (gp_Parab::*)() const) static_cast<const gp_Ax2 & (gp_Parab::*)() const>(&gp_Parab::Position),
             R"#(Returns the local coordinate system of the parabola.)#" )
        .def("XAxis",
             (gp_Ax1 (gp_Parab::*)() const) static_cast<gp_Ax1 (gp_Parab::*)() const>(&gp_Parab::XAxis),
             R"#(Returns the symmetry axis of the parabola. The location point of the axis is the vertex of the parabola.)#" )
        .def("YAxis",
             (gp_Ax1 (gp_Parab::*)() const) static_cast<gp_Ax1 (gp_Parab::*)() const>(&gp_Parab::YAxis),
             R"#(It is an axis parallel to the directrix of the parabola. The location point of this axis is the vertex of the parabola.)#" )
        .def("Mirror",
             (void (gp_Parab::*)( const gp_Pnt & ) ) static_cast<void (gp_Parab::*)( const gp_Pnt & ) >(&gp_Parab::Mirror),
             R"#(None)#"  , py::arg("P"))
        .def("Mirrored",
             (gp_Parab (gp_Parab::*)( const gp_Pnt & ) const) static_cast<gp_Parab (gp_Parab::*)( const gp_Pnt & ) const>(&gp_Parab::Mirrored),
             R"#(Performs the symmetrical transformation of a parabola with respect to the point P which is the center of the symmetry.)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Parab::*)( const gp_Ax1 & ) ) static_cast<void (gp_Parab::*)( const gp_Ax1 & ) >(&gp_Parab::Mirror),
             R"#(None)#"  , py::arg("A1"))
        .def("Mirrored",
             (gp_Parab (gp_Parab::*)( const gp_Ax1 & ) const) static_cast<gp_Parab (gp_Parab::*)( const gp_Ax1 & ) const>(&gp_Parab::Mirrored),
             R"#(Performs the symmetrical transformation of a parabola with respect to an axis placement which is the axis of the symmetry.)#"  , py::arg("A1"))
        .def("Mirror",
             (void (gp_Parab::*)( const gp_Ax2 & ) ) static_cast<void (gp_Parab::*)( const gp_Ax2 & ) >(&gp_Parab::Mirror),
             R"#(None)#"  , py::arg("A2"))
        .def("Mirrored",
             (gp_Parab (gp_Parab::*)( const gp_Ax2 & ) const) static_cast<gp_Parab (gp_Parab::*)( const gp_Ax2 & ) const>(&gp_Parab::Mirrored),
             R"#(Performs the symmetrical transformation of a parabola with respect to a plane. The axis placement A2 locates the plane of the symmetry (Location, XDirection, YDirection).)#"  , py::arg("A2"))
        .def("Rotate",
             (void (gp_Parab::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Parab::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Parab::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Parab (gp_Parab::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Parab (gp_Parab::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Parab::Rotated),
             R"#(Rotates a parabola. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Parab::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Parab::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Parab::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Parab (gp_Parab::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Parab (gp_Parab::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Parab::Scaled),
             R"#(Scales a parabola. S is the scaling value. If S is negative the direction of the symmetry axis XAxis is reversed and the direction of the YAxis too.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Parab::*)( const gp_Trsf & ) ) static_cast<void (gp_Parab::*)( const gp_Trsf & ) >(&gp_Parab::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Parab (gp_Parab::*)( const gp_Trsf & ) const) static_cast<gp_Parab (gp_Parab::*)( const gp_Trsf & ) const>(&gp_Parab::Transformed),
             R"#(Transforms a parabola with the transformation T from class Trsf.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Parab::*)( const gp_Vec & ) ) static_cast<void (gp_Parab::*)( const gp_Vec & ) >(&gp_Parab::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Parab (gp_Parab::*)( const gp_Vec & ) const) static_cast<gp_Parab (gp_Parab::*)( const gp_Vec & ) const>(&gp_Parab::Translated),
             R"#(Translates a parabola in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Parab::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Parab::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Parab::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Parab (gp_Parab::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Parab (gp_Parab::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Parab::Translated),
             R"#(Translates a parabola from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetAxis",
             (void (gp_Parab::*)( const gp_Ax1 & ) ) static_cast<void (gp_Parab::*)( const gp_Ax1 & ) >(&gp_Parab::SetAxis),
             R"#(Modifies this parabola by redefining its local coordinate system so that - its origin and "main Direction" become those of the axis A1 (the "X Direction" and "Y Direction" are then recomputed in the same way as for any gp_Ax2) Raises ConstructionError if the direction of A1 is parallel to the previous XAxis of the parabola.)#"  , py::arg("A1"))
        .def("SetFocal",
             (void (gp_Parab::*)( const Standard_Real ) ) static_cast<void (gp_Parab::*)( const Standard_Real ) >(&gp_Parab::SetFocal),
             R"#(Changes the focal distance of the parabola. Raises ConstructionError if Focal < 0.0)#"  , py::arg("Focal"))
        .def("SetLocation",
             (void (gp_Parab::*)( const gp_Pnt & ) ) static_cast<void (gp_Parab::*)( const gp_Pnt & ) >(&gp_Parab::SetLocation),
             R"#(Changes the location of the parabola. It is the vertex of the parabola.)#"  , py::arg("P"))
        .def("SetPosition",
             (void (gp_Parab::*)( const gp_Ax2 & ) ) static_cast<void (gp_Parab::*)( const gp_Ax2 & ) >(&gp_Parab::SetPosition),
             R"#(Changes the local coordinate system of the parabola.)#"  , py::arg("A2"))
        .def("Axis",
             (const gp_Ax1 & (gp_Parab::*)() const) static_cast<const gp_Ax1 & (gp_Parab::*)() const>(&gp_Parab::Axis),
             R"#(Returns the main axis of the parabola. It is the axis normal to the plane of the parabola passing through the vertex of the parabola.)#" )
        .def("Directrix",
             (gp_Ax1 (gp_Parab::*)() const) static_cast<gp_Ax1 (gp_Parab::*)() const>(&gp_Parab::Directrix),
             R"#(Computes the directrix of this parabola. The directrix is: - a line parallel to the "Y Direction" of the local coordinate system of this parabola, and - located on the negative side of the axis of symmetry, at a distance from the apex which is equal to the focal length of this parabola. The directrix is returned as an axis (a gp_Ax1 object), the origin of which is situated on the "X Axis" of this parabola.)#" )
        .def("Focal",
             (Standard_Real (gp_Parab::*)() const) static_cast<Standard_Real (gp_Parab::*)() const>(&gp_Parab::Focal),
             R"#(Returns the distance between the vertex and the focus of the parabola.)#" )
        .def("Focus",
             (gp_Pnt (gp_Parab::*)() const) static_cast<gp_Pnt (gp_Parab::*)() const>(&gp_Parab::Focus),
             R"#(- Computes the focus of the parabola.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Parab::*)() const) static_cast<const gp_Pnt & (gp_Parab::*)() const>(&gp_Parab::Location),
             R"#(Returns the vertex of the parabola. It is the "Location" point of the coordinate system of the parabola.)#" )
        .def("Parameter",
             (Standard_Real (gp_Parab::*)() const) static_cast<Standard_Real (gp_Parab::*)() const>(&gp_Parab::Parameter),
             R"#(Computes the parameter of the parabola. It is the distance between the focus and the directrix of the parabola. This distance is twice the focal length.)#" )
        .def("Position",
             (const gp_Ax2 & (gp_Parab::*)() const) static_cast<const gp_Ax2 & (gp_Parab::*)() const>(&gp_Parab::Position),
             R"#(Returns the local coordinate system of the parabola.)#" )
        .def("XAxis",
             (gp_Ax1 (gp_Parab::*)() const) static_cast<gp_Ax1 (gp_Parab::*)() const>(&gp_Parab::XAxis),
             R"#(Returns the symmetry axis of the parabola. The location point of the axis is the vertex of the parabola.)#" )
        .def("YAxis",
             (gp_Ax1 (gp_Parab::*)() const) static_cast<gp_Ax1 (gp_Parab::*)() const>(&gp_Parab::YAxis),
             R"#(It is an axis parallel to the directrix of the parabola. The location point of this axis is the vertex of the parabola.)#" )
        .def("Rotate",
             (void (gp_Parab::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Parab::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Parab::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Parab (gp_Parab::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Parab (gp_Parab::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Parab::Rotated),
             R"#(Rotates a parabola. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Parab::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Parab::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Parab::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Parab (gp_Parab::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Parab (gp_Parab::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Parab::Scaled),
             R"#(Scales a parabola. S is the scaling value. If S is negative the direction of the symmetry axis XAxis is reversed and the direction of the YAxis too.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Parab::*)( const gp_Trsf & ) ) static_cast<void (gp_Parab::*)( const gp_Trsf & ) >(&gp_Parab::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Parab (gp_Parab::*)( const gp_Trsf & ) const) static_cast<gp_Parab (gp_Parab::*)( const gp_Trsf & ) const>(&gp_Parab::Transformed),
             R"#(Transforms a parabola with the transformation T from class Trsf.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Parab::*)( const gp_Vec & ) ) static_cast<void (gp_Parab::*)( const gp_Vec & ) >(&gp_Parab::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Parab (gp_Parab::*)( const gp_Vec & ) const) static_cast<gp_Parab (gp_Parab::*)( const gp_Vec & ) const>(&gp_Parab::Translated),
             R"#(Translates a parabola in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Parab::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Parab::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Parab::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Parab (gp_Parab::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Parab (gp_Parab::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Parab::Translated),
             R"#(Translates a parabola from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_Parab2d , shared_ptr<gp_Parab2d> >>(m.attr("gp_Parab2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Ax2d &,const Standard_Real,const Standard_Boolean >()  , py::arg("theMirrorAxis"),  py::arg("theFocalLength"),  py::arg("theSense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Ax22d &,const Standard_Real >()  , py::arg("theAxes"),  py::arg("theFocalLength") )
        .def(py::init< const gp_Ax2d &,const gp_Pnt2d &,const Standard_Boolean >()  , py::arg("theDirectrix"),  py::arg("theFocus"),  py::arg("theSense")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("SetFocal",
             (void (gp_Parab2d::*)( const Standard_Real ) ) static_cast<void (gp_Parab2d::*)( const Standard_Real ) >(&gp_Parab2d::SetFocal),
             R"#(Changes the focal distance of the parabola Warnings : It is possible to have Focal = 0. Raises ConstructionError if Focal < 0.0)#"  , py::arg("Focal"))
        .def("SetLocation",
             (void (gp_Parab2d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Parab2d::*)( const gp_Pnt2d & ) >(&gp_Parab2d::SetLocation),
             R"#(Changes the "Location" point of the parabola. It is the vertex of the parabola.)#"  , py::arg("P"))
        .def("SetMirrorAxis",
             (void (gp_Parab2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Parab2d::*)( const gp_Ax2d & ) >(&gp_Parab2d::SetMirrorAxis),
             R"#(Modifies this parabola, by redefining its local coordinate system so that its origin and "X Direction" become those of the axis MA. The "Y Direction" of the local coordinate system is then recomputed. The orientation of the local coordinate system is not modified.)#"  , py::arg("A"))
        .def("SetAxis",
             (void (gp_Parab2d::*)( const gp_Ax22d & ) ) static_cast<void (gp_Parab2d::*)( const gp_Ax22d & ) >(&gp_Parab2d::SetAxis),
             R"#(Changes the local coordinate system of the parabola. The "Location" point of A becomes the vertex of the parabola.)#"  , py::arg("A"))
        .def("Directrix",
             (gp_Ax2d (gp_Parab2d::*)() const) static_cast<gp_Ax2d (gp_Parab2d::*)() const>(&gp_Parab2d::Directrix),
             R"#(Computes the directrix of the parabola. The directrix is: - a line parallel to the "Y Direction" of the local coordinate system of this parabola, and - located on the negative side of the axis of symmetry, at a distance from the apex which is equal to the focal length of this parabola. The directrix is returned as an axis (a gp_Ax2d object), the origin of which is situated on the "X Axis" of this parabola.)#" )
        .def("Focal",
             (Standard_Real (gp_Parab2d::*)() const) static_cast<Standard_Real (gp_Parab2d::*)() const>(&gp_Parab2d::Focal),
             R"#(Returns the distance between the vertex and the focus of the parabola.)#" )
        .def("Focus",
             (gp_Pnt2d (gp_Parab2d::*)() const) static_cast<gp_Pnt2d (gp_Parab2d::*)() const>(&gp_Parab2d::Focus),
             R"#(Returns the focus of the parabola.)#" )
        .def("Location",
             (gp_Pnt2d (gp_Parab2d::*)() const) static_cast<gp_Pnt2d (gp_Parab2d::*)() const>(&gp_Parab2d::Location),
             R"#(Returns the vertex of the parabola.)#" )
        .def("MirrorAxis",
             (gp_Ax2d (gp_Parab2d::*)() const) static_cast<gp_Ax2d (gp_Parab2d::*)() const>(&gp_Parab2d::MirrorAxis),
             R"#(Returns the symmetry axis of the parabola. The "Location" point of this axis is the vertex of the parabola.)#" )
        .def("Axis",
             (gp_Ax22d (gp_Parab2d::*)() const) static_cast<gp_Ax22d (gp_Parab2d::*)() const>(&gp_Parab2d::Axis),
             R"#(Returns the local coordinate system of the parabola. The "Location" point of this axis is the vertex of the parabola.)#" )
        .def("Parameter",
             (Standard_Real (gp_Parab2d::*)() const) static_cast<Standard_Real (gp_Parab2d::*)() const>(&gp_Parab2d::Parameter),
             R"#(Returns the distance between the focus and the directrix of the parabola.)#" )
        .def("Reverse",
             (void (gp_Parab2d::*)() ) static_cast<void (gp_Parab2d::*)() >(&gp_Parab2d::Reverse),
             R"#(None)#" )
        .def("Reversed",
             (gp_Parab2d (gp_Parab2d::*)() const) static_cast<gp_Parab2d (gp_Parab2d::*)() const>(&gp_Parab2d::Reversed),
             R"#(Reverses the orientation of the local coordinate system of this parabola (the "Y Direction" is reversed). Therefore, the implicit orientation of this parabola is reversed. Note: - Reverse assigns the result to this parabola, while - Reversed creates a new one.)#" )
        .def("IsDirect",
             (Standard_Boolean (gp_Parab2d::*)() const) static_cast<Standard_Boolean (gp_Parab2d::*)() const>(&gp_Parab2d::IsDirect),
             R"#(Returns true if the local coordinate system is direct and false in the other case.)#" )
        .def("Mirror",
             (void (gp_Parab2d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Parab2d::*)( const gp_Pnt2d & ) >(&gp_Parab2d::Mirror),
             R"#(None)#"  , py::arg("P"))
        .def("Mirrored",
             (gp_Parab2d (gp_Parab2d::*)( const gp_Pnt2d & ) const) static_cast<gp_Parab2d (gp_Parab2d::*)( const gp_Pnt2d & ) const>(&gp_Parab2d::Mirrored),
             R"#(Performs the symmetrical transformation of a parabola with respect to the point P which is the center of the symmetry)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Parab2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Parab2d::*)( const gp_Ax2d & ) >(&gp_Parab2d::Mirror),
             R"#(None)#"  , py::arg("A"))
        .def("Mirrored",
             (gp_Parab2d (gp_Parab2d::*)( const gp_Ax2d & ) const) static_cast<gp_Parab2d (gp_Parab2d::*)( const gp_Ax2d & ) const>(&gp_Parab2d::Mirrored),
             R"#(Performs the symmetrical transformation of a parabola with respect to an axis placement which is the axis of the symmetry.)#"  , py::arg("A"))
        .def("Rotate",
             (void (gp_Parab2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Parab2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Parab2d::Rotate),
             R"#(None)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Parab2d (gp_Parab2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Parab2d (gp_Parab2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Parab2d::Rotated),
             R"#(Rotates a parabola. P is the center of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Parab2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Parab2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Parab2d::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Parab2d (gp_Parab2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Parab2d (gp_Parab2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Parab2d::Scaled),
             R"#(Scales a parabola. S is the scaling value. If S is negative the direction of the symmetry axis "XAxis" is reversed and the direction of the "YAxis" too.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Parab2d::*)( const gp_Trsf2d & ) ) static_cast<void (gp_Parab2d::*)( const gp_Trsf2d & ) >(&gp_Parab2d::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Parab2d (gp_Parab2d::*)( const gp_Trsf2d & ) const) static_cast<gp_Parab2d (gp_Parab2d::*)( const gp_Trsf2d & ) const>(&gp_Parab2d::Transformed),
             R"#(Transforms an parabola with the transformation T from class Trsf2d.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Parab2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Parab2d::*)( const gp_Vec2d & ) >(&gp_Parab2d::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Parab2d (gp_Parab2d::*)( const gp_Vec2d & ) const) static_cast<gp_Parab2d (gp_Parab2d::*)( const gp_Vec2d & ) const>(&gp_Parab2d::Translated),
             R"#(Translates a parabola in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Parab2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (gp_Parab2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&gp_Parab2d::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Parab2d (gp_Parab2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const) static_cast<gp_Parab2d (gp_Parab2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const>(&gp_Parab2d::Translated),
             R"#(Translates a parabola from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetFocal",
             (void (gp_Parab2d::*)( const Standard_Real ) ) static_cast<void (gp_Parab2d::*)( const Standard_Real ) >(&gp_Parab2d::SetFocal),
             R"#(Changes the focal distance of the parabola Warnings : It is possible to have Focal = 0. Raises ConstructionError if Focal < 0.0)#"  , py::arg("Focal"))
        .def("SetLocation",
             (void (gp_Parab2d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Parab2d::*)( const gp_Pnt2d & ) >(&gp_Parab2d::SetLocation),
             R"#(Changes the "Location" point of the parabola. It is the vertex of the parabola.)#"  , py::arg("P"))
        .def("SetMirrorAxis",
             (void (gp_Parab2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Parab2d::*)( const gp_Ax2d & ) >(&gp_Parab2d::SetMirrorAxis),
             R"#(Modifies this parabola, by redefining its local coordinate system so that its origin and "X Direction" become those of the axis MA. The "Y Direction" of the local coordinate system is then recomputed. The orientation of the local coordinate system is not modified.)#"  , py::arg("A"))
        .def("SetAxis",
             (void (gp_Parab2d::*)( const gp_Ax22d & ) ) static_cast<void (gp_Parab2d::*)( const gp_Ax22d & ) >(&gp_Parab2d::SetAxis),
             R"#(Changes the local coordinate system of the parabola. The "Location" point of A becomes the vertex of the parabola.)#"  , py::arg("A"))
        .def("Directrix",
             (gp_Ax2d (gp_Parab2d::*)() const) static_cast<gp_Ax2d (gp_Parab2d::*)() const>(&gp_Parab2d::Directrix),
             R"#(Computes the directrix of the parabola. The directrix is: - a line parallel to the "Y Direction" of the local coordinate system of this parabola, and - located on the negative side of the axis of symmetry, at a distance from the apex which is equal to the focal length of this parabola. The directrix is returned as an axis (a gp_Ax2d object), the origin of which is situated on the "X Axis" of this parabola.)#" )
        .def("Focal",
             (Standard_Real (gp_Parab2d::*)() const) static_cast<Standard_Real (gp_Parab2d::*)() const>(&gp_Parab2d::Focal),
             R"#(Returns the distance between the vertex and the focus of the parabola.)#" )
        .def("Focus",
             (gp_Pnt2d (gp_Parab2d::*)() const) static_cast<gp_Pnt2d (gp_Parab2d::*)() const>(&gp_Parab2d::Focus),
             R"#(Returns the focus of the parabola.)#" )
        .def("Location",
             (gp_Pnt2d (gp_Parab2d::*)() const) static_cast<gp_Pnt2d (gp_Parab2d::*)() const>(&gp_Parab2d::Location),
             R"#(Returns the vertex of the parabola.)#" )
        .def("MirrorAxis",
             (gp_Ax2d (gp_Parab2d::*)() const) static_cast<gp_Ax2d (gp_Parab2d::*)() const>(&gp_Parab2d::MirrorAxis),
             R"#(Returns the symmetry axis of the parabola. The "Location" point of this axis is the vertex of the parabola.)#" )
        .def("Axis",
             (gp_Ax22d (gp_Parab2d::*)() const) static_cast<gp_Ax22d (gp_Parab2d::*)() const>(&gp_Parab2d::Axis),
             R"#(Returns the local coordinate system of the parabola. The "Location" point of this axis is the vertex of the parabola.)#" )
        .def("Parameter",
             (Standard_Real (gp_Parab2d::*)() const) static_cast<Standard_Real (gp_Parab2d::*)() const>(&gp_Parab2d::Parameter),
             R"#(Returns the distance between the focus and the directrix of the parabola.)#" )
        .def("Reverse",
             (void (gp_Parab2d::*)() ) static_cast<void (gp_Parab2d::*)() >(&gp_Parab2d::Reverse),
             R"#(None)#" )
        .def("Reversed",
             (gp_Parab2d (gp_Parab2d::*)() const) static_cast<gp_Parab2d (gp_Parab2d::*)() const>(&gp_Parab2d::Reversed),
             R"#(Reverses the orientation of the local coordinate system of this parabola (the "Y Direction" is reversed). Therefore, the implicit orientation of this parabola is reversed. Note: - Reverse assigns the result to this parabola, while - Reversed creates a new one.)#" )
        .def("IsDirect",
             (Standard_Boolean (gp_Parab2d::*)() const) static_cast<Standard_Boolean (gp_Parab2d::*)() const>(&gp_Parab2d::IsDirect),
             R"#(Returns true if the local coordinate system is direct and false in the other case.)#" )
        .def("Rotate",
             (void (gp_Parab2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Parab2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Parab2d::Rotate),
             R"#(None)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Parab2d (gp_Parab2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Parab2d (gp_Parab2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Parab2d::Rotated),
             R"#(Rotates a parabola. P is the center of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Parab2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Parab2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Parab2d::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Parab2d (gp_Parab2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Parab2d (gp_Parab2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Parab2d::Scaled),
             R"#(Scales a parabola. S is the scaling value. If S is negative the direction of the symmetry axis "XAxis" is reversed and the direction of the "YAxis" too.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Parab2d::*)( const gp_Trsf2d & ) ) static_cast<void (gp_Parab2d::*)( const gp_Trsf2d & ) >(&gp_Parab2d::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Parab2d (gp_Parab2d::*)( const gp_Trsf2d & ) const) static_cast<gp_Parab2d (gp_Parab2d::*)( const gp_Trsf2d & ) const>(&gp_Parab2d::Transformed),
             R"#(Transforms an parabola with the transformation T from class Trsf2d.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Parab2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Parab2d::*)( const gp_Vec2d & ) >(&gp_Parab2d::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Parab2d (gp_Parab2d::*)( const gp_Vec2d & ) const) static_cast<gp_Parab2d (gp_Parab2d::*)( const gp_Vec2d & ) const>(&gp_Parab2d::Translated),
             R"#(Translates a parabola in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Parab2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (gp_Parab2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&gp_Parab2d::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Parab2d (gp_Parab2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const) static_cast<gp_Parab2d (gp_Parab2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const>(&gp_Parab2d::Translated),
             R"#(Translates a parabola from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
        .def("Coefficients",
             []( gp_Parab2d &self   ){ Standard_Real  A; Standard_Real  B; Standard_Real  C; Standard_Real  D; Standard_Real  E; Standard_Real  F; self.Coefficients(A,B,C,D,E,F); return std::make_tuple(A,B,C,D,E,F); },
             R"#(Computes the coefficients of the implicit equation of the parabola (in WCS - World Coordinate System). A * (X**2) + B * (Y**2) + 2*C*(X*Y) + 2*D*X + 2*E*Y + F = 0.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_Pln , shared_ptr<gp_Pln> >>(m.attr("gp_Pln"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Ax3 & >()  , py::arg("A3") )
        .def(py::init< const gp_Pnt &,const gp_Dir & >()  , py::arg("P"),  py::arg("V") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("A"),  py::arg("B"),  py::arg("C"),  py::arg("D") )
    // custom constructors
    // methods
        .def("SetAxis",
             (void (gp_Pln::*)( const gp_Ax1 & ) ) static_cast<void (gp_Pln::*)( const gp_Ax1 & ) >(&gp_Pln::SetAxis),
             R"#(Modifies this plane, by redefining its local coordinate system so that - its origin and "main Direction" become those of the axis A1 (the "X Direction" and "Y Direction" are then recomputed). Raises ConstructionError if the A1 is parallel to the "XAxis" of the plane.)#"  , py::arg("A1"))
        .def("SetLocation",
             (void (gp_Pln::*)( const gp_Pnt & ) ) static_cast<void (gp_Pln::*)( const gp_Pnt & ) >(&gp_Pln::SetLocation),
             R"#(Changes the origin of the plane.)#"  , py::arg("Loc"))
        .def("SetPosition",
             (void (gp_Pln::*)( const gp_Ax3 & ) ) static_cast<void (gp_Pln::*)( const gp_Ax3 & ) >(&gp_Pln::SetPosition),
             R"#(Changes the local coordinate system of the plane.)#"  , py::arg("A3"))
        .def("UReverse",
             (void (gp_Pln::*)() ) static_cast<void (gp_Pln::*)() >(&gp_Pln::UReverse),
             R"#(Reverses the U parametrization of the plane reversing the XAxis.)#" )
        .def("VReverse",
             (void (gp_Pln::*)() ) static_cast<void (gp_Pln::*)() >(&gp_Pln::VReverse),
             R"#(Reverses the V parametrization of the plane reversing the YAxis.)#" )
        .def("Direct",
             (Standard_Boolean (gp_Pln::*)() const) static_cast<Standard_Boolean (gp_Pln::*)() const>(&gp_Pln::Direct),
             R"#(returns true if the Ax3 is right handed.)#" )
        .def("Axis",
             (const gp_Ax1 & (gp_Pln::*)() const) static_cast<const gp_Ax1 & (gp_Pln::*)() const>(&gp_Pln::Axis),
             R"#(Returns the plane's normal Axis.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Pln::*)() const) static_cast<const gp_Pnt & (gp_Pln::*)() const>(&gp_Pln::Location),
             R"#(Returns the plane's location (origin).)#" )
        .def("Position",
             (const gp_Ax3 & (gp_Pln::*)() const) static_cast<const gp_Ax3 & (gp_Pln::*)() const>(&gp_Pln::Position),
             R"#(Returns the local coordinate system of the plane .)#" )
        .def("Distance",
             (Standard_Real (gp_Pln::*)( const gp_Pnt & ) const) static_cast<Standard_Real (gp_Pln::*)( const gp_Pnt & ) const>(&gp_Pln::Distance),
             R"#(Computes the distance between <me> and the point <P>.)#"  , py::arg("P"))
        .def("Distance",
             (Standard_Real (gp_Pln::*)( const gp_Lin & ) const) static_cast<Standard_Real (gp_Pln::*)( const gp_Lin & ) const>(&gp_Pln::Distance),
             R"#(Computes the distance between <me> and the line <L>.)#"  , py::arg("L"))
        .def("Distance",
             (Standard_Real (gp_Pln::*)( const gp_Pln & ) const) static_cast<Standard_Real (gp_Pln::*)( const gp_Pln & ) const>(&gp_Pln::Distance),
             R"#(Computes the distance between two planes.)#"  , py::arg("Other"))
        .def("SquareDistance",
             (Standard_Real (gp_Pln::*)( const gp_Pnt & ) const) static_cast<Standard_Real (gp_Pln::*)( const gp_Pnt & ) const>(&gp_Pln::SquareDistance),
             R"#(Computes the square distance between <me> and the point <P>.)#"  , py::arg("P"))
        .def("SquareDistance",
             (Standard_Real (gp_Pln::*)( const gp_Lin & ) const) static_cast<Standard_Real (gp_Pln::*)( const gp_Lin & ) const>(&gp_Pln::SquareDistance),
             R"#(Computes the square distance between <me> and the line <L>.)#"  , py::arg("L"))
        .def("SquareDistance",
             (Standard_Real (gp_Pln::*)( const gp_Pln & ) const) static_cast<Standard_Real (gp_Pln::*)( const gp_Pln & ) const>(&gp_Pln::SquareDistance),
             R"#(Computes the square distance between two planes.)#"  , py::arg("Other"))
        .def("XAxis",
             (gp_Ax1 (gp_Pln::*)() const) static_cast<gp_Ax1 (gp_Pln::*)() const>(&gp_Pln::XAxis),
             R"#(Returns the X axis of the plane.)#" )
        .def("YAxis",
             (gp_Ax1 (gp_Pln::*)() const) static_cast<gp_Ax1 (gp_Pln::*)() const>(&gp_Pln::YAxis),
             R"#(Returns the Y axis of the plane.)#" )
        .def("Contains",
             (Standard_Boolean (gp_Pln::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Pln::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Pln::Contains),
             R"#(Returns true if this plane contains the point P. This means that - the distance between point P and this plane is less than or equal to LinearTolerance, or - line L is normal to the "main Axis" of the local coordinate system of this plane, within the tolerance AngularTolerance, and the distance between the origin of line L and this plane is less than or equal to LinearTolerance.)#"  , py::arg("P"),  py::arg("LinearTolerance"))
        .def("Contains",
             (Standard_Boolean (gp_Pln::*)( const gp_Lin & , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Pln::*)( const gp_Lin & , const Standard_Real , const Standard_Real ) const>(&gp_Pln::Contains),
             R"#(Returns true if this plane contains the line L. This means that - the distance between point P and this plane is less than or equal to LinearTolerance, or - line L is normal to the "main Axis" of the local coordinate system of this plane, within the tolerance AngularTolerance, and the distance between the origin of line L and this plane is less than or equal to LinearTolerance.)#"  , py::arg("L"),  py::arg("LinearTolerance"),  py::arg("AngularTolerance"))
        .def("Mirror",
             (void (gp_Pln::*)( const gp_Pnt & ) ) static_cast<void (gp_Pln::*)( const gp_Pnt & ) >(&gp_Pln::Mirror),
             R"#(None)#"  , py::arg("P"))
        .def("Mirrored",
             (gp_Pln (gp_Pln::*)( const gp_Pnt & ) const) static_cast<gp_Pln (gp_Pln::*)( const gp_Pnt & ) const>(&gp_Pln::Mirrored),
             R"#(Performs the symmetrical transformation of a plane with respect to the point <P> which is the center of the symmetry Warnings : The normal direction to the plane is not changed. The "XAxis" and the "YAxis" are reversed.)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Pln::*)( const gp_Ax1 & ) ) static_cast<void (gp_Pln::*)( const gp_Ax1 & ) >(&gp_Pln::Mirror),
             R"#(None)#"  , py::arg("A1"))
        .def("Mirrored",
             (gp_Pln (gp_Pln::*)( const gp_Ax1 & ) const) static_cast<gp_Pln (gp_Pln::*)( const gp_Ax1 & ) const>(&gp_Pln::Mirrored),
             R"#(Performs the symmetrical transformation of a plane with respect to an axis placement which is the axis of the symmetry. The transformation is performed on the "Location" point, on the "XAxis" and the "YAxis". The resulting normal direction is the cross product between the "XDirection" and the "YDirection" after transformation if the initial plane was right handed, else it is the opposite.)#"  , py::arg("A1"))
        .def("Mirror",
             (void (gp_Pln::*)( const gp_Ax2 & ) ) static_cast<void (gp_Pln::*)( const gp_Ax2 & ) >(&gp_Pln::Mirror),
             R"#(None)#"  , py::arg("A2"))
        .def("Mirrored",
             (gp_Pln (gp_Pln::*)( const gp_Ax2 & ) const) static_cast<gp_Pln (gp_Pln::*)( const gp_Ax2 & ) const>(&gp_Pln::Mirrored),
             R"#(Performs the symmetrical transformation of a plane with respect to an axis placement. The axis placement <A2> locates the plane of the symmetry. The transformation is performed on the "Location" point, on the "XAxis" and the "YAxis". The resulting normal direction is the cross product between the "XDirection" and the "YDirection" after transformation if the initial plane was right handed, else it is the opposite.)#"  , py::arg("A2"))
        .def("Rotate",
             (void (gp_Pln::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Pln::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Pln::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Pln (gp_Pln::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Pln (gp_Pln::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Pln::Rotated),
             R"#(rotates a plane. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Pln::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Pln::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Pln::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Pln (gp_Pln::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Pln (gp_Pln::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Pln::Scaled),
             R"#(Scales a plane. S is the scaling value.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Pln::*)( const gp_Trsf & ) ) static_cast<void (gp_Pln::*)( const gp_Trsf & ) >(&gp_Pln::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Pln (gp_Pln::*)( const gp_Trsf & ) const) static_cast<gp_Pln (gp_Pln::*)( const gp_Trsf & ) const>(&gp_Pln::Transformed),
             R"#(Transforms a plane with the transformation T from class Trsf. The transformation is performed on the "Location" point, on the "XAxis" and the "YAxis". The resulting normal direction is the cross product between the "XDirection" and the "YDirection" after transformation.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Pln::*)( const gp_Vec & ) ) static_cast<void (gp_Pln::*)( const gp_Vec & ) >(&gp_Pln::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Pln (gp_Pln::*)( const gp_Vec & ) const) static_cast<gp_Pln (gp_Pln::*)( const gp_Vec & ) const>(&gp_Pln::Translated),
             R"#(Translates a plane in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Pln::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Pln::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Pln::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Pln (gp_Pln::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Pln (gp_Pln::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Pln::Translated),
             R"#(Translates a plane from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetAxis",
             (void (gp_Pln::*)( const gp_Ax1 & ) ) static_cast<void (gp_Pln::*)( const gp_Ax1 & ) >(&gp_Pln::SetAxis),
             R"#(Modifies this plane, by redefining its local coordinate system so that - its origin and "main Direction" become those of the axis A1 (the "X Direction" and "Y Direction" are then recomputed). Raises ConstructionError if the A1 is parallel to the "XAxis" of the plane.)#"  , py::arg("A1"))
        .def("SetLocation",
             (void (gp_Pln::*)( const gp_Pnt & ) ) static_cast<void (gp_Pln::*)( const gp_Pnt & ) >(&gp_Pln::SetLocation),
             R"#(Changes the origin of the plane.)#"  , py::arg("Loc"))
        .def("SetPosition",
             (void (gp_Pln::*)( const gp_Ax3 & ) ) static_cast<void (gp_Pln::*)( const gp_Ax3 & ) >(&gp_Pln::SetPosition),
             R"#(Changes the local coordinate system of the plane.)#"  , py::arg("A3"))
        .def("UReverse",
             (void (gp_Pln::*)() ) static_cast<void (gp_Pln::*)() >(&gp_Pln::UReverse),
             R"#(Reverses the U parametrization of the plane reversing the XAxis.)#" )
        .def("VReverse",
             (void (gp_Pln::*)() ) static_cast<void (gp_Pln::*)() >(&gp_Pln::VReverse),
             R"#(Reverses the V parametrization of the plane reversing the YAxis.)#" )
        .def("Direct",
             (Standard_Boolean (gp_Pln::*)() const) static_cast<Standard_Boolean (gp_Pln::*)() const>(&gp_Pln::Direct),
             R"#(returns true if the Ax3 is right handed.)#" )
        .def("Axis",
             (const gp_Ax1 & (gp_Pln::*)() const) static_cast<const gp_Ax1 & (gp_Pln::*)() const>(&gp_Pln::Axis),
             R"#(Returns the plane's normal Axis.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Pln::*)() const) static_cast<const gp_Pnt & (gp_Pln::*)() const>(&gp_Pln::Location),
             R"#(Returns the plane's location (origin).)#" )
        .def("Position",
             (const gp_Ax3 & (gp_Pln::*)() const) static_cast<const gp_Ax3 & (gp_Pln::*)() const>(&gp_Pln::Position),
             R"#(Returns the local coordinate system of the plane .)#" )
        .def("Distance",
             (Standard_Real (gp_Pln::*)( const gp_Pnt & ) const) static_cast<Standard_Real (gp_Pln::*)( const gp_Pnt & ) const>(&gp_Pln::Distance),
             R"#(Computes the distance between <me> and the point <P>.)#"  , py::arg("P"))
        .def("Distance",
             (Standard_Real (gp_Pln::*)( const gp_Lin & ) const) static_cast<Standard_Real (gp_Pln::*)( const gp_Lin & ) const>(&gp_Pln::Distance),
             R"#(Computes the distance between <me> and the line <L>.)#"  , py::arg("L"))
        .def("Distance",
             (Standard_Real (gp_Pln::*)( const gp_Pln & ) const) static_cast<Standard_Real (gp_Pln::*)( const gp_Pln & ) const>(&gp_Pln::Distance),
             R"#(Computes the distance between two planes.)#"  , py::arg("Other"))
        .def("SquareDistance",
             (Standard_Real (gp_Pln::*)( const gp_Pnt & ) const) static_cast<Standard_Real (gp_Pln::*)( const gp_Pnt & ) const>(&gp_Pln::SquareDistance),
             R"#(Computes the square distance between <me> and the point <P>.)#"  , py::arg("P"))
        .def("SquareDistance",
             (Standard_Real (gp_Pln::*)( const gp_Lin & ) const) static_cast<Standard_Real (gp_Pln::*)( const gp_Lin & ) const>(&gp_Pln::SquareDistance),
             R"#(Computes the square distance between <me> and the line <L>.)#"  , py::arg("L"))
        .def("SquareDistance",
             (Standard_Real (gp_Pln::*)( const gp_Pln & ) const) static_cast<Standard_Real (gp_Pln::*)( const gp_Pln & ) const>(&gp_Pln::SquareDistance),
             R"#(Computes the square distance between two planes.)#"  , py::arg("Other"))
        .def("XAxis",
             (gp_Ax1 (gp_Pln::*)() const) static_cast<gp_Ax1 (gp_Pln::*)() const>(&gp_Pln::XAxis),
             R"#(Returns the X axis of the plane.)#" )
        .def("YAxis",
             (gp_Ax1 (gp_Pln::*)() const) static_cast<gp_Ax1 (gp_Pln::*)() const>(&gp_Pln::YAxis),
             R"#(Returns the Y axis of the plane.)#" )
        .def("Contains",
             (Standard_Boolean (gp_Pln::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Pln::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Pln::Contains),
             R"#(Returns true if this plane contains the point P. This means that - the distance between point P and this plane is less than or equal to LinearTolerance, or - line L is normal to the "main Axis" of the local coordinate system of this plane, within the tolerance AngularTolerance, and the distance between the origin of line L and this plane is less than or equal to LinearTolerance.)#"  , py::arg("P"),  py::arg("LinearTolerance"))
        .def("Contains",
             (Standard_Boolean (gp_Pln::*)( const gp_Lin & , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Pln::*)( const gp_Lin & , const Standard_Real , const Standard_Real ) const>(&gp_Pln::Contains),
             R"#(Returns true if this plane contains the line L. This means that - the distance between point P and this plane is less than or equal to LinearTolerance, or - line L is normal to the "main Axis" of the local coordinate system of this plane, within the tolerance AngularTolerance, and the distance between the origin of line L and this plane is less than or equal to LinearTolerance.)#"  , py::arg("L"),  py::arg("LinearTolerance"),  py::arg("AngularTolerance"))
        .def("Rotate",
             (void (gp_Pln::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Pln::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Pln::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Pln (gp_Pln::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Pln (gp_Pln::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Pln::Rotated),
             R"#(rotates a plane. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Pln::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Pln::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Pln::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Pln (gp_Pln::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Pln (gp_Pln::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Pln::Scaled),
             R"#(Scales a plane. S is the scaling value.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Pln::*)( const gp_Trsf & ) ) static_cast<void (gp_Pln::*)( const gp_Trsf & ) >(&gp_Pln::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Pln (gp_Pln::*)( const gp_Trsf & ) const) static_cast<gp_Pln (gp_Pln::*)( const gp_Trsf & ) const>(&gp_Pln::Transformed),
             R"#(Transforms a plane with the transformation T from class Trsf. The transformation is performed on the "Location" point, on the "XAxis" and the "YAxis". The resulting normal direction is the cross product between the "XDirection" and the "YDirection" after transformation.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Pln::*)( const gp_Vec & ) ) static_cast<void (gp_Pln::*)( const gp_Vec & ) >(&gp_Pln::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Pln (gp_Pln::*)( const gp_Vec & ) const) static_cast<gp_Pln (gp_Pln::*)( const gp_Vec & ) const>(&gp_Pln::Translated),
             R"#(Translates a plane in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Pln::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Pln::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Pln::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Pln (gp_Pln::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Pln (gp_Pln::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Pln::Translated),
             R"#(Translates a plane from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
        .def("Coefficients",
             []( gp_Pln &self   ){ Standard_Real  A; Standard_Real  B; Standard_Real  C; Standard_Real  D; self.Coefficients(A,B,C,D); return std::make_tuple(A,B,C,D); },
             R"#(Returns the coefficients of the plane's cartesian equation : A * X + B * Y + C * Z + D = 0.)#" )
        .def("Coefficients",
             []( gp_Pln &self   ){ Standard_Real  A; Standard_Real  B; Standard_Real  C; Standard_Real  D; self.Coefficients(A,B,C,D); return std::make_tuple(A,B,C,D); },
             R"#(Returns the coefficients of the plane's cartesian equation : A * X + B * Y + C * Z + D = 0.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_Pnt , shared_ptr<gp_Pnt> >>(m.attr("gp_Pnt"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_XYZ & >()  , py::arg("Coord") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Xp"),  py::arg("Yp"),  py::arg("Zp") )
    // custom constructors
    // methods
        .def("SetCoord",
             (void (gp_Pnt::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_Pnt::*)( const Standard_Integer , const Standard_Real ) >(&gp_Pnt::SetCoord),
             R"#(Changes the coordinate of range Index : Index = 1 => X is modified Index = 2 => Y is modified Index = 3 => Z is modified Raised if Index != {1, 2, 3}.)#"  , py::arg("Index"),  py::arg("Xi"))
        .def("SetCoord",
             (void (gp_Pnt::*)( const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (gp_Pnt::*)( const Standard_Real , const Standard_Real , const Standard_Real ) >(&gp_Pnt::SetCoord),
             R"#(For this point, assigns the values Xp, Yp and Zp to its three coordinates.)#"  , py::arg("Xp"),  py::arg("Yp"),  py::arg("Zp"))
        .def("SetX",
             (void (gp_Pnt::*)( const Standard_Real ) ) static_cast<void (gp_Pnt::*)( const Standard_Real ) >(&gp_Pnt::SetX),
             R"#(Assigns the given value to the X coordinate of this point.)#"  , py::arg("X"))
        .def("SetY",
             (void (gp_Pnt::*)( const Standard_Real ) ) static_cast<void (gp_Pnt::*)( const Standard_Real ) >(&gp_Pnt::SetY),
             R"#(Assigns the given value to the Y coordinate of this point.)#"  , py::arg("Y"))
        .def("SetZ",
             (void (gp_Pnt::*)( const Standard_Real ) ) static_cast<void (gp_Pnt::*)( const Standard_Real ) >(&gp_Pnt::SetZ),
             R"#(Assigns the given value to the Z coordinate of this point.)#"  , py::arg("Z"))
        .def("SetXYZ",
             (void (gp_Pnt::*)( const gp_XYZ & ) ) static_cast<void (gp_Pnt::*)( const gp_XYZ & ) >(&gp_Pnt::SetXYZ),
             R"#(Assigns the three coordinates of Coord to this point.)#"  , py::arg("Coord"))
        .def("Coord",
             (Standard_Real (gp_Pnt::*)( const Standard_Integer ) const) static_cast<Standard_Real (gp_Pnt::*)( const Standard_Integer ) const>(&gp_Pnt::Coord),
             R"#(Returns the coordinate of corresponding to the value of Index : Index = 1 => X is returned Index = 2 => Y is returned Index = 3 => Z is returned Raises OutOfRange if Index != {1, 2, 3}. Raised if Index != {1, 2, 3}.)#"  , py::arg("Index"))
        .def("X",
             (Standard_Real (gp_Pnt::*)() const) static_cast<Standard_Real (gp_Pnt::*)() const>(&gp_Pnt::X),
             R"#(For this point, returns its X coordinate.)#" )
        .def("Y",
             (Standard_Real (gp_Pnt::*)() const) static_cast<Standard_Real (gp_Pnt::*)() const>(&gp_Pnt::Y),
             R"#(For this point, returns its Y coordinate.)#" )
        .def("Z",
             (Standard_Real (gp_Pnt::*)() const) static_cast<Standard_Real (gp_Pnt::*)() const>(&gp_Pnt::Z),
             R"#(For this point, returns its Z coordinate.)#" )
        .def("XYZ",
             (const gp_XYZ & (gp_Pnt::*)() const) static_cast<const gp_XYZ & (gp_Pnt::*)() const>(&gp_Pnt::XYZ),
             R"#(For this point, returns its three coordinates as a XYZ object.)#" )
        .def("Coord",
             (const gp_XYZ & (gp_Pnt::*)() const) static_cast<const gp_XYZ & (gp_Pnt::*)() const>(&gp_Pnt::Coord),
             R"#(For this point, returns its three coordinates as a XYZ object.)#" )
        .def("ChangeCoord",
             (gp_XYZ & (gp_Pnt::*)() ) static_cast<gp_XYZ & (gp_Pnt::*)() >(&gp_Pnt::ChangeCoord),
             R"#(Returns the coordinates of this point. Note: This syntax allows direct modification of the returned value.)#" )
        .def("BaryCenter",
             (void (gp_Pnt::*)( const Standard_Real , const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Pnt::*)( const Standard_Real , const gp_Pnt & , const Standard_Real ) >(&gp_Pnt::BaryCenter),
             R"#(Assigns the result of the following expression to this point (Alpha*this + Beta*P) / (Alpha + Beta))#"  , py::arg("Alpha"),  py::arg("P"),  py::arg("Beta"))
        .def("IsEqual",
             (Standard_Boolean (gp_Pnt::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Pnt::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Pnt::IsEqual),
             R"#(Comparison Returns True if the distance between the two points is lower or equal to LinearTolerance.)#"  , py::arg("Other"),  py::arg("LinearTolerance"))
        .def("Distance",
             (Standard_Real (gp_Pnt::*)( const gp_Pnt & ) const) static_cast<Standard_Real (gp_Pnt::*)( const gp_Pnt & ) const>(&gp_Pnt::Distance),
             R"#(Computes the distance between two points.)#"  , py::arg("Other"))
        .def("SquareDistance",
             (Standard_Real (gp_Pnt::*)( const gp_Pnt & ) const) static_cast<Standard_Real (gp_Pnt::*)( const gp_Pnt & ) const>(&gp_Pnt::SquareDistance),
             R"#(Computes the square distance between two points.)#"  , py::arg("Other"))
        .def("Mirror",
             (void (gp_Pnt::*)( const gp_Pnt & ) ) static_cast<void (gp_Pnt::*)( const gp_Pnt & ) >(&gp_Pnt::Mirror),
             R"#(Performs the symmetrical transformation of a point with respect to the point P which is the center of the symmetry.)#"  , py::arg("P"))
        .def("Mirrored",
             (gp_Pnt (gp_Pnt::*)( const gp_Pnt & ) const) static_cast<gp_Pnt (gp_Pnt::*)( const gp_Pnt & ) const>(&gp_Pnt::Mirrored),
             R"#(Performs the symmetrical transformation of a point with respect to an axis placement which is the axis of the symmetry.)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Pnt::*)( const gp_Ax1 & ) ) static_cast<void (gp_Pnt::*)( const gp_Ax1 & ) >(&gp_Pnt::Mirror),
             R"#(None)#"  , py::arg("A1"))
        .def("Mirrored",
             (gp_Pnt (gp_Pnt::*)( const gp_Ax1 & ) const) static_cast<gp_Pnt (gp_Pnt::*)( const gp_Ax1 & ) const>(&gp_Pnt::Mirrored),
             R"#(Performs the symmetrical transformation of a point with respect to a plane. The axis placement A2 locates the plane of the symmetry : (Location, XDirection, YDirection).)#"  , py::arg("A1"))
        .def("Mirror",
             (void (gp_Pnt::*)( const gp_Ax2 & ) ) static_cast<void (gp_Pnt::*)( const gp_Ax2 & ) >(&gp_Pnt::Mirror),
             R"#(None)#"  , py::arg("A2"))
        .def("Mirrored",
             (gp_Pnt (gp_Pnt::*)( const gp_Ax2 & ) const) static_cast<gp_Pnt (gp_Pnt::*)( const gp_Ax2 & ) const>(&gp_Pnt::Mirrored),
             R"#(Rotates a point. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A2"))
        .def("Rotate",
             (void (gp_Pnt::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Pnt::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Pnt::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Pnt (gp_Pnt::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Pnt (gp_Pnt::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Pnt::Rotated),
             R"#(Scales a point. S is the scaling value.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Pnt::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Pnt::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Pnt::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Pnt (gp_Pnt::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Pnt (gp_Pnt::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Pnt::Scaled),
             R"#(Transforms a point with the transformation T.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Pnt::*)( const gp_Trsf & ) ) static_cast<void (gp_Pnt::*)( const gp_Trsf & ) >(&gp_Pnt::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Pnt (gp_Pnt::*)( const gp_Trsf & ) const) static_cast<gp_Pnt (gp_Pnt::*)( const gp_Trsf & ) const>(&gp_Pnt::Transformed),
             R"#(Translates a point in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Pnt::*)( const gp_Vec & ) ) static_cast<void (gp_Pnt::*)( const gp_Vec & ) >(&gp_Pnt::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Pnt (gp_Pnt::*)( const gp_Vec & ) const) static_cast<gp_Pnt (gp_Pnt::*)( const gp_Vec & ) const>(&gp_Pnt::Translated),
             R"#(Translates a point from the point P1 to the point P2.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Pnt::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Pnt::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Pnt::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Pnt (gp_Pnt::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Pnt (gp_Pnt::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Pnt::Translated),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetCoord",
             (void (gp_Pnt::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_Pnt::*)( const Standard_Integer , const Standard_Real ) >(&gp_Pnt::SetCoord),
             R"#(Changes the coordinate of range Index : Index = 1 => X is modified Index = 2 => Y is modified Index = 3 => Z is modified Raised if Index != {1, 2, 3}.)#"  , py::arg("Index"),  py::arg("Xi"))
        .def("SetCoord",
             (void (gp_Pnt::*)( const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (gp_Pnt::*)( const Standard_Real , const Standard_Real , const Standard_Real ) >(&gp_Pnt::SetCoord),
             R"#(For this point, assigns the values Xp, Yp and Zp to its three coordinates.)#"  , py::arg("Xp"),  py::arg("Yp"),  py::arg("Zp"))
        .def("SetX",
             (void (gp_Pnt::*)( const Standard_Real ) ) static_cast<void (gp_Pnt::*)( const Standard_Real ) >(&gp_Pnt::SetX),
             R"#(Assigns the given value to the X coordinate of this point.)#"  , py::arg("X"))
        .def("SetY",
             (void (gp_Pnt::*)( const Standard_Real ) ) static_cast<void (gp_Pnt::*)( const Standard_Real ) >(&gp_Pnt::SetY),
             R"#(Assigns the given value to the Y coordinate of this point.)#"  , py::arg("Y"))
        .def("SetZ",
             (void (gp_Pnt::*)( const Standard_Real ) ) static_cast<void (gp_Pnt::*)( const Standard_Real ) >(&gp_Pnt::SetZ),
             R"#(Assigns the given value to the Z coordinate of this point.)#"  , py::arg("Z"))
        .def("SetXYZ",
             (void (gp_Pnt::*)( const gp_XYZ & ) ) static_cast<void (gp_Pnt::*)( const gp_XYZ & ) >(&gp_Pnt::SetXYZ),
             R"#(Assigns the three coordinates of Coord to this point.)#"  , py::arg("Coordinates"))
        .def("Coord",
             (Standard_Real (gp_Pnt::*)( const Standard_Integer ) const) static_cast<Standard_Real (gp_Pnt::*)( const Standard_Integer ) const>(&gp_Pnt::Coord),
             R"#(Returns the coordinate of corresponding to the value of Index : Index = 1 => X is returned Index = 2 => Y is returned Index = 3 => Z is returned Raises OutOfRange if Index != {1, 2, 3}. Raised if Index != {1, 2, 3}.)#"  , py::arg("Index"))
        .def("X",
             (Standard_Real (gp_Pnt::*)() const) static_cast<Standard_Real (gp_Pnt::*)() const>(&gp_Pnt::X),
             R"#(For this point, returns its X coordinate.)#" )
        .def("Y",
             (Standard_Real (gp_Pnt::*)() const) static_cast<Standard_Real (gp_Pnt::*)() const>(&gp_Pnt::Y),
             R"#(For this point, returns its Y coordinate.)#" )
        .def("Z",
             (Standard_Real (gp_Pnt::*)() const) static_cast<Standard_Real (gp_Pnt::*)() const>(&gp_Pnt::Z),
             R"#(For this point, returns its Z coordinate.)#" )
        .def("XYZ",
             (const gp_XYZ & (gp_Pnt::*)() const) static_cast<const gp_XYZ & (gp_Pnt::*)() const>(&gp_Pnt::XYZ),
             R"#(For this point, returns its three coordinates as a XYZ object.)#" )
        .def("Coord",
             (const gp_XYZ & (gp_Pnt::*)() const) static_cast<const gp_XYZ & (gp_Pnt::*)() const>(&gp_Pnt::Coord),
             R"#(For this point, returns its three coordinates as a XYZ object.)#" )
        .def("ChangeCoord",
             (gp_XYZ & (gp_Pnt::*)() ) static_cast<gp_XYZ & (gp_Pnt::*)() >(&gp_Pnt::ChangeCoord),
             R"#(Returns the coordinates of this point. Note: This syntax allows direct modification of the returned value.)#" )
        .def("BaryCenter",
             (void (gp_Pnt::*)( const Standard_Real , const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Pnt::*)( const Standard_Real , const gp_Pnt & , const Standard_Real ) >(&gp_Pnt::BaryCenter),
             R"#(Assigns the result of the following expression to this point (Alpha*this + Beta*P) / (Alpha + Beta))#"  , py::arg("A"),  py::arg("P"),  py::arg("B"))
        .def("IsEqual",
             (Standard_Boolean (gp_Pnt::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Pnt::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Pnt::IsEqual),
             R"#(Comparison Returns True if the distance between the two points is lower or equal to LinearTolerance.)#"  , py::arg("Other"),  py::arg("LinearTolerance"))
        .def("Distance",
             (Standard_Real (gp_Pnt::*)( const gp_Pnt & ) const) static_cast<Standard_Real (gp_Pnt::*)( const gp_Pnt & ) const>(&gp_Pnt::Distance),
             R"#(Computes the distance between two points.)#"  , py::arg("Other"))
        .def("SquareDistance",
             (Standard_Real (gp_Pnt::*)( const gp_Pnt & ) const) static_cast<Standard_Real (gp_Pnt::*)( const gp_Pnt & ) const>(&gp_Pnt::SquareDistance),
             R"#(Computes the square distance between two points.)#"  , py::arg("Other"))
        .def("Rotate",
             (void (gp_Pnt::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Pnt::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Pnt::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Pnt (gp_Pnt::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Pnt (gp_Pnt::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Pnt::Rotated),
             R"#(Scales a point. S is the scaling value.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Pnt::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Pnt::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Pnt::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Pnt (gp_Pnt::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Pnt (gp_Pnt::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Pnt::Scaled),
             R"#(Transforms a point with the transformation T.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transformed",
             (gp_Pnt (gp_Pnt::*)( const gp_Trsf & ) const) static_cast<gp_Pnt (gp_Pnt::*)( const gp_Trsf & ) const>(&gp_Pnt::Transformed),
             R"#(Translates a point in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Pnt::*)( const gp_Vec & ) ) static_cast<void (gp_Pnt::*)( const gp_Vec & ) >(&gp_Pnt::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Pnt (gp_Pnt::*)( const gp_Vec & ) const) static_cast<gp_Pnt (gp_Pnt::*)( const gp_Vec & ) const>(&gp_Pnt::Translated),
             R"#(Translates a point from the point P1 to the point P2.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Pnt::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Pnt::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Pnt::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Pnt (gp_Pnt::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Pnt (gp_Pnt::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Pnt::Translated),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
        .def("Coord",
             []( gp_Pnt &self   ){ Standard_Real  Xp; Standard_Real  Yp; Standard_Real  Zp; self.Coord(Xp,Yp,Zp); return std::make_tuple(Xp,Yp,Zp); },
             R"#(For this point gives its three coordinates Xp, Yp and Zp.)#" )
        .def("Coord",
             []( gp_Pnt &self   ){ Standard_Real  Xp; Standard_Real  Yp; Standard_Real  Zp; self.Coord(Xp,Yp,Zp); return std::make_tuple(Xp,Yp,Zp); },
             R"#(For this point gives its three coordinates Xp, Yp and Zp.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_Pnt2d , shared_ptr<gp_Pnt2d> >>(m.attr("gp_Pnt2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_XY & >()  , py::arg("Coord") )
        .def(py::init< const Standard_Real,const Standard_Real >()  , py::arg("Xp"),  py::arg("Yp") )
    // custom constructors
    // methods
        .def("SetCoord",
             (void (gp_Pnt2d::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_Pnt2d::*)( const Standard_Integer , const Standard_Real ) >(&gp_Pnt2d::SetCoord),
             R"#(Assigns the value Xi to the coordinate that corresponds to Index: Index = 1 => X is modified Index = 2 => Y is modified Raises OutOfRange if Index != {1, 2}.)#"  , py::arg("Index"),  py::arg("Xi"))
        .def("SetCoord",
             (void (gp_Pnt2d::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (gp_Pnt2d::*)( const Standard_Real , const Standard_Real ) >(&gp_Pnt2d::SetCoord),
             R"#(For this point, assigns the values Xp and Yp to its two coordinates)#"  , py::arg("Xp"),  py::arg("Yp"))
        .def("SetX",
             (void (gp_Pnt2d::*)( const Standard_Real ) ) static_cast<void (gp_Pnt2d::*)( const Standard_Real ) >(&gp_Pnt2d::SetX),
             R"#(Assigns the given value to the X coordinate of this point.)#"  , py::arg("X"))
        .def("SetY",
             (void (gp_Pnt2d::*)( const Standard_Real ) ) static_cast<void (gp_Pnt2d::*)( const Standard_Real ) >(&gp_Pnt2d::SetY),
             R"#(Assigns the given value to the Y coordinate of this point.)#"  , py::arg("Y"))
        .def("SetXY",
             (void (gp_Pnt2d::*)( const gp_XY & ) ) static_cast<void (gp_Pnt2d::*)( const gp_XY & ) >(&gp_Pnt2d::SetXY),
             R"#(Assigns the two coordinates of Coord to this point.)#"  , py::arg("Coord"))
        .def("Coord",
             (Standard_Real (gp_Pnt2d::*)( const Standard_Integer ) const) static_cast<Standard_Real (gp_Pnt2d::*)( const Standard_Integer ) const>(&gp_Pnt2d::Coord),
             R"#(Returns the coordinate of range Index : Index = 1 => X is returned Index = 2 => Y is returned Raises OutOfRange if Index != {1, 2}.)#"  , py::arg("Index"))
        .def("X",
             (Standard_Real (gp_Pnt2d::*)() const) static_cast<Standard_Real (gp_Pnt2d::*)() const>(&gp_Pnt2d::X),
             R"#(For this point, returns its X coordinate.)#" )
        .def("Y",
             (Standard_Real (gp_Pnt2d::*)() const) static_cast<Standard_Real (gp_Pnt2d::*)() const>(&gp_Pnt2d::Y),
             R"#(For this point, returns its Y coordinate.)#" )
        .def("XY",
             (const gp_XY & (gp_Pnt2d::*)() const) static_cast<const gp_XY & (gp_Pnt2d::*)() const>(&gp_Pnt2d::XY),
             R"#(For this point, returns its two coordinates as a number pair.)#" )
        .def("Coord",
             (const gp_XY & (gp_Pnt2d::*)() const) static_cast<const gp_XY & (gp_Pnt2d::*)() const>(&gp_Pnt2d::Coord),
             R"#(For this point, returns its two coordinates as a number pair.)#" )
        .def("ChangeCoord",
             (gp_XY & (gp_Pnt2d::*)() ) static_cast<gp_XY & (gp_Pnt2d::*)() >(&gp_Pnt2d::ChangeCoord),
             R"#(Returns the coordinates of this point. Note: This syntax allows direct modification of the returned value.)#" )
        .def("IsEqual",
             (Standard_Boolean (gp_Pnt2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Pnt2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Pnt2d::IsEqual),
             R"#(Comparison Returns True if the distance between the two points is lower or equal to LinearTolerance.)#"  , py::arg("Other"),  py::arg("LinearTolerance"))
        .def("Distance",
             (Standard_Real (gp_Pnt2d::*)( const gp_Pnt2d & ) const) static_cast<Standard_Real (gp_Pnt2d::*)( const gp_Pnt2d & ) const>(&gp_Pnt2d::Distance),
             R"#(Computes the distance between two points.)#"  , py::arg("Other"))
        .def("SquareDistance",
             (Standard_Real (gp_Pnt2d::*)( const gp_Pnt2d & ) const) static_cast<Standard_Real (gp_Pnt2d::*)( const gp_Pnt2d & ) const>(&gp_Pnt2d::SquareDistance),
             R"#(Computes the square distance between two points.)#"  , py::arg("Other"))
        .def("Mirror",
             (void (gp_Pnt2d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Pnt2d::*)( const gp_Pnt2d & ) >(&gp_Pnt2d::Mirror),
             R"#(Performs the symmetrical transformation of a point with respect to the point P which is the center of the symmetry.)#"  , py::arg("P"))
        .def("Mirrored",
             (gp_Pnt2d (gp_Pnt2d::*)( const gp_Pnt2d & ) const) static_cast<gp_Pnt2d (gp_Pnt2d::*)( const gp_Pnt2d & ) const>(&gp_Pnt2d::Mirrored),
             R"#(Performs the symmetrical transformation of a point with respect to an axis placement which is the axis)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Pnt2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Pnt2d::*)( const gp_Ax2d & ) >(&gp_Pnt2d::Mirror),
             R"#(None)#"  , py::arg("A"))
        .def("Mirrored",
             (gp_Pnt2d (gp_Pnt2d::*)( const gp_Ax2d & ) const) static_cast<gp_Pnt2d (gp_Pnt2d::*)( const gp_Ax2d & ) const>(&gp_Pnt2d::Mirrored),
             R"#(Rotates a point. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A"))
        .def("Rotate",
             (void (gp_Pnt2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Pnt2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Pnt2d::Rotate),
             R"#(None)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Pnt2d (gp_Pnt2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Pnt2d (gp_Pnt2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Pnt2d::Rotated),
             R"#(Scales a point. S is the scaling value.)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Pnt2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Pnt2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Pnt2d::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Pnt2d (gp_Pnt2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Pnt2d (gp_Pnt2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Pnt2d::Scaled),
             R"#(Transforms a point with the transformation T.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Pnt2d::*)( const gp_Trsf2d & ) ) static_cast<void (gp_Pnt2d::*)( const gp_Trsf2d & ) >(&gp_Pnt2d::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Pnt2d (gp_Pnt2d::*)( const gp_Trsf2d & ) const) static_cast<gp_Pnt2d (gp_Pnt2d::*)( const gp_Trsf2d & ) const>(&gp_Pnt2d::Transformed),
             R"#(Translates a point in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Pnt2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Pnt2d::*)( const gp_Vec2d & ) >(&gp_Pnt2d::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Pnt2d (gp_Pnt2d::*)( const gp_Vec2d & ) const) static_cast<gp_Pnt2d (gp_Pnt2d::*)( const gp_Vec2d & ) const>(&gp_Pnt2d::Translated),
             R"#(Translates a point from the point P1 to the point P2.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Pnt2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (gp_Pnt2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&gp_Pnt2d::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Pnt2d (gp_Pnt2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const) static_cast<gp_Pnt2d (gp_Pnt2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const>(&gp_Pnt2d::Translated),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Coord",
             (Standard_Real (gp_Pnt2d::*)( const Standard_Integer ) const) static_cast<Standard_Real (gp_Pnt2d::*)( const Standard_Integer ) const>(&gp_Pnt2d::Coord),
             R"#(Returns the coordinate of range Index : Index = 1 => X is returned Index = 2 => Y is returned Raises OutOfRange if Index != {1, 2}.)#"  , py::arg("Index"))
        .def("SetX",
             (void (gp_Pnt2d::*)( const Standard_Real ) ) static_cast<void (gp_Pnt2d::*)( const Standard_Real ) >(&gp_Pnt2d::SetX),
             R"#(Assigns the given value to the X coordinate of this point.)#"  , py::arg("X"))
        .def("SetY",
             (void (gp_Pnt2d::*)( const Standard_Real ) ) static_cast<void (gp_Pnt2d::*)( const Standard_Real ) >(&gp_Pnt2d::SetY),
             R"#(Assigns the given value to the Y coordinate of this point.)#"  , py::arg("Y"))
        .def("SetXY",
             (void (gp_Pnt2d::*)( const gp_XY & ) ) static_cast<void (gp_Pnt2d::*)( const gp_XY & ) >(&gp_Pnt2d::SetXY),
             R"#(Assigns the two coordinates of Coord to this point.)#"  , py::arg("Coordinates"))
        .def("SetCoord",
             (void (gp_Pnt2d::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (gp_Pnt2d::*)( const Standard_Real , const Standard_Real ) >(&gp_Pnt2d::SetCoord),
             R"#(For this point, assigns the values Xp and Yp to its two coordinates)#"  , py::arg("Xp"),  py::arg("Yp"))
        .def("SetCoord",
             (void (gp_Pnt2d::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_Pnt2d::*)( const Standard_Integer , const Standard_Real ) >(&gp_Pnt2d::SetCoord),
             R"#(Assigns the value Xi to the coordinate that corresponds to Index: Index = 1 => X is modified Index = 2 => Y is modified Raises OutOfRange if Index != {1, 2}.)#"  , py::arg("Index"),  py::arg("Xi"))
        .def("X",
             (Standard_Real (gp_Pnt2d::*)() const) static_cast<Standard_Real (gp_Pnt2d::*)() const>(&gp_Pnt2d::X),
             R"#(For this point, returns its X coordinate.)#" )
        .def("Y",
             (Standard_Real (gp_Pnt2d::*)() const) static_cast<Standard_Real (gp_Pnt2d::*)() const>(&gp_Pnt2d::Y),
             R"#(For this point, returns its Y coordinate.)#" )
        .def("XY",
             (const gp_XY & (gp_Pnt2d::*)() const) static_cast<const gp_XY & (gp_Pnt2d::*)() const>(&gp_Pnt2d::XY),
             R"#(For this point, returns its two coordinates as a number pair.)#" )
        .def("Coord",
             (const gp_XY & (gp_Pnt2d::*)() const) static_cast<const gp_XY & (gp_Pnt2d::*)() const>(&gp_Pnt2d::Coord),
             R"#(For this point, returns its two coordinates as a number pair.)#" )
        .def("ChangeCoord",
             (gp_XY & (gp_Pnt2d::*)() ) static_cast<gp_XY & (gp_Pnt2d::*)() >(&gp_Pnt2d::ChangeCoord),
             R"#(Returns the coordinates of this point. Note: This syntax allows direct modification of the returned value.)#" )
        .def("IsEqual",
             (Standard_Boolean (gp_Pnt2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Pnt2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Pnt2d::IsEqual),
             R"#(Comparison Returns True if the distance between the two points is lower or equal to LinearTolerance.)#"  , py::arg("Other"),  py::arg("LinearTolerance"))
        .def("Distance",
             (Standard_Real (gp_Pnt2d::*)( const gp_Pnt2d & ) const) static_cast<Standard_Real (gp_Pnt2d::*)( const gp_Pnt2d & ) const>(&gp_Pnt2d::Distance),
             R"#(Computes the distance between two points.)#"  , py::arg("Other"))
        .def("SquareDistance",
             (Standard_Real (gp_Pnt2d::*)( const gp_Pnt2d & ) const) static_cast<Standard_Real (gp_Pnt2d::*)( const gp_Pnt2d & ) const>(&gp_Pnt2d::SquareDistance),
             R"#(Computes the square distance between two points.)#"  , py::arg("Other"))
        .def("Rotate",
             (void (gp_Pnt2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Pnt2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Pnt2d::Rotate),
             R"#(None)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Pnt2d (gp_Pnt2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Pnt2d (gp_Pnt2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Pnt2d::Rotated),
             R"#(Scales a point. S is the scaling value.)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Pnt2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Pnt2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Pnt2d::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Pnt2d (gp_Pnt2d::*)( const gp_Pnt2d & , const Standard_Real ) const) static_cast<gp_Pnt2d (gp_Pnt2d::*)( const gp_Pnt2d & , const Standard_Real ) const>(&gp_Pnt2d::Scaled),
             R"#(Transforms a point with the transformation T.)#"  , py::arg("P"),  py::arg("S"))
        .def("Transformed",
             (gp_Pnt2d (gp_Pnt2d::*)( const gp_Trsf2d & ) const) static_cast<gp_Pnt2d (gp_Pnt2d::*)( const gp_Trsf2d & ) const>(&gp_Pnt2d::Transformed),
             R"#(Translates a point in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Pnt2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Pnt2d::*)( const gp_Vec2d & ) >(&gp_Pnt2d::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Pnt2d (gp_Pnt2d::*)( const gp_Vec2d & ) const) static_cast<gp_Pnt2d (gp_Pnt2d::*)( const gp_Vec2d & ) const>(&gp_Pnt2d::Translated),
             R"#(Translates a point from the point P1 to the point P2.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Pnt2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (gp_Pnt2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&gp_Pnt2d::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Pnt2d (gp_Pnt2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const) static_cast<gp_Pnt2d (gp_Pnt2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) const>(&gp_Pnt2d::Translated),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
        .def("Coord",
             []( gp_Pnt2d &self   ){ Standard_Real  Xp; Standard_Real  Yp; self.Coord(Xp,Yp); return std::make_tuple(Xp,Yp); },
             R"#(For this point returns its two coordinates as a number pair.)#" )
        .def("Coord",
             []( gp_Pnt2d &self   ){ Standard_Real  Xp; Standard_Real  Yp; self.Coord(Xp,Yp); return std::make_tuple(Xp,Yp); },
             R"#(For this point returns its two coordinates as a number pair.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_Quaternion , shared_ptr<gp_Quaternion> >>(m.attr("gp_Quaternion"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("x"),  py::arg("y"),  py::arg("z"),  py::arg("w") )
        .def(py::init< const gp_Quaternion & >()  , py::arg("theToCopy") )
        .def(py::init< const gp_Vec &,const gp_Vec & >()  , py::arg("theVecFrom"),  py::arg("theVecTo") )
        .def(py::init< const gp_Vec &,const gp_Vec &,const gp_Vec & >()  , py::arg("theVecFrom"),  py::arg("theVecTo"),  py::arg("theHelpCrossVec") )
        .def(py::init< const gp_Vec &,const Standard_Real >()  , py::arg("theAxis"),  py::arg("theAngle") )
        .def(py::init< const gp_Mat & >()  , py::arg("theMat") )
    // custom constructors
    // methods
        .def("IsEqual",
             (Standard_Boolean (gp_Quaternion::*)( const gp_Quaternion & ) const) static_cast<Standard_Boolean (gp_Quaternion::*)( const gp_Quaternion & ) const>(&gp_Quaternion::IsEqual),
             R"#(Simple equal test without precision)#"  , py::arg("theOther"))
        .def("SetRotation",
             (void (gp_Quaternion::*)( const gp_Vec & , const gp_Vec & ) ) static_cast<void (gp_Quaternion::*)( const gp_Vec & , const gp_Vec & ) >(&gp_Quaternion::SetRotation),
             R"#(Sets quaternion to shortest-arc rotation producing vector theVecTo from vector theVecFrom. If vectors theVecFrom and theVecTo are opposite then rotation axis is computed as theVecFrom ^ (1,0,0) or theVecFrom ^ (0,0,1).)#"  , py::arg("theVecFrom"),  py::arg("theVecTo"))
        .def("SetRotation",
             (void (gp_Quaternion::*)( const gp_Vec & , const gp_Vec & , const gp_Vec & ) ) static_cast<void (gp_Quaternion::*)( const gp_Vec & , const gp_Vec & , const gp_Vec & ) >(&gp_Quaternion::SetRotation),
             R"#(Sets quaternion to shortest-arc rotation producing vector theVecTo from vector theVecFrom. If vectors theVecFrom and theVecTo are opposite then rotation axis is computed as theVecFrom ^ theHelpCrossVec.)#"  , py::arg("theVecFrom"),  py::arg("theVecTo"),  py::arg("theHelpCrossVec"))
        .def("SetVectorAndAngle",
             (void (gp_Quaternion::*)( const gp_Vec & , const Standard_Real ) ) static_cast<void (gp_Quaternion::*)( const gp_Vec & , const Standard_Real ) >(&gp_Quaternion::SetVectorAndAngle),
             R"#(Create a unit quaternion from Axis+Angle representation)#"  , py::arg("theAxis"),  py::arg("theAngle"))
        .def("SetMatrix",
             (void (gp_Quaternion::*)( const gp_Mat & ) ) static_cast<void (gp_Quaternion::*)( const gp_Mat & ) >(&gp_Quaternion::SetMatrix),
             R"#(Create a unit quaternion by rotation matrix matrix must contain only rotation (not scale or shear))#"  , py::arg("theMat"))
        .def("GetMatrix",
             (gp_Mat (gp_Quaternion::*)() const) static_cast<gp_Mat (gp_Quaternion::*)() const>(&gp_Quaternion::GetMatrix),
             R"#(Returns rotation operation as 3*3 matrix)#" )
        .def("SetEulerAngles",
             (void (gp_Quaternion::*)( const gp_EulerSequence , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (gp_Quaternion::*)( const gp_EulerSequence , const Standard_Real , const Standard_Real , const Standard_Real ) >(&gp_Quaternion::SetEulerAngles),
             R"#(Create a unit quaternion representing rotation defined by generalized Euler angles)#"  , py::arg("theOrder"),  py::arg("theAlpha"),  py::arg("theBeta"),  py::arg("theGamma"))
        .def("Set",
             (void (gp_Quaternion::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (gp_Quaternion::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&gp_Quaternion::Set),
             R"#(None)#"  , py::arg("x"),  py::arg("y"),  py::arg("z"),  py::arg("w"))
        .def("Set",
             (void (gp_Quaternion::*)( const gp_Quaternion & ) ) static_cast<void (gp_Quaternion::*)( const gp_Quaternion & ) >(&gp_Quaternion::Set),
             R"#(None)#"  , py::arg("theQuaternion"))
        .def("X",
             (Standard_Real (gp_Quaternion::*)() const) static_cast<Standard_Real (gp_Quaternion::*)() const>(&gp_Quaternion::X),
             R"#(None)#" )
        .def("Y",
             (Standard_Real (gp_Quaternion::*)() const) static_cast<Standard_Real (gp_Quaternion::*)() const>(&gp_Quaternion::Y),
             R"#(None)#" )
        .def("Z",
             (Standard_Real (gp_Quaternion::*)() const) static_cast<Standard_Real (gp_Quaternion::*)() const>(&gp_Quaternion::Z),
             R"#(None)#" )
        .def("W",
             (Standard_Real (gp_Quaternion::*)() const) static_cast<Standard_Real (gp_Quaternion::*)() const>(&gp_Quaternion::W),
             R"#(None)#" )
        .def("SetIdent",
             (void (gp_Quaternion::*)() ) static_cast<void (gp_Quaternion::*)() >(&gp_Quaternion::SetIdent),
             R"#(Make identity quaternion (zero-rotation))#" )
        .def("Reverse",
             (void (gp_Quaternion::*)() ) static_cast<void (gp_Quaternion::*)() >(&gp_Quaternion::Reverse),
             R"#(Reverse direction of rotation (conjugate quaternion))#" )
        .def("Reversed",
             (gp_Quaternion (gp_Quaternion::*)() const) static_cast<gp_Quaternion (gp_Quaternion::*)() const>(&gp_Quaternion::Reversed),
             R"#(Return rotation with reversed direction (conjugated quaternion))#" )
        .def("Invert",
             (void (gp_Quaternion::*)() ) static_cast<void (gp_Quaternion::*)() >(&gp_Quaternion::Invert),
             R"#(Inverts quaternion (both rotation direction and norm))#" )
        .def("Inverted",
             (gp_Quaternion (gp_Quaternion::*)() const) static_cast<gp_Quaternion (gp_Quaternion::*)() const>(&gp_Quaternion::Inverted),
             R"#(Return inversed quaternion q^-1)#" )
        .def("SquareNorm",
             (Standard_Real (gp_Quaternion::*)() const) static_cast<Standard_Real (gp_Quaternion::*)() const>(&gp_Quaternion::SquareNorm),
             R"#(Returns square norm of quaternion)#" )
        .def("Norm",
             (Standard_Real (gp_Quaternion::*)() const) static_cast<Standard_Real (gp_Quaternion::*)() const>(&gp_Quaternion::Norm),
             R"#(Returns norm of quaternion)#" )
        .def("Scale",
             (void (gp_Quaternion::*)( const Standard_Real ) ) static_cast<void (gp_Quaternion::*)( const Standard_Real ) >(&gp_Quaternion::Scale),
             R"#(Scale all components by quaternion by theScale; note that rotation is not changed by this operation (except 0-scaling))#"  , py::arg("theScale"))
        .def("Scaled",
             (gp_Quaternion (gp_Quaternion::*)( const Standard_Real ) const) static_cast<gp_Quaternion (gp_Quaternion::*)( const Standard_Real ) const>(&gp_Quaternion::Scaled),
             R"#(Returns scaled quaternion)#"  , py::arg("theScale"))
        .def("StabilizeLength",
             (void (gp_Quaternion::*)() ) static_cast<void (gp_Quaternion::*)() >(&gp_Quaternion::StabilizeLength),
             R"#(Stabilize quaternion length within 1 - 1/4. This operation is a lot faster than normalization and preserve length goes to 0 or infinity)#" )
        .def("Normalize",
             (void (gp_Quaternion::*)() ) static_cast<void (gp_Quaternion::*)() >(&gp_Quaternion::Normalize),
             R"#(Scale quaternion that its norm goes to 1. The appearing of 0 magnitude or near is a error, so we can be sure that can divide by magnitude)#" )
        .def("Normalized",
             (gp_Quaternion (gp_Quaternion::*)() const) static_cast<gp_Quaternion (gp_Quaternion::*)() const>(&gp_Quaternion::Normalized),
             R"#(Returns quaternion scaled so that its norm goes to 1.)#" )
        .def("Negated",
             (gp_Quaternion (gp_Quaternion::*)() const) static_cast<gp_Quaternion (gp_Quaternion::*)() const>(&gp_Quaternion::Negated),
             R"#(Returns quaternion with all components negated. Note that this operation does not affect neither rotation operator defined by quaternion nor its norm.)#" )
        .def("Added",
             (gp_Quaternion (gp_Quaternion::*)( const gp_Quaternion & ) const) static_cast<gp_Quaternion (gp_Quaternion::*)( const gp_Quaternion & ) const>(&gp_Quaternion::Added),
             R"#(Makes sum of quaternion components; result is "rotations mix")#"  , py::arg("theOther"))
        .def("Subtracted",
             (gp_Quaternion (gp_Quaternion::*)( const gp_Quaternion & ) const) static_cast<gp_Quaternion (gp_Quaternion::*)( const gp_Quaternion & ) const>(&gp_Quaternion::Subtracted),
             R"#(Makes difference of quaternion components; result is "rotations mix")#"  , py::arg("theOther"))
        .def("Multiplied",
             (gp_Quaternion (gp_Quaternion::*)( const gp_Quaternion & ) const) static_cast<gp_Quaternion (gp_Quaternion::*)( const gp_Quaternion & ) const>(&gp_Quaternion::Multiplied),
             R"#(Multiply function - work the same as Matrices multiplying. qq' = (cross(v,v') + wv' + w'v, ww' - dot(v,v')) Result is rotation combination: q' than q (here q=this, q'=theQ). Notices than: qq' != q'q; qq^-1 = q;)#"  , py::arg("theOther"))
        .def("Add",
             (void (gp_Quaternion::*)( const gp_Quaternion & ) ) static_cast<void (gp_Quaternion::*)( const gp_Quaternion & ) >(&gp_Quaternion::Add),
             R"#(Adds componnets of other quaternion; result is "rotations mix")#"  , py::arg("theOther"))
        .def("Subtract",
             (void (gp_Quaternion::*)( const gp_Quaternion & ) ) static_cast<void (gp_Quaternion::*)( const gp_Quaternion & ) >(&gp_Quaternion::Subtract),
             R"#(Subtracts componnets of other quaternion; result is "rotations mix")#"  , py::arg("theOther"))
        .def("Multiply",
             (void (gp_Quaternion::*)( const gp_Quaternion & ) ) static_cast<void (gp_Quaternion::*)( const gp_Quaternion & ) >(&gp_Quaternion::Multiply),
             R"#(Adds rotation by multiplication)#"  , py::arg("theOther"))
        .def("Dot",
             (Standard_Real (gp_Quaternion::*)( const gp_Quaternion & ) const) static_cast<Standard_Real (gp_Quaternion::*)( const gp_Quaternion & ) const>(&gp_Quaternion::Dot),
             R"#(Computes inner product / scalar product / Dot)#"  , py::arg("theOther"))
        .def("GetRotationAngle",
             (Standard_Real (gp_Quaternion::*)() const) static_cast<Standard_Real (gp_Quaternion::*)() const>(&gp_Quaternion::GetRotationAngle),
             R"#(Return rotation angle from -PI to PI)#" )
        .def("Multiply",
             (gp_Vec (gp_Quaternion::*)( const gp_Vec & ) const) static_cast<gp_Vec (gp_Quaternion::*)( const gp_Vec & ) const>(&gp_Quaternion::Multiply),
             R"#(Rotates vector by quaternion as rotation operator)#"  , py::arg("theVec"))
        .def("Set",
             (void (gp_Quaternion::*)( Standard_Real , Standard_Real , Standard_Real , Standard_Real ) ) static_cast<void (gp_Quaternion::*)( Standard_Real , Standard_Real , Standard_Real , Standard_Real ) >(&gp_Quaternion::Set),
             R"#(None)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theW"))
        .def("Set",
             (void (gp_Quaternion::*)( const gp_Quaternion & ) ) static_cast<void (gp_Quaternion::*)( const gp_Quaternion & ) >(&gp_Quaternion::Set),
             R"#(None)#"  , py::arg("theQuaternion"))
        .def("X",
             (Standard_Real (gp_Quaternion::*)() const) static_cast<Standard_Real (gp_Quaternion::*)() const>(&gp_Quaternion::X),
             R"#(None)#" )
        .def("Y",
             (Standard_Real (gp_Quaternion::*)() const) static_cast<Standard_Real (gp_Quaternion::*)() const>(&gp_Quaternion::Y),
             R"#(None)#" )
        .def("Z",
             (Standard_Real (gp_Quaternion::*)() const) static_cast<Standard_Real (gp_Quaternion::*)() const>(&gp_Quaternion::Z),
             R"#(None)#" )
        .def("W",
             (Standard_Real (gp_Quaternion::*)() const) static_cast<Standard_Real (gp_Quaternion::*)() const>(&gp_Quaternion::W),
             R"#(None)#" )
        .def("SetIdent",
             (void (gp_Quaternion::*)() ) static_cast<void (gp_Quaternion::*)() >(&gp_Quaternion::SetIdent),
             R"#(Make identity quaternion (zero-rotation))#" )
        .def("Reverse",
             (void (gp_Quaternion::*)() ) static_cast<void (gp_Quaternion::*)() >(&gp_Quaternion::Reverse),
             R"#(Reverse direction of rotation (conjugate quaternion))#" )
        .def("Reversed",
             (gp_Quaternion (gp_Quaternion::*)() const) static_cast<gp_Quaternion (gp_Quaternion::*)() const>(&gp_Quaternion::Reversed),
             R"#(Return rotation with reversed direction (conjugated quaternion))#" )
        .def("Scale",
             (void (gp_Quaternion::*)( const Standard_Real ) ) static_cast<void (gp_Quaternion::*)( const Standard_Real ) >(&gp_Quaternion::Scale),
             R"#(Scale all components by quaternion by theScale; note that rotation is not changed by this operation (except 0-scaling))#"  , py::arg("theScale"))
        .def("Scaled",
             (gp_Quaternion (gp_Quaternion::*)( const Standard_Real ) const) static_cast<gp_Quaternion (gp_Quaternion::*)( const Standard_Real ) const>(&gp_Quaternion::Scaled),
             R"#(Returns scaled quaternion)#"  , py::arg("theScale"))
        .def("SquareNorm",
             (Standard_Real (gp_Quaternion::*)() const) static_cast<Standard_Real (gp_Quaternion::*)() const>(&gp_Quaternion::SquareNorm),
             R"#(Returns square norm of quaternion)#" )
        .def("Norm",
             (Standard_Real (gp_Quaternion::*)() const) static_cast<Standard_Real (gp_Quaternion::*)() const>(&gp_Quaternion::Norm),
             R"#(Returns norm of quaternion)#" )
        .def("Invert",
             (void (gp_Quaternion::*)() ) static_cast<void (gp_Quaternion::*)() >(&gp_Quaternion::Invert),
             R"#(Inverts quaternion (both rotation direction and norm))#" )
        .def("Inverted",
             (gp_Quaternion (gp_Quaternion::*)() const) static_cast<gp_Quaternion (gp_Quaternion::*)() const>(&gp_Quaternion::Inverted),
             R"#(Return inversed quaternion q^-1)#" )
        .def("Normalized",
             (gp_Quaternion (gp_Quaternion::*)() const) static_cast<gp_Quaternion (gp_Quaternion::*)() const>(&gp_Quaternion::Normalized),
             R"#(Returns quaternion scaled so that its norm goes to 1.)#" )
        .def("Negated",
             (gp_Quaternion (gp_Quaternion::*)() const) static_cast<gp_Quaternion (gp_Quaternion::*)() const>(&gp_Quaternion::Negated),
             R"#(Returns quaternion with all components negated. Note that this operation does not affect neither rotation operator defined by quaternion nor its norm.)#" )
        .def("Added",
             (gp_Quaternion (gp_Quaternion::*)( const gp_Quaternion & ) const) static_cast<gp_Quaternion (gp_Quaternion::*)( const gp_Quaternion & ) const>(&gp_Quaternion::Added),
             R"#(Makes sum of quaternion components; result is "rotations mix")#"  , py::arg("theQ"))
        .def("Subtracted",
             (gp_Quaternion (gp_Quaternion::*)( const gp_Quaternion & ) const) static_cast<gp_Quaternion (gp_Quaternion::*)( const gp_Quaternion & ) const>(&gp_Quaternion::Subtracted),
             R"#(Makes difference of quaternion components; result is "rotations mix")#"  , py::arg("theQ"))
        .def("Multiplied",
             (gp_Quaternion (gp_Quaternion::*)( const gp_Quaternion & ) const) static_cast<gp_Quaternion (gp_Quaternion::*)( const gp_Quaternion & ) const>(&gp_Quaternion::Multiplied),
             R"#(Multiply function - work the same as Matrices multiplying. qq' = (cross(v,v') + wv' + w'v, ww' - dot(v,v')) Result is rotation combination: q' than q (here q=this, q'=theQ). Notices than: qq' != q'q; qq^-1 = q;)#"  , py::arg("theQ"))
        .def("Add",
             (void (gp_Quaternion::*)( const gp_Quaternion & ) ) static_cast<void (gp_Quaternion::*)( const gp_Quaternion & ) >(&gp_Quaternion::Add),
             R"#(Adds componnets of other quaternion; result is "rotations mix")#"  , py::arg("theQ"))
        .def("Subtract",
             (void (gp_Quaternion::*)( const gp_Quaternion & ) ) static_cast<void (gp_Quaternion::*)( const gp_Quaternion & ) >(&gp_Quaternion::Subtract),
             R"#(Subtracts componnets of other quaternion; result is "rotations mix")#"  , py::arg("theQ"))
        .def("Multiply",
             (void (gp_Quaternion::*)( const gp_Quaternion & ) ) static_cast<void (gp_Quaternion::*)( const gp_Quaternion & ) >(&gp_Quaternion::Multiply),
             R"#(Adds rotation by multiplication)#"  , py::arg("theQ"))
        .def("Dot",
             (Standard_Real (gp_Quaternion::*)( const gp_Quaternion & ) const) static_cast<Standard_Real (gp_Quaternion::*)( const gp_Quaternion & ) const>(&gp_Quaternion::Dot),
             R"#(Computes inner product / scalar product / Dot)#"  , py::arg("theQ"))
    // methods using call by reference i.s.o. return
        .def("GetVectorAndAngle",
             []( gp_Quaternion &self , gp_Vec & theAxis ){ Standard_Real  theAngle; self.GetVectorAndAngle(theAxis,theAngle); return std::make_tuple(theAngle); },
             R"#(Convert a quaternion to Axis+Angle representation, preserve the axis direction and angle from -PI to +PI)#"  , py::arg("theAxis"))
        .def("GetEulerAngles",
             []( gp_Quaternion &self , const gp_EulerSequence theOrder ){ Standard_Real  theAlpha; Standard_Real  theBeta; Standard_Real  theGamma; self.GetEulerAngles(theOrder,theAlpha,theBeta,theGamma); return std::make_tuple(theAlpha,theBeta,theGamma); },
             R"#(Returns Euler angles describing current rotation)#"  , py::arg("theOrder"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
        .def("__imul__",
             (void (gp_Quaternion::*)( const Standard_Real ) ) static_cast<void (gp_Quaternion::*)( const Standard_Real ) >(&gp_Quaternion::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("theScale"))
        .def("__mul__",
             (gp_Quaternion (gp_Quaternion::*)( const Standard_Real ) const) static_cast<gp_Quaternion (gp_Quaternion::*)( const Standard_Real ) const>(&gp_Quaternion::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("theScale"))
        .def("__rmul__",
             (gp_Quaternion (gp_Quaternion::*)( const Standard_Real ) const) static_cast<gp_Quaternion (gp_Quaternion::*)( const Standard_Real ) const>(&gp_Quaternion::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("theScale"))
        .def("__sub__",
             (gp_Quaternion (gp_Quaternion::*)() const) static_cast<gp_Quaternion (gp_Quaternion::*)() const>(&gp_Quaternion::operator-),
             py::is_operator(),
             R"#(None)#" )
        .def("__add__",
             (gp_Quaternion (gp_Quaternion::*)( const gp_Quaternion & ) const) static_cast<gp_Quaternion (gp_Quaternion::*)( const gp_Quaternion & ) const>(&gp_Quaternion::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("theOther"))
        .def("__sub__",
             (gp_Quaternion (gp_Quaternion::*)( const gp_Quaternion & ) const) static_cast<gp_Quaternion (gp_Quaternion::*)( const gp_Quaternion & ) const>(&gp_Quaternion::operator-),
             py::is_operator(),
             R"#(None)#"  , py::arg("theOther"))
        .def("__mul__",
             (gp_Quaternion (gp_Quaternion::*)( const gp_Quaternion & ) const) static_cast<gp_Quaternion (gp_Quaternion::*)( const gp_Quaternion & ) const>(&gp_Quaternion::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("theOther"))
        .def("__rmul__",
             (gp_Quaternion (gp_Quaternion::*)( const gp_Quaternion & ) const) static_cast<gp_Quaternion (gp_Quaternion::*)( const gp_Quaternion & ) const>(&gp_Quaternion::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("theOther"))
        .def("__iadd__",
             (void (gp_Quaternion::*)( const gp_Quaternion & ) ) static_cast<void (gp_Quaternion::*)( const gp_Quaternion & ) >(&gp_Quaternion::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("theOther"))
        .def("__isub__",
             (void (gp_Quaternion::*)( const gp_Quaternion & ) ) static_cast<void (gp_Quaternion::*)( const gp_Quaternion & ) >(&gp_Quaternion::operator-=),
             py::is_operator(),
             R"#(None)#"  , py::arg("theOther"))
        .def("__imul__",
             (void (gp_Quaternion::*)( const gp_Quaternion & ) ) static_cast<void (gp_Quaternion::*)( const gp_Quaternion & ) >(&gp_Quaternion::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("theOther"))
        .def("__mul__",
             (gp_Vec (gp_Quaternion::*)( const gp_Vec & ) const) static_cast<gp_Vec (gp_Quaternion::*)( const gp_Vec & ) const>(&gp_Quaternion::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("theVec"))
        .def("__rmul__",
             (gp_Vec (gp_Quaternion::*)( const gp_Vec & ) const) static_cast<gp_Vec (gp_Quaternion::*)( const gp_Vec & ) const>(&gp_Quaternion::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("theVec"))
    // additional methods and static methods
;


    static_cast<py::class_<gp_QuaternionNLerp , shared_ptr<gp_QuaternionNLerp> >>(m.attr("gp_QuaternionNLerp"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Quaternion &,const gp_Quaternion & >()  , py::arg("theQStart"),  py::arg("theQEnd") )
    // custom constructors
    // methods
        .def("Init",
             (void (gp_QuaternionNLerp::*)( const gp_Quaternion & , const gp_Quaternion & ) ) static_cast<void (gp_QuaternionNLerp::*)( const gp_Quaternion & , const gp_Quaternion & ) >(&gp_QuaternionNLerp::Init),
             R"#(Initialize the tool with Start and End values.)#"  , py::arg("theQStart"),  py::arg("theQEnd"))
        .def("InitFromUnit",
             (void (gp_QuaternionNLerp::*)( const gp_Quaternion & , const gp_Quaternion & ) ) static_cast<void (gp_QuaternionNLerp::*)( const gp_Quaternion & , const gp_Quaternion & ) >(&gp_QuaternionNLerp::InitFromUnit),
             R"#(Initialize the tool with Start and End unit quaternions.)#"  , py::arg("theQStart"),  py::arg("theQEnd"))
        .def("Interpolate",
             (void (gp_QuaternionNLerp::*)( Standard_Real , gp_Quaternion & ) const) static_cast<void (gp_QuaternionNLerp::*)( Standard_Real , gp_Quaternion & ) const>(&gp_QuaternionNLerp::Interpolate),
             R"#(Set interpolated quaternion for theT position (from 0.0 to 1.0))#"  , py::arg("theT"),  py::arg("theResultQ"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Interpolate_s",
                    (gp_Quaternion (*)( const gp_Quaternion & , const gp_Quaternion & , Standard_Real ) ) static_cast<gp_Quaternion (*)( const gp_Quaternion & , const gp_Quaternion & , Standard_Real ) >(&gp_QuaternionNLerp::Interpolate),
                    R"#(Compute interpolated quaternion between two quaternions.)#"  , py::arg("theQStart"),  py::arg("theQEnd"),  py::arg("theT"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_QuaternionSLerp , shared_ptr<gp_QuaternionSLerp> >>(m.attr("gp_QuaternionSLerp"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Quaternion &,const gp_Quaternion & >()  , py::arg("theQStart"),  py::arg("theQEnd") )
    // custom constructors
    // methods
        .def("Init",
             (void (gp_QuaternionSLerp::*)( const gp_Quaternion & , const gp_Quaternion & ) ) static_cast<void (gp_QuaternionSLerp::*)( const gp_Quaternion & , const gp_Quaternion & ) >(&gp_QuaternionSLerp::Init),
             R"#(Initialize the tool with Start and End values.)#"  , py::arg("theQStart"),  py::arg("theQEnd"))
        .def("InitFromUnit",
             (void (gp_QuaternionSLerp::*)( const gp_Quaternion & , const gp_Quaternion & ) ) static_cast<void (gp_QuaternionSLerp::*)( const gp_Quaternion & , const gp_Quaternion & ) >(&gp_QuaternionSLerp::InitFromUnit),
             R"#(Initialize the tool with Start and End unit quaternions.)#"  , py::arg("theQStart"),  py::arg("theQEnd"))
        .def("Interpolate",
             (void (gp_QuaternionSLerp::*)( Standard_Real , gp_Quaternion & ) const) static_cast<void (gp_QuaternionSLerp::*)( Standard_Real , gp_Quaternion & ) const>(&gp_QuaternionSLerp::Interpolate),
             R"#(Set interpolated quaternion for theT position (from 0.0 to 1.0))#"  , py::arg("theT"),  py::arg("theResultQ"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Interpolate_s",
                    (gp_Quaternion (*)( const gp_Quaternion & , const gp_Quaternion & , Standard_Real ) ) static_cast<gp_Quaternion (*)( const gp_Quaternion & , const gp_Quaternion & , Standard_Real ) >(&gp_QuaternionSLerp::Interpolate),
                    R"#(Compute interpolated quaternion between two quaternions.)#"  , py::arg("theQStart"),  py::arg("theQEnd"),  py::arg("theT"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_Sphere , shared_ptr<gp_Sphere> >>(m.attr("gp_Sphere"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Ax3 &,const Standard_Real >()  , py::arg("A3"),  py::arg("Radius") )
    // custom constructors
    // methods
        .def("SetLocation",
             (void (gp_Sphere::*)( const gp_Pnt & ) ) static_cast<void (gp_Sphere::*)( const gp_Pnt & ) >(&gp_Sphere::SetLocation),
             R"#(Changes the center of the sphere.)#"  , py::arg("Loc"))
        .def("SetPosition",
             (void (gp_Sphere::*)( const gp_Ax3 & ) ) static_cast<void (gp_Sphere::*)( const gp_Ax3 & ) >(&gp_Sphere::SetPosition),
             R"#(Changes the local coordinate system of the sphere.)#"  , py::arg("A3"))
        .def("SetRadius",
             (void (gp_Sphere::*)( const Standard_Real ) ) static_cast<void (gp_Sphere::*)( const Standard_Real ) >(&gp_Sphere::SetRadius),
             R"#(Assigns R the radius of the Sphere. Warnings : It is not forbidden to create a sphere with null radius. Raises ConstructionError if R < 0.0)#"  , py::arg("R"))
        .def("Area",
             (Standard_Real (gp_Sphere::*)() const) static_cast<Standard_Real (gp_Sphere::*)() const>(&gp_Sphere::Area),
             R"#(Computes the aera of the sphere.)#" )
        .def("UReverse",
             (void (gp_Sphere::*)() ) static_cast<void (gp_Sphere::*)() >(&gp_Sphere::UReverse),
             R"#(Reverses the U parametrization of the sphere reversing the YAxis.)#" )
        .def("VReverse",
             (void (gp_Sphere::*)() ) static_cast<void (gp_Sphere::*)() >(&gp_Sphere::VReverse),
             R"#(Reverses the V parametrization of the sphere reversing the ZAxis.)#" )
        .def("Direct",
             (Standard_Boolean (gp_Sphere::*)() const) static_cast<Standard_Boolean (gp_Sphere::*)() const>(&gp_Sphere::Direct),
             R"#(Returns true if the local coordinate system of this sphere is right-handed.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Sphere::*)() const) static_cast<const gp_Pnt & (gp_Sphere::*)() const>(&gp_Sphere::Location),
             R"#(--- Purpose ; Returns the center of the sphere.)#" )
        .def("Position",
             (const gp_Ax3 & (gp_Sphere::*)() const) static_cast<const gp_Ax3 & (gp_Sphere::*)() const>(&gp_Sphere::Position),
             R"#(Returns the local coordinates system of the sphere.)#" )
        .def("Radius",
             (Standard_Real (gp_Sphere::*)() const) static_cast<Standard_Real (gp_Sphere::*)() const>(&gp_Sphere::Radius),
             R"#(Returns the radius of the sphere.)#" )
        .def("Volume",
             (Standard_Real (gp_Sphere::*)() const) static_cast<Standard_Real (gp_Sphere::*)() const>(&gp_Sphere::Volume),
             R"#(Computes the volume of the sphere)#" )
        .def("XAxis",
             (gp_Ax1 (gp_Sphere::*)() const) static_cast<gp_Ax1 (gp_Sphere::*)() const>(&gp_Sphere::XAxis),
             R"#(Returns the axis X of the sphere.)#" )
        .def("YAxis",
             (gp_Ax1 (gp_Sphere::*)() const) static_cast<gp_Ax1 (gp_Sphere::*)() const>(&gp_Sphere::YAxis),
             R"#(Returns the axis Y of the sphere.)#" )
        .def("Mirror",
             (void (gp_Sphere::*)( const gp_Pnt & ) ) static_cast<void (gp_Sphere::*)( const gp_Pnt & ) >(&gp_Sphere::Mirror),
             R"#(None)#"  , py::arg("P"))
        .def("Mirrored",
             (gp_Sphere (gp_Sphere::*)( const gp_Pnt & ) const) static_cast<gp_Sphere (gp_Sphere::*)( const gp_Pnt & ) const>(&gp_Sphere::Mirrored),
             R"#(Performs the symmetrical transformation of a sphere with respect to the point P which is the center of the symmetry.)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Sphere::*)( const gp_Ax1 & ) ) static_cast<void (gp_Sphere::*)( const gp_Ax1 & ) >(&gp_Sphere::Mirror),
             R"#(None)#"  , py::arg("A1"))
        .def("Mirrored",
             (gp_Sphere (gp_Sphere::*)( const gp_Ax1 & ) const) static_cast<gp_Sphere (gp_Sphere::*)( const gp_Ax1 & ) const>(&gp_Sphere::Mirrored),
             R"#(Performs the symmetrical transformation of a sphere with respect to an axis placement which is the axis of the symmetry.)#"  , py::arg("A1"))
        .def("Mirror",
             (void (gp_Sphere::*)( const gp_Ax2 & ) ) static_cast<void (gp_Sphere::*)( const gp_Ax2 & ) >(&gp_Sphere::Mirror),
             R"#(None)#"  , py::arg("A2"))
        .def("Mirrored",
             (gp_Sphere (gp_Sphere::*)( const gp_Ax2 & ) const) static_cast<gp_Sphere (gp_Sphere::*)( const gp_Ax2 & ) const>(&gp_Sphere::Mirrored),
             R"#(Performs the symmetrical transformation of a sphere with respect to a plane. The axis placement A2 locates the plane of the of the symmetry : (Location, XDirection, YDirection).)#"  , py::arg("A2"))
        .def("Rotate",
             (void (gp_Sphere::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Sphere::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Sphere::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Sphere (gp_Sphere::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Sphere (gp_Sphere::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Sphere::Rotated),
             R"#(Rotates a sphere. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Sphere::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Sphere::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Sphere::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Sphere (gp_Sphere::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Sphere (gp_Sphere::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Sphere::Scaled),
             R"#(Scales a sphere. S is the scaling value. The absolute value of S is used to scale the sphere)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Sphere::*)( const gp_Trsf & ) ) static_cast<void (gp_Sphere::*)( const gp_Trsf & ) >(&gp_Sphere::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Sphere (gp_Sphere::*)( const gp_Trsf & ) const) static_cast<gp_Sphere (gp_Sphere::*)( const gp_Trsf & ) const>(&gp_Sphere::Transformed),
             R"#(Transforms a sphere with the transformation T from class Trsf.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Sphere::*)( const gp_Vec & ) ) static_cast<void (gp_Sphere::*)( const gp_Vec & ) >(&gp_Sphere::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Sphere (gp_Sphere::*)( const gp_Vec & ) const) static_cast<gp_Sphere (gp_Sphere::*)( const gp_Vec & ) const>(&gp_Sphere::Translated),
             R"#(Translates a sphere in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Sphere::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Sphere::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Sphere::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Sphere (gp_Sphere::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Sphere (gp_Sphere::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Sphere::Translated),
             R"#(Translates a sphere from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetLocation",
             (void (gp_Sphere::*)( const gp_Pnt & ) ) static_cast<void (gp_Sphere::*)( const gp_Pnt & ) >(&gp_Sphere::SetLocation),
             R"#(Changes the center of the sphere.)#"  , py::arg("Loc"))
        .def("SetPosition",
             (void (gp_Sphere::*)( const gp_Ax3 & ) ) static_cast<void (gp_Sphere::*)( const gp_Ax3 & ) >(&gp_Sphere::SetPosition),
             R"#(Changes the local coordinate system of the sphere.)#"  , py::arg("A3"))
        .def("SetRadius",
             (void (gp_Sphere::*)( const Standard_Real ) ) static_cast<void (gp_Sphere::*)( const Standard_Real ) >(&gp_Sphere::SetRadius),
             R"#(Assigns R the radius of the Sphere. Warnings : It is not forbidden to create a sphere with null radius. Raises ConstructionError if R < 0.0)#"  , py::arg("R"))
        .def("Area",
             (Standard_Real (gp_Sphere::*)() const) static_cast<Standard_Real (gp_Sphere::*)() const>(&gp_Sphere::Area),
             R"#(Computes the aera of the sphere.)#" )
        .def("UReverse",
             (void (gp_Sphere::*)() ) static_cast<void (gp_Sphere::*)() >(&gp_Sphere::UReverse),
             R"#(Reverses the U parametrization of the sphere reversing the YAxis.)#" )
        .def("VReverse",
             (void (gp_Sphere::*)() ) static_cast<void (gp_Sphere::*)() >(&gp_Sphere::VReverse),
             R"#(Reverses the V parametrization of the sphere reversing the ZAxis.)#" )
        .def("Direct",
             (Standard_Boolean (gp_Sphere::*)() const) static_cast<Standard_Boolean (gp_Sphere::*)() const>(&gp_Sphere::Direct),
             R"#(Returns true if the local coordinate system of this sphere is right-handed.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Sphere::*)() const) static_cast<const gp_Pnt & (gp_Sphere::*)() const>(&gp_Sphere::Location),
             R"#(--- Purpose ; Returns the center of the sphere.)#" )
        .def("Position",
             (const gp_Ax3 & (gp_Sphere::*)() const) static_cast<const gp_Ax3 & (gp_Sphere::*)() const>(&gp_Sphere::Position),
             R"#(Returns the local coordinates system of the sphere.)#" )
        .def("Radius",
             (Standard_Real (gp_Sphere::*)() const) static_cast<Standard_Real (gp_Sphere::*)() const>(&gp_Sphere::Radius),
             R"#(Returns the radius of the sphere.)#" )
        .def("Volume",
             (Standard_Real (gp_Sphere::*)() const) static_cast<Standard_Real (gp_Sphere::*)() const>(&gp_Sphere::Volume),
             R"#(Computes the volume of the sphere)#" )
        .def("XAxis",
             (gp_Ax1 (gp_Sphere::*)() const) static_cast<gp_Ax1 (gp_Sphere::*)() const>(&gp_Sphere::XAxis),
             R"#(Returns the axis X of the sphere.)#" )
        .def("YAxis",
             (gp_Ax1 (gp_Sphere::*)() const) static_cast<gp_Ax1 (gp_Sphere::*)() const>(&gp_Sphere::YAxis),
             R"#(Returns the axis Y of the sphere.)#" )
        .def("Rotate",
             (void (gp_Sphere::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Sphere::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Sphere::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Sphere (gp_Sphere::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Sphere (gp_Sphere::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Sphere::Rotated),
             R"#(Rotates a sphere. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Sphere::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Sphere::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Sphere::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Sphere (gp_Sphere::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Sphere (gp_Sphere::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Sphere::Scaled),
             R"#(Scales a sphere. S is the scaling value. The absolute value of S is used to scale the sphere)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Sphere::*)( const gp_Trsf & ) ) static_cast<void (gp_Sphere::*)( const gp_Trsf & ) >(&gp_Sphere::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Sphere (gp_Sphere::*)( const gp_Trsf & ) const) static_cast<gp_Sphere (gp_Sphere::*)( const gp_Trsf & ) const>(&gp_Sphere::Transformed),
             R"#(Transforms a sphere with the transformation T from class Trsf.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Sphere::*)( const gp_Vec & ) ) static_cast<void (gp_Sphere::*)( const gp_Vec & ) >(&gp_Sphere::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Sphere (gp_Sphere::*)( const gp_Vec & ) const) static_cast<gp_Sphere (gp_Sphere::*)( const gp_Vec & ) const>(&gp_Sphere::Translated),
             R"#(Translates a sphere in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Sphere::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Sphere::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Sphere::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Sphere (gp_Sphere::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Sphere (gp_Sphere::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Sphere::Translated),
             R"#(Translates a sphere from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
        .def("Coefficients",
             []( gp_Sphere &self   ){ Standard_Real  A1; Standard_Real  A2; Standard_Real  A3; Standard_Real  B1; Standard_Real  B2; Standard_Real  B3; Standard_Real  C1; Standard_Real  C2; Standard_Real  C3; Standard_Real  D; self.Coefficients(A1,A2,A3,B1,B2,B3,C1,C2,C3,D); return std::make_tuple(A1,A2,A3,B1,B2,B3,C1,C2,C3,D); },
             R"#(Computes the coefficients of the implicit equation of the quadric in the absolute cartesian coordinates system : A1.X**2 + A2.Y**2 + A3.Z**2 + 2.(B1.X.Y + B2.X.Z + B3.Y.Z) + 2.(C1.X + C2.Y + C3.Z) + D = 0.0)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_Torus , shared_ptr<gp_Torus> >>(m.attr("gp_Torus"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Ax3 &,const Standard_Real,const Standard_Real >()  , py::arg("A3"),  py::arg("MajorRadius"),  py::arg("MinorRadius") )
    // custom constructors
    // methods
        .def("SetAxis",
             (void (gp_Torus::*)( const gp_Ax1 & ) ) static_cast<void (gp_Torus::*)( const gp_Ax1 & ) >(&gp_Torus::SetAxis),
             R"#(Modifies this torus, by redefining its local coordinate system so that: - its origin and "main Direction" become those of the axis A1 (the "X Direction" and "Y Direction" are then recomputed). Raises ConstructionError if the direction of A1 is parallel to the "XDirection" of the coordinate system of the toroidal surface.)#"  , py::arg("A1"))
        .def("SetLocation",
             (void (gp_Torus::*)( const gp_Pnt & ) ) static_cast<void (gp_Torus::*)( const gp_Pnt & ) >(&gp_Torus::SetLocation),
             R"#(Changes the location of the torus.)#"  , py::arg("Loc"))
        .def("SetMajorRadius",
             (void (gp_Torus::*)( const Standard_Real ) ) static_cast<void (gp_Torus::*)( const Standard_Real ) >(&gp_Torus::SetMajorRadius),
             R"#(Assigns value to the major radius of this torus. Raises ConstructionError if MajorRadius - MinorRadius <= Resolution())#"  , py::arg("MajorRadius"))
        .def("SetMinorRadius",
             (void (gp_Torus::*)( const Standard_Real ) ) static_cast<void (gp_Torus::*)( const Standard_Real ) >(&gp_Torus::SetMinorRadius),
             R"#(Assigns value to the minor radius of this torus. Raises ConstructionError if MinorRadius < 0.0 or if MajorRadius - MinorRadius <= Resolution from gp.)#"  , py::arg("MinorRadius"))
        .def("SetPosition",
             (void (gp_Torus::*)( const gp_Ax3 & ) ) static_cast<void (gp_Torus::*)( const gp_Ax3 & ) >(&gp_Torus::SetPosition),
             R"#(Changes the local coordinate system of the surface.)#"  , py::arg("A3"))
        .def("Area",
             (Standard_Real (gp_Torus::*)() const) static_cast<Standard_Real (gp_Torus::*)() const>(&gp_Torus::Area),
             R"#(Computes the area of the torus.)#" )
        .def("UReverse",
             (void (gp_Torus::*)() ) static_cast<void (gp_Torus::*)() >(&gp_Torus::UReverse),
             R"#(Reverses the U parametrization of the torus reversing the YAxis.)#" )
        .def("VReverse",
             (void (gp_Torus::*)() ) static_cast<void (gp_Torus::*)() >(&gp_Torus::VReverse),
             R"#(Reverses the V parametrization of the torus reversing the ZAxis.)#" )
        .def("Direct",
             (Standard_Boolean (gp_Torus::*)() const) static_cast<Standard_Boolean (gp_Torus::*)() const>(&gp_Torus::Direct),
             R"#(returns true if the Ax3, the local coordinate system of this torus, is right handed.)#" )
        .def("Axis",
             (const gp_Ax1 & (gp_Torus::*)() const) static_cast<const gp_Ax1 & (gp_Torus::*)() const>(&gp_Torus::Axis),
             R"#(returns the symmetry axis of the torus.)#" )
        .def("Coefficients",
             (void (gp_Torus::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (gp_Torus::*)( NCollection_Array1<Standard_Real> & ) const>(&gp_Torus::Coefficients),
             R"#(Computes the coefficients of the implicit equation of the surface in the absolute Cartesian coordinate system: Coef(1) * X^4 + Coef(2) * Y^4 + Coef(3) * Z^4 + Coef(4) * X^3 * Y + Coef(5) * X^3 * Z + Coef(6) * Y^3 * X + Coef(7) * Y^3 * Z + Coef(8) * Z^3 * X + Coef(9) * Z^3 * Y + Coef(10) * X^2 * Y^2 + Coef(11) * X^2 * Z^2 + Coef(12) * Y^2 * Z^2 + Coef(13) * X^2 * Y * Z + Coef(14) * X * Y^2 * Z + Coef(15) * X * Y * Z^2 + Coef(16) * X^3 + Coef(17) * Y^3 + Coef(18) * Z^3 + Coef(19) * X^2 * Y + Coef(20) * X^2 * Z + Coef(21) * Y^2 * X + Coef(22) * Y^2 * Z + Coef(23) * Z^2 * X + Coef(24) * Z^2 * Y + Coef(25) * X * Y * Z + Coef(26) * X^2 + Coef(27) * Y^2 + Coef(28) * Z^2 + Coef(29) * X * Y + Coef(30) * X * Z + Coef(31) * Y * Z + Coef(32) * X + Coef(33) * Y + Coef(34) * Z + Coef(35) = 0.0 Raises DimensionError if the length of Coef is lower than 35.)#"  , py::arg("Coef"))
        .def("Location",
             (const gp_Pnt & (gp_Torus::*)() const) static_cast<const gp_Pnt & (gp_Torus::*)() const>(&gp_Torus::Location),
             R"#(Returns the Torus's location.)#" )
        .def("Position",
             (const gp_Ax3 & (gp_Torus::*)() const) static_cast<const gp_Ax3 & (gp_Torus::*)() const>(&gp_Torus::Position),
             R"#(Returns the local coordinates system of the torus.)#" )
        .def("MajorRadius",
             (Standard_Real (gp_Torus::*)() const) static_cast<Standard_Real (gp_Torus::*)() const>(&gp_Torus::MajorRadius),
             R"#(returns the major radius of the torus.)#" )
        .def("MinorRadius",
             (Standard_Real (gp_Torus::*)() const) static_cast<Standard_Real (gp_Torus::*)() const>(&gp_Torus::MinorRadius),
             R"#(returns the minor radius of the torus.)#" )
        .def("Volume",
             (Standard_Real (gp_Torus::*)() const) static_cast<Standard_Real (gp_Torus::*)() const>(&gp_Torus::Volume),
             R"#(Computes the volume of the torus.)#" )
        .def("XAxis",
             (gp_Ax1 (gp_Torus::*)() const) static_cast<gp_Ax1 (gp_Torus::*)() const>(&gp_Torus::XAxis),
             R"#(returns the axis X of the torus.)#" )
        .def("YAxis",
             (gp_Ax1 (gp_Torus::*)() const) static_cast<gp_Ax1 (gp_Torus::*)() const>(&gp_Torus::YAxis),
             R"#(returns the axis Y of the torus.)#" )
        .def("Mirror",
             (void (gp_Torus::*)( const gp_Pnt & ) ) static_cast<void (gp_Torus::*)( const gp_Pnt & ) >(&gp_Torus::Mirror),
             R"#(None)#"  , py::arg("P"))
        .def("Mirrored",
             (gp_Torus (gp_Torus::*)( const gp_Pnt & ) const) static_cast<gp_Torus (gp_Torus::*)( const gp_Pnt & ) const>(&gp_Torus::Mirrored),
             R"#(Performs the symmetrical transformation of a torus with respect to the point P which is the center of the symmetry.)#"  , py::arg("P"))
        .def("Mirror",
             (void (gp_Torus::*)( const gp_Ax1 & ) ) static_cast<void (gp_Torus::*)( const gp_Ax1 & ) >(&gp_Torus::Mirror),
             R"#(None)#"  , py::arg("A1"))
        .def("Mirrored",
             (gp_Torus (gp_Torus::*)( const gp_Ax1 & ) const) static_cast<gp_Torus (gp_Torus::*)( const gp_Ax1 & ) const>(&gp_Torus::Mirrored),
             R"#(Performs the symmetrical transformation of a torus with respect to an axis placement which is the axis of the symmetry.)#"  , py::arg("A1"))
        .def("Mirror",
             (void (gp_Torus::*)( const gp_Ax2 & ) ) static_cast<void (gp_Torus::*)( const gp_Ax2 & ) >(&gp_Torus::Mirror),
             R"#(None)#"  , py::arg("A2"))
        .def("Mirrored",
             (gp_Torus (gp_Torus::*)( const gp_Ax2 & ) const) static_cast<gp_Torus (gp_Torus::*)( const gp_Ax2 & ) const>(&gp_Torus::Mirrored),
             R"#(Performs the symmetrical transformation of a torus with respect to a plane. The axis placement A2 locates the plane of the of the symmetry : (Location, XDirection, YDirection).)#"  , py::arg("A2"))
        .def("Rotate",
             (void (gp_Torus::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Torus::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Torus::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Torus (gp_Torus::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Torus (gp_Torus::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Torus::Rotated),
             R"#(Rotates a torus. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Torus::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Torus::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Torus::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Torus (gp_Torus::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Torus (gp_Torus::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Torus::Scaled),
             R"#(Scales a torus. S is the scaling value. The absolute value of S is used to scale the torus)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Torus::*)( const gp_Trsf & ) ) static_cast<void (gp_Torus::*)( const gp_Trsf & ) >(&gp_Torus::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Torus (gp_Torus::*)( const gp_Trsf & ) const) static_cast<gp_Torus (gp_Torus::*)( const gp_Trsf & ) const>(&gp_Torus::Transformed),
             R"#(Transforms a torus with the transformation T from class Trsf.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Torus::*)( const gp_Vec & ) ) static_cast<void (gp_Torus::*)( const gp_Vec & ) >(&gp_Torus::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Torus (gp_Torus::*)( const gp_Vec & ) const) static_cast<gp_Torus (gp_Torus::*)( const gp_Vec & ) const>(&gp_Torus::Translated),
             R"#(Translates a torus in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Torus::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Torus::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Torus::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Torus (gp_Torus::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Torus (gp_Torus::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Torus::Translated),
             R"#(Translates a torus from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetAxis",
             (void (gp_Torus::*)( const gp_Ax1 & ) ) static_cast<void (gp_Torus::*)( const gp_Ax1 & ) >(&gp_Torus::SetAxis),
             R"#(Modifies this torus, by redefining its local coordinate system so that: - its origin and "main Direction" become those of the axis A1 (the "X Direction" and "Y Direction" are then recomputed). Raises ConstructionError if the direction of A1 is parallel to the "XDirection" of the coordinate system of the toroidal surface.)#"  , py::arg("A1"))
        .def("SetLocation",
             (void (gp_Torus::*)( const gp_Pnt & ) ) static_cast<void (gp_Torus::*)( const gp_Pnt & ) >(&gp_Torus::SetLocation),
             R"#(Changes the location of the torus.)#"  , py::arg("Loc"))
        .def("SetMajorRadius",
             (void (gp_Torus::*)( const Standard_Real ) ) static_cast<void (gp_Torus::*)( const Standard_Real ) >(&gp_Torus::SetMajorRadius),
             R"#(Assigns value to the major radius of this torus. Raises ConstructionError if MajorRadius - MinorRadius <= Resolution())#"  , py::arg("MajorRadius"))
        .def("SetMinorRadius",
             (void (gp_Torus::*)( const Standard_Real ) ) static_cast<void (gp_Torus::*)( const Standard_Real ) >(&gp_Torus::SetMinorRadius),
             R"#(Assigns value to the minor radius of this torus. Raises ConstructionError if MinorRadius < 0.0 or if MajorRadius - MinorRadius <= Resolution from gp.)#"  , py::arg("MinorRadius"))
        .def("SetPosition",
             (void (gp_Torus::*)( const gp_Ax3 & ) ) static_cast<void (gp_Torus::*)( const gp_Ax3 & ) >(&gp_Torus::SetPosition),
             R"#(Changes the local coordinate system of the surface.)#"  , py::arg("A3"))
        .def("Area",
             (Standard_Real (gp_Torus::*)() const) static_cast<Standard_Real (gp_Torus::*)() const>(&gp_Torus::Area),
             R"#(Computes the area of the torus.)#" )
        .def("UReverse",
             (void (gp_Torus::*)() ) static_cast<void (gp_Torus::*)() >(&gp_Torus::UReverse),
             R"#(Reverses the U parametrization of the torus reversing the YAxis.)#" )
        .def("VReverse",
             (void (gp_Torus::*)() ) static_cast<void (gp_Torus::*)() >(&gp_Torus::VReverse),
             R"#(Reverses the V parametrization of the torus reversing the ZAxis.)#" )
        .def("Direct",
             (Standard_Boolean (gp_Torus::*)() const) static_cast<Standard_Boolean (gp_Torus::*)() const>(&gp_Torus::Direct),
             R"#(returns true if the Ax3, the local coordinate system of this torus, is right handed.)#" )
        .def("Axis",
             (const gp_Ax1 & (gp_Torus::*)() const) static_cast<const gp_Ax1 & (gp_Torus::*)() const>(&gp_Torus::Axis),
             R"#(returns the symmetry axis of the torus.)#" )
        .def("Location",
             (const gp_Pnt & (gp_Torus::*)() const) static_cast<const gp_Pnt & (gp_Torus::*)() const>(&gp_Torus::Location),
             R"#(Returns the Torus's location.)#" )
        .def("Position",
             (const gp_Ax3 & (gp_Torus::*)() const) static_cast<const gp_Ax3 & (gp_Torus::*)() const>(&gp_Torus::Position),
             R"#(Returns the local coordinates system of the torus.)#" )
        .def("MajorRadius",
             (Standard_Real (gp_Torus::*)() const) static_cast<Standard_Real (gp_Torus::*)() const>(&gp_Torus::MajorRadius),
             R"#(returns the major radius of the torus.)#" )
        .def("MinorRadius",
             (Standard_Real (gp_Torus::*)() const) static_cast<Standard_Real (gp_Torus::*)() const>(&gp_Torus::MinorRadius),
             R"#(returns the minor radius of the torus.)#" )
        .def("Volume",
             (Standard_Real (gp_Torus::*)() const) static_cast<Standard_Real (gp_Torus::*)() const>(&gp_Torus::Volume),
             R"#(Computes the volume of the torus.)#" )
        .def("XAxis",
             (gp_Ax1 (gp_Torus::*)() const) static_cast<gp_Ax1 (gp_Torus::*)() const>(&gp_Torus::XAxis),
             R"#(returns the axis X of the torus.)#" )
        .def("YAxis",
             (gp_Ax1 (gp_Torus::*)() const) static_cast<gp_Ax1 (gp_Torus::*)() const>(&gp_Torus::YAxis),
             R"#(returns the axis Y of the torus.)#" )
        .def("Rotate",
             (void (gp_Torus::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Torus::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Torus::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Torus (gp_Torus::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Torus (gp_Torus::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Torus::Rotated),
             R"#(Rotates a torus. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Torus::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Torus::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Torus::Scale),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Scaled",
             (gp_Torus (gp_Torus::*)( const gp_Pnt & , const Standard_Real ) const) static_cast<gp_Torus (gp_Torus::*)( const gp_Pnt & , const Standard_Real ) const>(&gp_Torus::Scaled),
             R"#(Scales a torus. S is the scaling value. The absolute value of S is used to scale the torus)#"  , py::arg("P"),  py::arg("S"))
        .def("Transform",
             (void (gp_Torus::*)( const gp_Trsf & ) ) static_cast<void (gp_Torus::*)( const gp_Trsf & ) >(&gp_Torus::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Torus (gp_Torus::*)( const gp_Trsf & ) const) static_cast<gp_Torus (gp_Torus::*)( const gp_Trsf & ) const>(&gp_Torus::Transformed),
             R"#(Transforms a torus with the transformation T from class Trsf.)#"  , py::arg("T"))
        .def("Translate",
             (void (gp_Torus::*)( const gp_Vec & ) ) static_cast<void (gp_Torus::*)( const gp_Vec & ) >(&gp_Torus::Translate),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (gp_Torus (gp_Torus::*)( const gp_Vec & ) const) static_cast<gp_Torus (gp_Torus::*)( const gp_Vec & ) const>(&gp_Torus::Translated),
             R"#(Translates a torus in the direction of the vector V. The magnitude of the translation is the vector's magnitude.)#"  , py::arg("V"))
        .def("Translate",
             (void (gp_Torus::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Torus::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Torus::Translate),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Translated",
             (gp_Torus (gp_Torus::*)( const gp_Pnt & , const gp_Pnt & ) const) static_cast<gp_Torus (gp_Torus::*)( const gp_Pnt & , const gp_Pnt & ) const>(&gp_Torus::Translated),
             R"#(Translates a torus from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<gp_Trsf , shared_ptr<gp_Trsf> >>(m.attr("gp_Trsf"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Trsf2d & >()  , py::arg("T") )
    // custom constructors
    // methods
        .def("SetMirror",
             (void (gp_Trsf::*)( const gp_Pnt & ) ) static_cast<void (gp_Trsf::*)( const gp_Pnt & ) >(&gp_Trsf::SetMirror),
             R"#(Makes the transformation into a symmetrical transformation. P is the center of the symmetry.)#"  , py::arg("P"))
        .def("SetMirror",
             (void (gp_Trsf::*)( const gp_Ax1 & ) ) static_cast<void (gp_Trsf::*)( const gp_Ax1 & ) >(&gp_Trsf::SetMirror),
             R"#(Makes the transformation into a symmetrical transformation. A1 is the center of the axial symmetry.)#"  , py::arg("A1"))
        .def("SetMirror",
             (void (gp_Trsf::*)( const gp_Ax2 & ) ) static_cast<void (gp_Trsf::*)( const gp_Ax2 & ) >(&gp_Trsf::SetMirror),
             R"#(Makes the transformation into a symmetrical transformation. A2 is the center of the planar symmetry and defines the plane of symmetry by its origin, "X Direction" and "Y Direction".)#"  , py::arg("A2"))
        .def("SetRotation",
             (void (gp_Trsf::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Trsf::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Trsf::SetRotation),
             R"#(Changes the transformation into a rotation. A1 is the rotation axis and Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("SetRotation",
             (void (gp_Trsf::*)( const gp_Quaternion & ) ) static_cast<void (gp_Trsf::*)( const gp_Quaternion & ) >(&gp_Trsf::SetRotation),
             R"#(Changes the transformation into a rotation defined by quaternion. Note that rotation is performed around origin, i.e. no translation is involved.)#"  , py::arg("R"))
        .def("SetScale",
             (void (gp_Trsf::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (gp_Trsf::*)( const gp_Pnt & , const Standard_Real ) >(&gp_Trsf::SetScale),
             R"#(Changes the transformation into a scale. P is the center of the scale and S is the scaling value. Raises ConstructionError If <S> is null.)#"  , py::arg("P"),  py::arg("S"))
        .def("SetDisplacement",
             (void (gp_Trsf::*)( const gp_Ax3 & , const gp_Ax3 & ) ) static_cast<void (gp_Trsf::*)( const gp_Ax3 & , const gp_Ax3 & ) >(&gp_Trsf::SetDisplacement),
             R"#(Modifies this transformation so that it transforms the coordinate system defined by FromSystem1 into the one defined by ToSystem2. After this modification, this transformation transforms: - the origin of FromSystem1 into the origin of ToSystem2, - the "X Direction" of FromSystem1 into the "X Direction" of ToSystem2, - the "Y Direction" of FromSystem1 into the "Y Direction" of ToSystem2, and - the "main Direction" of FromSystem1 into the "main Direction" of ToSystem2. Warning When you know the coordinates of a point in one coordinate system and you want to express these coordinates in another one, do not use the transformation resulting from this function. Use the transformation that results from SetTransformation instead. SetDisplacement and SetTransformation create related transformations: the vectorial part of one is the inverse of the vectorial part of the other.)#"  , py::arg("FromSystem1"),  py::arg("ToSystem2"))
        .def("SetTransformation",
             (void (gp_Trsf::*)( const gp_Ax3 & , const gp_Ax3 & ) ) static_cast<void (gp_Trsf::*)( const gp_Ax3 & , const gp_Ax3 & ) >(&gp_Trsf::SetTransformation),
             R"#(Modifies this transformation so that it transforms the coordinates of any point, (x, y, z), relative to a source coordinate system into the coordinates (x', y', z') which are relative to a target coordinate system, but which represent the same point The transformation is from the coordinate system "FromSystem1" to the coordinate system "ToSystem2". Example : In a C++ implementation : Real x1, y1, z1; // are the coordinates of a point in the // local system FromSystem1 Real x2, y2, z2; // are the coordinates of a point in the // local system ToSystem2 gp_Pnt P1 (x1, y1, z1) Trsf T; T.SetTransformation (FromSystem1, ToSystem2); gp_Pnt P2 = P1.Transformed (T); P2.Coord (x2, y2, z2);)#"  , py::arg("FromSystem1"),  py::arg("ToSystem2"))
        .def("SetTransformation",
             (void (gp_Trsf::*)( const gp_Ax3 & ) ) static_cast<void (gp_Trsf::*)( const gp_Ax3 & ) >(&gp_Trsf::SetTransformation),
             R"#(Modifies this transformation so that it transforms the coordinates of any point, (x, y, z), relative to a source coordinate system into the coordinates (x', y', z') which are relative to a target coordinate system, but which represent the same point The transformation is from the default coordinate system {P(0.,0.,0.), VX (1.,0.,0.), VY (0.,1.,0.), VZ (0., 0. ,1.) } to the local coordinate system defined with the Ax3 ToSystem. Use in the same way as the previous method. FromSystem1 is defaulted to the absolute coordinate system.)#"  , py::arg("ToSystem"))
        .def("SetTransformation",
             (void (gp_Trsf::*)( const gp_Quaternion & , const gp_Vec & ) ) static_cast<void (gp_Trsf::*)( const gp_Quaternion & , const gp_Vec & ) >(&gp_Trsf::SetTransformation),
             R"#(Sets transformation by directly specified rotation and translation.)#"  , py::arg("R"),  py::arg("T"))
        .def("SetTranslation",
             (void (gp_Trsf::*)( const gp_Vec & ) ) static_cast<void (gp_Trsf::*)( const gp_Vec & ) >(&gp_Trsf::SetTranslation),
             R"#(Changes the transformation into a translation. V is the vector of the translation.)#"  , py::arg("V"))
        .def("SetTranslation",
             (void (gp_Trsf::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Trsf::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Trsf::SetTranslation),
             R"#(Makes the transformation into a translation where the translation vector is the vector (P1, P2) defined from point P1 to point P2.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetTranslationPart",
             (void (gp_Trsf::*)( const gp_Vec & ) ) static_cast<void (gp_Trsf::*)( const gp_Vec & ) >(&gp_Trsf::SetTranslationPart),
             R"#(Replaces the translation vector with the vector V.)#"  , py::arg("V"))
        .def("SetScaleFactor",
             (void (gp_Trsf::*)( const Standard_Real ) ) static_cast<void (gp_Trsf::*)( const Standard_Real ) >(&gp_Trsf::SetScaleFactor),
             R"#(Modifies the scale factor. Raises ConstructionError If S is null.)#"  , py::arg("S"))
        .def("SetForm",
             (void (gp_Trsf::*)( const gp_TrsfForm ) ) static_cast<void (gp_Trsf::*)( const gp_TrsfForm ) >(&gp_Trsf::SetForm),
             R"#(None)#"  , py::arg("P"))
        .def("SetValues",
             (void (gp_Trsf::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (gp_Trsf::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&gp_Trsf::SetValues),
             R"#(Sets the coefficients of the transformation. The transformation of the point x,y,z is the point x',y',z' with :)#"  , py::arg("a11"),  py::arg("a12"),  py::arg("a13"),  py::arg("a14"),  py::arg("a21"),  py::arg("a22"),  py::arg("a23"),  py::arg("a24"),  py::arg("a31"),  py::arg("a32"),  py::arg("a33"),  py::arg("a34"))
        .def("IsNegative",
             (Standard_Boolean (gp_Trsf::*)() const) static_cast<Standard_Boolean (gp_Trsf::*)() const>(&gp_Trsf::IsNegative),
             R"#(Returns true if the determinant of the vectorial part of this transformation is negative.)#" )
        .def("Form",
             (gp_TrsfForm (gp_Trsf::*)() const) static_cast<gp_TrsfForm (gp_Trsf::*)() const>(&gp_Trsf::Form),
             R"#(Returns the nature of the transformation. It can be: an identity transformation, a rotation, a translation, a mirror transformation (relative to a point, an axis or a plane), a scaling transformation, or a compound transformation.)#" )
        .def("ScaleFactor",
             (Standard_Real (gp_Trsf::*)() const) static_cast<Standard_Real (gp_Trsf::*)() const>(&gp_Trsf::ScaleFactor),
             R"#(Returns the scale factor.)#" )
        .def("TranslationPart",
             (const gp_XYZ & (gp_Trsf::*)() const) static_cast<const gp_XYZ & (gp_Trsf::*)() const>(&gp_Trsf::TranslationPart),
             R"#(Returns the translation part of the transformation's matrix)#" )
        .def("GetRotation",
             (Standard_Boolean (gp_Trsf::*)( gp_XYZ & , Standard_Real & ) const) static_cast<Standard_Boolean (gp_Trsf::*)( gp_XYZ & , Standard_Real & ) const>(&gp_Trsf::GetRotation),
             R"#(Returns the boolean True if there is non-zero rotation. In the presence of rotation, the output parameters store the axis and the angle of rotation. The method always returns positive value "theAngle", i.e., 0. < theAngle <= PI. Note that this rotation is defined only by the vectorial part of the transformation; generally you would need to check also the translational part to obtain the axis (gp_Ax1) of rotation.)#"  , py::arg("theAxis"),  py::arg("theAngle"))
        .def("GetRotation",
             (gp_Quaternion (gp_Trsf::*)() const) static_cast<gp_Quaternion (gp_Trsf::*)() const>(&gp_Trsf::GetRotation),
             R"#(Returns quaternion representing rotational part of the transformation.)#" )
        .def("VectorialPart",
             (gp_Mat (gp_Trsf::*)() const) static_cast<gp_Mat (gp_Trsf::*)() const>(&gp_Trsf::VectorialPart),
             R"#(Returns the vectorial part of the transformation. It is a 3*3 matrix which includes the scale factor.)#" )
        .def("HVectorialPart",
             (const gp_Mat & (gp_Trsf::*)() const) static_cast<const gp_Mat & (gp_Trsf::*)() const>(&gp_Trsf::HVectorialPart),
             R"#(Computes the homogeneous vectorial part of the transformation. It is a 3*3 matrix which doesn't include the scale factor. In other words, the vectorial part of this transformation is equal to its homogeneous vectorial part, multiplied by the scale factor. The coefficients of this matrix must be multiplied by the scale factor to obtain the coefficients of the transformation.)#" )
        .def("Value",
             (Standard_Real (gp_Trsf::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (gp_Trsf::*)( const Standard_Integer , const Standard_Integer ) const>(&gp_Trsf::Value),
             R"#(Returns the coefficients of the transformation's matrix. It is a 3 rows * 4 columns matrix. This coefficient includes the scale factor. Raises OutOfRanged if Row < 1 or Row > 3 or Col < 1 or Col > 4)#"  , py::arg("Row"),  py::arg("Col"))
        .def("Invert",
             (void (gp_Trsf::*)() ) static_cast<void (gp_Trsf::*)() >(&gp_Trsf::Invert),
             R"#(None)#" )
        .def("Inverted",
             (gp_Trsf (gp_Trsf::*)() const) static_cast<gp_Trsf (gp_Trsf::*)() const>(&gp_Trsf::Inverted),
             R"#(Computes the reverse transformation Raises an exception if the matrix of the transformation is not inversible, it means that the scale factor is lower or equal to Resolution from package gp. Computes the transformation composed with T and <me>. In a C++ implementation you can also write Tcomposed = <me> * T. Example : Trsf T1, T2, Tcomp; ............... Tcomp = T2.Multiplied(T1); // or (Tcomp = T2 * T1) Pnt P1(10.,3.,4.); Pnt P2 = P1.Transformed(Tcomp); //using Tcomp Pnt P3 = P1.Transformed(T1); //using T1 then T2 P3.Transform(T2); // P3 = P2 !!!)#" )
        .def("Multiplied",
             (gp_Trsf (gp_Trsf::*)( const gp_Trsf & ) const) static_cast<gp_Trsf (gp_Trsf::*)( const gp_Trsf & ) const>(&gp_Trsf::Multiplied),
             R"#(None)#"  , py::arg("T"))
        .def("Multiply",
             (void (gp_Trsf::*)( const gp_Trsf & ) ) static_cast<void (gp_Trsf::*)( const gp_Trsf & ) >(&gp_Trsf::Multiply),
             R"#(Computes the transformation composed with <me> and T. <me> = <me> * T)#"  , py::arg("T"))
        .def("PreMultiply",
             (void (gp_Trsf::*)( const gp_Trsf & ) ) static_cast<void (gp_Trsf::*)( const gp_Trsf & ) >(&gp_Trsf::PreMultiply),
             R"#(Computes the transformation composed with <me> and T. <me> = T * <me>)#"  , py::arg("T"))
        .def("Power",
             (void (gp_Trsf::*)( const Standard_Integer ) ) static_cast<void (gp_Trsf::*)( const Standard_Integer ) >(&gp_Trsf::Power),
             R"#(None)#"  , py::arg("N"))
        .def("Powered",
             (gp_Trsf (gp_Trsf::*)( const Standard_Integer ) const) static_cast<gp_Trsf (gp_Trsf::*)( const Standard_Integer ) const>(&gp_Trsf::Powered),
             R"#(Computes the following composition of transformations <me> * <me> * .......* <me>, N time. if N = 0 <me> = Identity if N < 0 <me> = <me>.Inverse() *...........* <me>.Inverse().)#"  , py::arg("N"))
        .def("Transforms",
             (void (gp_Trsf::*)( gp_XYZ & ) const) static_cast<void (gp_Trsf::*)( gp_XYZ & ) const>(&gp_Trsf::Transforms),
             R"#(Transformation of a triplet XYZ with a Trsf)#"  , py::arg("Coord"))
        .def("DumpJson",
             (void (gp_Trsf::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (gp_Trsf::*)( std::ostream & , const Standard_Integer ) const>(&gp_Trsf::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
        .def("SetMirror",
             (void (gp_Trsf::*)( const gp_Pnt & ) ) static_cast<void (gp_Trsf::*)( const gp_Pnt & ) >(&gp_Trsf::SetMirror),
             R"#(Makes the transformation into a symmetrical transformation. P is the center of the symmetry.)#"  , py::arg("P"))
        .def("SetTranslation",
             (void (gp_Trsf::*)( const gp_Vec & ) ) static_cast<void (gp_Trsf::*)( const gp_Vec & ) >(&gp_Trsf::SetTranslation),
             R"#(Changes the transformation into a translation. V is the vector of the translation.)#"  , py::arg("V"))
        .def("SetTranslation",
             (void (gp_Trsf::*)( const gp_Pnt & , const gp_Pnt & ) ) static_cast<void (gp_Trsf::*)( const gp_Pnt & , const gp_Pnt & ) >(&gp_Trsf::SetTranslation),
             R"#(Makes the transformation into a translation where the translation vector is the vector (P1, P2) defined from point P1 to point P2.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetForm",
             (void (gp_Trsf::*)( const gp_TrsfForm ) ) static_cast<void (gp_Trsf::*)( const gp_TrsfForm ) >(&gp_Trsf::SetForm),
             R"#(None)#"  , py::arg("P"))
        .def("IsNegative",
             (Standard_Boolean (gp_Trsf::*)() const) static_cast<Standard_Boolean (gp_Trsf::*)() const>(&gp_Trsf::IsNegative),
             R"#(Returns true if the determinant of the vectorial part of this transformation is negative.)#" )
        .def("TranslationPart",
             (const gp_XYZ & (gp_Trsf::*)() const) static_cast<const gp_XYZ & (gp_Trsf::*)() const>(&gp_Trsf::TranslationPart),
             R"#(Returns the translation part of the transformation's matrix)#" )
        .def("HVectorialPart",
             (const gp_Mat & (gp_Trsf::*)() const) static_cast<const gp_Mat & (gp_Trsf::*)() const>(&gp_Trsf::HVectorialPart),
             R"#(Computes the homogeneous vectorial part of the transformation. It is a 3*3 matrix which doesn't include the scale factor. In other words, the vectorial part of this transformation is equal to its homogeneous vectorial part, multiplied by the scale factor. The coefficients of this matrix must be multiplied by the scale factor to obtain the coefficients of the transformation.)#" )
        .def("Value",
             (Standard_Real (gp_Trsf::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (gp_Trsf::*)( const Standard_Integer , const Standard_Integer ) const>(&gp_Trsf::Value),
             R"#(Returns the coefficients of the transformation's matrix. It is a 3 rows * 4 columns matrix. This coefficient includes the scale factor. Raises OutOfRanged if Row < 1 or Row > 3 or Col < 1 or Col > 4)#"  , py::arg("Row"),  py::arg("Col"))
        .def("Form",
             (gp_TrsfForm (gp_Trsf::*)() const) static_cast<gp_TrsfForm (gp_Trsf::*)() const>(&gp_Trsf::Form),
             R"#(Returns the nature of the transformation. It can be: an identity transformation, a rotation, a translation, a mirror transformation (relative to a point, an axis or a plane), a scaling transformation, or a compound transformation.)#" )
        .def("ScaleFactor",
             (Standard_Real (gp_Trsf::*)() const) static_cast<Standard_Real (gp_Trsf::*)() const>(&gp_Trsf::ScaleFactor),
             R"#(Returns the scale factor.)#" )
        .def("Inverted",
             (gp_Trsf (gp_Trsf::*)() const) static_cast<gp_Trsf (gp_Trsf::*)() const>(&gp_Trsf::Inverted),
             R"#(Computes the reverse transformation Raises an exception if the matrix of the transformation is not inversible, it means that the scale factor is lower or equal to Resolution from package gp. Computes the transformation composed with T and <me>. In a C++ implementation you can also write Tcomposed = <me> * T. Example : Trsf T1, T2, Tcomp; ............... Tcomp = T2.Multiplied(T1); // or (Tcomp = T2 * T1) Pnt P1(10.,3.,4.); Pnt P2 = P1.Transformed(Tcomp); //using Tcomp Pnt P3 = P1.Transformed(T1); //using T1 then T2 P3.Transform(T2); // P3 = P2 !!!)#" )
        .def("Multiplied",
             (gp_Trsf (gp_Trsf::*)( const gp_Trsf & ) const) static_cast<gp_Trsf (gp_Trsf::*)( const gp_Trsf & ) const>(&gp_Trsf::Multiplied),
             R"#(None)#"  , py::arg("T"))
        .def("Powered",
             (gp_Trsf (gp_Trsf::*)( const Standard_Integer ) const) static_cast<gp_Trsf (gp_Trsf::*)( const Standard_Integer ) const>(&gp_Trsf::Powered),
             R"#(Computes the following composition of transformations <me> * <me> * .......* <me>, N time. if N = 0 <me> = Identity if N < 0 <me> = <me>.Inverse() *...........* <me>.Inverse().)#"  , py::arg("N"))
        .def("Transforms",
             (void (gp_Trsf::*)( gp_XYZ & ) const) static_cast<void (gp_Trsf::*)( gp_XYZ & ) const>(&gp_Trsf::Transforms),
             R"#(Transformation of a triplet XYZ with a Trsf)#"  , py::arg("Coord"))
    // methods using call by reference i.s.o. return
        .def("Transforms",
             []( gp_Trsf &self   ){ Standard_Real  X; Standard_Real  Y; Standard_Real  Z; self.Transforms(X,Y,Z); return std::make_tuple(X,Y,Z); },
             R"#(None)#" )
        .def("Transforms",
             []( gp_Trsf &self   ){ Standard_Real  X; Standard_Real  Y; Standard_Real  Z; self.Transforms(X,Y,Z); return std::make_tuple(X,Y,Z); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
        .def("__mul__",
             (gp_Trsf (gp_Trsf::*)( const gp_Trsf & ) const) static_cast<gp_Trsf (gp_Trsf::*)( const gp_Trsf & ) const>(&gp_Trsf::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("T"))
        .def("__rmul__",
             (gp_Trsf (gp_Trsf::*)( const gp_Trsf & ) const) static_cast<gp_Trsf (gp_Trsf::*)( const gp_Trsf & ) const>(&gp_Trsf::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("T"))
        .def("__imul__",
             (void (gp_Trsf::*)( const gp_Trsf & ) ) static_cast<void (gp_Trsf::*)( const gp_Trsf & ) >(&gp_Trsf::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("T"))
    // additional methods and static methods
;


    static_cast<py::class_<gp_Trsf2d , shared_ptr<gp_Trsf2d> >>(m.attr("gp_Trsf2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Trsf & >()  , py::arg("T") )
    // custom constructors
    // methods
        .def("SetMirror",
             (void (gp_Trsf2d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Trsf2d::*)( const gp_Pnt2d & ) >(&gp_Trsf2d::SetMirror),
             R"#(Changes the transformation into a symmetrical transformation. P is the center of the symmetry.)#"  , py::arg("P"))
        .def("SetMirror",
             (void (gp_Trsf2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Trsf2d::*)( const gp_Ax2d & ) >(&gp_Trsf2d::SetMirror),
             R"#(Changes the transformation into a symmetrical transformation. A is the center of the axial symmetry.)#"  , py::arg("A"))
        .def("SetRotation",
             (void (gp_Trsf2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Trsf2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Trsf2d::SetRotation),
             R"#(Changes the transformation into a rotation. P is the rotation's center and Ang is the angular value of the rotation in radian.)#"  , py::arg("P"),  py::arg("Ang"))
        .def("SetScale",
             (void (gp_Trsf2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Trsf2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Trsf2d::SetScale),
             R"#(Changes the transformation into a scale. P is the center of the scale and S is the scaling value.)#"  , py::arg("P"),  py::arg("S"))
        .def("SetTransformation",
             (void (gp_Trsf2d::*)( const gp_Ax2d & , const gp_Ax2d & ) ) static_cast<void (gp_Trsf2d::*)( const gp_Ax2d & , const gp_Ax2d & ) >(&gp_Trsf2d::SetTransformation),
             R"#(Changes a transformation allowing passage from the coordinate system "FromSystem1" to the coordinate system "ToSystem2".)#"  , py::arg("FromSystem1"),  py::arg("ToSystem2"))
        .def("SetTransformation",
             (void (gp_Trsf2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Trsf2d::*)( const gp_Ax2d & ) >(&gp_Trsf2d::SetTransformation),
             R"#(Changes the transformation allowing passage from the basic coordinate system {P(0.,0.,0.), VX (1.,0.,0.), VY (0.,1.,0.)} to the local coordinate system defined with the Ax2d ToSystem.)#"  , py::arg("ToSystem"))
        .def("SetTranslation",
             (void (gp_Trsf2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Trsf2d::*)( const gp_Vec2d & ) >(&gp_Trsf2d::SetTranslation),
             R"#(Changes the transformation into a translation. V is the vector of the translation.)#"  , py::arg("V"))
        .def("SetTranslation",
             (void (gp_Trsf2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (gp_Trsf2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&gp_Trsf2d::SetTranslation),
             R"#(Makes the transformation into a translation from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetTranslationPart",
             (void (gp_Trsf2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Trsf2d::*)( const gp_Vec2d & ) >(&gp_Trsf2d::SetTranslationPart),
             R"#(Replaces the translation vector with V.)#"  , py::arg("V"))
        .def("SetScaleFactor",
             (void (gp_Trsf2d::*)( const Standard_Real ) ) static_cast<void (gp_Trsf2d::*)( const Standard_Real ) >(&gp_Trsf2d::SetScaleFactor),
             R"#(Modifies the scale factor.)#"  , py::arg("S"))
        .def("IsNegative",
             (Standard_Boolean (gp_Trsf2d::*)() const) static_cast<Standard_Boolean (gp_Trsf2d::*)() const>(&gp_Trsf2d::IsNegative),
             R"#(Returns true if the determinant of the vectorial part of this transformation is negative..)#" )
        .def("Form",
             (gp_TrsfForm (gp_Trsf2d::*)() const) static_cast<gp_TrsfForm (gp_Trsf2d::*)() const>(&gp_Trsf2d::Form),
             R"#(Returns the nature of the transformation. It can be an identity transformation, a rotation, a translation, a mirror (relative to a point or an axis), a scaling transformation, or a compound transformation.)#" )
        .def("ScaleFactor",
             (Standard_Real (gp_Trsf2d::*)() const) static_cast<Standard_Real (gp_Trsf2d::*)() const>(&gp_Trsf2d::ScaleFactor),
             R"#(Returns the scale factor.)#" )
        .def("TranslationPart",
             (const gp_XY & (gp_Trsf2d::*)() const) static_cast<const gp_XY & (gp_Trsf2d::*)() const>(&gp_Trsf2d::TranslationPart),
             R"#(Returns the translation part of the transformation's matrix)#" )
        .def("VectorialPart",
             (gp_Mat2d (gp_Trsf2d::*)() const) static_cast<gp_Mat2d (gp_Trsf2d::*)() const>(&gp_Trsf2d::VectorialPart),
             R"#(Returns the vectorial part of the transformation. It is a 2*2 matrix which includes the scale factor.)#" )
        .def("HVectorialPart",
             (const gp_Mat2d & (gp_Trsf2d::*)() const) static_cast<const gp_Mat2d & (gp_Trsf2d::*)() const>(&gp_Trsf2d::HVectorialPart),
             R"#(Returns the homogeneous vectorial part of the transformation. It is a 2*2 matrix which doesn't include the scale factor. The coefficients of this matrix must be multiplied by the scale factor to obtain the coefficients of the transformation.)#" )
        .def("RotationPart",
             (Standard_Real (gp_Trsf2d::*)() const) static_cast<Standard_Real (gp_Trsf2d::*)() const>(&gp_Trsf2d::RotationPart),
             R"#(Returns the angle corresponding to the rotational component of the transformation matrix (operation opposite to SetRotation()).)#" )
        .def("Value",
             (Standard_Real (gp_Trsf2d::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (gp_Trsf2d::*)( const Standard_Integer , const Standard_Integer ) const>(&gp_Trsf2d::Value),
             R"#(Returns the coefficients of the transformation's matrix. It is a 2 rows * 3 columns matrix. Raises OutOfRange if Row < 1 or Row > 2 or Col < 1 or Col > 3)#"  , py::arg("Row"),  py::arg("Col"))
        .def("Invert",
             (void (gp_Trsf2d::*)() ) static_cast<void (gp_Trsf2d::*)() >(&gp_Trsf2d::Invert),
             R"#(None)#" )
        .def("Inverted",
             (gp_Trsf2d (gp_Trsf2d::*)() const) static_cast<gp_Trsf2d (gp_Trsf2d::*)() const>(&gp_Trsf2d::Inverted),
             R"#(Computes the reverse transformation. Raises an exception if the matrix of the transformation is not inversible, it means that the scale factor is lower or equal to Resolution from package gp.)#" )
        .def("Multiplied",
             (gp_Trsf2d (gp_Trsf2d::*)( const gp_Trsf2d & ) const) static_cast<gp_Trsf2d (gp_Trsf2d::*)( const gp_Trsf2d & ) const>(&gp_Trsf2d::Multiplied),
             R"#(None)#"  , py::arg("T"))
        .def("Multiply",
             (void (gp_Trsf2d::*)( const gp_Trsf2d & ) ) static_cast<void (gp_Trsf2d::*)( const gp_Trsf2d & ) >(&gp_Trsf2d::Multiply),
             R"#(Computes the transformation composed from <me> and T. <me> = <me> * T)#"  , py::arg("T"))
        .def("PreMultiply",
             (void (gp_Trsf2d::*)( const gp_Trsf2d & ) ) static_cast<void (gp_Trsf2d::*)( const gp_Trsf2d & ) >(&gp_Trsf2d::PreMultiply),
             R"#(Computes the transformation composed from <me> and T. <me> = T * <me>)#"  , py::arg("T"))
        .def("Power",
             (void (gp_Trsf2d::*)( const Standard_Integer ) ) static_cast<void (gp_Trsf2d::*)( const Standard_Integer ) >(&gp_Trsf2d::Power),
             R"#(None)#"  , py::arg("N"))
        .def("Powered",
             (gp_Trsf2d (gp_Trsf2d::*)( const Standard_Integer ) ) static_cast<gp_Trsf2d (gp_Trsf2d::*)( const Standard_Integer ) >(&gp_Trsf2d::Powered),
             R"#(Computes the following composition of transformations <me> * <me> * .......* <me>, N time. if N = 0 <me> = Identity if N < 0 <me> = <me>.Inverse() *...........* <me>.Inverse().)#"  , py::arg("N"))
        .def("Transforms",
             (void (gp_Trsf2d::*)( gp_XY & ) const) static_cast<void (gp_Trsf2d::*)( gp_XY & ) const>(&gp_Trsf2d::Transforms),
             R"#(Transforms a doublet XY with a Trsf2d)#"  , py::arg("Coord"))
        .def("SetValues",
             (void (gp_Trsf2d::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (gp_Trsf2d::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&gp_Trsf2d::SetValues),
             R"#(Sets the coefficients of the transformation. The transformation of the point x,y is the point x',y' with :)#"  , py::arg("a11"),  py::arg("a12"),  py::arg("a13"),  py::arg("a21"),  py::arg("a22"),  py::arg("a23"))
        .def("SetMirror",
             (void (gp_Trsf2d::*)( const gp_Pnt2d & ) ) static_cast<void (gp_Trsf2d::*)( const gp_Pnt2d & ) >(&gp_Trsf2d::SetMirror),
             R"#(Changes the transformation into a symmetrical transformation. P is the center of the symmetry.)#"  , py::arg("P"))
        .def("SetRotation",
             (void (gp_Trsf2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Trsf2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Trsf2d::SetRotation),
             R"#(Changes the transformation into a rotation. P is the rotation's center and Ang is the angular value of the rotation in radian.)#"  , py::arg("P"),  py::arg("Ang"))
        .def("SetScale",
             (void (gp_Trsf2d::*)( const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (gp_Trsf2d::*)( const gp_Pnt2d & , const Standard_Real ) >(&gp_Trsf2d::SetScale),
             R"#(Changes the transformation into a scale. P is the center of the scale and S is the scaling value.)#"  , py::arg("P"),  py::arg("S"))
        .def("SetTranslation",
             (void (gp_Trsf2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Trsf2d::*)( const gp_Vec2d & ) >(&gp_Trsf2d::SetTranslation),
             R"#(Changes the transformation into a translation. V is the vector of the translation.)#"  , py::arg("V"))
        .def("SetTranslation",
             (void (gp_Trsf2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (gp_Trsf2d::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&gp_Trsf2d::SetTranslation),
             R"#(Makes the transformation into a translation from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("IsNegative",
             (Standard_Boolean (gp_Trsf2d::*)() const) static_cast<Standard_Boolean (gp_Trsf2d::*)() const>(&gp_Trsf2d::IsNegative),
             R"#(Returns true if the determinant of the vectorial part of this transformation is negative..)#" )
        .def("TranslationPart",
             (const gp_XY & (gp_Trsf2d::*)() const) static_cast<const gp_XY & (gp_Trsf2d::*)() const>(&gp_Trsf2d::TranslationPart),
             R"#(Returns the translation part of the transformation's matrix)#" )
        .def("HVectorialPart",
             (const gp_Mat2d & (gp_Trsf2d::*)() const) static_cast<const gp_Mat2d & (gp_Trsf2d::*)() const>(&gp_Trsf2d::HVectorialPart),
             R"#(Returns the homogeneous vectorial part of the transformation. It is a 2*2 matrix which doesn't include the scale factor. The coefficients of this matrix must be multiplied by the scale factor to obtain the coefficients of the transformation.)#" )
        .def("Value",
             (Standard_Real (gp_Trsf2d::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (gp_Trsf2d::*)( const Standard_Integer , const Standard_Integer ) const>(&gp_Trsf2d::Value),
             R"#(Returns the coefficients of the transformation's matrix. It is a 2 rows * 3 columns matrix. Raises OutOfRange if Row < 1 or Row > 2 or Col < 1 or Col > 3)#"  , py::arg("Row"),  py::arg("Col"))
        .def("Form",
             (gp_TrsfForm (gp_Trsf2d::*)() const) static_cast<gp_TrsfForm (gp_Trsf2d::*)() const>(&gp_Trsf2d::Form),
             R"#(Returns the nature of the transformation. It can be an identity transformation, a rotation, a translation, a mirror (relative to a point or an axis), a scaling transformation, or a compound transformation.)#" )
        .def("ScaleFactor",
             (Standard_Real (gp_Trsf2d::*)() const) static_cast<Standard_Real (gp_Trsf2d::*)() const>(&gp_Trsf2d::ScaleFactor),
             R"#(Returns the scale factor.)#" )
        .def("Inverted",
             (gp_Trsf2d (gp_Trsf2d::*)() const) static_cast<gp_Trsf2d (gp_Trsf2d::*)() const>(&gp_Trsf2d::Inverted),
             R"#(Computes the reverse transformation. Raises an exception if the matrix of the transformation is not inversible, it means that the scale factor is lower or equal to Resolution from package gp.)#" )
        .def("Multiplied",
             (gp_Trsf2d (gp_Trsf2d::*)( const gp_Trsf2d & ) const) static_cast<gp_Trsf2d (gp_Trsf2d::*)( const gp_Trsf2d & ) const>(&gp_Trsf2d::Multiplied),
             R"#(None)#"  , py::arg("T"))
        .def("Powered",
             (gp_Trsf2d (gp_Trsf2d::*)( const Standard_Integer ) ) static_cast<gp_Trsf2d (gp_Trsf2d::*)( const Standard_Integer ) >(&gp_Trsf2d::Powered),
             R"#(Computes the following composition of transformations <me> * <me> * .......* <me>, N time. if N = 0 <me> = Identity if N < 0 <me> = <me>.Inverse() *...........* <me>.Inverse().)#"  , py::arg("N"))
        .def("Transforms",
             (void (gp_Trsf2d::*)( gp_XY & ) const) static_cast<void (gp_Trsf2d::*)( gp_XY & ) const>(&gp_Trsf2d::Transforms),
             R"#(Transforms a doublet XY with a Trsf2d)#"  , py::arg("Coord"))
    // methods using call by reference i.s.o. return
        .def("Transforms",
             []( gp_Trsf2d &self   ){ Standard_Real  X; Standard_Real  Y; self.Transforms(X,Y); return std::make_tuple(X,Y); },
             R"#(None)#" )
        .def("Transforms",
             []( gp_Trsf2d &self   ){ Standard_Real  X; Standard_Real  Y; self.Transforms(X,Y); return std::make_tuple(X,Y); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
        .def("__mul__",
             (gp_Trsf2d (gp_Trsf2d::*)( const gp_Trsf2d & ) const) static_cast<gp_Trsf2d (gp_Trsf2d::*)( const gp_Trsf2d & ) const>(&gp_Trsf2d::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("T"))
        .def("__rmul__",
             (gp_Trsf2d (gp_Trsf2d::*)( const gp_Trsf2d & ) const) static_cast<gp_Trsf2d (gp_Trsf2d::*)( const gp_Trsf2d & ) const>(&gp_Trsf2d::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("T"))
        .def("__imul__",
             (void (gp_Trsf2d::*)( const gp_Trsf2d & ) ) static_cast<void (gp_Trsf2d::*)( const gp_Trsf2d & ) >(&gp_Trsf2d::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("T"))
    // additional methods and static methods
;


    static_cast<py::class_<gp_Vec , shared_ptr<gp_Vec> >>(m.attr("gp_Vec"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Dir & >()  , py::arg("V") )
        .def(py::init< const gp_XYZ & >()  , py::arg("Coord") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Xv"),  py::arg("Yv"),  py::arg("Zv") )
        .def(py::init< const gp_Pnt &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("P2") )
    // custom constructors
    // methods
        .def("SetCoord",
             (void (gp_Vec::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_Vec::*)( const Standard_Integer , const Standard_Real ) >(&gp_Vec::SetCoord),
             R"#(Changes the coordinate of range Index Index = 1 => X is modified Index = 2 => Y is modified Index = 3 => Z is modified Raised if Index != {1, 2, 3}.)#"  , py::arg("Index"),  py::arg("Xi"))
        .def("SetCoord",
             (void (gp_Vec::*)( const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (gp_Vec::*)( const Standard_Real , const Standard_Real , const Standard_Real ) >(&gp_Vec::SetCoord),
             R"#(For this vector, assigns - the values Xv, Yv and Zv to its three coordinates.)#"  , py::arg("Xv"),  py::arg("Yv"),  py::arg("Zv"))
        .def("SetX",
             (void (gp_Vec::*)( const Standard_Real ) ) static_cast<void (gp_Vec::*)( const Standard_Real ) >(&gp_Vec::SetX),
             R"#(Assigns the given value to the X coordinate of this vector.)#"  , py::arg("X"))
        .def("SetY",
             (void (gp_Vec::*)( const Standard_Real ) ) static_cast<void (gp_Vec::*)( const Standard_Real ) >(&gp_Vec::SetY),
             R"#(Assigns the given value to the X coordinate of this vector.)#"  , py::arg("Y"))
        .def("SetZ",
             (void (gp_Vec::*)( const Standard_Real ) ) static_cast<void (gp_Vec::*)( const Standard_Real ) >(&gp_Vec::SetZ),
             R"#(Assigns the given value to the X coordinate of this vector.)#"  , py::arg("Z"))
        .def("SetXYZ",
             (void (gp_Vec::*)( const gp_XYZ & ) ) static_cast<void (gp_Vec::*)( const gp_XYZ & ) >(&gp_Vec::SetXYZ),
             R"#(Assigns the three coordinates of Coord to this vector.)#"  , py::arg("Coord"))
        .def("Coord",
             (Standard_Real (gp_Vec::*)( const Standard_Integer ) const) static_cast<Standard_Real (gp_Vec::*)( const Standard_Integer ) const>(&gp_Vec::Coord),
             R"#(Returns the coordinate of range Index : Index = 1 => X is returned Index = 2 => Y is returned Index = 3 => Z is returned Raised if Index != {1, 2, 3}.)#"  , py::arg("Index"))
        .def("X",
             (Standard_Real (gp_Vec::*)() const) static_cast<Standard_Real (gp_Vec::*)() const>(&gp_Vec::X),
             R"#(For this vector, returns its X coordinate.)#" )
        .def("Y",
             (Standard_Real (gp_Vec::*)() const) static_cast<Standard_Real (gp_Vec::*)() const>(&gp_Vec::Y),
             R"#(For this vector, returns its Y coordinate.)#" )
        .def("Z",
             (Standard_Real (gp_Vec::*)() const) static_cast<Standard_Real (gp_Vec::*)() const>(&gp_Vec::Z),
             R"#(For this vector, returns its Z coordinate.)#" )
        .def("XYZ",
             (const gp_XYZ & (gp_Vec::*)() const) static_cast<const gp_XYZ & (gp_Vec::*)() const>(&gp_Vec::XYZ),
             R"#(For this vector, returns - its three coordinates as a number triple)#" )
        .def("IsEqual",
             (Standard_Boolean (gp_Vec::*)( const gp_Vec & , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Vec::*)( const gp_Vec & , const Standard_Real , const Standard_Real ) const>(&gp_Vec::IsEqual),
             R"#(Returns True if the two vectors have the same magnitude value and the same direction. The precision values are LinearTolerance for the magnitude and AngularTolerance for the direction.)#"  , py::arg("Other"),  py::arg("LinearTolerance"),  py::arg("AngularTolerance"))
        .def("IsNormal",
             (Standard_Boolean (gp_Vec::*)( const gp_Vec & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Vec::*)( const gp_Vec & , const Standard_Real ) const>(&gp_Vec::IsNormal),
             R"#(Returns True if abs(<me>.Angle(Other) - PI/2.) <= AngularTolerance Raises VectorWithNullMagnitude if <me>.Magnitude() <= Resolution or Other.Magnitude() <= Resolution from gp)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsOpposite",
             (Standard_Boolean (gp_Vec::*)( const gp_Vec & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Vec::*)( const gp_Vec & , const Standard_Real ) const>(&gp_Vec::IsOpposite),
             R"#(Returns True if PI - <me>.Angle(Other) <= AngularTolerance Raises VectorWithNullMagnitude if <me>.Magnitude() <= Resolution or Other.Magnitude() <= Resolution from gp)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsParallel",
             (Standard_Boolean (gp_Vec::*)( const gp_Vec & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Vec::*)( const gp_Vec & , const Standard_Real ) const>(&gp_Vec::IsParallel),
             R"#(Returns True if Angle(<me>, Other) <= AngularTolerance or PI - Angle(<me>, Other) <= AngularTolerance This definition means that two parallel vectors cannot define a plane but two vectors with opposite directions are considered as parallel. Raises VectorWithNullMagnitude if <me>.Magnitude() <= Resolution or Other.Magnitude() <= Resolution from gp)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("Angle",
             (Standard_Real (gp_Vec::*)( const gp_Vec & ) const) static_cast<Standard_Real (gp_Vec::*)( const gp_Vec & ) const>(&gp_Vec::Angle),
             R"#(Computes the angular value between <me> and <Other> Returns the angle value between 0 and PI in radian. Raises VectorWithNullMagnitude if <me>.Magnitude() <= Resolution from gp or Other.Magnitude() <= Resolution because the angular value is indefinite if one of the vectors has a null magnitude.)#"  , py::arg("Other"))
        .def("AngleWithRef",
             (Standard_Real (gp_Vec::*)( const gp_Vec & , const gp_Vec & ) const) static_cast<Standard_Real (gp_Vec::*)( const gp_Vec & , const gp_Vec & ) const>(&gp_Vec::AngleWithRef),
             R"#(Computes the angle, in radians, between this vector and vector Other. The result is a value between -Pi and Pi. For this, VRef defines the positive sense of rotation: the angular value is positive, if the cross product this ^ Other has the same orientation as VRef relative to the plane defined by the vectors this and Other. Otherwise, the angular value is negative. Exceptions gp_VectorWithNullMagnitude if the magnitude of this vector, the vector Other, or the vector VRef is less than or equal to gp::Resolution(). Standard_DomainError if this vector, the vector Other, and the vector VRef are coplanar, unless this vector and the vector Other are parallel.)#"  , py::arg("Other"),  py::arg("VRef"))
        .def("Magnitude",
             (Standard_Real (gp_Vec::*)() const) static_cast<Standard_Real (gp_Vec::*)() const>(&gp_Vec::Magnitude),
             R"#(Computes the magnitude of this vector.)#" )
        .def("SquareMagnitude",
             (Standard_Real (gp_Vec::*)() const) static_cast<Standard_Real (gp_Vec::*)() const>(&gp_Vec::SquareMagnitude),
             R"#(Computes the square magnitude of this vector.)#" )
        .def("Add",
             (void (gp_Vec::*)( const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const gp_Vec & ) >(&gp_Vec::Add),
             R"#(Adds two vectors)#"  , py::arg("Other"))
        .def("Added",
             (gp_Vec (gp_Vec::*)( const gp_Vec & ) const) static_cast<gp_Vec (gp_Vec::*)( const gp_Vec & ) const>(&gp_Vec::Added),
             R"#(Adds two vectors)#"  , py::arg("Other"))
        .def("Subtract",
             (void (gp_Vec::*)( const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const gp_Vec & ) >(&gp_Vec::Subtract),
             R"#(Subtracts two vectors)#"  , py::arg("Right"))
        .def("Subtracted",
             (gp_Vec (gp_Vec::*)( const gp_Vec & ) const) static_cast<gp_Vec (gp_Vec::*)( const gp_Vec & ) const>(&gp_Vec::Subtracted),
             R"#(Subtracts two vectors)#"  , py::arg("Right"))
        .def("Multiply",
             (void (gp_Vec::*)( const Standard_Real ) ) static_cast<void (gp_Vec::*)( const Standard_Real ) >(&gp_Vec::Multiply),
             R"#(Multiplies a vector by a scalar)#"  , py::arg("Scalar"))
        .def("Multiplied",
             (gp_Vec (gp_Vec::*)( const Standard_Real ) const) static_cast<gp_Vec (gp_Vec::*)( const Standard_Real ) const>(&gp_Vec::Multiplied),
             R"#(Multiplies a vector by a scalar)#"  , py::arg("Scalar"))
        .def("Divide",
             (void (gp_Vec::*)( const Standard_Real ) ) static_cast<void (gp_Vec::*)( const Standard_Real ) >(&gp_Vec::Divide),
             R"#(Divides a vector by a scalar)#"  , py::arg("Scalar"))
        .def("Divided",
             (gp_Vec (gp_Vec::*)( const Standard_Real ) const) static_cast<gp_Vec (gp_Vec::*)( const Standard_Real ) const>(&gp_Vec::Divided),
             R"#(Divides a vector by a scalar)#"  , py::arg("Scalar"))
        .def("Cross",
             (void (gp_Vec::*)( const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const gp_Vec & ) >(&gp_Vec::Cross),
             R"#(computes the cross product between two vectors)#"  , py::arg("Right"))
        .def("Crossed",
             (gp_Vec (gp_Vec::*)( const gp_Vec & ) const) static_cast<gp_Vec (gp_Vec::*)( const gp_Vec & ) const>(&gp_Vec::Crossed),
             R"#(computes the cross product between two vectors)#"  , py::arg("Right"))
        .def("CrossMagnitude",
             (Standard_Real (gp_Vec::*)( const gp_Vec & ) const) static_cast<Standard_Real (gp_Vec::*)( const gp_Vec & ) const>(&gp_Vec::CrossMagnitude),
             R"#(Computes the magnitude of the cross product between <me> and Right. Returns || <me> ^ Right ||)#"  , py::arg("Right"))
        .def("CrossSquareMagnitude",
             (Standard_Real (gp_Vec::*)( const gp_Vec & ) const) static_cast<Standard_Real (gp_Vec::*)( const gp_Vec & ) const>(&gp_Vec::CrossSquareMagnitude),
             R"#(Computes the square magnitude of the cross product between <me> and Right. Returns || <me> ^ Right ||**2)#"  , py::arg("Right"))
        .def("CrossCross",
             (void (gp_Vec::*)( const gp_Vec & , const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const gp_Vec & , const gp_Vec & ) >(&gp_Vec::CrossCross),
             R"#(Computes the triple vector product. <me> ^= (V1 ^ V2))#"  , py::arg("V1"),  py::arg("V2"))
        .def("CrossCrossed",
             (gp_Vec (gp_Vec::*)( const gp_Vec & , const gp_Vec & ) const) static_cast<gp_Vec (gp_Vec::*)( const gp_Vec & , const gp_Vec & ) const>(&gp_Vec::CrossCrossed),
             R"#(Computes the triple vector product. <me> ^ (V1 ^ V2))#"  , py::arg("V1"),  py::arg("V2"))
        .def("Dot",
             (Standard_Real (gp_Vec::*)( const gp_Vec & ) const) static_cast<Standard_Real (gp_Vec::*)( const gp_Vec & ) const>(&gp_Vec::Dot),
             R"#(computes the scalar product)#"  , py::arg("Other"))
        .def("DotCross",
             (Standard_Real (gp_Vec::*)( const gp_Vec & , const gp_Vec & ) const) static_cast<Standard_Real (gp_Vec::*)( const gp_Vec & , const gp_Vec & ) const>(&gp_Vec::DotCross),
             R"#(Computes the triple scalar product <me> * (V1 ^ V2).)#"  , py::arg("V1"),  py::arg("V2"))
        .def("Normalize",
             (void (gp_Vec::*)() ) static_cast<void (gp_Vec::*)() >(&gp_Vec::Normalize),
             R"#(normalizes a vector Raises an exception if the magnitude of the vector is lower or equal to Resolution from gp.)#" )
        .def("Normalized",
             (gp_Vec (gp_Vec::*)() const) static_cast<gp_Vec (gp_Vec::*)() const>(&gp_Vec::Normalized),
             R"#(normalizes a vector Raises an exception if the magnitude of the vector is lower or equal to Resolution from gp.)#" )
        .def("Reverse",
             (void (gp_Vec::*)() ) static_cast<void (gp_Vec::*)() >(&gp_Vec::Reverse),
             R"#(Reverses the direction of a vector)#" )
        .def("Reversed",
             (gp_Vec (gp_Vec::*)() const) static_cast<gp_Vec (gp_Vec::*)() const>(&gp_Vec::Reversed),
             R"#(Reverses the direction of a vector)#" )
        .def("SetLinearForm",
             (void (gp_Vec::*)( const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & , const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & , const gp_Vec & ) >(&gp_Vec::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * V1 + A2 * V2 + A3 * V3 + V4)#"  , py::arg("A1"),  py::arg("V1"),  py::arg("A2"),  py::arg("V2"),  py::arg("A3"),  py::arg("V3"),  py::arg("V4"))
        .def("SetLinearForm",
             (void (gp_Vec::*)( const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & ) >(&gp_Vec::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * V1 + A2 * V2 + A3 * V3)#"  , py::arg("A1"),  py::arg("V1"),  py::arg("A2"),  py::arg("V2"),  py::arg("A3"),  py::arg("V3"))
        .def("SetLinearForm",
             (void (gp_Vec::*)( const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & , const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & , const gp_Vec & ) >(&gp_Vec::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * V1 + A2 * V2 + V3)#"  , py::arg("A1"),  py::arg("V1"),  py::arg("A2"),  py::arg("V2"),  py::arg("V3"))
        .def("SetLinearForm",
             (void (gp_Vec::*)( const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & ) >(&gp_Vec::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * V1 + A2 * V2)#"  , py::arg("A1"),  py::arg("V1"),  py::arg("A2"),  py::arg("V2"))
        .def("SetLinearForm",
             (void (gp_Vec::*)( const Standard_Real , const gp_Vec & , const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const Standard_Real , const gp_Vec & , const gp_Vec & ) >(&gp_Vec::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * V1 + V2)#"  , py::arg("A1"),  py::arg("V1"),  py::arg("V2"))
        .def("SetLinearForm",
             (void (gp_Vec::*)( const gp_Vec & , const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const gp_Vec & , const gp_Vec & ) >(&gp_Vec::SetLinearForm),
             R"#(<me> is set to the following linear form : V1 + V2)#"  , py::arg("V1"),  py::arg("V2"))
        .def("Mirror",
             (void (gp_Vec::*)( const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const gp_Vec & ) >(&gp_Vec::Mirror),
             R"#(None)#"  , py::arg("V"))
        .def("Mirrored",
             (gp_Vec (gp_Vec::*)( const gp_Vec & ) const) static_cast<gp_Vec (gp_Vec::*)( const gp_Vec & ) const>(&gp_Vec::Mirrored),
             R"#(Performs the symmetrical transformation of a vector with respect to the vector V which is the center of the symmetry.)#"  , py::arg("V"))
        .def("Mirror",
             (void (gp_Vec::*)( const gp_Ax1 & ) ) static_cast<void (gp_Vec::*)( const gp_Ax1 & ) >(&gp_Vec::Mirror),
             R"#(None)#"  , py::arg("A1"))
        .def("Mirrored",
             (gp_Vec (gp_Vec::*)( const gp_Ax1 & ) const) static_cast<gp_Vec (gp_Vec::*)( const gp_Ax1 & ) const>(&gp_Vec::Mirrored),
             R"#(Performs the symmetrical transformation of a vector with respect to an axis placement which is the axis of the symmetry.)#"  , py::arg("A1"))
        .def("Mirror",
             (void (gp_Vec::*)( const gp_Ax2 & ) ) static_cast<void (gp_Vec::*)( const gp_Ax2 & ) >(&gp_Vec::Mirror),
             R"#(None)#"  , py::arg("A2"))
        .def("Mirrored",
             (gp_Vec (gp_Vec::*)( const gp_Ax2 & ) const) static_cast<gp_Vec (gp_Vec::*)( const gp_Ax2 & ) const>(&gp_Vec::Mirrored),
             R"#(Performs the symmetrical transformation of a vector with respect to a plane. The axis placement A2 locates the plane of the symmetry : (Location, XDirection, YDirection).)#"  , py::arg("A2"))
        .def("Rotate",
             (void (gp_Vec::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Vec::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Vec::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Vec (gp_Vec::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Vec (gp_Vec::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Vec::Rotated),
             R"#(Rotates a vector. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Vec::*)( const Standard_Real ) ) static_cast<void (gp_Vec::*)( const Standard_Real ) >(&gp_Vec::Scale),
             R"#(None)#"  , py::arg("S"))
        .def("Scaled",
             (gp_Vec (gp_Vec::*)( const Standard_Real ) const) static_cast<gp_Vec (gp_Vec::*)( const Standard_Real ) const>(&gp_Vec::Scaled),
             R"#(Scales a vector. S is the scaling value.)#"  , py::arg("S"))
        .def("Transform",
             (void (gp_Vec::*)( const gp_Trsf & ) ) static_cast<void (gp_Vec::*)( const gp_Trsf & ) >(&gp_Vec::Transform),
             R"#(Transforms a vector with the transformation T.)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Vec (gp_Vec::*)( const gp_Trsf & ) const) static_cast<gp_Vec (gp_Vec::*)( const gp_Trsf & ) const>(&gp_Vec::Transformed),
             R"#(Transforms a vector with the transformation T.)#"  , py::arg("T"))
        .def("SetCoord",
             (void (gp_Vec::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_Vec::*)( const Standard_Integer , const Standard_Real ) >(&gp_Vec::SetCoord),
             R"#(Changes the coordinate of range Index Index = 1 => X is modified Index = 2 => Y is modified Index = 3 => Z is modified Raised if Index != {1, 2, 3}.)#"  , py::arg("Index"),  py::arg("Xi"))
        .def("SetCoord",
             (void (gp_Vec::*)( const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (gp_Vec::*)( const Standard_Real , const Standard_Real , const Standard_Real ) >(&gp_Vec::SetCoord),
             R"#(For this vector, assigns - the values Xv, Yv and Zv to its three coordinates.)#"  , py::arg("Xv"),  py::arg("Yv"),  py::arg("Zv"))
        .def("SetX",
             (void (gp_Vec::*)( const Standard_Real ) ) static_cast<void (gp_Vec::*)( const Standard_Real ) >(&gp_Vec::SetX),
             R"#(Assigns the given value to the X coordinate of this vector.)#"  , py::arg("X"))
        .def("SetY",
             (void (gp_Vec::*)( const Standard_Real ) ) static_cast<void (gp_Vec::*)( const Standard_Real ) >(&gp_Vec::SetY),
             R"#(Assigns the given value to the X coordinate of this vector.)#"  , py::arg("Y"))
        .def("SetZ",
             (void (gp_Vec::*)( const Standard_Real ) ) static_cast<void (gp_Vec::*)( const Standard_Real ) >(&gp_Vec::SetZ),
             R"#(Assigns the given value to the X coordinate of this vector.)#"  , py::arg("Z"))
        .def("SetXYZ",
             (void (gp_Vec::*)( const gp_XYZ & ) ) static_cast<void (gp_Vec::*)( const gp_XYZ & ) >(&gp_Vec::SetXYZ),
             R"#(Assigns the three coordinates of Coord to this vector.)#"  , py::arg("Coord"))
        .def("Coord",
             (Standard_Real (gp_Vec::*)( const Standard_Integer ) const) static_cast<Standard_Real (gp_Vec::*)( const Standard_Integer ) const>(&gp_Vec::Coord),
             R"#(Returns the coordinate of range Index : Index = 1 => X is returned Index = 2 => Y is returned Index = 3 => Z is returned Raised if Index != {1, 2, 3}.)#"  , py::arg("Index"))
        .def("X",
             (Standard_Real (gp_Vec::*)() const) static_cast<Standard_Real (gp_Vec::*)() const>(&gp_Vec::X),
             R"#(For this vector, returns its X coordinate.)#" )
        .def("Y",
             (Standard_Real (gp_Vec::*)() const) static_cast<Standard_Real (gp_Vec::*)() const>(&gp_Vec::Y),
             R"#(For this vector, returns its Y coordinate.)#" )
        .def("Z",
             (Standard_Real (gp_Vec::*)() const) static_cast<Standard_Real (gp_Vec::*)() const>(&gp_Vec::Z),
             R"#(For this vector, returns its Z coordinate.)#" )
        .def("XYZ",
             (const gp_XYZ & (gp_Vec::*)() const) static_cast<const gp_XYZ & (gp_Vec::*)() const>(&gp_Vec::XYZ),
             R"#(For this vector, returns - its three coordinates as a number triple)#" )
        .def("IsNormal",
             (Standard_Boolean (gp_Vec::*)( const gp_Vec & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Vec::*)( const gp_Vec & , const Standard_Real ) const>(&gp_Vec::IsNormal),
             R"#(Returns True if abs(<me>.Angle(Other) - PI/2.) <= AngularTolerance Raises VectorWithNullMagnitude if <me>.Magnitude() <= Resolution or Other.Magnitude() <= Resolution from gp)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsOpposite",
             (Standard_Boolean (gp_Vec::*)( const gp_Vec & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Vec::*)( const gp_Vec & , const Standard_Real ) const>(&gp_Vec::IsOpposite),
             R"#(Returns True if PI - <me>.Angle(Other) <= AngularTolerance Raises VectorWithNullMagnitude if <me>.Magnitude() <= Resolution or Other.Magnitude() <= Resolution from gp)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsParallel",
             (Standard_Boolean (gp_Vec::*)( const gp_Vec & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Vec::*)( const gp_Vec & , const Standard_Real ) const>(&gp_Vec::IsParallel),
             R"#(Returns True if Angle(<me>, Other) <= AngularTolerance or PI - Angle(<me>, Other) <= AngularTolerance This definition means that two parallel vectors cannot define a plane but two vectors with opposite directions are considered as parallel. Raises VectorWithNullMagnitude if <me>.Magnitude() <= Resolution or Other.Magnitude() <= Resolution from gp)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("Angle",
             (Standard_Real (gp_Vec::*)( const gp_Vec & ) const) static_cast<Standard_Real (gp_Vec::*)( const gp_Vec & ) const>(&gp_Vec::Angle),
             R"#(Computes the angular value between <me> and <Other> Returns the angle value between 0 and PI in radian. Raises VectorWithNullMagnitude if <me>.Magnitude() <= Resolution from gp or Other.Magnitude() <= Resolution because the angular value is indefinite if one of the vectors has a null magnitude.)#"  , py::arg("Other"))
        .def("AngleWithRef",
             (Standard_Real (gp_Vec::*)( const gp_Vec & , const gp_Vec & ) const) static_cast<Standard_Real (gp_Vec::*)( const gp_Vec & , const gp_Vec & ) const>(&gp_Vec::AngleWithRef),
             R"#(Computes the angle, in radians, between this vector and vector Other. The result is a value between -Pi and Pi. For this, VRef defines the positive sense of rotation: the angular value is positive, if the cross product this ^ Other has the same orientation as VRef relative to the plane defined by the vectors this and Other. Otherwise, the angular value is negative. Exceptions gp_VectorWithNullMagnitude if the magnitude of this vector, the vector Other, or the vector VRef is less than or equal to gp::Resolution(). Standard_DomainError if this vector, the vector Other, and the vector VRef are coplanar, unless this vector and the vector Other are parallel.)#"  , py::arg("Other"),  py::arg("Vref"))
        .def("Magnitude",
             (Standard_Real (gp_Vec::*)() const) static_cast<Standard_Real (gp_Vec::*)() const>(&gp_Vec::Magnitude),
             R"#(Computes the magnitude of this vector.)#" )
        .def("SquareMagnitude",
             (Standard_Real (gp_Vec::*)() const) static_cast<Standard_Real (gp_Vec::*)() const>(&gp_Vec::SquareMagnitude),
             R"#(Computes the square magnitude of this vector.)#" )
        .def("Add",
             (void (gp_Vec::*)( const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const gp_Vec & ) >(&gp_Vec::Add),
             R"#(Adds two vectors)#"  , py::arg("Other"))
        .def("Added",
             (gp_Vec (gp_Vec::*)( const gp_Vec & ) const) static_cast<gp_Vec (gp_Vec::*)( const gp_Vec & ) const>(&gp_Vec::Added),
             R"#(Adds two vectors)#"  , py::arg("Other"))
        .def("Subtract",
             (void (gp_Vec::*)( const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const gp_Vec & ) >(&gp_Vec::Subtract),
             R"#(Subtracts two vectors)#"  , py::arg("Right"))
        .def("Subtracted",
             (gp_Vec (gp_Vec::*)( const gp_Vec & ) const) static_cast<gp_Vec (gp_Vec::*)( const gp_Vec & ) const>(&gp_Vec::Subtracted),
             R"#(Subtracts two vectors)#"  , py::arg("Right"))
        .def("Multiply",
             (void (gp_Vec::*)( const Standard_Real ) ) static_cast<void (gp_Vec::*)( const Standard_Real ) >(&gp_Vec::Multiply),
             R"#(Multiplies a vector by a scalar)#"  , py::arg("Scalar"))
        .def("Multiplied",
             (gp_Vec (gp_Vec::*)( const Standard_Real ) const) static_cast<gp_Vec (gp_Vec::*)( const Standard_Real ) const>(&gp_Vec::Multiplied),
             R"#(Multiplies a vector by a scalar)#"  , py::arg("Scalar"))
        .def("Divide",
             (void (gp_Vec::*)( const Standard_Real ) ) static_cast<void (gp_Vec::*)( const Standard_Real ) >(&gp_Vec::Divide),
             R"#(Divides a vector by a scalar)#"  , py::arg("Scalar"))
        .def("Divided",
             (gp_Vec (gp_Vec::*)( const Standard_Real ) const) static_cast<gp_Vec (gp_Vec::*)( const Standard_Real ) const>(&gp_Vec::Divided),
             R"#(Divides a vector by a scalar)#"  , py::arg("Scalar"))
        .def("Cross",
             (void (gp_Vec::*)( const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const gp_Vec & ) >(&gp_Vec::Cross),
             R"#(computes the cross product between two vectors)#"  , py::arg("Right"))
        .def("Crossed",
             (gp_Vec (gp_Vec::*)( const gp_Vec & ) const) static_cast<gp_Vec (gp_Vec::*)( const gp_Vec & ) const>(&gp_Vec::Crossed),
             R"#(computes the cross product between two vectors)#"  , py::arg("Right"))
        .def("CrossMagnitude",
             (Standard_Real (gp_Vec::*)( const gp_Vec & ) const) static_cast<Standard_Real (gp_Vec::*)( const gp_Vec & ) const>(&gp_Vec::CrossMagnitude),
             R"#(Computes the magnitude of the cross product between <me> and Right. Returns || <me> ^ Right ||)#"  , py::arg("Right"))
        .def("CrossSquareMagnitude",
             (Standard_Real (gp_Vec::*)( const gp_Vec & ) const) static_cast<Standard_Real (gp_Vec::*)( const gp_Vec & ) const>(&gp_Vec::CrossSquareMagnitude),
             R"#(Computes the square magnitude of the cross product between <me> and Right. Returns || <me> ^ Right ||**2)#"  , py::arg("Right"))
        .def("CrossCross",
             (void (gp_Vec::*)( const gp_Vec & , const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const gp_Vec & , const gp_Vec & ) >(&gp_Vec::CrossCross),
             R"#(Computes the triple vector product. <me> ^= (V1 ^ V2))#"  , py::arg("V1"),  py::arg("V2"))
        .def("CrossCrossed",
             (gp_Vec (gp_Vec::*)( const gp_Vec & , const gp_Vec & ) const) static_cast<gp_Vec (gp_Vec::*)( const gp_Vec & , const gp_Vec & ) const>(&gp_Vec::CrossCrossed),
             R"#(Computes the triple vector product. <me> ^ (V1 ^ V2))#"  , py::arg("V1"),  py::arg("V2"))
        .def("Dot",
             (Standard_Real (gp_Vec::*)( const gp_Vec & ) const) static_cast<Standard_Real (gp_Vec::*)( const gp_Vec & ) const>(&gp_Vec::Dot),
             R"#(computes the scalar product)#"  , py::arg("Other"))
        .def("DotCross",
             (Standard_Real (gp_Vec::*)( const gp_Vec & , const gp_Vec & ) const) static_cast<Standard_Real (gp_Vec::*)( const gp_Vec & , const gp_Vec & ) const>(&gp_Vec::DotCross),
             R"#(Computes the triple scalar product <me> * (V1 ^ V2).)#"  , py::arg("V1"),  py::arg("V2"))
        .def("Normalize",
             (void (gp_Vec::*)() ) static_cast<void (gp_Vec::*)() >(&gp_Vec::Normalize),
             R"#(normalizes a vector Raises an exception if the magnitude of the vector is lower or equal to Resolution from gp.)#" )
        .def("Normalized",
             (gp_Vec (gp_Vec::*)() const) static_cast<gp_Vec (gp_Vec::*)() const>(&gp_Vec::Normalized),
             R"#(normalizes a vector Raises an exception if the magnitude of the vector is lower or equal to Resolution from gp.)#" )
        .def("Reverse",
             (void (gp_Vec::*)() ) static_cast<void (gp_Vec::*)() >(&gp_Vec::Reverse),
             R"#(Reverses the direction of a vector)#" )
        .def("Reversed",
             (gp_Vec (gp_Vec::*)() const) static_cast<gp_Vec (gp_Vec::*)() const>(&gp_Vec::Reversed),
             R"#(Reverses the direction of a vector)#" )
        .def("SetLinearForm",
             (void (gp_Vec::*)( const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & ) >(&gp_Vec::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * V1 + A2 * V2)#"  , py::arg("L"),  py::arg("Left"),  py::arg("R"),  py::arg("Right"))
        .def("SetLinearForm",
             (void (gp_Vec::*)( const Standard_Real , const gp_Vec & , const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const Standard_Real , const gp_Vec & , const gp_Vec & ) >(&gp_Vec::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * V1 + V2)#"  , py::arg("L"),  py::arg("Left"),  py::arg("Right"))
        .def("SetLinearForm",
             (void (gp_Vec::*)( const gp_Vec & , const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const gp_Vec & , const gp_Vec & ) >(&gp_Vec::SetLinearForm),
             R"#(<me> is set to the following linear form : V1 + V2)#"  , py::arg("Left"),  py::arg("Right"))
        .def("SetLinearForm",
             (void (gp_Vec::*)( const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & ) >(&gp_Vec::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * V1 + A2 * V2 + A3 * V3)#"  , py::arg("A1"),  py::arg("V1"),  py::arg("A2"),  py::arg("V2"),  py::arg("A3"),  py::arg("V3"))
        .def("SetLinearForm",
             (void (gp_Vec::*)( const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & , const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & , const gp_Vec & ) >(&gp_Vec::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * V1 + A2 * V2 + V3)#"  , py::arg("A1"),  py::arg("V1"),  py::arg("A2"),  py::arg("V2"),  py::arg("V3"))
        .def("SetLinearForm",
             (void (gp_Vec::*)( const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & , const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & , const Standard_Real , const gp_Vec & , const gp_Vec & ) >(&gp_Vec::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * V1 + A2 * V2 + A3 * V3 + V4)#"  , py::arg("A1"),  py::arg("V1"),  py::arg("A2"),  py::arg("V2"),  py::arg("A3"),  py::arg("V3"),  py::arg("V4"))
        .def("Rotate",
             (void (gp_Vec::*)( const gp_Ax1 & , const Standard_Real ) ) static_cast<void (gp_Vec::*)( const gp_Ax1 & , const Standard_Real ) >(&gp_Vec::Rotate),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Rotated",
             (gp_Vec (gp_Vec::*)( const gp_Ax1 & , const Standard_Real ) const) static_cast<gp_Vec (gp_Vec::*)( const gp_Ax1 & , const Standard_Real ) const>(&gp_Vec::Rotated),
             R"#(Rotates a vector. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (gp_Vec::*)( const Standard_Real ) ) static_cast<void (gp_Vec::*)( const Standard_Real ) >(&gp_Vec::Scale),
             R"#(None)#"  , py::arg("S"))
        .def("Scaled",
             (gp_Vec (gp_Vec::*)( const Standard_Real ) const) static_cast<gp_Vec (gp_Vec::*)( const Standard_Real ) const>(&gp_Vec::Scaled),
             R"#(Scales a vector. S is the scaling value.)#"  , py::arg("S"))
        .def("Transformed",
             (gp_Vec (gp_Vec::*)( const gp_Trsf & ) const) static_cast<gp_Vec (gp_Vec::*)( const gp_Trsf & ) const>(&gp_Vec::Transformed),
             R"#(Transforms a vector with the transformation T.)#"  , py::arg("T"))
    // methods using call by reference i.s.o. return
        .def("Coord",
             []( gp_Vec &self   ){ Standard_Real  Xv; Standard_Real  Yv; Standard_Real  Zv; self.Coord(Xv,Yv,Zv); return std::make_tuple(Xv,Yv,Zv); },
             R"#(For this vector returns its three coordinates Xv, Yv, and Zvinline)#" )
        .def("Coord",
             []( gp_Vec &self   ){ Standard_Real  Xv; Standard_Real  Yv; Standard_Real  Zv; self.Coord(Xv,Yv,Zv); return std::make_tuple(Xv,Yv,Zv); },
             R"#(For this vector returns its three coordinates Xv, Yv, and Zvinline)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
        .def("__iadd__",
             (void (gp_Vec::*)( const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const gp_Vec & ) >(&gp_Vec::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__add__",
             (gp_Vec (gp_Vec::*)( const gp_Vec & ) const) static_cast<gp_Vec (gp_Vec::*)( const gp_Vec & ) const>(&gp_Vec::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__isub__",
             (void (gp_Vec::*)( const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const gp_Vec & ) >(&gp_Vec::operator-=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__sub__",
             (gp_Vec (gp_Vec::*)( const gp_Vec & ) const) static_cast<gp_Vec (gp_Vec::*)( const gp_Vec & ) const>(&gp_Vec::operator-),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__imul__",
             (void (gp_Vec::*)( const Standard_Real ) ) static_cast<void (gp_Vec::*)( const Standard_Real ) >(&gp_Vec::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__mul__",
             (gp_Vec (gp_Vec::*)( const Standard_Real ) const) static_cast<gp_Vec (gp_Vec::*)( const Standard_Real ) const>(&gp_Vec::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__rmul__",
             (gp_Vec (gp_Vec::*)( const Standard_Real ) const) static_cast<gp_Vec (gp_Vec::*)( const Standard_Real ) const>(&gp_Vec::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__itruediv__",
             (void (gp_Vec::*)( const Standard_Real ) ) static_cast<void (gp_Vec::*)( const Standard_Real ) >(&gp_Vec::operator/=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__truediv__",
             (gp_Vec (gp_Vec::*)( const Standard_Real ) const) static_cast<gp_Vec (gp_Vec::*)( const Standard_Real ) const>(&gp_Vec::operator/),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__ipow__",
             (void (gp_Vec::*)( const gp_Vec & ) ) static_cast<void (gp_Vec::*)( const gp_Vec & ) >(&gp_Vec::operator^=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__pow__",
             (gp_Vec (gp_Vec::*)( const gp_Vec & ) const) static_cast<gp_Vec (gp_Vec::*)( const gp_Vec & ) const>(&gp_Vec::operator^),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__mul__",
             (Standard_Real (gp_Vec::*)( const gp_Vec & ) const) static_cast<Standard_Real (gp_Vec::*)( const gp_Vec & ) const>(&gp_Vec::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__rmul__",
             (Standard_Real (gp_Vec::*)( const gp_Vec & ) const) static_cast<Standard_Real (gp_Vec::*)( const gp_Vec & ) const>(&gp_Vec::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__sub__",
             (gp_Vec (gp_Vec::*)() const) static_cast<gp_Vec (gp_Vec::*)() const>(&gp_Vec::operator-),
             py::is_operator(),
             R"#(None)#" )
    // additional methods and static methods
;


    static_cast<py::class_<gp_Vec2d , shared_ptr<gp_Vec2d> >>(m.attr("gp_Vec2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Dir2d & >()  , py::arg("V") )
        .def(py::init< const gp_XY & >()  , py::arg("Coord") )
        .def(py::init< const Standard_Real,const Standard_Real >()  , py::arg("Xv"),  py::arg("Yv") )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("P1"),  py::arg("P2") )
    // custom constructors
    // methods
        .def("SetCoord",
             (void (gp_Vec2d::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_Vec2d::*)( const Standard_Integer , const Standard_Real ) >(&gp_Vec2d::SetCoord),
             R"#(Changes the coordinate of range Index Index = 1 => X is modified Index = 2 => Y is modified Raises OutOfRange if Index != {1, 2}.)#"  , py::arg("Index"),  py::arg("Xi"))
        .def("SetCoord",
             (void (gp_Vec2d::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (gp_Vec2d::*)( const Standard_Real , const Standard_Real ) >(&gp_Vec2d::SetCoord),
             R"#(For this vector, assigns the values Xv and Yv to its two coordinates)#"  , py::arg("Xv"),  py::arg("Yv"))
        .def("SetX",
             (void (gp_Vec2d::*)( const Standard_Real ) ) static_cast<void (gp_Vec2d::*)( const Standard_Real ) >(&gp_Vec2d::SetX),
             R"#(Assigns the given value to the X coordinate of this vector.)#"  , py::arg("X"))
        .def("SetY",
             (void (gp_Vec2d::*)( const Standard_Real ) ) static_cast<void (gp_Vec2d::*)( const Standard_Real ) >(&gp_Vec2d::SetY),
             R"#(Assigns the given value to the Y coordinate of this vector.)#"  , py::arg("Y"))
        .def("SetXY",
             (void (gp_Vec2d::*)( const gp_XY & ) ) static_cast<void (gp_Vec2d::*)( const gp_XY & ) >(&gp_Vec2d::SetXY),
             R"#(Assigns the two coordinates of Coord to this vector.)#"  , py::arg("Coord"))
        .def("Coord",
             (Standard_Real (gp_Vec2d::*)( const Standard_Integer ) const) static_cast<Standard_Real (gp_Vec2d::*)( const Standard_Integer ) const>(&gp_Vec2d::Coord),
             R"#(Returns the coordinate of range Index : Index = 1 => X is returned Index = 2 => Y is returned Raised if Index != {1, 2}.)#"  , py::arg("Index"))
        .def("X",
             (Standard_Real (gp_Vec2d::*)() const) static_cast<Standard_Real (gp_Vec2d::*)() const>(&gp_Vec2d::X),
             R"#(For this vector, returns its X coordinate.)#" )
        .def("Y",
             (Standard_Real (gp_Vec2d::*)() const) static_cast<Standard_Real (gp_Vec2d::*)() const>(&gp_Vec2d::Y),
             R"#(For this vector, returns its Y coordinate.)#" )
        .def("XY",
             (const gp_XY & (gp_Vec2d::*)() const) static_cast<const gp_XY & (gp_Vec2d::*)() const>(&gp_Vec2d::XY),
             R"#(For this vector, returns its two coordinates as a number pair)#" )
        .def("IsEqual",
             (Standard_Boolean (gp_Vec2d::*)( const gp_Vec2d & , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Vec2d::*)( const gp_Vec2d & , const Standard_Real , const Standard_Real ) const>(&gp_Vec2d::IsEqual),
             R"#(Returns True if the two vectors have the same magnitude value and the same direction. The precision values are LinearTolerance for the magnitude and AngularTolerance for the direction.)#"  , py::arg("Other"),  py::arg("LinearTolerance"),  py::arg("AngularTolerance"))
        .def("IsNormal",
             (Standard_Boolean (gp_Vec2d::*)( const gp_Vec2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Vec2d::*)( const gp_Vec2d & , const Standard_Real ) const>(&gp_Vec2d::IsNormal),
             R"#(Returns True if abs(Abs(<me>.Angle(Other)) - PI/2.) <= AngularTolerance Raises VectorWithNullMagnitude if <me>.Magnitude() <= Resolution or Other.Magnitude() <= Resolution from gp.)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsOpposite",
             (Standard_Boolean (gp_Vec2d::*)( const gp_Vec2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Vec2d::*)( const gp_Vec2d & , const Standard_Real ) const>(&gp_Vec2d::IsOpposite),
             R"#(Returns True if PI - Abs(<me>.Angle(Other)) <= AngularTolerance Raises VectorWithNullMagnitude if <me>.Magnitude() <= Resolution or Other.Magnitude() <= Resolution from gp.)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsParallel",
             (Standard_Boolean (gp_Vec2d::*)( const gp_Vec2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Vec2d::*)( const gp_Vec2d & , const Standard_Real ) const>(&gp_Vec2d::IsParallel),
             R"#(Returns true if Abs(Angle(<me>, Other)) <= AngularTolerance or PI - Abs(Angle(<me>, Other)) <= AngularTolerance Two vectors with opposite directions are considered as parallel. Raises VectorWithNullMagnitude if <me>.Magnitude() <= Resolution or Other.Magnitude() <= Resolution from gp)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("Angle",
             (Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const) static_cast<Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const>(&gp_Vec2d::Angle),
             R"#(Computes the angular value between <me> and <Other> returns the angle value between -PI and PI in radian. The orientation is from <me> to Other. The positive sense is the trigonometric sense. Raises VectorWithNullMagnitude if <me>.Magnitude() <= Resolution from gp or Other.Magnitude() <= Resolution because the angular value is indefinite if one of the vectors has a null magnitude.)#"  , py::arg("Other"))
        .def("Magnitude",
             (Standard_Real (gp_Vec2d::*)() const) static_cast<Standard_Real (gp_Vec2d::*)() const>(&gp_Vec2d::Magnitude),
             R"#(Computes the magnitude of this vector.)#" )
        .def("SquareMagnitude",
             (Standard_Real (gp_Vec2d::*)() const) static_cast<Standard_Real (gp_Vec2d::*)() const>(&gp_Vec2d::SquareMagnitude),
             R"#(Computes the square magnitude of this vector.)#" )
        .def("Add",
             (void (gp_Vec2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Vec2d::*)( const gp_Vec2d & ) >(&gp_Vec2d::Add),
             R"#(None)#"  , py::arg("Other"))
        .def("Added",
             (gp_Vec2d (gp_Vec2d::*)( const gp_Vec2d & ) const) static_cast<gp_Vec2d (gp_Vec2d::*)( const gp_Vec2d & ) const>(&gp_Vec2d::Added),
             R"#(Adds two vectors)#"  , py::arg("Other"))
        .def("Crossed",
             (Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const) static_cast<Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const>(&gp_Vec2d::Crossed),
             R"#(Computes the crossing product between two vectors)#"  , py::arg("Right"))
        .def("CrossMagnitude",
             (Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const) static_cast<Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const>(&gp_Vec2d::CrossMagnitude),
             R"#(Computes the magnitude of the cross product between <me> and Right. Returns || <me> ^ Right ||)#"  , py::arg("Right"))
        .def("CrossSquareMagnitude",
             (Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const) static_cast<Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const>(&gp_Vec2d::CrossSquareMagnitude),
             R"#(Computes the square magnitude of the cross product between <me> and Right. Returns || <me> ^ Right ||**2)#"  , py::arg("Right"))
        .def("Divide",
             (void (gp_Vec2d::*)( const Standard_Real ) ) static_cast<void (gp_Vec2d::*)( const Standard_Real ) >(&gp_Vec2d::Divide),
             R"#(None)#"  , py::arg("Scalar"))
        .def("Divided",
             (gp_Vec2d (gp_Vec2d::*)( const Standard_Real ) const) static_cast<gp_Vec2d (gp_Vec2d::*)( const Standard_Real ) const>(&gp_Vec2d::Divided),
             R"#(divides a vector by a scalar)#"  , py::arg("Scalar"))
        .def("Dot",
             (Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const) static_cast<Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const>(&gp_Vec2d::Dot),
             R"#(Computes the scalar product)#"  , py::arg("Other"))
        .def("GetNormal",
             (gp_Vec2d (gp_Vec2d::*)() const) static_cast<gp_Vec2d (gp_Vec2d::*)() const>(&gp_Vec2d::GetNormal),
             R"#(None)#" )
        .def("Multiply",
             (void (gp_Vec2d::*)( const Standard_Real ) ) static_cast<void (gp_Vec2d::*)( const Standard_Real ) >(&gp_Vec2d::Multiply),
             R"#(None)#"  , py::arg("Scalar"))
        .def("Multiplied",
             (gp_Vec2d (gp_Vec2d::*)( const Standard_Real ) const) static_cast<gp_Vec2d (gp_Vec2d::*)( const Standard_Real ) const>(&gp_Vec2d::Multiplied),
             R"#(Normalizes a vector Raises an exception if the magnitude of the vector is lower or equal to Resolution from package gp.)#"  , py::arg("Scalar"))
        .def("Normalize",
             (void (gp_Vec2d::*)() ) static_cast<void (gp_Vec2d::*)() >(&gp_Vec2d::Normalize),
             R"#(None)#" )
        .def("Normalized",
             (gp_Vec2d (gp_Vec2d::*)() const) static_cast<gp_Vec2d (gp_Vec2d::*)() const>(&gp_Vec2d::Normalized),
             R"#(Normalizes a vector Raises an exception if the magnitude of the vector is lower or equal to Resolution from package gp. Reverses the direction of a vector)#" )
        .def("Reverse",
             (void (gp_Vec2d::*)() ) static_cast<void (gp_Vec2d::*)() >(&gp_Vec2d::Reverse),
             R"#(None)#" )
        .def("Reversed",
             (gp_Vec2d (gp_Vec2d::*)() const) static_cast<gp_Vec2d (gp_Vec2d::*)() const>(&gp_Vec2d::Reversed),
             R"#(Reverses the direction of a vector)#" )
        .def("Subtract",
             (void (gp_Vec2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Vec2d::*)( const gp_Vec2d & ) >(&gp_Vec2d::Subtract),
             R"#(Subtracts two vectors)#"  , py::arg("Right"))
        .def("Subtracted",
             (gp_Vec2d (gp_Vec2d::*)( const gp_Vec2d & ) const) static_cast<gp_Vec2d (gp_Vec2d::*)( const gp_Vec2d & ) const>(&gp_Vec2d::Subtracted),
             R"#(Subtracts two vectors)#"  , py::arg("Right"))
        .def("SetLinearForm",
             (void (gp_Vec2d::*)( const Standard_Real , const gp_Vec2d & , const Standard_Real , const gp_Vec2d & , const gp_Vec2d & ) ) static_cast<void (gp_Vec2d::*)( const Standard_Real , const gp_Vec2d & , const Standard_Real , const gp_Vec2d & , const gp_Vec2d & ) >(&gp_Vec2d::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * V1 + A2 * V2 + V3)#"  , py::arg("A1"),  py::arg("V1"),  py::arg("A2"),  py::arg("V2"),  py::arg("V3"))
        .def("SetLinearForm",
             (void (gp_Vec2d::*)( const Standard_Real , const gp_Vec2d & , const Standard_Real , const gp_Vec2d & ) ) static_cast<void (gp_Vec2d::*)( const Standard_Real , const gp_Vec2d & , const Standard_Real , const gp_Vec2d & ) >(&gp_Vec2d::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * V1 + A2 * V2)#"  , py::arg("A1"),  py::arg("V1"),  py::arg("A2"),  py::arg("V2"))
        .def("SetLinearForm",
             (void (gp_Vec2d::*)( const Standard_Real , const gp_Vec2d & , const gp_Vec2d & ) ) static_cast<void (gp_Vec2d::*)( const Standard_Real , const gp_Vec2d & , const gp_Vec2d & ) >(&gp_Vec2d::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * V1 + V2)#"  , py::arg("A1"),  py::arg("V1"),  py::arg("V2"))
        .def("SetLinearForm",
             (void (gp_Vec2d::*)( const gp_Vec2d & , const gp_Vec2d & ) ) static_cast<void (gp_Vec2d::*)( const gp_Vec2d & , const gp_Vec2d & ) >(&gp_Vec2d::SetLinearForm),
             R"#(<me> is set to the following linear form : Left + Right)#"  , py::arg("Left"),  py::arg("Right"))
        .def("Mirror",
             (void (gp_Vec2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Vec2d::*)( const gp_Vec2d & ) >(&gp_Vec2d::Mirror),
             R"#(Performs the symmetrical transformation of a vector with respect to the vector V which is the center of the symmetry.)#"  , py::arg("V"))
        .def("Mirrored",
             (gp_Vec2d (gp_Vec2d::*)( const gp_Vec2d & ) const) static_cast<gp_Vec2d (gp_Vec2d::*)( const gp_Vec2d & ) const>(&gp_Vec2d::Mirrored),
             R"#(Performs the symmetrical transformation of a vector with respect to the vector V which is the center of the symmetry.)#"  , py::arg("V"))
        .def("Mirror",
             (void (gp_Vec2d::*)( const gp_Ax2d & ) ) static_cast<void (gp_Vec2d::*)( const gp_Ax2d & ) >(&gp_Vec2d::Mirror),
             R"#(Performs the symmetrical transformation of a vector with respect to an axis placement which is the axis of the symmetry.)#"  , py::arg("A1"))
        .def("Mirrored",
             (gp_Vec2d (gp_Vec2d::*)( const gp_Ax2d & ) const) static_cast<gp_Vec2d (gp_Vec2d::*)( const gp_Ax2d & ) const>(&gp_Vec2d::Mirrored),
             R"#(Performs the symmetrical transformation of a vector with respect to an axis placement which is the axis of the symmetry.)#"  , py::arg("A1"))
        .def("Rotate",
             (void (gp_Vec2d::*)( const Standard_Real ) ) static_cast<void (gp_Vec2d::*)( const Standard_Real ) >(&gp_Vec2d::Rotate),
             R"#(None)#"  , py::arg("Ang"))
        .def("Rotated",
             (gp_Vec2d (gp_Vec2d::*)( const Standard_Real ) const) static_cast<gp_Vec2d (gp_Vec2d::*)( const Standard_Real ) const>(&gp_Vec2d::Rotated),
             R"#(Rotates a vector. Ang is the angular value of the rotation in radians.)#"  , py::arg("Ang"))
        .def("Scale",
             (void (gp_Vec2d::*)( const Standard_Real ) ) static_cast<void (gp_Vec2d::*)( const Standard_Real ) >(&gp_Vec2d::Scale),
             R"#(None)#"  , py::arg("S"))
        .def("Scaled",
             (gp_Vec2d (gp_Vec2d::*)( const Standard_Real ) const) static_cast<gp_Vec2d (gp_Vec2d::*)( const Standard_Real ) const>(&gp_Vec2d::Scaled),
             R"#(Scales a vector. S is the scaling value.)#"  , py::arg("S"))
        .def("Transform",
             (void (gp_Vec2d::*)( const gp_Trsf2d & ) ) static_cast<void (gp_Vec2d::*)( const gp_Trsf2d & ) >(&gp_Vec2d::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Transformed",
             (gp_Vec2d (gp_Vec2d::*)( const gp_Trsf2d & ) const) static_cast<gp_Vec2d (gp_Vec2d::*)( const gp_Trsf2d & ) const>(&gp_Vec2d::Transformed),
             R"#(Transforms a vector with a Trsf from gp.)#"  , py::arg("T"))
        .def("SetCoord",
             (void (gp_Vec2d::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_Vec2d::*)( const Standard_Integer , const Standard_Real ) >(&gp_Vec2d::SetCoord),
             R"#(Changes the coordinate of range Index Index = 1 => X is modified Index = 2 => Y is modified Raises OutOfRange if Index != {1, 2}.)#"  , py::arg("Index"),  py::arg("Xi"))
        .def("SetCoord",
             (void (gp_Vec2d::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (gp_Vec2d::*)( const Standard_Real , const Standard_Real ) >(&gp_Vec2d::SetCoord),
             R"#(For this vector, assigns the values Xv and Yv to its two coordinates)#"  , py::arg("Xv"),  py::arg("Yv"))
        .def("SetX",
             (void (gp_Vec2d::*)( const Standard_Real ) ) static_cast<void (gp_Vec2d::*)( const Standard_Real ) >(&gp_Vec2d::SetX),
             R"#(Assigns the given value to the X coordinate of this vector.)#"  , py::arg("X"))
        .def("SetY",
             (void (gp_Vec2d::*)( const Standard_Real ) ) static_cast<void (gp_Vec2d::*)( const Standard_Real ) >(&gp_Vec2d::SetY),
             R"#(Assigns the given value to the Y coordinate of this vector.)#"  , py::arg("Y"))
        .def("SetXY",
             (void (gp_Vec2d::*)( const gp_XY & ) ) static_cast<void (gp_Vec2d::*)( const gp_XY & ) >(&gp_Vec2d::SetXY),
             R"#(Assigns the two coordinates of Coord to this vector.)#"  , py::arg("Coord"))
        .def("Coord",
             (Standard_Real (gp_Vec2d::*)( const Standard_Integer ) const) static_cast<Standard_Real (gp_Vec2d::*)( const Standard_Integer ) const>(&gp_Vec2d::Coord),
             R"#(Returns the coordinate of range Index : Index = 1 => X is returned Index = 2 => Y is returned Raised if Index != {1, 2}.)#"  , py::arg("Index"))
        .def("X",
             (Standard_Real (gp_Vec2d::*)() const) static_cast<Standard_Real (gp_Vec2d::*)() const>(&gp_Vec2d::X),
             R"#(For this vector, returns its X coordinate.)#" )
        .def("Y",
             (Standard_Real (gp_Vec2d::*)() const) static_cast<Standard_Real (gp_Vec2d::*)() const>(&gp_Vec2d::Y),
             R"#(For this vector, returns its Y coordinate.)#" )
        .def("XY",
             (const gp_XY & (gp_Vec2d::*)() const) static_cast<const gp_XY & (gp_Vec2d::*)() const>(&gp_Vec2d::XY),
             R"#(For this vector, returns its two coordinates as a number pair)#" )
        .def("IsNormal",
             (Standard_Boolean (gp_Vec2d::*)( const gp_Vec2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Vec2d::*)( const gp_Vec2d & , const Standard_Real ) const>(&gp_Vec2d::IsNormal),
             R"#(Returns True if abs(Abs(<me>.Angle(Other)) - PI/2.) <= AngularTolerance Raises VectorWithNullMagnitude if <me>.Magnitude() <= Resolution or Other.Magnitude() <= Resolution from gp.)#"  , py::arg("theOther"),  py::arg("theAngularTolerance"))
        .def("IsOpposite",
             (Standard_Boolean (gp_Vec2d::*)( const gp_Vec2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Vec2d::*)( const gp_Vec2d & , const Standard_Real ) const>(&gp_Vec2d::IsOpposite),
             R"#(Returns True if PI - Abs(<me>.Angle(Other)) <= AngularTolerance Raises VectorWithNullMagnitude if <me>.Magnitude() <= Resolution or Other.Magnitude() <= Resolution from gp.)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("IsParallel",
             (Standard_Boolean (gp_Vec2d::*)( const gp_Vec2d & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_Vec2d::*)( const gp_Vec2d & , const Standard_Real ) const>(&gp_Vec2d::IsParallel),
             R"#(Returns true if Abs(Angle(<me>, Other)) <= AngularTolerance or PI - Abs(Angle(<me>, Other)) <= AngularTolerance Two vectors with opposite directions are considered as parallel. Raises VectorWithNullMagnitude if <me>.Magnitude() <= Resolution or Other.Magnitude() <= Resolution from gp)#"  , py::arg("Other"),  py::arg("AngularTolerance"))
        .def("Magnitude",
             (Standard_Real (gp_Vec2d::*)() const) static_cast<Standard_Real (gp_Vec2d::*)() const>(&gp_Vec2d::Magnitude),
             R"#(Computes the magnitude of this vector.)#" )
        .def("SquareMagnitude",
             (Standard_Real (gp_Vec2d::*)() const) static_cast<Standard_Real (gp_Vec2d::*)() const>(&gp_Vec2d::SquareMagnitude),
             R"#(Computes the square magnitude of this vector.)#" )
        .def("Add",
             (void (gp_Vec2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Vec2d::*)( const gp_Vec2d & ) >(&gp_Vec2d::Add),
             R"#(None)#"  , py::arg("Other"))
        .def("Added",
             (gp_Vec2d (gp_Vec2d::*)( const gp_Vec2d & ) const) static_cast<gp_Vec2d (gp_Vec2d::*)( const gp_Vec2d & ) const>(&gp_Vec2d::Added),
             R"#(Adds two vectors)#"  , py::arg("Other"))
        .def("Crossed",
             (Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const) static_cast<Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const>(&gp_Vec2d::Crossed),
             R"#(Computes the crossing product between two vectors)#"  , py::arg("Right"))
        .def("CrossMagnitude",
             (Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const) static_cast<Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const>(&gp_Vec2d::CrossMagnitude),
             R"#(Computes the magnitude of the cross product between <me> and Right. Returns || <me> ^ Right ||)#"  , py::arg("Right"))
        .def("CrossSquareMagnitude",
             (Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const) static_cast<Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const>(&gp_Vec2d::CrossSquareMagnitude),
             R"#(Computes the square magnitude of the cross product between <me> and Right. Returns || <me> ^ Right ||**2)#"  , py::arg("Right"))
        .def("Divide",
             (void (gp_Vec2d::*)( const Standard_Real ) ) static_cast<void (gp_Vec2d::*)( const Standard_Real ) >(&gp_Vec2d::Divide),
             R"#(None)#"  , py::arg("Scalar"))
        .def("Divided",
             (gp_Vec2d (gp_Vec2d::*)( const Standard_Real ) const) static_cast<gp_Vec2d (gp_Vec2d::*)( const Standard_Real ) const>(&gp_Vec2d::Divided),
             R"#(divides a vector by a scalar)#"  , py::arg("Scalar"))
        .def("Dot",
             (Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const) static_cast<Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const>(&gp_Vec2d::Dot),
             R"#(Computes the scalar product)#"  , py::arg("Other"))
        .def("Multiply",
             (void (gp_Vec2d::*)( const Standard_Real ) ) static_cast<void (gp_Vec2d::*)( const Standard_Real ) >(&gp_Vec2d::Multiply),
             R"#(None)#"  , py::arg("Scalar"))
        .def("Multiplied",
             (gp_Vec2d (gp_Vec2d::*)( const Standard_Real ) const) static_cast<gp_Vec2d (gp_Vec2d::*)( const Standard_Real ) const>(&gp_Vec2d::Multiplied),
             R"#(Normalizes a vector Raises an exception if the magnitude of the vector is lower or equal to Resolution from package gp.)#"  , py::arg("Scalar"))
        .def("Normalize",
             (void (gp_Vec2d::*)() ) static_cast<void (gp_Vec2d::*)() >(&gp_Vec2d::Normalize),
             R"#(None)#" )
        .def("Normalized",
             (gp_Vec2d (gp_Vec2d::*)() const) static_cast<gp_Vec2d (gp_Vec2d::*)() const>(&gp_Vec2d::Normalized),
             R"#(Normalizes a vector Raises an exception if the magnitude of the vector is lower or equal to Resolution from package gp. Reverses the direction of a vector)#" )
        .def("Reverse",
             (void (gp_Vec2d::*)() ) static_cast<void (gp_Vec2d::*)() >(&gp_Vec2d::Reverse),
             R"#(None)#" )
        .def("Reversed",
             (gp_Vec2d (gp_Vec2d::*)() const) static_cast<gp_Vec2d (gp_Vec2d::*)() const>(&gp_Vec2d::Reversed),
             R"#(Reverses the direction of a vector)#" )
        .def("Subtract",
             (void (gp_Vec2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Vec2d::*)( const gp_Vec2d & ) >(&gp_Vec2d::Subtract),
             R"#(Subtracts two vectors)#"  , py::arg("Right"))
        .def("Subtracted",
             (gp_Vec2d (gp_Vec2d::*)( const gp_Vec2d & ) const) static_cast<gp_Vec2d (gp_Vec2d::*)( const gp_Vec2d & ) const>(&gp_Vec2d::Subtracted),
             R"#(Subtracts two vectors)#"  , py::arg("Right"))
        .def("SetLinearForm",
             (void (gp_Vec2d::*)( const Standard_Real , const gp_Vec2d & , const Standard_Real , const gp_Vec2d & ) ) static_cast<void (gp_Vec2d::*)( const Standard_Real , const gp_Vec2d & , const Standard_Real , const gp_Vec2d & ) >(&gp_Vec2d::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * V1 + A2 * V2)#"  , py::arg("L"),  py::arg("Left"),  py::arg("R"),  py::arg("Right"))
        .def("SetLinearForm",
             (void (gp_Vec2d::*)( const Standard_Real , const gp_Vec2d & , const gp_Vec2d & ) ) static_cast<void (gp_Vec2d::*)( const Standard_Real , const gp_Vec2d & , const gp_Vec2d & ) >(&gp_Vec2d::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * V1 + V2)#"  , py::arg("L"),  py::arg("Left"),  py::arg("Right"))
        .def("SetLinearForm",
             (void (gp_Vec2d::*)( const gp_Vec2d & , const gp_Vec2d & ) ) static_cast<void (gp_Vec2d::*)( const gp_Vec2d & , const gp_Vec2d & ) >(&gp_Vec2d::SetLinearForm),
             R"#(<me> is set to the following linear form : Left + Right)#"  , py::arg("Left"),  py::arg("Right"))
        .def("SetLinearForm",
             (void (gp_Vec2d::*)( const Standard_Real , const gp_Vec2d & , const Standard_Real , const gp_Vec2d & , const gp_Vec2d & ) ) static_cast<void (gp_Vec2d::*)( const Standard_Real , const gp_Vec2d & , const Standard_Real , const gp_Vec2d & , const gp_Vec2d & ) >(&gp_Vec2d::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * V1 + A2 * V2 + V3)#"  , py::arg("A1"),  py::arg("V1"),  py::arg("A2"),  py::arg("V2"),  py::arg("V3"))
        .def("Rotate",
             (void (gp_Vec2d::*)( const Standard_Real ) ) static_cast<void (gp_Vec2d::*)( const Standard_Real ) >(&gp_Vec2d::Rotate),
             R"#(None)#"  , py::arg("Ang"))
        .def("Rotated",
             (gp_Vec2d (gp_Vec2d::*)( const Standard_Real ) const) static_cast<gp_Vec2d (gp_Vec2d::*)( const Standard_Real ) const>(&gp_Vec2d::Rotated),
             R"#(Rotates a vector. Ang is the angular value of the rotation in radians.)#"  , py::arg("Ang"))
        .def("Scale",
             (void (gp_Vec2d::*)( const Standard_Real ) ) static_cast<void (gp_Vec2d::*)( const Standard_Real ) >(&gp_Vec2d::Scale),
             R"#(None)#"  , py::arg("S"))
        .def("Scaled",
             (gp_Vec2d (gp_Vec2d::*)( const Standard_Real ) const) static_cast<gp_Vec2d (gp_Vec2d::*)( const Standard_Real ) const>(&gp_Vec2d::Scaled),
             R"#(Scales a vector. S is the scaling value.)#"  , py::arg("S"))
        .def("Transformed",
             (gp_Vec2d (gp_Vec2d::*)( const gp_Trsf2d & ) const) static_cast<gp_Vec2d (gp_Vec2d::*)( const gp_Trsf2d & ) const>(&gp_Vec2d::Transformed),
             R"#(Transforms a vector with a Trsf from gp.)#"  , py::arg("T"))
        .def("GetNormal",
             (gp_Vec2d (gp_Vec2d::*)() const) static_cast<gp_Vec2d (gp_Vec2d::*)() const>(&gp_Vec2d::GetNormal),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Coord",
             []( gp_Vec2d &self   ){ Standard_Real  Xv; Standard_Real  Yv; self.Coord(Xv,Yv); return std::make_tuple(Xv,Yv); },
             R"#(For this vector, returns its two coordinates Xv and Yv)#" )
        .def("Coord",
             []( gp_Vec2d &self   ){ Standard_Real  Xv; Standard_Real  Yv; self.Coord(Xv,Yv); return std::make_tuple(Xv,Yv); },
             R"#(For this vector, returns its two coordinates Xv and Yv)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
        .def("__iadd__",
             (void (gp_Vec2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Vec2d::*)( const gp_Vec2d & ) >(&gp_Vec2d::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__add__",
             (gp_Vec2d (gp_Vec2d::*)( const gp_Vec2d & ) const) static_cast<gp_Vec2d (gp_Vec2d::*)( const gp_Vec2d & ) const>(&gp_Vec2d::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__pow__",
             (Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const) static_cast<Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const>(&gp_Vec2d::operator^),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__itruediv__",
             (void (gp_Vec2d::*)( const Standard_Real ) ) static_cast<void (gp_Vec2d::*)( const Standard_Real ) >(&gp_Vec2d::operator/=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__truediv__",
             (gp_Vec2d (gp_Vec2d::*)( const Standard_Real ) const) static_cast<gp_Vec2d (gp_Vec2d::*)( const Standard_Real ) const>(&gp_Vec2d::operator/),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__mul__",
             (Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const) static_cast<Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const>(&gp_Vec2d::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__rmul__",
             (Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const) static_cast<Standard_Real (gp_Vec2d::*)( const gp_Vec2d & ) const>(&gp_Vec2d::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__imul__",
             (void (gp_Vec2d::*)( const Standard_Real ) ) static_cast<void (gp_Vec2d::*)( const Standard_Real ) >(&gp_Vec2d::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__mul__",
             (gp_Vec2d (gp_Vec2d::*)( const Standard_Real ) const) static_cast<gp_Vec2d (gp_Vec2d::*)( const Standard_Real ) const>(&gp_Vec2d::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__rmul__",
             (gp_Vec2d (gp_Vec2d::*)( const Standard_Real ) const) static_cast<gp_Vec2d (gp_Vec2d::*)( const Standard_Real ) const>(&gp_Vec2d::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__sub__",
             (gp_Vec2d (gp_Vec2d::*)() const) static_cast<gp_Vec2d (gp_Vec2d::*)() const>(&gp_Vec2d::operator-),
             py::is_operator(),
             R"#(None)#" )
        .def("__isub__",
             (void (gp_Vec2d::*)( const gp_Vec2d & ) ) static_cast<void (gp_Vec2d::*)( const gp_Vec2d & ) >(&gp_Vec2d::operator-=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__sub__",
             (gp_Vec2d (gp_Vec2d::*)( const gp_Vec2d & ) const) static_cast<gp_Vec2d (gp_Vec2d::*)( const gp_Vec2d & ) const>(&gp_Vec2d::operator-),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
    // additional methods and static methods
;


    static_cast<py::class_<gp_XY , shared_ptr<gp_XY> >>(m.attr("gp_XY"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real >()  , py::arg("X"),  py::arg("Y") )
    // custom constructors
    // methods
        .def("SetCoord",
             (void (gp_XY::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_XY::*)( const Standard_Integer , const Standard_Real ) >(&gp_XY::SetCoord),
             R"#(modifies the coordinate of range Index Index = 1 => X is modified Index = 2 => Y is modified Raises OutOfRange if Index != {1, 2}.)#"  , py::arg("Index"),  py::arg("Xi"))
        .def("SetCoord",
             (void (gp_XY::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (gp_XY::*)( const Standard_Real , const Standard_Real ) >(&gp_XY::SetCoord),
             R"#(For this number pair, assigns the values X and Y to its coordinates)#"  , py::arg("X"),  py::arg("Y"))
        .def("SetX",
             (void (gp_XY::*)( const Standard_Real ) ) static_cast<void (gp_XY::*)( const Standard_Real ) >(&gp_XY::SetX),
             R"#(Assigns the given value to the X coordinate of this number pair.)#"  , py::arg("X"))
        .def("SetY",
             (void (gp_XY::*)( const Standard_Real ) ) static_cast<void (gp_XY::*)( const Standard_Real ) >(&gp_XY::SetY),
             R"#(Assigns the given value to the Y coordinate of this number pair.)#"  , py::arg("Y"))
        .def("Coord",
             (Standard_Real (gp_XY::*)( const Standard_Integer ) const) static_cast<Standard_Real (gp_XY::*)( const Standard_Integer ) const>(&gp_XY::Coord),
             R"#(returns the coordinate of range Index : Index = 1 => X is returned Index = 2 => Y is returned Raises OutOfRange if Index != {1, 2}.)#"  , py::arg("Index"))
        .def("ChangeCoord",
             (Standard_Real & (gp_XY::*)( const Standard_Integer ) ) static_cast<Standard_Real & (gp_XY::*)( const Standard_Integer ) >(&gp_XY::ChangeCoord),
             R"#(None)#"  , py::arg("theIndex"))
        .def("X",
             (Standard_Real (gp_XY::*)() const) static_cast<Standard_Real (gp_XY::*)() const>(&gp_XY::X),
             R"#(Returns the X coordinate of this number pair.)#" )
        .def("Y",
             (Standard_Real (gp_XY::*)() const) static_cast<Standard_Real (gp_XY::*)() const>(&gp_XY::Y),
             R"#(Returns the Y coordinate of this number pair.)#" )
        .def("Modulus",
             (Standard_Real (gp_XY::*)() const) static_cast<Standard_Real (gp_XY::*)() const>(&gp_XY::Modulus),
             R"#(Computes Sqrt (X*X + Y*Y) where X and Y are the two coordinates of this number pair.)#" )
        .def("SquareModulus",
             (Standard_Real (gp_XY::*)() const) static_cast<Standard_Real (gp_XY::*)() const>(&gp_XY::SquareModulus),
             R"#(Computes X*X + Y*Y where X and Y are the two coordinates of this number pair.)#" )
        .def("IsEqual",
             (Standard_Boolean (gp_XY::*)( const gp_XY & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_XY::*)( const gp_XY & , const Standard_Real ) const>(&gp_XY::IsEqual),
             R"#(Returns true if the coordinates of this number pair are equal to the respective coordinates of the number pair Other, within the specified tolerance Tolerance. I.e.: abs(<me>.X() - Other.X()) <= Tolerance and abs(<me>.Y() - Other.Y()) <= Tolerance and computations)#"  , py::arg("Other"),  py::arg("Tolerance"))
        .def("Add",
             (void (gp_XY::*)( const gp_XY & ) ) static_cast<void (gp_XY::*)( const gp_XY & ) >(&gp_XY::Add),
             R"#(Computes the sum of this number pair and number pair Other <me>.X() = <me>.X() + Other.X() <me>.Y() = <me>.Y() + Other.Y())#"  , py::arg("Other"))
        .def("Added",
             (gp_XY (gp_XY::*)( const gp_XY & ) const) static_cast<gp_XY (gp_XY::*)( const gp_XY & ) const>(&gp_XY::Added),
             R"#(Computes the sum of this number pair and number pair Other new.X() = <me>.X() + Other.X() new.Y() = <me>.Y() + Other.Y())#"  , py::arg("Other"))
        .def("Crossed",
             (Standard_Real (gp_XY::*)( const gp_XY & ) const) static_cast<Standard_Real (gp_XY::*)( const gp_XY & ) const>(&gp_XY::Crossed),
             R"#(Real D = <me>.X() * Other.Y() - <me>.Y() * Other.X())#"  , py::arg("Right"))
        .def("CrossMagnitude",
             (Standard_Real (gp_XY::*)( const gp_XY & ) const) static_cast<Standard_Real (gp_XY::*)( const gp_XY & ) const>(&gp_XY::CrossMagnitude),
             R"#(computes the magnitude of the cross product between <me> and Right. Returns || <me> ^ Right ||)#"  , py::arg("Right"))
        .def("CrossSquareMagnitude",
             (Standard_Real (gp_XY::*)( const gp_XY & ) const) static_cast<Standard_Real (gp_XY::*)( const gp_XY & ) const>(&gp_XY::CrossSquareMagnitude),
             R"#(computes the square magnitude of the cross product between <me> and Right. Returns || <me> ^ Right ||**2)#"  , py::arg("Right"))
        .def("Divide",
             (void (gp_XY::*)( const Standard_Real ) ) static_cast<void (gp_XY::*)( const Standard_Real ) >(&gp_XY::Divide),
             R"#(divides <me> by a real.)#"  , py::arg("Scalar"))
        .def("Divided",
             (gp_XY (gp_XY::*)( const Standard_Real ) const) static_cast<gp_XY (gp_XY::*)( const Standard_Real ) const>(&gp_XY::Divided),
             R"#(Divides <me> by a real.)#"  , py::arg("Scalar"))
        .def("Dot",
             (Standard_Real (gp_XY::*)( const gp_XY & ) const) static_cast<Standard_Real (gp_XY::*)( const gp_XY & ) const>(&gp_XY::Dot),
             R"#(Computes the scalar product between <me> and Other)#"  , py::arg("Other"))
        .def("Multiply",
             (void (gp_XY::*)( const Standard_Real ) ) static_cast<void (gp_XY::*)( const Standard_Real ) >(&gp_XY::Multiply),
             R"#(<me>.X() = <me>.X() * Scalar; <me>.Y() = <me>.Y() * Scalar;)#"  , py::arg("Scalar"))
        .def("Multiply",
             (void (gp_XY::*)( const gp_XY & ) ) static_cast<void (gp_XY::*)( const gp_XY & ) >(&gp_XY::Multiply),
             R"#(<me>.X() = <me>.X() * Other.X(); <me>.Y() = <me>.Y() * Other.Y();)#"  , py::arg("Other"))
        .def("Multiply",
             (void (gp_XY::*)( const gp_Mat2d & ) ) static_cast<void (gp_XY::*)( const gp_Mat2d & ) >(&gp_XY::Multiply),
             R"#(<me> = Matrix * <me>)#"  , py::arg("Matrix"))
        .def("Multiplied",
             (gp_XY (gp_XY::*)( const Standard_Real ) const) static_cast<gp_XY (gp_XY::*)( const Standard_Real ) const>(&gp_XY::Multiplied),
             R"#(New.X() = <me>.X() * Scalar; New.Y() = <me>.Y() * Scalar;)#"  , py::arg("Scalar"))
        .def("Multiplied",
             (gp_XY (gp_XY::*)( const gp_XY & ) const) static_cast<gp_XY (gp_XY::*)( const gp_XY & ) const>(&gp_XY::Multiplied),
             R"#(new.X() = <me>.X() * Other.X(); new.Y() = <me>.Y() * Other.Y();)#"  , py::arg("Other"))
        .def("Multiplied",
             (gp_XY (gp_XY::*)( const gp_Mat2d & ) const) static_cast<gp_XY (gp_XY::*)( const gp_Mat2d & ) const>(&gp_XY::Multiplied),
             R"#(New = Matrix * <me>)#"  , py::arg("Matrix"))
        .def("Normalize",
             (void (gp_XY::*)() ) static_cast<void (gp_XY::*)() >(&gp_XY::Normalize),
             R"#(<me>.X() = <me>.X()/ <me>.Modulus() <me>.Y() = <me>.Y()/ <me>.Modulus() Raises ConstructionError if <me>.Modulus() <= Resolution from gp)#" )
        .def("Normalized",
             (gp_XY (gp_XY::*)() const) static_cast<gp_XY (gp_XY::*)() const>(&gp_XY::Normalized),
             R"#(New.X() = <me>.X()/ <me>.Modulus() New.Y() = <me>.Y()/ <me>.Modulus() Raises ConstructionError if <me>.Modulus() <= Resolution from gp)#" )
        .def("Reverse",
             (void (gp_XY::*)() ) static_cast<void (gp_XY::*)() >(&gp_XY::Reverse),
             R"#(<me>.X() = -<me>.X() <me>.Y() = -<me>.Y())#" )
        .def("Reversed",
             (gp_XY (gp_XY::*)() const) static_cast<gp_XY (gp_XY::*)() const>(&gp_XY::Reversed),
             R"#(New.X() = -<me>.X() New.Y() = -<me>.Y())#" )
        .def("SetLinearForm",
             (void (gp_XY::*)( const Standard_Real , const gp_XY & , const Standard_Real , const gp_XY & ) ) static_cast<void (gp_XY::*)( const Standard_Real , const gp_XY & , const Standard_Real , const gp_XY & ) >(&gp_XY::SetLinearForm),
             R"#(Computes the following linear combination and assigns the result to this number pair: A1 * XY1 + A2 * XY2)#"  , py::arg("A1"),  py::arg("XY1"),  py::arg("A2"),  py::arg("XY2"))
        .def("SetLinearForm",
             (void (gp_XY::*)( const Standard_Real , const gp_XY & , const Standard_Real , const gp_XY & , const gp_XY & ) ) static_cast<void (gp_XY::*)( const Standard_Real , const gp_XY & , const Standard_Real , const gp_XY & , const gp_XY & ) >(&gp_XY::SetLinearForm),
             R"#(-- Computes the following linear combination and assigns the result to this number pair: A1 * XY1 + A2 * XY2 + XY3)#"  , py::arg("A1"),  py::arg("XY1"),  py::arg("A2"),  py::arg("XY2"),  py::arg("XY3"))
        .def("SetLinearForm",
             (void (gp_XY::*)( const Standard_Real , const gp_XY & , const gp_XY & ) ) static_cast<void (gp_XY::*)( const Standard_Real , const gp_XY & , const gp_XY & ) >(&gp_XY::SetLinearForm),
             R"#(Computes the following linear combination and assigns the result to this number pair: A1 * XY1 + XY2)#"  , py::arg("A1"),  py::arg("XY1"),  py::arg("XY2"))
        .def("SetLinearForm",
             (void (gp_XY::*)( const gp_XY & , const gp_XY & ) ) static_cast<void (gp_XY::*)( const gp_XY & , const gp_XY & ) >(&gp_XY::SetLinearForm),
             R"#(Computes the following linear combination and assigns the result to this number pair: XY1 + XY2)#"  , py::arg("XY1"),  py::arg("XY2"))
        .def("Subtract",
             (void (gp_XY::*)( const gp_XY & ) ) static_cast<void (gp_XY::*)( const gp_XY & ) >(&gp_XY::Subtract),
             R"#(<me>.X() = <me>.X() - Other.X() <me>.Y() = <me>.Y() - Other.Y())#"  , py::arg("Right"))
        .def("Subtracted",
             (gp_XY (gp_XY::*)( const gp_XY & ) const) static_cast<gp_XY (gp_XY::*)( const gp_XY & ) const>(&gp_XY::Subtracted),
             R"#(new.X() = <me>.X() - Other.X() new.Y() = <me>.Y() - Other.Y())#"  , py::arg("Right"))
        .def("SetCoord",
             (void (gp_XY::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_XY::*)( const Standard_Integer , const Standard_Real ) >(&gp_XY::SetCoord),
             R"#(modifies the coordinate of range Index Index = 1 => X is modified Index = 2 => Y is modified Raises OutOfRange if Index != {1, 2}.)#"  , py::arg("i"),  py::arg("X"))
        .def("SetCoord",
             (void (gp_XY::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (gp_XY::*)( const Standard_Real , const Standard_Real ) >(&gp_XY::SetCoord),
             R"#(For this number pair, assigns the values X and Y to its coordinates)#"  , py::arg("X"),  py::arg("Y"))
        .def("SetX",
             (void (gp_XY::*)( const Standard_Real ) ) static_cast<void (gp_XY::*)( const Standard_Real ) >(&gp_XY::SetX),
             R"#(Assigns the given value to the X coordinate of this number pair.)#"  , py::arg("X"))
        .def("SetY",
             (void (gp_XY::*)( const Standard_Real ) ) static_cast<void (gp_XY::*)( const Standard_Real ) >(&gp_XY::SetY),
             R"#(Assigns the given value to the Y coordinate of this number pair.)#"  , py::arg("Y"))
        .def("Coord",
             (Standard_Real (gp_XY::*)( const Standard_Integer ) const) static_cast<Standard_Real (gp_XY::*)( const Standard_Integer ) const>(&gp_XY::Coord),
             R"#(returns the coordinate of range Index : Index = 1 => X is returned Index = 2 => Y is returned Raises OutOfRange if Index != {1, 2}.)#"  , py::arg("i"))
        .def("ChangeCoord",
             (Standard_Real & (gp_XY::*)( const Standard_Integer ) ) static_cast<Standard_Real & (gp_XY::*)( const Standard_Integer ) >(&gp_XY::ChangeCoord),
             R"#(None)#"  , py::arg("theIndex"))
        .def("X",
             (Standard_Real (gp_XY::*)() const) static_cast<Standard_Real (gp_XY::*)() const>(&gp_XY::X),
             R"#(Returns the X coordinate of this number pair.)#" )
        .def("Y",
             (Standard_Real (gp_XY::*)() const) static_cast<Standard_Real (gp_XY::*)() const>(&gp_XY::Y),
             R"#(Returns the Y coordinate of this number pair.)#" )
        .def("Modulus",
             (Standard_Real (gp_XY::*)() const) static_cast<Standard_Real (gp_XY::*)() const>(&gp_XY::Modulus),
             R"#(Computes Sqrt (X*X + Y*Y) where X and Y are the two coordinates of this number pair.)#" )
        .def("SquareModulus",
             (Standard_Real (gp_XY::*)() const) static_cast<Standard_Real (gp_XY::*)() const>(&gp_XY::SquareModulus),
             R"#(Computes X*X + Y*Y where X and Y are the two coordinates of this number pair.)#" )
        .def("Add",
             (void (gp_XY::*)( const gp_XY & ) ) static_cast<void (gp_XY::*)( const gp_XY & ) >(&gp_XY::Add),
             R"#(Computes the sum of this number pair and number pair Other <me>.X() = <me>.X() + Other.X() <me>.Y() = <me>.Y() + Other.Y())#"  , py::arg("Other"))
        .def("Added",
             (gp_XY (gp_XY::*)( const gp_XY & ) const) static_cast<gp_XY (gp_XY::*)( const gp_XY & ) const>(&gp_XY::Added),
             R"#(Computes the sum of this number pair and number pair Other new.X() = <me>.X() + Other.X() new.Y() = <me>.Y() + Other.Y())#"  , py::arg("Other"))
        .def("Crossed",
             (Standard_Real (gp_XY::*)( const gp_XY & ) const) static_cast<Standard_Real (gp_XY::*)( const gp_XY & ) const>(&gp_XY::Crossed),
             R"#(Real D = <me>.X() * Other.Y() - <me>.Y() * Other.X())#"  , py::arg("Right"))
        .def("CrossMagnitude",
             (Standard_Real (gp_XY::*)( const gp_XY & ) const) static_cast<Standard_Real (gp_XY::*)( const gp_XY & ) const>(&gp_XY::CrossMagnitude),
             R"#(computes the magnitude of the cross product between <me> and Right. Returns || <me> ^ Right ||)#"  , py::arg("Right"))
        .def("CrossSquareMagnitude",
             (Standard_Real (gp_XY::*)( const gp_XY & ) const) static_cast<Standard_Real (gp_XY::*)( const gp_XY & ) const>(&gp_XY::CrossSquareMagnitude),
             R"#(computes the square magnitude of the cross product between <me> and Right. Returns || <me> ^ Right ||**2)#"  , py::arg("Right"))
        .def("Divide",
             (void (gp_XY::*)( const Standard_Real ) ) static_cast<void (gp_XY::*)( const Standard_Real ) >(&gp_XY::Divide),
             R"#(divides <me> by a real.)#"  , py::arg("Scalar"))
        .def("Divided",
             (gp_XY (gp_XY::*)( const Standard_Real ) const) static_cast<gp_XY (gp_XY::*)( const Standard_Real ) const>(&gp_XY::Divided),
             R"#(Divides <me> by a real.)#"  , py::arg("Scalar"))
        .def("Dot",
             (Standard_Real (gp_XY::*)( const gp_XY & ) const) static_cast<Standard_Real (gp_XY::*)( const gp_XY & ) const>(&gp_XY::Dot),
             R"#(Computes the scalar product between <me> and Other)#"  , py::arg("Other"))
        .def("Multiply",
             (void (gp_XY::*)( const Standard_Real ) ) static_cast<void (gp_XY::*)( const Standard_Real ) >(&gp_XY::Multiply),
             R"#(<me>.X() = <me>.X() * Scalar; <me>.Y() = <me>.Y() * Scalar;)#"  , py::arg("Scalar"))
        .def("Multiply",
             (void (gp_XY::*)( const gp_XY & ) ) static_cast<void (gp_XY::*)( const gp_XY & ) >(&gp_XY::Multiply),
             R"#(<me>.X() = <me>.X() * Other.X(); <me>.Y() = <me>.Y() * Other.Y();)#"  , py::arg("Other"))
        .def("Multiply",
             (void (gp_XY::*)( const gp_Mat2d & ) ) static_cast<void (gp_XY::*)( const gp_Mat2d & ) >(&gp_XY::Multiply),
             R"#(<me> = Matrix * <me>)#"  , py::arg("Matrix"))
        .def("Multiplied",
             (gp_XY (gp_XY::*)( const Standard_Real ) const) static_cast<gp_XY (gp_XY::*)( const Standard_Real ) const>(&gp_XY::Multiplied),
             R"#(New.X() = <me>.X() * Scalar; New.Y() = <me>.Y() * Scalar;)#"  , py::arg("Scalar"))
        .def("Multiplied",
             (gp_XY (gp_XY::*)( const gp_XY & ) const) static_cast<gp_XY (gp_XY::*)( const gp_XY & ) const>(&gp_XY::Multiplied),
             R"#(new.X() = <me>.X() * Other.X(); new.Y() = <me>.Y() * Other.Y();)#"  , py::arg("Other"))
        .def("Multiplied",
             (gp_XY (gp_XY::*)( const gp_Mat2d & ) const) static_cast<gp_XY (gp_XY::*)( const gp_Mat2d & ) const>(&gp_XY::Multiplied),
             R"#(New = Matrix * <me>)#"  , py::arg("Matrix"))
        .def("Normalize",
             (void (gp_XY::*)() ) static_cast<void (gp_XY::*)() >(&gp_XY::Normalize),
             R"#(<me>.X() = <me>.X()/ <me>.Modulus() <me>.Y() = <me>.Y()/ <me>.Modulus() Raises ConstructionError if <me>.Modulus() <= Resolution from gp)#" )
        .def("Normalized",
             (gp_XY (gp_XY::*)() const) static_cast<gp_XY (gp_XY::*)() const>(&gp_XY::Normalized),
             R"#(New.X() = <me>.X()/ <me>.Modulus() New.Y() = <me>.Y()/ <me>.Modulus() Raises ConstructionError if <me>.Modulus() <= Resolution from gp)#" )
        .def("Reverse",
             (void (gp_XY::*)() ) static_cast<void (gp_XY::*)() >(&gp_XY::Reverse),
             R"#(<me>.X() = -<me>.X() <me>.Y() = -<me>.Y())#" )
        .def("Reversed",
             (gp_XY (gp_XY::*)() const) static_cast<gp_XY (gp_XY::*)() const>(&gp_XY::Reversed),
             R"#(New.X() = -<me>.X() New.Y() = -<me>.Y())#" )
        .def("SetLinearForm",
             (void (gp_XY::*)( const Standard_Real , const gp_XY & , const Standard_Real , const gp_XY & ) ) static_cast<void (gp_XY::*)( const Standard_Real , const gp_XY & , const Standard_Real , const gp_XY & ) >(&gp_XY::SetLinearForm),
             R"#(Computes the following linear combination and assigns the result to this number pair: A1 * XY1 + A2 * XY2)#"  , py::arg("L"),  py::arg("Left"),  py::arg("R"),  py::arg("Right"))
        .def("SetLinearForm",
             (void (gp_XY::*)( const Standard_Real , const gp_XY & , const gp_XY & ) ) static_cast<void (gp_XY::*)( const Standard_Real , const gp_XY & , const gp_XY & ) >(&gp_XY::SetLinearForm),
             R"#(Computes the following linear combination and assigns the result to this number pair: A1 * XY1 + XY2)#"  , py::arg("L"),  py::arg("Left"),  py::arg("Right"))
        .def("SetLinearForm",
             (void (gp_XY::*)( const gp_XY & , const gp_XY & ) ) static_cast<void (gp_XY::*)( const gp_XY & , const gp_XY & ) >(&gp_XY::SetLinearForm),
             R"#(Computes the following linear combination and assigns the result to this number pair: XY1 + XY2)#"  , py::arg("Left"),  py::arg("Right"))
        .def("SetLinearForm",
             (void (gp_XY::*)( const Standard_Real , const gp_XY & , const Standard_Real , const gp_XY & , const gp_XY & ) ) static_cast<void (gp_XY::*)( const Standard_Real , const gp_XY & , const Standard_Real , const gp_XY & , const gp_XY & ) >(&gp_XY::SetLinearForm),
             R"#(-- Computes the following linear combination and assigns the result to this number pair: A1 * XY1 + A2 * XY2 + XY3)#"  , py::arg("A1"),  py::arg("XY1"),  py::arg("A2"),  py::arg("XY2"),  py::arg("XY3"))
        .def("Subtract",
             (void (gp_XY::*)( const gp_XY & ) ) static_cast<void (gp_XY::*)( const gp_XY & ) >(&gp_XY::Subtract),
             R"#(<me>.X() = <me>.X() - Other.X() <me>.Y() = <me>.Y() - Other.Y())#"  , py::arg("Right"))
        .def("Subtracted",
             (gp_XY (gp_XY::*)( const gp_XY & ) const) static_cast<gp_XY (gp_XY::*)( const gp_XY & ) const>(&gp_XY::Subtracted),
             R"#(new.X() = <me>.X() - Other.X() new.Y() = <me>.Y() - Other.Y())#"  , py::arg("Right"))
    // methods using call by reference i.s.o. return
        .def("Coord",
             []( gp_XY &self   ){ Standard_Real  X; Standard_Real  Y; self.Coord(X,Y); return std::make_tuple(X,Y); },
             R"#(For this number pair, returns its coordinates X and Y.)#" )
        .def("Coord",
             []( gp_XY &self   ){ Standard_Real  X; Standard_Real  Y; self.Coord(X,Y); return std::make_tuple(X,Y); },
             R"#(For this number pair, returns its coordinates X and Y.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
        .def("__iadd__",
             (void (gp_XY::*)( const gp_XY & ) ) static_cast<void (gp_XY::*)( const gp_XY & ) >(&gp_XY::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__add__",
             (gp_XY (gp_XY::*)( const gp_XY & ) const) static_cast<gp_XY (gp_XY::*)( const gp_XY & ) const>(&gp_XY::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__pow__",
             (Standard_Real (gp_XY::*)( const gp_XY & ) const) static_cast<Standard_Real (gp_XY::*)( const gp_XY & ) const>(&gp_XY::operator^),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__itruediv__",
             (void (gp_XY::*)( const Standard_Real ) ) static_cast<void (gp_XY::*)( const Standard_Real ) >(&gp_XY::operator/=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__truediv__",
             (gp_XY (gp_XY::*)( const Standard_Real ) const) static_cast<gp_XY (gp_XY::*)( const Standard_Real ) const>(&gp_XY::operator/),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__mul__",
             (Standard_Real (gp_XY::*)( const gp_XY & ) const) static_cast<Standard_Real (gp_XY::*)( const gp_XY & ) const>(&gp_XY::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__rmul__",
             (Standard_Real (gp_XY::*)( const gp_XY & ) const) static_cast<Standard_Real (gp_XY::*)( const gp_XY & ) const>(&gp_XY::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__imul__",
             (void (gp_XY::*)( const Standard_Real ) ) static_cast<void (gp_XY::*)( const Standard_Real ) >(&gp_XY::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__imul__",
             (void (gp_XY::*)( const gp_XY & ) ) static_cast<void (gp_XY::*)( const gp_XY & ) >(&gp_XY::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__imul__",
             (void (gp_XY::*)( const gp_Mat2d & ) ) static_cast<void (gp_XY::*)( const gp_Mat2d & ) >(&gp_XY::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Matrix"))
        .def("__mul__",
             (gp_XY (gp_XY::*)( const Standard_Real ) const) static_cast<gp_XY (gp_XY::*)( const Standard_Real ) const>(&gp_XY::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__rmul__",
             (gp_XY (gp_XY::*)( const Standard_Real ) const) static_cast<gp_XY (gp_XY::*)( const Standard_Real ) const>(&gp_XY::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__mul__",
             (gp_XY (gp_XY::*)( const gp_Mat2d & ) const) static_cast<gp_XY (gp_XY::*)( const gp_Mat2d & ) const>(&gp_XY::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Matrix"))
        .def("__rmul__",
             (gp_XY (gp_XY::*)( const gp_Mat2d & ) const) static_cast<gp_XY (gp_XY::*)( const gp_Mat2d & ) const>(&gp_XY::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Matrix"))
        .def("__sub__",
             (gp_XY (gp_XY::*)() const) static_cast<gp_XY (gp_XY::*)() const>(&gp_XY::operator-),
             py::is_operator(),
             R"#(None)#" )
        .def("__isub__",
             (void (gp_XY::*)( const gp_XY & ) ) static_cast<void (gp_XY::*)( const gp_XY & ) >(&gp_XY::operator-=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__sub__",
             (gp_XY (gp_XY::*)( const gp_XY & ) const) static_cast<gp_XY (gp_XY::*)( const gp_XY & ) const>(&gp_XY::operator-),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
    // additional methods and static methods
;


    static_cast<py::class_<gp_XYZ , shared_ptr<gp_XYZ> >>(m.attr("gp_XYZ"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("X"),  py::arg("Y"),  py::arg("Z") )
    // custom constructors
    // methods
        .def("SetCoord",
             (void (gp_XYZ::*)( const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (gp_XYZ::*)( const Standard_Real , const Standard_Real , const Standard_Real ) >(&gp_XYZ::SetCoord),
             R"#(For this XYZ object, assigns the values X, Y and Z to its three coordinates)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"))
        .def("SetCoord",
             (void (gp_XYZ::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_XYZ::*)( const Standard_Integer , const Standard_Real ) >(&gp_XYZ::SetCoord),
             R"#(modifies the coordinate of range Index Index = 1 => X is modified Index = 2 => Y is modified Index = 3 => Z is modified Raises OutOfRange if Index != {1, 2, 3}.)#"  , py::arg("Index"),  py::arg("Xi"))
        .def("SetX",
             (void (gp_XYZ::*)( const Standard_Real ) ) static_cast<void (gp_XYZ::*)( const Standard_Real ) >(&gp_XYZ::SetX),
             R"#(Assigns the given value to the X coordinate)#"  , py::arg("X"))
        .def("SetY",
             (void (gp_XYZ::*)( const Standard_Real ) ) static_cast<void (gp_XYZ::*)( const Standard_Real ) >(&gp_XYZ::SetY),
             R"#(Assigns the given value to the Y coordinate)#"  , py::arg("Y"))
        .def("SetZ",
             (void (gp_XYZ::*)( const Standard_Real ) ) static_cast<void (gp_XYZ::*)( const Standard_Real ) >(&gp_XYZ::SetZ),
             R"#(Assigns the given value to the Z coordinate)#"  , py::arg("Z"))
        .def("Coord",
             (Standard_Real (gp_XYZ::*)( const Standard_Integer ) const) static_cast<Standard_Real (gp_XYZ::*)( const Standard_Integer ) const>(&gp_XYZ::Coord),
             R"#(returns the coordinate of range Index : Index = 1 => X is returned Index = 2 => Y is returned Index = 3 => Z is returned)#"  , py::arg("Index"))
        .def("ChangeCoord",
             (Standard_Real & (gp_XYZ::*)( const Standard_Integer ) ) static_cast<Standard_Real & (gp_XYZ::*)( const Standard_Integer ) >(&gp_XYZ::ChangeCoord),
             R"#(None)#"  , py::arg("theIndex"))
        .def("GetData",
             (const Standard_Real * (gp_XYZ::*)() const) static_cast<const Standard_Real * (gp_XYZ::*)() const>(&gp_XYZ::GetData),
             R"#(Returns a const ptr to coordinates location. Is useful for algorithms, but DOES NOT PERFORM ANY CHECKS!)#" )
        .def("ChangeData",
             (Standard_Real * (gp_XYZ::*)() ) static_cast<Standard_Real * (gp_XYZ::*)() >(&gp_XYZ::ChangeData),
             R"#(Returns a ptr to coordinates location. Is useful for algorithms, but DOES NOT PERFORM ANY CHECKS!)#" )
        .def("X",
             (Standard_Real (gp_XYZ::*)() const) static_cast<Standard_Real (gp_XYZ::*)() const>(&gp_XYZ::X),
             R"#(Returns the X coordinate)#" )
        .def("Y",
             (Standard_Real (gp_XYZ::*)() const) static_cast<Standard_Real (gp_XYZ::*)() const>(&gp_XYZ::Y),
             R"#(Returns the Y coordinate)#" )
        .def("Z",
             (Standard_Real (gp_XYZ::*)() const) static_cast<Standard_Real (gp_XYZ::*)() const>(&gp_XYZ::Z),
             R"#(Returns the Z coordinate)#" )
        .def("Modulus",
             (Standard_Real (gp_XYZ::*)() const) static_cast<Standard_Real (gp_XYZ::*)() const>(&gp_XYZ::Modulus),
             R"#(computes Sqrt (X*X + Y*Y + Z*Z) where X, Y and Z are the three coordinates of this XYZ object.)#" )
        .def("SquareModulus",
             (Standard_Real (gp_XYZ::*)() const) static_cast<Standard_Real (gp_XYZ::*)() const>(&gp_XYZ::SquareModulus),
             R"#(Computes X*X + Y*Y + Z*Z where X, Y and Z are the three coordinates of this XYZ object.)#" )
        .def("IsEqual",
             (Standard_Boolean (gp_XYZ::*)( const gp_XYZ & , const Standard_Real ) const) static_cast<Standard_Boolean (gp_XYZ::*)( const gp_XYZ & , const Standard_Real ) const>(&gp_XYZ::IsEqual),
             R"#(Returns True if he coordinates of this XYZ object are equal to the respective coordinates Other, within the specified tolerance Tolerance. I.e.: abs(<me>.X() - Other.X()) <= Tolerance and abs(<me>.Y() - Other.Y()) <= Tolerance and abs(<me>.Z() - Other.Z()) <= Tolerance.)#"  , py::arg("Other"),  py::arg("Tolerance"))
        .def("Add",
             (void (gp_XYZ::*)( const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const gp_XYZ & ) >(&gp_XYZ::Add),
             R"#(<me>.X() = <me>.X() + Other.X() <me>.Y() = <me>.Y() + Other.Y() <me>.Z() = <me>.Z() + Other.Z())#"  , py::arg("Other"))
        .def("Added",
             (gp_XYZ (gp_XYZ::*)( const gp_XYZ & ) const) static_cast<gp_XYZ (gp_XYZ::*)( const gp_XYZ & ) const>(&gp_XYZ::Added),
             R"#(new.X() = <me>.X() + Other.X() new.Y() = <me>.Y() + Other.Y() new.Z() = <me>.Z() + Other.Z())#"  , py::arg("Other"))
        .def("Cross",
             (void (gp_XYZ::*)( const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const gp_XYZ & ) >(&gp_XYZ::Cross),
             R"#(<me>.X() = <me>.Y() * Other.Z() - <me>.Z() * Other.Y() <me>.Y() = <me>.Z() * Other.X() - <me>.X() * Other.Z() <me>.Z() = <me>.X() * Other.Y() - <me>.Y() * Other.X())#"  , py::arg("Right"))
        .def("Crossed",
             (gp_XYZ (gp_XYZ::*)( const gp_XYZ & ) const) static_cast<gp_XYZ (gp_XYZ::*)( const gp_XYZ & ) const>(&gp_XYZ::Crossed),
             R"#(new.X() = <me>.Y() * Other.Z() - <me>.Z() * Other.Y() new.Y() = <me>.Z() * Other.X() - <me>.X() * Other.Z() new.Z() = <me>.X() * Other.Y() - <me>.Y() * Other.X())#"  , py::arg("Right"))
        .def("CrossMagnitude",
             (Standard_Real (gp_XYZ::*)( const gp_XYZ & ) const) static_cast<Standard_Real (gp_XYZ::*)( const gp_XYZ & ) const>(&gp_XYZ::CrossMagnitude),
             R"#(Computes the magnitude of the cross product between <me> and Right. Returns || <me> ^ Right ||)#"  , py::arg("Right"))
        .def("CrossSquareMagnitude",
             (Standard_Real (gp_XYZ::*)( const gp_XYZ & ) const) static_cast<Standard_Real (gp_XYZ::*)( const gp_XYZ & ) const>(&gp_XYZ::CrossSquareMagnitude),
             R"#(Computes the square magnitude of the cross product between <me> and Right. Returns || <me> ^ Right ||**2)#"  , py::arg("Right"))
        .def("CrossCross",
             (void (gp_XYZ::*)( const gp_XYZ & , const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const gp_XYZ & , const gp_XYZ & ) >(&gp_XYZ::CrossCross),
             R"#(Triple vector product Computes <me> = <me>.Cross(Coord1.Cross(Coord2)))#"  , py::arg("Coord1"),  py::arg("Coord2"))
        .def("CrossCrossed",
             (gp_XYZ (gp_XYZ::*)( const gp_XYZ & , const gp_XYZ & ) const) static_cast<gp_XYZ (gp_XYZ::*)( const gp_XYZ & , const gp_XYZ & ) const>(&gp_XYZ::CrossCrossed),
             R"#(Triple vector product computes New = <me>.Cross(Coord1.Cross(Coord2)))#"  , py::arg("Coord1"),  py::arg("Coord2"))
        .def("Divide",
             (void (gp_XYZ::*)( const Standard_Real ) ) static_cast<void (gp_XYZ::*)( const Standard_Real ) >(&gp_XYZ::Divide),
             R"#(divides <me> by a real.)#"  , py::arg("Scalar"))
        .def("Divided",
             (gp_XYZ (gp_XYZ::*)( const Standard_Real ) const) static_cast<gp_XYZ (gp_XYZ::*)( const Standard_Real ) const>(&gp_XYZ::Divided),
             R"#(divides <me> by a real.)#"  , py::arg("Scalar"))
        .def("Dot",
             (Standard_Real (gp_XYZ::*)( const gp_XYZ & ) const) static_cast<Standard_Real (gp_XYZ::*)( const gp_XYZ & ) const>(&gp_XYZ::Dot),
             R"#(computes the scalar product between <me> and Other)#"  , py::arg("Other"))
        .def("DotCross",
             (Standard_Real (gp_XYZ::*)( const gp_XYZ & , const gp_XYZ & ) const) static_cast<Standard_Real (gp_XYZ::*)( const gp_XYZ & , const gp_XYZ & ) const>(&gp_XYZ::DotCross),
             R"#(computes the triple scalar product)#"  , py::arg("Coord1"),  py::arg("Coord2"))
        .def("Multiply",
             (void (gp_XYZ::*)( const Standard_Real ) ) static_cast<void (gp_XYZ::*)( const Standard_Real ) >(&gp_XYZ::Multiply),
             R"#(<me>.X() = <me>.X() * Scalar; <me>.Y() = <me>.Y() * Scalar; <me>.Z() = <me>.Z() * Scalar;)#"  , py::arg("Scalar"))
        .def("Multiply",
             (void (gp_XYZ::*)( const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const gp_XYZ & ) >(&gp_XYZ::Multiply),
             R"#(<me>.X() = <me>.X() * Other.X(); <me>.Y() = <me>.Y() * Other.Y(); <me>.Z() = <me>.Z() * Other.Z();)#"  , py::arg("Other"))
        .def("Multiply",
             (void (gp_XYZ::*)( const gp_Mat & ) ) static_cast<void (gp_XYZ::*)( const gp_Mat & ) >(&gp_XYZ::Multiply),
             R"#(<me> = Matrix * <me>)#"  , py::arg("Matrix"))
        .def("Multiplied",
             (gp_XYZ (gp_XYZ::*)( const Standard_Real ) const) static_cast<gp_XYZ (gp_XYZ::*)( const Standard_Real ) const>(&gp_XYZ::Multiplied),
             R"#(New.X() = <me>.X() * Scalar; New.Y() = <me>.Y() * Scalar; New.Z() = <me>.Z() * Scalar;)#"  , py::arg("Scalar"))
        .def("Multiplied",
             (gp_XYZ (gp_XYZ::*)( const gp_XYZ & ) const) static_cast<gp_XYZ (gp_XYZ::*)( const gp_XYZ & ) const>(&gp_XYZ::Multiplied),
             R"#(new.X() = <me>.X() * Other.X(); new.Y() = <me>.Y() * Other.Y(); new.Z() = <me>.Z() * Other.Z();)#"  , py::arg("Other"))
        .def("Multiplied",
             (gp_XYZ (gp_XYZ::*)( const gp_Mat & ) const) static_cast<gp_XYZ (gp_XYZ::*)( const gp_Mat & ) const>(&gp_XYZ::Multiplied),
             R"#(New = Matrix * <me>)#"  , py::arg("Matrix"))
        .def("Normalize",
             (void (gp_XYZ::*)() ) static_cast<void (gp_XYZ::*)() >(&gp_XYZ::Normalize),
             R"#(<me>.X() = <me>.X()/ <me>.Modulus() <me>.Y() = <me>.Y()/ <me>.Modulus() <me>.Z() = <me>.Z()/ <me>.Modulus() Raised if <me>.Modulus() <= Resolution from gp)#" )
        .def("Normalized",
             (gp_XYZ (gp_XYZ::*)() const) static_cast<gp_XYZ (gp_XYZ::*)() const>(&gp_XYZ::Normalized),
             R"#(New.X() = <me>.X()/ <me>.Modulus() New.Y() = <me>.Y()/ <me>.Modulus() New.Z() = <me>.Z()/ <me>.Modulus() Raised if <me>.Modulus() <= Resolution from gp)#" )
        .def("Reverse",
             (void (gp_XYZ::*)() ) static_cast<void (gp_XYZ::*)() >(&gp_XYZ::Reverse),
             R"#(<me>.X() = -<me>.X() <me>.Y() = -<me>.Y() <me>.Z() = -<me>.Z())#" )
        .def("Reversed",
             (gp_XYZ (gp_XYZ::*)() const) static_cast<gp_XYZ (gp_XYZ::*)() const>(&gp_XYZ::Reversed),
             R"#(New.X() = -<me>.X() New.Y() = -<me>.Y() New.Z() = -<me>.Z())#" )
        .def("Subtract",
             (void (gp_XYZ::*)( const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const gp_XYZ & ) >(&gp_XYZ::Subtract),
             R"#(<me>.X() = <me>.X() - Other.X() <me>.Y() = <me>.Y() - Other.Y() <me>.Z() = <me>.Z() - Other.Z())#"  , py::arg("Right"))
        .def("Subtracted",
             (gp_XYZ (gp_XYZ::*)( const gp_XYZ & ) const) static_cast<gp_XYZ (gp_XYZ::*)( const gp_XYZ & ) const>(&gp_XYZ::Subtracted),
             R"#(new.X() = <me>.X() - Other.X() new.Y() = <me>.Y() - Other.Y() new.Z() = <me>.Z() - Other.Z())#"  , py::arg("Right"))
        .def("SetLinearForm",
             (void (gp_XYZ::*)( const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & , const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & , const gp_XYZ & ) >(&gp_XYZ::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * XYZ1 + A2 * XYZ2 + A3 * XYZ3 + XYZ4)#"  , py::arg("A1"),  py::arg("XYZ1"),  py::arg("A2"),  py::arg("XYZ2"),  py::arg("A3"),  py::arg("XYZ3"),  py::arg("XYZ4"))
        .def("SetLinearForm",
             (void (gp_XYZ::*)( const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & ) >(&gp_XYZ::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * XYZ1 + A2 * XYZ2 + A3 * XYZ3)#"  , py::arg("A1"),  py::arg("XYZ1"),  py::arg("A2"),  py::arg("XYZ2"),  py::arg("A3"),  py::arg("XYZ3"))
        .def("SetLinearForm",
             (void (gp_XYZ::*)( const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & , const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & , const gp_XYZ & ) >(&gp_XYZ::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * XYZ1 + A2 * XYZ2 + XYZ3)#"  , py::arg("A1"),  py::arg("XYZ1"),  py::arg("A2"),  py::arg("XYZ2"),  py::arg("XYZ3"))
        .def("SetLinearForm",
             (void (gp_XYZ::*)( const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & ) >(&gp_XYZ::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * XYZ1 + A2 * XYZ2)#"  , py::arg("A1"),  py::arg("XYZ1"),  py::arg("A2"),  py::arg("XYZ2"))
        .def("SetLinearForm",
             (void (gp_XYZ::*)( const Standard_Real , const gp_XYZ & , const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const Standard_Real , const gp_XYZ & , const gp_XYZ & ) >(&gp_XYZ::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * XYZ1 + XYZ2)#"  , py::arg("A1"),  py::arg("XYZ1"),  py::arg("XYZ2"))
        .def("SetLinearForm",
             (void (gp_XYZ::*)( const gp_XYZ & , const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const gp_XYZ & , const gp_XYZ & ) >(&gp_XYZ::SetLinearForm),
             R"#(<me> is set to the following linear form : XYZ1 + XYZ2)#"  , py::arg("XYZ1"),  py::arg("XYZ2"))
        .def("DumpJson",
             (void (gp_XYZ::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (gp_XYZ::*)( std::ostream & , const Standard_Integer ) const>(&gp_XYZ::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
        .def("SetCoord",
             (void (gp_XYZ::*)( const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (gp_XYZ::*)( const Standard_Real , const Standard_Real , const Standard_Real ) >(&gp_XYZ::SetCoord),
             R"#(For this XYZ object, assigns the values X, Y and Z to its three coordinates)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"))
        .def("SetCoord",
             (void (gp_XYZ::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (gp_XYZ::*)( const Standard_Integer , const Standard_Real ) >(&gp_XYZ::SetCoord),
             R"#(modifies the coordinate of range Index Index = 1 => X is modified Index = 2 => Y is modified Index = 3 => Z is modified Raises OutOfRange if Index != {1, 2, 3}.)#"  , py::arg("i"),  py::arg("X"))
        .def("SetX",
             (void (gp_XYZ::*)( const Standard_Real ) ) static_cast<void (gp_XYZ::*)( const Standard_Real ) >(&gp_XYZ::SetX),
             R"#(Assigns the given value to the X coordinate)#"  , py::arg("X"))
        .def("SetY",
             (void (gp_XYZ::*)( const Standard_Real ) ) static_cast<void (gp_XYZ::*)( const Standard_Real ) >(&gp_XYZ::SetY),
             R"#(Assigns the given value to the Y coordinate)#"  , py::arg("Y"))
        .def("SetZ",
             (void (gp_XYZ::*)( const Standard_Real ) ) static_cast<void (gp_XYZ::*)( const Standard_Real ) >(&gp_XYZ::SetZ),
             R"#(Assigns the given value to the Z coordinate)#"  , py::arg("Z"))
        .def("Coord",
             (Standard_Real (gp_XYZ::*)( const Standard_Integer ) const) static_cast<Standard_Real (gp_XYZ::*)( const Standard_Integer ) const>(&gp_XYZ::Coord),
             R"#(returns the coordinate of range Index : Index = 1 => X is returned Index = 2 => Y is returned Index = 3 => Z is returned)#"  , py::arg("i"))
        .def("ChangeCoord",
             (Standard_Real & (gp_XYZ::*)( const Standard_Integer ) ) static_cast<Standard_Real & (gp_XYZ::*)( const Standard_Integer ) >(&gp_XYZ::ChangeCoord),
             R"#(None)#"  , py::arg("theIndex"))
        .def("X",
             (Standard_Real (gp_XYZ::*)() const) static_cast<Standard_Real (gp_XYZ::*)() const>(&gp_XYZ::X),
             R"#(Returns the X coordinate)#" )
        .def("Y",
             (Standard_Real (gp_XYZ::*)() const) static_cast<Standard_Real (gp_XYZ::*)() const>(&gp_XYZ::Y),
             R"#(Returns the Y coordinate)#" )
        .def("Z",
             (Standard_Real (gp_XYZ::*)() const) static_cast<Standard_Real (gp_XYZ::*)() const>(&gp_XYZ::Z),
             R"#(Returns the Z coordinate)#" )
        .def("Modulus",
             (Standard_Real (gp_XYZ::*)() const) static_cast<Standard_Real (gp_XYZ::*)() const>(&gp_XYZ::Modulus),
             R"#(computes Sqrt (X*X + Y*Y + Z*Z) where X, Y and Z are the three coordinates of this XYZ object.)#" )
        .def("SquareModulus",
             (Standard_Real (gp_XYZ::*)() const) static_cast<Standard_Real (gp_XYZ::*)() const>(&gp_XYZ::SquareModulus),
             R"#(Computes X*X + Y*Y + Z*Z where X, Y and Z are the three coordinates of this XYZ object.)#" )
        .def("Add",
             (void (gp_XYZ::*)( const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const gp_XYZ & ) >(&gp_XYZ::Add),
             R"#(<me>.X() = <me>.X() + Other.X() <me>.Y() = <me>.Y() + Other.Y() <me>.Z() = <me>.Z() + Other.Z())#"  , py::arg("Other"))
        .def("Added",
             (gp_XYZ (gp_XYZ::*)( const gp_XYZ & ) const) static_cast<gp_XYZ (gp_XYZ::*)( const gp_XYZ & ) const>(&gp_XYZ::Added),
             R"#(new.X() = <me>.X() + Other.X() new.Y() = <me>.Y() + Other.Y() new.Z() = <me>.Z() + Other.Z())#"  , py::arg("Other"))
        .def("Cross",
             (void (gp_XYZ::*)( const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const gp_XYZ & ) >(&gp_XYZ::Cross),
             R"#(<me>.X() = <me>.Y() * Other.Z() - <me>.Z() * Other.Y() <me>.Y() = <me>.Z() * Other.X() - <me>.X() * Other.Z() <me>.Z() = <me>.X() * Other.Y() - <me>.Y() * Other.X())#"  , py::arg("Right"))
        .def("Crossed",
             (gp_XYZ (gp_XYZ::*)( const gp_XYZ & ) const) static_cast<gp_XYZ (gp_XYZ::*)( const gp_XYZ & ) const>(&gp_XYZ::Crossed),
             R"#(new.X() = <me>.Y() * Other.Z() - <me>.Z() * Other.Y() new.Y() = <me>.Z() * Other.X() - <me>.X() * Other.Z() new.Z() = <me>.X() * Other.Y() - <me>.Y() * Other.X())#"  , py::arg("Right"))
        .def("CrossMagnitude",
             (Standard_Real (gp_XYZ::*)( const gp_XYZ & ) const) static_cast<Standard_Real (gp_XYZ::*)( const gp_XYZ & ) const>(&gp_XYZ::CrossMagnitude),
             R"#(Computes the magnitude of the cross product between <me> and Right. Returns || <me> ^ Right ||)#"  , py::arg("Right"))
        .def("CrossSquareMagnitude",
             (Standard_Real (gp_XYZ::*)( const gp_XYZ & ) const) static_cast<Standard_Real (gp_XYZ::*)( const gp_XYZ & ) const>(&gp_XYZ::CrossSquareMagnitude),
             R"#(Computes the square magnitude of the cross product between <me> and Right. Returns || <me> ^ Right ||**2)#"  , py::arg("Right"))
        .def("CrossCross",
             (void (gp_XYZ::*)( const gp_XYZ & , const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const gp_XYZ & , const gp_XYZ & ) >(&gp_XYZ::CrossCross),
             R"#(Triple vector product Computes <me> = <me>.Cross(Coord1.Cross(Coord2)))#"  , py::arg("Coord1"),  py::arg("Coord2"))
        .def("CrossCrossed",
             (gp_XYZ (gp_XYZ::*)( const gp_XYZ & , const gp_XYZ & ) const) static_cast<gp_XYZ (gp_XYZ::*)( const gp_XYZ & , const gp_XYZ & ) const>(&gp_XYZ::CrossCrossed),
             R"#(Triple vector product computes New = <me>.Cross(Coord1.Cross(Coord2)))#"  , py::arg("Coord1"),  py::arg("Coord2"))
        .def("Divide",
             (void (gp_XYZ::*)( const Standard_Real ) ) static_cast<void (gp_XYZ::*)( const Standard_Real ) >(&gp_XYZ::Divide),
             R"#(divides <me> by a real.)#"  , py::arg("Scalar"))
        .def("Divided",
             (gp_XYZ (gp_XYZ::*)( const Standard_Real ) const) static_cast<gp_XYZ (gp_XYZ::*)( const Standard_Real ) const>(&gp_XYZ::Divided),
             R"#(divides <me> by a real.)#"  , py::arg("Scalar"))
        .def("Dot",
             (Standard_Real (gp_XYZ::*)( const gp_XYZ & ) const) static_cast<Standard_Real (gp_XYZ::*)( const gp_XYZ & ) const>(&gp_XYZ::Dot),
             R"#(computes the scalar product between <me> and Other)#"  , py::arg("Other"))
        .def("DotCross",
             (Standard_Real (gp_XYZ::*)( const gp_XYZ & , const gp_XYZ & ) const) static_cast<Standard_Real (gp_XYZ::*)( const gp_XYZ & , const gp_XYZ & ) const>(&gp_XYZ::DotCross),
             R"#(computes the triple scalar product)#"  , py::arg("Coord1"),  py::arg("Coord2"))
        .def("Multiply",
             (void (gp_XYZ::*)( const Standard_Real ) ) static_cast<void (gp_XYZ::*)( const Standard_Real ) >(&gp_XYZ::Multiply),
             R"#(<me>.X() = <me>.X() * Scalar; <me>.Y() = <me>.Y() * Scalar; <me>.Z() = <me>.Z() * Scalar;)#"  , py::arg("Scalar"))
        .def("Multiply",
             (void (gp_XYZ::*)( const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const gp_XYZ & ) >(&gp_XYZ::Multiply),
             R"#(<me>.X() = <me>.X() * Other.X(); <me>.Y() = <me>.Y() * Other.Y(); <me>.Z() = <me>.Z() * Other.Z();)#"  , py::arg("Other"))
        .def("Multiply",
             (void (gp_XYZ::*)( const gp_Mat & ) ) static_cast<void (gp_XYZ::*)( const gp_Mat & ) >(&gp_XYZ::Multiply),
             R"#(<me> = Matrix * <me>)#"  , py::arg("Matrix"))
        .def("Multiplied",
             (gp_XYZ (gp_XYZ::*)( const Standard_Real ) const) static_cast<gp_XYZ (gp_XYZ::*)( const Standard_Real ) const>(&gp_XYZ::Multiplied),
             R"#(New.X() = <me>.X() * Scalar; New.Y() = <me>.Y() * Scalar; New.Z() = <me>.Z() * Scalar;)#"  , py::arg("Scalar"))
        .def("Multiplied",
             (gp_XYZ (gp_XYZ::*)( const gp_XYZ & ) const) static_cast<gp_XYZ (gp_XYZ::*)( const gp_XYZ & ) const>(&gp_XYZ::Multiplied),
             R"#(new.X() = <me>.X() * Other.X(); new.Y() = <me>.Y() * Other.Y(); new.Z() = <me>.Z() * Other.Z();)#"  , py::arg("Other"))
        .def("Multiplied",
             (gp_XYZ (gp_XYZ::*)( const gp_Mat & ) const) static_cast<gp_XYZ (gp_XYZ::*)( const gp_Mat & ) const>(&gp_XYZ::Multiplied),
             R"#(New = Matrix * <me>)#"  , py::arg("Matrix"))
        .def("Normalize",
             (void (gp_XYZ::*)() ) static_cast<void (gp_XYZ::*)() >(&gp_XYZ::Normalize),
             R"#(<me>.X() = <me>.X()/ <me>.Modulus() <me>.Y() = <me>.Y()/ <me>.Modulus() <me>.Z() = <me>.Z()/ <me>.Modulus() Raised if <me>.Modulus() <= Resolution from gp)#" )
        .def("Normalized",
             (gp_XYZ (gp_XYZ::*)() const) static_cast<gp_XYZ (gp_XYZ::*)() const>(&gp_XYZ::Normalized),
             R"#(New.X() = <me>.X()/ <me>.Modulus() New.Y() = <me>.Y()/ <me>.Modulus() New.Z() = <me>.Z()/ <me>.Modulus() Raised if <me>.Modulus() <= Resolution from gp)#" )
        .def("Reverse",
             (void (gp_XYZ::*)() ) static_cast<void (gp_XYZ::*)() >(&gp_XYZ::Reverse),
             R"#(<me>.X() = -<me>.X() <me>.Y() = -<me>.Y() <me>.Z() = -<me>.Z())#" )
        .def("Reversed",
             (gp_XYZ (gp_XYZ::*)() const) static_cast<gp_XYZ (gp_XYZ::*)() const>(&gp_XYZ::Reversed),
             R"#(New.X() = -<me>.X() New.Y() = -<me>.Y() New.Z() = -<me>.Z())#" )
        .def("Subtract",
             (void (gp_XYZ::*)( const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const gp_XYZ & ) >(&gp_XYZ::Subtract),
             R"#(<me>.X() = <me>.X() - Other.X() <me>.Y() = <me>.Y() - Other.Y() <me>.Z() = <me>.Z() - Other.Z())#"  , py::arg("Right"))
        .def("Subtracted",
             (gp_XYZ (gp_XYZ::*)( const gp_XYZ & ) const) static_cast<gp_XYZ (gp_XYZ::*)( const gp_XYZ & ) const>(&gp_XYZ::Subtracted),
             R"#(new.X() = <me>.X() - Other.X() new.Y() = <me>.Y() - Other.Y() new.Z() = <me>.Z() - Other.Z())#"  , py::arg("Right"))
        .def("SetLinearForm",
             (void (gp_XYZ::*)( const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & ) >(&gp_XYZ::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * XYZ1 + A2 * XYZ2)#"  , py::arg("L"),  py::arg("Left"),  py::arg("R"),  py::arg("Right"))
        .def("SetLinearForm",
             (void (gp_XYZ::*)( const Standard_Real , const gp_XYZ & , const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const Standard_Real , const gp_XYZ & , const gp_XYZ & ) >(&gp_XYZ::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * XYZ1 + XYZ2)#"  , py::arg("L"),  py::arg("Left"),  py::arg("Right"))
        .def("SetLinearForm",
             (void (gp_XYZ::*)( const gp_XYZ & , const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const gp_XYZ & , const gp_XYZ & ) >(&gp_XYZ::SetLinearForm),
             R"#(<me> is set to the following linear form : XYZ1 + XYZ2)#"  , py::arg("Left"),  py::arg("Right"))
        .def("SetLinearForm",
             (void (gp_XYZ::*)( const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & ) >(&gp_XYZ::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * XYZ1 + A2 * XYZ2 + A3 * XYZ3)#"  , py::arg("A1"),  py::arg("XYZ1"),  py::arg("A2"),  py::arg("XYZ2"),  py::arg("A3"),  py::arg("XYZ3"))
        .def("SetLinearForm",
             (void (gp_XYZ::*)( const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & , const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & , const gp_XYZ & ) >(&gp_XYZ::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * XYZ1 + A2 * XYZ2 + XYZ3)#"  , py::arg("A1"),  py::arg("XYZ1"),  py::arg("A2"),  py::arg("XYZ2"),  py::arg("XYZ3"))
        .def("SetLinearForm",
             (void (gp_XYZ::*)( const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & , const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & , const Standard_Real , const gp_XYZ & , const gp_XYZ & ) >(&gp_XYZ::SetLinearForm),
             R"#(<me> is set to the following linear form : A1 * XYZ1 + A2 * XYZ2 + A3 * XYZ3 + XYZ4)#"  , py::arg("A1"),  py::arg("XYZ1"),  py::arg("A2"),  py::arg("XYZ2"),  py::arg("A3"),  py::arg("XYZ3"),  py::arg("XYZ4"))
    // methods using call by reference i.s.o. return
        .def("Coord",
             []( gp_XYZ &self   ){ Standard_Real  X; Standard_Real  Y; Standard_Real  Z; self.Coord(X,Y,Z); return std::make_tuple(X,Y,Z); },
             R"#(None)#" )
        .def("Coord",
             []( gp_XYZ &self   ){ Standard_Real  X; Standard_Real  Y; Standard_Real  Z; self.Coord(X,Y,Z); return std::make_tuple(X,Y,Z); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
        .def("__iadd__",
             (void (gp_XYZ::*)( const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const gp_XYZ & ) >(&gp_XYZ::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__add__",
             (gp_XYZ (gp_XYZ::*)( const gp_XYZ & ) const) static_cast<gp_XYZ (gp_XYZ::*)( const gp_XYZ & ) const>(&gp_XYZ::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__ipow__",
             (void (gp_XYZ::*)( const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const gp_XYZ & ) >(&gp_XYZ::operator^=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__pow__",
             (gp_XYZ (gp_XYZ::*)( const gp_XYZ & ) const) static_cast<gp_XYZ (gp_XYZ::*)( const gp_XYZ & ) const>(&gp_XYZ::operator^),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__itruediv__",
             (void (gp_XYZ::*)( const Standard_Real ) ) static_cast<void (gp_XYZ::*)( const Standard_Real ) >(&gp_XYZ::operator/=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__truediv__",
             (gp_XYZ (gp_XYZ::*)( const Standard_Real ) const) static_cast<gp_XYZ (gp_XYZ::*)( const Standard_Real ) const>(&gp_XYZ::operator/),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__mul__",
             (Standard_Real (gp_XYZ::*)( const gp_XYZ & ) const) static_cast<Standard_Real (gp_XYZ::*)( const gp_XYZ & ) const>(&gp_XYZ::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__rmul__",
             (Standard_Real (gp_XYZ::*)( const gp_XYZ & ) const) static_cast<Standard_Real (gp_XYZ::*)( const gp_XYZ & ) const>(&gp_XYZ::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__imul__",
             (void (gp_XYZ::*)( const Standard_Real ) ) static_cast<void (gp_XYZ::*)( const Standard_Real ) >(&gp_XYZ::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__imul__",
             (void (gp_XYZ::*)( const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const gp_XYZ & ) >(&gp_XYZ::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__imul__",
             (void (gp_XYZ::*)( const gp_Mat & ) ) static_cast<void (gp_XYZ::*)( const gp_Mat & ) >(&gp_XYZ::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Matrix"))
        .def("__mul__",
             (gp_XYZ (gp_XYZ::*)( const Standard_Real ) const) static_cast<gp_XYZ (gp_XYZ::*)( const Standard_Real ) const>(&gp_XYZ::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__rmul__",
             (gp_XYZ (gp_XYZ::*)( const Standard_Real ) const) static_cast<gp_XYZ (gp_XYZ::*)( const Standard_Real ) const>(&gp_XYZ::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__mul__",
             (gp_XYZ (gp_XYZ::*)( const gp_Mat & ) const) static_cast<gp_XYZ (gp_XYZ::*)( const gp_Mat & ) const>(&gp_XYZ::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Matrix"))
        .def("__rmul__",
             (gp_XYZ (gp_XYZ::*)( const gp_Mat & ) const) static_cast<gp_XYZ (gp_XYZ::*)( const gp_Mat & ) const>(&gp_XYZ::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Matrix"))
        .def("__isub__",
             (void (gp_XYZ::*)( const gp_XYZ & ) ) static_cast<void (gp_XYZ::*)( const gp_XYZ & ) >(&gp_XYZ::operator-=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__sub__",
             (gp_XYZ (gp_XYZ::*)( const gp_XYZ & ) const) static_cast<gp_XYZ (gp_XYZ::*)( const gp_XYZ & ) const>(&gp_XYZ::operator-),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
    // additional methods and static methods
;

// functions
// ./opencascade/gp_Pnt.hxx
// ./opencascade/gp_Elips.hxx
// ./opencascade/gp_Torus.hxx
// ./opencascade/gp_Sphere.hxx
// ./opencascade/gp_QuaternionSLerp.hxx
// ./opencascade/gp_Pnt2d.hxx
// ./opencascade/gp_Ax22d.hxx
// ./opencascade/gp_Mat2d.hxx
// ./opencascade/gp_Ax2.hxx
// ./opencascade/gp_GTrsf2d.hxx
// ./opencascade/gp_Trsf.hxx
// ./opencascade/gp_Cylinder.hxx
// ./opencascade/gp_Ax3.hxx
// ./opencascade/gp_Circ2d.hxx
// ./opencascade/gp_Vec.hxx
// ./opencascade/gp_VectorWithNullMagnitude.hxx
// ./opencascade/gp_XY.hxx
// ./opencascade/gp_Lin2d.hxx
// ./opencascade/gp_Ax1.hxx
// ./opencascade/gp_Cone.hxx
// ./opencascade/gp_Elips2d.hxx
// ./opencascade/gp_Dir2d.hxx
// ./opencascade/gp_TrsfNLerp.hxx
// ./opencascade/gp_Lin.hxx
// ./opencascade/gp_GTrsf.hxx
// ./opencascade/gp_TrsfForm.hxx
// ./opencascade/gp_Hypr2d.hxx
// ./opencascade/gp_Ax2d.hxx
// ./opencascade/gp_Parab.hxx
// ./opencascade/gp_Dir.hxx
// ./opencascade/gp_Hypr.hxx
// ./opencascade/gp_QuaternionNLerp.hxx
// ./opencascade/gp_Quaternion.hxx
// ./opencascade/gp_Parab2d.hxx
// ./opencascade/gp_Mat.hxx
// ./opencascade/gp_XYZ.hxx
// ./opencascade/gp_Vec2d.hxx
// ./opencascade/gp.hxx
// ./opencascade/gp_EulerSequence.hxx
// ./opencascade/gp_Trsf2d.hxx
// ./opencascade/gp_Circ.hxx
// ./opencascade/gp_Pln.hxx

// Additional functions

// operators
    m.def("__mul__",
          (gp_Mat2d (*)( const Standard_Real , const gp_Mat2d & ))  static_cast<gp_Mat2d (*)( const Standard_Real , const gp_Mat2d & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("Scalar"),  py::arg("Mat2D"));
    m.def("__rmul__",
          (gp_Mat2d (*)( const Standard_Real , const gp_Mat2d & ))  static_cast<gp_Mat2d (*)( const Standard_Real , const gp_Mat2d & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("Scalar"),  py::arg("Mat2D"));
    m.def("__mul__",
          (gp_Vec (*)( const Standard_Real , const gp_Vec & ))  static_cast<gp_Vec (*)( const Standard_Real , const gp_Vec & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("Scalar"),  py::arg("V"));
    m.def("__rmul__",
          (gp_Vec (*)( const Standard_Real , const gp_Vec & ))  static_cast<gp_Vec (*)( const Standard_Real , const gp_Vec & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("Scalar"),  py::arg("V"));
    m.def("__mul__",
          (gp_XY (*)( const gp_Mat2d & , const gp_XY & ))  static_cast<gp_XY (*)( const gp_Mat2d & , const gp_XY & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("Matrix"),  py::arg("Coord1"));
    m.def("__rmul__",
          (gp_XY (*)( const gp_Mat2d & , const gp_XY & ))  static_cast<gp_XY (*)( const gp_Mat2d & , const gp_XY & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("Matrix"),  py::arg("Coord1"));
    m.def("__mul__",
          (gp_XY (*)( const Standard_Real , const gp_XY & ))  static_cast<gp_XY (*)( const Standard_Real , const gp_XY & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("Scalar"),  py::arg("Coord1"));
    m.def("__rmul__",
          (gp_XY (*)( const Standard_Real , const gp_XY & ))  static_cast<gp_XY (*)( const Standard_Real , const gp_XY & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("Scalar"),  py::arg("Coord1"));
    m.def("__mul__",
          (gp_Mat (*)( const Standard_Real , const gp_Mat & ))  static_cast<gp_Mat (*)( const Standard_Real , const gp_Mat & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("Scalar"),  py::arg("Mat3D"));
    m.def("__rmul__",
          (gp_Mat (*)( const Standard_Real , const gp_Mat & ))  static_cast<gp_Mat (*)( const Standard_Real , const gp_Mat & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("Scalar"),  py::arg("Mat3D"));
    m.def("__mul__",
          (gp_XYZ (*)( const gp_Mat & , const gp_XYZ & ))  static_cast<gp_XYZ (*)( const gp_Mat & , const gp_XYZ & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("Matrix"),  py::arg("Coord1"));
    m.def("__rmul__",
          (gp_XYZ (*)( const gp_Mat & , const gp_XYZ & ))  static_cast<gp_XYZ (*)( const gp_Mat & , const gp_XYZ & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("Matrix"),  py::arg("Coord1"));
    m.def("__mul__",
          (gp_XYZ (*)( const Standard_Real , const gp_XYZ & ))  static_cast<gp_XYZ (*)( const Standard_Real , const gp_XYZ & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("Scalar"),  py::arg("Coord1"));
    m.def("__rmul__",
          (gp_XYZ (*)( const Standard_Real , const gp_XYZ & ))  static_cast<gp_XYZ (*)( const Standard_Real , const gp_XYZ & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("Scalar"),  py::arg("Coord1"));
    m.def("__mul__",
          (gp_Vec2d (*)( const Standard_Real , const gp_Vec2d & ))  static_cast<gp_Vec2d (*)( const Standard_Real , const gp_Vec2d & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("Scalar"),  py::arg("V"));
    m.def("__rmul__",
          (gp_Vec2d (*)( const Standard_Real , const gp_Vec2d & ))  static_cast<gp_Vec2d (*)( const Standard_Real , const gp_Vec2d & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("Scalar"),  py::arg("V"));

// register typdefs


// exceptions
register_occ_exception<gp_VectorWithNullMagnitude>(m, "gp_VectorWithNullMagnitude");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

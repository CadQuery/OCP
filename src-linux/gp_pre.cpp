
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

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
void register_gp_enums(py::module &main_module) {


py::module m = main_module.def_submodule("gp", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<gp_TrsfForm>(m, "gp_TrsfForm",R"#(Identifies the type of a geometric transformation.)#")
        .value("gp_Identity",gp_TrsfForm::gp_Identity)
        .value("gp_Rotation",gp_TrsfForm::gp_Rotation)
        .value("gp_Translation",gp_TrsfForm::gp_Translation)
        .value("gp_PntMirror",gp_TrsfForm::gp_PntMirror)
        .value("gp_Ax1Mirror",gp_TrsfForm::gp_Ax1Mirror)
        .value("gp_Ax2Mirror",gp_TrsfForm::gp_Ax2Mirror)
        .value("gp_Scale",gp_TrsfForm::gp_Scale)
        .value("gp_CompoundTrsf",gp_TrsfForm::gp_CompoundTrsf)
        .value("gp_Other",gp_TrsfForm::gp_Other).export_values();
    py::enum_<gp_EulerSequence>(m, "gp_EulerSequence",R"#(Enumerates all 24 possible variants of generalized Euler angles, defining general 3d rotation by three rotations around main axes of coordinate system, in different possible orders.)#")
        .value("gp_EulerAngles",gp_EulerSequence::gp_EulerAngles)
        .value("gp_YawPitchRoll",gp_EulerSequence::gp_YawPitchRoll)
        .value("gp_Extrinsic_XYZ",gp_EulerSequence::gp_Extrinsic_XYZ)
        .value("gp_Extrinsic_XZY",gp_EulerSequence::gp_Extrinsic_XZY)
        .value("gp_Extrinsic_YZX",gp_EulerSequence::gp_Extrinsic_YZX)
        .value("gp_Extrinsic_YXZ",gp_EulerSequence::gp_Extrinsic_YXZ)
        .value("gp_Extrinsic_ZXY",gp_EulerSequence::gp_Extrinsic_ZXY)
        .value("gp_Extrinsic_ZYX",gp_EulerSequence::gp_Extrinsic_ZYX)
        .value("gp_Intrinsic_XYZ",gp_EulerSequence::gp_Intrinsic_XYZ)
        .value("gp_Intrinsic_XZY",gp_EulerSequence::gp_Intrinsic_XZY)
        .value("gp_Intrinsic_YZX",gp_EulerSequence::gp_Intrinsic_YZX)
        .value("gp_Intrinsic_YXZ",gp_EulerSequence::gp_Intrinsic_YXZ)
        .value("gp_Intrinsic_ZXY",gp_EulerSequence::gp_Intrinsic_ZXY)
        .value("gp_Intrinsic_ZYX",gp_EulerSequence::gp_Intrinsic_ZYX)
        .value("gp_Extrinsic_XYX",gp_EulerSequence::gp_Extrinsic_XYX)
        .value("gp_Extrinsic_XZX",gp_EulerSequence::gp_Extrinsic_XZX)
        .value("gp_Extrinsic_YZY",gp_EulerSequence::gp_Extrinsic_YZY)
        .value("gp_Extrinsic_YXY",gp_EulerSequence::gp_Extrinsic_YXY)
        .value("gp_Extrinsic_ZYZ",gp_EulerSequence::gp_Extrinsic_ZYZ)
        .value("gp_Extrinsic_ZXZ",gp_EulerSequence::gp_Extrinsic_ZXZ)
        .value("gp_Intrinsic_XYX",gp_EulerSequence::gp_Intrinsic_XYX)
        .value("gp_Intrinsic_XZX",gp_EulerSequence::gp_Intrinsic_XZX)
        .value("gp_Intrinsic_YZY",gp_EulerSequence::gp_Intrinsic_YZY)
        .value("gp_Intrinsic_YXY",gp_EulerSequence::gp_Intrinsic_YXY)
        .value("gp_Intrinsic_ZXZ",gp_EulerSequence::gp_Intrinsic_ZXZ)
        .value("gp_Intrinsic_ZYZ",gp_EulerSequence::gp_Intrinsic_ZYZ).export_values();

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<NCollection_Lerp<gp_Trsf> , shared_ptr<NCollection_Lerp<gp_Trsf>> >(m,"NCollection_Lerp_gp_Trsf",R"#(Linear interpolation tool for transformation defined by gp_Trsf.)#");
    py::class_<gp , shared_ptr<gp> >(m,"gp",R"#(The geometric processor package, called gp, provides an implementation of entities used : . for algebraic calculation such as "XYZ" coordinates, "Mat" matrix . for basis analytic geometry such as Transformations, point, vector, line, plane, axis placement, conics, and elementary surfaces. These entities are defined in 2d and 3d space. All the classes of this package are non-persistent.)#");
    py::class_<gp_Ax1 , shared_ptr<gp_Ax1> >(m,"gp_Ax1",R"#(Describes an axis in 3D space. An axis is defined by: - its origin (also referred to as its "Location point"), and - its unit vector (referred to as its "Direction" or "main Direction"). An axis is used: - to describe 3D geometric entities (for example, the axis of a revolution entity). It serves the same purpose as the STEP function "axis placement one axis", or - to define geometric transformations (axis of symmetry, axis of rotation, and so on). For example, this entity can be used to locate a geometric entity or to define a symmetry axis.)#");
    py::class_<gp_Ax2 , shared_ptr<gp_Ax2> >(m,"gp_Ax2",R"#(Describes a right-handed coordinate system in 3D space. A coordinate system is defined by: - its origin (also referred to as its "Location point"), and - three orthogonal unit vectors, termed respectively the "X Direction", the "Y Direction" and the "Direction" (also referred to as the "main Direction"). The "Direction" of the coordinate system is called its "main Direction" because whenever this unit vector is modified, the "X Direction" and the "Y Direction" are recomputed. However, when we modify either the "X Direction" or the "Y Direction", "Direction" is not modified. The "main Direction" is also the "Z Direction". Since an Ax2 coordinate system is right-handed, its "main Direction" is always equal to the cross product of its "X Direction" and "Y Direction". (To define a left-handed coordinate system, use gp_Ax3.) A coordinate system is used: - to describe geometric entities, in particular to position them. The local coordinate system of a geometric entity serves the same purpose as the STEP function "axis placement two axes", or - to define geometric transformations. Note: we refer to the "X Axis", "Y Axis" and "Z Axis", respectively, as to axes having: - the origin of the coordinate system as their origin, and - the unit vectors "X Direction", "Y Direction" and "main Direction", respectively, as their unit vectors. The "Z Axis" is also the "main Axis".)#");
    py::class_<gp_Ax22d , shared_ptr<gp_Ax22d> >(m,"gp_Ax22d",R"#(Describes a coordinate system in a plane (2D space). A coordinate system is defined by: - its origin (also referred to as its "Location point"), and - two orthogonal unit vectors, respectively, called the "X Direction" and the "Y Direction". A gp_Ax22d may be right-handed ("direct sense") or left-handed ("inverse" or "indirect sense"). You use a gp_Ax22d to: - describe 2D geometric entities, in particular to position them. The local coordinate system of a geometric entity serves for the same purpose as the STEP function "axis placement two axes", or - define geometric transformations. Note: we refer to the "X Axis" and "Y Axis" as the axes having: - the origin of the coordinate system as their origin, and - the unit vectors "X Direction" and "Y Direction", respectively, as their unit vectors.)#");
    py::class_<gp_Ax2d , shared_ptr<gp_Ax2d> >(m,"gp_Ax2d",R"#(Describes an axis in the plane (2D space). An axis is defined by: - its origin (also referred to as its "Location point"), and - its unit vector (referred to as its "Direction"). An axis implicitly defines a direct, right-handed coordinate system in 2D space by: - its origin, - its "Direction" (giving the "X Direction" of the coordinate system), and - the unit vector normal to "Direction" (positive angle measured in the trigonometric sense). An axis is used: - to describe 2D geometric entities (for example, the axis which defines angular coordinates on a circle). It serves for the same purpose as the STEP function "axis placement one axis", or - to define geometric transformations (axis of symmetry, axis of rotation, and so on). Note: to define a left-handed 2D coordinate system, use gp_Ax22d.)#");
    py::class_<gp_Ax3 , shared_ptr<gp_Ax3> >(m,"gp_Ax3",R"#(Describes a coordinate system in 3D space. Unlike a gp_Ax2 coordinate system, a gp_Ax3 can be right-handed ("direct sense") or left-handed ("indirect sense"). A coordinate system is defined by: - its origin (also referred to as its "Location point"), and - three orthogonal unit vectors, termed the "X Direction", the "Y Direction" and the "Direction" (also referred to as the "main Direction"). The "Direction" of the coordinate system is called its "main Direction" because whenever this unit vector is modified, the "X Direction" and the "Y Direction" are recomputed. However, when we modify either the "X Direction" or the "Y Direction", "Direction" is not modified. "Direction" is also the "Z Direction". The "main Direction" is always parallel to the cross product of its "X Direction" and "Y Direction". If the coordinate system is right-handed, it satisfies the equation: "main Direction" = "X Direction" ^ "Y Direction" and if it is left-handed, it satisfies the equation: "main Direction" = -"X Direction" ^ "Y Direction" A coordinate system is used: - to describe geometric entities, in particular to position them. The local coordinate system of a geometric entity serves the same purpose as the STEP function "axis placement three axes", or - to define geometric transformations. Note: - We refer to the "X Axis", "Y Axis" and "Z Axis", respectively, as the axes having: - the origin of the coordinate system as their origin, and - the unit vectors "X Direction", "Y Direction" and "main Direction", respectively, as their unit vectors. - The "Z Axis" is also the "main Axis". - gp_Ax2 is used to define a coordinate system that must be always right-handed.)#");
    py::class_<gp_Circ , shared_ptr<gp_Circ> >(m,"gp_Circ",R"#(Describes a circle in 3D space. A circle is defined by its radius and positioned in space with a coordinate system (a gp_Ax2 object) as follows: - the origin of the coordinate system is the center of the circle, and - the origin, "X Direction" and "Y Direction" of the coordinate system define the plane of the circle. This positioning coordinate system is the "local coordinate system" of the circle. Its "main Direction" gives the normal vector to the plane of the circle. The "main Axis" of the coordinate system is referred to as the "Axis" of the circle. Note: when a gp_Circ circle is converted into a Geom_Circle circle, some implicit properties of the circle are used explicitly: - the "main Direction" of the local coordinate system gives an implicit orientation to the circle (and defines its trigonometric sense), - this orientation corresponds to the direction in which parameter values increase, - the starting point for parameterization is that of the "X Axis" of the local coordinate system (i.e. the "X Axis" of the circle). See Also gce_MakeCirc which provides functions for more complex circle constructions Geom_Circle which provides additional functions for constructing circles and works, in particular, with the parametric equations of circles)#");
    py::class_<gp_Circ2d , shared_ptr<gp_Circ2d> >(m,"gp_Circ2d",R"#(Describes a circle in the plane (2D space). A circle is defined by its radius and positioned in the plane with a coordinate system (a gp_Ax22d object) as follows: - the origin of the coordinate system is the center of the circle, and - the orientation (direct or indirect) of the coordinate system gives an implicit orientation to the circle (and defines its trigonometric sense). This positioning coordinate system is the "local coordinate system" of the circle. Note: when a gp_Circ2d circle is converted into a Geom2d_Circle circle, some implicit properties of the circle are used explicitly: - the implicit orientation corresponds to the direction in which parameter values increase, - the starting point for parameterization is that of the "X Axis" of the local coordinate system (i.e. the "X Axis" of the circle). See Also GccAna and Geom2dGcc packages which provide functions for constructing circles defined by geometric constraints gce_MakeCirc2d which provides functions for more complex circle constructions Geom2d_Circle which provides additional functions for constructing circles and works, with the parametric equations of circles in particular gp_Ax22d)#");
    py::class_<gp_Cone , shared_ptr<gp_Cone> >(m,"gp_Cone",R"#(Defines an infinite conical surface. A cone is defined by its half-angle (can be negative) at the apex and positioned in space with a coordinate system (a gp_Ax3 object) and a "reference radius" where: - the "main Axis" of the coordinate system is the axis of revolution of the cone, - the plane defined by the origin, the "X Direction" and the "Y Direction" of the coordinate system is the reference plane of the cone; the intersection of the cone with this reference plane is a circle of radius equal to the reference radius, if the half-angle is positive, the apex of the cone is on the negative side of the "main Axis" of the coordinate system. If the half-angle is negative, the apex is on the positive side. This coordinate system is the "local coordinate system" of the cone. Note: when a gp_Cone cone is converted into a Geom_ConicalSurface cone, some implicit properties of its local coordinate system are used explicitly: - its origin, "X Direction", "Y Direction" and "main Direction" are used directly to define the parametric directions on the cone and the origin of the parameters, - its implicit orientation (right-handed or left-handed) gives the orientation (direct or indirect) of the Geom_ConicalSurface cone. See Also gce_MakeCone which provides functions for more complex cone constructions Geom_ConicalSurface which provides additional functions for constructing cones and works, in particular, with the parametric equations of cones gp_Ax3)#");
    py::class_<gp_Cylinder , shared_ptr<gp_Cylinder> >(m,"gp_Cylinder",R"#(Describes an infinite cylindrical surface. A cylinder is defined by its radius and positioned in space with a coordinate system (a gp_Ax3 object), the "main Axis" of which is the axis of the cylinder. This coordinate system is the "local coordinate system" of the cylinder. Note: when a gp_Cylinder cylinder is converted into a Geom_CylindricalSurface cylinder, some implicit properties of its local coordinate system are used explicitly: - its origin, "X Direction", "Y Direction" and "main Direction" are used directly to define the parametric directions on the cylinder and the origin of the parameters, - its implicit orientation (right-handed or left-handed) gives an orientation (direct or indirect) to the Geom_CylindricalSurface cylinder. See Also gce_MakeCylinder which provides functions for more complex cylinder constructions Geom_CylindricalSurface which provides additional functions for constructing cylinders and works, in particular, with the parametric equations of cylinders gp_Ax3)#");
    py::class_<gp_Dir , shared_ptr<gp_Dir> >(m,"gp_Dir",R"#(Describes a unit vector in 3D space. This unit vector is also called "Direction". See Also gce_MakeDir which provides functions for more complex unit vector constructions Geom_Direction which provides additional functions for constructing unit vectors and works, in particular, with the parametric equations of unit vectors.)#");
    py::class_<gp_Dir2d , shared_ptr<gp_Dir2d> >(m,"gp_Dir2d",R"#(Describes a unit vector in the plane (2D space). This unit vector is also called "Direction". See Also gce_MakeDir2d which provides functions for more complex unit vector constructions Geom2d_Direction which provides additional functions for constructing unit vectors and works, in particular, with the parametric equations of unit vectors)#");
    py::class_<gp_Elips , shared_ptr<gp_Elips> >(m,"gp_Elips",R"#(Describes an ellipse in 3D space. An ellipse is defined by its major and minor radii and positioned in space with a coordinate system (a gp_Ax2 object) as follows: - the origin of the coordinate system is the center of the ellipse, - its "X Direction" defines the major axis of the ellipse, and - its "Y Direction" defines the minor axis of the ellipse. Together, the origin, "X Direction" and "Y Direction" of this coordinate system define the plane of the ellipse. This coordinate system is the "local coordinate system" of the ellipse. In this coordinate system, the equation of the ellipse is: X*X / (MajorRadius**2) + Y*Y / (MinorRadius**2) = 1.0 The "main Direction" of the local coordinate system gives the normal vector to the plane of the ellipse. This vector gives an implicit orientation to the ellipse (definition of the trigonometric sense). We refer to the "main Axis" of the local coordinate system as the "Axis" of the ellipse. See Also gce_MakeElips which provides functions for more complex ellipse constructions Geom_Ellipse which provides additional functions for constructing ellipses and works, in particular, with the parametric equations of ellipses)#");
    py::class_<gp_Elips2d , shared_ptr<gp_Elips2d> >(m,"gp_Elips2d",R"#(Describes an ellipse in the plane (2D space). An ellipse is defined by its major and minor radii and positioned in the plane with a coordinate system (a gp_Ax22d object) as follows: - the origin of the coordinate system is the center of the ellipse, - its "X Direction" defines the major axis of the ellipse, and - its "Y Direction" defines the minor axis of the ellipse. This coordinate system is the "local coordinate system" of the ellipse. Its orientation (direct or indirect) gives an implicit orientation to the ellipse. In this coordinate system, the equation of the ellipse is: X*X / (MajorRadius**2) + Y*Y / (MinorRadius**2) = 1.0 See Also gce_MakeElips2d which provides functions for more complex ellipse constructions Geom2d_Ellipse which provides additional functions for constructing ellipses and works, in particular, with the parametric equations of ellipses)#");
    py::class_<gp_GTrsf , shared_ptr<gp_GTrsf> >(m,"gp_GTrsf",R"#(Defines a non-persistent transformation in 3D space. This transformation is a general transformation. It can be a Trsf from gp, an affinity, or you can define your own transformation giving the matrix of transformation.)#");
    py::class_<gp_GTrsf2d , shared_ptr<gp_GTrsf2d> >(m,"gp_GTrsf2d",R"#(Defines a non persistent transformation in 2D space. This transformation is a general transformation. It can be a Trsf2d from package gp, an affinity, or you can define your own transformation giving the corresponding matrix of transformation.)#");
    py::class_<gp_Hypr , shared_ptr<gp_Hypr> >(m,"gp_Hypr",R"#(Describes a branch of a hyperbola in 3D space. A hyperbola is defined by its major and minor radii and positioned in space with a coordinate system (a gp_Ax2 object) of which: - the origin is the center of the hyperbola, - the "X Direction" defines the major axis of the hyperbola, and - the "Y Direction" defines the minor axis of the hyperbola. The origin, "X Direction" and "Y Direction" of this coordinate system together define the plane of the hyperbola. This coordinate system is the "local coordinate system" of the hyperbola. In this coordinate system, the equation of the hyperbola is: X*X/(MajorRadius**2)-Y*Y/(MinorRadius**2) = 1.0 The branch of the hyperbola described is the one located on the positive side of the major axis. The "main Direction" of the local coordinate system is a normal vector to the plane of the hyperbola. This vector gives an implicit orientation to the hyperbola. We refer to the "main Axis" of the local coordinate system as the "Axis" of the hyperbola. The following schema shows the plane of the hyperbola, and in it, the respective positions of the three branches of hyperbolas constructed with the functions OtherBranch, ConjugateBranch1, and ConjugateBranch2:)#");
    py::class_<gp_Hypr2d , shared_ptr<gp_Hypr2d> >(m,"gp_Hypr2d",R"#(Describes a branch of a hyperbola in the plane (2D space). A hyperbola is defined by its major and minor radii, and positioned in the plane with a coordinate system (a gp_Ax22d object) of which: - the origin is the center of the hyperbola, - the "X Direction" defines the major axis of the hyperbola, and - the "Y Direction" defines the minor axis of the hyperbola. This coordinate system is the "local coordinate system" of the hyperbola. The orientation of this coordinate system (direct or indirect) gives an implicit orientation to the hyperbola. In this coordinate system, the equation of the hyperbola is: X*X/(MajorRadius**2)-Y*Y/(MinorRadius**2) = 1.0 The branch of the hyperbola described is the one located on the positive side of the major axis. The following schema shows the plane of the hyperbola, and in it, the respective positions of the three branches of hyperbolas constructed with the functions OtherBranch, ConjugateBranch1, and ConjugateBranch2: ^YAxis | FirstConjugateBranch | Other | Main --------------------- C ------------------------------>XAxis Branch | Branch | | SecondConjugateBranch |)#");
    py::class_<gp_Lin , shared_ptr<gp_Lin> >(m,"gp_Lin",R"#(Describes a line in 3D space. A line is positioned in space with an axis (a gp_Ax1 object) which gives it an origin and a unit vector. A line and an axis are similar objects, thus, we can convert one into the other. A line provides direct access to the majority of the edit and query functions available on its positioning axis. In addition, however, a line has specific functions for computing distances and positions. See Also gce_MakeLin which provides functions for more complex line constructions Geom_Line which provides additional functions for constructing lines and works, in particular, with the parametric equations of lines)#");
    py::class_<gp_Lin2d , shared_ptr<gp_Lin2d> >(m,"gp_Lin2d",R"#(Describes a line in 2D space. A line is positioned in the plane with an axis (a gp_Ax2d object) which gives the line its origin and unit vector. A line and an axis are similar objects, thus, we can convert one into the other. A line provides direct access to the majority of the edit and query functions available on its positioning axis. In addition, however, a line has specific functions for computing distances and positions. See Also GccAna and Geom2dGcc packages which provide functions for constructing lines defined by geometric constraints gce_MakeLin2d which provides functions for more complex line constructions Geom2d_Line which provides additional functions for constructing lines and works, in particular, with the parametric equations of lines)#");
    py::class_<gp_Mat , shared_ptr<gp_Mat> >(m,"gp_Mat",R"#(Describes a three column, three row matrix. This sort of object is used in various vectorial or matrix computations.)#");
    py::class_<gp_Mat2d , shared_ptr<gp_Mat2d> >(m,"gp_Mat2d",R"#(Describes a two column, two row matrix. This sort of object is used in various vectorial or matrix computations.)#");
    py::class_<gp_Parab , shared_ptr<gp_Parab> >(m,"gp_Parab",R"#(Describes a parabola in 3D space. A parabola is defined by its focal length (that is, the distance between its focus and apex) and positioned in space with a coordinate system (a gp_Ax2 object) where: - the origin of the coordinate system is on the apex of the parabola, - the "X Axis" of the coordinate system is the axis of symmetry; the parabola is on the positive side of this axis, and - the origin, "X Direction" and "Y Direction" of the coordinate system define the plane of the parabola. The equation of the parabola in this coordinate system, which is the "local coordinate system" of the parabola, is: Y**2 = (2*P) * X. where P, referred to as the parameter of the parabola, is the distance between the focus and the directrix (P is twice the focal length). The "main Direction" of the local coordinate system gives the normal vector to the plane of the parabola. See Also gce_MakeParab which provides functions for more complex parabola constructions Geom_Parabola which provides additional functions for constructing parabolas and works, in particular, with the parametric equations of parabolas)#");
    py::class_<gp_Parab2d , shared_ptr<gp_Parab2d> >(m,"gp_Parab2d",R"#(Describes a parabola in the plane (2D space). A parabola is defined by its focal length (that is, the distance between its focus and apex) and positioned in the plane with a coordinate system (a gp_Ax22d object) where: - the origin of the coordinate system is on the apex of the parabola, and - the "X Axis" of the coordinate system is the axis of symmetry; the parabola is on the positive side of this axis. This coordinate system is the "local coordinate system" of the parabola. Its orientation (direct or indirect sense) gives an implicit orientation to the parabola. In this coordinate system, the equation for the parabola is: Y**2 = (2*P) * X. where P, referred to as the parameter of the parabola, is the distance between the focus and the directrix (P is twice the focal length). See Also GCE2d_MakeParab2d which provides functions for more complex parabola constructions Geom2d_Parabola which provides additional functions for constructing parabolas and works, in particular, with the parametric equations of parabolas)#");
    py::class_<gp_Pln , shared_ptr<gp_Pln> >(m,"gp_Pln",R"#(Describes a plane. A plane is positioned in space with a coordinate system (a gp_Ax3 object), such that the plane is defined by the origin, "X Direction" and "Y Direction" of this coordinate system, which is the "local coordinate system" of the plane. The "main Direction" of the coordinate system is a vector normal to the plane. It gives the plane an implicit orientation such that the plane is said to be "direct", if the coordinate system is right-handed, or "indirect" in the other case. Note: when a gp_Pln plane is converted into a Geom_Plane plane, some implicit properties of its local coordinate system are used explicitly: - its origin defines the origin of the two parameters of the planar surface, - its implicit orientation is also that of the Geom_Plane. See Also gce_MakePln which provides functions for more complex plane constructions Geom_Plane which provides additional functions for constructing planes and works, in particular, with the parametric equations of planes)#");
    py::class_<gp_Pnt , shared_ptr<gp_Pnt> >(m,"gp_Pnt",R"#(Defines a 3D cartesian point.)#");
    py::class_<gp_Pnt2d , shared_ptr<gp_Pnt2d> >(m,"gp_Pnt2d",R"#(Defines a non-persistent 2D cartesian point.)#");
    py::class_<gp_Quaternion , shared_ptr<gp_Quaternion> >(m,"gp_Quaternion",R"#(Represents operation of rotation in 3d space as queternion and implements operations with rotations basing on quaternion mathematics.)#");
    py::class_<gp_QuaternionNLerp , shared_ptr<gp_QuaternionNLerp> >(m,"gp_QuaternionNLerp",R"#(Class perform linear interpolation (approximate rotation interpolation), result quaternion nonunit, its length lay between. sqrt(2)/2 and 1.0)#");
    py::class_<gp_QuaternionSLerp , shared_ptr<gp_QuaternionSLerp> >(m,"gp_QuaternionSLerp",R"#(Perform Spherical Linear Interpolation of the quaternions, return unit length quaternion.)#");
    py::class_<gp_Sphere , shared_ptr<gp_Sphere> >(m,"gp_Sphere",R"#(Describes a sphere. A sphere is defined by its radius and positioned in space with a coordinate system (a gp_Ax3 object). The origin of the coordinate system is the center of the sphere. This coordinate system is the "local coordinate system" of the sphere. Note: when a gp_Sphere sphere is converted into a Geom_SphericalSurface sphere, some implicit properties of its local coordinate system are used explicitly: - its origin, "X Direction", "Y Direction" and "main Direction" are used directly to define the parametric directions on the sphere and the origin of the parameters, - its implicit orientation (right-handed or left-handed) gives the orientation (direct, indirect) to the Geom_SphericalSurface sphere. See Also gce_MakeSphere which provides functions for more complex sphere constructions Geom_SphericalSurface which provides additional functions for constructing spheres and works, in particular, with the parametric equations of spheres.)#");
    py::class_<gp_Torus , shared_ptr<gp_Torus> >(m,"gp_Torus",R"#(Describes a torus. A torus is defined by its major and minor radii and positioned in space with a coordinate system (a gp_Ax3 object) as follows: - The origin of the coordinate system is the center of the torus; - The surface is obtained by rotating a circle of radius equal to the minor radius of the torus about the "main Direction" of the coordinate system. This circle is located in the plane defined by the origin, the "X Direction" and the "main Direction" of the coordinate system. It is centered on the "X Axis" of this coordinate system, and located at a distance, from the origin of this coordinate system, equal to the major radius of the torus; - The "X Direction" and "Y Direction" define the reference plane of the torus. The coordinate system described above is the "local coordinate system" of the torus. Note: when a gp_Torus torus is converted into a Geom_ToroidalSurface torus, some implicit properties of its local coordinate system are used explicitly: - its origin, "X Direction", "Y Direction" and "main Direction" are used directly to define the parametric directions on the torus and the origin of the parameters, - its implicit orientation (right-handed or left-handed) gives the orientation (direct, indirect) to the Geom_ToroidalSurface torus. See Also gce_MakeTorus which provides functions for more complex torus constructions Geom_ToroidalSurface which provides additional functions for constructing tori and works, in particular, with the parametric equations of tori.)#");
    py::class_<gp_Trsf , shared_ptr<gp_Trsf> >(m,"gp_Trsf",R"#(Defines a non-persistent transformation in 3D space. The following transformations are implemented : . Translation, Rotation, Scale . Symmetry with respect to a point, a line, a plane. Complex transformations can be obtained by combining the previous elementary transformations using the method Multiply. The transformations can be represented as follow :)#");
    py::class_<gp_Trsf2d , shared_ptr<gp_Trsf2d> >(m,"gp_Trsf2d",R"#(Defines a non-persistent transformation in 2D space. The following transformations are implemented : . Translation, Rotation, Scale . Symmetry with respect to a point and a line. Complex transformations can be obtained by combining the previous elementary transformations using the method Multiply. The transformations can be represented as follow :)#");
    py::class_<gp_Vec , shared_ptr<gp_Vec> >(m,"gp_Vec",R"#(Defines a non-persistent vector in 3D space.)#");
    py::class_<gp_Vec2d , shared_ptr<gp_Vec2d> >(m,"gp_Vec2d",R"#(Defines a non-persistent vector in 2D space.)#");
    py::class_<gp_XY , shared_ptr<gp_XY> >(m,"gp_XY",R"#(This class describes a cartesian coordinate entity in 2D space {X,Y}. This class is non persistent. This entity used for algebraic calculation. An XY can be transformed with a Trsf2d or a GTrsf2d from package gp. It is used in vectorial computations or for holding this type of information in data structures.)#");
    py::class_<gp_XYZ , shared_ptr<gp_XYZ> >(m,"gp_XYZ",R"#(This class describes a cartesian coordinate entity in 3D space {X,Y,Z}. This entity is used for algebraic calculation. This entity can be transformed with a "Trsf" or a "GTrsf" from package "gp". It is used in vectorial computations or for holding this type of information in data structures.)#");

};

// user-defined post-inclusion per module

// user-defined post

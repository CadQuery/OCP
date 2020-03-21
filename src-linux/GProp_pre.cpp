
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <gp_Circ.hxx>
#include <gp_Lin.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <gp_Pnt.hxx>
#include <gp_Mat.hxx>
#include <GProp_GProps.hxx>
#include <GProp_PGProps.hxx>
#include <GProp_CelGProps.hxx>
#include <GProp_SelGProps.hxx>
#include <GProp_VelGProps.hxx>
#include <GProp_PrincipalProps.hxx>
#include <GProp_PEquation.hxx>
#include <GProp_UndefinedAxis.hxx>
#include <Standard_NoSuchObject.hxx>
#include <gp_Pln.hxx>
#include <gp_Lin.hxx>
#include <gp_Ax1.hxx>
#include <GProp_PrincipalProps.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>

// module includes
#include <GProp.hxx>
#include <GProp_CelGProps.hxx>
#include <GProp_EquaType.hxx>
#include <GProp_GProps.hxx>
#include <GProp_PEquation.hxx>
#include <GProp_PGProps.hxx>
#include <GProp_PrincipalProps.hxx>
#include <GProp_SelGProps.hxx>
#include <GProp_UndefinedAxis.hxx>
#include <GProp_ValueType.hxx>
#include <GProp_VelGProps.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GProp_enums(py::module &main_module) {


py::module m = main_module.def_submodule("GProp", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<GProp_ValueType>(m, "GProp_ValueType",R"#(Algorithmes :)#")
        .value("GProp_Mass",GProp_ValueType::GProp_Mass)
        .value("GProp_CenterMassX",GProp_ValueType::GProp_CenterMassX)
        .value("GProp_CenterMassY",GProp_ValueType::GProp_CenterMassY)
        .value("GProp_CenterMassZ",GProp_ValueType::GProp_CenterMassZ)
        .value("GProp_InertiaXX",GProp_ValueType::GProp_InertiaXX)
        .value("GProp_InertiaYY",GProp_ValueType::GProp_InertiaYY)
        .value("GProp_InertiaZZ",GProp_ValueType::GProp_InertiaZZ)
        .value("GProp_InertiaXY",GProp_ValueType::GProp_InertiaXY)
        .value("GProp_InertiaXZ",GProp_ValueType::GProp_InertiaXZ)
        .value("GProp_InertiaYZ",GProp_ValueType::GProp_InertiaYZ)
        .value("GProp_Unknown",GProp_ValueType::GProp_Unknown).export_values();
    py::enum_<GProp_EquaType>(m, "GProp_EquaType",R"#(None)#")
        .value("GProp_Plane",GProp_EquaType::GProp_Plane)
        .value("GProp_Line",GProp_EquaType::GProp_Line)
        .value("GProp_Point",GProp_EquaType::GProp_Point)
        .value("GProp_Space",GProp_EquaType::GProp_Space)
        .value("GProp_None",GProp_EquaType::GProp_None).export_values();

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<GProp , shared_ptr<GProp> >(m,"GProp",R"#(This package defines algorithmes to compute the global properties of a set of points, a curve, a surface, a solid (non infinite region of space delimited with geometric entities), a compound geometric system (heterogeneous composition of the previous entities).)#");
    py::class_<GProp_GProps , shared_ptr<GProp_GProps> >(m,"GProp_GProps",R"#(Implements a general mechanism to compute the global properties of a "compound geometric system" in 3d space by composition of the global properties of "elementary geometric entities" such as (curve, surface, solid, set of points). It is possible to compose the properties of several "compound geometric systems" too.)#");
    py::class_<GProp_PEquation , shared_ptr<GProp_PEquation> >(m,"GProp_PEquation",R"#(A framework to analyze a collection - or cloud - of points and to verify if they are coincident, collinear or coplanar within a given precision. If so, it also computes the mean point, the mean line or the mean plane of the points. If not, it computes the minimal box which includes all the points.)#");
    py::class_<GProp_PrincipalProps , shared_ptr<GProp_PrincipalProps> >(m,"GProp_PrincipalProps",R"#(A framework to present the principal properties of inertia of a system of which global properties are computed by a GProp_GProps object. There is always a set of axes for which the products of inertia of a geometric system are equal to 0; i.e. the matrix of inertia of the system is diagonal. These axes are the principal axes of inertia. Their origin is coincident with the center of mass of the system. The associated moments are called the principal moments of inertia. This sort of presentation object is created, filled and returned by the function PrincipalProperties for any GProp_GProps object, and can be queried to access the result. Note: The system whose principal properties of inertia are returned by this framework is referred to as the current system. The current system, however, is retained neither by this presentation framework nor by the GProp_GProps object which activates it.)#");
    py::class_<GProp_CelGProps , shared_ptr<GProp_CelGProps> , GProp_GProps>(m,"GProp_CelGProps",R"#(Computes the global properties of bounded curves in 3D space. It can be an elementary curve from package gp such as Lin, Circ, Elips, Parab .)#");
    py::class_<GProp_PGProps , shared_ptr<GProp_PGProps> , GProp_GProps>(m,"GProp_PGProps",R"#(A framework for computing the global properties of a set of points. A point mass is attached to each point. The global mass of the system is the sum of each individual mass. By default, the point mass is equal to 1 and the mass of a system composed of N points is equal to N. Warning A framework of this sort provides functions to handle sets of points easily. But, like any GProp_GProps object, by using the Add function, it can theoretically bring together the computed global properties and those of a system more complex than a set of points . The mass of each point and the density of each component of the composed system must be coherent. Note that this coherence cannot be checked. Nonetheless, you are advised to restrict your use of a GProp_PGProps object to a set of points and to create a GProp_GProps object in order to bring together global properties of different systems.)#");
    py::class_<GProp_SelGProps , shared_ptr<GProp_SelGProps> , GProp_GProps>(m,"GProp_SelGProps",R"#(Computes the global properties of a bounded elementary surface in 3d (surface of the gp package))#");
    py::class_<GProp_VelGProps , shared_ptr<GProp_VelGProps> , GProp_GProps>(m,"GProp_VelGProps",R"#(Computes the global properties and the volume of a geometric solid (3D closed region of space) The solid can be elementary(definition in the gp package))#");

};

// user-defined post-inclusion per module

// user-defined post

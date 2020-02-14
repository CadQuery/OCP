
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_NoSuchObject.hxx>
#include <gp_Pln.hxx>
#include <gp_Lin.hxx>
#include <gp_Pnt.hxx>
#include <gp_Mat.hxx>
#include <GProp_GProps.hxx>
#include <GProp_PGProps.hxx>
#include <GProp_CelGProps.hxx>
#include <GProp_SelGProps.hxx>
#include <GProp_VelGProps.hxx>
#include <GProp_PrincipalProps.hxx>
#include <GProp_PEquation.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <gp_Ax1.hxx>
#include <GProp_PrincipalProps.hxx>
#include <gp_Circ.hxx>
#include <gp_Lin.hxx>
#include <GProp_UndefinedAxis.hxx>

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
void register_GProp(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GProp"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<GProp , shared_ptr<GProp>>(m,"GProp");

    static_cast<py::class_<GProp , shared_ptr<GProp>  >>(m.attr("GProp"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HOperator_s",
                    (void (*)( const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  gp_Mat &  ) ) static_cast<void (*)( const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  gp_Mat &  ) >(&GProp::HOperator),
                    R"#(methods of package Computes the matrix Operator, referred to as the "Huyghens Operator" of a geometric system at the point Q of the space, using the following data : - Mass, i.e. the mass of the system, - G, the center of mass of the system. The "Huyghens Operator" is used to compute Inertia/Q, the matrix of inertia of the system at the point Q using Huyghens' theorem : Inertia/Q = Inertia/G + HOperator (Q, G, Mass) where Inertia/G is the matrix of inertia of the system relative to its center of mass as returned by the function MatrixOfInertia on any GProp_GProps object.)#"  , py::arg("G"),  py::arg("Q"),  py::arg("Mass"),  py::arg("Operator"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GProp_GProps , shared_ptr<GProp_GProps>  >>(m.attr("GProp_GProps"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt & >()  , py::arg("SystemLocation") )
    // custom constructors
    // methods
        .def("Add",
             (void (GProp_GProps::*)( const GProp_GProps & ,  const Standard_Real  ) ) static_cast<void (GProp_GProps::*)( const GProp_GProps & ,  const Standard_Real  ) >(&GProp_GProps::Add),
             R"#(Either - initializes the global properties retained by this framework from those retained by the framework Item, or - brings together the global properties still retained by this framework with those retained by the framework Item. The value Density, which is 1.0 by default, is used as the density of the system analysed by Item. Sometimes the density will have already been given at the time of construction of the framework Item. This may be the case for example, if Item is a GProp_PGProps framework built to compute the global properties of a set of points ; or another GProp_GProps object which already retains composite global properties. In these cases the real density was perhaps already taken into account at the time of construction of Item. Note that this is not checked: if the density of parts of the system is taken into account two or more times, results of the computation will be false. Notes : - The point relative to which the inertia of Item is computed (i.e. the reference point of Item) may be different from the reference point in this framework. Huygens' theorem is applied automatically to transfer inertia values to the reference point in this framework. - The function Add is used once per component of the system. After that, you use the interrogation functions available to access values computed for the system. - The system whose global properties are already brought together by this framework is referred to as the current system. However, the current system is not retained by this framework, which maintains only its global properties. Exceptions Standard_DomainError if Density is less than or equal to gp::Resolution().)#"  , py::arg("Item"),  py::arg("Density")=static_cast<const Standard_Real>(1.0))
        .def("Mass",
             (Standard_Real (GProp_GProps::*)() const) static_cast<Standard_Real (GProp_GProps::*)() const>(&GProp_GProps::Mass),
             R"#(Returns the mass of the current system. If no density is attached to the components of the current system the returned value corresponds to : - the total length of the edges of the current system if this framework retains only linear properties, as is the case for example, when using only the LinearProperties function to combine properties of lines from shapes, or - the total area of the faces of the current system if this framework retains only surface properties, as is the case for example, when using only the SurfaceProperties function to combine properties of surfaces from shapes, or - the total volume of the solids of the current system if this framework retains only volume properties, as is the case for example, when using only the VolumeProperties function to combine properties of volumes from solids. Warning A length, an area, or a volume is computed in the current data unit system. The mass of a single object is obtained by multiplying its length, its area or its volume by the given density. You must be consistent with respect to the units used.)#" )
        .def("CentreOfMass",
             (gp_Pnt (GProp_GProps::*)() const) static_cast<gp_Pnt (GProp_GProps::*)() const>(&GProp_GProps::CentreOfMass),
             R"#(Returns the center of mass of the current system. If the gravitational field is uniform, it is the center of gravity. The coordinates returned for the center of mass are expressed in the absolute Cartesian coordinate system.)#" )
        .def("MatrixOfInertia",
             (gp_Mat (GProp_GProps::*)() const) static_cast<gp_Mat (GProp_GProps::*)() const>(&GProp_GProps::MatrixOfInertia),
             R"#(returns the matrix of inertia. It is a symmetrical matrix. The coefficients of the matrix are the quadratic moments of inertia.)#" )
        .def("MomentOfInertia",
             (Standard_Real (GProp_GProps::*)( const gp_Ax1 &  ) const) static_cast<Standard_Real (GProp_GProps::*)( const gp_Ax1 &  ) const>(&GProp_GProps::MomentOfInertia),
             R"#(computes the moment of inertia of the material system about the axis A.)#"  , py::arg("A"))
        .def("PrincipalProperties",
             (GProp_PrincipalProps (GProp_GProps::*)() const) static_cast<GProp_PrincipalProps (GProp_GProps::*)() const>(&GProp_GProps::PrincipalProperties),
             R"#(Computes the principal properties of inertia of the current system. There is always a set of axes for which the products of inertia of a geometric system are equal to 0; i.e. the matrix of inertia of the system is diagonal. These axes are the principal axes of inertia. Their origin is coincident with the center of mass of the system. The associated moments are called the principal moments of inertia. This function computes the eigen values and the eigen vectors of the matrix of inertia of the system. Results are stored by using a presentation framework of principal properties of inertia (GProp_PrincipalProps object) which may be queried to access the value sought.)#" )
        .def("RadiusOfGyration",
             (Standard_Real (GProp_GProps::*)( const gp_Ax1 &  ) const) static_cast<Standard_Real (GProp_GProps::*)( const gp_Ax1 &  ) const>(&GProp_GProps::RadiusOfGyration),
             R"#(Returns the radius of gyration of the current system about the axis A.)#"  , py::arg("A"))
    // methods using call by reference i.s.o. return
        .def("StaticMoments",
             []( GProp_GProps &self   ){ Standard_Real  Ix; Standard_Real  Iy; Standard_Real  Iz; self.StaticMoments(Ix,Iy,Iz); return std::make_tuple(Ix,Iy,Iz); },
             R"#(Returns Ix, Iy, Iz, the static moments of inertia of the current system; i.e. the moments of inertia about the three axes of the Cartesian coordinate system.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GProp_PEquation , shared_ptr<GProp_PEquation>  >>(m.attr("GProp_PEquation"))
    // constructors
        .def(py::init<  const NCollection_Array1<gp_Pnt> &,const Standard_Real >()  , py::arg("Pnts"),  py::arg("Tol") )
    // custom constructors
    // methods
        .def("IsPlanar",
             (Standard_Boolean (GProp_PEquation::*)() const) static_cast<Standard_Boolean (GProp_PEquation::*)() const>(&GProp_PEquation::IsPlanar),
             R"#(Returns true if, according to the given tolerance, the points analyzed by this framework are coplanar. Use the function Plane to access the computed result.)#" )
        .def("IsLinear",
             (Standard_Boolean (GProp_PEquation::*)() const) static_cast<Standard_Boolean (GProp_PEquation::*)() const>(&GProp_PEquation::IsLinear),
             R"#(Returns true if, according to the given tolerance, the points analyzed by this framework are colinear. Use the function Line to access the computed result.)#" )
        .def("IsPoint",
             (Standard_Boolean (GProp_PEquation::*)() const) static_cast<Standard_Boolean (GProp_PEquation::*)() const>(&GProp_PEquation::IsPoint),
             R"#(Returns true if, according to the given tolerance, the points analyzed by this framework are coincident. Use the function Point to access the computed result.)#" )
        .def("IsSpace",
             (Standard_Boolean (GProp_PEquation::*)() const) static_cast<Standard_Boolean (GProp_PEquation::*)() const>(&GProp_PEquation::IsSpace),
             R"#(Returns true if, according to the given tolerance value, the points analyzed by this framework are neither coincident, nor collinear, nor coplanar. Use the function Box to query the smallest box that includes the collection of points.)#" )
        .def("Plane",
             (gp_Pln (GProp_PEquation::*)() const) static_cast<gp_Pln (GProp_PEquation::*)() const>(&GProp_PEquation::Plane),
             R"#(Returns the mean plane passing near all the points analyzed by this framework if, according to the given precision, the points are considered to be coplanar. Exceptions Standard_NoSuchObject if, according to the given precision value, the points analyzed by this framework are considered to be: - coincident, or - collinear, or - not coplanar.)#" )
        .def("Line",
             (gp_Lin (GProp_PEquation::*)() const) static_cast<gp_Lin (GProp_PEquation::*)() const>(&GProp_PEquation::Line),
             R"#(Returns the mean line passing near all the points analyzed by this framework if, according to the given precision value, the points are considered to be collinear. Exceptions Standard_NoSuchObject if, according to the given precision, the points analyzed by this framework are considered to be: - coincident, or - not collinear.)#" )
        .def("Point",
             (gp_Pnt (GProp_PEquation::*)() const) static_cast<gp_Pnt (GProp_PEquation::*)() const>(&GProp_PEquation::Point),
             R"#(Returns the mean point of all the points analyzed by this framework if, according to the given precision, the points are considered to be coincident. Exceptions Standard_NoSuchObject if, according to the given precision, the points analyzed by this framework are not considered to be coincident.)#" )
        .def("Box",
             (void (GProp_PEquation::*)( gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (GProp_PEquation::*)( gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&GProp_PEquation::Box),
             R"#(Returns the definition of the smallest box which contains all the points analyzed by this framework if, according to the given precision value, the points are considered to be neither coincident, nor collinear and nor coplanar. This box is centered on the barycenter P of the collection of points. Its sides are parallel to the three vectors V1, V2 and V3, the length of which is the length of the box in the corresponding direction. Note: Vectors V1, V2 and V3 are parallel to the three axes of principal inertia of the system composed of the collection of points where each point is of equal mass. Exceptions Standard_NoSuchObject if, according to the given precision, the points analyzed by this framework are considered to be coincident, collinear or coplanar.)#"  , py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GProp_PrincipalProps , shared_ptr<GProp_PrincipalProps>  >>(m.attr("GProp_PrincipalProps"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("HasSymmetryAxis",
             (Standard_Boolean (GProp_PrincipalProps::*)() const) static_cast<Standard_Boolean (GProp_PrincipalProps::*)() const>(&GProp_PrincipalProps::HasSymmetryAxis),
             R"#(returns true if the geometric system has an axis of symmetry. For comparing moments relative tolerance 1.e-10 is used. Usually it is enough for objects, restricted by faces with analitycal geometry.)#" )
        .def("HasSymmetryAxis",
             (Standard_Boolean (GProp_PrincipalProps::*)( const Standard_Real  ) const) static_cast<Standard_Boolean (GProp_PrincipalProps::*)( const Standard_Real  ) const>(&GProp_PrincipalProps::HasSymmetryAxis),
             R"#(returns true if the geometric system has an axis of symmetry. aTol is relative tolerance for cheking equality of moments If aTol == 0, relative tolerance is ~ 1.e-16 (Epsilon(I)))#"  , py::arg("aTol"))
        .def("HasSymmetryPoint",
             (Standard_Boolean (GProp_PrincipalProps::*)() const) static_cast<Standard_Boolean (GProp_PrincipalProps::*)() const>(&GProp_PrincipalProps::HasSymmetryPoint),
             R"#(returns true if the geometric system has a point of symmetry. For comparing moments relative tolerance 1.e-10 is used. Usually it is enough for objects, restricted by faces with analitycal geometry.)#" )
        .def("HasSymmetryPoint",
             (Standard_Boolean (GProp_PrincipalProps::*)( const Standard_Real  ) const) static_cast<Standard_Boolean (GProp_PrincipalProps::*)( const Standard_Real  ) const>(&GProp_PrincipalProps::HasSymmetryPoint),
             R"#(returns true if the geometric system has a point of symmetry. aTol is relative tolerance for cheking equality of moments If aTol == 0, relative tolerance is ~ 1.e-16 (Epsilon(I)))#"  , py::arg("aTol"))
        .def("FirstAxisOfInertia",
             (const gp_Vec & (GProp_PrincipalProps::*)() const) static_cast<const gp_Vec & (GProp_PrincipalProps::*)() const>(&GProp_PrincipalProps::FirstAxisOfInertia),
             R"#(returns the first axis of inertia.)#" )
        .def("SecondAxisOfInertia",
             (const gp_Vec & (GProp_PrincipalProps::*)() const) static_cast<const gp_Vec & (GProp_PrincipalProps::*)() const>(&GProp_PrincipalProps::SecondAxisOfInertia),
             R"#(returns the second axis of inertia.)#" )
        .def("ThirdAxisOfInertia",
             (const gp_Vec & (GProp_PrincipalProps::*)() const) static_cast<const gp_Vec & (GProp_PrincipalProps::*)() const>(&GProp_PrincipalProps::ThirdAxisOfInertia),
             R"#(returns the third axis of inertia. This and the above functions return the first, second or third eigen vector of the matrix of inertia of the current system. The first, second and third principal axis of inertia pass through the center of mass of the current system. They are respectively parallel to these three eigen vectors. Note that: - If the current system has an axis of symmetry, any axis is an axis of principal inertia if it passes through the center of mass of the system, and runs parallel to a linear combination of the two eigen vectors of the matrix of inertia, corresponding to the two eigen values which are equal. If the current system has a center of symmetry, any axis passing through the center of mass of the system is an axis of principal inertia. Use the functions HasSymmetryAxis and HasSymmetryPoint to check these particular cases, where the returned eigen vectors define an infinity of principal axis of inertia. - The Moments function can be used to know which of the three eigen vectors corresponds to the two eigen values which are equal.)#" )
    // methods using call by reference i.s.o. return
        .def("Moments",
             []( GProp_PrincipalProps &self   ){ Standard_Real  Ixx; Standard_Real  Iyy; Standard_Real  Izz; self.Moments(Ixx,Iyy,Izz); return std::make_tuple(Ixx,Iyy,Izz); },
             R"#(Ixx, Iyy and Izz return the principal moments of inertia in the current system. Notes : - If the current system has an axis of symmetry, two of the three values Ixx, Iyy and Izz are equal. They indicate which eigen vectors define an infinity of axes of principal inertia. - If the current system has a center of symmetry, Ixx, Iyy and Izz are equal.)#" )
        .def("RadiusOfGyration",
             []( GProp_PrincipalProps &self   ){ Standard_Real  Rxx; Standard_Real  Ryy; Standard_Real  Rzz; self.RadiusOfGyration(Rxx,Ryy,Rzz); return std::make_tuple(Rxx,Ryy,Rzz); },
             R"#(Returns the principal radii of gyration Rxx, Ryy and Rzz are the radii of gyration of the current system about its three principal axes of inertia. Note that: - If the current system has an axis of symmetry, two of the three values Rxx, Ryy and Rzz are equal. - If the current system has a center of symmetry, Rxx, Ryy and Rzz are equal.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GProp_CelGProps , shared_ptr<GProp_CelGProps>  , GProp_GProps >>(m.attr("GProp_CelGProps"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Circ &,const gp_Pnt & >()  , py::arg("C"),  py::arg("CLocation") )
        .def(py::init< const gp_Circ &,const Standard_Real,const Standard_Real,const gp_Pnt & >()  , py::arg("C"),  py::arg("U1"),  py::arg("U2"),  py::arg("CLocation") )
        .def(py::init< const gp_Lin &,const Standard_Real,const Standard_Real,const gp_Pnt & >()  , py::arg("C"),  py::arg("U1"),  py::arg("U2"),  py::arg("CLocation") )
    // custom constructors
    // methods
        .def("SetLocation",
             (void (GProp_CelGProps::*)( const gp_Pnt &  ) ) static_cast<void (GProp_CelGProps::*)( const gp_Pnt &  ) >(&GProp_CelGProps::SetLocation),
             R"#(None)#"  , py::arg("CLocation"))
        .def("Perform",
             (void (GProp_CelGProps::*)( const gp_Circ & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (GProp_CelGProps::*)( const gp_Circ & ,  const Standard_Real ,  const Standard_Real  ) >(&GProp_CelGProps::Perform),
             R"#(None)#"  , py::arg("C"),  py::arg("U1"),  py::arg("U2"))
        .def("Perform",
             (void (GProp_CelGProps::*)( const gp_Lin & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (GProp_CelGProps::*)( const gp_Lin & ,  const Standard_Real ,  const Standard_Real  ) >(&GProp_CelGProps::Perform),
             R"#(None)#"  , py::arg("C"),  py::arg("U1"),  py::arg("U2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GProp_PGProps , shared_ptr<GProp_PGProps>  , GProp_GProps >>(m.attr("GProp_PGProps"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Array1<gp_Pnt> & >()  , py::arg("Pnts") )
        .def(py::init<  const NCollection_Array2<gp_Pnt> & >()  , py::arg("Pnts") )
        .def(py::init<  const NCollection_Array1<gp_Pnt> &, const NCollection_Array1<Standard_Real> & >()  , py::arg("Pnts"),  py::arg("Density") )
        .def(py::init<  const NCollection_Array2<gp_Pnt> &, const NCollection_Array2<Standard_Real> & >()  , py::arg("Pnts"),  py::arg("Density") )
    // custom constructors
    // methods
        .def("AddPoint",
             (void (GProp_PGProps::*)( const gp_Pnt &  ) ) static_cast<void (GProp_PGProps::*)( const gp_Pnt &  ) >(&GProp_PGProps::AddPoint),
             R"#(Brings together the global properties already retained by this framework with those induced by the point Pnt. Pnt may be the first point of the current system. A point mass is attached to the point Pnt, it is either equal to 1. or to Density.)#"  , py::arg("P"))
        .def("AddPoint",
             (void (GProp_PGProps::*)( const gp_Pnt & ,  const Standard_Real  ) ) static_cast<void (GProp_PGProps::*)( const gp_Pnt & ,  const Standard_Real  ) >(&GProp_PGProps::AddPoint),
             R"#(Adds a new point P with its density in the system of points Exceptions Standard_DomainError if the mass value Density is less than gp::Resolution().)#"  , py::arg("P"),  py::arg("Density"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Barycentre_s",
                    (gp_Pnt (*)(  const NCollection_Array1<gp_Pnt> &  ) ) static_cast<gp_Pnt (*)(  const NCollection_Array1<gp_Pnt> &  ) >(&GProp_PGProps::Barycentre),
                    R"#(Computes the barycentre of a set of points. The density of the points is defaulted to 1.)#"  , py::arg("Pnts"))
        .def_static("Barycentre_s",
                    (gp_Pnt (*)(  const NCollection_Array2<gp_Pnt> &  ) ) static_cast<gp_Pnt (*)(  const NCollection_Array2<gp_Pnt> &  ) >(&GProp_PGProps::Barycentre),
                    R"#(Computes the barycentre of a set of points. The density of the points is defaulted to 1.)#"  , py::arg("Pnts"))
    // static methods using call by reference i.s.o. return
        .def_static("Barycentre_s",
                    [](  const NCollection_Array1<gp_Pnt> & Pnts, const NCollection_Array1<Standard_Real> & Density,gp_Pnt & G ){ Standard_Real  Mass; GProp_PGProps::Barycentre(Pnts,Density,Mass,G); return std::make_tuple(Mass); },
                    R"#(Computes the barycentre of a set of points. A density is associated with each point.)#"  , py::arg("Pnts"),  py::arg("Density"),  py::arg("G"))
        .def_static("Barycentre_s",
                    [](  const NCollection_Array2<gp_Pnt> & Pnts, const NCollection_Array2<Standard_Real> & Density,gp_Pnt & G ){ Standard_Real  Mass; GProp_PGProps::Barycentre(Pnts,Density,Mass,G); return std::make_tuple(Mass); },
                    R"#(Computes the barycentre of a set of points. A density is associated with each point.)#"  , py::arg("Pnts"),  py::arg("Density"),  py::arg("G"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GProp_SelGProps , shared_ptr<GProp_SelGProps>  , GProp_GProps >>(m.attr("GProp_SelGProps"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Cylinder &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const gp_Pnt & >()  , py::arg("S"),  py::arg("Alpha1"),  py::arg("Alpha2"),  py::arg("Z1"),  py::arg("Z2"),  py::arg("SLocation") )
        .def(py::init< const gp_Cone &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const gp_Pnt & >()  , py::arg("S"),  py::arg("Alpha1"),  py::arg("Alpha2"),  py::arg("Z1"),  py::arg("Z2"),  py::arg("SLocation") )
        .def(py::init< const gp_Sphere &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const gp_Pnt & >()  , py::arg("S"),  py::arg("Teta1"),  py::arg("Teta2"),  py::arg("Alpha1"),  py::arg("Alpha2"),  py::arg("SLocation") )
        .def(py::init< const gp_Torus &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const gp_Pnt & >()  , py::arg("S"),  py::arg("Teta1"),  py::arg("Teta2"),  py::arg("Alpha1"),  py::arg("Alpha2"),  py::arg("SLocation") )
    // custom constructors
    // methods
        .def("SetLocation",
             (void (GProp_SelGProps::*)( const gp_Pnt &  ) ) static_cast<void (GProp_SelGProps::*)( const gp_Pnt &  ) >(&GProp_SelGProps::SetLocation),
             R"#(None)#"  , py::arg("SLocation"))
        .def("Perform",
             (void (GProp_SelGProps::*)( const gp_Cylinder & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (GProp_SelGProps::*)( const gp_Cylinder & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GProp_SelGProps::Perform),
             R"#(None)#"  , py::arg("S"),  py::arg("Alpha1"),  py::arg("Alpha2"),  py::arg("Z1"),  py::arg("Z2"))
        .def("Perform",
             (void (GProp_SelGProps::*)( const gp_Cone & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (GProp_SelGProps::*)( const gp_Cone & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GProp_SelGProps::Perform),
             R"#(None)#"  , py::arg("S"),  py::arg("Alpha1"),  py::arg("Alpha2"),  py::arg("Z1"),  py::arg("Z2"))
        .def("Perform",
             (void (GProp_SelGProps::*)( const gp_Sphere & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (GProp_SelGProps::*)( const gp_Sphere & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GProp_SelGProps::Perform),
             R"#(None)#"  , py::arg("S"),  py::arg("Teta1"),  py::arg("Teta2"),  py::arg("Alpha1"),  py::arg("Alpha2"))
        .def("Perform",
             (void (GProp_SelGProps::*)( const gp_Torus & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (GProp_SelGProps::*)( const gp_Torus & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GProp_SelGProps::Perform),
             R"#(None)#"  , py::arg("S"),  py::arg("Teta1"),  py::arg("Teta2"),  py::arg("Alpha1"),  py::arg("Alpha2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GProp_VelGProps , shared_ptr<GProp_VelGProps>  , GProp_GProps >>(m.attr("GProp_VelGProps"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Cylinder &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const gp_Pnt & >()  , py::arg("S"),  py::arg("Alpha1"),  py::arg("Alpha2"),  py::arg("Z1"),  py::arg("Z2"),  py::arg("VLocation") )
        .def(py::init< const gp_Cone &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const gp_Pnt & >()  , py::arg("S"),  py::arg("Alpha1"),  py::arg("Alpha2"),  py::arg("Z1"),  py::arg("Z2"),  py::arg("VLocation") )
        .def(py::init< const gp_Sphere &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const gp_Pnt & >()  , py::arg("S"),  py::arg("Teta1"),  py::arg("Teta2"),  py::arg("Alpha1"),  py::arg("Alpha2"),  py::arg("VLocation") )
        .def(py::init< const gp_Torus &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const gp_Pnt & >()  , py::arg("S"),  py::arg("Teta1"),  py::arg("Teta2"),  py::arg("Alpha1"),  py::arg("Alpha2"),  py::arg("VLocation") )
    // custom constructors
    // methods
        .def("SetLocation",
             (void (GProp_VelGProps::*)( const gp_Pnt &  ) ) static_cast<void (GProp_VelGProps::*)( const gp_Pnt &  ) >(&GProp_VelGProps::SetLocation),
             R"#(None)#"  , py::arg("VLocation"))
        .def("Perform",
             (void (GProp_VelGProps::*)( const gp_Cylinder & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (GProp_VelGProps::*)( const gp_Cylinder & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GProp_VelGProps::Perform),
             R"#(None)#"  , py::arg("S"),  py::arg("Alpha1"),  py::arg("Alpha2"),  py::arg("Z1"),  py::arg("Z2"))
        .def("Perform",
             (void (GProp_VelGProps::*)( const gp_Cone & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (GProp_VelGProps::*)( const gp_Cone & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GProp_VelGProps::Perform),
             R"#(None)#"  , py::arg("S"),  py::arg("Alpha1"),  py::arg("Alpha2"),  py::arg("Z1"),  py::arg("Z2"))
        .def("Perform",
             (void (GProp_VelGProps::*)( const gp_Sphere & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (GProp_VelGProps::*)( const gp_Sphere & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GProp_VelGProps::Perform),
             R"#(None)#"  , py::arg("S"),  py::arg("Teta1"),  py::arg("Teta2"),  py::arg("Alpha1"),  py::arg("Alpha2"))
        .def("Perform",
             (void (GProp_VelGProps::*)( const gp_Torus & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (GProp_VelGProps::*)( const gp_Torus & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GProp_VelGProps::Perform),
             R"#(None)#"  , py::arg("S"),  py::arg("Teta1"),  py::arg("Teta2"),  py::arg("Alpha1"),  py::arg("Alpha2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/GProp_EquaType.hxx
// ./opencascade/GProp_ValueType.hxx
// ./opencascade/GProp_PGProps.hxx
// ./opencascade/GProp_PEquation.hxx
// ./opencascade/GProp.hxx
// ./opencascade/GProp_VelGProps.hxx
// ./opencascade/GProp_SelGProps.hxx
// ./opencascade/GProp_GProps.hxx
// ./opencascade/GProp_CelGProps.hxx
// ./opencascade/GProp_PrincipalProps.hxx
// ./opencascade/GProp_UndefinedAxis.hxx

// operators

// register typdefs


// exceptions
register_occ_exception<GProp_UndefinedAxis>(m, "GProp_UndefinedAxis");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

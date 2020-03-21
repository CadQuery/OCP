
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
#include <math_MultipleVarFunctionWithHessian.hxx>
#include <Standard_NullValue.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Standard_NullValue.hxx>
#include <math_Matrix.hxx>

// module includes
#include <FairCurve_AnalysisCode.hxx>
#include <FairCurve_Batten.hxx>
#include <FairCurve_BattenLaw.hxx>
#include <FairCurve_DistributionOfEnergy.hxx>
#include <FairCurve_DistributionOfJerk.hxx>
#include <FairCurve_DistributionOfSagging.hxx>
#include <FairCurve_DistributionOfTension.hxx>
#include <FairCurve_Energy.hxx>
#include <FairCurve_EnergyOfBatten.hxx>
#include <FairCurve_EnergyOfMVC.hxx>
#include <FairCurve_MinimalVariation.hxx>
#include <FairCurve_Newton.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_FairCurve(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("FairCurve"));


//Python trampoline classes
    class Py_FairCurve_DistributionOfEnergy : public FairCurve_DistributionOfEnergy{
    public:
        using FairCurve_DistributionOfEnergy::FairCurve_DistributionOfEnergy;


        // public pure virtual

        Standard_Boolean Value(const math_Vector & X,math_Vector & F) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,math_FunctionSet,Value,X,F) };

        // protected pure virtual


        // private pure virtual

    };
    class Py_FairCurve_Energy : public FairCurve_Energy{
    public:
        using FairCurve_Energy::FairCurve_Energy;


        // public pure virtual


        // protected pure virtual
        Standard_Boolean Compute(const Standard_Integer DerivativeOrder,math_Vector & Result) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,FairCurve_Energy,Compute,DerivativeOrder,Result) };


        // private pure virtual

    };

// classes


    static_cast<py::class_<FairCurve_Batten , shared_ptr<FairCurve_Batten> >>(m.attr("FairCurve_Batten"))
    // constructors
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d &,const Standard_Real,const Standard_Real >()  , py::arg("P1"),  py::arg("P2"),  py::arg("Height"),  py::arg("Slope")=static_cast<const Standard_Real>(0) )
    // custom constructors
    // methods
        .def("SetFreeSliding",
             (void (FairCurve_Batten::*)( const Standard_Boolean ) ) static_cast<void (FairCurve_Batten::*)( const Standard_Boolean ) >(&FairCurve_Batten::SetFreeSliding),
             R"#(Freesliding is initialized with the default setting false. When Freesliding is set to true and, as a result, sliding is free, the sliding factor is automatically computed to satisfy the equilibrium of the batten.)#"  , py::arg("FreeSliding"))
        .def("SetConstraintOrder1",
             (void (FairCurve_Batten::*)( const Standard_Integer ) ) static_cast<void (FairCurve_Batten::*)( const Standard_Integer ) >(&FairCurve_Batten::SetConstraintOrder1),
             R"#(Allows you to change the order of the constraint on the first point. ConstraintOrder has the default setting of 1. The following settings are available: - 0-the curve must pass through a point - 1-the curve must pass through a point and have a given tangent - 2-the curve must pass through a point, have a given tangent and a given curvature. The third setting is only valid for FairCurve_MinimalVariation curves. These constraints, though geometric, represent the mechanical constraints due, for example, to the resistance of the material the actual physical batten is made of.)#"  , py::arg("ConstraintOrder"))
        .def("SetConstraintOrder2",
             (void (FairCurve_Batten::*)( const Standard_Integer ) ) static_cast<void (FairCurve_Batten::*)( const Standard_Integer ) >(&FairCurve_Batten::SetConstraintOrder2),
             R"#(Allows you to change the order of the constraint on the second point. ConstraintOrder is initialized with the default setting of 1. The following settings are available: - 0-the curve must pass through a point - 1-the curve must pass through a point and have a given tangent - 2-the curve must pass through a point, have a given tangent and a given curvature. The third setting is only valid for FairCurve_MinimalVariation curves. These constraints, though geometric, represent the mechanical constraints due, for example, to the resistance of the material the actual physical batten is made of.)#"  , py::arg("ConstraintOrder"))
        .def("SetP1",
             (void (FairCurve_Batten::*)( const gp_Pnt2d & ) ) static_cast<void (FairCurve_Batten::*)( const gp_Pnt2d & ) >(&FairCurve_Batten::SetP1),
             R"#(Allows you to change the location of the point, P1, and in doing so, modify the curve. Warning This method changes the angle as well as the point. Exceptions NullValue if the distance between P1 and P2 is less than or equal to the tolerance value for distance in Precision::Confusion: P1.IsEqual(P2, Precision::Confusion()). The function gp_Pnt2d::IsEqual tests to see if this is the case.)#"  , py::arg("P1"))
        .def("SetP2",
             (void (FairCurve_Batten::*)( const gp_Pnt2d & ) ) static_cast<void (FairCurve_Batten::*)( const gp_Pnt2d & ) >(&FairCurve_Batten::SetP2),
             R"#(Allows you to change the location of the point, P1, and in doing so, modify the curve. Warning This method changes the angle as well as the point. Exceptions NullValue if the distance between P1 and P2 is less than or equal to the tolerance value for distance in Precision::Confusion: P1.IsEqual(P2, Precision::Confusion()). The function gp_Pnt2d::IsEqual tests to see if this is the case.)#"  , py::arg("P2"))
        .def("SetAngle1",
             (void (FairCurve_Batten::*)( const Standard_Real ) ) static_cast<void (FairCurve_Batten::*)( const Standard_Real ) >(&FairCurve_Batten::SetAngle1),
             R"#(Allows you to change the angle Angle1 at the first point, P1. The default setting is 0.)#"  , py::arg("Angle1"))
        .def("SetAngle2",
             (void (FairCurve_Batten::*)( const Standard_Real ) ) static_cast<void (FairCurve_Batten::*)( const Standard_Real ) >(&FairCurve_Batten::SetAngle2),
             R"#(Allows you to change the angle Angle2 at the second point, P2. The default setting is 0.)#"  , py::arg("Angle2"))
        .def("SetHeight",
             (void (FairCurve_Batten::*)( const Standard_Real ) ) static_cast<void (FairCurve_Batten::*)( const Standard_Real ) >(&FairCurve_Batten::SetHeight),
             R"#(Allows you to change the height of the deformation. Raises NegativeValue; -- if Height <= 0 if Height <= 0)#"  , py::arg("Height"))
        .def("SetSlope",
             (void (FairCurve_Batten::*)( const Standard_Real ) ) static_cast<void (FairCurve_Batten::*)( const Standard_Real ) >(&FairCurve_Batten::SetSlope),
             R"#(Allows you to set the slope value, Slope.)#"  , py::arg("Slope"))
        .def("SetSlidingFactor",
             (void (FairCurve_Batten::*)( const Standard_Real ) ) static_cast<void (FairCurve_Batten::*)( const Standard_Real ) >(&FairCurve_Batten::SetSlidingFactor),
             R"#(Allows you to change the ratio SlidingFactor. This compares the length of the batten and the reference length, which is, in turn, a function of the constraints. This modification has one of the following two effects: - if you increase the value, it inflates the batten - if you decrease the value, it flattens the batten. When sliding is free, the sliding factor is automatically computed to satisfy the equilibrium of the batten. When sliding is imposed, a value is required for the sliding factor. SlidingFactor is initialized with the default setting of 1.)#"  , py::arg("SlidingFactor"))
        .def("Compute",
             (Standard_Boolean (FairCurve_Batten::*)( FairCurve_AnalysisCode & , const Standard_Integer , const Standard_Real ) ) static_cast<Standard_Boolean (FairCurve_Batten::*)( FairCurve_AnalysisCode & , const Standard_Integer , const Standard_Real ) >(&FairCurve_Batten::Compute),
             R"#(Performs the algorithm, using the arguments Code, NbIterations and Tolerance and computes the curve with respect to the constraints. Code will have one of the following values: - OK - NotConverged - InfiniteSliding - NullHeight The parameters Tolerance and NbIterations control how precise the computation is, and how long it will take.)#"  , py::arg("Code"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(50),  py::arg("Tolerance")=static_cast<const Standard_Real>(1.0e-3))
        .def("SlidingOfReference",
             (Standard_Real (FairCurve_Batten::*)() const) static_cast<Standard_Real (FairCurve_Batten::*)() const>(&FairCurve_Batten::SlidingOfReference),
             R"#(Computes the real number value for length Sliding of Reference for new constraints. If you want to give a specific length to a batten curve, use the following syntax: b.SetSlidingFactor(L / b.SlidingOfReference()) where b is the name of the batten curve object.)#" )
        .def("GetFreeSliding",
             (Standard_Boolean (FairCurve_Batten::*)() const) static_cast<Standard_Boolean (FairCurve_Batten::*)() const>(&FairCurve_Batten::GetFreeSliding),
             R"#(Returns the initial free sliding value, false by default. Free sliding is generally more aesthetically pleasing than constrained sliding. However, the computation can fail with values such as angles greater than PI/2. This is because the resulting batten length is theoretically infinite.)#" )
        .def("GetConstraintOrder1",
             (Standard_Integer (FairCurve_Batten::*)() const) static_cast<Standard_Integer (FairCurve_Batten::*)() const>(&FairCurve_Batten::GetConstraintOrder1),
             R"#(Returns the established first constraint order.)#" )
        .def("GetConstraintOrder2",
             (Standard_Integer (FairCurve_Batten::*)() const) static_cast<Standard_Integer (FairCurve_Batten::*)() const>(&FairCurve_Batten::GetConstraintOrder2),
             R"#(Returns the established second constraint order.)#" )
        .def("GetP1",
             (const gp_Pnt2d & (FairCurve_Batten::*)() const) static_cast<const gp_Pnt2d & (FairCurve_Batten::*)() const>(&FairCurve_Batten::GetP1),
             R"#(Returns the established location of the point P1.)#" )
        .def("GetP2",
             (const gp_Pnt2d & (FairCurve_Batten::*)() const) static_cast<const gp_Pnt2d & (FairCurve_Batten::*)() const>(&FairCurve_Batten::GetP2),
             R"#(Returns the established location of the point P2.)#" )
        .def("GetAngle1",
             (Standard_Real (FairCurve_Batten::*)() const) static_cast<Standard_Real (FairCurve_Batten::*)() const>(&FairCurve_Batten::GetAngle1),
             R"#(Returns the established first angle.)#" )
        .def("GetAngle2",
             (Standard_Real (FairCurve_Batten::*)() const) static_cast<Standard_Real (FairCurve_Batten::*)() const>(&FairCurve_Batten::GetAngle2),
             R"#(Returns the established second angle.)#" )
        .def("GetHeight",
             (Standard_Real (FairCurve_Batten::*)() const) static_cast<Standard_Real (FairCurve_Batten::*)() const>(&FairCurve_Batten::GetHeight),
             R"#(Returns the thickness of the lathe.)#" )
        .def("GetSlope",
             (Standard_Real (FairCurve_Batten::*)() const) static_cast<Standard_Real (FairCurve_Batten::*)() const>(&FairCurve_Batten::GetSlope),
             R"#(Returns the established slope value.)#" )
        .def("GetSlidingFactor",
             (Standard_Real (FairCurve_Batten::*)() const) static_cast<Standard_Real (FairCurve_Batten::*)() const>(&FairCurve_Batten::GetSlidingFactor),
             R"#(Returns the initial sliding factor.)#" )
        .def("Curve",
             (opencascade::handle<Geom2d_BSplineCurve> (FairCurve_Batten::*)() const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (FairCurve_Batten::*)() const>(&FairCurve_Batten::Curve),
             R"#(Returns the computed curve a 2d BSpline.)#" )
        .def("Dump",
             (void (FairCurve_Batten::*)( std::ostream & ) const) static_cast<void (FairCurve_Batten::*)( std::ostream & ) const>(&FairCurve_Batten::Dump),
             R"#(Prints on the stream o information on the current state of the object.)#"  , py::arg("o"))
        .def("SetFreeSliding",
             (void (FairCurve_Batten::*)( const Standard_Boolean ) ) static_cast<void (FairCurve_Batten::*)( const Standard_Boolean ) >(&FairCurve_Batten::SetFreeSliding),
             R"#(Freesliding is initialized with the default setting false. When Freesliding is set to true and, as a result, sliding is free, the sliding factor is automatically computed to satisfy the equilibrium of the batten.)#"  , py::arg("FreeSliding"))
        .def("SetConstraintOrder1",
             (void (FairCurve_Batten::*)( const Standard_Integer ) ) static_cast<void (FairCurve_Batten::*)( const Standard_Integer ) >(&FairCurve_Batten::SetConstraintOrder1),
             R"#(Allows you to change the order of the constraint on the first point. ConstraintOrder has the default setting of 1. The following settings are available: - 0-the curve must pass through a point - 1-the curve must pass through a point and have a given tangent - 2-the curve must pass through a point, have a given tangent and a given curvature. The third setting is only valid for FairCurve_MinimalVariation curves. These constraints, though geometric, represent the mechanical constraints due, for example, to the resistance of the material the actual physical batten is made of.)#"  , py::arg("ConstraintOrder"))
        .def("SetConstraintOrder2",
             (void (FairCurve_Batten::*)( const Standard_Integer ) ) static_cast<void (FairCurve_Batten::*)( const Standard_Integer ) >(&FairCurve_Batten::SetConstraintOrder2),
             R"#(Allows you to change the order of the constraint on the second point. ConstraintOrder is initialized with the default setting of 1. The following settings are available: - 0-the curve must pass through a point - 1-the curve must pass through a point and have a given tangent - 2-the curve must pass through a point, have a given tangent and a given curvature. The third setting is only valid for FairCurve_MinimalVariation curves. These constraints, though geometric, represent the mechanical constraints due, for example, to the resistance of the material the actual physical batten is made of.)#"  , py::arg("ConstraintOrder"))
        .def("SetAngle1",
             (void (FairCurve_Batten::*)( const Standard_Real ) ) static_cast<void (FairCurve_Batten::*)( const Standard_Real ) >(&FairCurve_Batten::SetAngle1),
             R"#(Allows you to change the angle Angle1 at the first point, P1. The default setting is 0.)#"  , py::arg("Angle1"))
        .def("SetAngle2",
             (void (FairCurve_Batten::*)( const Standard_Real ) ) static_cast<void (FairCurve_Batten::*)( const Standard_Real ) >(&FairCurve_Batten::SetAngle2),
             R"#(Allows you to change the angle Angle2 at the second point, P2. The default setting is 0.)#"  , py::arg("Angle2"))
        .def("SetHeight",
             (void (FairCurve_Batten::*)( const Standard_Real ) ) static_cast<void (FairCurve_Batten::*)( const Standard_Real ) >(&FairCurve_Batten::SetHeight),
             R"#(Allows you to change the height of the deformation. Raises NegativeValue; -- if Height <= 0 if Height <= 0)#"  , py::arg("Height"))
        .def("SetSlope",
             (void (FairCurve_Batten::*)( const Standard_Real ) ) static_cast<void (FairCurve_Batten::*)( const Standard_Real ) >(&FairCurve_Batten::SetSlope),
             R"#(Allows you to set the slope value, Slope.)#"  , py::arg("Slope"))
        .def("SetSlidingFactor",
             (void (FairCurve_Batten::*)( const Standard_Real ) ) static_cast<void (FairCurve_Batten::*)( const Standard_Real ) >(&FairCurve_Batten::SetSlidingFactor),
             R"#(Allows you to change the ratio SlidingFactor. This compares the length of the batten and the reference length, which is, in turn, a function of the constraints. This modification has one of the following two effects: - if you increase the value, it inflates the batten - if you decrease the value, it flattens the batten. When sliding is free, the sliding factor is automatically computed to satisfy the equilibrium of the batten. When sliding is imposed, a value is required for the sliding factor. SlidingFactor is initialized with the default setting of 1.)#"  , py::arg("SlidingFactor"))
        .def("GetFreeSliding",
             (Standard_Boolean (FairCurve_Batten::*)() const) static_cast<Standard_Boolean (FairCurve_Batten::*)() const>(&FairCurve_Batten::GetFreeSliding),
             R"#(Returns the initial free sliding value, false by default. Free sliding is generally more aesthetically pleasing than constrained sliding. However, the computation can fail with values such as angles greater than PI/2. This is because the resulting batten length is theoretically infinite.)#" )
        .def("GetConstraintOrder1",
             (Standard_Integer (FairCurve_Batten::*)() const) static_cast<Standard_Integer (FairCurve_Batten::*)() const>(&FairCurve_Batten::GetConstraintOrder1),
             R"#(Returns the established first constraint order.)#" )
        .def("GetConstraintOrder2",
             (Standard_Integer (FairCurve_Batten::*)() const) static_cast<Standard_Integer (FairCurve_Batten::*)() const>(&FairCurve_Batten::GetConstraintOrder2),
             R"#(Returns the established second constraint order.)#" )
        .def("GetP1",
             (const gp_Pnt2d & (FairCurve_Batten::*)() const) static_cast<const gp_Pnt2d & (FairCurve_Batten::*)() const>(&FairCurve_Batten::GetP1),
             R"#(Returns the established location of the point P1.)#" )
        .def("GetP2",
             (const gp_Pnt2d & (FairCurve_Batten::*)() const) static_cast<const gp_Pnt2d & (FairCurve_Batten::*)() const>(&FairCurve_Batten::GetP2),
             R"#(Returns the established location of the point P2.)#" )
        .def("GetAngle1",
             (Standard_Real (FairCurve_Batten::*)() const) static_cast<Standard_Real (FairCurve_Batten::*)() const>(&FairCurve_Batten::GetAngle1),
             R"#(Returns the established first angle.)#" )
        .def("GetAngle2",
             (Standard_Real (FairCurve_Batten::*)() const) static_cast<Standard_Real (FairCurve_Batten::*)() const>(&FairCurve_Batten::GetAngle2),
             R"#(Returns the established second angle.)#" )
        .def("GetHeight",
             (Standard_Real (FairCurve_Batten::*)() const) static_cast<Standard_Real (FairCurve_Batten::*)() const>(&FairCurve_Batten::GetHeight),
             R"#(Returns the thickness of the lathe.)#" )
        .def("GetSlope",
             (Standard_Real (FairCurve_Batten::*)() const) static_cast<Standard_Real (FairCurve_Batten::*)() const>(&FairCurve_Batten::GetSlope),
             R"#(Returns the established slope value.)#" )
        .def("GetSlidingFactor",
             (Standard_Real (FairCurve_Batten::*)() const) static_cast<Standard_Real (FairCurve_Batten::*)() const>(&FairCurve_Batten::GetSlidingFactor),
             R"#(Returns the initial sliding factor.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FairCurve_BattenLaw , shared_ptr<FairCurve_BattenLaw> , math_Function>>(m.attr("FairCurve_BattenLaw"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Heigth"),  py::arg("Slope"),  py::arg("Sliding") )
    // custom constructors
    // methods
        .def("SetSliding",
             (void (FairCurve_BattenLaw::*)( const Standard_Real ) ) static_cast<void (FairCurve_BattenLaw::*)( const Standard_Real ) >(&FairCurve_BattenLaw::SetSliding),
             R"#(Change the value of sliding)#"  , py::arg("Sliding"))
        .def("SetHeigth",
             (void (FairCurve_BattenLaw::*)( const Standard_Real ) ) static_cast<void (FairCurve_BattenLaw::*)( const Standard_Real ) >(&FairCurve_BattenLaw::SetHeigth),
             R"#(Change the value of Heigth at the middle point.)#"  , py::arg("Heigth"))
        .def("SetSlope",
             (void (FairCurve_BattenLaw::*)( const Standard_Real ) ) static_cast<void (FairCurve_BattenLaw::*)( const Standard_Real ) >(&FairCurve_BattenLaw::SetSlope),
             R"#(Change the value of the geometric slope.)#"  , py::arg("Slope"))
        .def("Value",
             (Standard_Boolean (FairCurve_BattenLaw::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (FairCurve_BattenLaw::*)( const Standard_Real , Standard_Real & ) >(&FairCurve_BattenLaw::Value),
             R"#(computes the value of the heigth for the parameter T on the neutral fibber)#"  , py::arg("T"),  py::arg("THeigth"))
        .def("SetSliding",
             (void (FairCurve_BattenLaw::*)( const Standard_Real ) ) static_cast<void (FairCurve_BattenLaw::*)( const Standard_Real ) >(&FairCurve_BattenLaw::SetSliding),
             R"#(Change the value of sliding)#"  , py::arg("Sliding"))
        .def("SetHeigth",
             (void (FairCurve_BattenLaw::*)( const Standard_Real ) ) static_cast<void (FairCurve_BattenLaw::*)( const Standard_Real ) >(&FairCurve_BattenLaw::SetHeigth),
             R"#(Change the value of Heigth at the middle point.)#"  , py::arg("Heigth"))
        .def("SetSlope",
             (void (FairCurve_BattenLaw::*)( const Standard_Real ) ) static_cast<void (FairCurve_BattenLaw::*)( const Standard_Real ) >(&FairCurve_BattenLaw::SetSlope),
             R"#(Change the value of the geometric slope.)#"  , py::arg("Slope"))
        .def("Value",
             (Standard_Boolean (FairCurve_BattenLaw::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (FairCurve_BattenLaw::*)( const Standard_Real , Standard_Real & ) >(&FairCurve_BattenLaw::Value),
             R"#(computes the value of the heigth for the parameter T on the neutral fibber)#"  , py::arg("T"),  py::arg("THeigth"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FairCurve_DistributionOfEnergy , shared_ptr<FairCurve_DistributionOfEnergy>,Py_FairCurve_DistributionOfEnergy , math_FunctionSet>>(m.attr("FairCurve_DistributionOfEnergy"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (FairCurve_DistributionOfEnergy::*)() const) static_cast<Standard_Integer (FairCurve_DistributionOfEnergy::*)() const>(&FairCurve_DistributionOfEnergy::NbVariables),
             R"#(returns the number of variables of the function.)#" )
        .def("NbEquations",
             (Standard_Integer (FairCurve_DistributionOfEnergy::*)() const) static_cast<Standard_Integer (FairCurve_DistributionOfEnergy::*)() const>(&FairCurve_DistributionOfEnergy::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("SetDerivativeOrder",
             (void (FairCurve_DistributionOfEnergy::*)( const Standard_Integer ) ) static_cast<void (FairCurve_DistributionOfEnergy::*)( const Standard_Integer ) >(&FairCurve_DistributionOfEnergy::SetDerivativeOrder),
             R"#(None)#"  , py::arg("DerivativeOrder"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FairCurve_Energy , shared_ptr<FairCurve_Energy>,Py_FairCurve_Energy , math_MultipleVarFunctionWithHessian>>(m.attr("FairCurve_Energy"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (FairCurve_Energy::*)() const) static_cast<Standard_Integer (FairCurve_Energy::*)() const>(&FairCurve_Energy::NbVariables),
             R"#(returns the number of variables of the energy.)#" )
        .def("Value",
             (Standard_Boolean (FairCurve_Energy::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (FairCurve_Energy::*)( const math_Vector & , Standard_Real & ) >(&FairCurve_Energy::Value),
             R"#(computes the values of the Energys E for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("E"))
        .def("Gradient",
             (Standard_Boolean (FairCurve_Energy::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (FairCurve_Energy::*)( const math_Vector & , math_Vector & ) >(&FairCurve_Energy::Gradient),
             R"#(computes the gradient <G> of the energys for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (FairCurve_Energy::*)( const math_Vector & , Standard_Real & , math_Vector & ) ) static_cast<Standard_Boolean (FairCurve_Energy::*)( const math_Vector & , Standard_Real & , math_Vector & ) >(&FairCurve_Energy::Values),
             R"#(computes the Energy <E> and the gradient <G> of the energy for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("E"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (FairCurve_Energy::*)( const math_Vector & , Standard_Real & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (FairCurve_Energy::*)( const math_Vector & , Standard_Real & , math_Vector & , math_Matrix & ) >(&FairCurve_Energy::Values),
             R"#(computes the Energy <E>, the gradient <G> and the Hessian <H> of the energy for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("E"),  py::arg("G"),  py::arg("H"))
        .def("Variable",
             (Standard_Boolean (FairCurve_Energy::*)( math_Vector & ) const) static_cast<Standard_Boolean (FairCurve_Energy::*)( math_Vector & ) const>(&FairCurve_Energy::Variable),
             R"#(compute the variables <X> wich correspond with the field <MyPoles>)#"  , py::arg("X"))
        .def("Poles",
             (const opencascade::handle<TColgp_HArray1OfPnt2d> & (FairCurve_Energy::*)() const) static_cast<const opencascade::handle<TColgp_HArray1OfPnt2d> & (FairCurve_Energy::*)() const>(&FairCurve_Energy::Poles),
             R"#(return the poles)#" )
        .def("NbVariables",
             (Standard_Integer (FairCurve_Energy::*)() const) static_cast<Standard_Integer (FairCurve_Energy::*)() const>(&FairCurve_Energy::NbVariables),
             R"#(returns the number of variables of the energy.)#" )
        .def("Poles",
             (const opencascade::handle<TColgp_HArray1OfPnt2d> & (FairCurve_Energy::*)() const) static_cast<const opencascade::handle<TColgp_HArray1OfPnt2d> & (FairCurve_Energy::*)() const>(&FairCurve_Energy::Poles),
             R"#(return the poles)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FairCurve_Newton , shared_ptr<FairCurve_Newton> , math_NewtonMinimum>>(m.attr("FairCurve_Newton"))
    // constructors
        .def(py::init< const math_MultipleVarFunctionWithHessian &,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Real,const Standard_Boolean >()  , py::arg("theFunction"),  py::arg("theSpatialTolerance")=static_cast<const Standard_Real>(1.0e-7),  py::arg("theCriteriumTolerance")=static_cast<const Standard_Real>(1.0e-7),  py::arg("theNbIterations")=static_cast<const Standard_Integer>(40),  py::arg("theConvexity")=static_cast<const Standard_Real>(1.0e-6),  py::arg("theWithSingularity")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("IsConverged",
             (Standard_Boolean (FairCurve_Newton::*)() const) static_cast<Standard_Boolean (FairCurve_Newton::*)() const>(&FairCurve_Newton::IsConverged),
             R"#(This method is called at the end of each iteration to check the convergence : || Xi+1 - Xi || < SpatialTolerance/100 Or || Xi+1 - Xi || < SpatialTolerance and |F(Xi+1) - F(Xi)| < CriteriumTolerance * |F(xi)| It can be redefined in a sub-class to implement a specific test.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FairCurve_DistributionOfJerk , shared_ptr<FairCurve_DistributionOfJerk> , FairCurve_DistributionOfEnergy>>(m.attr("FairCurve_DistributionOfJerk"))
    // constructors
        .def(py::init< const Standard_Integer,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColgp_HArray1OfPnt2d> &,const Standard_Integer,const FairCurve_BattenLaw &,const Standard_Integer >()  , py::arg("BSplOrder"),  py::arg("FlatKnots"),  py::arg("Poles"),  py::arg("DerivativeOrder"),  py::arg("Law"),  py::arg("NbValAux")=static_cast<const Standard_Integer>(0) )
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (FairCurve_DistributionOfJerk::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (FairCurve_DistributionOfJerk::*)( const math_Vector & , math_Vector & ) >(&FairCurve_DistributionOfJerk::Value),
             R"#(computes the values <F> of the functions for the variable <X>. returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FairCurve_DistributionOfSagging , shared_ptr<FairCurve_DistributionOfSagging> , FairCurve_DistributionOfEnergy>>(m.attr("FairCurve_DistributionOfSagging"))
    // constructors
        .def(py::init< const Standard_Integer,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColgp_HArray1OfPnt2d> &,const Standard_Integer,const FairCurve_BattenLaw &,const Standard_Integer >()  , py::arg("BSplOrder"),  py::arg("FlatKnots"),  py::arg("Poles"),  py::arg("DerivativeOrder"),  py::arg("Law"),  py::arg("NbValAux")=static_cast<const Standard_Integer>(0) )
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (FairCurve_DistributionOfSagging::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (FairCurve_DistributionOfSagging::*)( const math_Vector & , math_Vector & ) >(&FairCurve_DistributionOfSagging::Value),
             R"#(computes the values <F> of the functions for the variable <X>. returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FairCurve_DistributionOfTension , shared_ptr<FairCurve_DistributionOfTension> , FairCurve_DistributionOfEnergy>>(m.attr("FairCurve_DistributionOfTension"))
    // constructors
        .def(py::init< const Standard_Integer,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColgp_HArray1OfPnt2d> &,const Standard_Integer,const Standard_Real,const FairCurve_BattenLaw &,const Standard_Integer,const Standard_Boolean >()  , py::arg("BSplOrder"),  py::arg("FlatKnots"),  py::arg("Poles"),  py::arg("DerivativeOrder"),  py::arg("LengthSliding"),  py::arg("Law"),  py::arg("NbValAux")=static_cast<const Standard_Integer>(0),  py::arg("Uniform")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("SetLengthSliding",
             (void (FairCurve_DistributionOfTension::*)( const Standard_Real ) ) static_cast<void (FairCurve_DistributionOfTension::*)( const Standard_Real ) >(&FairCurve_DistributionOfTension::SetLengthSliding),
             R"#(change the length sliding)#"  , py::arg("LengthSliding"))
        .def("Value",
             (Standard_Boolean (FairCurve_DistributionOfTension::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (FairCurve_DistributionOfTension::*)( const math_Vector & , math_Vector & ) >(&FairCurve_DistributionOfTension::Value),
             R"#(computes the values <F> of the functions for the variable <X>. returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("SetLengthSliding",
             (void (FairCurve_DistributionOfTension::*)( const Standard_Real ) ) static_cast<void (FairCurve_DistributionOfTension::*)( const Standard_Real ) >(&FairCurve_DistributionOfTension::SetLengthSliding),
             R"#(change the length sliding)#"  , py::arg("LengthSliding"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FairCurve_EnergyOfBatten , shared_ptr<FairCurve_EnergyOfBatten> , FairCurve_Energy>>(m.attr("FairCurve_EnergyOfBatten"))
    // constructors
        .def(py::init< const Standard_Integer,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColgp_HArray1OfPnt2d> &,const Standard_Integer,const Standard_Integer,const FairCurve_BattenLaw &,const Standard_Real,const Standard_Boolean,const Standard_Real,const Standard_Real >()  , py::arg("BSplOrder"),  py::arg("FlatKnots"),  py::arg("Poles"),  py::arg("ContrOrder1"),  py::arg("ContrOrder2"),  py::arg("Law"),  py::arg("LengthSliding"),  py::arg("FreeSliding")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("Angle1")=static_cast<const Standard_Real>(0),  py::arg("Angle2")=static_cast<const Standard_Real>(0) )
    // custom constructors
    // methods
        .def("LengthSliding",
             (Standard_Real (FairCurve_EnergyOfBatten::*)() const) static_cast<Standard_Real (FairCurve_EnergyOfBatten::*)() const>(&FairCurve_EnergyOfBatten::LengthSliding),
             R"#(return the lengthSliding = P1P2 + Sliding)#" )
        .def("Status",
             (FairCurve_AnalysisCode (FairCurve_EnergyOfBatten::*)() const) static_cast<FairCurve_AnalysisCode (FairCurve_EnergyOfBatten::*)() const>(&FairCurve_EnergyOfBatten::Status),
             R"#(return the status)#" )
        .def("Variable",
             (Standard_Boolean (FairCurve_EnergyOfBatten::*)( math_Vector & ) const) static_cast<Standard_Boolean (FairCurve_EnergyOfBatten::*)( math_Vector & ) const>(&FairCurve_EnergyOfBatten::Variable),
             R"#(compute the variables <X> wich correspond with the field <MyPoles>)#"  , py::arg("X"))
        .def("LengthSliding",
             (Standard_Real (FairCurve_EnergyOfBatten::*)() const) static_cast<Standard_Real (FairCurve_EnergyOfBatten::*)() const>(&FairCurve_EnergyOfBatten::LengthSliding),
             R"#(return the lengthSliding = P1P2 + Sliding)#" )
        .def("Status",
             (FairCurve_AnalysisCode (FairCurve_EnergyOfBatten::*)() const) static_cast<FairCurve_AnalysisCode (FairCurve_EnergyOfBatten::*)() const>(&FairCurve_EnergyOfBatten::Status),
             R"#(return the status)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FairCurve_EnergyOfMVC , shared_ptr<FairCurve_EnergyOfMVC> , FairCurve_Energy>>(m.attr("FairCurve_EnergyOfMVC"))
    // constructors
        .def(py::init< const Standard_Integer,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColgp_HArray1OfPnt2d> &,const Standard_Integer,const Standard_Integer,const FairCurve_BattenLaw &,const Standard_Real,const Standard_Real,const Standard_Boolean,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("BSplOrder"),  py::arg("FlatKnots"),  py::arg("Poles"),  py::arg("ContrOrder1"),  py::arg("ContrOrder2"),  py::arg("Law"),  py::arg("PhysicalRatio"),  py::arg("LengthSliding"),  py::arg("FreeSliding")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("Angle1")=static_cast<const Standard_Real>(0),  py::arg("Angle2")=static_cast<const Standard_Real>(0),  py::arg("Curvature1")=static_cast<const Standard_Real>(0),  py::arg("Curvature2")=static_cast<const Standard_Real>(0) )
    // custom constructors
    // methods
        .def("LengthSliding",
             (Standard_Real (FairCurve_EnergyOfMVC::*)() const) static_cast<Standard_Real (FairCurve_EnergyOfMVC::*)() const>(&FairCurve_EnergyOfMVC::LengthSliding),
             R"#(return the lengthSliding = P1P2 + Sliding)#" )
        .def("Status",
             (FairCurve_AnalysisCode (FairCurve_EnergyOfMVC::*)() const) static_cast<FairCurve_AnalysisCode (FairCurve_EnergyOfMVC::*)() const>(&FairCurve_EnergyOfMVC::Status),
             R"#(return the status)#" )
        .def("Variable",
             (Standard_Boolean (FairCurve_EnergyOfMVC::*)( math_Vector & ) const) static_cast<Standard_Boolean (FairCurve_EnergyOfMVC::*)( math_Vector & ) const>(&FairCurve_EnergyOfMVC::Variable),
             R"#(compute the variables <X> wich correspond with the field <MyPoles>)#"  , py::arg("X"))
        .def("LengthSliding",
             (Standard_Real (FairCurve_EnergyOfMVC::*)() const) static_cast<Standard_Real (FairCurve_EnergyOfMVC::*)() const>(&FairCurve_EnergyOfMVC::LengthSliding),
             R"#(return the lengthSliding = P1P2 + Sliding)#" )
        .def("Status",
             (FairCurve_AnalysisCode (FairCurve_EnergyOfMVC::*)() const) static_cast<FairCurve_AnalysisCode (FairCurve_EnergyOfMVC::*)() const>(&FairCurve_EnergyOfMVC::Status),
             R"#(return the status)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FairCurve_MinimalVariation , shared_ptr<FairCurve_MinimalVariation> , FairCurve_Batten>>(m.attr("FairCurve_MinimalVariation"))
    // constructors
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P1"),  py::arg("P2"),  py::arg("Heigth"),  py::arg("Slope")=static_cast<const Standard_Real>(0),  py::arg("PhysicalRatio")=static_cast<const Standard_Real>(0) )
    // custom constructors
    // methods
        .def("SetCurvature1",
             (void (FairCurve_MinimalVariation::*)( const Standard_Real ) ) static_cast<void (FairCurve_MinimalVariation::*)( const Standard_Real ) >(&FairCurve_MinimalVariation::SetCurvature1),
             R"#(Allows you to set a new constraint on curvature at the first point.)#"  , py::arg("Curvature"))
        .def("SetCurvature2",
             (void (FairCurve_MinimalVariation::*)( const Standard_Real ) ) static_cast<void (FairCurve_MinimalVariation::*)( const Standard_Real ) >(&FairCurve_MinimalVariation::SetCurvature2),
             R"#(Allows you to set a new constraint on curvature at the second point.)#"  , py::arg("Curvature"))
        .def("SetPhysicalRatio",
             (void (FairCurve_MinimalVariation::*)( const Standard_Real ) ) static_cast<void (FairCurve_MinimalVariation::*)( const Standard_Real ) >(&FairCurve_MinimalVariation::SetPhysicalRatio),
             R"#(Allows you to set the physical ratio Ratio. The kinds of energy which you can specify include: 0 is only "Jerk" Energy 1 is only "Sagging" Energy like batten Warning: if Ratio is 1 it is impossible to impose curvature constraints. Raises DomainError if Ratio < 0 or Ratio > 1)#"  , py::arg("Ratio"))
        .def("Compute",
             (Standard_Boolean (FairCurve_MinimalVariation::*)( FairCurve_AnalysisCode & , const Standard_Integer , const Standard_Real ) ) static_cast<Standard_Boolean (FairCurve_MinimalVariation::*)( FairCurve_AnalysisCode & , const Standard_Integer , const Standard_Real ) >(&FairCurve_MinimalVariation::Compute),
             R"#(Computes the curve with respect to the constraints, NbIterations and Tolerance. The tolerance setting allows you to control the precision of computation, and the maximum number of iterations allows you to set a limit on computation time.)#"  , py::arg("ACode"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(50),  py::arg("Tolerance")=static_cast<const Standard_Real>(1.0e-3))
        .def("GetCurvature1",
             (Standard_Real (FairCurve_MinimalVariation::*)() const) static_cast<Standard_Real (FairCurve_MinimalVariation::*)() const>(&FairCurve_MinimalVariation::GetCurvature1),
             R"#(Returns the first established curvature.)#" )
        .def("GetCurvature2",
             (Standard_Real (FairCurve_MinimalVariation::*)() const) static_cast<Standard_Real (FairCurve_MinimalVariation::*)() const>(&FairCurve_MinimalVariation::GetCurvature2),
             R"#(Returns the second established curvature.)#" )
        .def("GetPhysicalRatio",
             (Standard_Real (FairCurve_MinimalVariation::*)() const) static_cast<Standard_Real (FairCurve_MinimalVariation::*)() const>(&FairCurve_MinimalVariation::GetPhysicalRatio),
             R"#(Returns the physical ratio, or kind of energy.)#" )
        .def("Dump",
             (void (FairCurve_MinimalVariation::*)( std::ostream & ) const) static_cast<void (FairCurve_MinimalVariation::*)( std::ostream & ) const>(&FairCurve_MinimalVariation::Dump),
             R"#(Prints on the stream o information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("o"))
        .def("SetCurvature1",
             (void (FairCurve_MinimalVariation::*)( const Standard_Real ) ) static_cast<void (FairCurve_MinimalVariation::*)( const Standard_Real ) >(&FairCurve_MinimalVariation::SetCurvature1),
             R"#(Allows you to set a new constraint on curvature at the first point.)#"  , py::arg("Curvature"))
        .def("SetCurvature2",
             (void (FairCurve_MinimalVariation::*)( const Standard_Real ) ) static_cast<void (FairCurve_MinimalVariation::*)( const Standard_Real ) >(&FairCurve_MinimalVariation::SetCurvature2),
             R"#(Allows you to set a new constraint on curvature at the second point.)#"  , py::arg("Curvature"))
        .def("SetPhysicalRatio",
             (void (FairCurve_MinimalVariation::*)( const Standard_Real ) ) static_cast<void (FairCurve_MinimalVariation::*)( const Standard_Real ) >(&FairCurve_MinimalVariation::SetPhysicalRatio),
             R"#(Allows you to set the physical ratio Ratio. The kinds of energy which you can specify include: 0 is only "Jerk" Energy 1 is only "Sagging" Energy like batten Warning: if Ratio is 1 it is impossible to impose curvature constraints. Raises DomainError if Ratio < 0 or Ratio > 1)#"  , py::arg("Ratio"))
        .def("GetCurvature1",
             (Standard_Real (FairCurve_MinimalVariation::*)() const) static_cast<Standard_Real (FairCurve_MinimalVariation::*)() const>(&FairCurve_MinimalVariation::GetCurvature1),
             R"#(Returns the first established curvature.)#" )
        .def("GetCurvature2",
             (Standard_Real (FairCurve_MinimalVariation::*)() const) static_cast<Standard_Real (FairCurve_MinimalVariation::*)() const>(&FairCurve_MinimalVariation::GetCurvature2),
             R"#(Returns the second established curvature.)#" )
        .def("GetPhysicalRatio",
             (Standard_Real (FairCurve_MinimalVariation::*)() const) static_cast<Standard_Real (FairCurve_MinimalVariation::*)() const>(&FairCurve_MinimalVariation::GetPhysicalRatio),
             R"#(Returns the physical ratio, or kind of energy.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\FairCurve_EnergyOfBatten.hxx
// ./opencascade\FairCurve_AnalysisCode.hxx
// ./opencascade\FairCurve_Newton.hxx
// ./opencascade\FairCurve_DistributionOfSagging.hxx
// ./opencascade\FairCurve_Batten.hxx
// ./opencascade\FairCurve_MinimalVariation.hxx
// ./opencascade\FairCurve_Energy.hxx
// ./opencascade\FairCurve_BattenLaw.hxx
// ./opencascade\FairCurve_DistributionOfEnergy.hxx
// ./opencascade\FairCurve_EnergyOfMVC.hxx
// ./opencascade\FairCurve_DistributionOfJerk.hxx
// ./opencascade\FairCurve_DistributionOfTension.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

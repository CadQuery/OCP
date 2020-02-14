
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>

// module includes
#include <CPnts_AbscissaPoint.hxx>
#include <CPnts_MyGaussFunction.hxx>
#include <CPnts_MyRootFunction.hxx>
#include <CPnts_RealFunction.hxx>
#include <CPnts_UniformDeflection.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_CPnts(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("CPnts"));


//Python trampoline classes

// classes


    static_cast<py::class_<CPnts_AbscissaPoint , shared_ptr<CPnts_AbscissaPoint>  >>(m.attr("CPnts_AbscissaPoint"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Adaptor3d_Curve &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("Abscissa"),  py::arg("U0"),  py::arg("Resolution") )
        .def(py::init< const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("Abscissa"),  py::arg("U0"),  py::arg("Resolution") )
        .def(py::init< const Adaptor3d_Curve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("Abscissa"),  py::arg("U0"),  py::arg("Ui"),  py::arg("Resolution") )
        .def(py::init< const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("Abscissa"),  py::arg("U0"),  py::arg("Ui"),  py::arg("Resolution") )
    // custom constructors
    // methods
        .def("Init",
             (void (CPnts_AbscissaPoint::*)( const Adaptor3d_Curve &  ) ) static_cast<void (CPnts_AbscissaPoint::*)( const Adaptor3d_Curve &  ) >(&CPnts_AbscissaPoint::Init),
             R"#(Initializes the resolution function with <C>.)#"  , py::arg("C"))
        .def("Init",
             (void (CPnts_AbscissaPoint::*)( const Adaptor2d_Curve2d &  ) ) static_cast<void (CPnts_AbscissaPoint::*)( const Adaptor2d_Curve2d &  ) >(&CPnts_AbscissaPoint::Init),
             R"#(Initializes the resolution function with <C>.)#"  , py::arg("C"))
        .def("Init",
             (void (CPnts_AbscissaPoint::*)( const Adaptor3d_Curve & ,  const Standard_Real  ) ) static_cast<void (CPnts_AbscissaPoint::*)( const Adaptor3d_Curve & ,  const Standard_Real  ) >(&CPnts_AbscissaPoint::Init),
             R"#(Initializes the resolution function with <C>.)#"  , py::arg("C"),  py::arg("Tol"))
        .def("Init",
             (void (CPnts_AbscissaPoint::*)( const Adaptor2d_Curve2d & ,  const Standard_Real  ) ) static_cast<void (CPnts_AbscissaPoint::*)( const Adaptor2d_Curve2d & ,  const Standard_Real  ) >(&CPnts_AbscissaPoint::Init),
             R"#(Initializes the resolution function with <C>.)#"  , py::arg("C"),  py::arg("Tol"))
        .def("Init",
             (void (CPnts_AbscissaPoint::*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (CPnts_AbscissaPoint::*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real  ) >(&CPnts_AbscissaPoint::Init),
             R"#(Initializes the resolution function with <C> between U1 and U2.)#"  , py::arg("C"),  py::arg("U1"),  py::arg("U2"))
        .def("Init",
             (void (CPnts_AbscissaPoint::*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (CPnts_AbscissaPoint::*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real  ) >(&CPnts_AbscissaPoint::Init),
             R"#(Initializes the resolution function with <C> between U1 and U2.)#"  , py::arg("C"),  py::arg("U1"),  py::arg("U2"))
        .def("Init",
             (void (CPnts_AbscissaPoint::*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (CPnts_AbscissaPoint::*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&CPnts_AbscissaPoint::Init),
             R"#(Initializes the resolution function with <C> between U1 and U2.)#"  , py::arg("C"),  py::arg("U1"),  py::arg("U2"),  py::arg("Tol"))
        .def("Init",
             (void (CPnts_AbscissaPoint::*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (CPnts_AbscissaPoint::*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&CPnts_AbscissaPoint::Init),
             R"#(Initializes the resolution function with <C> between U1 and U2.)#"  , py::arg("C"),  py::arg("U1"),  py::arg("U2"),  py::arg("Tol"))
        .def("Perform",
             (void (CPnts_AbscissaPoint::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (CPnts_AbscissaPoint::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&CPnts_AbscissaPoint::Perform),
             R"#(Computes the point at the distance <Abscissa> of the curve. U0 is the parameter of the point from which the distance is measured.)#"  , py::arg("Abscissa"),  py::arg("U0"),  py::arg("Resolution"))
        .def("Perform",
             (void (CPnts_AbscissaPoint::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (CPnts_AbscissaPoint::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&CPnts_AbscissaPoint::Perform),
             R"#(Computes the point at the distance <Abscissa> of the curve. U0 is the parameter of the point from which the distance is measured and Ui is the starting value for the iterative process (should be close to the final solution).)#"  , py::arg("Abscissa"),  py::arg("U0"),  py::arg("Ui"),  py::arg("Resolution"))
        .def("AdvPerform",
             (void (CPnts_AbscissaPoint::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (CPnts_AbscissaPoint::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&CPnts_AbscissaPoint::AdvPerform),
             R"#(Computes the point at the distance <Abscissa> of the curve; performs more appropriate tolerance managment; to use this method in right way it is necessary to call empty consructor. then call method Init with Tolerance = Resolution, then call AdvPermorm. U0 is the parameter of the point from which the distance is measured and Ui is the starting value for the iterative process (should be close to the final solution).)#"  , py::arg("Abscissa"),  py::arg("U0"),  py::arg("Ui"),  py::arg("Resolution"))
        .def("IsDone",
             (Standard_Boolean (CPnts_AbscissaPoint::*)() const) static_cast<Standard_Boolean (CPnts_AbscissaPoint::*)() const>(&CPnts_AbscissaPoint::IsDone),
             R"#(True if the computation was successful, False otherwise.)#" )
        .def("Parameter",
             (Standard_Real (CPnts_AbscissaPoint::*)() const) static_cast<Standard_Real (CPnts_AbscissaPoint::*)() const>(&CPnts_AbscissaPoint::Parameter),
             R"#(Returns the parameter of the solution.)#" )
        .def("SetParameter",
             (void (CPnts_AbscissaPoint::*)( const Standard_Real  ) ) static_cast<void (CPnts_AbscissaPoint::*)( const Standard_Real  ) >(&CPnts_AbscissaPoint::SetParameter),
             R"#(Enforce the solution, used by GCPnts.)#"  , py::arg("P"))
        .def("IsDone",
             (Standard_Boolean (CPnts_AbscissaPoint::*)() const) static_cast<Standard_Boolean (CPnts_AbscissaPoint::*)() const>(&CPnts_AbscissaPoint::IsDone),
             R"#(True if the computation was successful, False otherwise.)#" )
        .def("Parameter",
             (Standard_Real (CPnts_AbscissaPoint::*)() const) static_cast<Standard_Real (CPnts_AbscissaPoint::*)() const>(&CPnts_AbscissaPoint::Parameter),
             R"#(Returns the parameter of the solution.)#" )
        .def("SetParameter",
             (void (CPnts_AbscissaPoint::*)( const Standard_Real  ) ) static_cast<void (CPnts_AbscissaPoint::*)( const Standard_Real  ) >(&CPnts_AbscissaPoint::SetParameter),
             R"#(Enforce the solution, used by GCPnts.)#"  , py::arg("P"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Length_s",
                    (Standard_Real (*)( const Adaptor3d_Curve &  ) ) static_cast<Standard_Real (*)( const Adaptor3d_Curve &  ) >(&CPnts_AbscissaPoint::Length),
                    R"#(Computes the length of the Curve <C>.)#"  , py::arg("C"))
        .def_static("Length_s",
                    (Standard_Real (*)( const Adaptor2d_Curve2d &  ) ) static_cast<Standard_Real (*)( const Adaptor2d_Curve2d &  ) >(&CPnts_AbscissaPoint::Length),
                    R"#(Computes the length of the Curve <C>.)#"  , py::arg("C"))
        .def_static("Length_s",
                    (Standard_Real (*)( const Adaptor3d_Curve & ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const Adaptor3d_Curve & ,  const Standard_Real  ) >(&CPnts_AbscissaPoint::Length),
                    R"#(Computes the length of the Curve <C> with the given tolerance.)#"  , py::arg("C"),  py::arg("Tol"))
        .def_static("Length_s",
                    (Standard_Real (*)( const Adaptor2d_Curve2d & ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const Adaptor2d_Curve2d & ,  const Standard_Real  ) >(&CPnts_AbscissaPoint::Length),
                    R"#(Computes the length of the Curve <C> with the given tolerance.)#"  , py::arg("C"),  py::arg("Tol"))
        .def_static("Length_s",
                    (Standard_Real (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real  ) >(&CPnts_AbscissaPoint::Length),
                    R"#(Computes the length of the Curve <C> between <U1> and <U2>.)#"  , py::arg("C"),  py::arg("U1"),  py::arg("U2"))
        .def_static("Length_s",
                    (Standard_Real (*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real  ) >(&CPnts_AbscissaPoint::Length),
                    R"#(Computes the length of the Curve <C> between <U1> and <U2>.)#"  , py::arg("C"),  py::arg("U1"),  py::arg("U2"))
        .def_static("Length_s",
                    (Standard_Real (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&CPnts_AbscissaPoint::Length),
                    R"#(Computes the length of the Curve <C> between <U1> and <U2> with the given tolerance.)#"  , py::arg("C"),  py::arg("U1"),  py::arg("U2"),  py::arg("Tol"))
        .def_static("Length_s",
                    (Standard_Real (*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&CPnts_AbscissaPoint::Length),
                    R"#(Computes the length of the Curve <C> between <U1> and <U2> with the given tolerance. creation of a indefinite AbscissaPoint.)#"  , py::arg("C"),  py::arg("U1"),  py::arg("U2"),  py::arg("Tol"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CPnts_MyGaussFunction , shared_ptr<CPnts_MyGaussFunction>  , math_Function >>(m.attr("CPnts_MyGaussFunction"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (CPnts_MyGaussFunction::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (CPnts_MyGaussFunction::*)( const Standard_Real ,  Standard_Real &  ) >(&CPnts_MyGaussFunction::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CPnts_MyRootFunction , shared_ptr<CPnts_MyRootFunction>  , math_FunctionWithDerivative >>(m.attr("CPnts_MyRootFunction"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (CPnts_MyRootFunction::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (CPnts_MyRootFunction::*)( const Standard_Real ,  const Standard_Real  ) >(&CPnts_MyRootFunction::Init),
             R"#(We want to solve Integral(X0,X,F(X,D)) = L)#"  , py::arg("X0"),  py::arg("L"))
        .def("Init",
             (void (CPnts_MyRootFunction::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (CPnts_MyRootFunction::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&CPnts_MyRootFunction::Init),
             R"#(We want to solve Integral(X0,X,F(X,D)) = L with given tolerance)#"  , py::arg("X0"),  py::arg("L"),  py::arg("Tol"))
        .def("Value",
             (Standard_Boolean (CPnts_MyRootFunction::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (CPnts_MyRootFunction::*)( const Standard_Real ,  Standard_Real &  ) >(&CPnts_MyRootFunction::Value),
             R"#(This is Integral(X0,X,F(X,D)) - L)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (CPnts_MyRootFunction::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (CPnts_MyRootFunction::*)( const Standard_Real ,  Standard_Real &  ) >(&CPnts_MyRootFunction::Derivative),
             R"#(This is F(X,D))#"  , py::arg("X"),  py::arg("Df"))
        .def("Values",
             (Standard_Boolean (CPnts_MyRootFunction::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (CPnts_MyRootFunction::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) >(&CPnts_MyRootFunction::Values),
             R"#(None)#"  , py::arg("X"),  py::arg("F"),  py::arg("Df"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CPnts_UniformDeflection , shared_ptr<CPnts_UniformDeflection>  >>(m.attr("CPnts_UniformDeflection"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Adaptor3d_Curve &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("C"),  py::arg("Deflection"),  py::arg("Resolution"),  py::arg("WithControl") )
        .def(py::init< const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("C"),  py::arg("Deflection"),  py::arg("Resolution"),  py::arg("WithControl") )
        .def(py::init< const Adaptor3d_Curve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("C"),  py::arg("Deflection"),  py::arg("U1"),  py::arg("U2"),  py::arg("Resolution"),  py::arg("WithControl") )
        .def(py::init< const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("C"),  py::arg("Deflection"),  py::arg("U1"),  py::arg("U2"),  py::arg("Resolution"),  py::arg("WithControl") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (CPnts_UniformDeflection::*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (CPnts_UniformDeflection::*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&CPnts_UniformDeflection::Initialize),
             R"#(Initialize the algoritms with <C>, <Deflection>, <UStep>, <Resolution> and <WithControl>)#"  , py::arg("C"),  py::arg("Deflection"),  py::arg("Resolution"),  py::arg("WithControl"))
        .def("Initialize",
             (void (CPnts_UniformDeflection::*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (CPnts_UniformDeflection::*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&CPnts_UniformDeflection::Initialize),
             R"#(Initialize the algoritms with <C>, <Deflection>, <UStep>, <Resolution> and <WithControl>)#"  , py::arg("C"),  py::arg("Deflection"),  py::arg("Resolution"),  py::arg("WithControl"))
        .def("Initialize",
             (void (CPnts_UniformDeflection::*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (CPnts_UniformDeflection::*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&CPnts_UniformDeflection::Initialize),
             R"#(Initialize the algoritms with <C>, <Deflection>, <UStep>, <U1>, <U2> and <WithControl>)#"  , py::arg("C"),  py::arg("Deflection"),  py::arg("U1"),  py::arg("U2"),  py::arg("Resolution"),  py::arg("WithControl"))
        .def("Initialize",
             (void (CPnts_UniformDeflection::*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (CPnts_UniformDeflection::*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&CPnts_UniformDeflection::Initialize),
             R"#(Initialize the algoritms with <C>, <Deflection>, <UStep>, <U1>, <U2> and <WithControl>)#"  , py::arg("C"),  py::arg("Deflection"),  py::arg("U1"),  py::arg("U2"),  py::arg("Resolution"),  py::arg("WithControl"))
        .def("IsAllDone",
             (Standard_Boolean (CPnts_UniformDeflection::*)() const) static_cast<Standard_Boolean (CPnts_UniformDeflection::*)() const>(&CPnts_UniformDeflection::IsAllDone),
             R"#(To know if all the calculus were done successfully (ie all the points have been computed). The calculus can fail if the Curve is not C1 in the considered domain. Returns True if the calculus was successful.)#" )
        .def("Next",
             (void (CPnts_UniformDeflection::*)() ) static_cast<void (CPnts_UniformDeflection::*)() >(&CPnts_UniformDeflection::Next),
             R"#(go to the next Point.)#" )
        .def("More",
             (Standard_Boolean (CPnts_UniformDeflection::*)() ) static_cast<Standard_Boolean (CPnts_UniformDeflection::*)() >(&CPnts_UniformDeflection::More),
             R"#(returns True if it exists a next Point.)#" )
        .def("Value",
             (Standard_Real (CPnts_UniformDeflection::*)() const) static_cast<Standard_Real (CPnts_UniformDeflection::*)() const>(&CPnts_UniformDeflection::Value),
             R"#(return the computed parameter)#" )
        .def("Point",
             (gp_Pnt (CPnts_UniformDeflection::*)() const) static_cast<gp_Pnt (CPnts_UniformDeflection::*)() const>(&CPnts_UniformDeflection::Point),
             R"#(return the computed parameter)#" )
        .def("IsAllDone",
             (Standard_Boolean (CPnts_UniformDeflection::*)() const) static_cast<Standard_Boolean (CPnts_UniformDeflection::*)() const>(&CPnts_UniformDeflection::IsAllDone),
             R"#(To know if all the calculus were done successfully (ie all the points have been computed). The calculus can fail if the Curve is not C1 in the considered domain. Returns True if the calculus was successful.)#" )
        .def("Next",
             (void (CPnts_UniformDeflection::*)() ) static_cast<void (CPnts_UniformDeflection::*)() >(&CPnts_UniformDeflection::Next),
             R"#(go to the next Point.)#" )
        .def("Value",
             (Standard_Real (CPnts_UniformDeflection::*)() const) static_cast<Standard_Real (CPnts_UniformDeflection::*)() const>(&CPnts_UniformDeflection::Value),
             R"#(return the computed parameter)#" )
        .def("Point",
             (gp_Pnt (CPnts_UniformDeflection::*)() const) static_cast<gp_Pnt (CPnts_UniformDeflection::*)() const>(&CPnts_UniformDeflection::Point),
             R"#(return the computed parameter)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/CPnts_UniformDeflection.hxx
// ./opencascade/CPnts_RealFunction.hxx
// ./opencascade/CPnts_AbscissaPoint.hxx
// ./opencascade/CPnts_MyGaussFunction.hxx
// ./opencascade/CPnts_MyRootFunction.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post


// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_ConstructionError.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>

// module includes
#include <GCPnts_AbscissaPoint.hxx>
#include <GCPnts_AbscissaType.hxx>
#include <GCPnts_DeflectionType.hxx>
#include <GCPnts_DistFunction.hxx>
#include <GCPnts_DistFunction2d.hxx>
#include <GCPnts_QuasiUniformAbscissa.hxx>
#include <GCPnts_QuasiUniformDeflection.hxx>
#include <GCPnts_TangentialDeflection.hxx>
#include <GCPnts_UniformAbscissa.hxx>
#include <GCPnts_UniformDeflection.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GCPnts(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GCPnts"));


//Python trampoline classes

// classes


    static_cast<py::class_<GCPnts_AbscissaPoint , shared_ptr<GCPnts_AbscissaPoint> >>(m.attr("GCPnts_AbscissaPoint"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Adaptor3d_Curve &,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("Abscissa"),  py::arg("U0") )
        .def(py::init< const Standard_Real,const Adaptor3d_Curve &,const Standard_Real,const Standard_Real >()  , py::arg("Tol"),  py::arg("C"),  py::arg("Abscissa"),  py::arg("U0") )
        .def(py::init< const Standard_Real,const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real >()  , py::arg("Tol"),  py::arg("C"),  py::arg("Abscissa"),  py::arg("U0") )
        .def(py::init< const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("Abscissa"),  py::arg("U0") )
        .def(py::init< const Adaptor3d_Curve &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("Abscissa"),  py::arg("U0"),  py::arg("Ui") )
        .def(py::init< const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("Abscissa"),  py::arg("U0"),  py::arg("Ui") )
        .def(py::init< const Adaptor3d_Curve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("Abscissa"),  py::arg("U0"),  py::arg("Ui"),  py::arg("Tol") )
        .def(py::init< const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("Abscissa"),  py::arg("U0"),  py::arg("Ui"),  py::arg("Tol") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (GCPnts_AbscissaPoint::*)() const) static_cast<Standard_Boolean (GCPnts_AbscissaPoint::*)() const>(&GCPnts_AbscissaPoint::IsDone),
             R"#(True if the computation was successful, False otherwise. IsDone is a protection against: - non-convergence of the algorithm - querying the results before computation.)#" )
        .def("Parameter",
             (Standard_Real (GCPnts_AbscissaPoint::*)() const) static_cast<Standard_Real (GCPnts_AbscissaPoint::*)() const>(&GCPnts_AbscissaPoint::Parameter),
             R"#(Returns the parameter on the curve of the point solution of this algorithm. Exceptions StdFail_NotDone if the computation was not successful, or was not done.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Length_s",
                    (Standard_Real (*)( const Adaptor3d_Curve & ) ) static_cast<Standard_Real (*)( const Adaptor3d_Curve & ) >(&GCPnts_AbscissaPoint::Length),
                    R"#(Computes the length of the Curve <C>.)#"  , py::arg("C"))
        .def_static("Length_s",
                    (Standard_Real (*)( const Adaptor2d_Curve2d & ) ) static_cast<Standard_Real (*)( const Adaptor2d_Curve2d & ) >(&GCPnts_AbscissaPoint::Length),
                    R"#(Computes the length of the Curve <C>.)#"  , py::arg("C"))
        .def_static("Length_s",
                    (Standard_Real (*)( const Adaptor3d_Curve & , const Standard_Real ) ) static_cast<Standard_Real (*)( const Adaptor3d_Curve & , const Standard_Real ) >(&GCPnts_AbscissaPoint::Length),
                    R"#(Computes the length of the Curve <C> with the given tolerance.)#"  , py::arg("C"),  py::arg("Tol"))
        .def_static("Length_s",
                    (Standard_Real (*)( const Adaptor2d_Curve2d & , const Standard_Real ) ) static_cast<Standard_Real (*)( const Adaptor2d_Curve2d & , const Standard_Real ) >(&GCPnts_AbscissaPoint::Length),
                    R"#(Computes the length of the Curve <C> with the given tolerance.)#"  , py::arg("C"),  py::arg("Tol"))
        .def_static("Length_s",
                    (Standard_Real (*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Real (*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Real ) >(&GCPnts_AbscissaPoint::Length),
                    R"#(Computes the length of the Curve <C>.)#"  , py::arg("C"),  py::arg("U1"),  py::arg("U2"))
        .def_static("Length_s",
                    (Standard_Real (*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Real (*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real ) >(&GCPnts_AbscissaPoint::Length),
                    R"#(Computes the length of the Curve <C>.)#"  , py::arg("C"),  py::arg("U1"),  py::arg("U2"))
        .def_static("Length_s",
                    (Standard_Real (*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Real (*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Real ) >(&GCPnts_AbscissaPoint::Length),
                    R"#(Computes the length of the Curve <C> with the given tolerance.)#"  , py::arg("C"),  py::arg("U1"),  py::arg("U2"),  py::arg("Tol"))
        .def_static("Length_s",
                    (Standard_Real (*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Real (*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real , const Standard_Real ) >(&GCPnts_AbscissaPoint::Length),
                    R"#(Computes the length of the Curve <C> with the given tolerance. Constructs an empty algorithm. This function is used only for initializing a framework to compute the length of a curve (or a series of curves). Warning The function IsDone will return the value false after the use of this function.)#"  , py::arg("C"),  py::arg("U1"),  py::arg("U2"),  py::arg("Tol"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCPnts_DistFunction , shared_ptr<GCPnts_DistFunction> , math_Function>>(m.attr("GCPnts_DistFunction"))
    // constructors
        .def(py::init< const Adaptor3d_Curve &,const Standard_Real,const Standard_Real >()  , py::arg("theCurve"),  py::arg("U1"),  py::arg("U2") )
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (GCPnts_DistFunction::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (GCPnts_DistFunction::*)( const Standard_Real , Standard_Real & ) >(&GCPnts_DistFunction::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCPnts_DistFunction2d , shared_ptr<GCPnts_DistFunction2d> , math_Function>>(m.attr("GCPnts_DistFunction2d"))
    // constructors
        .def(py::init< const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real >()  , py::arg("theCurve"),  py::arg("U1"),  py::arg("U2") )
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (GCPnts_DistFunction2d::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (GCPnts_DistFunction2d::*)( const Standard_Real , Standard_Real & ) >(&GCPnts_DistFunction2d::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCPnts_DistFunction2dMV , shared_ptr<GCPnts_DistFunction2dMV> , math_MultipleVarFunction>>(m.attr("GCPnts_DistFunction2dMV"))
    // constructors
        .def(py::init< GCPnts_DistFunction2d & >()  , py::arg("theCurvLinDist") )
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (GCPnts_DistFunction2dMV::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (GCPnts_DistFunction2dMV::*)( const math_Vector & , Standard_Real & ) >(&GCPnts_DistFunction2dMV::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
        .def("NbVariables",
             (Standard_Integer (GCPnts_DistFunction2dMV::*)() const) static_cast<Standard_Integer (GCPnts_DistFunction2dMV::*)() const>(&GCPnts_DistFunction2dMV::NbVariables),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCPnts_DistFunctionMV , shared_ptr<GCPnts_DistFunctionMV> , math_MultipleVarFunction>>(m.attr("GCPnts_DistFunctionMV"))
    // constructors
        .def(py::init< GCPnts_DistFunction & >()  , py::arg("theCurvLinDist") )
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (GCPnts_DistFunctionMV::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (GCPnts_DistFunctionMV::*)( const math_Vector & , Standard_Real & ) >(&GCPnts_DistFunctionMV::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
        .def("NbVariables",
             (Standard_Integer (GCPnts_DistFunctionMV::*)() const) static_cast<Standard_Integer (GCPnts_DistFunctionMV::*)() const>(&GCPnts_DistFunctionMV::NbVariables),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCPnts_QuasiUniformAbscissa , shared_ptr<GCPnts_QuasiUniformAbscissa> >>(m.attr("GCPnts_QuasiUniformAbscissa"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Adaptor3d_Curve &,const Standard_Integer >()  , py::arg("C"),  py::arg("NbPoints") )
        .def(py::init< const Adaptor3d_Curve &,const Standard_Integer,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("NbPoints"),  py::arg("U1"),  py::arg("U2") )
        .def(py::init< const Adaptor2d_Curve2d &,const Standard_Integer >()  , py::arg("C"),  py::arg("NbPoints") )
        .def(py::init< const Adaptor2d_Curve2d &,const Standard_Integer,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("NbPoints"),  py::arg("U1"),  py::arg("U2") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (GCPnts_QuasiUniformAbscissa::*)( const Adaptor3d_Curve & , const Standard_Integer ) ) static_cast<void (GCPnts_QuasiUniformAbscissa::*)( const Adaptor3d_Curve & , const Standard_Integer ) >(&GCPnts_QuasiUniformAbscissa::Initialize),
             R"#(Initialize the algoritms with <C>, <NbPoints> and)#"  , py::arg("C"),  py::arg("NbPoints"))
        .def("Initialize",
             (void (GCPnts_QuasiUniformAbscissa::*)( const Adaptor3d_Curve & , const Standard_Integer , const Standard_Real , const Standard_Real ) ) static_cast<void (GCPnts_QuasiUniformAbscissa::*)( const Adaptor3d_Curve & , const Standard_Integer , const Standard_Real , const Standard_Real ) >(&GCPnts_QuasiUniformAbscissa::Initialize),
             R"#(Initialize the algoritms with <C>, <Abscissa>, <U1>, <U2>.)#"  , py::arg("C"),  py::arg("NbPoints"),  py::arg("U1"),  py::arg("U2"))
        .def("Initialize",
             (void (GCPnts_QuasiUniformAbscissa::*)( const Adaptor2d_Curve2d & , const Standard_Integer ) ) static_cast<void (GCPnts_QuasiUniformAbscissa::*)( const Adaptor2d_Curve2d & , const Standard_Integer ) >(&GCPnts_QuasiUniformAbscissa::Initialize),
             R"#(Initialize the algoritms with <C>, <NbPoints> and)#"  , py::arg("C"),  py::arg("NbPoints"))
        .def("Initialize",
             (void (GCPnts_QuasiUniformAbscissa::*)( const Adaptor2d_Curve2d & , const Standard_Integer , const Standard_Real , const Standard_Real ) ) static_cast<void (GCPnts_QuasiUniformAbscissa::*)( const Adaptor2d_Curve2d & , const Standard_Integer , const Standard_Real , const Standard_Real ) >(&GCPnts_QuasiUniformAbscissa::Initialize),
             R"#(Initialize the algoritms with <C>, <Abscissa>, <U1>, <U2>.)#"  , py::arg("C"),  py::arg("NbPoints"),  py::arg("U1"),  py::arg("U2"))
        .def("IsDone",
             (Standard_Boolean (GCPnts_QuasiUniformAbscissa::*)() const) static_cast<Standard_Boolean (GCPnts_QuasiUniformAbscissa::*)() const>(&GCPnts_QuasiUniformAbscissa::IsDone),
             R"#(Returns true if the computation was successful. IsDone is a protection against: - non-convergence of the algorithm - querying the results before computation.)#" )
        .def("NbPoints",
             (Standard_Integer (GCPnts_QuasiUniformAbscissa::*)() const) static_cast<Standard_Integer (GCPnts_QuasiUniformAbscissa::*)() const>(&GCPnts_QuasiUniformAbscissa::NbPoints),
             R"#(Returns the number of points of the distribution computed by this algorithm. This value is either: - the one imposed on the algorithm at the time of construction (or initialization), or - the one computed by the algorithm when the curvilinear distance between two consecutive points of the distribution is imposed on the algorithm at the time of construction (or initialization). Exceptions StdFail_NotDone if this algorithm has not been initialized, or if the computation was not successful.)#" )
        .def("Parameter",
             (Standard_Real (GCPnts_QuasiUniformAbscissa::*)( const Standard_Integer ) const) static_cast<Standard_Real (GCPnts_QuasiUniformAbscissa::*)( const Standard_Integer ) const>(&GCPnts_QuasiUniformAbscissa::Parameter),
             R"#(Returns the parameter of the point of index Index in the distribution computed by this algorithm. Warning Index must be greater than or equal to 1, and less than or equal to the number of points of the distribution. However, pay particular attention as this condition is not checked by this function. Exceptions StdFail_NotDone if this algorithm has not been initialized, or if the computation was not successful.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCPnts_QuasiUniformDeflection , shared_ptr<GCPnts_QuasiUniformDeflection> >>(m.attr("GCPnts_QuasiUniformDeflection"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Adaptor3d_Curve &,const Standard_Real,const GeomAbs_Shape >()  , py::arg("C"),  py::arg("Deflection"),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C1) )
        .def(py::init< const Adaptor2d_Curve2d &,const Standard_Real,const GeomAbs_Shape >()  , py::arg("C"),  py::arg("Deflection"),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C1) )
        .def(py::init< const Adaptor3d_Curve &,const Standard_Real,const Standard_Real,const Standard_Real,const GeomAbs_Shape >()  , py::arg("C"),  py::arg("Deflection"),  py::arg("U1"),  py::arg("U2"),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C1) )
        .def(py::init< const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real,const Standard_Real,const GeomAbs_Shape >()  , py::arg("C"),  py::arg("Deflection"),  py::arg("U1"),  py::arg("U2"),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C1) )
    // custom constructors
    // methods
        .def("Initialize",
             (void (GCPnts_QuasiUniformDeflection::*)( const Adaptor3d_Curve & , const Standard_Real , const GeomAbs_Shape ) ) static_cast<void (GCPnts_QuasiUniformDeflection::*)( const Adaptor3d_Curve & , const Standard_Real , const GeomAbs_Shape ) >(&GCPnts_QuasiUniformDeflection::Initialize),
             R"#(Initialize the algoritms with <C>, <Deflection>)#"  , py::arg("C"),  py::arg("Deflection"),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C1))
        .def("Initialize",
             (void (GCPnts_QuasiUniformDeflection::*)( const Adaptor2d_Curve2d & , const Standard_Real , const GeomAbs_Shape ) ) static_cast<void (GCPnts_QuasiUniformDeflection::*)( const Adaptor2d_Curve2d & , const Standard_Real , const GeomAbs_Shape ) >(&GCPnts_QuasiUniformDeflection::Initialize),
             R"#(Initialize the algoritms with <C>, <Deflection>)#"  , py::arg("C"),  py::arg("Deflection"),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C1))
        .def("Initialize",
             (void (GCPnts_QuasiUniformDeflection::*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Real , const GeomAbs_Shape ) ) static_cast<void (GCPnts_QuasiUniformDeflection::*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Real , const GeomAbs_Shape ) >(&GCPnts_QuasiUniformDeflection::Initialize),
             R"#(Initialize the algoritms with <C>, <Deflection>, <U1>,<U2>)#"  , py::arg("C"),  py::arg("Deflection"),  py::arg("U1"),  py::arg("U2"),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C1))
        .def("Initialize",
             (void (GCPnts_QuasiUniformDeflection::*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real , const Standard_Real , const GeomAbs_Shape ) ) static_cast<void (GCPnts_QuasiUniformDeflection::*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real , const Standard_Real , const GeomAbs_Shape ) >(&GCPnts_QuasiUniformDeflection::Initialize),
             R"#(Initialize the algoritms with <C>, <Deflection>, -- <U1>,<U2> This and the above algorithms initialize (or reinitialize) this algorithm and compute a distribution of points: - on the curve C, or - on the part of curve C limited by the two parameter values U1 and U2, where the deflection resulting from the distributed points is not greater than Deflection. The first point of the distribution is either the origin of curve C or the point of parameter U1. The last point of the distribution is either the end point of curve C or the point of parameter U2. Intermediate points of the distribution are built in such a way that the deflection is not greater than Deflection. Using the following evaluation of the deflection: if Pi and Pj are two consecutive points of the distribution, respectively of parameter ui and uj on the curve, the deflection is the distance between: - the mid-point of Pi and Pj (the center of the chord joining these two points) - and the point of mid-parameter of these two points (the point of parameter [(ui+uj) / 2 ] on curve C). Continuity, defaulted to GeomAbs_C1, gives the degree of continuity of the curve C. (Note that C is an Adaptor3d_Curve or an Adaptor2d_Curve2d object, and does not know the degree of continuity of the underlying curve). Use the function IsDone to verify that the computation was successful, the function NbPoints to obtain the number of points of the computed distribution, and the function Parameter to read the parameter of each point. Warning - The roles of U1 and U2 are inverted if U1 > U2. - Derivative functions on the curve are called according to Continuity. An error may occur if Continuity is greater than the real degree of continuity of the curve. Warning C is an adapted curve, i.e. an object which is an interface between: - the services provided by either a 2D curve from the package Geom2d (in the case of an Adaptor2d_Curve2d curve) or a 3D curve from the package Geom (in the case of an Adaptor3d_Curve curve), and those required on the curve by the computation algorithm.)#"  , py::arg("C"),  py::arg("Deflection"),  py::arg("U1"),  py::arg("U2"),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C1))
        .def("IsDone",
             (Standard_Boolean (GCPnts_QuasiUniformDeflection::*)() const) static_cast<Standard_Boolean (GCPnts_QuasiUniformDeflection::*)() const>(&GCPnts_QuasiUniformDeflection::IsDone),
             R"#(Returns true if the computation was successful. IsDone is a protection against: - non-convergence of the algorithm - querying the results before computation.)#" )
        .def("NbPoints",
             (Standard_Integer (GCPnts_QuasiUniformDeflection::*)() const) static_cast<Standard_Integer (GCPnts_QuasiUniformDeflection::*)() const>(&GCPnts_QuasiUniformDeflection::NbPoints),
             R"#(Returns the number of points of the distribution computed by this algorithm. Exceptions StdFail_NotDone if this algorithm has not been initialized, or if the computation was not successful.)#" )
        .def("Parameter",
             (Standard_Real (GCPnts_QuasiUniformDeflection::*)( const Standard_Integer ) const) static_cast<Standard_Real (GCPnts_QuasiUniformDeflection::*)( const Standard_Integer ) const>(&GCPnts_QuasiUniformDeflection::Parameter),
             R"#(Returns the parameter of the point of index Index in the distribution computed by this algorithm. Warning Index must be greater than or equal to 1, and less than or equal to the number of points of the distribution. However, pay particular attention as this condition is not checked by this function. Exceptions StdFail_NotDone if this algorithm has not been initialized, or if the computation was not successful.)#"  , py::arg("Index"))
        .def("Value",
             (gp_Pnt (GCPnts_QuasiUniformDeflection::*)( const Standard_Integer ) const) static_cast<gp_Pnt (GCPnts_QuasiUniformDeflection::*)( const Standard_Integer ) const>(&GCPnts_QuasiUniformDeflection::Value),
             R"#(Returns the point of index Index in the distribution computed by this algorithm. Warning Index must be greater than or equal to 1, and less than or equal to the number of points of the distribution. However, pay particular attention as this condition is not checked by this function. Exceptions StdFail_NotDone if this algorithm has not been initialized, or if the computation was not successful.)#"  , py::arg("Index"))
        .def("Deflection",
             (Standard_Real (GCPnts_QuasiUniformDeflection::*)() const) static_cast<Standard_Real (GCPnts_QuasiUniformDeflection::*)() const>(&GCPnts_QuasiUniformDeflection::Deflection),
             R"#(Returns the deflection between the curve and the polygon resulting from the points of the distribution computed by this algorithm. This is the value given to the algorithm at the time of construction (or initialization). Exceptions StdFail_NotDone if this algorithm has not been initialized, or if the computation was not successful.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCPnts_TangentialDeflection , shared_ptr<GCPnts_TangentialDeflection> >>(m.attr("GCPnts_TangentialDeflection"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Adaptor3d_Curve &,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("AngularDeflection"),  py::arg("CurvatureDeflection"),  py::arg("MinimumOfPoints")=static_cast<const Standard_Integer>(2),  py::arg("UTol")=static_cast<const Standard_Real>(1.0e-9),  py::arg("theMinLen")=static_cast<const Standard_Real>(1.0e-7) )
        .def(py::init< const Adaptor3d_Curve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("FirstParameter"),  py::arg("LastParameter"),  py::arg("AngularDeflection"),  py::arg("CurvatureDeflection"),  py::arg("MinimumOfPoints")=static_cast<const Standard_Integer>(2),  py::arg("UTol")=static_cast<const Standard_Real>(1.0e-9),  py::arg("theMinLen")=static_cast<const Standard_Real>(1.0e-7) )
        .def(py::init< const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("AngularDeflection"),  py::arg("CurvatureDeflection"),  py::arg("MinimumOfPoints")=static_cast<const Standard_Integer>(2),  py::arg("UTol")=static_cast<const Standard_Real>(1.0e-9),  py::arg("theMinLen")=static_cast<const Standard_Real>(1.0e-7) )
        .def(py::init< const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("FirstParameter"),  py::arg("LastParameter"),  py::arg("AngularDeflection"),  py::arg("CurvatureDeflection"),  py::arg("MinimumOfPoints")=static_cast<const Standard_Integer>(2),  py::arg("UTol")=static_cast<const Standard_Real>(1.0e-9),  py::arg("theMinLen")=static_cast<const Standard_Real>(1.0e-7) )
    // custom constructors
    // methods
        .def("Initialize",
             (void (GCPnts_TangentialDeflection::*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Real , const Standard_Real ) ) static_cast<void (GCPnts_TangentialDeflection::*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Real , const Standard_Real ) >(&GCPnts_TangentialDeflection::Initialize),
             R"#(None)#"  , py::arg("C"),  py::arg("AngularDeflection"),  py::arg("CurvatureDeflection"),  py::arg("MinimumOfPoints")=static_cast<const Standard_Integer>(2),  py::arg("UTol")=static_cast<const Standard_Real>(1.0e-9),  py::arg("theMinLen")=static_cast<const Standard_Real>(1.0e-7))
        .def("Initialize",
             (void (GCPnts_TangentialDeflection::*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Real , const Standard_Real ) ) static_cast<void (GCPnts_TangentialDeflection::*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Real , const Standard_Real ) >(&GCPnts_TangentialDeflection::Initialize),
             R"#(None)#"  , py::arg("C"),  py::arg("FirstParameter"),  py::arg("LastParameter"),  py::arg("AngularDeflection"),  py::arg("CurvatureDeflection"),  py::arg("MinimumOfPoints")=static_cast<const Standard_Integer>(2),  py::arg("UTol")=static_cast<const Standard_Real>(1.0e-9),  py::arg("theMinLen")=static_cast<const Standard_Real>(1.0e-7))
        .def("Initialize",
             (void (GCPnts_TangentialDeflection::*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Real , const Standard_Real ) ) static_cast<void (GCPnts_TangentialDeflection::*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Real , const Standard_Real ) >(&GCPnts_TangentialDeflection::Initialize),
             R"#(None)#"  , py::arg("C"),  py::arg("AngularDeflection"),  py::arg("CurvatureDeflection"),  py::arg("MinimumOfPoints")=static_cast<const Standard_Integer>(2),  py::arg("UTol")=static_cast<const Standard_Real>(1.0e-9),  py::arg("theMinLen")=static_cast<const Standard_Real>(1.0e-7))
        .def("Initialize",
             (void (GCPnts_TangentialDeflection::*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Real , const Standard_Real ) ) static_cast<void (GCPnts_TangentialDeflection::*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Real , const Standard_Real ) >(&GCPnts_TangentialDeflection::Initialize),
             R"#(None)#"  , py::arg("C"),  py::arg("FirstParameter"),  py::arg("LastParameter"),  py::arg("AngularDeflection"),  py::arg("CurvatureDeflection"),  py::arg("MinimumOfPoints")=static_cast<const Standard_Integer>(2),  py::arg("UTol")=static_cast<const Standard_Real>(1.0e-9),  py::arg("theMinLen")=static_cast<const Standard_Real>(1.0e-7))
        .def("AddPoint",
             (Standard_Integer (GCPnts_TangentialDeflection::*)( const gp_Pnt & , const Standard_Real , const Standard_Boolean ) ) static_cast<Standard_Integer (GCPnts_TangentialDeflection::*)( const gp_Pnt & , const Standard_Real , const Standard_Boolean ) >(&GCPnts_TangentialDeflection::AddPoint),
             R"#(Add point to already calculated points (or replace existing) Returns index of new added point or founded with parametric tolerance (replaced if theIsReplace is true))#"  , py::arg("thePnt"),  py::arg("theParam"),  py::arg("theIsReplace")=static_cast<const Standard_Boolean>(Standard_True))
        .def("NbPoints",
             (Standard_Integer (GCPnts_TangentialDeflection::*)() const) static_cast<Standard_Integer (GCPnts_TangentialDeflection::*)() const>(&GCPnts_TangentialDeflection::NbPoints),
             R"#(None)#" )
        .def("Parameter",
             (Standard_Real (GCPnts_TangentialDeflection::*)( const Standard_Integer ) const) static_cast<Standard_Real (GCPnts_TangentialDeflection::*)( const Standard_Integer ) const>(&GCPnts_TangentialDeflection::Parameter),
             R"#(None)#"  , py::arg("I"))
        .def("Value",
             (gp_Pnt (GCPnts_TangentialDeflection::*)( const Standard_Integer ) const) static_cast<gp_Pnt (GCPnts_TangentialDeflection::*)( const Standard_Integer ) const>(&GCPnts_TangentialDeflection::Value),
             R"#(None)#"  , py::arg("I"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("ArcAngularStep_s",
                    (Standard_Real (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Real (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&GCPnts_TangentialDeflection::ArcAngularStep),
                    R"#(Computes angular step for the arc using the given parameters.)#"  , py::arg("theRadius"),  py::arg("theLinearDeflection"),  py::arg("theAngularDeflection"),  py::arg("theMinLength"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCPnts_UniformAbscissa , shared_ptr<GCPnts_UniformAbscissa> >>(m.attr("GCPnts_UniformAbscissa"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Adaptor3d_Curve &,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("Abscissa"),  py::arg("Toler")=static_cast<const Standard_Real>(- 1) )
        .def(py::init< const Adaptor3d_Curve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("Abscissa"),  py::arg("U1"),  py::arg("U2"),  py::arg("Toler")=static_cast<const Standard_Real>(- 1) )
        .def(py::init< const Adaptor3d_Curve &,const Standard_Integer,const Standard_Real >()  , py::arg("C"),  py::arg("NbPoints"),  py::arg("Toler")=static_cast<const Standard_Real>(- 1) )
        .def(py::init< const Adaptor3d_Curve &,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("NbPoints"),  py::arg("U1"),  py::arg("U2"),  py::arg("Toler")=static_cast<const Standard_Real>(- 1) )
        .def(py::init< const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("Abscissa"),  py::arg("Toler")=static_cast<const Standard_Real>(- 1) )
        .def(py::init< const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("Abscissa"),  py::arg("U1"),  py::arg("U2"),  py::arg("Toler")=static_cast<const Standard_Real>(- 1) )
        .def(py::init< const Adaptor2d_Curve2d &,const Standard_Integer,const Standard_Real >()  , py::arg("C"),  py::arg("NbPoints"),  py::arg("Toler")=static_cast<const Standard_Real>(- 1) )
        .def(py::init< const Adaptor2d_Curve2d &,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("NbPoints"),  py::arg("U1"),  py::arg("U2"),  py::arg("Toler")=static_cast<const Standard_Real>(- 1) )
    // custom constructors
    // methods
        .def("Initialize",
             (void (GCPnts_UniformAbscissa::*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Real ) ) static_cast<void (GCPnts_UniformAbscissa::*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Real ) >(&GCPnts_UniformAbscissa::Initialize),
             R"#(Initialize the algoritms with <C>, <Abscissa>, <Toler>)#"  , py::arg("C"),  py::arg("Abscissa"),  py::arg("Toler")=static_cast<const Standard_Real>(- 1))
        .def("Initialize",
             (void (GCPnts_UniformAbscissa::*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (GCPnts_UniformAbscissa::*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&GCPnts_UniformAbscissa::Initialize),
             R"#(Initialize the algoritms with <C>, <Abscissa>, <U1>, <U2>, <Toler>)#"  , py::arg("C"),  py::arg("Abscissa"),  py::arg("U1"),  py::arg("U2"),  py::arg("Toler")=static_cast<const Standard_Real>(- 1))
        .def("Initialize",
             (void (GCPnts_UniformAbscissa::*)( const Adaptor3d_Curve & , const Standard_Integer , const Standard_Real ) ) static_cast<void (GCPnts_UniformAbscissa::*)( const Adaptor3d_Curve & , const Standard_Integer , const Standard_Real ) >(&GCPnts_UniformAbscissa::Initialize),
             R"#(Initialize the algoritms with <C>, <NbPoints>, <Toler> and)#"  , py::arg("C"),  py::arg("NbPoints"),  py::arg("Toler")=static_cast<const Standard_Real>(- 1))
        .def("Initialize",
             (void (GCPnts_UniformAbscissa::*)( const Adaptor3d_Curve & , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (GCPnts_UniformAbscissa::*)( const Adaptor3d_Curve & , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Real ) >(&GCPnts_UniformAbscissa::Initialize),
             R"#(Initialize the algoritms with <C>, <Abscissa>, <U1>, <U2>, <Toler>.)#"  , py::arg("C"),  py::arg("NbPoints"),  py::arg("U1"),  py::arg("U2"),  py::arg("Toler")=static_cast<const Standard_Real>(- 1))
        .def("Initialize",
             (void (GCPnts_UniformAbscissa::*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real ) ) static_cast<void (GCPnts_UniformAbscissa::*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real ) >(&GCPnts_UniformAbscissa::Initialize),
             R"#(Initialize the algoritms with <C>, <Abscissa>, <Toler>)#"  , py::arg("C"),  py::arg("Abscissa"),  py::arg("Toler")=static_cast<const Standard_Real>(- 1))
        .def("Initialize",
             (void (GCPnts_UniformAbscissa::*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (GCPnts_UniformAbscissa::*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&GCPnts_UniformAbscissa::Initialize),
             R"#(Initialize the algoritms with <C>, <Abscissa>, <U1>, <U2>, <Toler>)#"  , py::arg("C"),  py::arg("Abscissa"),  py::arg("U1"),  py::arg("U2"),  py::arg("Toler")=static_cast<const Standard_Real>(- 1))
        .def("Initialize",
             (void (GCPnts_UniformAbscissa::*)( const Adaptor2d_Curve2d & , const Standard_Integer , const Standard_Real ) ) static_cast<void (GCPnts_UniformAbscissa::*)( const Adaptor2d_Curve2d & , const Standard_Integer , const Standard_Real ) >(&GCPnts_UniformAbscissa::Initialize),
             R"#(Initialize the algoritms with <C>, <NbPoints>, <Toler> and)#"  , py::arg("C"),  py::arg("NbPoints"),  py::arg("Toler")=static_cast<const Standard_Real>(- 1))
        .def("Initialize",
             (void (GCPnts_UniformAbscissa::*)( const Adaptor2d_Curve2d & , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (GCPnts_UniformAbscissa::*)( const Adaptor2d_Curve2d & , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Real ) >(&GCPnts_UniformAbscissa::Initialize),
             R"#(Initialize the algoritms with <C>, <Abscissa>, <U1>, <U2>, <Toler>.)#"  , py::arg("C"),  py::arg("NbPoints"),  py::arg("U1"),  py::arg("U2"),  py::arg("Toler")=static_cast<const Standard_Real>(- 1))
        .def("IsDone",
             (Standard_Boolean (GCPnts_UniformAbscissa::*)() const) static_cast<Standard_Boolean (GCPnts_UniformAbscissa::*)() const>(&GCPnts_UniformAbscissa::IsDone),
             R"#(None)#" )
        .def("NbPoints",
             (Standard_Integer (GCPnts_UniformAbscissa::*)() const) static_cast<Standard_Integer (GCPnts_UniformAbscissa::*)() const>(&GCPnts_UniformAbscissa::NbPoints),
             R"#(None)#" )
        .def("Parameter",
             (Standard_Real (GCPnts_UniformAbscissa::*)( const Standard_Integer ) const) static_cast<Standard_Real (GCPnts_UniformAbscissa::*)( const Standard_Integer ) const>(&GCPnts_UniformAbscissa::Parameter),
             R"#(returns the computed Parameter of index <Index>.)#"  , py::arg("Index"))
        .def("Abscissa",
             (Standard_Real (GCPnts_UniformAbscissa::*)() const) static_cast<Standard_Real (GCPnts_UniformAbscissa::*)() const>(&GCPnts_UniformAbscissa::Abscissa),
             R"#(returne the current abscissa ie the distance between two consecutive points)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GCPnts_UniformDeflection , shared_ptr<GCPnts_UniformDeflection> >>(m.attr("GCPnts_UniformDeflection"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Adaptor3d_Curve &,const Standard_Real,const Standard_Boolean >()  , py::arg("C"),  py::arg("Deflection"),  py::arg("WithControl")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Boolean >()  , py::arg("C"),  py::arg("Deflection"),  py::arg("WithControl")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const Adaptor3d_Curve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("C"),  py::arg("Deflection"),  py::arg("U1"),  py::arg("U2"),  py::arg("WithControl")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const Adaptor2d_Curve2d &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("C"),  py::arg("Deflection"),  py::arg("U1"),  py::arg("U2"),  py::arg("WithControl")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("Initialize",
             (void (GCPnts_UniformDeflection::*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Boolean ) ) static_cast<void (GCPnts_UniformDeflection::*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Boolean ) >(&GCPnts_UniformDeflection::Initialize),
             R"#(Initialize the algoritms with <C>, <Deflection>)#"  , py::arg("C"),  py::arg("Deflection"),  py::arg("WithControl")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Initialize",
             (void (GCPnts_UniformDeflection::*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Boolean ) ) static_cast<void (GCPnts_UniformDeflection::*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Boolean ) >(&GCPnts_UniformDeflection::Initialize),
             R"#(Initialize the algoritms with <C>, <Deflection>)#"  , py::arg("C"),  py::arg("Deflection"),  py::arg("WithControl")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Initialize",
             (void (GCPnts_UniformDeflection::*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (GCPnts_UniformDeflection::*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&GCPnts_UniformDeflection::Initialize),
             R"#(Initialize the algoritms with <C>, <Deflection>, <U1>,<U2>)#"  , py::arg("C"),  py::arg("Deflection"),  py::arg("U1"),  py::arg("U2"),  py::arg("WithControl")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Initialize",
             (void (GCPnts_UniformDeflection::*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (GCPnts_UniformDeflection::*)( const Adaptor2d_Curve2d & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&GCPnts_UniformDeflection::Initialize),
             R"#(Initialize the algoritms with <C>, <Deflection>, <U1>,<U2> This and the above methods initialize (or reinitialize) this algorithm and compute a distribution of points: - on the curve C, or - on the part of curve C limited by the two parameter values U1 and U2, where the maximum distance between C and the polygon that results from the points of the distribution is not greater than Deflection. The first point of the distribution is either the origin of curve C or the point of parameter U1. The last point of the distribution is either the end point of curve C or the point of parameter U2. Intermediate points of the distribution are built using interpolations of segments of the curve limited at the 2nd degree. The construction ensures, in a first step, that the chordal deviation for this interpolation of the curve is less than or equal to Deflection. However, it does not ensure that the chordal deviation for the curve itself is less than or equal to Deflection. To do this a check is necessary, which may generate (second step) additional intermediate points. This check is time consuming, and can be avoided by setting WithControl to false. Note that by default WithControl is true and check is performed. Use the function IsDone to verify that the computation was successful, the function NbPoints to obtain the number of points of the computed distribution, and the function Parameter to read the parameter of each point. Warning - C is necessary, 'C2' continuous. This property is not checked at construction time. - The roles of U1 and U2 are inverted if U1 > U2. Warning C is an adapted curve, i.e. an object which is an interface between: - the services provided by either a 2D curve from the package Geom2d (in the case of an Adaptor2d_Curve2d curve) or a 3D curve from the package Geom (in the case of an Adaptor3d_Curve curve), - and those required on the curve by the computation algorithm.)#"  , py::arg("C"),  py::arg("Deflection"),  py::arg("U1"),  py::arg("U2"),  py::arg("WithControl")=static_cast<const Standard_Boolean>(Standard_True))
        .def("IsDone",
             (Standard_Boolean (GCPnts_UniformDeflection::*)() const) static_cast<Standard_Boolean (GCPnts_UniformDeflection::*)() const>(&GCPnts_UniformDeflection::IsDone),
             R"#(Returns true if the computation was successful. IsDone is a protection against: - non-convergence of the algorithm - querying the results before computation.)#" )
        .def("NbPoints",
             (Standard_Integer (GCPnts_UniformDeflection::*)() const) static_cast<Standard_Integer (GCPnts_UniformDeflection::*)() const>(&GCPnts_UniformDeflection::NbPoints),
             R"#(Returns the number of points of the distribution computed by this algorithm. Exceptions StdFail_NotDone if this algorithm has not been initialized, or if the computation was not successful.)#" )
        .def("Parameter",
             (Standard_Real (GCPnts_UniformDeflection::*)( const Standard_Integer ) const) static_cast<Standard_Real (GCPnts_UniformDeflection::*)( const Standard_Integer ) const>(&GCPnts_UniformDeflection::Parameter),
             R"#(Returns the parameter of the point of index Index in the distribution computed by this algorithm. Warning Index must be greater than or equal to 1, and less than or equal to the number of points of the distribution. However, pay particular attention as this condition is not checked by this function. Exceptions StdFail_NotDone if this algorithm has not been initialized, or if the computation was not successful.)#"  , py::arg("Index"))
        .def("Value",
             (gp_Pnt (GCPnts_UniformDeflection::*)( const Standard_Integer ) const) static_cast<gp_Pnt (GCPnts_UniformDeflection::*)( const Standard_Integer ) const>(&GCPnts_UniformDeflection::Value),
             R"#(Returns the point of index Index in the distribution computed by this algorithm. Warning Index must be greater than or equal to 1, and less than or equal to the number of points of the distribution. However, pay particular attention as this condition is not checked by this function. Exceptions StdFAil_NotDone if this algorithm has not been initialized, or if the computation was not successful.)#"  , py::arg("Index"))
        .def("Deflection",
             (Standard_Real (GCPnts_UniformDeflection::*)() const) static_cast<Standard_Real (GCPnts_UniformDeflection::*)() const>(&GCPnts_UniformDeflection::Deflection),
             R"#(Returns the deflection between the curve and the polygon resulting from the points of the distribution computed by this algorithm. This value is the one given to the algorithm at the time of construction (or initialization). Exceptions StdFail_NotDone if this algorithm has not been initialized, or if the computation was not successful.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/GCPnts_DeflectionType.hxx
// ./opencascade/GCPnts_QuasiUniformAbscissa.hxx
// ./opencascade/GCPnts_TangentialDeflection.hxx
// ./opencascade/GCPnts_UniformAbscissa.hxx
// ./opencascade/GCPnts_QuasiUniformDeflection.hxx
// ./opencascade/GCPnts_AbscissaType.hxx
// ./opencascade/GCPnts_DistFunction2d.hxx
// ./opencascade/GCPnts_AbscissaPoint.hxx
// ./opencascade/GCPnts_UniformDeflection.hxx
// ./opencascade/GCPnts_DistFunction.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

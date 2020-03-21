
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <math_Matrix.hxx>

// module includes
#include <BSplCLib.hxx>
#include <BSplCLib_Cache.hxx>
#include <BSplCLib_CacheParams.hxx>
#include <BSplCLib_EvaluatorFunction.hxx>
#include <BSplCLib_KnotDistribution.hxx>
#include <BSplCLib_MultDistribution.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BSplCLib(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BSplCLib"));


//Python trampoline classes
    class Py_BSplCLib_EvaluatorFunction : public BSplCLib_EvaluatorFunction{
    public:
        using BSplCLib_EvaluatorFunction::BSplCLib_EvaluatorFunction;


        // public pure virtual
        void Evaluate(const Standard_Integer theDerivativeRequest,const Standard_Real * theStartEnd,const Standard_Real theParameter,Standard_Real & theResult,Standard_Integer & theErrorCode) const  override { PYBIND11_OVERLOAD_PURE(void,BSplCLib_EvaluatorFunction,Evaluate,theDerivativeRequest,theStartEnd,theParameter,theResult,theErrorCode) };


        // protected pure virtual


        // private pure virtual

    };

// classes

    // default constructor
    register_default_constructor<BSplCLib , shared_ptr<BSplCLib>>(m,"BSplCLib");

    static_cast<py::class_<BSplCLib , shared_ptr<BSplCLib> >>(m.attr("BSplCLib"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("MaxDegree_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&BSplCLib::MaxDegree),
                    R"#(returns the degree maxima for a BSplineCurve.)#" )
        .def_static("NoWeights_s",
                    (TColStd_Array1OfReal * (*)() ) static_cast<TColStd_Array1OfReal * (*)() >(&BSplCLib::NoWeights),
                    R"#(Used as argument for a non rational curve.)#" )
        .def_static("NoMults_s",
                    (TColStd_Array1OfInteger * (*)() ) static_cast<TColStd_Array1OfInteger * (*)() >(&BSplCLib::NoMults),
                    R"#(Used as argument for a flatknots evaluation.)#" )
        .def_static("CoefsD0_s",
                    (void (*)( const Standard_Real ,  const NCollection_Array1<gp_Pnt> & ,  const NCollection_Array1<Standard_Real> * , gp_Pnt & ) ) static_cast<void (*)( const Standard_Real ,  const NCollection_Array1<gp_Pnt> & ,  const NCollection_Array1<Standard_Real> * , gp_Pnt & ) >(&BSplCLib::CoefsD0),
                    R"#(Calls CacheD0 for Bezier Curves Arrays computed with the method PolesCoefficients. Warning: To be used for Beziercurves ONLY!!!)#"  , py::arg("U"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("Point"))
        .def_static("CoefsD0_s",
                    (void (*)( const Standard_Real ,  const NCollection_Array1<gp_Pnt2d> & ,  const NCollection_Array1<Standard_Real> * , gp_Pnt2d & ) ) static_cast<void (*)( const Standard_Real ,  const NCollection_Array1<gp_Pnt2d> & ,  const NCollection_Array1<Standard_Real> * , gp_Pnt2d & ) >(&BSplCLib::CoefsD0),
                    R"#(Calls CacheD0 for Bezier Curves Arrays computed with the method PolesCoefficients. Warning: To be used for Beziercurves ONLY!!!)#"  , py::arg("U"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("Point"))
        .def_static("CoefsD1_s",
                    (void (*)( const Standard_Real ,  const NCollection_Array1<gp_Pnt> & ,  const NCollection_Array1<Standard_Real> * , gp_Pnt & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real ,  const NCollection_Array1<gp_Pnt> & ,  const NCollection_Array1<Standard_Real> * , gp_Pnt & , gp_Vec & ) >(&BSplCLib::CoefsD1),
                    R"#(Calls CacheD1 for Bezier Curves Arrays computed with the method PolesCoefficients. Warning: To be used for Beziercurves ONLY!!!)#"  , py::arg("U"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("Point"),  py::arg("Vec"))
        .def_static("CoefsD1_s",
                    (void (*)( const Standard_Real ,  const NCollection_Array1<gp_Pnt2d> & ,  const NCollection_Array1<Standard_Real> * , gp_Pnt2d & , gp_Vec2d & ) ) static_cast<void (*)( const Standard_Real ,  const NCollection_Array1<gp_Pnt2d> & ,  const NCollection_Array1<Standard_Real> * , gp_Pnt2d & , gp_Vec2d & ) >(&BSplCLib::CoefsD1),
                    R"#(Calls CacheD1 for Bezier Curves Arrays computed with the method PolesCoefficients. Warning: To be used for Beziercurves ONLY!!!)#"  , py::arg("U"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("Point"),  py::arg("Vec"))
        .def_static("CoefsD2_s",
                    (void (*)( const Standard_Real ,  const NCollection_Array1<gp_Pnt> & ,  const NCollection_Array1<Standard_Real> * , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real ,  const NCollection_Array1<gp_Pnt> & ,  const NCollection_Array1<Standard_Real> * , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&BSplCLib::CoefsD2),
                    R"#(Calls CacheD1 for Bezier Curves Arrays computed with the method PolesCoefficients. Warning: To be used for Beziercurves ONLY!!!)#"  , py::arg("U"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("Point"),  py::arg("Vec1"),  py::arg("Vec2"))
        .def_static("CoefsD2_s",
                    (void (*)( const Standard_Real ,  const NCollection_Array1<gp_Pnt2d> & ,  const NCollection_Array1<Standard_Real> * , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<void (*)( const Standard_Real ,  const NCollection_Array1<gp_Pnt2d> & ,  const NCollection_Array1<Standard_Real> * , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) >(&BSplCLib::CoefsD2),
                    R"#(Calls CacheD1 for Bezier Curves Arrays computed with the method PolesCoefficients. Warning: To be used for Beziercurves ONLY!!!)#"  , py::arg("U"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("Point"),  py::arg("Vec1"),  py::arg("Vec2"))
        .def_static("CoefsD3_s",
                    (void (*)( const Standard_Real ,  const NCollection_Array1<gp_Pnt> & ,  const NCollection_Array1<Standard_Real> * , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real ,  const NCollection_Array1<gp_Pnt> & ,  const NCollection_Array1<Standard_Real> * , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&BSplCLib::CoefsD3),
                    R"#(Calls CacheD1 for Bezier Curves Arrays computed with the method PolesCoefficients. Warning: To be used for Beziercurves ONLY!!!)#"  , py::arg("U"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("Point"),  py::arg("Vec1"),  py::arg("Vec2"),  py::arg("Vec3"))
        .def_static("CoefsD3_s",
                    (void (*)( const Standard_Real ,  const NCollection_Array1<gp_Pnt2d> & ,  const NCollection_Array1<Standard_Real> * , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<void (*)( const Standard_Real ,  const NCollection_Array1<gp_Pnt2d> & ,  const NCollection_Array1<Standard_Real> * , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) >(&BSplCLib::CoefsD3),
                    R"#(Calls CacheD1 for Bezier Curves Arrays computed with the method PolesCoefficients. Warning: To be used for Beziercurves ONLY!!!)#"  , py::arg("U"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("Point"),  py::arg("Vec1"),  py::arg("Vec2"),  py::arg("Vec3"))
        .def_static("PolesCoefficients_s",
                    (void (*)(  const NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Pnt2d> & ) ) static_cast<void (*)(  const NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Pnt2d> & ) >(&BSplCLib::PolesCoefficients),
                    R"#(None)#"  , py::arg("Poles"),  py::arg("CachePoles"))
        .def_static("PolesCoefficients_s",
                    (void (*)(  const NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt> & ) ) static_cast<void (*)(  const NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt> & ) >(&BSplCLib::PolesCoefficients),
                    R"#(None)#"  , py::arg("Poles"),  py::arg("CachePoles"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BSplCLib_Cache ,opencascade::handle<BSplCLib_Cache> , Standard_Transient>>(m.attr("BSplCLib_Cache"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BSplCLib_Cache::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BSplCLib_Cache::*)() const>(&BSplCLib_Cache::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BSplCLib_Cache::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BSplCLib_CacheParams , shared_ptr<BSplCLib_CacheParams> >>(m.attr("BSplCLib_CacheParams"))
    // constructors
        .def(py::init< Standard_Integer,Standard_Boolean, const NCollection_Array1<Standard_Real> & >()  , py::arg("theDegree"),  py::arg("thePeriodic"),  py::arg("theFlatKnots") )
    // custom constructors
    // methods
        .def("PeriodicNormalization",
             (Standard_Real (BSplCLib_CacheParams::*)( Standard_Real ) const) static_cast<Standard_Real (BSplCLib_CacheParams::*)( Standard_Real ) const>(&BSplCLib_CacheParams::PeriodicNormalization),
             R"#(Normalizes the parameter for periodic B-splines)#"  , py::arg("theParameter"))
        .def("IsCacheValid",
             (Standard_Boolean (BSplCLib_CacheParams::*)( Standard_Real ) const) static_cast<Standard_Boolean (BSplCLib_CacheParams::*)( Standard_Real ) const>(&BSplCLib_CacheParams::IsCacheValid),
             R"#(Verifies validity of the cache using flat parameter of the point)#"  , py::arg("theParameter"))
    // methods using call by reference i.s.o. return
        .def("LocateParameter",
             []( BSplCLib_CacheParams &self ,  const NCollection_Array1<Standard_Real> & theFlatKnots ){ Standard_Real  theParameter; self.LocateParameter(theParameter,theFlatKnots); return std::make_tuple(theParameter); },
             R"#(Computes span for the specified parameter)#"  , py::arg("theFlatKnots"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BSplCLib_EvaluatorFunction , shared_ptr<BSplCLib_EvaluatorFunction>,Py_BSplCLib_EvaluatorFunction >>(m.attr("BSplCLib_EvaluatorFunction"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
        .def("Evaluate",
             []( BSplCLib_EvaluatorFunction &self , const Standard_Integer theDerivativeRequest,const Standard_Real * theStartEnd,const Standard_Real theParameter ){ Standard_Real  theResult; Standard_Integer  theErrorCode; self.Evaluate(theDerivativeRequest,theStartEnd,theParameter,theResult,theErrorCode); return std::make_tuple(theResult,theErrorCode); },
             R"#(Function evaluation method to be defined by descendant)#"  , py::arg("theDerivativeRequest"),  py::arg("theStartEnd"),  py::arg("theParameter"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BSplCLib_CacheParams.hxx
// ./opencascade/BSplCLib.hxx
// ./opencascade/BSplCLib_MultDistribution.hxx
// ./opencascade/BSplCLib_EvaluatorFunction.hxx
// ./opencascade/BSplCLib_Cache.hxx
// ./opencascade/BSplCLib_KnotDistribution.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

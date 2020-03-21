
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations

// module includes
#include <BSplSLib.hxx>
#include <BSplSLib_Cache.hxx>
#include <BSplSLib_EvaluatorFunction.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BSplSLib(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BSplSLib"));


//Python trampoline classes
    class Py_BSplSLib_EvaluatorFunction : public BSplSLib_EvaluatorFunction{
    public:
        using BSplSLib_EvaluatorFunction::BSplSLib_EvaluatorFunction;


        // public pure virtual
        void Evaluate(const Standard_Integer theDerivativeRequest,const Standard_Real theUParameter,const Standard_Real theVParameter,Standard_Real & theResult,Standard_Integer & theErrorCode) const  override { PYBIND11_OVERLOAD_PURE(void,BSplSLib_EvaluatorFunction,Evaluate,theDerivativeRequest,theUParameter,theVParameter,theResult,theErrorCode) };


        // protected pure virtual


        // private pure virtual

    };

// classes

    // default constructor
    register_default_constructor<BSplSLib , shared_ptr<BSplSLib>>(m,"BSplSLib");

    static_cast<py::class_<BSplSLib , shared_ptr<BSplSLib> >>(m.attr("BSplSLib"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("NoWeights_s",
                    (TColStd_Array2OfReal * (*)() ) static_cast<TColStd_Array2OfReal * (*)() >(&BSplSLib::NoWeights),
                    R"#(Used as argument for a non rational curve.)#" )
        .def_static("CoefsD0_s",
                    (void (*)( const Standard_Real , const Standard_Real ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , gp_Pnt & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , gp_Pnt & ) >(&BSplSLib::CoefsD0),
                    R"#(Calls CacheD0 for Bezier Surfaces Arrays computed with the method PolesCoefficients. Warning: To be used for BezierSurfaces ONLY!!!)#"  , py::arg("U"),  py::arg("V"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("Point"))
        .def_static("CoefsD1_s",
                    (void (*)( const Standard_Real , const Standard_Real ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&BSplSLib::CoefsD1),
                    R"#(Calls CacheD0 for Bezier Surfaces Arrays computed with the method PolesCoefficients. Warning: To be used for BezierSurfaces ONLY!!!)#"  , py::arg("U"),  py::arg("V"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("Point"),  py::arg("VecU"),  py::arg("VecV"))
        .def_static("CoefsD2_s",
                    (void (*)( const Standard_Real , const Standard_Real ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&BSplSLib::CoefsD2),
                    R"#(Calls CacheD0 for Bezier Surfaces Arrays computed with the method PolesCoefficients. Warning: To be used for BezierSurfaces ONLY!!!)#"  , py::arg("U"),  py::arg("V"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("Point"),  py::arg("VecU"),  py::arg("VecV"),  py::arg("VecUU"),  py::arg("VecUV"),  py::arg("VecVV"))
        .def_static("PolesCoefficients_s",
                    (void (*)(  const NCollection_Array2<gp_Pnt> & , NCollection_Array2<gp_Pnt> & ) ) static_cast<void (*)(  const NCollection_Array2<gp_Pnt> & , NCollection_Array2<gp_Pnt> & ) >(&BSplSLib::PolesCoefficients),
                    R"#(Warning! To be used for BezierSurfaces ONLY!!!)#"  , py::arg("Poles"),  py::arg("CachePoles"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BSplSLib_Cache ,opencascade::handle<BSplSLib_Cache> , Standard_Transient>>(m.attr("BSplSLib_Cache"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BSplSLib_Cache::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BSplSLib_Cache::*)() const>(&BSplSLib_Cache::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BSplSLib_Cache::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BSplSLib_EvaluatorFunction , shared_ptr<BSplSLib_EvaluatorFunction>,Py_BSplSLib_EvaluatorFunction >>(m.attr("BSplSLib_EvaluatorFunction"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
        .def("Evaluate",
             []( BSplSLib_EvaluatorFunction &self , const Standard_Integer theDerivativeRequest,const Standard_Real theUParameter,const Standard_Real theVParameter ){ Standard_Real  theResult; Standard_Integer  theErrorCode; self.Evaluate(theDerivativeRequest,theUParameter,theVParameter,theResult,theErrorCode); return std::make_tuple(theResult,theErrorCode); },
             R"#(Function evaluation method to be defined by descendant)#"  , py::arg("theDerivativeRequest"),  py::arg("theUParameter"),  py::arg("theVParameter"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BSplSLib_EvaluatorFunction.hxx
// ./opencascade/BSplSLib_Cache.hxx
// ./opencascade/BSplSLib.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post


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
        .def_static("D0_s",
                    (void (*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> * ,  const NCollection_Array1<Standard_Integer> * , const Standard_Integer , const Standard_Integer , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , gp_Pnt & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> * ,  const NCollection_Array1<Standard_Integer> * , const Standard_Integer , const Standard_Integer , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , gp_Pnt & ) >(&BSplSLib::D0),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("UIndex"),  py::arg("VIndex"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("UKnots"),  py::arg("VKnots"),  py::arg("UMults"),  py::arg("VMults"),  py::arg("UDegree"),  py::arg("VDegree"),  py::arg("URat"),  py::arg("VRat"),  py::arg("UPer"),  py::arg("VPer"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> * ,  const NCollection_Array1<Standard_Integer> * , const Standard_Integer , const Standard_Integer , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> * ,  const NCollection_Array1<Standard_Integer> * , const Standard_Integer , const Standard_Integer , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&BSplSLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("UIndex"),  py::arg("VIndex"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("UKnots"),  py::arg("VKnots"),  py::arg("UMults"),  py::arg("VMults"),  py::arg("Degree"),  py::arg("VDegree"),  py::arg("URat"),  py::arg("VRat"),  py::arg("UPer"),  py::arg("VPer"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> * ,  const NCollection_Array1<Standard_Integer> * , const Standard_Integer , const Standard_Integer , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> * ,  const NCollection_Array1<Standard_Integer> * , const Standard_Integer , const Standard_Integer , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&BSplSLib::D2),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("UIndex"),  py::arg("VIndex"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("UKnots"),  py::arg("VKnots"),  py::arg("UMults"),  py::arg("VMults"),  py::arg("UDegree"),  py::arg("VDegree"),  py::arg("URat"),  py::arg("VRat"),  py::arg("UPer"),  py::arg("VPer"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"))
        .def_static("D3_s",
                    (void (*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> * ,  const NCollection_Array1<Standard_Integer> * , const Standard_Integer , const Standard_Integer , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> * ,  const NCollection_Array1<Standard_Integer> * , const Standard_Integer , const Standard_Integer , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&BSplSLib::D3),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("UIndex"),  py::arg("VIndex"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("UKnots"),  py::arg("VKnots"),  py::arg("UMults"),  py::arg("VMults"),  py::arg("UDegree"),  py::arg("VDegree"),  py::arg("URat"),  py::arg("VRat"),  py::arg("UPer"),  py::arg("VPer"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"),  py::arg("Vuuu"),  py::arg("Vvvv"),  py::arg("Vuuv"),  py::arg("Vuvv"))
        .def_static("DN_s",
                    (void (*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> * ,  const NCollection_Array1<Standard_Integer> * , const Standard_Integer , const Standard_Integer , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> * ,  const NCollection_Array1<Standard_Integer> * , const Standard_Integer , const Standard_Integer , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , gp_Vec & ) >(&BSplSLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"),  py::arg("UIndex"),  py::arg("VIndex"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("UKnots"),  py::arg("VKnots"),  py::arg("UMults"),  py::arg("VMults"),  py::arg("UDegree"),  py::arg("VDegree"),  py::arg("URat"),  py::arg("VRat"),  py::arg("UPer"),  py::arg("VPer"),  py::arg("Vn"))
        .def_static("Iso_s",
                    (void (*)( const Standard_Real , const Standard_Boolean ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> * , const Standard_Integer , const Standard_Boolean , NCollection_Array1<gp_Pnt> & , NCollection_Array1<Standard_Real> * ) ) static_cast<void (*)( const Standard_Real , const Standard_Boolean ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> * , const Standard_Integer , const Standard_Boolean , NCollection_Array1<gp_Pnt> & , NCollection_Array1<Standard_Real> * ) >(&BSplSLib::Iso),
                    R"#(Computes the poles and weights of an isoparametric curve at parameter <Param> (UIso if <IsU> is True, VIso else).)#"  , py::arg("Param"),  py::arg("IsU"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("Degree"),  py::arg("Periodic"),  py::arg("CPoles"),  py::arg("CWeights"))
        .def_static("Reverse_s",
                    (void (*)( NCollection_Array2<gp_Pnt> & , const Standard_Integer , const Standard_Boolean ) ) static_cast<void (*)( NCollection_Array2<gp_Pnt> & , const Standard_Integer , const Standard_Boolean ) >(&BSplSLib::Reverse),
                    R"#(Reverses the array of poles. Last is the Index of the new first Row( Col) of Poles. On a non periodic surface Last is Poles.Upper(). On a periodic curve last is (number of flat knots - degree - 1) or (sum of multiplicities(but for the last) + degree - 1))#"  , py::arg("Poles"),  py::arg("Last"),  py::arg("UDirection"))
        .def_static("Reverse_s",
                    (void (*)( NCollection_Array2<Standard_Real> & , const Standard_Integer , const Standard_Boolean ) ) static_cast<void (*)( NCollection_Array2<Standard_Real> & , const Standard_Integer , const Standard_Boolean ) >(&BSplSLib::Reverse),
                    R"#(Reverses the array of weights.)#"  , py::arg("Weights"),  py::arg("Last"),  py::arg("UDirection"))
        .def_static("IsRational_s",
                    (Standard_Boolean (*)(  const NCollection_Array2<Standard_Real> & , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Real ) ) static_cast<Standard_Boolean (*)(  const NCollection_Array2<Standard_Real> & , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Real ) >(&BSplSLib::IsRational),
                    R"#(Returns False if all the weights of the array <Weights> in the area [I1,I2] * [J1,J2] are identic. Epsilon is used for comparing weights. If Epsilon is 0. the Epsilon of the first weight is used.)#"  , py::arg("Weights"),  py::arg("I1"),  py::arg("I2"),  py::arg("J1"),  py::arg("J2"),  py::arg("Epsilon")=static_cast<const Standard_Real>(0.0))
        .def_static("SetPoles_s",
                    (void (*)(  const NCollection_Array2<gp_Pnt> & , NCollection_Array1<Standard_Real> & , const Standard_Boolean ) ) static_cast<void (*)(  const NCollection_Array2<gp_Pnt> & , NCollection_Array1<Standard_Real> & , const Standard_Boolean ) >(&BSplSLib::SetPoles),
                    R"#(Copy in FP the coordinates of the poles.)#"  , py::arg("Poles"),  py::arg("FP"),  py::arg("UDirection"))
        .def_static("SetPoles_s",
                    (void (*)(  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> & , NCollection_Array1<Standard_Real> & , const Standard_Boolean ) ) static_cast<void (*)(  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> & , NCollection_Array1<Standard_Real> & , const Standard_Boolean ) >(&BSplSLib::SetPoles),
                    R"#(Copy in FP the coordinates of the poles.)#"  , py::arg("Poles"),  py::arg("Weights"),  py::arg("FP"),  py::arg("UDirection"))
        .def_static("GetPoles_s",
                    (void (*)(  const NCollection_Array1<Standard_Real> & , NCollection_Array2<gp_Pnt> & , const Standard_Boolean ) ) static_cast<void (*)(  const NCollection_Array1<Standard_Real> & , NCollection_Array2<gp_Pnt> & , const Standard_Boolean ) >(&BSplSLib::GetPoles),
                    R"#(Get from FP the coordinates of the poles.)#"  , py::arg("FP"),  py::arg("Poles"),  py::arg("UDirection"))
        .def_static("GetPoles_s",
                    (void (*)(  const NCollection_Array1<Standard_Real> & , NCollection_Array2<gp_Pnt> & , NCollection_Array2<Standard_Real> & , const Standard_Boolean ) ) static_cast<void (*)(  const NCollection_Array1<Standard_Real> & , NCollection_Array2<gp_Pnt> & , NCollection_Array2<Standard_Real> & , const Standard_Boolean ) >(&BSplSLib::GetPoles),
                    R"#(Get from FP the coordinates of the poles.)#"  , py::arg("FP"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("UDirection"))
        .def_static("InsertKnots_s",
                    (void (*)( const Standard_Boolean , const Standard_Integer , const Standard_Boolean ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> * , NCollection_Array2<gp_Pnt> & , NCollection_Array2<Standard_Real> * , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & , const Standard_Real , const Standard_Boolean ) ) static_cast<void (*)( const Standard_Boolean , const Standard_Integer , const Standard_Boolean ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> * , NCollection_Array2<gp_Pnt> & , NCollection_Array2<Standard_Real> * , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & , const Standard_Real , const Standard_Boolean ) >(&BSplSLib::InsertKnots),
                    R"#(None)#"  , py::arg("UDirection"),  py::arg("Degree"),  py::arg("Periodic"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("AddKnots"),  py::arg("AddMults"),  py::arg("NewPoles"),  py::arg("NewWeights"),  py::arg("NewKnots"),  py::arg("NewMults"),  py::arg("Epsilon"),  py::arg("Add")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("RemoveKnot_s",
                    (Standard_Boolean (*)( const Standard_Boolean , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Boolean ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> & , NCollection_Array2<gp_Pnt> & , NCollection_Array2<Standard_Real> * , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & , const Standard_Real ) ) static_cast<Standard_Boolean (*)( const Standard_Boolean , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Boolean ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> & , NCollection_Array2<gp_Pnt> & , NCollection_Array2<Standard_Real> * , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & , const Standard_Real ) >(&BSplSLib::RemoveKnot),
                    R"#(None)#"  , py::arg("UDirection"),  py::arg("Index"),  py::arg("Mult"),  py::arg("Degree"),  py::arg("Periodic"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("NewPoles"),  py::arg("NewWeights"),  py::arg("NewKnots"),  py::arg("NewMults"),  py::arg("Tolerance"))
        .def_static("IncreaseDegree_s",
                    (void (*)( const Standard_Boolean , const Standard_Integer , const Standard_Integer , const Standard_Boolean ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> & , NCollection_Array2<gp_Pnt> & , NCollection_Array2<Standard_Real> * , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & ) ) static_cast<void (*)( const Standard_Boolean , const Standard_Integer , const Standard_Integer , const Standard_Boolean ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> & , NCollection_Array2<gp_Pnt> & , NCollection_Array2<Standard_Real> * , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & ) >(&BSplSLib::IncreaseDegree),
                    R"#(None)#"  , py::arg("UDirection"),  py::arg("Degree"),  py::arg("NewDegree"),  py::arg("Periodic"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("NewPoles"),  py::arg("NewWeights"),  py::arg("NewKnots"),  py::arg("NewMults"))
        .def_static("Unperiodize_s",
                    (void (*)( const Standard_Boolean , const Standard_Integer ,  const NCollection_Array1<Standard_Integer> & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , NCollection_Array1<Standard_Integer> & , NCollection_Array1<Standard_Real> & , NCollection_Array2<gp_Pnt> & , NCollection_Array2<Standard_Real> * ) ) static_cast<void (*)( const Standard_Boolean , const Standard_Integer ,  const NCollection_Array1<Standard_Integer> & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , NCollection_Array1<Standard_Integer> & , NCollection_Array1<Standard_Real> & , NCollection_Array2<gp_Pnt> & , NCollection_Array2<Standard_Real> * ) >(&BSplSLib::Unperiodize),
                    R"#(None)#"  , py::arg("UDirection"),  py::arg("Degree"),  py::arg("Mults"),  py::arg("Knots"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("NewMults"),  py::arg("NewKnots"),  py::arg("NewPoles"),  py::arg("NewWeights"))
        .def_static("NoWeights_s",
                    (TColStd_Array2OfReal * (*)() ) static_cast<TColStd_Array2OfReal * (*)() >(&BSplSLib::NoWeights),
                    R"#(Used as argument for a non rational curve.)#" )
        .def_static("BuildCache_s",
                    (void (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , NCollection_Array2<gp_Pnt> & , NCollection_Array2<Standard_Real> * ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , NCollection_Array2<gp_Pnt> & , NCollection_Array2<Standard_Real> * ) >(&BSplSLib::BuildCache),
                    R"#(Perform the evaluation of the Taylor expansion of the Bspline normalized between 0 and 1. If rational computes the homogeneous Taylor expension for the numerator and stores it in CachePoles)#"  , py::arg("U"),  py::arg("V"),  py::arg("USpanDomain"),  py::arg("VSpanDomain"),  py::arg("UPeriodicFlag"),  py::arg("VPeriodicFlag"),  py::arg("UDegree"),  py::arg("VDegree"),  py::arg("UIndex"),  py::arg("VIndex"),  py::arg("UFlatKnots"),  py::arg("VFlatKnots"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("CachePoles"),  py::arg("CacheWeights"))
        .def_static("BuildCache_s",
                    (void (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , NCollection_Array2<Standard_Real> & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , NCollection_Array2<Standard_Real> & ) >(&BSplSLib::BuildCache),
                    R"#(Perform the evaluation of the Taylor expansion of the Bspline normalized between 0 and 1. Structure of result optimized for BSplSLib_Cache.)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("theUSpanDomain"),  py::arg("theVSpanDomain"),  py::arg("theUPeriodic"),  py::arg("theVPeriodic"),  py::arg("theUDegree"),  py::arg("theVDegree"),  py::arg("theUIndex"),  py::arg("theVIndex"),  py::arg("theUFlatKnots"),  py::arg("theVFlatKnots"),  py::arg("thePoles"),  py::arg("theWeights"),  py::arg("theCacheArray"))
        .def_static("CacheD0_s",
                    (void (*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , gp_Pnt & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , gp_Pnt & ) >(&BSplSLib::CacheD0),
                    R"#(Perform the evaluation of the of the cache the parameter must be normalized between the 0 and 1 for the span. The Cache must be valid when calling this routine. Geom Package will insure that. and then multiplies by the weights this just evaluates the current point the CacheParameter is where the Cache was constructed the SpanLength is to normalize the polynomial in the cache to avoid bad conditioning effects)#"  , py::arg("U"),  py::arg("V"),  py::arg("UDegree"),  py::arg("VDegree"),  py::arg("UCacheParameter"),  py::arg("VCacheParameter"),  py::arg("USpanLenght"),  py::arg("VSpanLength"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("Point"))
        .def_static("CoefsD0_s",
                    (void (*)( const Standard_Real , const Standard_Real ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , gp_Pnt & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , gp_Pnt & ) >(&BSplSLib::CoefsD0),
                    R"#(Calls CacheD0 for Bezier Surfaces Arrays computed with the method PolesCoefficients. Warning: To be used for BezierSurfaces ONLY!!!)#"  , py::arg("U"),  py::arg("V"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("Point"))
        .def_static("CacheD1_s",
                    (void (*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&BSplSLib::CacheD1),
                    R"#(Perform the evaluation of the of the cache the parameter must be normalized between the 0 and 1 for the span. The Cache must be valid when calling this routine. Geom Package will insure that. and then multiplies by the weights this just evaluates the current point the CacheParameter is where the Cache was constructed the SpanLength is to normalize the polynomial in the cache to avoid bad conditioning effects)#"  , py::arg("U"),  py::arg("V"),  py::arg("UDegree"),  py::arg("VDegree"),  py::arg("UCacheParameter"),  py::arg("VCacheParameter"),  py::arg("USpanLenght"),  py::arg("VSpanLength"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("Point"),  py::arg("VecU"),  py::arg("VecV"))
        .def_static("CoefsD1_s",
                    (void (*)( const Standard_Real , const Standard_Real ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&BSplSLib::CoefsD1),
                    R"#(Calls CacheD0 for Bezier Surfaces Arrays computed with the method PolesCoefficients. Warning: To be used for BezierSurfaces ONLY!!!)#"  , py::arg("U"),  py::arg("V"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("Point"),  py::arg("VecU"),  py::arg("VecV"))
        .def_static("CacheD2_s",
                    (void (*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&BSplSLib::CacheD2),
                    R"#(Perform the evaluation of the of the cache the parameter must be normalized between the 0 and 1 for the span. The Cache must be valid when calling this routine. Geom Package will insure that. and then multiplies by the weights this just evaluates the current point the CacheParameter is where the Cache was constructed the SpanLength is to normalize the polynomial in the cache to avoid bad conditioning effects)#"  , py::arg("U"),  py::arg("V"),  py::arg("UDegree"),  py::arg("VDegree"),  py::arg("UCacheParameter"),  py::arg("VCacheParameter"),  py::arg("USpanLenght"),  py::arg("VSpanLength"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("Point"),  py::arg("VecU"),  py::arg("VecV"),  py::arg("VecUU"),  py::arg("VecUV"),  py::arg("VecVV"))
        .def_static("CoefsD2_s",
                    (void (*)( const Standard_Real , const Standard_Real ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&BSplSLib::CoefsD2),
                    R"#(Calls CacheD0 for Bezier Surfaces Arrays computed with the method PolesCoefficients. Warning: To be used for BezierSurfaces ONLY!!!)#"  , py::arg("U"),  py::arg("V"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("Point"),  py::arg("VecU"),  py::arg("VecV"),  py::arg("VecUU"),  py::arg("VecUV"),  py::arg("VecVV"))
        .def_static("PolesCoefficients_s",
                    (void (*)(  const NCollection_Array2<gp_Pnt> & , NCollection_Array2<gp_Pnt> & ) ) static_cast<void (*)(  const NCollection_Array2<gp_Pnt> & , NCollection_Array2<gp_Pnt> & ) >(&BSplSLib::PolesCoefficients),
                    R"#(Warning! To be used for BezierSurfaces ONLY!!!)#"  , py::arg("Poles"),  py::arg("CachePoles"))
        .def_static("PolesCoefficients_s",
                    (void (*)(  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , NCollection_Array2<gp_Pnt> & , NCollection_Array2<Standard_Real> * ) ) static_cast<void (*)(  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * , NCollection_Array2<gp_Pnt> & , NCollection_Array2<Standard_Real> * ) >(&BSplSLib::PolesCoefficients),
                    R"#(Encapsulation of BuildCache to perform the evaluation of the Taylor expansion for beziersurfaces at parameters 0.,0.; Warning: To be used for BezierSurfaces ONLY!!!)#"  , py::arg("Poles"),  py::arg("Weights"),  py::arg("CachePoles"),  py::arg("CacheWeights"))
    // static methods using call by reference i.s.o. return
        .def_static("RationalDerivative_s",
                    []( const Standard_Integer UDeg,const Standard_Integer VDeg,const Standard_Integer N,const Standard_Integer M,const Standard_Boolean All ){ Standard_Real  Ders; Standard_Real  RDers; BSplSLib::RationalDerivative(UDeg,VDeg,N,M,Ders,RDers,All); return std::make_tuple(Ders,RDers); },
                    R"#(this is a one dimensional function typedef void (*EvaluatorFunction) ( Standard_Integer // Derivative Request Standard_Real * // StartEnd[2][2] // [0] = U // [1] = V // [0] = start // [1] = end Standard_Real // UParameter Standard_Real // VParamerer Standard_Real & // Result Standard_Integer &) ;// Error Code serves to multiply a given vectorial BSpline by a function Computes the derivatives of a ratio of two-variables functions x(u,v) / w(u,v) at orders <N,M>, x(u,v) is a vector in dimension <3>.)#"  , py::arg("UDeg"),  py::arg("VDeg"),  py::arg("N"),  py::arg("M"),  py::arg("All")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("HomogeneousD0_s",
                    []( const Standard_Real U,const Standard_Real V,const Standard_Integer UIndex,const Standard_Integer VIndex, const NCollection_Array2<gp_Pnt> & Poles, const NCollection_Array2<Standard_Real> * Weights, const NCollection_Array1<Standard_Real> & UKnots, const NCollection_Array1<Standard_Real> & VKnots, const NCollection_Array1<Standard_Integer> * UMults, const NCollection_Array1<Standard_Integer> * VMults,const Standard_Integer UDegree,const Standard_Integer VDegree,const Standard_Boolean URat,const Standard_Boolean VRat,const Standard_Boolean UPer,const Standard_Boolean VPer,gp_Pnt & P ){ Standard_Real  W; BSplSLib::HomogeneousD0(U,V,UIndex,VIndex,Poles,Weights,UKnots,VKnots,UMults,VMults,UDegree,VDegree,URat,VRat,UPer,VPer,W,P); return std::make_tuple(W); },
                    R"#(Makes an homogeneous evaluation of Poles and Weights any and returns in P the Numerator value and in W the Denominator value if Weights are present otherwise returns 1.0e0)#"  , py::arg("U"),  py::arg("V"),  py::arg("UIndex"),  py::arg("VIndex"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("UKnots"),  py::arg("VKnots"),  py::arg("UMults"),  py::arg("VMults"),  py::arg("UDegree"),  py::arg("VDegree"),  py::arg("URat"),  py::arg("VRat"),  py::arg("UPer"),  py::arg("VPer"),  py::arg("P"))
        .def_static("HomogeneousD1_s",
                    []( const Standard_Real U,const Standard_Real V,const Standard_Integer UIndex,const Standard_Integer VIndex, const NCollection_Array2<gp_Pnt> & Poles, const NCollection_Array2<Standard_Real> * Weights, const NCollection_Array1<Standard_Real> & UKnots, const NCollection_Array1<Standard_Real> & VKnots, const NCollection_Array1<Standard_Integer> * UMults, const NCollection_Array1<Standard_Integer> * VMults,const Standard_Integer UDegree,const Standard_Integer VDegree,const Standard_Boolean URat,const Standard_Boolean VRat,const Standard_Boolean UPer,const Standard_Boolean VPer,gp_Pnt & N,gp_Vec & Nu,gp_Vec & Nv ){ Standard_Real  D; Standard_Real  Du; Standard_Real  Dv; BSplSLib::HomogeneousD1(U,V,UIndex,VIndex,Poles,Weights,UKnots,VKnots,UMults,VMults,UDegree,VDegree,URat,VRat,UPer,VPer,N,Nu,Nv,D,Du,Dv); return std::make_tuple(D,Du,Dv); },
                    R"#(Makes an homogeneous evaluation of Poles and Weights any and returns in P the Numerator value and in W the Denominator value if Weights are present otherwise returns 1.0e0)#"  , py::arg("U"),  py::arg("V"),  py::arg("UIndex"),  py::arg("VIndex"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("UKnots"),  py::arg("VKnots"),  py::arg("UMults"),  py::arg("VMults"),  py::arg("UDegree"),  py::arg("VDegree"),  py::arg("URat"),  py::arg("VRat"),  py::arg("UPer"),  py::arg("VPer"),  py::arg("N"),  py::arg("Nu"),  py::arg("Nv"))
        .def_static("MovePoint_s",
                    []( const Standard_Real U,const Standard_Real V,const gp_Vec & Displ,const Standard_Integer UIndex1,const Standard_Integer UIndex2,const Standard_Integer VIndex1,const Standard_Integer VIndex2,const Standard_Integer UDegree,const Standard_Integer VDegree,const Standard_Boolean Rational, const NCollection_Array2<gp_Pnt> & Poles, const NCollection_Array2<Standard_Real> & Weights, const NCollection_Array1<Standard_Real> & UFlatKnots, const NCollection_Array1<Standard_Real> & VFlatKnots,NCollection_Array2<gp_Pnt> & NewPoles ){ Standard_Integer  UFirstIndex; Standard_Integer  ULastIndex; Standard_Integer  VFirstIndex; Standard_Integer  VLastIndex; BSplSLib::MovePoint(U,V,Displ,UIndex1,UIndex2,VIndex1,VIndex2,UDegree,VDegree,Rational,Poles,Weights,UFlatKnots,VFlatKnots,UFirstIndex,ULastIndex,VFirstIndex,VLastIndex,NewPoles); return std::make_tuple(UFirstIndex,ULastIndex,VFirstIndex,VLastIndex); },
                    R"#(Find the new poles which allows an old point (with a given u,v as parameters) to reach a new position UIndex1,UIndex2 indicate the range of poles we can move for U (1, UNbPoles-1) or (2, UNbPoles) -> no constraint for one side in U (2, UNbPoles-1) -> the ends are enforced for U don't enter (1,NbPoles) and (1,VNbPoles) -> error: rigid move if problem in BSplineBasis calculation, no change for the curve and UFirstIndex, VLastIndex = 0 VFirstIndex, VLastIndex = 0)#"  , py::arg("U"),  py::arg("V"),  py::arg("Displ"),  py::arg("UIndex1"),  py::arg("UIndex2"),  py::arg("VIndex1"),  py::arg("VIndex2"),  py::arg("UDegree"),  py::arg("VDegree"),  py::arg("Rational"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("UFlatKnots"),  py::arg("VFlatKnots"),  py::arg("NewPoles"))
        .def_static("Resolution_s",
                    [](  const NCollection_Array2<gp_Pnt> & Poles, const NCollection_Array2<Standard_Real> * Weights, const NCollection_Array1<Standard_Real> & UKnots, const NCollection_Array1<Standard_Real> & VKnots, const NCollection_Array1<Standard_Integer> & UMults, const NCollection_Array1<Standard_Integer> & VMults,const Standard_Integer UDegree,const Standard_Integer VDegree,const Standard_Boolean URat,const Standard_Boolean VRat,const Standard_Boolean UPer,const Standard_Boolean VPer,const Standard_Real Tolerance3D ){ Standard_Real  UTolerance; Standard_Real  VTolerance; BSplSLib::Resolution(Poles,Weights,UKnots,VKnots,UMults,VMults,UDegree,VDegree,URat,VRat,UPer,VPer,Tolerance3D,UTolerance,VTolerance); return std::make_tuple(UTolerance,VTolerance); },
                    R"#(Given a tolerance in 3D space returns two tolerances, one in U one in V such that for all (u1,v1) and (u0,v0) in the domain of the surface f(u,v) we have : | u1 - u0 | < UTolerance and | v1 - v0 | < VTolerance we have |f (u1,v1) - f (u0,v0)| < Tolerance3D)#"  , py::arg("Poles"),  py::arg("Weights"),  py::arg("UKnots"),  py::arg("VKnots"),  py::arg("UMults"),  py::arg("VMults"),  py::arg("UDegree"),  py::arg("VDegree"),  py::arg("URat"),  py::arg("VRat"),  py::arg("UPer"),  py::arg("VPer"),  py::arg("Tolerance3D"))
        .def_static("Interpolate_s",
                    []( const Standard_Integer UDegree,const Standard_Integer VDegree, const NCollection_Array1<Standard_Real> & UFlatKnots, const NCollection_Array1<Standard_Real> & VFlatKnots, const NCollection_Array1<Standard_Real> & UParameters, const NCollection_Array1<Standard_Real> & VParameters,NCollection_Array2<gp_Pnt> & Poles,NCollection_Array2<Standard_Real> & Weights ){ Standard_Integer  InversionProblem; BSplSLib::Interpolate(UDegree,VDegree,UFlatKnots,VFlatKnots,UParameters,VParameters,Poles,Weights,InversionProblem); return std::make_tuple(InversionProblem); },
                    R"#(Performs the interpolation of the data points given in the Poles array in the form [1,...,RL][1,...,RC][1...PolesDimension] . The ColLength CL and the Length of UParameters must be the same. The length of VFlatKnots is VDegree + CL + 1.)#"  , py::arg("UDegree"),  py::arg("VDegree"),  py::arg("UFlatKnots"),  py::arg("VFlatKnots"),  py::arg("UParameters"),  py::arg("VParameters"),  py::arg("Poles"),  py::arg("Weights"))
        .def_static("Interpolate_s",
                    []( const Standard_Integer UDegree,const Standard_Integer VDegree, const NCollection_Array1<Standard_Real> & UFlatKnots, const NCollection_Array1<Standard_Real> & VFlatKnots, const NCollection_Array1<Standard_Real> & UParameters, const NCollection_Array1<Standard_Real> & VParameters,NCollection_Array2<gp_Pnt> & Poles ){ Standard_Integer  InversionProblem; BSplSLib::Interpolate(UDegree,VDegree,UFlatKnots,VFlatKnots,UParameters,VParameters,Poles,InversionProblem); return std::make_tuple(InversionProblem); },
                    R"#(Performs the interpolation of the data points given in the Poles array. The ColLength CL and the Length of UParameters must be the same. The length of VFlatKnots is VDegree + CL + 1.)#"  , py::arg("UDegree"),  py::arg("VDegree"),  py::arg("UFlatKnots"),  py::arg("VFlatKnots"),  py::arg("UParameters"),  py::arg("VParameters"),  py::arg("Poles"))
        .def_static("FunctionMultiply_s",
                    []( const BSplSLib_EvaluatorFunction & Function,const Standard_Integer UBSplineDegree,const Standard_Integer VBSplineDegree, const NCollection_Array1<Standard_Real> & UBSplineKnots, const NCollection_Array1<Standard_Real> & VBSplineKnots, const NCollection_Array1<Standard_Integer> * UMults, const NCollection_Array1<Standard_Integer> * VMults, const NCollection_Array2<gp_Pnt> & Poles, const NCollection_Array2<Standard_Real> * Weights, const NCollection_Array1<Standard_Real> & UFlatKnots, const NCollection_Array1<Standard_Real> & VFlatKnots,const Standard_Integer UNewDegree,const Standard_Integer VNewDegree,NCollection_Array2<gp_Pnt> & NewNumerator,NCollection_Array2<Standard_Real> & NewDenominator ){ Standard_Integer  theStatus; BSplSLib::FunctionMultiply(Function,UBSplineDegree,VBSplineDegree,UBSplineKnots,VBSplineKnots,UMults,VMults,Poles,Weights,UFlatKnots,VFlatKnots,UNewDegree,VNewDegree,NewNumerator,NewDenominator,theStatus); return std::make_tuple(theStatus); },
                    R"#(this will multiply a given BSpline numerator N(u,v) and denominator D(u,v) defined by its U/VBSplineDegree and U/VBSplineKnots, and U/VMults. Its Poles and Weights are arrays which are coded as array2 of the form [1..UNumPoles][1..VNumPoles] by a function a(u,v) which is assumed to satisfy the following : 1. a(u,v) * N(u,v) and a(u,v) * D(u,v) is a polynomial BSpline that can be expressed exactly as a BSpline of degree U/VNewDegree on the knots U/VFlatKnots 2. the range of a(u,v) is the same as the range of N(u,v) or D(u,v) ---Warning: it is the caller's responsability to insure that conditions 1. and 2. above are satisfied : no check whatsoever is made in this method -- theStatus will return 0 if OK else it will return the pivot index -- of the matrix that was inverted to compute the multiplied -- BSpline : the method used is interpolation at Schoenenberg -- points of a(u,v)* N(u,v) and a(u,v) * D(u,v) theStatus will return 0 if OK else it will return the pivot index of the matrix that was inverted to compute the multiplied BSpline : the method used is interpolation at Schoenenberg points of a(u,v)*F(u,v) --)#"  , py::arg("Function"),  py::arg("UBSplineDegree"),  py::arg("VBSplineDegree"),  py::arg("UBSplineKnots"),  py::arg("VBSplineKnots"),  py::arg("UMults"),  py::arg("VMults"),  py::arg("Poles"),  py::arg("Weights"),  py::arg("UFlatKnots"),  py::arg("VFlatKnots"),  py::arg("UNewDegree"),  py::arg("VNewDegree"),  py::arg("NewNumerator"),  py::arg("NewDenominator"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BSplSLib_Cache ,opencascade::handle<BSplSLib_Cache> , Standard_Transient>>(m.attr("BSplSLib_Cache"))
    // constructors
        .def(py::init< const Standard_Integer &,const Standard_Boolean &, const NCollection_Array1<Standard_Real> &,const Standard_Integer &,const Standard_Boolean &, const NCollection_Array1<Standard_Real> &, const NCollection_Array2<Standard_Real> * >()  , py::arg("theDegreeU"),  py::arg("thePeriodicU"),  py::arg("theFlatKnotsU"),  py::arg("theDegreeV"),  py::arg("thePeriodicV"),  py::arg("theFlatKnotsV"),  py::arg("theWeights")=static_cast< const NCollection_Array2<Standard_Real> *>(NULL) )
    // custom constructors
    // methods
        .def("IsCacheValid",
             (Standard_Boolean (BSplSLib_Cache::*)( Standard_Real , Standard_Real ) const) static_cast<Standard_Boolean (BSplSLib_Cache::*)( Standard_Real , Standard_Real ) const>(&BSplSLib_Cache::IsCacheValid),
             R"#(Verifies validity of the cache using parameters of the point)#"  , py::arg("theParameterU"),  py::arg("theParameterV"))
        .def("BuildCache",
             (void (BSplSLib_Cache::*)( const Standard_Real & , const Standard_Real & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * ) ) static_cast<void (BSplSLib_Cache::*)( const Standard_Real & , const Standard_Real & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array2<gp_Pnt> & ,  const NCollection_Array2<Standard_Real> * ) >(&BSplSLib_Cache::BuildCache),
             R"#(Recomputes the cache data. Does not verify validity of the cache)#"  , py::arg("theParameterU"),  py::arg("theParameterV"),  py::arg("theFlatKnotsU"),  py::arg("theFlatKnotsV"),  py::arg("thePoles"),  py::arg("theWeights")=static_cast< const NCollection_Array2<Standard_Real> *>(NULL))
        .def("D0",
             (void (BSplSLib_Cache::*)( const Standard_Real & , const Standard_Real & , gp_Pnt & ) const) static_cast<void (BSplSLib_Cache::*)( const Standard_Real & , const Standard_Real & , gp_Pnt & ) const>(&BSplSLib_Cache::D0),
             R"#(Calculates the point on the surface for specified parameters)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("thePoint"))
        .def("D1",
             (void (BSplSLib_Cache::*)( const Standard_Real & , const Standard_Real & , gp_Pnt & , gp_Vec & , gp_Vec & ) const) static_cast<void (BSplSLib_Cache::*)( const Standard_Real & , const Standard_Real & , gp_Pnt & , gp_Vec & , gp_Vec & ) const>(&BSplSLib_Cache::D1),
             R"#(Calculates the point on the surface and its first derivative)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("thePoint"),  py::arg("theTangentU"),  py::arg("theTangentV"))
        .def("D2",
             (void (BSplSLib_Cache::*)( const Standard_Real & , const Standard_Real & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const) static_cast<void (BSplSLib_Cache::*)( const Standard_Real & , const Standard_Real & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) const>(&BSplSLib_Cache::D2),
             R"#(Calculates the point on the surface and derivatives till second order)#"  , py::arg("theU"),  py::arg("theV"),  py::arg("thePoint"),  py::arg("theTangentU"),  py::arg("theTangentV"),  py::arg("theCurvatureU"),  py::arg("theCurvatureV"),  py::arg("theCurvatureUV"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BSplSLib_Cache::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BSplSLib_Cache::*)() const>(&BSplSLib_Cache::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BSplSLib_Cache::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BSplSLib_Cache::get_type_descriptor),
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
// ./opencascade\BSplSLib_Cache.hxx
// ./opencascade\BSplSLib_EvaluatorFunction.hxx
// ./opencascade\BSplSLib.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

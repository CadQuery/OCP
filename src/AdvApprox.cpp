
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <AdvApprox_Cutting.hxx>
#include <PLib_JacobiPolynomial.hxx>
#include <Standard_ConstructionError.hxx>

// module includes
#include <AdvApprox_ApproxAFunction.hxx>
#include <AdvApprox_Cutting.hxx>
#include <AdvApprox_DichoCutting.hxx>
#include <AdvApprox_EvaluatorFunction.hxx>
#include <AdvApprox_PrefAndRec.hxx>
#include <AdvApprox_PrefCutting.hxx>
#include <AdvApprox_SimpleApprox.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_AdvApprox(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("AdvApprox"));


//Python trampoline classes
    class Py_AdvApprox_Cutting : public AdvApprox_Cutting{
    public:
        using AdvApprox_Cutting::AdvApprox_Cutting;
        
        // public pure virtual
        Standard_Boolean Value(const Standard_Real a,const Standard_Real b,Standard_Real & cuttingvalue) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,AdvApprox_Cutting,Value,a,b,cuttingvalue) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_AdvApprox_EvaluatorFunction : public AdvApprox_EvaluatorFunction{
    public:
        using AdvApprox_EvaluatorFunction::AdvApprox_EvaluatorFunction;
        
        // public pure virtual
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes


    static_cast<py::class_<AdvApprox_Cutting ,std::unique_ptr<AdvApprox_Cutting> ,Py_AdvApprox_Cutting >>(m.attr("AdvApprox_Cutting"))
        .def("Value",
             (Standard_Boolean (AdvApprox_Cutting::*)( const Standard_Real ,  const Standard_Real ,  Standard_Real &  ) const) static_cast<Standard_Boolean (AdvApprox_Cutting::*)( const Standard_Real ,  const Standard_Real ,  Standard_Real &  ) const>(&AdvApprox_Cutting::Value),
             R"#(None)#"  , py::arg("a"),  py::arg("b"),  py::arg("cuttingvalue"))
;


    static_cast<py::class_<AdvApprox_ApproxAFunction ,std::unique_ptr<AdvApprox_ApproxAFunction>  >>(m.attr("AdvApprox_ApproxAFunction"))
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> &,const Standard_Real,const Standard_Real,const GeomAbs_Shape,const Standard_Integer,const Standard_Integer,const AdvApprox_EvaluatorFunction & >()  , py::arg("Num1DSS"),  py::arg("Num2DSS"),  py::arg("Num3DSS"),  py::arg("OneDTol"),  py::arg("TwoDTol"),  py::arg("ThreeDTol"),  py::arg("First"),  py::arg("Last"),  py::arg("Continuity"),  py::arg("MaxDeg"),  py::arg("MaxSeg"),  py::arg("Func") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> &,const Standard_Real,const Standard_Real,const GeomAbs_Shape,const Standard_Integer,const Standard_Integer,const AdvApprox_EvaluatorFunction &,const AdvApprox_Cutting & >()  , py::arg("Num1DSS"),  py::arg("Num2DSS"),  py::arg("Num3DSS"),  py::arg("OneDTol"),  py::arg("TwoDTol"),  py::arg("ThreeDTol"),  py::arg("First"),  py::arg("Last"),  py::arg("Continuity"),  py::arg("MaxDeg"),  py::arg("MaxSeg"),  py::arg("Func"),  py::arg("CutTool") )
        .def("IsDone",
             (Standard_Boolean (AdvApprox_ApproxAFunction::*)() const) static_cast<Standard_Boolean (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::IsDone),
             R"#(None)#" )
        .def("HasResult",
             (Standard_Boolean (AdvApprox_ApproxAFunction::*)() const) static_cast<Standard_Boolean (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::HasResult),
             R"#(None)#" )
        .def("Poles1d",
             (opencascade::handle<TColStd_HArray2OfReal> (AdvApprox_ApproxAFunction::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfReal> (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Poles1d),
             R"#(returns the poles from the algorithms as is)#" )
        .def("Poles2d",
             (opencascade::handle<TColgp_HArray2OfPnt2d> (AdvApprox_ApproxAFunction::*)() const) static_cast<opencascade::handle<TColgp_HArray2OfPnt2d> (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Poles2d),
             R"#(returns the poles from the algorithms as is)#" )
        .def("Poles",
             (opencascade::handle<TColgp_HArray2OfPnt> (AdvApprox_ApproxAFunction::*)() const) static_cast<opencascade::handle<TColgp_HArray2OfPnt> (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Poles),
             R"#(-- returns the poles from the algorithms as is)#" )
        .def("NbPoles",
             (Standard_Integer (AdvApprox_ApproxAFunction::*)() const) static_cast<Standard_Integer (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::NbPoles),
             R"#(as the name says)#" )
        .def("Poles1d",
             (void (AdvApprox_ApproxAFunction::*)( const Standard_Integer ,  NCollection_Array1<Standard_Real> &  ) const) static_cast<void (AdvApprox_ApproxAFunction::*)( const Standard_Integer ,  NCollection_Array1<Standard_Real> &  ) const>(&AdvApprox_ApproxAFunction::Poles1d),
             R"#(returns the poles at Index from the 1d subspace)#"  , py::arg("Index"),  py::arg("P"))
        .def("Poles2d",
             (void (AdvApprox_ApproxAFunction::*)( const Standard_Integer ,  NCollection_Array1<gp_Pnt2d> &  ) const) static_cast<void (AdvApprox_ApproxAFunction::*)( const Standard_Integer ,  NCollection_Array1<gp_Pnt2d> &  ) const>(&AdvApprox_ApproxAFunction::Poles2d),
             R"#(returns the poles at Index from the 2d subspace)#"  , py::arg("Index"),  py::arg("P"))
        .def("Poles",
             (void (AdvApprox_ApproxAFunction::*)( const Standard_Integer ,  NCollection_Array1<gp_Pnt> &  ) const) static_cast<void (AdvApprox_ApproxAFunction::*)( const Standard_Integer ,  NCollection_Array1<gp_Pnt> &  ) const>(&AdvApprox_ApproxAFunction::Poles),
             R"#(returns the poles at Index from the 3d subspace)#"  , py::arg("Index"),  py::arg("P"))
        .def("Degree",
             (Standard_Integer (AdvApprox_ApproxAFunction::*)() const) static_cast<Standard_Integer (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Degree),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (AdvApprox_ApproxAFunction::*)() const) static_cast<Standard_Integer (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::NbKnots),
             R"#(None)#" )
        .def("NumSubSpaces",
             (Standard_Integer (AdvApprox_ApproxAFunction::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (AdvApprox_ApproxAFunction::*)( const Standard_Integer  ) const>(&AdvApprox_ApproxAFunction::NumSubSpaces),
             R"#(None)#"  , py::arg("Dimension"))
        .def("Knots",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApprox_ApproxAFunction::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Knots),
             R"#(None)#" )
        .def("Multiplicities",
             (opencascade::handle<TColStd_HArray1OfInteger> (AdvApprox_ApproxAFunction::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfInteger> (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Multiplicities),
             R"#(None)#" )
        .def("MaxError",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApprox_ApproxAFunction::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApprox_ApproxAFunction::*)( const Standard_Integer  ) const>(&AdvApprox_ApproxAFunction::MaxError),
             R"#(returns the error as is in the algorithms)#"  , py::arg("Dimension"))
        .def("AverageError",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApprox_ApproxAFunction::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApprox_ApproxAFunction::*)( const Standard_Integer  ) const>(&AdvApprox_ApproxAFunction::AverageError),
             R"#(returns the error as is in the algorithms)#"  , py::arg("Dimension"))
        .def("MaxError",
             (Standard_Real (AdvApprox_ApproxAFunction::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (AdvApprox_ApproxAFunction::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&AdvApprox_ApproxAFunction::MaxError),
             R"#(None)#"  , py::arg("Dimension"),  py::arg("Index"))
        .def("AverageError",
             (Standard_Real (AdvApprox_ApproxAFunction::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (AdvApprox_ApproxAFunction::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&AdvApprox_ApproxAFunction::AverageError),
             R"#(None)#"  , py::arg("Dimension"),  py::arg("Index"))
        .def("Dump",
             (void (AdvApprox_ApproxAFunction::*)( std::ostream &  ) const) static_cast<void (AdvApprox_ApproxAFunction::*)( std::ostream &  ) const>(&AdvApprox_ApproxAFunction::Dump),
             R"#(diplay information on approximation.)#"  , py::arg("o"))
        .def("HasResult",
             (Standard_Boolean (AdvApprox_ApproxAFunction::*)() const) static_cast<Standard_Boolean (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::HasResult),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (AdvApprox_ApproxAFunction::*)() const) static_cast<Standard_Boolean (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::IsDone),
             R"#(None)#" )
        .def("Poles1d",
             (opencascade::handle<TColStd_HArray2OfReal> (AdvApprox_ApproxAFunction::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfReal> (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Poles1d),
             R"#(returns the poles from the algorithms as is)#" )
        .def("Poles2d",
             (opencascade::handle<TColgp_HArray2OfPnt2d> (AdvApprox_ApproxAFunction::*)() const) static_cast<opencascade::handle<TColgp_HArray2OfPnt2d> (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Poles2d),
             R"#(returns the poles from the algorithms as is)#" )
        .def("Poles",
             (opencascade::handle<TColgp_HArray2OfPnt> (AdvApprox_ApproxAFunction::*)() const) static_cast<opencascade::handle<TColgp_HArray2OfPnt> (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Poles),
             R"#(-- returns the poles from the algorithms as is)#" )
        .def("Degree",
             (Standard_Integer (AdvApprox_ApproxAFunction::*)() const) static_cast<Standard_Integer (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Degree),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (AdvApprox_ApproxAFunction::*)() const) static_cast<Standard_Integer (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::NbKnots),
             R"#(None)#" )
        .def("Knots",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApprox_ApproxAFunction::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Knots),
             R"#(None)#" )
        .def("Multiplicities",
             (opencascade::handle<TColStd_HArray1OfInteger> (AdvApprox_ApproxAFunction::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfInteger> (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Multiplicities),
             R"#(None)#" )
        .def("NumSubSpaces",
             (Standard_Integer (AdvApprox_ApproxAFunction::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (AdvApprox_ApproxAFunction::*)( const Standard_Integer  ) const>(&AdvApprox_ApproxAFunction::NumSubSpaces),
             R"#(None)#"  , py::arg("Dimension"))
        .def_static("Approximation_s",
                    (void (*)( const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array1<Standard_Integer> & ,  const Standard_Real ,  const Standard_Real ,  AdvApprox_EvaluatorFunction & ,  const AdvApprox_Cutting & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array1<Standard_Real> & ,  const Standard_Integer ,  Standard_Integer & ,  NCollection_Array1<Standard_Integer> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  Standard_Integer &  ) ) static_cast<void (*)( const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array1<Standard_Integer> & ,  const Standard_Real ,  const Standard_Real ,  AdvApprox_EvaluatorFunction & ,  const AdvApprox_Cutting & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array1<Standard_Real> & ,  const Standard_Integer ,  Standard_Integer & ,  NCollection_Array1<Standard_Integer> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  Standard_Integer &  ) >(&AdvApprox_ApproxAFunction::Approximation),
                    R"#(None)#"  , py::arg("TotalDimension"),  py::arg("TotalNumSS"),  py::arg("LocalDimension"),  py::arg("First"),  py::arg("Last"),  py::arg("Evaluator"),  py::arg("CutTool"),  py::arg("ContinuityOrder"),  py::arg("NumMaxCoeffs"),  py::arg("MaxSegments"),  py::arg("TolerancesArray"),  py::arg("code_precis"),  py::arg("NumCurves"),  py::arg("NumCoeffPerCurveArray"),  py::arg("LocalCoefficientArray"),  py::arg("IntervalsArray"),  py::arg("ErrorMaxArray"),  py::arg("AverageErrorArray"),  py::arg("ErrorCode"))
;


    static_cast<py::class_<AdvApprox_PrefCutting ,std::unique_ptr<AdvApprox_PrefCutting>  , AdvApprox_Cutting >>(m.attr("AdvApprox_PrefCutting"))
        .def(py::init<  const NCollection_Array1<Standard_Real> & >()  , py::arg("CutPnts") )
        .def("Value",
             (Standard_Boolean (AdvApprox_PrefCutting::*)( const Standard_Real ,  const Standard_Real ,  Standard_Real &  ) const) static_cast<Standard_Boolean (AdvApprox_PrefCutting::*)( const Standard_Real ,  const Standard_Real ,  Standard_Real &  ) const>(&AdvApprox_PrefCutting::Value),
             R"#(None)#"  , py::arg("a"),  py::arg("b"),  py::arg("cuttingvalue"))
;


    static_cast<py::class_<AdvApprox_DichoCutting ,std::unique_ptr<AdvApprox_DichoCutting>  , AdvApprox_Cutting >>(m.attr("AdvApprox_DichoCutting"))
        .def(py::init<  >()  )
        .def("Value",
             (Standard_Boolean (AdvApprox_DichoCutting::*)( const Standard_Real ,  const Standard_Real ,  Standard_Real &  ) const) static_cast<Standard_Boolean (AdvApprox_DichoCutting::*)( const Standard_Real ,  const Standard_Real ,  Standard_Real &  ) const>(&AdvApprox_DichoCutting::Value),
             R"#(None)#"  , py::arg("a"),  py::arg("b"),  py::arg("cuttingvalue"))
;


    static_cast<py::class_<AdvApprox_PrefAndRec ,std::unique_ptr<AdvApprox_PrefAndRec>  , AdvApprox_Cutting >>(m.attr("AdvApprox_PrefAndRec"))
        .def(py::init<  const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Real> &,const Standard_Real >()  , py::arg("RecomendedCut"),  py::arg("PrefferedCut"),  py::arg("Weight")=static_cast<const Standard_Real>(5) )
        .def("Value",
             (Standard_Boolean (AdvApprox_PrefAndRec::*)( const Standard_Real ,  const Standard_Real ,  Standard_Real &  ) const) static_cast<Standard_Boolean (AdvApprox_PrefAndRec::*)( const Standard_Real ,  const Standard_Real ,  Standard_Real &  ) const>(&AdvApprox_PrefAndRec::Value),
             R"#(cuting value is - the recommended point nerest of (a+b)/2 if pi is in ]a,b[ or else - the preferential point nearest of (a+b) / 2 if pi is in ](r*a+b)/(r+1) , (a+r*b)/(r+1)[ where r = Weight - or (a+b)/2 else.)#"  , py::arg("a"),  py::arg("b"),  py::arg("cuttingvalue"))
;


    static_cast<py::class_<AdvApprox_SimpleApprox ,std::unique_ptr<AdvApprox_SimpleApprox>  >>(m.attr("AdvApprox_SimpleApprox"))
        .def(py::init< const Standard_Integer,const Standard_Integer,const GeomAbs_Shape,const Standard_Integer,const Standard_Integer,const opencascade::handle<PLib_JacobiPolynomial> &,const AdvApprox_EvaluatorFunction & >()  , py::arg("TotalDimension"),  py::arg("TotalNumSS"),  py::arg("Continuity"),  py::arg("WorkDegree"),  py::arg("NbGaussPoints"),  py::arg("JacobiBase"),  py::arg("Func") )
        .def("Perform",
             (void (AdvApprox_SimpleApprox::*)(  const NCollection_Array1<Standard_Integer> & ,   const NCollection_Array1<Standard_Real> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (AdvApprox_SimpleApprox::*)(  const NCollection_Array1<Standard_Integer> & ,   const NCollection_Array1<Standard_Real> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) >(&AdvApprox_SimpleApprox::Perform),
             R"#(Constructs approximator tool.)#"  , py::arg("LocalDimension"),  py::arg("LocalTolerancesArray"),  py::arg("First"),  py::arg("Last"),  py::arg("MaxDegree"))
        .def("IsDone",
             (Standard_Boolean (AdvApprox_SimpleApprox::*)() const) static_cast<Standard_Boolean (AdvApprox_SimpleApprox::*)() const>(&AdvApprox_SimpleApprox::IsDone),
             R"#(None)#" )
        .def("Degree",
             (Standard_Integer (AdvApprox_SimpleApprox::*)() const) static_cast<Standard_Integer (AdvApprox_SimpleApprox::*)() const>(&AdvApprox_SimpleApprox::Degree),
             R"#(None)#" )
        .def("Coefficients",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApprox_SimpleApprox::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApprox_SimpleApprox::*)() const>(&AdvApprox_SimpleApprox::Coefficients),
             R"#(returns the coefficients in the Jacobi Base)#" )
        .def("FirstConstr",
             (opencascade::handle<TColStd_HArray2OfReal> (AdvApprox_SimpleApprox::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfReal> (AdvApprox_SimpleApprox::*)() const>(&AdvApprox_SimpleApprox::FirstConstr),
             R"#(returns the constraints at First)#" )
        .def("LastConstr",
             (opencascade::handle<TColStd_HArray2OfReal> (AdvApprox_SimpleApprox::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfReal> (AdvApprox_SimpleApprox::*)() const>(&AdvApprox_SimpleApprox::LastConstr),
             R"#(returns the constraints at Last)#" )
        .def("SomTab",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApprox_SimpleApprox::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApprox_SimpleApprox::*)() const>(&AdvApprox_SimpleApprox::SomTab),
             R"#(None)#" )
        .def("DifTab",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApprox_SimpleApprox::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApprox_SimpleApprox::*)() const>(&AdvApprox_SimpleApprox::DifTab),
             R"#(None)#" )
        .def("MaxError",
             (Standard_Real (AdvApprox_SimpleApprox::*)( const Standard_Integer  ) const) static_cast<Standard_Real (AdvApprox_SimpleApprox::*)( const Standard_Integer  ) const>(&AdvApprox_SimpleApprox::MaxError),
             R"#(None)#"  , py::arg("Index"))
        .def("AverageError",
             (Standard_Real (AdvApprox_SimpleApprox::*)( const Standard_Integer  ) const) static_cast<Standard_Real (AdvApprox_SimpleApprox::*)( const Standard_Integer  ) const>(&AdvApprox_SimpleApprox::AverageError),
             R"#(None)#"  , py::arg("Index"))
        .def("Dump",
             (void (AdvApprox_SimpleApprox::*)( std::ostream &  ) const) static_cast<void (AdvApprox_SimpleApprox::*)( std::ostream &  ) const>(&AdvApprox_SimpleApprox::Dump),
             R"#(display information on approximation)#"  , py::arg("o"))
;

// functions
// ./opencascade/AdvApprox_ApproxAFunction.hxx
// ./opencascade/AdvApprox_PrefAndRec.hxx
// ./opencascade/AdvApprox_Cutting.hxx
// ./opencascade/AdvApprox_PrefCutting.hxx
// ./opencascade/AdvApprox_EvaluatorFunction.hxx
// ./opencascade/AdvApprox_DichoCutting.hxx
// ./opencascade/AdvApprox_SimpleApprox.hxx

// operators

// register typdefs
// ./opencascade/AdvApprox_ApproxAFunction.hxx
// ./opencascade/AdvApprox_PrefAndRec.hxx
// ./opencascade/AdvApprox_Cutting.hxx
// ./opencascade/AdvApprox_PrefCutting.hxx
// ./opencascade/AdvApprox_EvaluatorFunction.hxx
// ./opencascade/AdvApprox_DichoCutting.hxx
// ./opencascade/AdvApprox_SimpleApprox.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post


// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_ConstructionError.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Approx_SweepFunction.hxx>
#include <AdvApprox_Cutting.hxx>
#include <Standard_NotImplemented.hxx>

// module includes
#include <Approx_Array1OfAdHSurface.hxx>
#include <Approx_Array1OfGTrsf2d.hxx>
#include <Approx_Curve2d.hxx>
#include <Approx_Curve3d.hxx>
#include <Approx_CurveOnSurface.hxx>
#include <Approx_CurvilinearParameter.hxx>
#include <Approx_CurvlinFunc.hxx>
#include <Approx_FitAndDivide.hxx>
#include <Approx_FitAndDivide2d.hxx>
#include <Approx_HArray1OfAdHSurface.hxx>
#include <Approx_HArray1OfGTrsf2d.hxx>
#include <Approx_MCurvesToBSpCurve.hxx>
#include <Approx_ParametrizationType.hxx>
#include <Approx_SameParameter.hxx>
#include <Approx_SequenceOfHArray1OfReal.hxx>
#include <Approx_Status.hxx>
#include <Approx_SweepApproximation.hxx>
#include <Approx_SweepFunction.hxx>

// template related includes
// ./opencascade/Approx_Array1OfGTrsf2d.hxx
#include "NCollection.hxx"
// ./opencascade/Approx_SequenceOfHArray1OfReal.hxx
#include "NCollection.hxx"
// ./opencascade/Approx_Array1OfAdHSurface.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Approx(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Approx"));


//Python trampoline classes
    class Py_Approx_SweepFunction : public Approx_SweepFunction{
    public:
        using Approx_SweepFunction::Approx_SweepFunction;
        
        // public pure virtual
        Standard_Boolean D0(const Standard_Real Param,const Standard_Real First,const Standard_Real Last,NCollection_Array1<gp_Pnt> & Poles,NCollection_Array1<gp_Pnt2d> & Poles2d,NCollection_Array1<Standard_Real> & Weigths) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Approx_SweepFunction,D0,Param,First,Last,Poles,Poles2d,Weigths) };
        Standard_Integer Nb2dCurves() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Approx_SweepFunction,Nb2dCurves,) };
        void SectionShape(Standard_Integer & NbPoles,Standard_Integer & NbKnots,Standard_Integer & Degree) const  override { PYBIND11_OVERLOAD_PURE(void,Approx_SweepFunction,SectionShape,NbPoles,NbKnots,Degree) };
        void Knots(NCollection_Array1<Standard_Real> & TKnots) const  override { PYBIND11_OVERLOAD_PURE(void,Approx_SweepFunction,Knots,TKnots) };
        void Mults(NCollection_Array1<Standard_Integer> & TMults) const  override { PYBIND11_OVERLOAD_PURE(void,Approx_SweepFunction,Mults,TMults) };
        Standard_Boolean IsRational() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Approx_SweepFunction,IsRational,) };
        Standard_Integer NbIntervals(const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Approx_SweepFunction,NbIntervals,S) };
        void Intervals(NCollection_Array1<Standard_Real> & T,const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(void,Approx_SweepFunction,Intervals,T,S) };
        void SetInterval(const Standard_Real First,const Standard_Real Last) override { PYBIND11_OVERLOAD_PURE(void,Approx_SweepFunction,SetInterval,First,Last) };
        void GetTolerance(const Standard_Real BoundTol,const Standard_Real SurfTol,const Standard_Real AngleTol,NCollection_Array1<Standard_Real> & Tol3d) const  override { PYBIND11_OVERLOAD_PURE(void,Approx_SweepFunction,GetTolerance,BoundTol,SurfTol,AngleTol,Tol3d) };
        void SetTolerance(const Standard_Real Tol3d,const Standard_Real Tol2d) override { PYBIND11_OVERLOAD_PURE(void,Approx_SweepFunction,SetTolerance,Tol3d,Tol2d) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes


    static_cast<py::class_<Approx_HArray1OfAdHSurface ,std::unique_ptr<Approx_HArray1OfAdHSurface>  >>(m.attr("Approx_HArray1OfAdHSurface"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<Adaptor3d_HSurface> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<Adaptor3d_HSurface> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const Approx_Array1OfAdHSurface & (Approx_HArray1OfAdHSurface::*)() const) static_cast<const Approx_Array1OfAdHSurface & (Approx_HArray1OfAdHSurface::*)() const>(&Approx_HArray1OfAdHSurface::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (Approx_Array1OfAdHSurface & (Approx_HArray1OfAdHSurface::*)() ) static_cast<Approx_Array1OfAdHSurface & (Approx_HArray1OfAdHSurface::*)() >(&Approx_HArray1OfAdHSurface::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Approx_HArray1OfAdHSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Approx_HArray1OfAdHSurface::*)() const>(&Approx_HArray1OfAdHSurface::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Approx_HArray1OfAdHSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Approx_HArray1OfAdHSurface::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<Approx_CurvilinearParameter ,std::unique_ptr<Approx_CurvilinearParameter>  >>(m.attr("Approx_CurvilinearParameter"))
        .def(py::init< const opencascade::handle<Adaptor3d_HCurve> &,const Standard_Real,const GeomAbs_Shape,const Standard_Integer,const Standard_Integer >()  , py::arg("C3D"),  py::arg("Tol"),  py::arg("Order"),  py::arg("MaxDegree"),  py::arg("MaxSegments") )
        .def(py::init< const opencascade::handle<Adaptor2d_HCurve2d> &,const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Real,const GeomAbs_Shape,const Standard_Integer,const Standard_Integer >()  , py::arg("C2D"),  py::arg("Surf"),  py::arg("Tol"),  py::arg("Order"),  py::arg("MaxDegree"),  py::arg("MaxSegments") )
        .def(py::init< const opencascade::handle<Adaptor2d_HCurve2d> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor2d_HCurve2d> &,const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Real,const GeomAbs_Shape,const Standard_Integer,const Standard_Integer >()  , py::arg("C2D1"),  py::arg("Surf1"),  py::arg("C2D2"),  py::arg("Surf2"),  py::arg("Tol"),  py::arg("Order"),  py::arg("MaxDegree"),  py::arg("MaxSegments") )
        .def("IsDone",
             (Standard_Boolean (Approx_CurvilinearParameter::*)() const) static_cast<Standard_Boolean (Approx_CurvilinearParameter::*)() const>(&Approx_CurvilinearParameter::IsDone),
             R"#(None)#" )
        .def("HasResult",
             (Standard_Boolean (Approx_CurvilinearParameter::*)() const) static_cast<Standard_Boolean (Approx_CurvilinearParameter::*)() const>(&Approx_CurvilinearParameter::HasResult),
             R"#(None)#" )
        .def("Curve3d",
             (opencascade::handle<Geom_BSplineCurve> (Approx_CurvilinearParameter::*)() const) static_cast<opencascade::handle<Geom_BSplineCurve> (Approx_CurvilinearParameter::*)() const>(&Approx_CurvilinearParameter::Curve3d),
             R"#(returns the Bspline curve corresponding to the reparametrized 3D curve)#" )
        .def("MaxError3d",
             (Standard_Real (Approx_CurvilinearParameter::*)() const) static_cast<Standard_Real (Approx_CurvilinearParameter::*)() const>(&Approx_CurvilinearParameter::MaxError3d),
             R"#(returns the maximum error on the reparametrized 3D curve)#" )
        .def("Curve2d1",
             (opencascade::handle<Geom2d_BSplineCurve> (Approx_CurvilinearParameter::*)() const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (Approx_CurvilinearParameter::*)() const>(&Approx_CurvilinearParameter::Curve2d1),
             R"#(returns the BsplineCurve representing the reparametrized 2D curve on the first surface (case of a curve on one or two surfaces))#" )
        .def("MaxError2d1",
             (Standard_Real (Approx_CurvilinearParameter::*)() const) static_cast<Standard_Real (Approx_CurvilinearParameter::*)() const>(&Approx_CurvilinearParameter::MaxError2d1),
             R"#(returns the maximum error on the first reparametrized 2D curve)#" )
        .def("Curve2d2",
             (opencascade::handle<Geom2d_BSplineCurve> (Approx_CurvilinearParameter::*)() const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (Approx_CurvilinearParameter::*)() const>(&Approx_CurvilinearParameter::Curve2d2),
             R"#(returns the BsplineCurve representing the reparametrized 2D curve on the second surface (case of a curve on two surfaces))#" )
        .def("MaxError2d2",
             (Standard_Real (Approx_CurvilinearParameter::*)() const) static_cast<Standard_Real (Approx_CurvilinearParameter::*)() const>(&Approx_CurvilinearParameter::MaxError2d2),
             R"#(returns the maximum error on the second reparametrized 2D curve)#" )
        .def("Dump",
             (void (Approx_CurvilinearParameter::*)( std::ostream &  ) const) static_cast<void (Approx_CurvilinearParameter::*)( std::ostream &  ) const>(&Approx_CurvilinearParameter::Dump),
             R"#(print the maximum errors(s))#"  , py::arg("o"))
;


    static_cast<py::class_<Approx_MCurvesToBSpCurve ,std::unique_ptr<Approx_MCurvesToBSpCurve>  >>(m.attr("Approx_MCurvesToBSpCurve"))
        .def(py::init<  >()  )
        .def("Reset",
             (void (Approx_MCurvesToBSpCurve::*)() ) static_cast<void (Approx_MCurvesToBSpCurve::*)() >(&Approx_MCurvesToBSpCurve::Reset),
             R"#(None)#" )
        .def("Append",
             (void (Approx_MCurvesToBSpCurve::*)( const AppParCurves_MultiCurve &  ) ) static_cast<void (Approx_MCurvesToBSpCurve::*)( const AppParCurves_MultiCurve &  ) >(&Approx_MCurvesToBSpCurve::Append),
             R"#(None)#"  , py::arg("MC"))
        .def("Perform",
             (void (Approx_MCurvesToBSpCurve::*)() ) static_cast<void (Approx_MCurvesToBSpCurve::*)() >(&Approx_MCurvesToBSpCurve::Perform),
             R"#(None)#" )
        .def("Perform",
             (void (Approx_MCurvesToBSpCurve::*)(  const NCollection_Sequence<AppParCurves_MultiCurve> &  ) ) static_cast<void (Approx_MCurvesToBSpCurve::*)(  const NCollection_Sequence<AppParCurves_MultiCurve> &  ) >(&Approx_MCurvesToBSpCurve::Perform),
             R"#(None)#"  , py::arg("TheSeq"))
        .def("Value",
             (const AppParCurves_MultiBSpCurve & (Approx_MCurvesToBSpCurve::*)() const) static_cast<const AppParCurves_MultiBSpCurve & (Approx_MCurvesToBSpCurve::*)() const>(&Approx_MCurvesToBSpCurve::Value),
             R"#(return the composite MultiCurves as a MultiBSpCurve.)#" )
        .def("ChangeValue",
             (const AppParCurves_MultiBSpCurve & (Approx_MCurvesToBSpCurve::*)() ) static_cast<const AppParCurves_MultiBSpCurve & (Approx_MCurvesToBSpCurve::*)() >(&Approx_MCurvesToBSpCurve::ChangeValue),
             R"#(return the composite MultiCurves as a MultiBSpCurve.)#" )
;


    static_cast<py::class_<Approx_Curve2d ,std::unique_ptr<Approx_Curve2d>  >>(m.attr("Approx_Curve2d"))
        .def(py::init< const opencascade::handle<Adaptor2d_HCurve2d> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const GeomAbs_Shape,const Standard_Integer,const Standard_Integer >()  , py::arg("C2D"),  py::arg("First"),  py::arg("Last"),  py::arg("TolU"),  py::arg("TolV"),  py::arg("Continuity"),  py::arg("MaxDegree"),  py::arg("MaxSegments") )
        .def("IsDone",
             (Standard_Boolean (Approx_Curve2d::*)() const) static_cast<Standard_Boolean (Approx_Curve2d::*)() const>(&Approx_Curve2d::IsDone),
             R"#(None)#" )
        .def("HasResult",
             (Standard_Boolean (Approx_Curve2d::*)() const) static_cast<Standard_Boolean (Approx_Curve2d::*)() const>(&Approx_Curve2d::HasResult),
             R"#(None)#" )
        .def("Curve",
             (opencascade::handle<Geom2d_BSplineCurve> (Approx_Curve2d::*)() const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (Approx_Curve2d::*)() const>(&Approx_Curve2d::Curve),
             R"#(None)#" )
        .def("MaxError2dU",
             (Standard_Real (Approx_Curve2d::*)() const) static_cast<Standard_Real (Approx_Curve2d::*)() const>(&Approx_Curve2d::MaxError2dU),
             R"#(None)#" )
        .def("MaxError2dV",
             (Standard_Real (Approx_Curve2d::*)() const) static_cast<Standard_Real (Approx_Curve2d::*)() const>(&Approx_Curve2d::MaxError2dV),
             R"#(None)#" )
;


    static_cast<py::class_<Approx_FitAndDivide2d ,std::unique_ptr<Approx_FitAndDivide2d>  >>(m.attr("Approx_FitAndDivide2d"))
        .def(py::init< const AppCont_Function &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Boolean,const AppParCurves_Constraint,const AppParCurves_Constraint >()  , py::arg("Line"),  py::arg("degreemin")=static_cast<const Standard_Integer>(3),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-5),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("FirstC")=static_cast<const AppParCurves_Constraint>(AppParCurves_TangencyPoint),  py::arg("LastC")=static_cast<const AppParCurves_Constraint>(AppParCurves_TangencyPoint) )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Boolean,const AppParCurves_Constraint,const AppParCurves_Constraint >()  , py::arg("degreemin")=static_cast<const Standard_Integer>(3),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-05),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-05),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("FirstC")=static_cast<const AppParCurves_Constraint>(AppParCurves_TangencyPoint),  py::arg("LastC")=static_cast<const AppParCurves_Constraint>(AppParCurves_TangencyPoint) )
        .def("Perform",
             (void (Approx_FitAndDivide2d::*)( const AppCont_Function &  ) ) static_cast<void (Approx_FitAndDivide2d::*)( const AppCont_Function &  ) >(&Approx_FitAndDivide2d::Perform),
             R"#(runs the algorithm after having initialized the fields.)#"  , py::arg("Line"))
        .def("SetDegrees",
             (void (Approx_FitAndDivide2d::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Approx_FitAndDivide2d::*)( const Standard_Integer ,  const Standard_Integer  ) >(&Approx_FitAndDivide2d::SetDegrees),
             R"#(changes the degrees of the approximation.)#"  , py::arg("degreemin"),  py::arg("degreemax"))
        .def("SetTolerances",
             (void (Approx_FitAndDivide2d::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Approx_FitAndDivide2d::*)( const Standard_Real ,  const Standard_Real  ) >(&Approx_FitAndDivide2d::SetTolerances),
             R"#(Changes the tolerances of the approximation.)#"  , py::arg("Tolerance3d"),  py::arg("Tolerance2d"))
        .def("SetConstraints",
             (void (Approx_FitAndDivide2d::*)( const AppParCurves_Constraint ,  const AppParCurves_Constraint  ) ) static_cast<void (Approx_FitAndDivide2d::*)( const AppParCurves_Constraint ,  const AppParCurves_Constraint  ) >(&Approx_FitAndDivide2d::SetConstraints),
             R"#(Changes the constraints of the approximation.)#"  , py::arg("FirstC"),  py::arg("LastC"))
        .def("SetMaxSegments",
             (void (Approx_FitAndDivide2d::*)( const Standard_Integer  ) ) static_cast<void (Approx_FitAndDivide2d::*)( const Standard_Integer  ) >(&Approx_FitAndDivide2d::SetMaxSegments),
             R"#(Changes the max number of segments, which is allowed for cutting.)#"  , py::arg("theMaxSegments"))
        .def("IsAllApproximated",
             (Standard_Boolean (Approx_FitAndDivide2d::*)() const) static_cast<Standard_Boolean (Approx_FitAndDivide2d::*)() const>(&Approx_FitAndDivide2d::IsAllApproximated),
             R"#(returns False if at a moment of the approximation, the status NoApproximation has been sent by the user when more points were needed.)#" )
        .def("IsToleranceReached",
             (Standard_Boolean (Approx_FitAndDivide2d::*)() const) static_cast<Standard_Boolean (Approx_FitAndDivide2d::*)() const>(&Approx_FitAndDivide2d::IsToleranceReached),
             R"#(returns False if the status NoPointsAdded has been sent.)#" )
        .def("Error",
             (void (Approx_FitAndDivide2d::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (Approx_FitAndDivide2d::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const>(&Approx_FitAndDivide2d::Error),
             R"#(returns the tolerances 2d and 3d of the <Index> MultiCurve.)#"  , py::arg("Index"),  py::arg("tol3d"),  py::arg("tol2d"))
        .def("NbMultiCurves",
             (Standard_Integer (Approx_FitAndDivide2d::*)() const) static_cast<Standard_Integer (Approx_FitAndDivide2d::*)() const>(&Approx_FitAndDivide2d::NbMultiCurves),
             R"#(Returns the number of MultiCurve doing the approximation of the MultiLine.)#" )
        .def("Value",
             (AppParCurves_MultiCurve (Approx_FitAndDivide2d::*)( const Standard_Integer  ) const) static_cast<AppParCurves_MultiCurve (Approx_FitAndDivide2d::*)( const Standard_Integer  ) const>(&Approx_FitAndDivide2d::Value),
             R"#(returns the approximation MultiCurve of range <Index>.)#"  , py::arg("Index")=static_cast<const Standard_Integer>(1))
        .def("Parameters",
             (void (Approx_FitAndDivide2d::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (Approx_FitAndDivide2d::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const>(&Approx_FitAndDivide2d::Parameters),
             R"#(None)#"  , py::arg("Index"),  py::arg("firstp"),  py::arg("lastp"))
;


    static_cast<py::class_<Approx_CurveOnSurface ,std::unique_ptr<Approx_CurveOnSurface>  >>(m.attr("Approx_CurveOnSurface"))
        .def(py::init< const opencascade::handle<Adaptor2d_HCurve2d> &,const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Real,const Standard_Real,const Standard_Real,const GeomAbs_Shape,const Standard_Integer,const Standard_Integer,const Standard_Boolean,const Standard_Boolean >()  , py::arg("C2D"),  py::arg("Surf"),  py::arg("First"),  py::arg("Last"),  py::arg("Tol"),  py::arg("Continuity"),  py::arg("MaxDegree"),  py::arg("MaxSegments"),  py::arg("Only3d")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("Only2d")=static_cast<const Standard_Boolean>(Standard_False) )
        .def("IsDone",
             (Standard_Boolean (Approx_CurveOnSurface::*)() const) static_cast<Standard_Boolean (Approx_CurveOnSurface::*)() const>(&Approx_CurveOnSurface::IsDone),
             R"#(None)#" )
        .def("HasResult",
             (Standard_Boolean (Approx_CurveOnSurface::*)() const) static_cast<Standard_Boolean (Approx_CurveOnSurface::*)() const>(&Approx_CurveOnSurface::HasResult),
             R"#(None)#" )
        .def("Curve3d",
             (opencascade::handle<Geom_BSplineCurve> (Approx_CurveOnSurface::*)() const) static_cast<opencascade::handle<Geom_BSplineCurve> (Approx_CurveOnSurface::*)() const>(&Approx_CurveOnSurface::Curve3d),
             R"#(None)#" )
        .def("MaxError3d",
             (Standard_Real (Approx_CurveOnSurface::*)() const) static_cast<Standard_Real (Approx_CurveOnSurface::*)() const>(&Approx_CurveOnSurface::MaxError3d),
             R"#(None)#" )
        .def("Curve2d",
             (opencascade::handle<Geom2d_BSplineCurve> (Approx_CurveOnSurface::*)() const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (Approx_CurveOnSurface::*)() const>(&Approx_CurveOnSurface::Curve2d),
             R"#(None)#" )
        .def("MaxError2dU",
             (Standard_Real (Approx_CurveOnSurface::*)() const) static_cast<Standard_Real (Approx_CurveOnSurface::*)() const>(&Approx_CurveOnSurface::MaxError2dU),
             R"#(None)#" )
        .def("MaxError2dV",
             (Standard_Real (Approx_CurveOnSurface::*)() const) static_cast<Standard_Real (Approx_CurveOnSurface::*)() const>(&Approx_CurveOnSurface::MaxError2dV),
             R"#(returns the maximum errors relativly to the U component or the V component of the 2d Curve)#" )
;


    static_cast<py::class_<Approx_SweepFunction ,opencascade::handle<Approx_SweepFunction> ,Py_Approx_SweepFunction , Standard_Transient >>(m.attr("Approx_SweepFunction"))
        .def("D0",
             (Standard_Boolean (Approx_SweepFunction::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (Approx_SweepFunction::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) >(&Approx_SweepFunction::D0),
             R"#(compute the section for v = param)#"  , py::arg("Param"),  py::arg("First"),  py::arg("Last"),  py::arg("Poles"),  py::arg("Poles2d"),  py::arg("Weigths"))
        .def("D1",
             (Standard_Boolean (Approx_SweepFunction::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (Approx_SweepFunction::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&Approx_SweepFunction::D1),
             R"#(compute the first derivative in v direction of the section for v = param Warning : It used only for C1 or C2 aproximation)#"  , py::arg("Param"),  py::arg("First"),  py::arg("Last"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("D2",
             (Standard_Boolean (Approx_SweepFunction::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (Approx_SweepFunction::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&Approx_SweepFunction::D2),
             R"#(compute the second derivative in v direction of the section for v = param Warning : It used only for C2 aproximation)#"  , py::arg("Param"),  py::arg("First"),  py::arg("Last"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
        .def("Nb2dCurves",
             (Standard_Integer (Approx_SweepFunction::*)() const) static_cast<Standard_Integer (Approx_SweepFunction::*)() const>(&Approx_SweepFunction::Nb2dCurves),
             R"#(get the number of 2d curves to approximate.)#" )
        .def("SectionShape",
             (void (Approx_SweepFunction::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const) static_cast<void (Approx_SweepFunction::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const>(&Approx_SweepFunction::SectionShape),
             R"#(get the format of an section)#"  , py::arg("NbPoles"),  py::arg("NbKnots"),  py::arg("Degree"))
        .def("Knots",
             (void (Approx_SweepFunction::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (Approx_SweepFunction::*)( NCollection_Array1<Standard_Real> &  ) const>(&Approx_SweepFunction::Knots),
             R"#(get the Knots of the section)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (Approx_SweepFunction::*)( NCollection_Array1<Standard_Integer> &  ) const) static_cast<void (Approx_SweepFunction::*)( NCollection_Array1<Standard_Integer> &  ) const>(&Approx_SweepFunction::Mults),
             R"#(get the Multplicities of the section)#"  , py::arg("TMults"))
        .def("IsRational",
             (Standard_Boolean (Approx_SweepFunction::*)() const) static_cast<Standard_Boolean (Approx_SweepFunction::*)() const>(&Approx_SweepFunction::IsRational),
             R"#(Returns if the sections are rationnal or not)#" )
        .def("NbIntervals",
             (Standard_Integer (Approx_SweepFunction::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (Approx_SweepFunction::*)( const GeomAbs_Shape  ) const>(&Approx_SweepFunction::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (Approx_SweepFunction::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (Approx_SweepFunction::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&Approx_SweepFunction::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("SetInterval",
             (void (Approx_SweepFunction::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Approx_SweepFunction::*)( const Standard_Real ,  const Standard_Real  ) >(&Approx_SweepFunction::SetInterval),
             R"#(Sets the bounds of the parametric interval on the fonction This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("Resolution",
             (void (Approx_SweepFunction::*)( const Standard_Integer ,  const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (Approx_SweepFunction::*)( const Standard_Integer ,  const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) const>(&Approx_SweepFunction::Resolution),
             R"#(Returns the resolutions in the sub-space 2d <Index> This information is usfull to find an good tolerance in 2d approximation.)#"  , py::arg("Index"),  py::arg("Tol"),  py::arg("TolU"),  py::arg("TolV"))
        .def("GetTolerance",
             (void (Approx_SweepFunction::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  NCollection_Array1<Standard_Real> &  ) const) static_cast<void (Approx_SweepFunction::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  NCollection_Array1<Standard_Real> &  ) const>(&Approx_SweepFunction::GetTolerance),
             R"#(Returns the tolerance to reach in approximation to satisfy. BoundTol error at the Boundary AngleTol tangent error at the Boundary (in radian) SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"))
        .def("SetTolerance",
             (void (Approx_SweepFunction::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Approx_SweepFunction::*)( const Standard_Real ,  const Standard_Real  ) >(&Approx_SweepFunction::SetTolerance),
             R"#(Is usefull, if (me) have to run numerical algorithm to perform D0, D1 or D2)#"  , py::arg("Tol3d"),  py::arg("Tol2d"))
        .def("BarycentreOfSurf",
             (gp_Pnt (Approx_SweepFunction::*)() const) static_cast<gp_Pnt (Approx_SweepFunction::*)() const>(&Approx_SweepFunction::BarycentreOfSurf),
             R"#(Get the barycentre of Surface. An very poor estimation is sufficent. This information is usefull to perform well conditioned rational approximation. Warning: Used only if <me> IsRational)#" )
        .def("MaximalSection",
             (Standard_Real (Approx_SweepFunction::*)() const) static_cast<Standard_Real (Approx_SweepFunction::*)() const>(&Approx_SweepFunction::MaximalSection),
             R"#(Returns the length of the greater section. This information is usefull to G1's control. Warning: With an little value, approximation can be slower.)#" )
        .def("GetMinimalWeight",
             (void (Approx_SweepFunction::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (Approx_SweepFunction::*)( NCollection_Array1<Standard_Real> &  ) const>(&Approx_SweepFunction::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles in all sections. This information is usefull to control error in rational approximation. Warning: Used only if <me> IsRational)#"  , py::arg("Weigths"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Approx_SweepFunction::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Approx_SweepFunction::*)() const>(&Approx_SweepFunction::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Approx_SweepFunction::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Approx_SweepFunction::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<Approx_CurvlinFunc ,opencascade::handle<Approx_CurvlinFunc>  , Standard_Transient >>(m.attr("Approx_CurvlinFunc"))
        .def(py::init< const opencascade::handle<Adaptor3d_HCurve> &,const Standard_Real >()  , py::arg("C"),  py::arg("Tol") )
        .def(py::init< const opencascade::handle<Adaptor2d_HCurve2d> &,const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Real >()  , py::arg("C2D"),  py::arg("S"),  py::arg("Tol") )
        .def(py::init< const opencascade::handle<Adaptor2d_HCurve2d> &,const opencascade::handle<Adaptor2d_HCurve2d> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Real >()  , py::arg("C2D1"),  py::arg("C2D2"),  py::arg("S1"),  py::arg("S2"),  py::arg("Tol") )
        .def("SetTol",
             (void (Approx_CurvlinFunc::*)( const Standard_Real  ) ) static_cast<void (Approx_CurvlinFunc::*)( const Standard_Real  ) >(&Approx_CurvlinFunc::SetTol),
             R"#(---Purpose Update the tolerance to used)#"  , py::arg("Tol"))
        .def("FirstParameter",
             (Standard_Real (Approx_CurvlinFunc::*)() const) static_cast<Standard_Real (Approx_CurvlinFunc::*)() const>(&Approx_CurvlinFunc::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (Approx_CurvlinFunc::*)() const) static_cast<Standard_Real (Approx_CurvlinFunc::*)() const>(&Approx_CurvlinFunc::LastParameter),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (Approx_CurvlinFunc::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (Approx_CurvlinFunc::*)( const GeomAbs_Shape  ) const>(&Approx_CurvlinFunc::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (Approx_CurvlinFunc::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (Approx_CurvlinFunc::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&Approx_CurvlinFunc::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Trim",
             (void (Approx_CurvlinFunc::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Approx_CurvlinFunc::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Approx_CurvlinFunc::Trim),
             R"#(if First < 0 or Last > 1)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("Length",
             (void (Approx_CurvlinFunc::*)() ) static_cast<void (Approx_CurvlinFunc::*)() >(&Approx_CurvlinFunc::Length),
             R"#(Computes length of the curve.)#" )
        .def("Length",
             (Standard_Real (Approx_CurvlinFunc::*)( Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<Standard_Real (Approx_CurvlinFunc::*)( Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real  ) const>(&Approx_CurvlinFunc::Length),
             R"#(Computes length of the curve segment.)#"  , py::arg("C"),  py::arg("FirstU"),  py::arg("LasrU"))
        .def("GetLength",
             (Standard_Real (Approx_CurvlinFunc::*)() const) static_cast<Standard_Real (Approx_CurvlinFunc::*)() const>(&Approx_CurvlinFunc::GetLength),
             R"#(None)#" )
        .def("GetUParameter",
             (Standard_Real (Approx_CurvlinFunc::*)( Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Integer  ) const) static_cast<Standard_Real (Approx_CurvlinFunc::*)( Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Integer  ) const>(&Approx_CurvlinFunc::GetUParameter),
             R"#(returns original parameter correponding S. if Case == 1 computation is performed on myC2D1 and mySurf1, otherwise it is done on myC2D2 and mySurf2.)#"  , py::arg("C"),  py::arg("S"),  py::arg("NumberOfCurve"))
        .def("GetSParameter",
             (Standard_Real (Approx_CurvlinFunc::*)( const Standard_Real  ) const) static_cast<Standard_Real (Approx_CurvlinFunc::*)( const Standard_Real  ) const>(&Approx_CurvlinFunc::GetSParameter),
             R"#(returns original parameter correponding S.)#"  , py::arg("U"))
        .def("EvalCase1",
             (Standard_Boolean (Approx_CurvlinFunc::*)( const Standard_Real ,  const Standard_Integer ,  NCollection_Array1<Standard_Real> &  ) const) static_cast<Standard_Boolean (Approx_CurvlinFunc::*)( const Standard_Real ,  const Standard_Integer ,  NCollection_Array1<Standard_Real> &  ) const>(&Approx_CurvlinFunc::EvalCase1),
             R"#(if myCase != 1)#"  , py::arg("S"),  py::arg("Order"),  py::arg("Result"))
        .def("EvalCase2",
             (Standard_Boolean (Approx_CurvlinFunc::*)( const Standard_Real ,  const Standard_Integer ,  NCollection_Array1<Standard_Real> &  ) const) static_cast<Standard_Boolean (Approx_CurvlinFunc::*)( const Standard_Real ,  const Standard_Integer ,  NCollection_Array1<Standard_Real> &  ) const>(&Approx_CurvlinFunc::EvalCase2),
             R"#(if myCase != 2)#"  , py::arg("S"),  py::arg("Order"),  py::arg("Result"))
        .def("EvalCase3",
             (Standard_Boolean (Approx_CurvlinFunc::*)( const Standard_Real ,  const Standard_Integer ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (Approx_CurvlinFunc::*)( const Standard_Real ,  const Standard_Integer ,  NCollection_Array1<Standard_Real> &  ) >(&Approx_CurvlinFunc::EvalCase3),
             R"#(if myCase != 3)#"  , py::arg("S"),  py::arg("Order"),  py::arg("Result"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Approx_CurvlinFunc::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Approx_CurvlinFunc::*)() const>(&Approx_CurvlinFunc::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Approx_CurvlinFunc::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Approx_CurvlinFunc::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<Approx_Curve3d ,std::unique_ptr<Approx_Curve3d>  >>(m.attr("Approx_Curve3d"))
        .def(py::init< const opencascade::handle<Adaptor3d_HCurve> &,const Standard_Real,const GeomAbs_Shape,const Standard_Integer,const Standard_Integer >()  , py::arg("Curve"),  py::arg("Tol3d"),  py::arg("Order"),  py::arg("MaxSegments"),  py::arg("MaxDegree") )
        .def("Curve",
             (opencascade::handle<Geom_BSplineCurve> (Approx_Curve3d::*)() const) static_cast<opencascade::handle<Geom_BSplineCurve> (Approx_Curve3d::*)() const>(&Approx_Curve3d::Curve),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (Approx_Curve3d::*)() const) static_cast<Standard_Boolean (Approx_Curve3d::*)() const>(&Approx_Curve3d::IsDone),
             R"#(returns Standard_True if the approximation has been done within requiered tolerance)#" )
        .def("HasResult",
             (Standard_Boolean (Approx_Curve3d::*)() const) static_cast<Standard_Boolean (Approx_Curve3d::*)() const>(&Approx_Curve3d::HasResult),
             R"#(returns Standard_True if the approximation did come out with a result that is not NECESSARELY within the required tolerance)#" )
        .def("MaxError",
             (Standard_Real (Approx_Curve3d::*)() const) static_cast<Standard_Real (Approx_Curve3d::*)() const>(&Approx_Curve3d::MaxError),
             R"#(returns the Maximum Error (>0 when an approximation has been done, 0 if no approximation))#" )
        .def("Dump",
             (void (Approx_Curve3d::*)( std::ostream &  ) const) static_cast<void (Approx_Curve3d::*)( std::ostream &  ) const>(&Approx_Curve3d::Dump),
             R"#(Print on the stream o information about the object)#"  , py::arg("o"))
;


    static_cast<py::class_<Approx_FitAndDivide ,std::unique_ptr<Approx_FitAndDivide>  >>(m.attr("Approx_FitAndDivide"))
        .def(py::init< const AppCont_Function &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Boolean,const AppParCurves_Constraint,const AppParCurves_Constraint >()  , py::arg("Line"),  py::arg("degreemin")=static_cast<const Standard_Integer>(3),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-5),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("FirstC")=static_cast<const AppParCurves_Constraint>(AppParCurves_TangencyPoint),  py::arg("LastC")=static_cast<const AppParCurves_Constraint>(AppParCurves_TangencyPoint) )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Boolean,const AppParCurves_Constraint,const AppParCurves_Constraint >()  , py::arg("degreemin")=static_cast<const Standard_Integer>(3),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-05),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-05),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("FirstC")=static_cast<const AppParCurves_Constraint>(AppParCurves_TangencyPoint),  py::arg("LastC")=static_cast<const AppParCurves_Constraint>(AppParCurves_TangencyPoint) )
        .def("Perform",
             (void (Approx_FitAndDivide::*)( const AppCont_Function &  ) ) static_cast<void (Approx_FitAndDivide::*)( const AppCont_Function &  ) >(&Approx_FitAndDivide::Perform),
             R"#(runs the algorithm after having initialized the fields.)#"  , py::arg("Line"))
        .def("SetDegrees",
             (void (Approx_FitAndDivide::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Approx_FitAndDivide::*)( const Standard_Integer ,  const Standard_Integer  ) >(&Approx_FitAndDivide::SetDegrees),
             R"#(changes the degrees of the approximation.)#"  , py::arg("degreemin"),  py::arg("degreemax"))
        .def("SetTolerances",
             (void (Approx_FitAndDivide::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Approx_FitAndDivide::*)( const Standard_Real ,  const Standard_Real  ) >(&Approx_FitAndDivide::SetTolerances),
             R"#(Changes the tolerances of the approximation.)#"  , py::arg("Tolerance3d"),  py::arg("Tolerance2d"))
        .def("SetConstraints",
             (void (Approx_FitAndDivide::*)( const AppParCurves_Constraint ,  const AppParCurves_Constraint  ) ) static_cast<void (Approx_FitAndDivide::*)( const AppParCurves_Constraint ,  const AppParCurves_Constraint  ) >(&Approx_FitAndDivide::SetConstraints),
             R"#(Changes the constraints of the approximation.)#"  , py::arg("FirstC"),  py::arg("LastC"))
        .def("SetMaxSegments",
             (void (Approx_FitAndDivide::*)( const Standard_Integer  ) ) static_cast<void (Approx_FitAndDivide::*)( const Standard_Integer  ) >(&Approx_FitAndDivide::SetMaxSegments),
             R"#(Changes the max number of segments, which is allowed for cutting.)#"  , py::arg("theMaxSegments"))
        .def("IsAllApproximated",
             (Standard_Boolean (Approx_FitAndDivide::*)() const) static_cast<Standard_Boolean (Approx_FitAndDivide::*)() const>(&Approx_FitAndDivide::IsAllApproximated),
             R"#(returns False if at a moment of the approximation, the status NoApproximation has been sent by the user when more points were needed.)#" )
        .def("IsToleranceReached",
             (Standard_Boolean (Approx_FitAndDivide::*)() const) static_cast<Standard_Boolean (Approx_FitAndDivide::*)() const>(&Approx_FitAndDivide::IsToleranceReached),
             R"#(returns False if the status NoPointsAdded has been sent.)#" )
        .def("Error",
             (void (Approx_FitAndDivide::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (Approx_FitAndDivide::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const>(&Approx_FitAndDivide::Error),
             R"#(returns the tolerances 2d and 3d of the <Index> MultiCurve.)#"  , py::arg("Index"),  py::arg("tol3d"),  py::arg("tol2d"))
        .def("NbMultiCurves",
             (Standard_Integer (Approx_FitAndDivide::*)() const) static_cast<Standard_Integer (Approx_FitAndDivide::*)() const>(&Approx_FitAndDivide::NbMultiCurves),
             R"#(Returns the number of MultiCurve doing the approximation of the MultiLine.)#" )
        .def("Value",
             (AppParCurves_MultiCurve (Approx_FitAndDivide::*)( const Standard_Integer  ) const) static_cast<AppParCurves_MultiCurve (Approx_FitAndDivide::*)( const Standard_Integer  ) const>(&Approx_FitAndDivide::Value),
             R"#(returns the approximation MultiCurve of range <Index>.)#"  , py::arg("Index")=static_cast<const Standard_Integer>(1))
        .def("Parameters",
             (void (Approx_FitAndDivide::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (Approx_FitAndDivide::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const>(&Approx_FitAndDivide::Parameters),
             R"#(None)#"  , py::arg("Index"),  py::arg("firstp"),  py::arg("lastp"))
;


    static_cast<py::class_<Approx_HArray1OfGTrsf2d ,std::unique_ptr<Approx_HArray1OfGTrsf2d>  >>(m.attr("Approx_HArray1OfGTrsf2d"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const gp_GTrsf2d & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<gp_GTrsf2d> & >()  , py::arg("theOther") )
        .def("Array1",
             (const Approx_Array1OfGTrsf2d & (Approx_HArray1OfGTrsf2d::*)() const) static_cast<const Approx_Array1OfGTrsf2d & (Approx_HArray1OfGTrsf2d::*)() const>(&Approx_HArray1OfGTrsf2d::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (Approx_Array1OfGTrsf2d & (Approx_HArray1OfGTrsf2d::*)() ) static_cast<Approx_Array1OfGTrsf2d & (Approx_HArray1OfGTrsf2d::*)() >(&Approx_HArray1OfGTrsf2d::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Approx_HArray1OfGTrsf2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Approx_HArray1OfGTrsf2d::*)() const>(&Approx_HArray1OfGTrsf2d::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Approx_HArray1OfGTrsf2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Approx_HArray1OfGTrsf2d::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<Approx_SweepApproximation ,std::unique_ptr<Approx_SweepApproximation>  >>(m.attr("Approx_SweepApproximation"))
        .def(py::init< const opencascade::handle<Approx_SweepFunction> & >()  , py::arg("Func") )
        .def("Perform",
             (void (Approx_SweepApproximation::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const GeomAbs_Shape ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Approx_SweepApproximation::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const GeomAbs_Shape ,  const Standard_Integer ,  const Standard_Integer  ) >(&Approx_SweepApproximation::Perform),
             R"#(Perform the Approximation [First, Last] : Approx_SweepApproximation.cdl Tol3d : Tolerance to surface approximation Tol2d : Tolerance used to perform curve approximation Normaly the 2d curve are approximated with a tolerance given by the resolution on support surfaces, but if this tolerance is too large Tol2d is used. TolAngular : Tolerance (in radian) to control the angle beetween tangents on the section law and tangent of iso-v on approximed surface Continuity : The continuity in v waiting on the surface Degmax : The maximum degree in v requiered on the surface Segmax : The maximum number of span in v requiered on the surface Warning : The continuity ci can be obtained only if Ft is Ci)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol3d"),  py::arg("BoundTol"),  py::arg("Tol2d"),  py::arg("TolAngular"),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C0),  py::arg("Degmax")=static_cast<const Standard_Integer>(11),  py::arg("Segmax")=static_cast<const Standard_Integer>(50))
        .def("Eval",
             (Standard_Integer (Approx_SweepApproximation::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Integer (Approx_SweepApproximation::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  Standard_Real &  ) >(&Approx_SweepApproximation::Eval),
             R"#(The EvaluatorFunction from AdvApprox;)#"  , py::arg("Parameter"),  py::arg("DerivativeRequest"),  py::arg("First"),  py::arg("Last"),  py::arg("Result"))
        .def("IsDone",
             (Standard_Boolean (Approx_SweepApproximation::*)() const) static_cast<Standard_Boolean (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::IsDone),
             R"#(returns if we have an result)#" )
        .def("SurfShape",
             (void (Approx_SweepApproximation::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const) static_cast<void (Approx_SweepApproximation::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const>(&Approx_SweepApproximation::SurfShape),
             R"#(None)#"  , py::arg("UDegree"),  py::arg("VDegree"),  py::arg("NbUPoles"),  py::arg("NbVPoles"),  py::arg("NbUKnots"),  py::arg("NbVKnots"))
        .def("Surface",
             (void (Approx_SweepApproximation::*)( NCollection_Array2<gp_Pnt> & ,  NCollection_Array2<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Integer> & ,  NCollection_Array1<Standard_Integer> &  ) const) static_cast<void (Approx_SweepApproximation::*)( NCollection_Array2<gp_Pnt> & ,  NCollection_Array2<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Integer> & ,  NCollection_Array1<Standard_Integer> &  ) const>(&Approx_SweepApproximation::Surface),
             R"#(None)#"  , py::arg("TPoles"),  py::arg("TWeights"),  py::arg("TUKnots"),  py::arg("TVKnots"),  py::arg("TUMults"),  py::arg("TVMults"))
        .def("UDegree",
             (Standard_Integer (Approx_SweepApproximation::*)() const) static_cast<Standard_Integer (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::UDegree),
             R"#(None)#" )
        .def("VDegree",
             (Standard_Integer (Approx_SweepApproximation::*)() const) static_cast<Standard_Integer (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::VDegree),
             R"#(None)#" )
        .def("SurfPoles",
             (const TColgp_Array2OfPnt & (Approx_SweepApproximation::*)() const) static_cast<const TColgp_Array2OfPnt & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfPoles),
             R"#(None)#" )
        .def("SurfWeights",
             (const TColStd_Array2OfReal & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array2OfReal & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfWeights),
             R"#(None)#" )
        .def("SurfUKnots",
             (const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfUKnots),
             R"#(None)#" )
        .def("SurfVKnots",
             (const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfVKnots),
             R"#(None)#" )
        .def("SurfUMults",
             (const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfUMults),
             R"#(None)#" )
        .def("SurfVMults",
             (const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfVMults),
             R"#(None)#" )
        .def("MaxErrorOnSurf",
             (Standard_Real (Approx_SweepApproximation::*)() const) static_cast<Standard_Real (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::MaxErrorOnSurf),
             R"#(returns the maximum error in the suface approximation.)#" )
        .def("AverageErrorOnSurf",
             (Standard_Real (Approx_SweepApproximation::*)() const) static_cast<Standard_Real (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::AverageErrorOnSurf),
             R"#(returns the average error in the suface approximation.)#" )
        .def("NbCurves2d",
             (Standard_Integer (Approx_SweepApproximation::*)() const) static_cast<Standard_Integer (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::NbCurves2d),
             R"#(None)#" )
        .def("Curves2dShape",
             (void (Approx_SweepApproximation::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const) static_cast<void (Approx_SweepApproximation::*)( Standard_Integer & ,  Standard_Integer & ,  Standard_Integer &  ) const>(&Approx_SweepApproximation::Curves2dShape),
             R"#(None)#"  , py::arg("Degree"),  py::arg("NbPoles"),  py::arg("NbKnots"))
        .def("Curve2d",
             (void (Approx_SweepApproximation::*)( const Standard_Integer ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Integer> &  ) const) static_cast<void (Approx_SweepApproximation::*)( const Standard_Integer ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Integer> &  ) const>(&Approx_SweepApproximation::Curve2d),
             R"#(None)#"  , py::arg("Index"),  py::arg("TPoles"),  py::arg("TKnots"),  py::arg("TMults"))
        .def("Curves2dDegree",
             (Standard_Integer (Approx_SweepApproximation::*)() const) static_cast<Standard_Integer (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::Curves2dDegree),
             R"#(None)#" )
        .def("Curve2dPoles",
             (const TColgp_Array1OfPnt2d & (Approx_SweepApproximation::*)( const Standard_Integer  ) const) static_cast<const TColgp_Array1OfPnt2d & (Approx_SweepApproximation::*)( const Standard_Integer  ) const>(&Approx_SweepApproximation::Curve2dPoles),
             R"#(None)#"  , py::arg("Index"))
        .def("Curves2dKnots",
             (const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::Curves2dKnots),
             R"#(None)#" )
        .def("Curves2dMults",
             (const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::Curves2dMults),
             R"#(None)#" )
        .def("Max2dError",
             (Standard_Real (Approx_SweepApproximation::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Approx_SweepApproximation::*)( const Standard_Integer  ) const>(&Approx_SweepApproximation::Max2dError),
             R"#(returns the maximum error of the <Index> 2d curve approximation.)#"  , py::arg("Index"))
        .def("Average2dError",
             (Standard_Real (Approx_SweepApproximation::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Approx_SweepApproximation::*)( const Standard_Integer  ) const>(&Approx_SweepApproximation::Average2dError),
             R"#(returns the average error of the <Index> 2d curve approximation.)#"  , py::arg("Index"))
        .def("TolCurveOnSurf",
             (Standard_Real (Approx_SweepApproximation::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Approx_SweepApproximation::*)( const Standard_Integer  ) const>(&Approx_SweepApproximation::TolCurveOnSurf),
             R"#(returns the maximum 3d error of the <Index> 2d curve approximation on the Surface.)#"  , py::arg("Index"))
        .def("Dump",
             (void (Approx_SweepApproximation::*)( std::ostream &  ) const) static_cast<void (Approx_SweepApproximation::*)( std::ostream &  ) const>(&Approx_SweepApproximation::Dump),
             R"#(display information on approximation.)#"  , py::arg("o"))
        .def("IsDone",
             (Standard_Boolean (Approx_SweepApproximation::*)() const) static_cast<Standard_Boolean (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::IsDone),
             R"#(returns if we have an result)#" )
        .def("UDegree",
             (Standard_Integer (Approx_SweepApproximation::*)() const) static_cast<Standard_Integer (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::UDegree),
             R"#(None)#" )
        .def("VDegree",
             (Standard_Integer (Approx_SweepApproximation::*)() const) static_cast<Standard_Integer (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::VDegree),
             R"#(None)#" )
        .def("SurfPoles",
             (const TColgp_Array2OfPnt & (Approx_SweepApproximation::*)() const) static_cast<const TColgp_Array2OfPnt & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfPoles),
             R"#(None)#" )
        .def("SurfWeights",
             (const TColStd_Array2OfReal & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array2OfReal & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfWeights),
             R"#(None)#" )
        .def("SurfUKnots",
             (const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfUKnots),
             R"#(None)#" )
        .def("SurfVKnots",
             (const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfVKnots),
             R"#(None)#" )
        .def("SurfUMults",
             (const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfUMults),
             R"#(None)#" )
        .def("SurfVMults",
             (const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::SurfVMults),
             R"#(None)#" )
        .def("NbCurves2d",
             (Standard_Integer (Approx_SweepApproximation::*)() const) static_cast<Standard_Integer (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::NbCurves2d),
             R"#(None)#" )
        .def("Curves2dDegree",
             (Standard_Integer (Approx_SweepApproximation::*)() const) static_cast<Standard_Integer (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::Curves2dDegree),
             R"#(None)#" )
        .def("Curve2dPoles",
             (const TColgp_Array1OfPnt2d & (Approx_SweepApproximation::*)( const Standard_Integer  ) const) static_cast<const TColgp_Array1OfPnt2d & (Approx_SweepApproximation::*)( const Standard_Integer  ) const>(&Approx_SweepApproximation::Curve2dPoles),
             R"#(None)#"  , py::arg("Index"))
        .def("Curves2dKnots",
             (const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfReal & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::Curves2dKnots),
             R"#(None)#" )
        .def("Curves2dMults",
             (const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const) static_cast<const TColStd_Array1OfInteger & (Approx_SweepApproximation::*)() const>(&Approx_SweepApproximation::Curves2dMults),
             R"#(None)#" )
;


    static_cast<py::class_<Approx_SameParameter ,std::unique_ptr<Approx_SameParameter>  >>(m.attr("Approx_SameParameter"))
        .def(py::init< const opencascade::handle<Geom_Curve> &,const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Geom_Surface> &,const Standard_Real >()  , py::arg("C3D"),  py::arg("C2D"),  py::arg("S"),  py::arg("Tol") )
        .def(py::init< const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Real >()  , py::arg("C3D"),  py::arg("C2D"),  py::arg("S"),  py::arg("Tol") )
        .def(py::init< const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Adaptor2d_HCurve2d> &,const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Real >()  , py::arg("C3D"),  py::arg("C2D"),  py::arg("S"),  py::arg("Tol") )
        .def("IsDone",
             (Standard_Boolean (Approx_SameParameter::*)() const) static_cast<Standard_Boolean (Approx_SameParameter::*)() const>(&Approx_SameParameter::IsDone),
             R"#(None)#" )
        .def("TolReached",
             (Standard_Real (Approx_SameParameter::*)() const) static_cast<Standard_Real (Approx_SameParameter::*)() const>(&Approx_SameParameter::TolReached),
             R"#(None)#" )
        .def("IsSameParameter",
             (Standard_Boolean (Approx_SameParameter::*)() const) static_cast<Standard_Boolean (Approx_SameParameter::*)() const>(&Approx_SameParameter::IsSameParameter),
             R"#(Tells whether the original data had already the same parameter up to the tolerance : in that case nothing is done.)#" )
        .def("Curve2d",
             (opencascade::handle<Geom2d_BSplineCurve> (Approx_SameParameter::*)() const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (Approx_SameParameter::*)() const>(&Approx_SameParameter::Curve2d),
             R"#(Returns the 2D curve that has the same parameter as the 3D curve once evaluated on the surface up to the specified tolerance)#" )
        .def("IsDone",
             (Standard_Boolean (Approx_SameParameter::*)() const) static_cast<Standard_Boolean (Approx_SameParameter::*)() const>(&Approx_SameParameter::IsDone),
             R"#(None)#" )
        .def("TolReached",
             (Standard_Real (Approx_SameParameter::*)() const) static_cast<Standard_Real (Approx_SameParameter::*)() const>(&Approx_SameParameter::TolReached),
             R"#(None)#" )
        .def("IsSameParameter",
             (Standard_Boolean (Approx_SameParameter::*)() const) static_cast<Standard_Boolean (Approx_SameParameter::*)() const>(&Approx_SameParameter::IsSameParameter),
             R"#(Tells whether the original data had already the same parameter up to the tolerance : in that case nothing is done.)#" )
        .def("Curve2d",
             (opencascade::handle<Geom2d_BSplineCurve> (Approx_SameParameter::*)() const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (Approx_SameParameter::*)() const>(&Approx_SameParameter::Curve2d),
             R"#(Returns the 2D curve that has the same parameter as the 3D curve once evaluated on the surface up to the specified tolerance)#" )
;

// functions
// ./opencascade/Approx_ParametrizationType.hxx
// ./opencascade/Approx_Array1OfGTrsf2d.hxx
// ./opencascade/Approx_HArray1OfAdHSurface.hxx
// ./opencascade/Approx_CurvlinFunc.hxx
// ./opencascade/Approx_CurvilinearParameter.hxx
// ./opencascade/Approx_HArray1OfGTrsf2d.hxx
// ./opencascade/Approx_Status.hxx
// ./opencascade/Approx_MCurvesToBSpCurve.hxx
// ./opencascade/Approx_SequenceOfHArray1OfReal.hxx
// ./opencascade/Approx_Array1OfAdHSurface.hxx
// ./opencascade/Approx_Curve3d.hxx
// ./opencascade/Approx_Curve2d.hxx
// ./opencascade/Approx_SameParameter.hxx
// ./opencascade/Approx_FitAndDivide2d.hxx
// ./opencascade/Approx_FitAndDivide.hxx
// ./opencascade/Approx_CurveOnSurface.hxx
// ./opencascade/Approx_SweepApproximation.hxx
// ./opencascade/Approx_SweepFunction.hxx

// operators

// register typdefs
// ./opencascade/Approx_ParametrizationType.hxx
// ./opencascade/Approx_Array1OfGTrsf2d.hxx
    register_template_NCollection_Array1<gp_GTrsf2d>(m,"Approx_Array1OfGTrsf2d");  
// ./opencascade/Approx_HArray1OfAdHSurface.hxx
// ./opencascade/Approx_CurvlinFunc.hxx
// ./opencascade/Approx_CurvilinearParameter.hxx
// ./opencascade/Approx_HArray1OfGTrsf2d.hxx
// ./opencascade/Approx_Status.hxx
// ./opencascade/Approx_MCurvesToBSpCurve.hxx
// ./opencascade/Approx_SequenceOfHArray1OfReal.hxx
    register_template_NCollection_Sequence<opencascade::handle<TColStd_HArray1OfReal> >(m,"Approx_SequenceOfHArray1OfReal");  
// ./opencascade/Approx_Array1OfAdHSurface.hxx
    register_template_NCollection_Array1<opencascade::handle<Adaptor3d_HSurface> >(m,"Approx_Array1OfAdHSurface");  
// ./opencascade/Approx_Curve3d.hxx
// ./opencascade/Approx_Curve2d.hxx
// ./opencascade/Approx_SameParameter.hxx
// ./opencascade/Approx_FitAndDivide2d.hxx
// ./opencascade/Approx_FitAndDivide.hxx
// ./opencascade/Approx_CurveOnSurface.hxx
// ./opencascade/Approx_SweepApproximation.hxx
// ./opencascade/Approx_SweepFunction.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

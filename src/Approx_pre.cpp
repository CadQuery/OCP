
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Geom2d_BSplineCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_ConstructionError.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Standard_NotImplemented.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Approx_SweepFunction.hxx>
#include <AdvApprox_Cutting.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>

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
// ./opencascade/Approx_Array1OfAdHSurface.hxx
#include "NCollection.hxx"
// ./opencascade/Approx_SequenceOfHArray1OfReal.hxx
#include "NCollection.hxx"
// ./opencascade/Approx_Array1OfGTrsf2d.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Approx_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Approx", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Approx_Status>(m, "Approx_Status",R"#(None)#")
        .value("Approx_PointsAdded",Approx_Status::Approx_PointsAdded)
        .value("Approx_NoPointsAdded",Approx_Status::Approx_NoPointsAdded)
        .value("Approx_NoApproximation",Approx_Status::Approx_NoApproximation).export_values();
    py::enum_<Approx_ParametrizationType>(m, "Approx_ParametrizationType",R"#(None)#")
        .value("Approx_ChordLength",Approx_ParametrizationType::Approx_ChordLength)
        .value("Approx_Centripetal",Approx_ParametrizationType::Approx_Centripetal)
        .value("Approx_IsoParametric",Approx_ParametrizationType::Approx_IsoParametric).export_values();

//Python trampoline classes
    class Py_Approx_SweepFunction : public Approx_SweepFunction{
    public:
        using Approx_SweepFunction::Approx_SweepFunction;
        
        
        // public pure virtual
        Standard_Boolean D0(const Standard_Real Param,const Standard_Real First,const Standard_Real Last,NCollection_Array1<gp_Pnt> & Poles,NCollection_Array1<gp_Pnt2d> & Poles2d,NCollection_Array1<Standard_Real> & Weigths) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Approx_SweepFunction,D0,Param,First,Last,Poles,Poles2d,Weigths) };
        Standard_Integer Nb2dCurves() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Approx_SweepFunction,Nb2dCurves,) };
        void Knots(NCollection_Array1<Standard_Real> & TKnots) const  override { PYBIND11_OVERLOAD_PURE(void,Approx_SweepFunction,Knots,TKnots) };
        void Mults(NCollection_Array1<Standard_Integer> & TMults) const  override { PYBIND11_OVERLOAD_PURE(void,Approx_SweepFunction,Mults,TMults) };
        Standard_Boolean IsRational() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Approx_SweepFunction,IsRational,) };
        Standard_Integer NbIntervals(const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Approx_SweepFunction,NbIntervals,S) };
        void Intervals(NCollection_Array1<Standard_Real> & T,const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(void,Approx_SweepFunction,Intervals,T,S) };
        void SetInterval(const Standard_Real First,const Standard_Real Last) override { PYBIND11_OVERLOAD_PURE(void,Approx_SweepFunction,SetInterval,First,Last) };
        void GetTolerance(const Standard_Real BoundTol,const Standard_Real SurfTol,const Standard_Real AngleTol,NCollection_Array1<Standard_Real> & Tol3d) const  override { PYBIND11_OVERLOAD_PURE(void,Approx_SweepFunction,GetTolerance,BoundTol,SurfTol,AngleTol,Tol3d) };
        void SetTolerance(const Standard_Real Tol3d,const Standard_Real Tol2d) override { PYBIND11_OVERLOAD_PURE(void,Approx_SweepFunction,SetTolerance,Tol3d,Tol2d) };
        void SectionShape(Standard_Integer & NbPoles,Standard_Integer & NbKnots,Standard_Integer & Degree) const  override { PYBIND11_OVERLOAD_PURE(void,Approx_SweepFunction,SectionShape,NbPoles,NbKnots,Degree) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// pre-register typdefs
    preregister_template_NCollection_Array1<opencascade::handle<Adaptor3d_HSurface> >(m,"Approx_Array1OfAdHSurface");  
    preregister_template_NCollection_Sequence<opencascade::handle<TColStd_HArray1OfReal> >(m,"Approx_SequenceOfHArray1OfReal");  
    preregister_template_NCollection_Array1<gp_GTrsf2d>(m,"Approx_Array1OfGTrsf2d");  

// classes forward declarations only
    py::class_<Approx_Curve2d , shared_ptr<Approx_Curve2d>  >(m,"Approx_Curve2d",R"#(Makes an approximation for HCurve2d from Adaptor3d)#");
    py::class_<Approx_Curve3d , shared_ptr<Approx_Curve3d>  >(m,"Approx_Curve3d",R"#(None)#");
    py::class_<Approx_CurveOnSurface , shared_ptr<Approx_CurveOnSurface>  >(m,"Approx_CurveOnSurface",R"#(Approximation of curve on surface)#");
    py::class_<Approx_CurvilinearParameter , shared_ptr<Approx_CurvilinearParameter>  >(m,"Approx_CurvilinearParameter",R"#(Approximation of a Curve to make its parameter be its curvilinear abscissa If the curve is a curve on a surface S, C2D is the corresponding Pcurve, we considere the curve is given by its representation S(C2D(u)) If the curve is a curve on 2 surfaces S1 and S2 and C2D1 C2D2 are the two corresponding Pcurve, we considere the curve is given by its representation 1/2(S1(C2D1(u) + S2 (C2D2(u))))#");
    py::class_<Approx_CurvlinFunc ,opencascade::handle<Approx_CurvlinFunc>  , Standard_Transient >(m,"Approx_CurvlinFunc",R"#(defines an abstract curve with curvilinear parametrizationdefines an abstract curve with curvilinear parametrizationdefines an abstract curve with curvilinear parametrization)#");
    py::class_<Approx_FitAndDivide , shared_ptr<Approx_FitAndDivide>  >(m,"Approx_FitAndDivide",R"#(None)#");
    py::class_<Approx_FitAndDivide2d , shared_ptr<Approx_FitAndDivide2d>  >(m,"Approx_FitAndDivide2d",R"#(None)#");
    py::class_<Approx_HArray1OfAdHSurface ,opencascade::handle<Approx_HArray1OfAdHSurface>  , Approx_Array1OfAdHSurface , Standard_Transient >(m,"Approx_HArray1OfAdHSurface",R"#()#");
    py::class_<Approx_HArray1OfGTrsf2d ,opencascade::handle<Approx_HArray1OfGTrsf2d>  , Approx_Array1OfGTrsf2d , Standard_Transient >(m,"Approx_HArray1OfGTrsf2d",R"#()#");
    py::class_<Approx_MCurvesToBSpCurve , shared_ptr<Approx_MCurvesToBSpCurve>  >(m,"Approx_MCurvesToBSpCurve",R"#(None)#");
    py::class_<Approx_SameParameter , shared_ptr<Approx_SameParameter>  >(m,"Approx_SameParameter",R"#(Approximation of a PCurve on a surface to make its parameter be the same that the parameter of a given 3d reference curve.)#");
    py::class_<Approx_SweepApproximation , shared_ptr<Approx_SweepApproximation>  >(m,"Approx_SweepApproximation",R"#(Approximation of an Surface S(u,v) (and eventually associate 2d Curves) defined by section's law.)#");
    py::class_<Approx_SweepFunction ,opencascade::handle<Approx_SweepFunction> ,Py_Approx_SweepFunction , Standard_Transient >(m,"Approx_SweepFunction",R"#(defined the function used by SweepApproximation to perform sweeping application.defined the function used by SweepApproximation to perform sweeping application.defined the function used by SweepApproximation to perform sweeping application.)#");

};

// user-defined post-inclusion per module

// user-defined post

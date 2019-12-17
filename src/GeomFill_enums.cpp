
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Law_Function.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomFill_Frenet.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Geom_Curve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <math_Matrix.hxx>
#include <gp_Vec.hxx>
#include <GeomFill_Tensor.hxx>
#include <Geom_Curve.hxx>
#include <Law_Function.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <GeomFill_SectionGenerator.hxx>
#include <GeomFill_Line.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Geom_Curve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <GeomFill_Frenet.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Approx_CurvlinFunc.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomFill_Frenet.hxx>
#include <Law_Function.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NotImplemented.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_ConstructionError.hxx>
#include <gp_Vec.hxx>
#include <GeomFill_TrihedronLaw.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomFill_SweepSectionGenerator.hxx>
#include <GeomFill_Line.hxx>
#include <GeomFill_LocationLaw.hxx>
#include <GeomFill_SectionLaw.hxx>
#include <Geom_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_ConstructionError.hxx>
#include <GeomFill_CoonsAlgPatch.hxx>
#include <GeomFill_TgtField.hxx>
#include <Geom_BSplineSurface.hxx>
#include <GeomFill_Boundary.hxx>
#include <GeomFill_BoundWithSurf.hxx>
#include <GeomFill_Frenet.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Law_Function.hxx>
#include <Standard_NotImplemented.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Geom_Surface.hxx>
#include <GeomFill_LocationLaw.hxx>
#include <GeomFill_SectionLaw.hxx>
#include <Standard_ConstructionError.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Dir.hxx>
#include <Geom_BezierSurface.hxx>
#include <Standard_ConstructionError.hxx>
#include <Geom_BezierCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <GeomFill_LocationLaw.hxx>
#include <Standard_NotImplemented.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_Curve.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Standard_ConstructionError.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomFill_SectionLaw.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <gp_Pnt.hxx>
#include <math_Matrix.hxx>
#include <gp_Vec.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <GeomFill_Filling.hxx>
#include <GeomFill_Stretch.hxx>
#include <GeomFill_Coons.hxx>
#include <GeomFill_Curved.hxx>
#include <GeomFill_BezierCurves.hxx>
#include <GeomFill_BSplineCurves.hxx>
#include <GeomFill_Profiler.hxx>
#include <GeomFill_SectionGenerator.hxx>
#include <GeomFill_Line.hxx>
#include <GeomFill_AppSurf.hxx>
#include <GeomFill_SweepSectionGenerator.hxx>
#include <GeomFill_AppSweep.hxx>
#include <GeomFill_Generator.hxx>
#include <GeomFill_Pipe.hxx>
#include <GeomFill_Tensor.hxx>
#include <GeomFill_ConstrainedFilling.hxx>
#include <GeomFill_Boundary.hxx>
#include <GeomFill_DegeneratedBound.hxx>
#include <GeomFill_SimpleBound.hxx>
#include <GeomFill_BoundWithSurf.hxx>
#include <GeomFill_CoonsAlgPatch.hxx>
#include <GeomFill_TgtField.hxx>
#include <GeomFill_TgtOnCoons.hxx>
#include <GeomFill_CornerState.hxx>
#include <GeomFill_CircularBlendFunc.hxx>
#include <GeomFill_SweepFunction.hxx>
#include <GeomFill_LocFunction.hxx>
#include <GeomFill_PolynomialConvertor.hxx>
#include <GeomFill_QuasiAngularConvertor.hxx>
#include <GeomFill_SnglrFunc.hxx>
#include <GeomFill_FunctionDraft.hxx>
#include <GeomFill_PlanFunc.hxx>
#include <GeomFill_FunctionGuide.hxx>
#include <GeomFill_SectionLaw.hxx>
#include <GeomFill_UniformSection.hxx>
#include <GeomFill_EvolvedSection.hxx>
#include <GeomFill_NSections.hxx>
#include <GeomFill_LocationLaw.hxx>
#include <GeomFill_CurveAndTrihedron.hxx>
#include <GeomFill_LocationDraft.hxx>
#include <GeomFill_LocationGuide.hxx>
#include <GeomFill_TrihedronLaw.hxx>
#include <GeomFill_Fixed.hxx>
#include <GeomFill_Frenet.hxx>
#include <GeomFill_CorrectedFrenet.hxx>
#include <GeomFill_DiscreteTrihedron.hxx>
#include <GeomFill_ConstantBiNormal.hxx>
#include <GeomFill_Darboux.hxx>
#include <GeomFill_DraftTrihedron.hxx>
#include <GeomFill_TrihedronWithGuide.hxx>
#include <GeomFill_GuideTrihedronAC.hxx>
#include <GeomFill_GuideTrihedronPlan.hxx>
#include <GeomFill_Sweep.hxx>
#include <GeomFill_SectionPlacement.hxx>
#include <GeomFill_DraftTrihedron.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NotImplemented.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NotImplemented.hxx>
#include <gp_Vec.hxx>
#include <math_Matrix.hxx>
#include <GeomFill_Boundary.hxx>
#include <Law_Function.hxx>
#include <GeomFill_CoonsAlgPatch.hxx>
#include <gp_Vec.hxx>
#include <GeomFill_LocationLaw.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomFill_TrihedronWithGuide.hxx>
#include <GeomFill_SectionLaw.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NotImplemented.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Law_BSpline.hxx>
#include <gp_Vec.hxx>
#include <Geom_BSplineSurface.hxx>
#include <GeomFill_LocationLaw.hxx>
#include <GeomFill_SectionLaw.hxx>

// module includes
#include <GeomFill.hxx>
#include <GeomFill_ApproxStyle.hxx>
#include <GeomFill_AppSurf.hxx>
#include <GeomFill_AppSweep.hxx>
#include <GeomFill_Array1OfLocationLaw.hxx>
#include <GeomFill_Array1OfSectionLaw.hxx>
#include <GeomFill_BezierCurves.hxx>
#include <GeomFill_Boundary.hxx>
#include <GeomFill_BoundWithSurf.hxx>
#include <GeomFill_BSplineCurves.hxx>
#include <GeomFill_CircularBlendFunc.hxx>
#include <GeomFill_ConstantBiNormal.hxx>
#include <GeomFill_ConstrainedFilling.hxx>
#include <GeomFill_Coons.hxx>
#include <GeomFill_CoonsAlgPatch.hxx>
#include <GeomFill_CornerState.hxx>
#include <GeomFill_CorrectedFrenet.hxx>
#include <GeomFill_CurveAndTrihedron.hxx>
#include <GeomFill_Curved.hxx>
#include <GeomFill_Darboux.hxx>
#include <GeomFill_DegeneratedBound.hxx>
#include <GeomFill_DiscreteTrihedron.hxx>
#include <GeomFill_DraftTrihedron.hxx>
#include <GeomFill_EvolvedSection.hxx>
#include <GeomFill_Filling.hxx>
#include <GeomFill_FillingStyle.hxx>
#include <GeomFill_Fixed.hxx>
#include <GeomFill_Frenet.hxx>
#include <GeomFill_FunctionDraft.hxx>
#include <GeomFill_FunctionGuide.hxx>
#include <GeomFill_Generator.hxx>
#include <GeomFill_GuideTrihedronAC.hxx>
#include <GeomFill_GuideTrihedronPlan.hxx>
#include <GeomFill_HArray1OfLocationLaw.hxx>
#include <GeomFill_HArray1OfSectionLaw.hxx>
#include <GeomFill_HSequenceOfAx2.hxx>
#include <GeomFill_Line.hxx>
#include <GeomFill_LocationDraft.hxx>
#include <GeomFill_LocationGuide.hxx>
#include <GeomFill_LocationLaw.hxx>
#include <GeomFill_LocFunction.hxx>
#include <GeomFill_NSections.hxx>
#include <GeomFill_Pipe.hxx>
#include <GeomFill_PipeError.hxx>
#include <GeomFill_PlanFunc.hxx>
#include <GeomFill_PolynomialConvertor.hxx>
#include <GeomFill_Profiler.hxx>
#include <GeomFill_QuasiAngularConvertor.hxx>
#include <GeomFill_SectionGenerator.hxx>
#include <GeomFill_SectionLaw.hxx>
#include <GeomFill_SectionPlacement.hxx>
#include <GeomFill_SequenceOfAx2.hxx>
#include <GeomFill_SequenceOfTrsf.hxx>
#include <GeomFill_SimpleBound.hxx>
#include <GeomFill_SnglrFunc.hxx>
#include <GeomFill_Stretch.hxx>
#include <GeomFill_Sweep.hxx>
#include <GeomFill_SweepFunction.hxx>
#include <GeomFill_SweepSectionGenerator.hxx>
#include <GeomFill_Tensor.hxx>
#include <GeomFill_TgtField.hxx>
#include <GeomFill_TgtOnCoons.hxx>
#include <GeomFill_Trihedron.hxx>
#include <GeomFill_TrihedronLaw.hxx>
#include <GeomFill_TrihedronWithGuide.hxx>
#include <GeomFill_UniformSection.hxx>

// template related includes
// ./opencascade/GeomFill_Array1OfLocationLaw.hxx
#include "NCollection.hxx"
// ./opencascade/GeomFill_Array1OfSectionLaw.hxx
#include "NCollection.hxx"
// ./opencascade/GeomFill_SequenceOfAx2.hxx
#include "NCollection.hxx"
// ./opencascade/GeomFill_SequenceOfTrsf.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomFill_enums(py::module &main_module) {


py::module m = main_module.def_submodule("GeomFill", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<GeomFill_PipeError>(m, "GeomFill_PipeError",R"#(None)#")
        .value("GeomFill_PipeOk",GeomFill_PipeError::GeomFill_PipeOk)
        .value("GeomFill_PipeNotOk",GeomFill_PipeError::GeomFill_PipeNotOk)
        .value("GeomFill_PlaneNotIntersectGuide",GeomFill_PipeError::GeomFill_PlaneNotIntersectGuide)
        .value("GeomFill_ImpossibleContact",GeomFill_PipeError::GeomFill_ImpossibleContact).export_values();
    py::enum_<GeomFill_Trihedron>(m, "GeomFill_Trihedron",R"#(None)#")
        .value("GeomFill_IsCorrectedFrenet",GeomFill_Trihedron::GeomFill_IsCorrectedFrenet)
        .value("GeomFill_IsFixed",GeomFill_Trihedron::GeomFill_IsFixed)
        .value("GeomFill_IsFrenet",GeomFill_Trihedron::GeomFill_IsFrenet)
        .value("GeomFill_IsConstantNormal",GeomFill_Trihedron::GeomFill_IsConstantNormal)
        .value("GeomFill_IsDarboux",GeomFill_Trihedron::GeomFill_IsDarboux)
        .value("GeomFill_IsGuideAC",GeomFill_Trihedron::GeomFill_IsGuideAC)
        .value("GeomFill_IsGuidePlan",GeomFill_Trihedron::GeomFill_IsGuidePlan)
        .value("GeomFill_IsGuideACWithContact",GeomFill_Trihedron::GeomFill_IsGuideACWithContact)
        .value("GeomFill_IsGuidePlanWithContact",GeomFill_Trihedron::GeomFill_IsGuidePlanWithContact)
        .value("GeomFill_IsDiscreteTrihedron",GeomFill_Trihedron::GeomFill_IsDiscreteTrihedron).export_values();
    py::enum_<GeomFill_FillingStyle>(m, "GeomFill_FillingStyle",R"#(Defines the three filling styles used in this package - GeomFill_Stretch - the style with the flattest patches - GeomFill_Coons - a rounded style of patch with less depth than those of Curved - GeomFill_Curved - the style with the most rounded patches.)#")
        .value("GeomFill_StretchStyle",GeomFill_FillingStyle::GeomFill_StretchStyle)
        .value("GeomFill_CoonsStyle",GeomFill_FillingStyle::GeomFill_CoonsStyle)
        .value("GeomFill_CurvedStyle",GeomFill_FillingStyle::GeomFill_CurvedStyle).export_values();
    py::enum_<GeomFill_ApproxStyle>(m, "GeomFill_ApproxStyle",R"#(None)#")
        .value("GeomFill_Section",GeomFill_ApproxStyle::GeomFill_Section)
        .value("GeomFill_Location",GeomFill_ApproxStyle::GeomFill_Location).export_values();

//Python trampoline classes
    class Py_GeomFill_SectionLaw : public GeomFill_SectionLaw{
    public:
        using GeomFill_SectionLaw::GeomFill_SectionLaw;
        
        // public pure virtual
        Standard_Boolean D0(const Standard_Real Param,NCollection_Array1<gp_Pnt> & Poles,NCollection_Array1<Standard_Real> & Weigths) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,GeomFill_SectionLaw,D0,Param,Poles,Weigths) };
        void SectionShape(Standard_Integer & NbPoles,Standard_Integer & NbKnots,Standard_Integer & Degree) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_SectionLaw,SectionShape,NbPoles,NbKnots,Degree) };
        void Knots(NCollection_Array1<Standard_Real> & TKnots) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_SectionLaw,Knots,TKnots) };
        void Mults(NCollection_Array1<Standard_Integer> & TMults) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_SectionLaw,Mults,TMults) };
        Standard_Boolean IsRational() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,GeomFill_SectionLaw,IsRational,) };
        Standard_Boolean IsUPeriodic() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,GeomFill_SectionLaw,IsUPeriodic,) };
        Standard_Boolean IsVPeriodic() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,GeomFill_SectionLaw,IsVPeriodic,) };
        Standard_Integer NbIntervals(const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,GeomFill_SectionLaw,NbIntervals,S) };
        void Intervals(NCollection_Array1<Standard_Real> & T,const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_SectionLaw,Intervals,T,S) };
        void SetInterval(const Standard_Real First,const Standard_Real Last) override { PYBIND11_OVERLOAD_PURE(void,GeomFill_SectionLaw,SetInterval,First,Last) };
        void GetInterval(Standard_Real & First,Standard_Real & Last) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_SectionLaw,GetInterval,First,Last) };
        void GetDomain(Standard_Real & First,Standard_Real & Last) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_SectionLaw,GetDomain,First,Last) };
        void GetTolerance(const Standard_Real BoundTol,const Standard_Real SurfTol,const Standard_Real AngleTol,NCollection_Array1<Standard_Real> & Tol3d) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_SectionLaw,GetTolerance,BoundTol,SurfTol,AngleTol,Tol3d) };
        Standard_Real MaximalSection() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,GeomFill_SectionLaw,MaximalSection,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_GeomFill_TgtField : public GeomFill_TgtField{
    public:
        using GeomFill_TgtField::GeomFill_TgtField;
        
        // public pure virtual
        gp_Vec Value(const Standard_Real W) const  override { PYBIND11_OVERLOAD_PURE(gp_Vec,GeomFill_TgtField,Value,W) };
        gp_Vec D1(const Standard_Real W) const  override { PYBIND11_OVERLOAD_PURE(gp_Vec,GeomFill_TgtField,D1,W) };
        void D1(const Standard_Real W,gp_Vec & V,gp_Vec & DV) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_TgtField,D1,W,V,DV) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_GeomFill_LocationLaw : public GeomFill_LocationLaw{
    public:
        using GeomFill_LocationLaw::GeomFill_LocationLaw;
        
        // public pure virtual
        void SetCurve(const opencascade::handle<Adaptor3d_HCurve> & C) override { PYBIND11_OVERLOAD_PURE(void,GeomFill_LocationLaw,SetCurve,C) };
        const opencascade::handle<Adaptor3d_HCurve> & GetCurve() const  override { PYBIND11_OVERLOAD_PURE(const opencascade::handle<Adaptor3d_HCurve> &,GeomFill_LocationLaw,GetCurve,) };
        void SetTrsf(const gp_Mat & Transfo) override { PYBIND11_OVERLOAD_PURE(void,GeomFill_LocationLaw,SetTrsf,Transfo) };
        opencascade::handle<GeomFill_LocationLaw> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<GeomFill_LocationLaw>,GeomFill_LocationLaw,Copy,) };
        Standard_Boolean D0(const Standard_Real Param,gp_Mat & M,gp_Vec & V) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,GeomFill_LocationLaw,D0,Param,M,V) };
        Standard_Boolean D0(const Standard_Real Param,gp_Mat & M,gp_Vec & V,NCollection_Array1<gp_Pnt2d> & Poles2d) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,GeomFill_LocationLaw,D0,Param,M,V,Poles2d) };
        Standard_Integer NbIntervals(const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,GeomFill_LocationLaw,NbIntervals,S) };
        void Intervals(NCollection_Array1<Standard_Real> & T,const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_LocationLaw,Intervals,T,S) };
        void SetInterval(const Standard_Real First,const Standard_Real Last) override { PYBIND11_OVERLOAD_PURE(void,GeomFill_LocationLaw,SetInterval,First,Last) };
        void GetInterval(Standard_Real & First,Standard_Real & Last) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_LocationLaw,GetInterval,First,Last) };
        void GetDomain(Standard_Real & First,Standard_Real & Last) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_LocationLaw,GetDomain,First,Last) };
        Standard_Real GetMaximalNorm() override { PYBIND11_OVERLOAD_PURE(Standard_Real,GeomFill_LocationLaw,GetMaximalNorm,) };
        void GetAverageLaw(gp_Mat & AM,gp_Vec & AV) override { PYBIND11_OVERLOAD_PURE(void,GeomFill_LocationLaw,GetAverageLaw,AM,AV) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_GeomFill_Boundary : public GeomFill_Boundary{
    public:
        using GeomFill_Boundary::GeomFill_Boundary;
        
        // public pure virtual
        gp_Pnt Value(const Standard_Real U) const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt,GeomFill_Boundary,Value,U) };
        void D1(const Standard_Real U,gp_Pnt & P,gp_Vec & V) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_Boundary,D1,U,P,V) };
        void Reparametrize(const Standard_Real First,const Standard_Real Last,const Standard_Boolean HasDF,const Standard_Boolean HasDL,const Standard_Real DF,const Standard_Real DL,const Standard_Boolean Rev) override { PYBIND11_OVERLOAD_PURE(void,GeomFill_Boundary,Reparametrize,First,Last,HasDF,HasDL,DF,DL,Rev) };
        void Bounds(Standard_Real & First,Standard_Real & Last) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_Boundary,Bounds,First,Last) };
        Standard_Boolean IsDegenerated() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,GeomFill_Boundary,IsDegenerated,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_GeomFill_TrihedronLaw : public GeomFill_TrihedronLaw{
    public:
        using GeomFill_TrihedronLaw::GeomFill_TrihedronLaw;
        
        // public pure virtual
        opencascade::handle<GeomFill_TrihedronLaw> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<GeomFill_TrihedronLaw>,GeomFill_TrihedronLaw,Copy,) };
        Standard_Boolean D0(const Standard_Real Param,gp_Vec & Tangent,gp_Vec & Normal,gp_Vec & BiNormal) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,GeomFill_TrihedronLaw,D0,Param,Tangent,Normal,BiNormal) };
        Standard_Integer NbIntervals(const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,GeomFill_TrihedronLaw,NbIntervals,S) };
        void Intervals(NCollection_Array1<Standard_Real> & T,const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_TrihedronLaw,Intervals,T,S) };
        void GetAverageLaw(gp_Vec & ATangent,gp_Vec & ANormal,gp_Vec & ABiNormal) override { PYBIND11_OVERLOAD_PURE(void,GeomFill_TrihedronLaw,GetAverageLaw,ATangent,ANormal,ABiNormal) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_GeomFill_TrihedronWithGuide : public GeomFill_TrihedronWithGuide{
    public:
        using GeomFill_TrihedronWithGuide::GeomFill_TrihedronWithGuide;
        
        // public pure virtual
        opencascade::handle<Adaptor3d_HCurve> Guide() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Adaptor3d_HCurve>,GeomFill_TrihedronWithGuide,Guide,) };
        void Origine(const Standard_Real Param1,const Standard_Real Param2) override { PYBIND11_OVERLOAD_PURE(void,GeomFill_TrihedronWithGuide,Origine,Param1,Param2) };
        
        opencascade::handle<GeomFill_TrihedronLaw> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<GeomFill_TrihedronLaw>,GeomFill_TrihedronLaw,Copy,) };
        Standard_Boolean D0(const Standard_Real Param,gp_Vec & Tangent,gp_Vec & Normal,gp_Vec & BiNormal) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,GeomFill_TrihedronLaw,D0,Param,Tangent,Normal,BiNormal) };
        Standard_Integer NbIntervals(const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,GeomFill_TrihedronLaw,NbIntervals,S) };
        void Intervals(NCollection_Array1<Standard_Real> & T,const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_TrihedronLaw,Intervals,T,S) };
        void GetAverageLaw(gp_Vec & ATangent,gp_Vec & ANormal,gp_Vec & ABiNormal) override { PYBIND11_OVERLOAD_PURE(void,GeomFill_TrihedronLaw,GetAverageLaw,ATangent,ANormal,ABiNormal) };
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes forward declarations only
    py::class_<GeomFill_Filling ,std::unique_ptr<GeomFill_Filling>  >(m,"GeomFill_Filling",R"#(Root class for Filling;)#");
    py::class_<GeomFill_Profiler ,std::unique_ptr<GeomFill_Profiler>  >(m,"GeomFill_Profiler",R"#(Evaluation of the common BSplineProfile of a group of curves from Geom. All the curves will have the same degree, the same knot-vector, so the same number of poles.)#");
    py::class_<GeomFill_CircularBlendFunc ,opencascade::handle<GeomFill_CircularBlendFunc>  , Approx_SweepFunction >(m,"GeomFill_CircularBlendFunc",R"#(Circular Blend Function to approximate by SweepApproximation from ApproxCircular Blend Function to approximate by SweepApproximation from ApproxCircular Blend Function to approximate by SweepApproximation from Approx)#");
    py::class_<GeomFill_SweepSectionGenerator ,std::unique_ptr<GeomFill_SweepSectionGenerator>  >(m,"GeomFill_SweepSectionGenerator",R"#(class for instantiation of AppBlend. evaluate the sections of a sweep surface.)#");
    py::class_<GeomFill_HArray1OfSectionLaw ,std::unique_ptr<GeomFill_HArray1OfSectionLaw>  >(m,"GeomFill_HArray1OfSectionLaw",R"#()#");
    py::class_<GeomFill_Stretch ,std::unique_ptr<GeomFill_Stretch>  , GeomFill_Filling >(m,"GeomFill_Stretch",R"#(None)#");
    py::class_<GeomFill_SnglrFunc ,std::unique_ptr<GeomFill_SnglrFunc>  , Adaptor3d_Curve >(m,"GeomFill_SnglrFunc",R"#(to represent function C'(t)^C''(t))#");
    py::class_<GeomFill_Coons ,std::unique_ptr<GeomFill_Coons>  , GeomFill_Filling >(m,"GeomFill_Coons",R"#(None)#");
    py::class_<GeomFill_AppSweep ,std::unique_ptr<GeomFill_AppSweep>  , AppBlend_Approx >(m,"GeomFill_AppSweep",R"#(Approximate a sweep surface passing by all the curves described in the SweepSectionGenerator.)#");
    py::class_<GeomFill_ConstrainedFilling ,std::unique_ptr<GeomFill_ConstrainedFilling>  >(m,"GeomFill_ConstrainedFilling",R"#(An algorithm for constructing a BSpline surface filled from a series of boundaries which serve as path constraints and optionally, as tangency constraints. The algorithm accepts three or four curves as the boundaries of the target surface. The only FillingStyle used is Coons. A ConstrainedFilling object provides a framework for: - defining the boundaries of the surface - implementing the construction algorithm - consulting the result. Warning This surface filling algorithm is specifically designed to be used in connection with fillets. Satisfactory results cannot be guaranteed for other uses.)#");
    py::class_<GeomFill_HArray1OfLocationLaw ,std::unique_ptr<GeomFill_HArray1OfLocationLaw>  >(m,"GeomFill_HArray1OfLocationLaw",R"#()#");
    py::class_<GeomFill_Pipe ,std::unique_ptr<GeomFill_Pipe>  >(m,"GeomFill_Pipe",R"#(Describes functions to construct pipes. A pipe is built by sweeping a curve (the section) along another curve (the path). The Pipe class provides the following types of construction: - pipes with a circular section of constant radius, - pipes with a constant section, - pipes with a section evolving between two given curves. All standard specific cases are detected in order to build, where required, a plane, cylinder, cone, sphere, torus, surface of linear extrusion or surface of revolution. Generally speaking, the result is a BSpline surface (NURBS). A Pipe object provides a framework for: - defining the pipe to be built, - implementing the construction algorithm, and - consulting the resulting surface. There are several methods to instantiate a Pipe: 1) give a path and a radius : the section is a circle. This location is the first point of the path, and this direction is the first derivate (calculate at the first point ) of the path.)#");
    py::class_<GeomFill_PolynomialConvertor ,std::unique_ptr<GeomFill_PolynomialConvertor>  >(m,"GeomFill_PolynomialConvertor",R"#(To convert circular section in polynome)#");
    py::class_<GeomFill_SectionLaw ,opencascade::handle<GeomFill_SectionLaw> ,Py_GeomFill_SectionLaw , Standard_Transient >(m,"GeomFill_SectionLaw",R"#(To define section law in sweepingTo define section law in sweepingTo define section law in sweeping)#");
    py::class_<GeomFill_Line ,opencascade::handle<GeomFill_Line>  , Standard_Transient >(m,"GeomFill_Line",R"#(class for instantiation of AppBlendclass for instantiation of AppBlendclass for instantiation of AppBlend)#");
    py::class_<GeomFill_Curved ,std::unique_ptr<GeomFill_Curved>  , GeomFill_Filling >(m,"GeomFill_Curved",R"#(None)#");
    py::class_<GeomFill_FunctionGuide ,std::unique_ptr<GeomFill_FunctionGuide>  , math_FunctionSetWithDerivatives >(m,"GeomFill_FunctionGuide",R"#(None)#");
    py::class_<GeomFill_CornerState ,std::unique_ptr<GeomFill_CornerState>  >(m,"GeomFill_CornerState",R"#(Class (should be a structure) storing the informations about continuity, normals parallelism, coons conditions and bounds tangents angle on the corner of contour to be filled.)#");
    py::class_<GeomFill_Tensor ,std::unique_ptr<GeomFill_Tensor>  >(m,"GeomFill_Tensor",R"#(used to store the "gradient of gradient")#");
    py::class_<GeomFill_SectionGenerator ,std::unique_ptr<GeomFill_SectionGenerator>  , GeomFill_Profiler >(m,"GeomFill_SectionGenerator",R"#(gives the functions needed for instantiation from AppSurf in AppBlend. Allow to evaluate a surface passing by all the curves if the Profiler.)#");
    py::class_<GeomFill_SectionPlacement ,std::unique_ptr<GeomFill_SectionPlacement>  >(m,"GeomFill_SectionPlacement",R"#(To place section in sweep Function)#");
    py::class_<GeomFill_Generator ,std::unique_ptr<GeomFill_Generator>  , GeomFill_Profiler >(m,"GeomFill_Generator",R"#(Create a surface using generating lines. Inherits profiler. The surface will be a BSplineSurface passing by all the curves described in the generator. The VDegree of the resulting surface is 1.)#");
    py::class_<GeomFill_TgtField ,opencascade::handle<GeomFill_TgtField> ,Py_GeomFill_TgtField , Standard_Transient >(m,"GeomFill_TgtField",R"#(Root class defining the methods we need to make an algorithmic tangents field.Root class defining the methods we need to make an algorithmic tangents field.Root class defining the methods we need to make an algorithmic tangents field.)#");
    py::class_<GeomFill_SweepFunction ,opencascade::handle<GeomFill_SweepFunction>  , Approx_SweepFunction >(m,"GeomFill_SweepFunction",R"#(Function to approximate by SweepApproximation from Approx. To bulid general sweep Surface.Function to approximate by SweepApproximation from Approx. To bulid general sweep Surface.Function to approximate by SweepApproximation from Approx. To bulid general sweep Surface.)#");
    py::class_<GeomFill_FunctionDraft ,std::unique_ptr<GeomFill_FunctionDraft>  , math_FunctionSetWithDerivatives >(m,"GeomFill_FunctionDraft",R"#(None)#");
    py::class_<GeomFill_AppSurf ,std::unique_ptr<GeomFill_AppSurf>  , AppBlend_Approx >(m,"GeomFill_AppSurf",R"#(Approximate a BSplineSurface passing by all the curves described in the SectionGenerator)#");
    py::class_<GeomFill_PlanFunc ,std::unique_ptr<GeomFill_PlanFunc>  , math_FunctionWithDerivative >(m,"GeomFill_PlanFunc",R"#(None)#");
    py::class_<GeomFill_Sweep ,std::unique_ptr<GeomFill_Sweep>  >(m,"GeomFill_Sweep",R"#(Geometrical Sweep Algorithm)#");
    py::class_<GeomFill_LocationLaw ,opencascade::handle<GeomFill_LocationLaw> ,Py_GeomFill_LocationLaw , Standard_Transient >(m,"GeomFill_LocationLaw",R"#(To define location law in Sweeping location is -- defined by an Matrix M and an Vector V, and transform an point P in MP+V.To define location law in Sweeping location is -- defined by an Matrix M and an Vector V, and transform an point P in MP+V.To define location law in Sweeping location is -- defined by an Matrix M and an Vector V, and transform an point P in MP+V.)#");
    py::class_<GeomFill_LocFunction ,std::unique_ptr<GeomFill_LocFunction>  >(m,"GeomFill_LocFunction",R"#(None)#");
    py::class_<GeomFill_Boundary ,opencascade::handle<GeomFill_Boundary> ,Py_GeomFill_Boundary , Standard_Transient >(m,"GeomFill_Boundary",R"#(Root class to define a boundary which will form part of a contour around a gap requiring filling. Any new type of constrained boundary must inherit this class. The GeomFill package provides two classes to define constrained boundaries: - GeomFill_SimpleBound to define an unattached boundary - GeomFill_BoundWithSurf to define a boundary attached to a surface. These objects are used to define the boundaries for a GeomFill_ConstrainedFilling framework.Root class to define a boundary which will form part of a contour around a gap requiring filling. Any new type of constrained boundary must inherit this class. The GeomFill package provides two classes to define constrained boundaries: - GeomFill_SimpleBound to define an unattached boundary - GeomFill_BoundWithSurf to define a boundary attached to a surface. These objects are used to define the boundaries for a GeomFill_ConstrainedFilling framework.Root class to define a boundary which will form part of a contour around a gap requiring filling. Any new type of constrained boundary must inherit this class. The GeomFill package provides two classes to define constrained boundaries: - GeomFill_SimpleBound to define an unattached boundary - GeomFill_BoundWithSurf to define a boundary attached to a surface. These objects are used to define the boundaries for a GeomFill_ConstrainedFilling framework.)#");
    py::class_<GeomFill ,std::unique_ptr<GeomFill>  >(m,"GeomFill",R"#(Tools and Data to filling Surface and Sweep Surfaces)#");
    py::class_<GeomFill_TrihedronLaw ,opencascade::handle<GeomFill_TrihedronLaw> ,Py_GeomFill_TrihedronLaw , Standard_Transient >(m,"GeomFill_TrihedronLaw",R"#(To define Trihedron along one CurveTo define Trihedron along one CurveTo define Trihedron along one Curve)#");
    py::class_<GeomFill_HSequenceOfAx2 ,std::unique_ptr<GeomFill_HSequenceOfAx2>  >(m,"GeomFill_HSequenceOfAx2",R"#()#");
    py::class_<GeomFill_LocationGuide ,opencascade::handle<GeomFill_LocationGuide>  , GeomFill_LocationLaw >(m,"GeomFill_LocationGuide",R"#()#");
    py::class_<GeomFill_NSections ,opencascade::handle<GeomFill_NSections>  , GeomFill_SectionLaw >(m,"GeomFill_NSections",R"#(Define a Section Law by N SectionsDefine a Section Law by N SectionsDefine a Section Law by N Sections)#");
    py::class_<GeomFill_DegeneratedBound ,opencascade::handle<GeomFill_DegeneratedBound>  , GeomFill_Boundary >(m,"GeomFill_DegeneratedBound",R"#(Description of a degenerated boundary (a point). Class defining a degenerated boundary for a constrained filling with a point and no other constraint. Only used to simulate an ordinary bound, may not be usefull and desapear soon.Description of a degenerated boundary (a point). Class defining a degenerated boundary for a constrained filling with a point and no other constraint. Only used to simulate an ordinary bound, may not be usefull and desapear soon.Description of a degenerated boundary (a point). Class defining a degenerated boundary for a constrained filling with a point and no other constraint. Only used to simulate an ordinary bound, may not be usefull and desapear soon.)#");
    py::class_<GeomFill_EvolvedSection ,opencascade::handle<GeomFill_EvolvedSection>  , GeomFill_SectionLaw >(m,"GeomFill_EvolvedSection",R"#(Define an Constant Section LawDefine an Constant Section LawDefine an Constant Section Law)#");
    py::class_<GeomFill_DiscreteTrihedron ,opencascade::handle<GeomFill_DiscreteTrihedron>  , GeomFill_TrihedronLaw >(m,"GeomFill_DiscreteTrihedron",R"#(Defined Discrete Trihedron Law. The requirement for path curve is only G1. The result is C0-continuous surface that can be later approximated to C1.Defined Discrete Trihedron Law. The requirement for path curve is only G1. The result is C0-continuous surface that can be later approximated to C1.Defined Discrete Trihedron Law. The requirement for path curve is only G1. The result is C0-continuous surface that can be later approximated to C1.)#");
    py::class_<GeomFill_CorrectedFrenet ,opencascade::handle<GeomFill_CorrectedFrenet>  , GeomFill_TrihedronLaw >(m,"GeomFill_CorrectedFrenet",R"#(Defined an Corrected Frenet Trihedron Law It is like Frenet with an Torsion's minimizationDefined an Corrected Frenet Trihedron Law It is like Frenet with an Torsion's minimizationDefined an Corrected Frenet Trihedron Law It is like Frenet with an Torsion's minimization)#");
    py::class_<GeomFill_Darboux ,opencascade::handle<GeomFill_Darboux>  , GeomFill_TrihedronLaw >(m,"GeomFill_Darboux",R"#(Defines Darboux case of Frenet Trihedron LawDefines Darboux case of Frenet Trihedron LawDefines Darboux case of Frenet Trihedron Law)#");
    py::class_<GeomFill_ConstantBiNormal ,opencascade::handle<GeomFill_ConstantBiNormal>  , GeomFill_TrihedronLaw >(m,"GeomFill_ConstantBiNormal",R"#(Defined an Trihedron Law where the BiNormal, is fixedDefined an Trihedron Law where the BiNormal, is fixedDefined an Trihedron Law where the BiNormal, is fixed)#");
    py::class_<GeomFill_BezierCurves ,std::unique_ptr<GeomFill_BezierCurves>  >(m,"GeomFill_BezierCurves",R"#(This class provides an algorithm for constructing a Bezier surface filled from contiguous Bezier curves which form its boundaries. The algorithm accepts two, three or four Bezier curves as the boundaries of the target surface. A range of filling styles - more or less rounded, more or less flat - is available. A BezierCurves object provides a framework for: - defining the boundaries, and the filling style of the surface - implementing the construction algorithm - consulting the result. Warning Some problems may show up with rational curves.)#");
    py::class_<GeomFill_QuasiAngularConvertor ,std::unique_ptr<GeomFill_QuasiAngularConvertor>  >(m,"GeomFill_QuasiAngularConvertor",R"#(To convert circular section in QuasiAngular Bezier form)#");
    py::class_<GeomFill_LocationDraft ,opencascade::handle<GeomFill_LocationDraft>  , GeomFill_LocationLaw >(m,"GeomFill_LocationDraft",R"#()#");
    py::class_<GeomFill_TgtOnCoons ,opencascade::handle<GeomFill_TgtOnCoons>  , GeomFill_TgtField >(m,"GeomFill_TgtOnCoons",R"#(Defines an algorithmic tangents field on a boundary of a CoonsAlgPatch.Defines an algorithmic tangents field on a boundary of a CoonsAlgPatch.Defines an algorithmic tangents field on a boundary of a CoonsAlgPatch.)#");
    py::class_<GeomFill_SimpleBound ,opencascade::handle<GeomFill_SimpleBound>  , GeomFill_Boundary >(m,"GeomFill_SimpleBound",R"#(Defines a 3d curve as a boundary for a GeomFill_ConstrainedFilling algorithm. This curve is unattached to an existing surface.D Contains fields to allow a reparametrization of curve.Defines a 3d curve as a boundary for a GeomFill_ConstrainedFilling algorithm. This curve is unattached to an existing surface.D Contains fields to allow a reparametrization of curve.Defines a 3d curve as a boundary for a GeomFill_ConstrainedFilling algorithm. This curve is unattached to an existing surface.D Contains fields to allow a reparametrization of curve.)#");
    py::class_<GeomFill_UniformSection ,opencascade::handle<GeomFill_UniformSection>  , GeomFill_SectionLaw >(m,"GeomFill_UniformSection",R"#(Define an Constant Section LawDefine an Constant Section LawDefine an Constant Section Law)#");
    py::class_<GeomFill_TrihedronWithGuide ,opencascade::handle<GeomFill_TrihedronWithGuide> ,Py_GeomFill_TrihedronWithGuide , GeomFill_TrihedronLaw >(m,"GeomFill_TrihedronWithGuide",R"#(To define Trihedron along one Curve with a guideTo define Trihedron along one Curve with a guideTo define Trihedron along one Curve with a guide)#");
    py::class_<GeomFill_BoundWithSurf ,opencascade::handle<GeomFill_BoundWithSurf>  , GeomFill_Boundary >(m,"GeomFill_BoundWithSurf",R"#(Defines a 3d curve as a boundary for a GeomFill_ConstrainedFilling algorithm. This curve is attached to an existing surface. Defines a constrained boundary for filling the computations are done with a CurveOnSurf and a normals field defined by the normalized normal to the surface along the PCurve. Contains fields to allow a reparametrization of curve and normals field.Defines a 3d curve as a boundary for a GeomFill_ConstrainedFilling algorithm. This curve is attached to an existing surface. Defines a constrained boundary for filling the computations are done with a CurveOnSurf and a normals field defined by the normalized normal to the surface along the PCurve. Contains fields to allow a reparametrization of curve and normals field.Defines a 3d curve as a boundary for a GeomFill_ConstrainedFilling algorithm. This curve is attached to an existing surface. Defines a constrained boundary for filling the computations are done with a CurveOnSurf and a normals field defined by the normalized normal to the surface along the PCurve. Contains fields to allow a reparametrization of curve and normals field.)#");
    py::class_<GeomFill_BSplineCurves ,std::unique_ptr<GeomFill_BSplineCurves>  >(m,"GeomFill_BSplineCurves",R"#(An algorithm for constructing a BSpline surface filled from contiguous BSpline curves which form its boundaries. The algorithm accepts two, three or four BSpline curves as the boundaries of the target surface. A range of filling styles - more or less rounded, more or less flat - is available. A BSplineCurves object provides a framework for: - defining the boundaries, and the filling style of the surface - implementing the construction algorithm - consulting the result. Warning Some problems may show up with rational curves.)#");
    py::class_<GeomFill_Frenet ,opencascade::handle<GeomFill_Frenet>  , GeomFill_TrihedronLaw >(m,"GeomFill_Frenet",R"#(Defined Frenet Trihedron LawDefined Frenet Trihedron LawDefined Frenet Trihedron Law)#");
    py::class_<GeomFill_GuideTrihedronPlan ,opencascade::handle<GeomFill_GuideTrihedronPlan>  , GeomFill_TrihedronWithGuide >(m,"GeomFill_GuideTrihedronPlan",R"#(Trihedron in the case of sweeping along a guide curve defined by the orthogonal plan on the trajectoryTrihedron in the case of sweeping along a guide curve defined by the orthogonal plan on the trajectoryTrihedron in the case of sweeping along a guide curve defined by the orthogonal plan on the trajectory)#");
    py::class_<GeomFill_GuideTrihedronAC ,opencascade::handle<GeomFill_GuideTrihedronAC>  , GeomFill_TrihedronWithGuide >(m,"GeomFill_GuideTrihedronAC",R"#(Trihedron in the case of a sweeping along a guide curve. defined by curviline abscissTrihedron in the case of a sweeping along a guide curve. defined by curviline abscissTrihedron in the case of a sweeping along a guide curve. defined by curviline absciss)#");
    py::class_<GeomFill_Fixed ,opencascade::handle<GeomFill_Fixed>  , GeomFill_TrihedronLaw >(m,"GeomFill_Fixed",R"#(Defined an constant TrihedronLawDefined an constant TrihedronLawDefined an constant TrihedronLaw)#");
    py::class_<GeomFill_DraftTrihedron ,opencascade::handle<GeomFill_DraftTrihedron>  , GeomFill_TrihedronLaw >(m,"GeomFill_DraftTrihedron",R"#()#");
    py::class_<GeomFill_CoonsAlgPatch ,opencascade::handle<GeomFill_CoonsAlgPatch>  , Standard_Transient >(m,"GeomFill_CoonsAlgPatch",R"#(Provides evaluation methods on an algorithmic patch (based on 4 Curves) defined by its boundaries and blending functions.Provides evaluation methods on an algorithmic patch (based on 4 Curves) defined by its boundaries and blending functions.Provides evaluation methods on an algorithmic patch (based on 4 Curves) defined by its boundaries and blending functions.)#");
    py::class_<GeomFill_CurveAndTrihedron ,opencascade::handle<GeomFill_CurveAndTrihedron>  , GeomFill_LocationLaw >(m,"GeomFill_CurveAndTrihedron",R"#(Define location law with an TrihedronLaw and an curve Definition Location is : transformed section coordinates in (Curve(v)), (Normal(v), BiNormal(v), Tangente(v))) systeme are the same like section shape coordinates in (O,(OX, OY, OZ)) systeme.Define location law with an TrihedronLaw and an curve Definition Location is : transformed section coordinates in (Curve(v)), (Normal(v), BiNormal(v), Tangente(v))) systeme are the same like section shape coordinates in (O,(OX, OY, OZ)) systeme.Define location law with an TrihedronLaw and an curve Definition Location is : transformed section coordinates in (Curve(v)), (Normal(v), BiNormal(v), Tangente(v))) systeme are the same like section shape coordinates in (O,(OX, OY, OZ)) systeme.)#");

// pre-register typdefs
// ./opencascade/GeomFill_DegeneratedBound.hxx
// ./opencascade/GeomFill_CircularBlendFunc.hxx
// ./opencascade/GeomFill_SimpleBound.hxx
// ./opencascade/GeomFill_GuideTrihedronPlan.hxx
// ./opencascade/GeomFill_SweepSectionGenerator.hxx
// ./opencascade/GeomFill_FunctionDraft.hxx
// ./opencascade/GeomFill_HArray1OfSectionLaw.hxx
// ./opencascade/GeomFill_EvolvedSection.hxx
// ./opencascade/GeomFill_Stretch.hxx
// ./opencascade/GeomFill_AppSurf.hxx
// ./opencascade/GeomFill_Filling.hxx
// ./opencascade/GeomFill_SnglrFunc.hxx
// ./opencascade/GeomFill_UniformSection.hxx
// ./opencascade/GeomFill_DiscreteTrihedron.hxx
// ./opencascade/GeomFill_DraftTrihedron.hxx
// ./opencascade/GeomFill_GuideTrihedronAC.hxx
// ./opencascade/GeomFill_Coons.hxx
// ./opencascade/GeomFill_PipeError.hxx
// ./opencascade/GeomFill_PlanFunc.hxx
// ./opencascade/GeomFill_CorrectedFrenet.hxx
// ./opencascade/GeomFill_TrihedronWithGuide.hxx
// ./opencascade/GeomFill_Profiler.hxx
// ./opencascade/GeomFill_Array1OfLocationLaw.hxx
    preregister_template_NCollection_Array1<opencascade::handle<GeomFill_LocationLaw> >(m,"GeomFill_Array1OfLocationLaw");  
// ./opencascade/GeomFill_Darboux.hxx
// ./opencascade/GeomFill_CurveAndTrihedron.hxx
// ./opencascade/GeomFill_AppSweep.hxx
// ./opencascade/GeomFill_Sweep.hxx
// ./opencascade/GeomFill_ConstrainedFilling.hxx
// ./opencascade/GeomFill_ConstantBiNormal.hxx
// ./opencascade/GeomFill_BoundWithSurf.hxx
// ./opencascade/GeomFill_HArray1OfLocationLaw.hxx
// ./opencascade/GeomFill_LocationLaw.hxx
// ./opencascade/GeomFill_Pipe.hxx
// ./opencascade/GeomFill_Array1OfSectionLaw.hxx
    preregister_template_NCollection_Array1<opencascade::handle<GeomFill_SectionLaw> >(m,"GeomFill_Array1OfSectionLaw");  
// ./opencascade/GeomFill_BezierCurves.hxx
// ./opencascade/GeomFill_Fixed.hxx
// ./opencascade/GeomFill_PolynomialConvertor.hxx
// ./opencascade/GeomFill_LocFunction.hxx
// ./opencascade/GeomFill_SectionLaw.hxx
// ./opencascade/GeomFill_QuasiAngularConvertor.hxx
// ./opencascade/GeomFill_Line.hxx
// ./opencascade/GeomFill_Boundary.hxx
// ./opencascade/GeomFill_Curved.hxx
// ./opencascade/GeomFill_BSplineCurves.hxx
// ./opencascade/GeomFill_FunctionGuide.hxx
// ./opencascade/GeomFill.hxx
// ./opencascade/GeomFill_LocationDraft.hxx
// ./opencascade/GeomFill_CornerState.hxx
// ./opencascade/GeomFill_TrihedronLaw.hxx
// ./opencascade/GeomFill_Tensor.hxx
// ./opencascade/GeomFill_CoonsAlgPatch.hxx
// ./opencascade/GeomFill_Trihedron.hxx
// ./opencascade/GeomFill_SectionGenerator.hxx
// ./opencascade/GeomFill_HSequenceOfAx2.hxx
// ./opencascade/GeomFill_FillingStyle.hxx
// ./opencascade/GeomFill_TgtOnCoons.hxx
// ./opencascade/GeomFill_SectionPlacement.hxx
// ./opencascade/GeomFill_LocationGuide.hxx
// ./opencascade/GeomFill_SequenceOfAx2.hxx
    preregister_template_NCollection_Sequence<gp_Ax2>(m,"GeomFill_SequenceOfAx2");  
// ./opencascade/GeomFill_SequenceOfTrsf.hxx
    preregister_template_NCollection_Sequence<gp_Trsf>(m,"GeomFill_SequenceOfTrsf");  
// ./opencascade/GeomFill_ApproxStyle.hxx
// ./opencascade/GeomFill_Generator.hxx
// ./opencascade/GeomFill_Frenet.hxx
// ./opencascade/GeomFill_TgtField.hxx
// ./opencascade/GeomFill_NSections.hxx
// ./opencascade/GeomFill_SweepFunction.hxx

};

// user-defined post-inclusion per module

// user-defined post

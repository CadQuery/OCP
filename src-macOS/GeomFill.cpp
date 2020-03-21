
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <GeomFill_Frenet.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomFill_LocationLaw.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Geom_Curve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <GeomFill_TrihedronLaw.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NotImplemented.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_Curve.hxx>
#include <StdFail_NotDone.hxx>
#include <GeomFill_TrihedronWithGuide.hxx>
#include <GeomFill_SectionLaw.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NotImplemented.hxx>
#include <Geom_Curve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Standard_ConstructionError.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NotImplemented.hxx>
#include <Geom_Curve.hxx>
#include <Law_Function.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Law_BSpline.hxx>
#include <gp_Vec.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomFill_SectionLaw.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <gp_Pnt.hxx>
#include <math_Matrix.hxx>
#include <gp_Vec.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomFill_Frenet.hxx>
#include <GeomFill_Frenet.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomFill_DraftTrihedron.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NotImplemented.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Geom_Curve.hxx>
#include <GeomFill_Boundary.hxx>
#include <Law_Function.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Law_Function.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Law_Function.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <GeomFill_LocationLaw.hxx>
#include <GeomFill_SectionLaw.hxx>
#include <Standard_ConstructionError.hxx>
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
#include <Geom_BezierSurface.hxx>
#include <Standard_ConstructionError.hxx>
#include <Geom_BezierCurve.hxx>
#include <Approx_CurvlinFunc.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomFill_LocationLaw.hxx>
#include <GeomFill_SectionLaw.hxx>
#include <Geom_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_ConstructionError.hxx>
#include <GeomFill_CoonsAlgPatch.hxx>
#include <gp_Vec.hxx>
#include <Geom_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <GeomFill_CoonsAlgPatch.hxx>
#include <GeomFill_TgtField.hxx>
#include <Geom_BSplineSurface.hxx>
#include <GeomFill_Boundary.hxx>
#include <GeomFill_BoundWithSurf.hxx>
#include <GeomFill_Frenet.hxx>
#include <Law_Function.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NotImplemented.hxx>
#include <gp_Vec.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <math_Matrix.hxx>
#include <gp_Vec.hxx>
#include <GeomFill_Tensor.hxx>
#include <GeomFill_SweepSectionGenerator.hxx>
#include <GeomFill_Line.hxx>
#include <Standard_NotImplemented.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <GeomFill_SectionGenerator.hxx>
#include <GeomFill_Line.hxx>
#include <GeomFill_LocationLaw.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Geom_Surface.hxx>
#include <GeomFill_LocationLaw.hxx>
#include <GeomFill_SectionLaw.hxx>
#include <Standard_ConstructionError.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Dir.hxx>

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
// ./opencascade/GeomFill_SequenceOfTrsf.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/GeomFill_SequenceOfAx2.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/GeomFill_Array1OfSectionLaw.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/GeomFill_Array1OfLocationLaw.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomFill(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GeomFill"));


//Python trampoline classes
    class Py_GeomFill_Boundary : public GeomFill_Boundary{
    public:
        using GeomFill_Boundary::GeomFill_Boundary;


        // public pure virtual
        gp_Pnt Value(const Standard_Real U) const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt,GeomFill_Boundary,Value,U) };
        void D1(const Standard_Real U,gp_Pnt & P,gp_Vec & V) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_Boundary,D1,U,P,V) };
        void Reparametrize(const Standard_Real First,const Standard_Real Last,const Standard_Boolean HasDF,const Standard_Boolean HasDL,const Standard_Real DF,const Standard_Real DL,const Standard_Boolean Rev) override { PYBIND11_OVERLOAD_PURE(void,GeomFill_Boundary,Reparametrize,First,Last,HasDF,HasDL,DF,DL,Rev) };
        Standard_Boolean IsDegenerated() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,GeomFill_Boundary,IsDegenerated,) };
        void Bounds(Standard_Real & First,Standard_Real & Last) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_Boundary,Bounds,First,Last) };


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
        Standard_Real GetMaximalNorm() override { PYBIND11_OVERLOAD_PURE(Standard_Real,GeomFill_LocationLaw,GetMaximalNorm,) };
        void GetAverageLaw(gp_Mat & AM,gp_Vec & AV) override { PYBIND11_OVERLOAD_PURE(void,GeomFill_LocationLaw,GetAverageLaw,AM,AV) };
        void GetInterval(Standard_Real & First,Standard_Real & Last) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_LocationLaw,GetInterval,First,Last) };
        void GetDomain(Standard_Real & First,Standard_Real & Last) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_LocationLaw,GetDomain,First,Last) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_GeomFill_SectionLaw : public GeomFill_SectionLaw{
    public:
        using GeomFill_SectionLaw::GeomFill_SectionLaw;


        // public pure virtual
        Standard_Boolean D0(const Standard_Real Param,NCollection_Array1<gp_Pnt> & Poles,NCollection_Array1<Standard_Real> & Weigths) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,GeomFill_SectionLaw,D0,Param,Poles,Weigths) };
        void Knots(NCollection_Array1<Standard_Real> & TKnots) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_SectionLaw,Knots,TKnots) };
        void Mults(NCollection_Array1<Standard_Integer> & TMults) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_SectionLaw,Mults,TMults) };
        Standard_Boolean IsRational() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,GeomFill_SectionLaw,IsRational,) };
        Standard_Boolean IsUPeriodic() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,GeomFill_SectionLaw,IsUPeriodic,) };
        Standard_Boolean IsVPeriodic() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,GeomFill_SectionLaw,IsVPeriodic,) };
        Standard_Integer NbIntervals(const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,GeomFill_SectionLaw,NbIntervals,S) };
        void Intervals(NCollection_Array1<Standard_Real> & T,const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_SectionLaw,Intervals,T,S) };
        void SetInterval(const Standard_Real First,const Standard_Real Last) override { PYBIND11_OVERLOAD_PURE(void,GeomFill_SectionLaw,SetInterval,First,Last) };
        void GetTolerance(const Standard_Real BoundTol,const Standard_Real SurfTol,const Standard_Real AngleTol,NCollection_Array1<Standard_Real> & Tol3d) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_SectionLaw,GetTolerance,BoundTol,SurfTol,AngleTol,Tol3d) };
        Standard_Real MaximalSection() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,GeomFill_SectionLaw,MaximalSection,) };
        void SectionShape(Standard_Integer & NbPoles,Standard_Integer & NbKnots,Standard_Integer & Degree) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_SectionLaw,SectionShape,NbPoles,NbKnots,Degree) };
        void GetInterval(Standard_Real & First,Standard_Real & Last) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_SectionLaw,GetInterval,First,Last) };
        void GetDomain(Standard_Real & First,Standard_Real & Last) const  override { PYBIND11_OVERLOAD_PURE(void,GeomFill_SectionLaw,GetDomain,First,Last) };


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

// classes

    // default constructor
    register_default_constructor<GeomFill , shared_ptr<GeomFill>>(m,"GeomFill");

    static_cast<py::class_<GeomFill , shared_ptr<GeomFill> >>(m.attr("GeomFill"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_AppSurf , shared_ptr<GeomFill_AppSurf> , AppBlend_Approx>>(m.attr("GeomFill_AppSurf"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (GeomFill_AppSurf::*)() const) static_cast<Standard_Boolean (GeomFill_AppSurf::*)() const>(&GeomFill_AppSurf::IsDone),
             R"#(None)#" )
        .def("Surface",
             (void (GeomFill_AppSurf::*)( NCollection_Array2<gp_Pnt> & , NCollection_Array2<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & , NCollection_Array1<Standard_Integer> & ) const) static_cast<void (GeomFill_AppSurf::*)( NCollection_Array2<gp_Pnt> & , NCollection_Array2<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & , NCollection_Array1<Standard_Integer> & ) const>(&GeomFill_AppSurf::Surface),
             R"#(None)#"  , py::arg("TPoles"),  py::arg("TWeights"),  py::arg("TUKnots"),  py::arg("TVKnots"),  py::arg("TUMults"),  py::arg("TVMults"))
        .def("UDegree",
             (Standard_Integer (GeomFill_AppSurf::*)() const) static_cast<Standard_Integer (GeomFill_AppSurf::*)() const>(&GeomFill_AppSurf::UDegree),
             R"#(None)#" )
        .def("VDegree",
             (Standard_Integer (GeomFill_AppSurf::*)() const) static_cast<Standard_Integer (GeomFill_AppSurf::*)() const>(&GeomFill_AppSurf::VDegree),
             R"#(None)#" )
        .def("SurfPoles",
             (const TColgp_Array2OfPnt & (GeomFill_AppSurf::*)() const) static_cast<const TColgp_Array2OfPnt & (GeomFill_AppSurf::*)() const>(&GeomFill_AppSurf::SurfPoles),
             R"#(None)#" )
        .def("SurfWeights",
             (const TColStd_Array2OfReal & (GeomFill_AppSurf::*)() const) static_cast<const TColStd_Array2OfReal & (GeomFill_AppSurf::*)() const>(&GeomFill_AppSurf::SurfWeights),
             R"#(None)#" )
        .def("SurfUKnots",
             (const TColStd_Array1OfReal & (GeomFill_AppSurf::*)() const) static_cast<const TColStd_Array1OfReal & (GeomFill_AppSurf::*)() const>(&GeomFill_AppSurf::SurfUKnots),
             R"#(None)#" )
        .def("SurfVKnots",
             (const TColStd_Array1OfReal & (GeomFill_AppSurf::*)() const) static_cast<const TColStd_Array1OfReal & (GeomFill_AppSurf::*)() const>(&GeomFill_AppSurf::SurfVKnots),
             R"#(None)#" )
        .def("SurfUMults",
             (const TColStd_Array1OfInteger & (GeomFill_AppSurf::*)() const) static_cast<const TColStd_Array1OfInteger & (GeomFill_AppSurf::*)() const>(&GeomFill_AppSurf::SurfUMults),
             R"#(None)#" )
        .def("SurfVMults",
             (const TColStd_Array1OfInteger & (GeomFill_AppSurf::*)() const) static_cast<const TColStd_Array1OfInteger & (GeomFill_AppSurf::*)() const>(&GeomFill_AppSurf::SurfVMults),
             R"#(None)#" )
        .def("NbCurves2d",
             (Standard_Integer (GeomFill_AppSurf::*)() const) static_cast<Standard_Integer (GeomFill_AppSurf::*)() const>(&GeomFill_AppSurf::NbCurves2d),
             R"#(None)#" )
        .def("Curve2d",
             (void (GeomFill_AppSurf::*)( const Standard_Integer , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & ) const) static_cast<void (GeomFill_AppSurf::*)( const Standard_Integer , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & ) const>(&GeomFill_AppSurf::Curve2d),
             R"#(None)#"  , py::arg("Index"),  py::arg("TPoles"),  py::arg("TKnots"),  py::arg("TMults"))
        .def("Curves2dDegree",
             (Standard_Integer (GeomFill_AppSurf::*)() const) static_cast<Standard_Integer (GeomFill_AppSurf::*)() const>(&GeomFill_AppSurf::Curves2dDegree),
             R"#(None)#" )
        .def("Curve2dPoles",
             (const TColgp_Array1OfPnt2d & (GeomFill_AppSurf::*)( const Standard_Integer ) const) static_cast<const TColgp_Array1OfPnt2d & (GeomFill_AppSurf::*)( const Standard_Integer ) const>(&GeomFill_AppSurf::Curve2dPoles),
             R"#(None)#"  , py::arg("Index"))
        .def("Curves2dKnots",
             (const TColStd_Array1OfReal & (GeomFill_AppSurf::*)() const) static_cast<const TColStd_Array1OfReal & (GeomFill_AppSurf::*)() const>(&GeomFill_AppSurf::Curves2dKnots),
             R"#(None)#" )
        .def("Curves2dMults",
             (const TColStd_Array1OfInteger & (GeomFill_AppSurf::*)() const) static_cast<const TColStd_Array1OfInteger & (GeomFill_AppSurf::*)() const>(&GeomFill_AppSurf::Curves2dMults),
             R"#(None)#" )
        .def("TolCurveOnSurf",
             (Standard_Real (GeomFill_AppSurf::*)( const Standard_Integer ) const) static_cast<Standard_Real (GeomFill_AppSurf::*)( const Standard_Integer ) const>(&GeomFill_AppSurf::TolCurveOnSurf),
             R"#(None)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
        .def("SurfShape",
             []( GeomFill_AppSurf &self   ){ Standard_Integer  UDegree; Standard_Integer  VDegree; Standard_Integer  NbUPoles; Standard_Integer  NbVPoles; Standard_Integer  NbUKnots; Standard_Integer  NbVKnots; self.SurfShape(UDegree,VDegree,NbUPoles,NbVPoles,NbUKnots,NbVKnots); return std::make_tuple(UDegree,VDegree,NbUPoles,NbVPoles,NbUKnots,NbVKnots); },
             R"#(None)#" )
        .def("Curves2dShape",
             []( GeomFill_AppSurf &self   ){ Standard_Integer  Degree; Standard_Integer  NbPoles; Standard_Integer  NbKnots; self.Curves2dShape(Degree,NbPoles,NbKnots); return std::make_tuple(Degree,NbPoles,NbKnots); },
             R"#(None)#" )
        .def("TolReached",
             []( GeomFill_AppSurf &self   ){ Standard_Real  Tol3d; Standard_Real  Tol2d; self.TolReached(Tol3d,Tol2d); return std::make_tuple(Tol3d,Tol2d); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_AppSweep , shared_ptr<GeomFill_AppSweep> , AppBlend_Approx>>(m.attr("GeomFill_AppSweep"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (GeomFill_AppSweep::*)() const) static_cast<Standard_Boolean (GeomFill_AppSweep::*)() const>(&GeomFill_AppSweep::IsDone),
             R"#(None)#" )
        .def("Surface",
             (void (GeomFill_AppSweep::*)( NCollection_Array2<gp_Pnt> & , NCollection_Array2<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & , NCollection_Array1<Standard_Integer> & ) const) static_cast<void (GeomFill_AppSweep::*)( NCollection_Array2<gp_Pnt> & , NCollection_Array2<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & , NCollection_Array1<Standard_Integer> & ) const>(&GeomFill_AppSweep::Surface),
             R"#(None)#"  , py::arg("TPoles"),  py::arg("TWeights"),  py::arg("TUKnots"),  py::arg("TVKnots"),  py::arg("TUMults"),  py::arg("TVMults"))
        .def("UDegree",
             (Standard_Integer (GeomFill_AppSweep::*)() const) static_cast<Standard_Integer (GeomFill_AppSweep::*)() const>(&GeomFill_AppSweep::UDegree),
             R"#(None)#" )
        .def("VDegree",
             (Standard_Integer (GeomFill_AppSweep::*)() const) static_cast<Standard_Integer (GeomFill_AppSweep::*)() const>(&GeomFill_AppSweep::VDegree),
             R"#(None)#" )
        .def("SurfPoles",
             (const TColgp_Array2OfPnt & (GeomFill_AppSweep::*)() const) static_cast<const TColgp_Array2OfPnt & (GeomFill_AppSweep::*)() const>(&GeomFill_AppSweep::SurfPoles),
             R"#(None)#" )
        .def("SurfWeights",
             (const TColStd_Array2OfReal & (GeomFill_AppSweep::*)() const) static_cast<const TColStd_Array2OfReal & (GeomFill_AppSweep::*)() const>(&GeomFill_AppSweep::SurfWeights),
             R"#(None)#" )
        .def("SurfUKnots",
             (const TColStd_Array1OfReal & (GeomFill_AppSweep::*)() const) static_cast<const TColStd_Array1OfReal & (GeomFill_AppSweep::*)() const>(&GeomFill_AppSweep::SurfUKnots),
             R"#(None)#" )
        .def("SurfVKnots",
             (const TColStd_Array1OfReal & (GeomFill_AppSweep::*)() const) static_cast<const TColStd_Array1OfReal & (GeomFill_AppSweep::*)() const>(&GeomFill_AppSweep::SurfVKnots),
             R"#(None)#" )
        .def("SurfUMults",
             (const TColStd_Array1OfInteger & (GeomFill_AppSweep::*)() const) static_cast<const TColStd_Array1OfInteger & (GeomFill_AppSweep::*)() const>(&GeomFill_AppSweep::SurfUMults),
             R"#(None)#" )
        .def("SurfVMults",
             (const TColStd_Array1OfInteger & (GeomFill_AppSweep::*)() const) static_cast<const TColStd_Array1OfInteger & (GeomFill_AppSweep::*)() const>(&GeomFill_AppSweep::SurfVMults),
             R"#(None)#" )
        .def("NbCurves2d",
             (Standard_Integer (GeomFill_AppSweep::*)() const) static_cast<Standard_Integer (GeomFill_AppSweep::*)() const>(&GeomFill_AppSweep::NbCurves2d),
             R"#(None)#" )
        .def("Curve2d",
             (void (GeomFill_AppSweep::*)( const Standard_Integer , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & ) const) static_cast<void (GeomFill_AppSweep::*)( const Standard_Integer , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & ) const>(&GeomFill_AppSweep::Curve2d),
             R"#(None)#"  , py::arg("Index"),  py::arg("TPoles"),  py::arg("TKnots"),  py::arg("TMults"))
        .def("Curves2dDegree",
             (Standard_Integer (GeomFill_AppSweep::*)() const) static_cast<Standard_Integer (GeomFill_AppSweep::*)() const>(&GeomFill_AppSweep::Curves2dDegree),
             R"#(None)#" )
        .def("Curve2dPoles",
             (const TColgp_Array1OfPnt2d & (GeomFill_AppSweep::*)( const Standard_Integer ) const) static_cast<const TColgp_Array1OfPnt2d & (GeomFill_AppSweep::*)( const Standard_Integer ) const>(&GeomFill_AppSweep::Curve2dPoles),
             R"#(None)#"  , py::arg("Index"))
        .def("Curves2dKnots",
             (const TColStd_Array1OfReal & (GeomFill_AppSweep::*)() const) static_cast<const TColStd_Array1OfReal & (GeomFill_AppSweep::*)() const>(&GeomFill_AppSweep::Curves2dKnots),
             R"#(None)#" )
        .def("Curves2dMults",
             (const TColStd_Array1OfInteger & (GeomFill_AppSweep::*)() const) static_cast<const TColStd_Array1OfInteger & (GeomFill_AppSweep::*)() const>(&GeomFill_AppSweep::Curves2dMults),
             R"#(None)#" )
        .def("TolCurveOnSurf",
             (Standard_Real (GeomFill_AppSweep::*)( const Standard_Integer ) const) static_cast<Standard_Real (GeomFill_AppSweep::*)( const Standard_Integer ) const>(&GeomFill_AppSweep::TolCurveOnSurf),
             R"#(None)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
        .def("SurfShape",
             []( GeomFill_AppSweep &self   ){ Standard_Integer  UDegree; Standard_Integer  VDegree; Standard_Integer  NbUPoles; Standard_Integer  NbVPoles; Standard_Integer  NbUKnots; Standard_Integer  NbVKnots; self.SurfShape(UDegree,VDegree,NbUPoles,NbVPoles,NbUKnots,NbVKnots); return std::make_tuple(UDegree,VDegree,NbUPoles,NbVPoles,NbUKnots,NbVKnots); },
             R"#(None)#" )
        .def("Curves2dShape",
             []( GeomFill_AppSweep &self   ){ Standard_Integer  Degree; Standard_Integer  NbPoles; Standard_Integer  NbKnots; self.Curves2dShape(Degree,NbPoles,NbKnots); return std::make_tuple(Degree,NbPoles,NbKnots); },
             R"#(None)#" )
        .def("TolReached",
             []( GeomFill_AppSweep &self   ){ Standard_Real  Tol3d; Standard_Real  Tol2d; self.TolReached(Tol3d,Tol2d); return std::make_tuple(Tol3d,Tol2d); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_BSplineCurves , shared_ptr<GeomFill_BSplineCurves> >>(m.attr("GeomFill_BSplineCurves"))
    // constructors
    // custom constructors
    // methods
        .def("Surface",
             (const opencascade::handle<Geom_BSplineSurface> & (GeomFill_BSplineCurves::*)() const) static_cast<const opencascade::handle<Geom_BSplineSurface> & (GeomFill_BSplineCurves::*)() const>(&GeomFill_BSplineCurves::Surface),
             R"#(Returns the BSpline surface Surface resulting from the computation performed by this algorithm.)#" )
        .def("Surface",
             (const opencascade::handle<Geom_BSplineSurface> & (GeomFill_BSplineCurves::*)() const) static_cast<const opencascade::handle<Geom_BSplineSurface> & (GeomFill_BSplineCurves::*)() const>(&GeomFill_BSplineCurves::Surface),
             R"#(Returns the BSpline surface Surface resulting from the computation performed by this algorithm.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_BezierCurves , shared_ptr<GeomFill_BezierCurves> >>(m.attr("GeomFill_BezierCurves"))
    // constructors
    // custom constructors
    // methods
        .def("Surface",
             (const opencascade::handle<Geom_BezierSurface> & (GeomFill_BezierCurves::*)() const) static_cast<const opencascade::handle<Geom_BezierSurface> & (GeomFill_BezierCurves::*)() const>(&GeomFill_BezierCurves::Surface),
             R"#(Returns the Bezier surface resulting from the computation performed by this algorithm.)#" )
        .def("Surface",
             (const opencascade::handle<Geom_BezierSurface> & (GeomFill_BezierCurves::*)() const) static_cast<const opencascade::handle<Geom_BezierSurface> & (GeomFill_BezierCurves::*)() const>(&GeomFill_BezierCurves::Surface),
             R"#(Returns the Bezier surface resulting from the computation performed by this algorithm.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_Boundary ,opencascade::handle<GeomFill_Boundary>,Py_GeomFill_Boundary , Standard_Transient>>(m.attr("GeomFill_Boundary"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (gp_Pnt (GeomFill_Boundary::*)( const Standard_Real ) const) static_cast<gp_Pnt (GeomFill_Boundary::*)( const Standard_Real ) const>(&GeomFill_Boundary::Value),
             R"#(None)#"  , py::arg("U"))
        .def("D1",
             (void (GeomFill_Boundary::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const) static_cast<void (GeomFill_Boundary::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const>(&GeomFill_Boundary::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("HasNormals",
             (Standard_Boolean (GeomFill_Boundary::*)() const) static_cast<Standard_Boolean (GeomFill_Boundary::*)() const>(&GeomFill_Boundary::HasNormals),
             R"#(None)#" )
        .def("Norm",
             (gp_Vec (GeomFill_Boundary::*)( const Standard_Real ) const) static_cast<gp_Vec (GeomFill_Boundary::*)( const Standard_Real ) const>(&GeomFill_Boundary::Norm),
             R"#(None)#"  , py::arg("U"))
        .def("D1Norm",
             (void (GeomFill_Boundary::*)( const Standard_Real , gp_Vec & , gp_Vec & ) const) static_cast<void (GeomFill_Boundary::*)( const Standard_Real , gp_Vec & , gp_Vec & ) const>(&GeomFill_Boundary::D1Norm),
             R"#(None)#"  , py::arg("U"),  py::arg("N"),  py::arg("DN"))
        .def("Reparametrize",
             (void (GeomFill_Boundary::*)( const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (GeomFill_Boundary::*)( const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&GeomFill_Boundary::Reparametrize),
             R"#(None)#"  , py::arg("First"),  py::arg("Last"),  py::arg("HasDF"),  py::arg("HasDL"),  py::arg("DF"),  py::arg("DL"),  py::arg("Rev"))
        .def("IsDegenerated",
             (Standard_Boolean (GeomFill_Boundary::*)() const) static_cast<Standard_Boolean (GeomFill_Boundary::*)() const>(&GeomFill_Boundary::IsDegenerated),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_Boundary::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_Boundary::*)() const>(&GeomFill_Boundary::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Bounds",
             []( GeomFill_Boundary &self   ){ Standard_Real  First; Standard_Real  Last; self.Bounds(First,Last); return std::make_tuple(First,Last); },
             R"#(None)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_Boundary::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_CircularBlendFunc ,opencascade::handle<GeomFill_CircularBlendFunc> , Approx_SweepFunction>>(m.attr("GeomFill_CircularBlendFunc"))
    // constructors
    // custom constructors
    // methods
        .def("D0",
             (Standard_Boolean (GeomFill_CircularBlendFunc::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (GeomFill_CircularBlendFunc::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<Standard_Real> & ) >(&GeomFill_CircularBlendFunc::D0),
             R"#(compute the section for v = param)#"  , py::arg("Param"),  py::arg("First"),  py::arg("Last"),  py::arg("Poles"),  py::arg("Poles2d"),  py::arg("Weigths"))
        .def("D1",
             (Standard_Boolean (GeomFill_CircularBlendFunc::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (GeomFill_CircularBlendFunc::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&GeomFill_CircularBlendFunc::D1),
             R"#(compute the first derivative in v direction of the section for v = param)#"  , py::arg("Param"),  py::arg("First"),  py::arg("Last"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("D2",
             (Standard_Boolean (GeomFill_CircularBlendFunc::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (GeomFill_CircularBlendFunc::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&GeomFill_CircularBlendFunc::D2),
             R"#(compute the second derivative in v direction of the section for v = param)#"  , py::arg("Param"),  py::arg("First"),  py::arg("Last"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
        .def("Nb2dCurves",
             (Standard_Integer (GeomFill_CircularBlendFunc::*)() const) static_cast<Standard_Integer (GeomFill_CircularBlendFunc::*)() const>(&GeomFill_CircularBlendFunc::Nb2dCurves),
             R"#(get the number of 2d curves to approximate.)#" )
        .def("Knots",
             (void (GeomFill_CircularBlendFunc::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (GeomFill_CircularBlendFunc::*)( NCollection_Array1<Standard_Real> & ) const>(&GeomFill_CircularBlendFunc::Knots),
             R"#(get the Knots of the section)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (GeomFill_CircularBlendFunc::*)( NCollection_Array1<Standard_Integer> & ) const) static_cast<void (GeomFill_CircularBlendFunc::*)( NCollection_Array1<Standard_Integer> & ) const>(&GeomFill_CircularBlendFunc::Mults),
             R"#(get the Multplicities of the section)#"  , py::arg("TMults"))
        .def("IsRational",
             (Standard_Boolean (GeomFill_CircularBlendFunc::*)() const) static_cast<Standard_Boolean (GeomFill_CircularBlendFunc::*)() const>(&GeomFill_CircularBlendFunc::IsRational),
             R"#(Returns if the section is rationnal or not)#" )
        .def("NbIntervals",
             (Standard_Integer (GeomFill_CircularBlendFunc::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (GeomFill_CircularBlendFunc::*)( const GeomAbs_Shape ) const>(&GeomFill_CircularBlendFunc::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (GeomFill_CircularBlendFunc::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (GeomFill_CircularBlendFunc::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&GeomFill_CircularBlendFunc::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("SetInterval",
             (void (GeomFill_CircularBlendFunc::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomFill_CircularBlendFunc::*)( const Standard_Real , const Standard_Real ) >(&GeomFill_CircularBlendFunc::SetInterval),
             R"#(Sets the bounds of the parametric interval on the fonction This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (GeomFill_CircularBlendFunc::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<Standard_Real> & ) const) static_cast<void (GeomFill_CircularBlendFunc::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<Standard_Real> & ) const>(&GeomFill_CircularBlendFunc::GetTolerance),
             R"#(Returns the tolerance to reach in approximation to respecte BoundTol error at the Boundary AngleTol tangent error at the Boundary (in radian) SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"))
        .def("SetTolerance",
             (void (GeomFill_CircularBlendFunc::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomFill_CircularBlendFunc::*)( const Standard_Real , const Standard_Real ) >(&GeomFill_CircularBlendFunc::SetTolerance),
             R"#(Is usfull, if (me) have to be run numerical algorithme to perform D0, D1 or D2)#"  , py::arg("Tol3d"),  py::arg("Tol2d"))
        .def("BarycentreOfSurf",
             (gp_Pnt (GeomFill_CircularBlendFunc::*)() const) static_cast<gp_Pnt (GeomFill_CircularBlendFunc::*)() const>(&GeomFill_CircularBlendFunc::BarycentreOfSurf),
             R"#(Get the barycentre of Surface. An very poor estimation is sufficent. This information is usefull to perform well conditionned rational approximation.)#" )
        .def("MaximalSection",
             (Standard_Real (GeomFill_CircularBlendFunc::*)() const) static_cast<Standard_Real (GeomFill_CircularBlendFunc::*)() const>(&GeomFill_CircularBlendFunc::MaximalSection),
             R"#(Returns the length of the maximum section. This information is usefull to perform well conditionned rational approximation.)#" )
        .def("GetMinimalWeight",
             (void (GeomFill_CircularBlendFunc::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (GeomFill_CircularBlendFunc::*)( NCollection_Array1<Standard_Real> & ) const>(&GeomFill_CircularBlendFunc::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles of all sections. This information is usefull to perform well conditionned rational approximation.)#"  , py::arg("Weigths"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_CircularBlendFunc::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_CircularBlendFunc::*)() const>(&GeomFill_CircularBlendFunc::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("SectionShape",
             []( GeomFill_CircularBlendFunc &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; self.SectionShape(NbPoles,NbKnots,Degree); return std::make_tuple(NbPoles,NbKnots,Degree); },
             R"#(get the format of an section)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_CircularBlendFunc::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_ConstrainedFilling , shared_ptr<GeomFill_ConstrainedFilling> >>(m.attr("GeomFill_ConstrainedFilling"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_CoonsAlgPatch ,opencascade::handle<GeomFill_CoonsAlgPatch> , Standard_Transient>>(m.attr("GeomFill_CoonsAlgPatch"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_CoonsAlgPatch::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_CoonsAlgPatch::*)() const>(&GeomFill_CoonsAlgPatch::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_CoonsAlgPatch::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_CornerState , shared_ptr<GeomFill_CornerState> >>(m.attr("GeomFill_CornerState"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_Filling , shared_ptr<GeomFill_Filling> >>(m.attr("GeomFill_Filling"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_FunctionDraft , shared_ptr<GeomFill_FunctionDraft> , math_FunctionSetWithDerivatives>>(m.attr("GeomFill_FunctionDraft"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (GeomFill_FunctionDraft::*)() const) static_cast<Standard_Integer (GeomFill_FunctionDraft::*)() const>(&GeomFill_FunctionDraft::NbVariables),
             R"#(returns the number of variables of the function.)#" )
        .def("NbEquations",
             (Standard_Integer (GeomFill_FunctionDraft::*)() const) static_cast<Standard_Integer (GeomFill_FunctionDraft::*)() const>(&GeomFill_FunctionDraft::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (GeomFill_FunctionDraft::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (GeomFill_FunctionDraft::*)( const math_Vector & , math_Vector & ) >(&GeomFill_FunctionDraft::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (GeomFill_FunctionDraft::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (GeomFill_FunctionDraft::*)( const math_Vector & , math_Matrix & ) >(&GeomFill_FunctionDraft::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (GeomFill_FunctionDraft::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (GeomFill_FunctionDraft::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&GeomFill_FunctionDraft::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_FunctionGuide , shared_ptr<GeomFill_FunctionGuide> , math_FunctionSetWithDerivatives>>(m.attr("GeomFill_FunctionGuide"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (GeomFill_FunctionGuide::*)() const) static_cast<Standard_Integer (GeomFill_FunctionGuide::*)() const>(&GeomFill_FunctionGuide::NbVariables),
             R"#(returns the number of variables of the function.)#" )
        .def("NbEquations",
             (Standard_Integer (GeomFill_FunctionGuide::*)() const) static_cast<Standard_Integer (GeomFill_FunctionGuide::*)() const>(&GeomFill_FunctionGuide::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (GeomFill_FunctionGuide::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (GeomFill_FunctionGuide::*)( const math_Vector & , math_Vector & ) >(&GeomFill_FunctionGuide::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (GeomFill_FunctionGuide::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (GeomFill_FunctionGuide::*)( const math_Vector & , math_Matrix & ) >(&GeomFill_FunctionGuide::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (GeomFill_FunctionGuide::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (GeomFill_FunctionGuide::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&GeomFill_FunctionGuide::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_HArray1OfLocationLaw ,opencascade::handle<GeomFill_HArray1OfLocationLaw> , GeomFill_Array1OfLocationLaw, Standard_Transient>>(m.attr("GeomFill_HArray1OfLocationLaw"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<GeomFill_LocationLaw> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<GeomFill_LocationLaw> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const GeomFill_Array1OfLocationLaw & (GeomFill_HArray1OfLocationLaw::*)() const) static_cast<const GeomFill_Array1OfLocationLaw & (GeomFill_HArray1OfLocationLaw::*)() const>(&GeomFill_HArray1OfLocationLaw::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (GeomFill_Array1OfLocationLaw & (GeomFill_HArray1OfLocationLaw::*)() ) static_cast<GeomFill_Array1OfLocationLaw & (GeomFill_HArray1OfLocationLaw::*)() >(&GeomFill_HArray1OfLocationLaw::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_HArray1OfLocationLaw::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_HArray1OfLocationLaw::*)() const>(&GeomFill_HArray1OfLocationLaw::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_HArray1OfLocationLaw::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomFill_HArray1OfLocationLaw::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_HArray1OfSectionLaw ,opencascade::handle<GeomFill_HArray1OfSectionLaw> , GeomFill_Array1OfSectionLaw, Standard_Transient>>(m.attr("GeomFill_HArray1OfSectionLaw"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<GeomFill_SectionLaw> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<GeomFill_SectionLaw> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const GeomFill_Array1OfSectionLaw & (GeomFill_HArray1OfSectionLaw::*)() const) static_cast<const GeomFill_Array1OfSectionLaw & (GeomFill_HArray1OfSectionLaw::*)() const>(&GeomFill_HArray1OfSectionLaw::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (GeomFill_Array1OfSectionLaw & (GeomFill_HArray1OfSectionLaw::*)() ) static_cast<GeomFill_Array1OfSectionLaw & (GeomFill_HArray1OfSectionLaw::*)() >(&GeomFill_HArray1OfSectionLaw::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_HArray1OfSectionLaw::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_HArray1OfSectionLaw::*)() const>(&GeomFill_HArray1OfSectionLaw::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_HArray1OfSectionLaw::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomFill_HArray1OfSectionLaw::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_HSequenceOfAx2 ,opencascade::handle<GeomFill_HSequenceOfAx2> , GeomFill_SequenceOfAx2, Standard_Transient>>(m.attr("GeomFill_HSequenceOfAx2"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<gp_Ax2> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const GeomFill_SequenceOfAx2 & (GeomFill_HSequenceOfAx2::*)() const) static_cast<const GeomFill_SequenceOfAx2 & (GeomFill_HSequenceOfAx2::*)() const>(&GeomFill_HSequenceOfAx2::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (GeomFill_HSequenceOfAx2::*)(  const gp_Ax2 & ) ) static_cast<void (GeomFill_HSequenceOfAx2::*)(  const gp_Ax2 & ) >(&GeomFill_HSequenceOfAx2::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (GeomFill_HSequenceOfAx2::*)( NCollection_Sequence<gp_Ax2> & ) ) static_cast<void (GeomFill_HSequenceOfAx2::*)( NCollection_Sequence<gp_Ax2> & ) >(&GeomFill_HSequenceOfAx2::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (GeomFill_SequenceOfAx2 & (GeomFill_HSequenceOfAx2::*)() ) static_cast<GeomFill_SequenceOfAx2 & (GeomFill_HSequenceOfAx2::*)() >(&GeomFill_HSequenceOfAx2::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_HSequenceOfAx2::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_HSequenceOfAx2::*)() const>(&GeomFill_HSequenceOfAx2::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_HSequenceOfAx2::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomFill_HSequenceOfAx2::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_Line ,opencascade::handle<GeomFill_Line> , Standard_Transient>>(m.attr("GeomFill_Line"))
    // constructors
    // custom constructors
    // methods
        .def("NbPoints",
             (Standard_Integer (GeomFill_Line::*)() const) static_cast<Standard_Integer (GeomFill_Line::*)() const>(&GeomFill_Line::NbPoints),
             R"#(None)#" )
        .def("Point",
             (Standard_Integer (GeomFill_Line::*)( const Standard_Integer ) const) static_cast<Standard_Integer (GeomFill_Line::*)( const Standard_Integer ) const>(&GeomFill_Line::Point),
             R"#(None)#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_Line::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_Line::*)() const>(&GeomFill_Line::DynamicType),
             R"#(None)#" )
        .def("NbPoints",
             (Standard_Integer (GeomFill_Line::*)() const) static_cast<Standard_Integer (GeomFill_Line::*)() const>(&GeomFill_Line::NbPoints),
             R"#(None)#" )
        .def("Point",
             (Standard_Integer (GeomFill_Line::*)( const Standard_Integer ) const) static_cast<Standard_Integer (GeomFill_Line::*)( const Standard_Integer ) const>(&GeomFill_Line::Point),
             R"#(None)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_Line::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_LocFunction , shared_ptr<GeomFill_LocFunction> >>(m.attr("GeomFill_LocFunction"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_LocationLaw ,opencascade::handle<GeomFill_LocationLaw>,Py_GeomFill_LocationLaw , Standard_Transient>>(m.attr("GeomFill_LocationLaw"))
    // constructors
    // custom constructors
    // methods
        .def("SetCurve",
             (void (GeomFill_LocationLaw::*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<void (GeomFill_LocationLaw::*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&GeomFill_LocationLaw::SetCurve),
             R"#(None)#"  , py::arg("C"))
        .def("GetCurve",
             (const opencascade::handle<Adaptor3d_HCurve> & (GeomFill_LocationLaw::*)() const) static_cast<const opencascade::handle<Adaptor3d_HCurve> & (GeomFill_LocationLaw::*)() const>(&GeomFill_LocationLaw::GetCurve),
             R"#(None)#" )
        .def("SetTrsf",
             (void (GeomFill_LocationLaw::*)( const gp_Mat & ) ) static_cast<void (GeomFill_LocationLaw::*)( const gp_Mat & ) >(&GeomFill_LocationLaw::SetTrsf),
             R"#(Set a transformation Matrix like the law M(t) become Mat * M(t))#"  , py::arg("Transfo"))
        .def("Copy",
             (opencascade::handle<GeomFill_LocationLaw> (GeomFill_LocationLaw::*)() const) static_cast<opencascade::handle<GeomFill_LocationLaw> (GeomFill_LocationLaw::*)() const>(&GeomFill_LocationLaw::Copy),
             R"#(None)#" )
        .def("D0",
             (Standard_Boolean (GeomFill_LocationLaw::*)( const Standard_Real , gp_Mat & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_LocationLaw::*)( const Standard_Real , gp_Mat & , gp_Vec & ) >(&GeomFill_LocationLaw::D0),
             R"#(compute Location)#"  , py::arg("Param"),  py::arg("M"),  py::arg("V"))
        .def("D0",
             (Standard_Boolean (GeomFill_LocationLaw::*)( const Standard_Real , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & ) ) static_cast<Standard_Boolean (GeomFill_LocationLaw::*)( const Standard_Real , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & ) >(&GeomFill_LocationLaw::D0),
             R"#(compute Location and 2d points)#"  , py::arg("Param"),  py::arg("M"),  py::arg("V"),  py::arg("Poles2d"))
        .def("D1",
             (Standard_Boolean (GeomFill_LocationLaw::*)( const Standard_Real , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & ) ) static_cast<Standard_Boolean (GeomFill_LocationLaw::*)( const Standard_Real , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & ) >(&GeomFill_LocationLaw::D1),
             R"#(compute location 2d points and associated first derivatives. Warning : It used only for C1 or C2 aproximation)#"  , py::arg("Param"),  py::arg("M"),  py::arg("V"),  py::arg("DM"),  py::arg("DV"),  py::arg("Poles2d"),  py::arg("DPoles2d"))
        .def("D2",
             (Standard_Boolean (GeomFill_LocationLaw::*)( const Standard_Real , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & ) ) static_cast<Standard_Boolean (GeomFill_LocationLaw::*)( const Standard_Real , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & ) >(&GeomFill_LocationLaw::D2),
             R"#(compute location 2d points and associated first and seconde derivatives. Warning : It used only for C2 aproximation)#"  , py::arg("Param"),  py::arg("M"),  py::arg("V"),  py::arg("DM"),  py::arg("DV"),  py::arg("D2M"),  py::arg("D2V"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"))
        .def("HasFirstRestriction",
             (Standard_Boolean (GeomFill_LocationLaw::*)() const) static_cast<Standard_Boolean (GeomFill_LocationLaw::*)() const>(&GeomFill_LocationLaw::HasFirstRestriction),
             R"#(Say if the first restriction is defined in this class. If it is true the first element of poles array in D0,D1,D2... Correspond to this restriction. Returns Standard_False (default implementation))#" )
        .def("HasLastRestriction",
             (Standard_Boolean (GeomFill_LocationLaw::*)() const) static_cast<Standard_Boolean (GeomFill_LocationLaw::*)() const>(&GeomFill_LocationLaw::HasLastRestriction),
             R"#(Say if the last restriction is defined in this class. If it is true the last element of poles array in D0,D1,D2... Correspond to this restriction. Returns Standard_False (default implementation))#" )
        .def("TraceNumber",
             (Standard_Integer (GeomFill_LocationLaw::*)() const) static_cast<Standard_Integer (GeomFill_LocationLaw::*)() const>(&GeomFill_LocationLaw::TraceNumber),
             R"#(Give the number of trace (Curves 2d wich are not restriction) Returns 0 (default implementation))#" )
        .def("ErrorStatus",
             (GeomFill_PipeError (GeomFill_LocationLaw::*)() const) static_cast<GeomFill_PipeError (GeomFill_LocationLaw::*)() const>(&GeomFill_LocationLaw::ErrorStatus),
             R"#(Give a status to the Law Returns PipeOk (default implementation))#" )
        .def("NbIntervals",
             (Standard_Integer (GeomFill_LocationLaw::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (GeomFill_LocationLaw::*)( const GeomAbs_Shape ) const>(&GeomFill_LocationLaw::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (GeomFill_LocationLaw::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (GeomFill_LocationLaw::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&GeomFill_LocationLaw::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("SetInterval",
             (void (GeomFill_LocationLaw::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomFill_LocationLaw::*)( const Standard_Real , const Standard_Real ) >(&GeomFill_LocationLaw::SetInterval),
             R"#(Sets the bounds of the parametric interval on the function This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("SetTolerance",
             (void (GeomFill_LocationLaw::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomFill_LocationLaw::*)( const Standard_Real , const Standard_Real ) >(&GeomFill_LocationLaw::SetTolerance),
             R"#(Is usefull, if (me) have to run numerical algorithm to perform D0, D1 or D2 The default implementation make nothing.)#"  , py::arg("Tol3d"),  py::arg("Tol2d"))
        .def("GetMaximalNorm",
             (Standard_Real (GeomFill_LocationLaw::*)() ) static_cast<Standard_Real (GeomFill_LocationLaw::*)() >(&GeomFill_LocationLaw::GetMaximalNorm),
             R"#(Get the maximum Norm of the matrix-location part. It is usful to find an good Tolerance to approx M(t).)#" )
        .def("GetAverageLaw",
             (void (GeomFill_LocationLaw::*)( gp_Mat & , gp_Vec & ) ) static_cast<void (GeomFill_LocationLaw::*)( gp_Mat & , gp_Vec & ) >(&GeomFill_LocationLaw::GetAverageLaw),
             R"#(Get average value of M(t) and V(t) it is usfull to make fast approximation of rational surfaces.)#"  , py::arg("AM"),  py::arg("AV"))
        .def("IsTranslation",
             (Standard_Boolean (GeomFill_LocationLaw::*)( Standard_Real & ) const) static_cast<Standard_Boolean (GeomFill_LocationLaw::*)( Standard_Real & ) const>(&GeomFill_LocationLaw::IsTranslation),
             R"#(Say if the Location Law, is an translation of Location The default implementation is " returns False ".)#"  , py::arg("Error"))
        .def("IsRotation",
             (Standard_Boolean (GeomFill_LocationLaw::*)( Standard_Real & ) const) static_cast<Standard_Boolean (GeomFill_LocationLaw::*)( Standard_Real & ) const>(&GeomFill_LocationLaw::IsRotation),
             R"#(Say if the Location Law, is a rotation of Location The default implementation is " returns False ".)#"  , py::arg("Error"))
        .def("Rotation",
             (void (GeomFill_LocationLaw::*)( gp_Pnt & ) const) static_cast<void (GeomFill_LocationLaw::*)( gp_Pnt & ) const>(&GeomFill_LocationLaw::Rotation),
             R"#(None)#"  , py::arg("Center"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_LocationLaw::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_LocationLaw::*)() const>(&GeomFill_LocationLaw::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("GetInterval",
             []( GeomFill_LocationLaw &self   ){ Standard_Real  First; Standard_Real  Last; self.GetInterval(First,Last); return std::make_tuple(First,Last); },
             R"#(Gets the bounds of the parametric interval on the function)#" )
        .def("GetDomain",
             []( GeomFill_LocationLaw &self   ){ Standard_Real  First; Standard_Real  Last; self.GetDomain(First,Last); return std::make_tuple(First,Last); },
             R"#(Gets the bounds of the function parametric domain. Warning: This domain it is not modified by the SetValue method)#" )
        .def("Resolution",
             []( GeomFill_LocationLaw &self , const Standard_Integer Index,const Standard_Real Tol ){ Standard_Real  TolU; Standard_Real  TolV; self.Resolution(Index,Tol,TolU,TolV); return std::make_tuple(TolU,TolV); },
             R"#(Returns the resolutions in the sub-space 2d <Index> This information is usfull to find an good tolerance in 2d approximation.)#"  , py::arg("Index"),  py::arg("Tol"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_LocationLaw::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_Pipe , shared_ptr<GeomFill_Pipe> >>(m.attr("GeomFill_Pipe"))
    // constructors
    // custom constructors
    // methods
        .def("Surface",
             (const opencascade::handle<Geom_Surface> & (GeomFill_Pipe::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (GeomFill_Pipe::*)() const>(&GeomFill_Pipe::Surface),
             R"#(Returns the surface built by this algorithm. Warning Do not use this function before the surface is built (in this case the function will return a null handle).)#" )
        .def("ExchangeUV",
             (Standard_Boolean (GeomFill_Pipe::*)() const) static_cast<Standard_Boolean (GeomFill_Pipe::*)() const>(&GeomFill_Pipe::ExchangeUV),
             R"#(The u parametric direction of the surface constructed by this algorithm usually corresponds to the evolution along the path and the v parametric direction corresponds to the evolution along the section(s). However, this rule is not respected when constructing certain specific Geom surfaces (typically cylindrical surfaces, surfaces of revolution, etc.) for which the parameterization is inversed. The ExchangeUV function checks for this, and returns true in all these specific cases. Warning Do not use this function before the surface is built.)#" )
        .def("GenerateParticularCase",
             (void (GeomFill_Pipe::*)( const Standard_Boolean ) ) static_cast<void (GeomFill_Pipe::*)( const Standard_Boolean ) >(&GeomFill_Pipe::GenerateParticularCase),
             R"#(Sets a flag to try to create as many planes, cylinder,... as possible. Default value is <Standard_False>.)#"  , py::arg("B"))
        .def("GenerateParticularCase",
             (Standard_Boolean (GeomFill_Pipe::*)() const) static_cast<Standard_Boolean (GeomFill_Pipe::*)() const>(&GeomFill_Pipe::GenerateParticularCase),
             R"#(Returns the flag.)#" )
        .def("ErrorOnSurf",
             (Standard_Real (GeomFill_Pipe::*)() const) static_cast<Standard_Real (GeomFill_Pipe::*)() const>(&GeomFill_Pipe::ErrorOnSurf),
             R"#(Returns the approximation's error. if the Surface is plane, cylinder ... this error can be 0.)#" )
        .def("IsDone",
             (Standard_Boolean (GeomFill_Pipe::*)() const) static_cast<Standard_Boolean (GeomFill_Pipe::*)() const>(&GeomFill_Pipe::IsDone),
             R"#(Returns whether approximation was done.)#" )
        .def("Surface",
             (const opencascade::handle<Geom_Surface> & (GeomFill_Pipe::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (GeomFill_Pipe::*)() const>(&GeomFill_Pipe::Surface),
             R"#(Returns the surface built by this algorithm. Warning Do not use this function before the surface is built (in this case the function will return a null handle).)#" )
        .def("ExchangeUV",
             (Standard_Boolean (GeomFill_Pipe::*)() const) static_cast<Standard_Boolean (GeomFill_Pipe::*)() const>(&GeomFill_Pipe::ExchangeUV),
             R"#(The u parametric direction of the surface constructed by this algorithm usually corresponds to the evolution along the path and the v parametric direction corresponds to the evolution along the section(s). However, this rule is not respected when constructing certain specific Geom surfaces (typically cylindrical surfaces, surfaces of revolution, etc.) for which the parameterization is inversed. The ExchangeUV function checks for this, and returns true in all these specific cases. Warning Do not use this function before the surface is built.)#" )
        .def("GenerateParticularCase",
             (void (GeomFill_Pipe::*)( const Standard_Boolean ) ) static_cast<void (GeomFill_Pipe::*)( const Standard_Boolean ) >(&GeomFill_Pipe::GenerateParticularCase),
             R"#(Sets a flag to try to create as many planes, cylinder,... as possible. Default value is <Standard_False>.)#"  , py::arg("B"))
        .def("GenerateParticularCase",
             (Standard_Boolean (GeomFill_Pipe::*)() const) static_cast<Standard_Boolean (GeomFill_Pipe::*)() const>(&GeomFill_Pipe::GenerateParticularCase),
             R"#(Returns the flag.)#" )
        .def("ErrorOnSurf",
             (Standard_Real (GeomFill_Pipe::*)() const) static_cast<Standard_Real (GeomFill_Pipe::*)() const>(&GeomFill_Pipe::ErrorOnSurf),
             R"#(Returns the approximation's error. if the Surface is plane, cylinder ... this error can be 0.)#" )
        .def("IsDone",
             (Standard_Boolean (GeomFill_Pipe::*)() const) static_cast<Standard_Boolean (GeomFill_Pipe::*)() const>(&GeomFill_Pipe::IsDone),
             R"#(Returns whether approximation was done.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_PlanFunc , shared_ptr<GeomFill_PlanFunc> , math_FunctionWithDerivative>>(m.attr("GeomFill_PlanFunc"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (GeomFill_PlanFunc::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (GeomFill_PlanFunc::*)( const Standard_Real , Standard_Real & ) >(&GeomFill_PlanFunc::Value),
             R"#(computes the value <F>of the function for the variable <X>. Returns True if the calculation were successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (GeomFill_PlanFunc::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (GeomFill_PlanFunc::*)( const Standard_Real , Standard_Real & ) >(&GeomFill_PlanFunc::Derivative),
             R"#(computes the derivative <D> of the function for the variable <X>. Returns True if the calculation were successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (GeomFill_PlanFunc::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (GeomFill_PlanFunc::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&GeomFill_PlanFunc::Values),
             R"#(computes the value <F> and the derivative <D> of the function for the variable <X>. Returns True if the calculation were successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_PolynomialConvertor , shared_ptr<GeomFill_PolynomialConvertor> >>(m.attr("GeomFill_PolynomialConvertor"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_Profiler , shared_ptr<GeomFill_Profiler> >>(m.attr("GeomFill_Profiler"))
    // constructors
    // custom constructors
    // methods
        .def("Perform",
             (void (GeomFill_Profiler::*)( const Standard_Real ) ) static_cast<void (GeomFill_Profiler::*)( const Standard_Real ) >(&GeomFill_Profiler::Perform),
             R"#(Converts all curves to BSplineCurves. Set them to the common profile. <PTol> is used to compare 2 knots.)#"  , py::arg("PTol"))
        .def("IsPeriodic",
             (Standard_Boolean (GeomFill_Profiler::*)() const) static_cast<Standard_Boolean (GeomFill_Profiler::*)() const>(&GeomFill_Profiler::IsPeriodic),
             R"#(None)#" )
        .def("Curve",
             (const opencascade::handle<Geom_Curve> & (GeomFill_Profiler::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Geom_Curve> & (GeomFill_Profiler::*)( const Standard_Integer ) const>(&GeomFill_Profiler::Curve),
             R"#(None)#"  , py::arg("Index"))
        .def("IsPeriodic",
             (Standard_Boolean (GeomFill_Profiler::*)() const) static_cast<Standard_Boolean (GeomFill_Profiler::*)() const>(&GeomFill_Profiler::IsPeriodic),
             R"#(None)#" )
        .def("Curve",
             (const opencascade::handle<Geom_Curve> & (GeomFill_Profiler::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Geom_Curve> & (GeomFill_Profiler::*)( const Standard_Integer ) const>(&GeomFill_Profiler::Curve),
             R"#(None)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_QuasiAngularConvertor , shared_ptr<GeomFill_QuasiAngularConvertor> >>(m.attr("GeomFill_QuasiAngularConvertor"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_SectionLaw ,opencascade::handle<GeomFill_SectionLaw>,Py_GeomFill_SectionLaw , Standard_Transient>>(m.attr("GeomFill_SectionLaw"))
    // constructors
    // custom constructors
    // methods
        .def("D0",
             (Standard_Boolean (GeomFill_SectionLaw::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (GeomFill_SectionLaw::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<Standard_Real> & ) >(&GeomFill_SectionLaw::D0),
             R"#(compute the section for v = param)#"  , py::arg("Param"),  py::arg("Poles"),  py::arg("Weigths"))
        .def("D1",
             (Standard_Boolean (GeomFill_SectionLaw::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (GeomFill_SectionLaw::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&GeomFill_SectionLaw::D1),
             R"#(compute the first derivative in v direction of the section for v = param Warning : It used only for C1 or C2 aproximation)#"  , py::arg("Param"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("D2",
             (Standard_Boolean (GeomFill_SectionLaw::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (GeomFill_SectionLaw::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&GeomFill_SectionLaw::D2),
             R"#(compute the second derivative in v direction of the section for v = param Warning : It used only for C2 aproximation)#"  , py::arg("Param"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
        .def("BSplineSurface",
             (opencascade::handle<Geom_BSplineSurface> (GeomFill_SectionLaw::*)() const) static_cast<opencascade::handle<Geom_BSplineSurface> (GeomFill_SectionLaw::*)() const>(&GeomFill_SectionLaw::BSplineSurface),
             R"#(give if possible an bspline Surface, like iso-v are the section. If it is not possible this methode have to get an Null Surface. It is the default implementation.)#" )
        .def("Knots",
             (void (GeomFill_SectionLaw::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (GeomFill_SectionLaw::*)( NCollection_Array1<Standard_Real> & ) const>(&GeomFill_SectionLaw::Knots),
             R"#(get the Knots of the section)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (GeomFill_SectionLaw::*)( NCollection_Array1<Standard_Integer> & ) const) static_cast<void (GeomFill_SectionLaw::*)( NCollection_Array1<Standard_Integer> & ) const>(&GeomFill_SectionLaw::Mults),
             R"#(get the Multplicities of the section)#"  , py::arg("TMults"))
        .def("IsRational",
             (Standard_Boolean (GeomFill_SectionLaw::*)() const) static_cast<Standard_Boolean (GeomFill_SectionLaw::*)() const>(&GeomFill_SectionLaw::IsRational),
             R"#(Returns if the sections are rationnal or not)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (GeomFill_SectionLaw::*)() const) static_cast<Standard_Boolean (GeomFill_SectionLaw::*)() const>(&GeomFill_SectionLaw::IsUPeriodic),
             R"#(Returns if the sections are periodic or not)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (GeomFill_SectionLaw::*)() const) static_cast<Standard_Boolean (GeomFill_SectionLaw::*)() const>(&GeomFill_SectionLaw::IsVPeriodic),
             R"#(Returns if law is periodic or not)#" )
        .def("NbIntervals",
             (Standard_Integer (GeomFill_SectionLaw::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (GeomFill_SectionLaw::*)( const GeomAbs_Shape ) const>(&GeomFill_SectionLaw::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (GeomFill_SectionLaw::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (GeomFill_SectionLaw::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&GeomFill_SectionLaw::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("SetInterval",
             (void (GeomFill_SectionLaw::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomFill_SectionLaw::*)( const Standard_Real , const Standard_Real ) >(&GeomFill_SectionLaw::SetInterval),
             R"#(Sets the bounds of the parametric interval on the function This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (GeomFill_SectionLaw::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<Standard_Real> & ) const) static_cast<void (GeomFill_SectionLaw::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<Standard_Real> & ) const>(&GeomFill_SectionLaw::GetTolerance),
             R"#(Returns the tolerances associated at each poles to reach in approximation, to satisfy: BoundTol error at the Boundary AngleTol tangent error at the Boundary (in radian) SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"))
        .def("SetTolerance",
             (void (GeomFill_SectionLaw::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomFill_SectionLaw::*)( const Standard_Real , const Standard_Real ) >(&GeomFill_SectionLaw::SetTolerance),
             R"#(Is usefull, if (me) have to run numerical algorithm to perform D0, D1 or D2 The default implementation make nothing.)#"  , py::arg("Tol3d"),  py::arg("Tol2d"))
        .def("BarycentreOfSurf",
             (gp_Pnt (GeomFill_SectionLaw::*)() const) static_cast<gp_Pnt (GeomFill_SectionLaw::*)() const>(&GeomFill_SectionLaw::BarycentreOfSurf),
             R"#(Get the barycentre of Surface. An very poor estimation is sufficent. This information is usefull to perform well conditioned rational approximation. Warning: Used only if <me> IsRational)#" )
        .def("MaximalSection",
             (Standard_Real (GeomFill_SectionLaw::*)() const) static_cast<Standard_Real (GeomFill_SectionLaw::*)() const>(&GeomFill_SectionLaw::MaximalSection),
             R"#(Returns the length of the greater section. This information is usefull to G1's control. Warning: With an little value, approximation can be slower.)#" )
        .def("GetMinimalWeight",
             (void (GeomFill_SectionLaw::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (GeomFill_SectionLaw::*)( NCollection_Array1<Standard_Real> & ) const>(&GeomFill_SectionLaw::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles in all sections. This information is usefull to control error in rational approximation. Warning: Used only if <me> IsRational)#"  , py::arg("Weigths"))
        .def("IsConstant",
             (Standard_Boolean (GeomFill_SectionLaw::*)( Standard_Real & ) const) static_cast<Standard_Boolean (GeomFill_SectionLaw::*)( Standard_Real & ) const>(&GeomFill_SectionLaw::IsConstant),
             R"#(Say if all sections are equals)#"  , py::arg("Error"))
        .def("ConstantSection",
             (opencascade::handle<Geom_Curve> (GeomFill_SectionLaw::*)() const) static_cast<opencascade::handle<Geom_Curve> (GeomFill_SectionLaw::*)() const>(&GeomFill_SectionLaw::ConstantSection),
             R"#(Return a copy of the constant Section, if me IsConstant)#" )
        .def("IsConicalLaw",
             (Standard_Boolean (GeomFill_SectionLaw::*)( Standard_Real & ) const) static_cast<Standard_Boolean (GeomFill_SectionLaw::*)( Standard_Real & ) const>(&GeomFill_SectionLaw::IsConicalLaw),
             R"#(Returns True if all section are circle, with same plane,same center and linear radius evolution Return False by Default.)#"  , py::arg("Error"))
        .def("CirclSection",
             (opencascade::handle<Geom_Curve> (GeomFill_SectionLaw::*)( const Standard_Real ) const) static_cast<opencascade::handle<Geom_Curve> (GeomFill_SectionLaw::*)( const Standard_Real ) const>(&GeomFill_SectionLaw::CirclSection),
             R"#(Return the circle section at parameter <Param>, if <me> a IsConicalLaw)#"  , py::arg("Param"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_SectionLaw::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_SectionLaw::*)() const>(&GeomFill_SectionLaw::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("SectionShape",
             []( GeomFill_SectionLaw &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; self.SectionShape(NbPoles,NbKnots,Degree); return std::make_tuple(NbPoles,NbKnots,Degree); },
             R"#(get the format of an section)#" )
        .def("GetInterval",
             []( GeomFill_SectionLaw &self   ){ Standard_Real  First; Standard_Real  Last; self.GetInterval(First,Last); return std::make_tuple(First,Last); },
             R"#(Gets the bounds of the parametric interval on the function)#" )
        .def("GetDomain",
             []( GeomFill_SectionLaw &self   ){ Standard_Real  First; Standard_Real  Last; self.GetDomain(First,Last); return std::make_tuple(First,Last); },
             R"#(Gets the bounds of the function parametric domain. Warning: This domain it is not modified by the SetValue method)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_SectionLaw::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_SectionPlacement , shared_ptr<GeomFill_SectionPlacement> >>(m.attr("GeomFill_SectionPlacement"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_SnglrFunc , shared_ptr<GeomFill_SnglrFunc> , Adaptor3d_Curve>>(m.attr("GeomFill_SnglrFunc"))
    // constructors
    // custom constructors
    // methods
        .def("FirstParameter",
             (Standard_Real (GeomFill_SnglrFunc::*)() const) static_cast<Standard_Real (GeomFill_SnglrFunc::*)() const>(&GeomFill_SnglrFunc::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (GeomFill_SnglrFunc::*)() const) static_cast<Standard_Real (GeomFill_SnglrFunc::*)() const>(&GeomFill_SnglrFunc::LastParameter),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (GeomFill_SnglrFunc::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (GeomFill_SnglrFunc::*)( const GeomAbs_Shape ) const>(&GeomFill_SnglrFunc::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (GeomFill_SnglrFunc::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (GeomFill_SnglrFunc::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&GeomFill_SnglrFunc::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Value",
             (gp_Pnt (GeomFill_SnglrFunc::*)( const Standard_Real ) const) static_cast<gp_Pnt (GeomFill_SnglrFunc::*)( const Standard_Real ) const>(&GeomFill_SnglrFunc::Value),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"))
        .def("IsPeriodic",
             (Standard_Boolean (GeomFill_SnglrFunc::*)() const) static_cast<Standard_Boolean (GeomFill_SnglrFunc::*)() const>(&GeomFill_SnglrFunc::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (GeomFill_SnglrFunc::*)() const) static_cast<Standard_Real (GeomFill_SnglrFunc::*)() const>(&GeomFill_SnglrFunc::Period),
             R"#(None)#" )
        .def("D0",
             (void (GeomFill_SnglrFunc::*)( const Standard_Real , gp_Pnt & ) const) static_cast<void (GeomFill_SnglrFunc::*)( const Standard_Real , gp_Pnt & ) const>(&GeomFill_SnglrFunc::D0),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (GeomFill_SnglrFunc::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const) static_cast<void (GeomFill_SnglrFunc::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const>(&GeomFill_SnglrFunc::D1),
             R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (GeomFill_SnglrFunc::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const) static_cast<void (GeomFill_SnglrFunc::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const>(&GeomFill_SnglrFunc::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (GeomFill_SnglrFunc::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) const) static_cast<void (GeomFill_SnglrFunc::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) const>(&GeomFill_SnglrFunc::D3),
             R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (GeomFill_SnglrFunc::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec (GeomFill_SnglrFunc::*)( const Standard_Real , const Standard_Integer ) const>(&GeomFill_SnglrFunc::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if N < 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Resolution",
             (Standard_Real (GeomFill_SnglrFunc::*)( const Standard_Real ) const) static_cast<Standard_Real (GeomFill_SnglrFunc::*)( const Standard_Real ) const>(&GeomFill_SnglrFunc::Resolution),
             R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (GeomFill_SnglrFunc::*)() const) static_cast<GeomAbs_CurveType (GeomFill_SnglrFunc::*)() const>(&GeomFill_SnglrFunc::GetType),
             R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_Sweep , shared_ptr<GeomFill_Sweep> >>(m.attr("GeomFill_Sweep"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_SweepFunction ,opencascade::handle<GeomFill_SweepFunction> , Approx_SweepFunction>>(m.attr("GeomFill_SweepFunction"))
    // constructors
    // custom constructors
    // methods
        .def("D0",
             (Standard_Boolean (GeomFill_SweepFunction::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (GeomFill_SweepFunction::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<Standard_Real> & ) >(&GeomFill_SweepFunction::D0),
             R"#(compute the section for v = param)#"  , py::arg("Param"),  py::arg("First"),  py::arg("Last"),  py::arg("Poles"),  py::arg("Poles2d"),  py::arg("Weigths"))
        .def("D1",
             (Standard_Boolean (GeomFill_SweepFunction::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (GeomFill_SweepFunction::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&GeomFill_SweepFunction::D1),
             R"#(compute the first derivative in v direction of the section for v = param)#"  , py::arg("Param"),  py::arg("First"),  py::arg("Last"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("D2",
             (Standard_Boolean (GeomFill_SweepFunction::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (GeomFill_SweepFunction::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&GeomFill_SweepFunction::D2),
             R"#(compute the second derivative in v direction of the section for v = param)#"  , py::arg("Param"),  py::arg("First"),  py::arg("Last"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
        .def("Nb2dCurves",
             (Standard_Integer (GeomFill_SweepFunction::*)() const) static_cast<Standard_Integer (GeomFill_SweepFunction::*)() const>(&GeomFill_SweepFunction::Nb2dCurves),
             R"#(get the number of 2d curves to approximate.)#" )
        .def("Knots",
             (void (GeomFill_SweepFunction::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (GeomFill_SweepFunction::*)( NCollection_Array1<Standard_Real> & ) const>(&GeomFill_SweepFunction::Knots),
             R"#(get the Knots of the section)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (GeomFill_SweepFunction::*)( NCollection_Array1<Standard_Integer> & ) const) static_cast<void (GeomFill_SweepFunction::*)( NCollection_Array1<Standard_Integer> & ) const>(&GeomFill_SweepFunction::Mults),
             R"#(get the Multplicities of the section)#"  , py::arg("TMults"))
        .def("IsRational",
             (Standard_Boolean (GeomFill_SweepFunction::*)() const) static_cast<Standard_Boolean (GeomFill_SweepFunction::*)() const>(&GeomFill_SweepFunction::IsRational),
             R"#(Returns if the section is rationnal or not)#" )
        .def("NbIntervals",
             (Standard_Integer (GeomFill_SweepFunction::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (GeomFill_SweepFunction::*)( const GeomAbs_Shape ) const>(&GeomFill_SweepFunction::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (GeomFill_SweepFunction::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (GeomFill_SweepFunction::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&GeomFill_SweepFunction::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("SetInterval",
             (void (GeomFill_SweepFunction::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomFill_SweepFunction::*)( const Standard_Real , const Standard_Real ) >(&GeomFill_SweepFunction::SetInterval),
             R"#(Sets the bounds of the parametric interval on the function This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (GeomFill_SweepFunction::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<Standard_Real> & ) const) static_cast<void (GeomFill_SweepFunction::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<Standard_Real> & ) const>(&GeomFill_SweepFunction::GetTolerance),
             R"#(Returns the tolerance to reach in approximation to respecte BoundTol error at the Boundary AngleTol tangent error at the Boundary (in radian) SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"))
        .def("SetTolerance",
             (void (GeomFill_SweepFunction::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomFill_SweepFunction::*)( const Standard_Real , const Standard_Real ) >(&GeomFill_SweepFunction::SetTolerance),
             R"#(Is usfull, if (me) have to be run numerical algorithme to perform D0, D1 or D2)#"  , py::arg("Tol3d"),  py::arg("Tol2d"))
        .def("BarycentreOfSurf",
             (gp_Pnt (GeomFill_SweepFunction::*)() const) static_cast<gp_Pnt (GeomFill_SweepFunction::*)() const>(&GeomFill_SweepFunction::BarycentreOfSurf),
             R"#(Get the barycentre of Surface. An very poor estimation is sufficent. This information is usefull to perform well conditionned rational approximation. Warning: Used only if <me> IsRational)#" )
        .def("MaximalSection",
             (Standard_Real (GeomFill_SweepFunction::*)() const) static_cast<Standard_Real (GeomFill_SweepFunction::*)() const>(&GeomFill_SweepFunction::MaximalSection),
             R"#(Returns the length of the maximum section. This information is usefull to perform well conditionned rational approximation.)#" )
        .def("GetMinimalWeight",
             (void (GeomFill_SweepFunction::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (GeomFill_SweepFunction::*)( NCollection_Array1<Standard_Real> & ) const>(&GeomFill_SweepFunction::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles of all sections. This information is usefull to perform well conditionned rational approximation. Warning: Used only if <me> IsRational)#"  , py::arg("Weigths"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_SweepFunction::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_SweepFunction::*)() const>(&GeomFill_SweepFunction::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("SectionShape",
             []( GeomFill_SweepFunction &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; self.SectionShape(NbPoles,NbKnots,Degree); return std::make_tuple(NbPoles,NbKnots,Degree); },
             R"#(get the format of an section)#" )
        .def("Resolution",
             []( GeomFill_SweepFunction &self , const Standard_Integer Index,const Standard_Real Tol ){ Standard_Real  TolU; Standard_Real  TolV; self.Resolution(Index,Tol,TolU,TolV); return std::make_tuple(TolU,TolV); },
             R"#(Returns the resolutions in the sub-space 2d <Index> This information is usfull to find an good tolerance in 2d approximation. Warning: Used only if Nb2dCurve > 0)#"  , py::arg("Index"),  py::arg("Tol"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_SweepFunction::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_SweepSectionGenerator , shared_ptr<GeomFill_SweepSectionGenerator> >>(m.attr("GeomFill_SweepSectionGenerator"))
    // constructors
    // custom constructors
    // methods
        .def("NbSections",
             (Standard_Integer (GeomFill_SweepSectionGenerator::*)() const) static_cast<Standard_Integer (GeomFill_SweepSectionGenerator::*)() const>(&GeomFill_SweepSectionGenerator::NbSections),
             R"#(None)#" )
        .def("NbSections",
             (Standard_Integer (GeomFill_SweepSectionGenerator::*)() const) static_cast<Standard_Integer (GeomFill_SweepSectionGenerator::*)() const>(&GeomFill_SweepSectionGenerator::NbSections),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_Tensor , shared_ptr<GeomFill_Tensor> >>(m.attr("GeomFill_Tensor"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (const Standard_Real & (GeomFill_Tensor::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) const) static_cast<const Standard_Real & (GeomFill_Tensor::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) const>(&GeomFill_Tensor::Value),
             R"#(accesses (in read or write mode) the value of index <Row>, <Col> and <Mat> of a Tensor. An exception is raised if <Row>, <Col> or <Mat> are not in the correct range.)#"  , py::arg("Row"),  py::arg("Col"),  py::arg("Mat"))
        .def("ChangeValue",
             (Standard_Real & (GeomFill_Tensor::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Real & (GeomFill_Tensor::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) >(&GeomFill_Tensor::ChangeValue),
             R"#(accesses (in read or write mode) the value of index <Row>, <Col> and <Mat> of a Tensor. An exception is raised if <Row>, <Col> or <Mat> are not in the correct range.)#"  , py::arg("Row"),  py::arg("Col"),  py::arg("Mat"))
        .def("Value",
             (const Standard_Real & (GeomFill_Tensor::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) const) static_cast<const Standard_Real & (GeomFill_Tensor::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) const>(&GeomFill_Tensor::Value),
             R"#(accesses (in read or write mode) the value of index <Row>, <Col> and <Mat> of a Tensor. An exception is raised if <Row>, <Col> or <Mat> are not in the correct range.)#"  , py::arg("Row"),  py::arg("Col"),  py::arg("Mat"))
        .def("ChangeValue",
             (Standard_Real & (GeomFill_Tensor::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Real & (GeomFill_Tensor::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) >(&GeomFill_Tensor::ChangeValue),
             R"#(accesses (in read or write mode) the value of index <Row>, <Col> and <Mat> of a Tensor. An exception is raised if <Row>, <Col> or <Mat> are not in the correct range.)#"  , py::arg("Row"),  py::arg("Col"),  py::arg("Mat"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_TgtField ,opencascade::handle<GeomFill_TgtField>,Py_GeomFill_TgtField , Standard_Transient>>(m.attr("GeomFill_TgtField"))
    // constructors
    // custom constructors
    // methods
        .def("IsScalable",
             (Standard_Boolean (GeomFill_TgtField::*)() const) static_cast<Standard_Boolean (GeomFill_TgtField::*)() const>(&GeomFill_TgtField::IsScalable),
             R"#(None)#" )
        .def("Scale",
             (void (GeomFill_TgtField::*)( const opencascade::handle<Law_BSpline> & ) ) static_cast<void (GeomFill_TgtField::*)( const opencascade::handle<Law_BSpline> & ) >(&GeomFill_TgtField::Scale),
             R"#(None)#"  , py::arg("Func"))
        .def("Value",
             (gp_Vec (GeomFill_TgtField::*)( const Standard_Real ) const) static_cast<gp_Vec (GeomFill_TgtField::*)( const Standard_Real ) const>(&GeomFill_TgtField::Value),
             R"#(Computes the value of the field of tangency at parameter W.)#"  , py::arg("W"))
        .def("D1",
             (gp_Vec (GeomFill_TgtField::*)( const Standard_Real ) const) static_cast<gp_Vec (GeomFill_TgtField::*)( const Standard_Real ) const>(&GeomFill_TgtField::D1),
             R"#(Computes the derivative of the field of tangency at parameter W.)#"  , py::arg("W"))
        .def("D1",
             (void (GeomFill_TgtField::*)( const Standard_Real , gp_Vec & , gp_Vec & ) const) static_cast<void (GeomFill_TgtField::*)( const Standard_Real , gp_Vec & , gp_Vec & ) const>(&GeomFill_TgtField::D1),
             R"#(Computes the value and the derivative of the field of tangency at parameter W.)#"  , py::arg("W"),  py::arg("V"),  py::arg("DV"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_TgtField::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_TgtField::*)() const>(&GeomFill_TgtField::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_TgtField::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_TrihedronLaw ,opencascade::handle<GeomFill_TrihedronLaw>,Py_GeomFill_TrihedronLaw , Standard_Transient>>(m.attr("GeomFill_TrihedronLaw"))
    // constructors
    // custom constructors
    // methods
        .def("SetCurve",
             (void (GeomFill_TrihedronLaw::*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<void (GeomFill_TrihedronLaw::*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&GeomFill_TrihedronLaw::SetCurve),
             R"#(None)#"  , py::arg("C"))
        .def("Copy",
             (opencascade::handle<GeomFill_TrihedronLaw> (GeomFill_TrihedronLaw::*)() const) static_cast<opencascade::handle<GeomFill_TrihedronLaw> (GeomFill_TrihedronLaw::*)() const>(&GeomFill_TrihedronLaw::Copy),
             R"#(None)#" )
        .def("ErrorStatus",
             (GeomFill_PipeError (GeomFill_TrihedronLaw::*)() const) static_cast<GeomFill_PipeError (GeomFill_TrihedronLaw::*)() const>(&GeomFill_TrihedronLaw::ErrorStatus),
             R"#(Give a status to the Law Returns PipeOk (default implementation))#" )
        .def("D0",
             (Standard_Boolean (GeomFill_TrihedronLaw::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_TrihedronLaw::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_TrihedronLaw::D0),
             R"#(compute Triedrhon on curve at parameter <Param>)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("Normal"),  py::arg("BiNormal"))
        .def("D1",
             (Standard_Boolean (GeomFill_TrihedronLaw::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_TrihedronLaw::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_TrihedronLaw::D1),
             R"#(compute Triedrhon and derivative Trihedron on curve at parameter <Param> Warning : It used only for C1 or C2 aproximation)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("DTangent"),  py::arg("Normal"),  py::arg("DNormal"),  py::arg("BiNormal"),  py::arg("DBiNormal"))
        .def("D2",
             (Standard_Boolean (GeomFill_TrihedronLaw::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_TrihedronLaw::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_TrihedronLaw::D2),
             R"#(compute Trihedron on curve first and seconde derivatives. Warning : It used only for C2 aproximation)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("DTangent"),  py::arg("D2Tangent"),  py::arg("Normal"),  py::arg("DNormal"),  py::arg("D2Normal"),  py::arg("BiNormal"),  py::arg("DBiNormal"),  py::arg("D2BiNormal"))
        .def("NbIntervals",
             (Standard_Integer (GeomFill_TrihedronLaw::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (GeomFill_TrihedronLaw::*)( const GeomAbs_Shape ) const>(&GeomFill_TrihedronLaw::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (GeomFill_TrihedronLaw::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (GeomFill_TrihedronLaw::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&GeomFill_TrihedronLaw::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("SetInterval",
             (void (GeomFill_TrihedronLaw::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomFill_TrihedronLaw::*)( const Standard_Real , const Standard_Real ) >(&GeomFill_TrihedronLaw::SetInterval),
             R"#(Sets the bounds of the parametric interval on the function This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetAverageLaw",
             (void (GeomFill_TrihedronLaw::*)( gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (GeomFill_TrihedronLaw::*)( gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_TrihedronLaw::GetAverageLaw),
             R"#(Get average value of M(t) and V(t) it is usfull to make fast approximation of rational surfaces.)#"  , py::arg("ATangent"),  py::arg("ANormal"),  py::arg("ABiNormal"))
        .def("IsConstant",
             (Standard_Boolean (GeomFill_TrihedronLaw::*)() const) static_cast<Standard_Boolean (GeomFill_TrihedronLaw::*)() const>(&GeomFill_TrihedronLaw::IsConstant),
             R"#(Say if the law is Constant)#" )
        .def("IsOnlyBy3dCurve",
             (Standard_Boolean (GeomFill_TrihedronLaw::*)() const) static_cast<Standard_Boolean (GeomFill_TrihedronLaw::*)() const>(&GeomFill_TrihedronLaw::IsOnlyBy3dCurve),
             R"#(Say if the law is defined, only by the 3d Geometry of the setted Curve Return False by Default.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_TrihedronLaw::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_TrihedronLaw::*)() const>(&GeomFill_TrihedronLaw::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_TrihedronLaw::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_BoundWithSurf ,opencascade::handle<GeomFill_BoundWithSurf> , GeomFill_Boundary>>(m.attr("GeomFill_BoundWithSurf"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (gp_Pnt (GeomFill_BoundWithSurf::*)( const Standard_Real ) const) static_cast<gp_Pnt (GeomFill_BoundWithSurf::*)( const Standard_Real ) const>(&GeomFill_BoundWithSurf::Value),
             R"#(None)#"  , py::arg("U"))
        .def("D1",
             (void (GeomFill_BoundWithSurf::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const) static_cast<void (GeomFill_BoundWithSurf::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const>(&GeomFill_BoundWithSurf::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("HasNormals",
             (Standard_Boolean (GeomFill_BoundWithSurf::*)() const) static_cast<Standard_Boolean (GeomFill_BoundWithSurf::*)() const>(&GeomFill_BoundWithSurf::HasNormals),
             R"#(None)#" )
        .def("Norm",
             (gp_Vec (GeomFill_BoundWithSurf::*)( const Standard_Real ) const) static_cast<gp_Vec (GeomFill_BoundWithSurf::*)( const Standard_Real ) const>(&GeomFill_BoundWithSurf::Norm),
             R"#(None)#"  , py::arg("U"))
        .def("D1Norm",
             (void (GeomFill_BoundWithSurf::*)( const Standard_Real , gp_Vec & , gp_Vec & ) const) static_cast<void (GeomFill_BoundWithSurf::*)( const Standard_Real , gp_Vec & , gp_Vec & ) const>(&GeomFill_BoundWithSurf::D1Norm),
             R"#(None)#"  , py::arg("U"),  py::arg("N"),  py::arg("DN"))
        .def("Reparametrize",
             (void (GeomFill_BoundWithSurf::*)( const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (GeomFill_BoundWithSurf::*)( const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&GeomFill_BoundWithSurf::Reparametrize),
             R"#(None)#"  , py::arg("First"),  py::arg("Last"),  py::arg("HasDF"),  py::arg("HasDL"),  py::arg("DF"),  py::arg("DL"),  py::arg("Rev"))
        .def("IsDegenerated",
             (Standard_Boolean (GeomFill_BoundWithSurf::*)() const) static_cast<Standard_Boolean (GeomFill_BoundWithSurf::*)() const>(&GeomFill_BoundWithSurf::IsDegenerated),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_BoundWithSurf::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_BoundWithSurf::*)() const>(&GeomFill_BoundWithSurf::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Bounds",
             []( GeomFill_BoundWithSurf &self   ){ Standard_Real  First; Standard_Real  Last; self.Bounds(First,Last); return std::make_tuple(First,Last); },
             R"#(None)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_BoundWithSurf::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_ConstantBiNormal ,opencascade::handle<GeomFill_ConstantBiNormal> , GeomFill_TrihedronLaw>>(m.attr("GeomFill_ConstantBiNormal"))
    // constructors
    // custom constructors
    // methods
        .def("Copy",
             (opencascade::handle<GeomFill_TrihedronLaw> (GeomFill_ConstantBiNormal::*)() const) static_cast<opencascade::handle<GeomFill_TrihedronLaw> (GeomFill_ConstantBiNormal::*)() const>(&GeomFill_ConstantBiNormal::Copy),
             R"#(None)#" )
        .def("SetCurve",
             (void (GeomFill_ConstantBiNormal::*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<void (GeomFill_ConstantBiNormal::*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&GeomFill_ConstantBiNormal::SetCurve),
             R"#(None)#"  , py::arg("C"))
        .def("D0",
             (Standard_Boolean (GeomFill_ConstantBiNormal::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_ConstantBiNormal::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_ConstantBiNormal::D0),
             R"#(Computes Triedrhon on curve at parameter <Param>)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("Normal"),  py::arg("BiNormal"))
        .def("D1",
             (Standard_Boolean (GeomFill_ConstantBiNormal::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_ConstantBiNormal::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_ConstantBiNormal::D1),
             R"#(Computes Triedrhon and derivative Trihedron on curve at parameter <Param> Warning : It used only for C1 or C2 aproximation)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("DTangent"),  py::arg("Normal"),  py::arg("DNormal"),  py::arg("BiNormal"),  py::arg("DBiNormal"))
        .def("D2",
             (Standard_Boolean (GeomFill_ConstantBiNormal::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_ConstantBiNormal::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_ConstantBiNormal::D2),
             R"#(compute Trihedron on curve first and seconde derivatives. Warning : It used only for C2 aproximation)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("DTangent"),  py::arg("D2Tangent"),  py::arg("Normal"),  py::arg("DNormal"),  py::arg("D2Normal"),  py::arg("BiNormal"),  py::arg("DBiNormal"),  py::arg("D2BiNormal"))
        .def("NbIntervals",
             (Standard_Integer (GeomFill_ConstantBiNormal::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (GeomFill_ConstantBiNormal::*)( const GeomAbs_Shape ) const>(&GeomFill_ConstantBiNormal::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (GeomFill_ConstantBiNormal::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (GeomFill_ConstantBiNormal::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&GeomFill_ConstantBiNormal::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("GetAverageLaw",
             (void (GeomFill_ConstantBiNormal::*)( gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (GeomFill_ConstantBiNormal::*)( gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_ConstantBiNormal::GetAverageLaw),
             R"#(Gets average value of Tangent(t) and Normal(t) it is usfull to make fast approximation of rational surfaces.)#"  , py::arg("ATangent"),  py::arg("ANormal"),  py::arg("ABiNormal"))
        .def("IsConstant",
             (Standard_Boolean (GeomFill_ConstantBiNormal::*)() const) static_cast<Standard_Boolean (GeomFill_ConstantBiNormal::*)() const>(&GeomFill_ConstantBiNormal::IsConstant),
             R"#(Says if the law is Constant.)#" )
        .def("IsOnlyBy3dCurve",
             (Standard_Boolean (GeomFill_ConstantBiNormal::*)() const) static_cast<Standard_Boolean (GeomFill_ConstantBiNormal::*)() const>(&GeomFill_ConstantBiNormal::IsOnlyBy3dCurve),
             R"#(Return True.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_ConstantBiNormal::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_ConstantBiNormal::*)() const>(&GeomFill_ConstantBiNormal::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_ConstantBiNormal::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_Coons , shared_ptr<GeomFill_Coons> , GeomFill_Filling>>(m.attr("GeomFill_Coons"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_CorrectedFrenet ,opencascade::handle<GeomFill_CorrectedFrenet> , GeomFill_TrihedronLaw>>(m.attr("GeomFill_CorrectedFrenet"))
    // constructors
    // custom constructors
    // methods
        .def("Copy",
             (opencascade::handle<GeomFill_TrihedronLaw> (GeomFill_CorrectedFrenet::*)() const) static_cast<opencascade::handle<GeomFill_TrihedronLaw> (GeomFill_CorrectedFrenet::*)() const>(&GeomFill_CorrectedFrenet::Copy),
             R"#(None)#" )
        .def("SetCurve",
             (void (GeomFill_CorrectedFrenet::*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<void (GeomFill_CorrectedFrenet::*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&GeomFill_CorrectedFrenet::SetCurve),
             R"#(None)#"  , py::arg("C"))
        .def("SetInterval",
             (void (GeomFill_CorrectedFrenet::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomFill_CorrectedFrenet::*)( const Standard_Real , const Standard_Real ) >(&GeomFill_CorrectedFrenet::SetInterval),
             R"#(None)#"  , py::arg("First"),  py::arg("Last"))
        .def("D0",
             (Standard_Boolean (GeomFill_CorrectedFrenet::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_CorrectedFrenet::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_CorrectedFrenet::D0),
             R"#(compute Triedrhon on curve at parameter <Param>)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("Normal"),  py::arg("BiNormal"))
        .def("D1",
             (Standard_Boolean (GeomFill_CorrectedFrenet::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_CorrectedFrenet::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_CorrectedFrenet::D1),
             R"#(compute Triedrhon and derivative Trihedron on curve at parameter <Param> Warning : It used only for C1 or C2 aproximation)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("DTangent"),  py::arg("Normal"),  py::arg("DNormal"),  py::arg("BiNormal"),  py::arg("DBiNormal"))
        .def("D2",
             (Standard_Boolean (GeomFill_CorrectedFrenet::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_CorrectedFrenet::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_CorrectedFrenet::D2),
             R"#(compute Trihedron on curve first and seconde derivatives. Warning : It used only for C2 aproximation)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("DTangent"),  py::arg("D2Tangent"),  py::arg("Normal"),  py::arg("DNormal"),  py::arg("D2Normal"),  py::arg("BiNormal"),  py::arg("DBiNormal"),  py::arg("D2BiNormal"))
        .def("NbIntervals",
             (Standard_Integer (GeomFill_CorrectedFrenet::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (GeomFill_CorrectedFrenet::*)( const GeomAbs_Shape ) const>(&GeomFill_CorrectedFrenet::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (GeomFill_CorrectedFrenet::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (GeomFill_CorrectedFrenet::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&GeomFill_CorrectedFrenet::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("GetAverageLaw",
             (void (GeomFill_CorrectedFrenet::*)( gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (GeomFill_CorrectedFrenet::*)( gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_CorrectedFrenet::GetAverageLaw),
             R"#(Get average value of Tangent(t) and Normal(t) it is usfull to make fast approximation of rational surfaces.)#"  , py::arg("ATangent"),  py::arg("ANormal"),  py::arg("ABiNormal"))
        .def("IsConstant",
             (Standard_Boolean (GeomFill_CorrectedFrenet::*)() const) static_cast<Standard_Boolean (GeomFill_CorrectedFrenet::*)() const>(&GeomFill_CorrectedFrenet::IsConstant),
             R"#(Say if the law is Constant.)#" )
        .def("IsOnlyBy3dCurve",
             (Standard_Boolean (GeomFill_CorrectedFrenet::*)() const) static_cast<Standard_Boolean (GeomFill_CorrectedFrenet::*)() const>(&GeomFill_CorrectedFrenet::IsOnlyBy3dCurve),
             R"#(Return True.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_CorrectedFrenet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_CorrectedFrenet::*)() const>(&GeomFill_CorrectedFrenet::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_CorrectedFrenet::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_CurveAndTrihedron ,opencascade::handle<GeomFill_CurveAndTrihedron> , GeomFill_LocationLaw>>(m.attr("GeomFill_CurveAndTrihedron"))
    // constructors
    // custom constructors
    // methods
        .def("SetCurve",
             (void (GeomFill_CurveAndTrihedron::*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<void (GeomFill_CurveAndTrihedron::*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&GeomFill_CurveAndTrihedron::SetCurve),
             R"#(None)#"  , py::arg("C"))
        .def("GetCurve",
             (const opencascade::handle<Adaptor3d_HCurve> & (GeomFill_CurveAndTrihedron::*)() const) static_cast<const opencascade::handle<Adaptor3d_HCurve> & (GeomFill_CurveAndTrihedron::*)() const>(&GeomFill_CurveAndTrihedron::GetCurve),
             R"#(None)#" )
        .def("SetTrsf",
             (void (GeomFill_CurveAndTrihedron::*)( const gp_Mat & ) ) static_cast<void (GeomFill_CurveAndTrihedron::*)( const gp_Mat & ) >(&GeomFill_CurveAndTrihedron::SetTrsf),
             R"#(Set a transformation Matrix like the law M(t) become Mat * M(t))#"  , py::arg("Transfo"))
        .def("Copy",
             (opencascade::handle<GeomFill_LocationLaw> (GeomFill_CurveAndTrihedron::*)() const) static_cast<opencascade::handle<GeomFill_LocationLaw> (GeomFill_CurveAndTrihedron::*)() const>(&GeomFill_CurveAndTrihedron::Copy),
             R"#(None)#" )
        .def("D0",
             (Standard_Boolean (GeomFill_CurveAndTrihedron::*)( const Standard_Real , gp_Mat & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_CurveAndTrihedron::*)( const Standard_Real , gp_Mat & , gp_Vec & ) >(&GeomFill_CurveAndTrihedron::D0),
             R"#(compute Location and 2d points)#"  , py::arg("Param"),  py::arg("M"),  py::arg("V"))
        .def("D0",
             (Standard_Boolean (GeomFill_CurveAndTrihedron::*)( const Standard_Real , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & ) ) static_cast<Standard_Boolean (GeomFill_CurveAndTrihedron::*)( const Standard_Real , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & ) >(&GeomFill_CurveAndTrihedron::D0),
             R"#(compute Location and 2d points)#"  , py::arg("Param"),  py::arg("M"),  py::arg("V"),  py::arg("Poles2d"))
        .def("D1",
             (Standard_Boolean (GeomFill_CurveAndTrihedron::*)( const Standard_Real , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & ) ) static_cast<Standard_Boolean (GeomFill_CurveAndTrihedron::*)( const Standard_Real , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & ) >(&GeomFill_CurveAndTrihedron::D1),
             R"#(compute location 2d points and associated first derivatives. Warning : It used only for C1 or C2 aproximation)#"  , py::arg("Param"),  py::arg("M"),  py::arg("V"),  py::arg("DM"),  py::arg("DV"),  py::arg("Poles2d"),  py::arg("DPoles2d"))
        .def("D2",
             (Standard_Boolean (GeomFill_CurveAndTrihedron::*)( const Standard_Real , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & ) ) static_cast<Standard_Boolean (GeomFill_CurveAndTrihedron::*)( const Standard_Real , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & ) >(&GeomFill_CurveAndTrihedron::D2),
             R"#(compute location 2d points and associated first and seconde derivatives. Warning : It used only for C2 aproximation)#"  , py::arg("Param"),  py::arg("M"),  py::arg("V"),  py::arg("DM"),  py::arg("DV"),  py::arg("D2M"),  py::arg("D2V"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"))
        .def("NbIntervals",
             (Standard_Integer (GeomFill_CurveAndTrihedron::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (GeomFill_CurveAndTrihedron::*)( const GeomAbs_Shape ) const>(&GeomFill_CurveAndTrihedron::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (GeomFill_CurveAndTrihedron::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (GeomFill_CurveAndTrihedron::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&GeomFill_CurveAndTrihedron::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("SetInterval",
             (void (GeomFill_CurveAndTrihedron::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomFill_CurveAndTrihedron::*)( const Standard_Real , const Standard_Real ) >(&GeomFill_CurveAndTrihedron::SetInterval),
             R"#(Sets the bounds of the parametric interval on the function This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetMaximalNorm",
             (Standard_Real (GeomFill_CurveAndTrihedron::*)() ) static_cast<Standard_Real (GeomFill_CurveAndTrihedron::*)() >(&GeomFill_CurveAndTrihedron::GetMaximalNorm),
             R"#(Get the maximum Norm of the matrix-location part. It is usful to find an good Tolerance to approx M(t).)#" )
        .def("GetAverageLaw",
             (void (GeomFill_CurveAndTrihedron::*)( gp_Mat & , gp_Vec & ) ) static_cast<void (GeomFill_CurveAndTrihedron::*)( gp_Mat & , gp_Vec & ) >(&GeomFill_CurveAndTrihedron::GetAverageLaw),
             R"#(Get average value of M(t) and V(t) it is usfull to make fast approximation of rational surfaces.)#"  , py::arg("AM"),  py::arg("AV"))
        .def("IsTranslation",
             (Standard_Boolean (GeomFill_CurveAndTrihedron::*)( Standard_Real & ) const) static_cast<Standard_Boolean (GeomFill_CurveAndTrihedron::*)( Standard_Real & ) const>(&GeomFill_CurveAndTrihedron::IsTranslation),
             R"#(Say if the Location Law, is an translation of Location The default implementation is " returns False ".)#"  , py::arg("Error"))
        .def("IsRotation",
             (Standard_Boolean (GeomFill_CurveAndTrihedron::*)( Standard_Real & ) const) static_cast<Standard_Boolean (GeomFill_CurveAndTrihedron::*)( Standard_Real & ) const>(&GeomFill_CurveAndTrihedron::IsRotation),
             R"#(Say if the Location Law, is a rotation of Location The default implementation is " returns False ".)#"  , py::arg("Error"))
        .def("Rotation",
             (void (GeomFill_CurveAndTrihedron::*)( gp_Pnt & ) const) static_cast<void (GeomFill_CurveAndTrihedron::*)( gp_Pnt & ) const>(&GeomFill_CurveAndTrihedron::Rotation),
             R"#(None)#"  , py::arg("Center"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_CurveAndTrihedron::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_CurveAndTrihedron::*)() const>(&GeomFill_CurveAndTrihedron::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("GetInterval",
             []( GeomFill_CurveAndTrihedron &self   ){ Standard_Real  First; Standard_Real  Last; self.GetInterval(First,Last); return std::make_tuple(First,Last); },
             R"#(Gets the bounds of the parametric interval on the function)#" )
        .def("GetDomain",
             []( GeomFill_CurveAndTrihedron &self   ){ Standard_Real  First; Standard_Real  Last; self.GetDomain(First,Last); return std::make_tuple(First,Last); },
             R"#(Gets the bounds of the function parametric domain. Warning: This domain it is not modified by the SetValue method)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_CurveAndTrihedron::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_Curved , shared_ptr<GeomFill_Curved> , GeomFill_Filling>>(m.attr("GeomFill_Curved"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_Darboux ,opencascade::handle<GeomFill_Darboux> , GeomFill_TrihedronLaw>>(m.attr("GeomFill_Darboux"))
    // constructors
    // custom constructors
    // methods
        .def("Copy",
             (opencascade::handle<GeomFill_TrihedronLaw> (GeomFill_Darboux::*)() const) static_cast<opencascade::handle<GeomFill_TrihedronLaw> (GeomFill_Darboux::*)() const>(&GeomFill_Darboux::Copy),
             R"#(None)#" )
        .def("D0",
             (Standard_Boolean (GeomFill_Darboux::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_Darboux::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_Darboux::D0),
             R"#(compute Triedrhon on curve at parameter <Param>)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("Normal"),  py::arg("BiNormal"))
        .def("D1",
             (Standard_Boolean (GeomFill_Darboux::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_Darboux::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_Darboux::D1),
             R"#(compute Triedrhon and derivative Trihedron on curve at parameter <Param> Warning : It used only for C1 or C2 aproximation)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("DTangent"),  py::arg("Normal"),  py::arg("DNormal"),  py::arg("BiNormal"),  py::arg("DBiNormal"))
        .def("D2",
             (Standard_Boolean (GeomFill_Darboux::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_Darboux::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_Darboux::D2),
             R"#(compute Trihedron on curve first and seconde derivatives. Warning : It used only for C2 aproximation)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("DTangent"),  py::arg("D2Tangent"),  py::arg("Normal"),  py::arg("DNormal"),  py::arg("D2Normal"),  py::arg("BiNormal"),  py::arg("DBiNormal"),  py::arg("D2BiNormal"))
        .def("NbIntervals",
             (Standard_Integer (GeomFill_Darboux::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (GeomFill_Darboux::*)( const GeomAbs_Shape ) const>(&GeomFill_Darboux::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (GeomFill_Darboux::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (GeomFill_Darboux::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&GeomFill_Darboux::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("GetAverageLaw",
             (void (GeomFill_Darboux::*)( gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (GeomFill_Darboux::*)( gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_Darboux::GetAverageLaw),
             R"#(Get average value of Tangent(t) and Normal(t) it is usfull to make fast approximation of rational surfaces.)#"  , py::arg("ATangent"),  py::arg("ANormal"),  py::arg("ABiNormal"))
        .def("IsConstant",
             (Standard_Boolean (GeomFill_Darboux::*)() const) static_cast<Standard_Boolean (GeomFill_Darboux::*)() const>(&GeomFill_Darboux::IsConstant),
             R"#(Say if the law is Constant.)#" )
        .def("IsOnlyBy3dCurve",
             (Standard_Boolean (GeomFill_Darboux::*)() const) static_cast<Standard_Boolean (GeomFill_Darboux::*)() const>(&GeomFill_Darboux::IsOnlyBy3dCurve),
             R"#(Return False.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_Darboux::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_Darboux::*)() const>(&GeomFill_Darboux::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_Darboux::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_DegeneratedBound ,opencascade::handle<GeomFill_DegeneratedBound> , GeomFill_Boundary>>(m.attr("GeomFill_DegeneratedBound"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (gp_Pnt (GeomFill_DegeneratedBound::*)( const Standard_Real ) const) static_cast<gp_Pnt (GeomFill_DegeneratedBound::*)( const Standard_Real ) const>(&GeomFill_DegeneratedBound::Value),
             R"#(None)#"  , py::arg("U"))
        .def("D1",
             (void (GeomFill_DegeneratedBound::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const) static_cast<void (GeomFill_DegeneratedBound::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const>(&GeomFill_DegeneratedBound::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("Reparametrize",
             (void (GeomFill_DegeneratedBound::*)( const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (GeomFill_DegeneratedBound::*)( const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&GeomFill_DegeneratedBound::Reparametrize),
             R"#(None)#"  , py::arg("First"),  py::arg("Last"),  py::arg("HasDF"),  py::arg("HasDL"),  py::arg("DF"),  py::arg("DL"),  py::arg("Rev"))
        .def("IsDegenerated",
             (Standard_Boolean (GeomFill_DegeneratedBound::*)() const) static_cast<Standard_Boolean (GeomFill_DegeneratedBound::*)() const>(&GeomFill_DegeneratedBound::IsDegenerated),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_DegeneratedBound::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_DegeneratedBound::*)() const>(&GeomFill_DegeneratedBound::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Bounds",
             []( GeomFill_DegeneratedBound &self   ){ Standard_Real  First; Standard_Real  Last; self.Bounds(First,Last); return std::make_tuple(First,Last); },
             R"#(None)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_DegeneratedBound::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_DiscreteTrihedron ,opencascade::handle<GeomFill_DiscreteTrihedron> , GeomFill_TrihedronLaw>>(m.attr("GeomFill_DiscreteTrihedron"))
    // constructors
    // custom constructors
    // methods
        .def("Copy",
             (opencascade::handle<GeomFill_TrihedronLaw> (GeomFill_DiscreteTrihedron::*)() const) static_cast<opencascade::handle<GeomFill_TrihedronLaw> (GeomFill_DiscreteTrihedron::*)() const>(&GeomFill_DiscreteTrihedron::Copy),
             R"#(None)#" )
        .def("SetCurve",
             (void (GeomFill_DiscreteTrihedron::*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<void (GeomFill_DiscreteTrihedron::*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&GeomFill_DiscreteTrihedron::SetCurve),
             R"#(None)#"  , py::arg("C"))
        .def("D0",
             (Standard_Boolean (GeomFill_DiscreteTrihedron::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_DiscreteTrihedron::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_DiscreteTrihedron::D0),
             R"#(compute Trihedron on curve at parameter <Param>)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("Normal"),  py::arg("BiNormal"))
        .def("D1",
             (Standard_Boolean (GeomFill_DiscreteTrihedron::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_DiscreteTrihedron::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_DiscreteTrihedron::D1),
             R"#(compute Trihedron and derivative Trihedron on curve at parameter <Param> Warning : It used only for C1 or C2 aproximation For the moment it returns null values for DTangent, DNormal and DBiNormal.)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("DTangent"),  py::arg("Normal"),  py::arg("DNormal"),  py::arg("BiNormal"),  py::arg("DBiNormal"))
        .def("D2",
             (Standard_Boolean (GeomFill_DiscreteTrihedron::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_DiscreteTrihedron::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_DiscreteTrihedron::D2),
             R"#(compute Trihedron on curve first and seconde derivatives. Warning : It used only for C2 aproximation For the moment it returns null values for DTangent, DNormal DBiNormal, D2Tangent, D2Normal, D2BiNormal.)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("DTangent"),  py::arg("D2Tangent"),  py::arg("Normal"),  py::arg("DNormal"),  py::arg("D2Normal"),  py::arg("BiNormal"),  py::arg("DBiNormal"),  py::arg("D2BiNormal"))
        .def("NbIntervals",
             (Standard_Integer (GeomFill_DiscreteTrihedron::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (GeomFill_DiscreteTrihedron::*)( const GeomAbs_Shape ) const>(&GeomFill_DiscreteTrihedron::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (GeomFill_DiscreteTrihedron::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (GeomFill_DiscreteTrihedron::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&GeomFill_DiscreteTrihedron::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("GetAverageLaw",
             (void (GeomFill_DiscreteTrihedron::*)( gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (GeomFill_DiscreteTrihedron::*)( gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_DiscreteTrihedron::GetAverageLaw),
             R"#(Get average value of Tangent(t) and Normal(t) it is usful to make fast approximation of rational surfaces.)#"  , py::arg("ATangent"),  py::arg("ANormal"),  py::arg("ABiNormal"))
        .def("IsConstant",
             (Standard_Boolean (GeomFill_DiscreteTrihedron::*)() const) static_cast<Standard_Boolean (GeomFill_DiscreteTrihedron::*)() const>(&GeomFill_DiscreteTrihedron::IsConstant),
             R"#(Say if the law is Constant.)#" )
        .def("IsOnlyBy3dCurve",
             (Standard_Boolean (GeomFill_DiscreteTrihedron::*)() const) static_cast<Standard_Boolean (GeomFill_DiscreteTrihedron::*)() const>(&GeomFill_DiscreteTrihedron::IsOnlyBy3dCurve),
             R"#(Return True.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_DiscreteTrihedron::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_DiscreteTrihedron::*)() const>(&GeomFill_DiscreteTrihedron::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_DiscreteTrihedron::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_DraftTrihedron ,opencascade::handle<GeomFill_DraftTrihedron> , GeomFill_TrihedronLaw>>(m.attr("GeomFill_DraftTrihedron"))
    // constructors
    // custom constructors
    // methods
        .def("Copy",
             (opencascade::handle<GeomFill_TrihedronLaw> (GeomFill_DraftTrihedron::*)() const) static_cast<opencascade::handle<GeomFill_TrihedronLaw> (GeomFill_DraftTrihedron::*)() const>(&GeomFill_DraftTrihedron::Copy),
             R"#(None)#" )
        .def("D0",
             (Standard_Boolean (GeomFill_DraftTrihedron::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_DraftTrihedron::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_DraftTrihedron::D0),
             R"#(compute Triedrhon and derivative Trihedron on curve at parameter <Param> Warning : It used only for C1 or C2 aproximation)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("Normal"),  py::arg("BiNormal"))
        .def("D1",
             (Standard_Boolean (GeomFill_DraftTrihedron::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_DraftTrihedron::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_DraftTrihedron::D1),
             R"#(compute Trihedron on curve first and seconde derivatives. Warning : It used only for C2 aproximation)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("DTangent"),  py::arg("Normal"),  py::arg("DNormal"),  py::arg("BiNormal"),  py::arg("DBiNormal"))
        .def("D2",
             (Standard_Boolean (GeomFill_DraftTrihedron::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_DraftTrihedron::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_DraftTrihedron::D2),
             R"#(None)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("DTangent"),  py::arg("D2Tangent"),  py::arg("Normal"),  py::arg("DNormal"),  py::arg("D2Normal"),  py::arg("BiNormal"),  py::arg("DBiNormal"),  py::arg("D2BiNormal"))
        .def("NbIntervals",
             (Standard_Integer (GeomFill_DraftTrihedron::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (GeomFill_DraftTrihedron::*)( const GeomAbs_Shape ) const>(&GeomFill_DraftTrihedron::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (GeomFill_DraftTrihedron::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (GeomFill_DraftTrihedron::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&GeomFill_DraftTrihedron::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("GetAverageLaw",
             (void (GeomFill_DraftTrihedron::*)( gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (GeomFill_DraftTrihedron::*)( gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_DraftTrihedron::GetAverageLaw),
             R"#(Get average value of Tangent(t) and Normal(t) it is usefull to make fast approximation of rational surfaces.)#"  , py::arg("ATangent"),  py::arg("ANormal"),  py::arg("ABiNormal"))
        .def("IsConstant",
             (Standard_Boolean (GeomFill_DraftTrihedron::*)() const) static_cast<Standard_Boolean (GeomFill_DraftTrihedron::*)() const>(&GeomFill_DraftTrihedron::IsConstant),
             R"#(Say if the law is Constant.)#" )
        .def("IsOnlyBy3dCurve",
             (Standard_Boolean (GeomFill_DraftTrihedron::*)() const) static_cast<Standard_Boolean (GeomFill_DraftTrihedron::*)() const>(&GeomFill_DraftTrihedron::IsOnlyBy3dCurve),
             R"#(Return True.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_DraftTrihedron::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_DraftTrihedron::*)() const>(&GeomFill_DraftTrihedron::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_DraftTrihedron::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_EvolvedSection ,opencascade::handle<GeomFill_EvolvedSection> , GeomFill_SectionLaw>>(m.attr("GeomFill_EvolvedSection"))
    // constructors
    // custom constructors
    // methods
        .def("D0",
             (Standard_Boolean (GeomFill_EvolvedSection::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (GeomFill_EvolvedSection::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<Standard_Real> & ) >(&GeomFill_EvolvedSection::D0),
             R"#(compute the section for v = param)#"  , py::arg("Param"),  py::arg("Poles"),  py::arg("Weigths"))
        .def("D1",
             (Standard_Boolean (GeomFill_EvolvedSection::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (GeomFill_EvolvedSection::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&GeomFill_EvolvedSection::D1),
             R"#(compute the first derivative in v direction of the section for v = param Warning : It used only for C1 or C2 aproximation)#"  , py::arg("Param"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("D2",
             (Standard_Boolean (GeomFill_EvolvedSection::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (GeomFill_EvolvedSection::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&GeomFill_EvolvedSection::D2),
             R"#(compute the second derivative in v direction of the section for v = param Warning : It used only for C2 aproximation)#"  , py::arg("Param"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
        .def("BSplineSurface",
             (opencascade::handle<Geom_BSplineSurface> (GeomFill_EvolvedSection::*)() const) static_cast<opencascade::handle<Geom_BSplineSurface> (GeomFill_EvolvedSection::*)() const>(&GeomFill_EvolvedSection::BSplineSurface),
             R"#(give if possible an bspline Surface, like iso-v are the section. If it is not possible this methode have to get an Null Surface. Is it the default implementation.)#" )
        .def("Knots",
             (void (GeomFill_EvolvedSection::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (GeomFill_EvolvedSection::*)( NCollection_Array1<Standard_Real> & ) const>(&GeomFill_EvolvedSection::Knots),
             R"#(get the Knots of the section)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (GeomFill_EvolvedSection::*)( NCollection_Array1<Standard_Integer> & ) const) static_cast<void (GeomFill_EvolvedSection::*)( NCollection_Array1<Standard_Integer> & ) const>(&GeomFill_EvolvedSection::Mults),
             R"#(get the Multplicities of the section)#"  , py::arg("TMults"))
        .def("IsRational",
             (Standard_Boolean (GeomFill_EvolvedSection::*)() const) static_cast<Standard_Boolean (GeomFill_EvolvedSection::*)() const>(&GeomFill_EvolvedSection::IsRational),
             R"#(Returns if the sections are rationnal or not)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (GeomFill_EvolvedSection::*)() const) static_cast<Standard_Boolean (GeomFill_EvolvedSection::*)() const>(&GeomFill_EvolvedSection::IsUPeriodic),
             R"#(Returns if the sections are periodic or not)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (GeomFill_EvolvedSection::*)() const) static_cast<Standard_Boolean (GeomFill_EvolvedSection::*)() const>(&GeomFill_EvolvedSection::IsVPeriodic),
             R"#(Returns if the law isperiodic or not)#" )
        .def("NbIntervals",
             (Standard_Integer (GeomFill_EvolvedSection::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (GeomFill_EvolvedSection::*)( const GeomAbs_Shape ) const>(&GeomFill_EvolvedSection::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (GeomFill_EvolvedSection::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (GeomFill_EvolvedSection::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&GeomFill_EvolvedSection::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("SetInterval",
             (void (GeomFill_EvolvedSection::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomFill_EvolvedSection::*)( const Standard_Real , const Standard_Real ) >(&GeomFill_EvolvedSection::SetInterval),
             R"#(Sets the bounds of the parametric interval on the function This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (GeomFill_EvolvedSection::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<Standard_Real> & ) const) static_cast<void (GeomFill_EvolvedSection::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<Standard_Real> & ) const>(&GeomFill_EvolvedSection::GetTolerance),
             R"#(Returns the tolerances associated at each poles to reach in approximation, to satisfy: BoundTol error at the Boundary AngleTol tangent error at the Boundary (in radian) SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"))
        .def("BarycentreOfSurf",
             (gp_Pnt (GeomFill_EvolvedSection::*)() const) static_cast<gp_Pnt (GeomFill_EvolvedSection::*)() const>(&GeomFill_EvolvedSection::BarycentreOfSurf),
             R"#(Get the barycentre of Surface. An very poor estimation is sufficent. This information is usefull to perform well conditioned rational approximation. Warning: Used only if <me> IsRational)#" )
        .def("MaximalSection",
             (Standard_Real (GeomFill_EvolvedSection::*)() const) static_cast<Standard_Real (GeomFill_EvolvedSection::*)() const>(&GeomFill_EvolvedSection::MaximalSection),
             R"#(Returns the length of the greater section. This information is usefull to G1's control. Warning: With an little value, approximation can be slower.)#" )
        .def("GetMinimalWeight",
             (void (GeomFill_EvolvedSection::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (GeomFill_EvolvedSection::*)( NCollection_Array1<Standard_Real> & ) const>(&GeomFill_EvolvedSection::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles in all sections. This information is usefull to control error in rational approximation. Warning: Used only if <me> IsRational)#"  , py::arg("Weigths"))
        .def("IsConstant",
             (Standard_Boolean (GeomFill_EvolvedSection::*)( Standard_Real & ) const) static_cast<Standard_Boolean (GeomFill_EvolvedSection::*)( Standard_Real & ) const>(&GeomFill_EvolvedSection::IsConstant),
             R"#(return True If the Law isConstant)#"  , py::arg("Error"))
        .def("ConstantSection",
             (opencascade::handle<Geom_Curve> (GeomFill_EvolvedSection::*)() const) static_cast<opencascade::handle<Geom_Curve> (GeomFill_EvolvedSection::*)() const>(&GeomFill_EvolvedSection::ConstantSection),
             R"#(Return the constant Section if <me> IsConstant.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_EvolvedSection::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_EvolvedSection::*)() const>(&GeomFill_EvolvedSection::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("SectionShape",
             []( GeomFill_EvolvedSection &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; self.SectionShape(NbPoles,NbKnots,Degree); return std::make_tuple(NbPoles,NbKnots,Degree); },
             R"#(get the format of an section)#" )
        .def("GetInterval",
             []( GeomFill_EvolvedSection &self   ){ Standard_Real  First; Standard_Real  Last; self.GetInterval(First,Last); return std::make_tuple(First,Last); },
             R"#(Gets the bounds of the parametric interval on the function)#" )
        .def("GetDomain",
             []( GeomFill_EvolvedSection &self   ){ Standard_Real  First; Standard_Real  Last; self.GetDomain(First,Last); return std::make_tuple(First,Last); },
             R"#(Gets the bounds of the function parametric domain. Warning: This domain it is not modified by the SetValue method)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_EvolvedSection::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_Fixed ,opencascade::handle<GeomFill_Fixed> , GeomFill_TrihedronLaw>>(m.attr("GeomFill_Fixed"))
    // constructors
    // custom constructors
    // methods
        .def("Copy",
             (opencascade::handle<GeomFill_TrihedronLaw> (GeomFill_Fixed::*)() const) static_cast<opencascade::handle<GeomFill_TrihedronLaw> (GeomFill_Fixed::*)() const>(&GeomFill_Fixed::Copy),
             R"#(None)#" )
        .def("D0",
             (Standard_Boolean (GeomFill_Fixed::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_Fixed::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_Fixed::D0),
             R"#(compute Triedrhon on curve at parameter <Param>)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("Normal"),  py::arg("BiNormal"))
        .def("D1",
             (Standard_Boolean (GeomFill_Fixed::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_Fixed::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_Fixed::D1),
             R"#(compute Triedrhon and derivative Trihedron on curve at parameter <Param> Warning : It used only for C1 or C2 aproximation)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("DTangent"),  py::arg("Normal"),  py::arg("DNormal"),  py::arg("BiNormal"),  py::arg("DBiNormal"))
        .def("D2",
             (Standard_Boolean (GeomFill_Fixed::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_Fixed::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_Fixed::D2),
             R"#(compute Trihedron on curve first and seconde derivatives. Warning : It used only for C2 aproximation)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("DTangent"),  py::arg("D2Tangent"),  py::arg("Normal"),  py::arg("DNormal"),  py::arg("D2Normal"),  py::arg("BiNormal"),  py::arg("DBiNormal"),  py::arg("D2BiNormal"))
        .def("NbIntervals",
             (Standard_Integer (GeomFill_Fixed::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (GeomFill_Fixed::*)( const GeomAbs_Shape ) const>(&GeomFill_Fixed::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (GeomFill_Fixed::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (GeomFill_Fixed::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&GeomFill_Fixed::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("GetAverageLaw",
             (void (GeomFill_Fixed::*)( gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (GeomFill_Fixed::*)( gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_Fixed::GetAverageLaw),
             R"#(Get average value of Tangent(t) and Normal(t) it is usfull to make fast approximation of rational surfaces.)#"  , py::arg("ATangent"),  py::arg("ANormal"),  py::arg("ABiNormal"))
        .def("IsConstant",
             (Standard_Boolean (GeomFill_Fixed::*)() const) static_cast<Standard_Boolean (GeomFill_Fixed::*)() const>(&GeomFill_Fixed::IsConstant),
             R"#(Return True.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_Fixed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_Fixed::*)() const>(&GeomFill_Fixed::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_Fixed::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_Frenet ,opencascade::handle<GeomFill_Frenet> , GeomFill_TrihedronLaw>>(m.attr("GeomFill_Frenet"))
    // constructors
    // custom constructors
    // methods
        .def("Copy",
             (opencascade::handle<GeomFill_TrihedronLaw> (GeomFill_Frenet::*)() const) static_cast<opencascade::handle<GeomFill_TrihedronLaw> (GeomFill_Frenet::*)() const>(&GeomFill_Frenet::Copy),
             R"#(None)#" )
        .def("SetCurve",
             (void (GeomFill_Frenet::*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<void (GeomFill_Frenet::*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&GeomFill_Frenet::SetCurve),
             R"#(None)#"  , py::arg("C"))
        .def("D0",
             (Standard_Boolean (GeomFill_Frenet::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_Frenet::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_Frenet::D0),
             R"#(compute Triedrhon on curve at parameter <Param>)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("Normal"),  py::arg("BiNormal"))
        .def("D1",
             (Standard_Boolean (GeomFill_Frenet::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_Frenet::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_Frenet::D1),
             R"#(compute Triedrhon and derivative Trihedron on curve at parameter <Param> Warning : It used only for C1 or C2 aproximation)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("DTangent"),  py::arg("Normal"),  py::arg("DNormal"),  py::arg("BiNormal"),  py::arg("DBiNormal"))
        .def("D2",
             (Standard_Boolean (GeomFill_Frenet::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_Frenet::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_Frenet::D2),
             R"#(compute Trihedron on curve first and seconde derivatives. Warning : It used only for C2 aproximation)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("DTangent"),  py::arg("D2Tangent"),  py::arg("Normal"),  py::arg("DNormal"),  py::arg("D2Normal"),  py::arg("BiNormal"),  py::arg("DBiNormal"),  py::arg("D2BiNormal"))
        .def("NbIntervals",
             (Standard_Integer (GeomFill_Frenet::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (GeomFill_Frenet::*)( const GeomAbs_Shape ) const>(&GeomFill_Frenet::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (GeomFill_Frenet::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (GeomFill_Frenet::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&GeomFill_Frenet::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("GetAverageLaw",
             (void (GeomFill_Frenet::*)( gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (GeomFill_Frenet::*)( gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_Frenet::GetAverageLaw),
             R"#(Get average value of Tangent(t) and Normal(t) it is usfull to make fast approximation of rational surfaces.)#"  , py::arg("ATangent"),  py::arg("ANormal"),  py::arg("ABiNormal"))
        .def("IsConstant",
             (Standard_Boolean (GeomFill_Frenet::*)() const) static_cast<Standard_Boolean (GeomFill_Frenet::*)() const>(&GeomFill_Frenet::IsConstant),
             R"#(Say if the law is Constant.)#" )
        .def("IsOnlyBy3dCurve",
             (Standard_Boolean (GeomFill_Frenet::*)() const) static_cast<Standard_Boolean (GeomFill_Frenet::*)() const>(&GeomFill_Frenet::IsOnlyBy3dCurve),
             R"#(Return True.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_Frenet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_Frenet::*)() const>(&GeomFill_Frenet::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_Frenet::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_Generator , shared_ptr<GeomFill_Generator> , GeomFill_Profiler>>(m.attr("GeomFill_Generator"))
    // constructors
    // custom constructors
    // methods
        .def("Perform",
             (void (GeomFill_Generator::*)( const Standard_Real ) ) static_cast<void (GeomFill_Generator::*)( const Standard_Real ) >(&GeomFill_Generator::Perform),
             R"#(Converts all curves to BSplineCurves. Set them to the common profile. Compute the surface (degv = 1). <PTol> is used to compare 2 knots.)#"  , py::arg("PTol"))
        .def("Surface",
             (const opencascade::handle<Geom_Surface> & (GeomFill_Generator::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (GeomFill_Generator::*)() const>(&GeomFill_Generator::Surface),
             R"#(None)#" )
        .def("Surface",
             (const opencascade::handle<Geom_Surface> & (GeomFill_Generator::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (GeomFill_Generator::*)() const>(&GeomFill_Generator::Surface),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_LocationDraft ,opencascade::handle<GeomFill_LocationDraft> , GeomFill_LocationLaw>>(m.attr("GeomFill_LocationDraft"))
    // constructors
    // custom constructors
    // methods
        .def("SetCurve",
             (void (GeomFill_LocationDraft::*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<void (GeomFill_LocationDraft::*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&GeomFill_LocationDraft::SetCurve),
             R"#(None)#"  , py::arg("C"))
        .def("GetCurve",
             (const opencascade::handle<Adaptor3d_HCurve> & (GeomFill_LocationDraft::*)() const) static_cast<const opencascade::handle<Adaptor3d_HCurve> & (GeomFill_LocationDraft::*)() const>(&GeomFill_LocationDraft::GetCurve),
             R"#(None)#" )
        .def("SetTrsf",
             (void (GeomFill_LocationDraft::*)( const gp_Mat & ) ) static_cast<void (GeomFill_LocationDraft::*)( const gp_Mat & ) >(&GeomFill_LocationDraft::SetTrsf),
             R"#(None)#"  , py::arg("Transfo"))
        .def("Copy",
             (opencascade::handle<GeomFill_LocationLaw> (GeomFill_LocationDraft::*)() const) static_cast<opencascade::handle<GeomFill_LocationLaw> (GeomFill_LocationDraft::*)() const>(&GeomFill_LocationDraft::Copy),
             R"#(None)#" )
        .def("D0",
             (Standard_Boolean (GeomFill_LocationDraft::*)( const Standard_Real , gp_Mat & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_LocationDraft::*)( const Standard_Real , gp_Mat & , gp_Vec & ) >(&GeomFill_LocationDraft::D0),
             R"#(compute Location)#"  , py::arg("Param"),  py::arg("M"),  py::arg("V"))
        .def("D0",
             (Standard_Boolean (GeomFill_LocationDraft::*)( const Standard_Real , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & ) ) static_cast<Standard_Boolean (GeomFill_LocationDraft::*)( const Standard_Real , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & ) >(&GeomFill_LocationDraft::D0),
             R"#(compute Location and 2d points)#"  , py::arg("Param"),  py::arg("M"),  py::arg("V"),  py::arg("Poles2d"))
        .def("D1",
             (Standard_Boolean (GeomFill_LocationDraft::*)( const Standard_Real , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & ) ) static_cast<Standard_Boolean (GeomFill_LocationDraft::*)( const Standard_Real , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & ) >(&GeomFill_LocationDraft::D1),
             R"#(compute location 2d points and associated first derivatives. Warning : It used only for C1 or C2 aproximation)#"  , py::arg("Param"),  py::arg("M"),  py::arg("V"),  py::arg("DM"),  py::arg("DV"),  py::arg("Poles2d"),  py::arg("DPoles2d"))
        .def("D2",
             (Standard_Boolean (GeomFill_LocationDraft::*)( const Standard_Real , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & ) ) static_cast<Standard_Boolean (GeomFill_LocationDraft::*)( const Standard_Real , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & ) >(&GeomFill_LocationDraft::D2),
             R"#(compute location 2d points and associated first and seconde derivatives. Warning : It used only for C2 aproximation)#"  , py::arg("Param"),  py::arg("M"),  py::arg("V"),  py::arg("DM"),  py::arg("DV"),  py::arg("D2M"),  py::arg("D2V"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"))
        .def("HasFirstRestriction",
             (Standard_Boolean (GeomFill_LocationDraft::*)() const) static_cast<Standard_Boolean (GeomFill_LocationDraft::*)() const>(&GeomFill_LocationDraft::HasFirstRestriction),
             R"#(Say if the first restriction is defined in this class. If it is true the first element of poles array in D0,D1,D2... Correspond to this restriction. Returns Standard_False (default implementation))#" )
        .def("HasLastRestriction",
             (Standard_Boolean (GeomFill_LocationDraft::*)() const) static_cast<Standard_Boolean (GeomFill_LocationDraft::*)() const>(&GeomFill_LocationDraft::HasLastRestriction),
             R"#(Say if the last restriction is defined in this class. If it is true the last element of poles array in D0,D1,D2... Correspond to this restriction. Returns Standard_False (default implementation))#" )
        .def("TraceNumber",
             (Standard_Integer (GeomFill_LocationDraft::*)() const) static_cast<Standard_Integer (GeomFill_LocationDraft::*)() const>(&GeomFill_LocationDraft::TraceNumber),
             R"#(Give the number of trace (Curves 2d wich are not restriction) Returns 1 (default implementation))#" )
        .def("NbIntervals",
             (Standard_Integer (GeomFill_LocationDraft::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (GeomFill_LocationDraft::*)( const GeomAbs_Shape ) const>(&GeomFill_LocationDraft::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (GeomFill_LocationDraft::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (GeomFill_LocationDraft::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&GeomFill_LocationDraft::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("SetInterval",
             (void (GeomFill_LocationDraft::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomFill_LocationDraft::*)( const Standard_Real , const Standard_Real ) >(&GeomFill_LocationDraft::SetInterval),
             R"#(Sets the bounds of the parametric interval on the function This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetMaximalNorm",
             (Standard_Real (GeomFill_LocationDraft::*)() ) static_cast<Standard_Real (GeomFill_LocationDraft::*)() >(&GeomFill_LocationDraft::GetMaximalNorm),
             R"#(Get the maximum Norm of the matrix-location part. It is usful to find an good Tolerance to approx M(t).)#" )
        .def("GetAverageLaw",
             (void (GeomFill_LocationDraft::*)( gp_Mat & , gp_Vec & ) ) static_cast<void (GeomFill_LocationDraft::*)( gp_Mat & , gp_Vec & ) >(&GeomFill_LocationDraft::GetAverageLaw),
             R"#(Get average value of M(t) and V(t) it is usfull to make fast approximation of rational surfaces.)#"  , py::arg("AM"),  py::arg("AV"))
        .def("IsTranslation",
             (Standard_Boolean (GeomFill_LocationDraft::*)( Standard_Real & ) const) static_cast<Standard_Boolean (GeomFill_LocationDraft::*)( Standard_Real & ) const>(&GeomFill_LocationDraft::IsTranslation),
             R"#(Say if the Location Law, is an translation of Location The default implementation is " returns False ".)#"  , py::arg("Error"))
        .def("IsRotation",
             (Standard_Boolean (GeomFill_LocationDraft::*)( Standard_Real & ) const) static_cast<Standard_Boolean (GeomFill_LocationDraft::*)( Standard_Real & ) const>(&GeomFill_LocationDraft::IsRotation),
             R"#(Say if the Location Law, is a rotation of Location The default implementation is " returns False ".)#"  , py::arg("Error"))
        .def("Rotation",
             (void (GeomFill_LocationDraft::*)( gp_Pnt & ) const) static_cast<void (GeomFill_LocationDraft::*)( gp_Pnt & ) const>(&GeomFill_LocationDraft::Rotation),
             R"#(None)#"  , py::arg("Center"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_LocationDraft::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_LocationDraft::*)() const>(&GeomFill_LocationDraft::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("GetInterval",
             []( GeomFill_LocationDraft &self   ){ Standard_Real  First; Standard_Real  Last; self.GetInterval(First,Last); return std::make_tuple(First,Last); },
             R"#(Gets the bounds of the parametric interval on the function)#" )
        .def("GetDomain",
             []( GeomFill_LocationDraft &self   ){ Standard_Real  First; Standard_Real  Last; self.GetDomain(First,Last); return std::make_tuple(First,Last); },
             R"#(Gets the bounds of the function parametric domain. Warning: This domain it is not modified by the SetValue method)#" )
        .def("Resolution",
             []( GeomFill_LocationDraft &self , const Standard_Integer Index,const Standard_Real Tol ){ Standard_Real  TolU; Standard_Real  TolV; self.Resolution(Index,Tol,TolU,TolV); return std::make_tuple(TolU,TolV); },
             R"#(Returns the resolutions in the sub-space 2d <Index> This information is usfull to find an good tolerance in 2d approximation. Warning: Used only if Nb2dCurve > 0)#"  , py::arg("Index"),  py::arg("Tol"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_LocationDraft::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_LocationGuide ,opencascade::handle<GeomFill_LocationGuide> , GeomFill_LocationLaw>>(m.attr("GeomFill_LocationGuide"))
    // constructors
    // custom constructors
    // methods
        .def("SetCurve",
             (void (GeomFill_LocationGuide::*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<void (GeomFill_LocationGuide::*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&GeomFill_LocationGuide::SetCurve),
             R"#(None)#"  , py::arg("C"))
        .def("GetCurve",
             (const opencascade::handle<Adaptor3d_HCurve> & (GeomFill_LocationGuide::*)() const) static_cast<const opencascade::handle<Adaptor3d_HCurve> & (GeomFill_LocationGuide::*)() const>(&GeomFill_LocationGuide::GetCurve),
             R"#(None)#" )
        .def("SetTrsf",
             (void (GeomFill_LocationGuide::*)( const gp_Mat & ) ) static_cast<void (GeomFill_LocationGuide::*)( const gp_Mat & ) >(&GeomFill_LocationGuide::SetTrsf),
             R"#(None)#"  , py::arg("Transfo"))
        .def("Copy",
             (opencascade::handle<GeomFill_LocationLaw> (GeomFill_LocationGuide::*)() const) static_cast<opencascade::handle<GeomFill_LocationLaw> (GeomFill_LocationGuide::*)() const>(&GeomFill_LocationGuide::Copy),
             R"#(None)#" )
        .def("D0",
             (Standard_Boolean (GeomFill_LocationGuide::*)( const Standard_Real , gp_Mat & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_LocationGuide::*)( const Standard_Real , gp_Mat & , gp_Vec & ) >(&GeomFill_LocationGuide::D0),
             R"#(compute Location)#"  , py::arg("Param"),  py::arg("M"),  py::arg("V"))
        .def("D0",
             (Standard_Boolean (GeomFill_LocationGuide::*)( const Standard_Real , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & ) ) static_cast<Standard_Boolean (GeomFill_LocationGuide::*)( const Standard_Real , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & ) >(&GeomFill_LocationGuide::D0),
             R"#(compute Location and 2d points)#"  , py::arg("Param"),  py::arg("M"),  py::arg("V"),  py::arg("Poles2d"))
        .def("D1",
             (Standard_Boolean (GeomFill_LocationGuide::*)( const Standard_Real , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & ) ) static_cast<Standard_Boolean (GeomFill_LocationGuide::*)( const Standard_Real , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & ) >(&GeomFill_LocationGuide::D1),
             R"#(compute location 2d points and associated first derivatives. Warning : It used only for C1 or C2 aproximation)#"  , py::arg("Param"),  py::arg("M"),  py::arg("V"),  py::arg("DM"),  py::arg("DV"),  py::arg("Poles2d"),  py::arg("DPoles2d"))
        .def("D2",
             (Standard_Boolean (GeomFill_LocationGuide::*)( const Standard_Real , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & ) ) static_cast<Standard_Boolean (GeomFill_LocationGuide::*)( const Standard_Real , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , gp_Mat & , gp_Vec & , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec2d> & ) >(&GeomFill_LocationGuide::D2),
             R"#(compute location 2d points and associated first and seconde derivatives. Warning : It used only for C2 aproximation)#"  , py::arg("Param"),  py::arg("M"),  py::arg("V"),  py::arg("DM"),  py::arg("DV"),  py::arg("D2M"),  py::arg("D2V"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"))
        .def("HasFirstRestriction",
             (Standard_Boolean (GeomFill_LocationGuide::*)() const) static_cast<Standard_Boolean (GeomFill_LocationGuide::*)() const>(&GeomFill_LocationGuide::HasFirstRestriction),
             R"#(Say if the first restriction is defined in this class. If it is true the first element of poles array in D0,D1,D2... Correspond to this restriction. Returns Standard_False (default implementation))#" )
        .def("HasLastRestriction",
             (Standard_Boolean (GeomFill_LocationGuide::*)() const) static_cast<Standard_Boolean (GeomFill_LocationGuide::*)() const>(&GeomFill_LocationGuide::HasLastRestriction),
             R"#(Say if the last restriction is defined in this class. If it is true the last element of poles array in D0,D1,D2... Correspond to this restriction. Returns Standard_False (default implementation))#" )
        .def("TraceNumber",
             (Standard_Integer (GeomFill_LocationGuide::*)() const) static_cast<Standard_Integer (GeomFill_LocationGuide::*)() const>(&GeomFill_LocationGuide::TraceNumber),
             R"#(Give the number of trace (Curves 2d wich are not restriction) Returns 1 (default implementation))#" )
        .def("ErrorStatus",
             (GeomFill_PipeError (GeomFill_LocationGuide::*)() const) static_cast<GeomFill_PipeError (GeomFill_LocationGuide::*)() const>(&GeomFill_LocationGuide::ErrorStatus),
             R"#(Give a status to the Law Returns PipeOk (default implementation))#" )
        .def("NbIntervals",
             (Standard_Integer (GeomFill_LocationGuide::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (GeomFill_LocationGuide::*)( const GeomAbs_Shape ) const>(&GeomFill_LocationGuide::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (GeomFill_LocationGuide::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (GeomFill_LocationGuide::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&GeomFill_LocationGuide::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("SetInterval",
             (void (GeomFill_LocationGuide::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomFill_LocationGuide::*)( const Standard_Real , const Standard_Real ) >(&GeomFill_LocationGuide::SetInterval),
             R"#(Sets the bounds of the parametric interval on the function This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("SetTolerance",
             (void (GeomFill_LocationGuide::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomFill_LocationGuide::*)( const Standard_Real , const Standard_Real ) >(&GeomFill_LocationGuide::SetTolerance),
             R"#(Is usefull, if (me) have to run numerical algorithm to perform D0, D1 or D2 The default implementation make nothing.)#"  , py::arg("Tol3d"),  py::arg("Tol2d"))
        .def("GetMaximalNorm",
             (Standard_Real (GeomFill_LocationGuide::*)() ) static_cast<Standard_Real (GeomFill_LocationGuide::*)() >(&GeomFill_LocationGuide::GetMaximalNorm),
             R"#(Get the maximum Norm of the matrix-location part. It is usful to find an good Tolerance to approx M(t).)#" )
        .def("GetAverageLaw",
             (void (GeomFill_LocationGuide::*)( gp_Mat & , gp_Vec & ) ) static_cast<void (GeomFill_LocationGuide::*)( gp_Mat & , gp_Vec & ) >(&GeomFill_LocationGuide::GetAverageLaw),
             R"#(Get average value of M(t) and V(t) it is usfull to make fast approximation of rational surfaces.)#"  , py::arg("AM"),  py::arg("AV"))
        .def("IsTranslation",
             (Standard_Boolean (GeomFill_LocationGuide::*)( Standard_Real & ) const) static_cast<Standard_Boolean (GeomFill_LocationGuide::*)( Standard_Real & ) const>(&GeomFill_LocationGuide::IsTranslation),
             R"#(Say if the Location Law, is an translation of Location The default implementation is " returns False ".)#"  , py::arg("Error"))
        .def("IsRotation",
             (Standard_Boolean (GeomFill_LocationGuide::*)( Standard_Real & ) const) static_cast<Standard_Boolean (GeomFill_LocationGuide::*)( Standard_Real & ) const>(&GeomFill_LocationGuide::IsRotation),
             R"#(Say if the Location Law, is a rotation of Location The default implementation is " returns False ".)#"  , py::arg("Error"))
        .def("Rotation",
             (void (GeomFill_LocationGuide::*)( gp_Pnt & ) const) static_cast<void (GeomFill_LocationGuide::*)( gp_Pnt & ) const>(&GeomFill_LocationGuide::Rotation),
             R"#(None)#"  , py::arg("Center"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_LocationGuide::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_LocationGuide::*)() const>(&GeomFill_LocationGuide::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("GetInterval",
             []( GeomFill_LocationGuide &self   ){ Standard_Real  First; Standard_Real  Last; self.GetInterval(First,Last); return std::make_tuple(First,Last); },
             R"#(Gets the bounds of the parametric interval on the function)#" )
        .def("GetDomain",
             []( GeomFill_LocationGuide &self   ){ Standard_Real  First; Standard_Real  Last; self.GetDomain(First,Last); return std::make_tuple(First,Last); },
             R"#(Gets the bounds of the function parametric domain. Warning: This domain it is not modified by the SetValue method)#" )
        .def("Resolution",
             []( GeomFill_LocationGuide &self , const Standard_Integer Index,const Standard_Real Tol ){ Standard_Real  TolU; Standard_Real  TolV; self.Resolution(Index,Tol,TolU,TolV); return std::make_tuple(TolU,TolV); },
             R"#(Returns the resolutions in the sub-space 2d <Index> This information is usfull to find an good tolerance in 2d approximation. Warning: Used only if Nb2dCurve > 0)#"  , py::arg("Index"),  py::arg("Tol"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_LocationGuide::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_NSections ,opencascade::handle<GeomFill_NSections> , GeomFill_SectionLaw>>(m.attr("GeomFill_NSections"))
    // constructors
    // custom constructors
    // methods
        .def("D0",
             (Standard_Boolean (GeomFill_NSections::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (GeomFill_NSections::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<Standard_Real> & ) >(&GeomFill_NSections::D0),
             R"#(compute the section for v = param)#"  , py::arg("Param"),  py::arg("Poles"),  py::arg("Weigths"))
        .def("D1",
             (Standard_Boolean (GeomFill_NSections::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (GeomFill_NSections::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&GeomFill_NSections::D1),
             R"#(compute the first derivative in v direction of the section for v = param Warning : It used only for C1 or C2 aproximation)#"  , py::arg("Param"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("D2",
             (Standard_Boolean (GeomFill_NSections::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (GeomFill_NSections::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&GeomFill_NSections::D2),
             R"#(compute the second derivative in v direction of the section for v = param Warning : It used only for C2 aproximation)#"  , py::arg("Param"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
        .def("BSplineSurface",
             (opencascade::handle<Geom_BSplineSurface> (GeomFill_NSections::*)() const) static_cast<opencascade::handle<Geom_BSplineSurface> (GeomFill_NSections::*)() const>(&GeomFill_NSections::BSplineSurface),
             R"#(give if possible an bspline Surface, like iso-v are the section. If it is not possible this methode have to get an Null Surface. Is it the default implementation.)#" )
        .def("Knots",
             (void (GeomFill_NSections::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (GeomFill_NSections::*)( NCollection_Array1<Standard_Real> & ) const>(&GeomFill_NSections::Knots),
             R"#(get the Knots of the section)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (GeomFill_NSections::*)( NCollection_Array1<Standard_Integer> & ) const) static_cast<void (GeomFill_NSections::*)( NCollection_Array1<Standard_Integer> & ) const>(&GeomFill_NSections::Mults),
             R"#(get the Multplicities of the section)#"  , py::arg("TMults"))
        .def("IsRational",
             (Standard_Boolean (GeomFill_NSections::*)() const) static_cast<Standard_Boolean (GeomFill_NSections::*)() const>(&GeomFill_NSections::IsRational),
             R"#(Returns if the sections are rationnal or not)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (GeomFill_NSections::*)() const) static_cast<Standard_Boolean (GeomFill_NSections::*)() const>(&GeomFill_NSections::IsUPeriodic),
             R"#(Returns if the sections are periodic or not)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (GeomFill_NSections::*)() const) static_cast<Standard_Boolean (GeomFill_NSections::*)() const>(&GeomFill_NSections::IsVPeriodic),
             R"#(Returns if the law isperiodic or not)#" )
        .def("NbIntervals",
             (Standard_Integer (GeomFill_NSections::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (GeomFill_NSections::*)( const GeomAbs_Shape ) const>(&GeomFill_NSections::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (GeomFill_NSections::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (GeomFill_NSections::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&GeomFill_NSections::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("SetInterval",
             (void (GeomFill_NSections::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomFill_NSections::*)( const Standard_Real , const Standard_Real ) >(&GeomFill_NSections::SetInterval),
             R"#(Sets the bounds of the parametric interval on the function This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (GeomFill_NSections::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<Standard_Real> & ) const) static_cast<void (GeomFill_NSections::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<Standard_Real> & ) const>(&GeomFill_NSections::GetTolerance),
             R"#(Returns the tolerances associated at each poles to reach in approximation, to satisfy: BoundTol error at the Boundary AngleTol tangent error at the Boundary (in radian) SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"))
        .def("BarycentreOfSurf",
             (gp_Pnt (GeomFill_NSections::*)() const) static_cast<gp_Pnt (GeomFill_NSections::*)() const>(&GeomFill_NSections::BarycentreOfSurf),
             R"#(Get the barycentre of Surface. An very poor estimation is sufficent. This information is usefull to perform well conditioned rational approximation. Warning: Used only if <me> IsRational)#" )
        .def("MaximalSection",
             (Standard_Real (GeomFill_NSections::*)() const) static_cast<Standard_Real (GeomFill_NSections::*)() const>(&GeomFill_NSections::MaximalSection),
             R"#(Returns the length of the greater section. This information is usefull to G1's control. Warning: With an little value, approximation can be slower.)#" )
        .def("GetMinimalWeight",
             (void (GeomFill_NSections::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (GeomFill_NSections::*)( NCollection_Array1<Standard_Real> & ) const>(&GeomFill_NSections::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles in all sections. This information is usefull to control error in rational approximation. Warning: Used only if <me> IsRational)#"  , py::arg("Weigths"))
        .def("IsConstant",
             (Standard_Boolean (GeomFill_NSections::*)( Standard_Real & ) const) static_cast<Standard_Boolean (GeomFill_NSections::*)( Standard_Real & ) const>(&GeomFill_NSections::IsConstant),
             R"#(return True If the Law isConstant)#"  , py::arg("Error"))
        .def("ConstantSection",
             (opencascade::handle<Geom_Curve> (GeomFill_NSections::*)() const) static_cast<opencascade::handle<Geom_Curve> (GeomFill_NSections::*)() const>(&GeomFill_NSections::ConstantSection),
             R"#(Return the constant Section if <me> IsConstant.)#" )
        .def("IsConicalLaw",
             (Standard_Boolean (GeomFill_NSections::*)( Standard_Real & ) const) static_cast<Standard_Boolean (GeomFill_NSections::*)( Standard_Real & ) const>(&GeomFill_NSections::IsConicalLaw),
             R"#(Returns True if all section are circle, with same plane,same center and linear radius evolution Return False by Default.)#"  , py::arg("Error"))
        .def("CirclSection",
             (opencascade::handle<Geom_Curve> (GeomFill_NSections::*)( const Standard_Real ) const) static_cast<opencascade::handle<Geom_Curve> (GeomFill_NSections::*)( const Standard_Real ) const>(&GeomFill_NSections::CirclSection),
             R"#(Return the circle section at parameter <Param>, if <me> a IsConicalLaw)#"  , py::arg("Param"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_NSections::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_NSections::*)() const>(&GeomFill_NSections::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("SectionShape",
             []( GeomFill_NSections &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; self.SectionShape(NbPoles,NbKnots,Degree); return std::make_tuple(NbPoles,NbKnots,Degree); },
             R"#(get the format of an section)#" )
        .def("GetInterval",
             []( GeomFill_NSections &self   ){ Standard_Real  First; Standard_Real  Last; self.GetInterval(First,Last); return std::make_tuple(First,Last); },
             R"#(Gets the bounds of the parametric interval on the function)#" )
        .def("GetDomain",
             []( GeomFill_NSections &self   ){ Standard_Real  First; Standard_Real  Last; self.GetDomain(First,Last); return std::make_tuple(First,Last); },
             R"#(Gets the bounds of the function parametric domain. Warning: This domain it is not modified by the SetValue method)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_NSections::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_SectionGenerator , shared_ptr<GeomFill_SectionGenerator> , GeomFill_Profiler>>(m.attr("GeomFill_SectionGenerator"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_SimpleBound ,opencascade::handle<GeomFill_SimpleBound> , GeomFill_Boundary>>(m.attr("GeomFill_SimpleBound"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (gp_Pnt (GeomFill_SimpleBound::*)( const Standard_Real ) const) static_cast<gp_Pnt (GeomFill_SimpleBound::*)( const Standard_Real ) const>(&GeomFill_SimpleBound::Value),
             R"#(None)#"  , py::arg("U"))
        .def("D1",
             (void (GeomFill_SimpleBound::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const) static_cast<void (GeomFill_SimpleBound::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const>(&GeomFill_SimpleBound::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("Reparametrize",
             (void (GeomFill_SimpleBound::*)( const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (GeomFill_SimpleBound::*)( const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&GeomFill_SimpleBound::Reparametrize),
             R"#(None)#"  , py::arg("First"),  py::arg("Last"),  py::arg("HasDF"),  py::arg("HasDL"),  py::arg("DF"),  py::arg("DL"),  py::arg("Rev"))
        .def("IsDegenerated",
             (Standard_Boolean (GeomFill_SimpleBound::*)() const) static_cast<Standard_Boolean (GeomFill_SimpleBound::*)() const>(&GeomFill_SimpleBound::IsDegenerated),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_SimpleBound::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_SimpleBound::*)() const>(&GeomFill_SimpleBound::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Bounds",
             []( GeomFill_SimpleBound &self   ){ Standard_Real  First; Standard_Real  Last; self.Bounds(First,Last); return std::make_tuple(First,Last); },
             R"#(None)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_SimpleBound::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_Stretch , shared_ptr<GeomFill_Stretch> , GeomFill_Filling>>(m.attr("GeomFill_Stretch"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_TgtOnCoons ,opencascade::handle<GeomFill_TgtOnCoons> , GeomFill_TgtField>>(m.attr("GeomFill_TgtOnCoons"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (gp_Vec (GeomFill_TgtOnCoons::*)( const Standard_Real ) const) static_cast<gp_Vec (GeomFill_TgtOnCoons::*)( const Standard_Real ) const>(&GeomFill_TgtOnCoons::Value),
             R"#(Computes the value of the field of tangency at parameter W.)#"  , py::arg("W"))
        .def("D1",
             (gp_Vec (GeomFill_TgtOnCoons::*)( const Standard_Real ) const) static_cast<gp_Vec (GeomFill_TgtOnCoons::*)( const Standard_Real ) const>(&GeomFill_TgtOnCoons::D1),
             R"#(Computes the derivative of the field of tangency at parameter W.)#"  , py::arg("W"))
        .def("D1",
             (void (GeomFill_TgtOnCoons::*)( const Standard_Real , gp_Vec & , gp_Vec & ) const) static_cast<void (GeomFill_TgtOnCoons::*)( const Standard_Real , gp_Vec & , gp_Vec & ) const>(&GeomFill_TgtOnCoons::D1),
             R"#(Computes the value and the derivative of the field of tangency at parameter W.)#"  , py::arg("W"),  py::arg("T"),  py::arg("DT"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_TgtOnCoons::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_TgtOnCoons::*)() const>(&GeomFill_TgtOnCoons::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_TgtOnCoons::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_TrihedronWithGuide ,opencascade::handle<GeomFill_TrihedronWithGuide>,Py_GeomFill_TrihedronWithGuide , GeomFill_TrihedronLaw>>(m.attr("GeomFill_TrihedronWithGuide"))
    // constructors
    // custom constructors
    // methods
        .def("Guide",
             (opencascade::handle<Adaptor3d_HCurve> (GeomFill_TrihedronWithGuide::*)() const) static_cast<opencascade::handle<Adaptor3d_HCurve> (GeomFill_TrihedronWithGuide::*)() const>(&GeomFill_TrihedronWithGuide::Guide),
             R"#(None)#" )
        .def("Origine",
             (void (GeomFill_TrihedronWithGuide::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomFill_TrihedronWithGuide::*)( const Standard_Real , const Standard_Real ) >(&GeomFill_TrihedronWithGuide::Origine),
             R"#(None)#"  , py::arg("Param1"),  py::arg("Param2"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_TrihedronWithGuide::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_TrihedronWithGuide::*)() const>(&GeomFill_TrihedronWithGuide::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_TrihedronWithGuide::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_UniformSection ,opencascade::handle<GeomFill_UniformSection> , GeomFill_SectionLaw>>(m.attr("GeomFill_UniformSection"))
    // constructors
    // custom constructors
    // methods
        .def("D0",
             (Standard_Boolean (GeomFill_UniformSection::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (GeomFill_UniformSection::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<Standard_Real> & ) >(&GeomFill_UniformSection::D0),
             R"#(compute the section for v = param)#"  , py::arg("Param"),  py::arg("Poles"),  py::arg("Weigths"))
        .def("D1",
             (Standard_Boolean (GeomFill_UniformSection::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (GeomFill_UniformSection::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&GeomFill_UniformSection::D1),
             R"#(compute the first derivative in v direction of the section for v = param Warning : It used only for C1 or C2 aproximation)#"  , py::arg("Param"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("D2",
             (Standard_Boolean (GeomFill_UniformSection::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<Standard_Boolean (GeomFill_UniformSection::*)( const Standard_Real , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&GeomFill_UniformSection::D2),
             R"#(compute the second derivative in v direction of the section for v = param Warning : It used only for C2 aproximation)#"  , py::arg("Param"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
        .def("BSplineSurface",
             (opencascade::handle<Geom_BSplineSurface> (GeomFill_UniformSection::*)() const) static_cast<opencascade::handle<Geom_BSplineSurface> (GeomFill_UniformSection::*)() const>(&GeomFill_UniformSection::BSplineSurface),
             R"#(give if possible an bspline Surface, like iso-v are the section. If it is not possible this methode have to get an Null Surface. Is it the default implementation.)#" )
        .def("Knots",
             (void (GeomFill_UniformSection::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (GeomFill_UniformSection::*)( NCollection_Array1<Standard_Real> & ) const>(&GeomFill_UniformSection::Knots),
             R"#(get the Knots of the section)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (GeomFill_UniformSection::*)( NCollection_Array1<Standard_Integer> & ) const) static_cast<void (GeomFill_UniformSection::*)( NCollection_Array1<Standard_Integer> & ) const>(&GeomFill_UniformSection::Mults),
             R"#(get the Multplicities of the section)#"  , py::arg("TMults"))
        .def("IsRational",
             (Standard_Boolean (GeomFill_UniformSection::*)() const) static_cast<Standard_Boolean (GeomFill_UniformSection::*)() const>(&GeomFill_UniformSection::IsRational),
             R"#(Returns if the sections are rationnal or not)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (GeomFill_UniformSection::*)() const) static_cast<Standard_Boolean (GeomFill_UniformSection::*)() const>(&GeomFill_UniformSection::IsUPeriodic),
             R"#(Returns if the sections are periodic or not)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (GeomFill_UniformSection::*)() const) static_cast<Standard_Boolean (GeomFill_UniformSection::*)() const>(&GeomFill_UniformSection::IsVPeriodic),
             R"#(Returns if the law isperiodic or not)#" )
        .def("NbIntervals",
             (Standard_Integer (GeomFill_UniformSection::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (GeomFill_UniformSection::*)( const GeomAbs_Shape ) const>(&GeomFill_UniformSection::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (GeomFill_UniformSection::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (GeomFill_UniformSection::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&GeomFill_UniformSection::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("SetInterval",
             (void (GeomFill_UniformSection::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomFill_UniformSection::*)( const Standard_Real , const Standard_Real ) >(&GeomFill_UniformSection::SetInterval),
             R"#(Sets the bounds of the parametric interval on the function This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (GeomFill_UniformSection::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<Standard_Real> & ) const) static_cast<void (GeomFill_UniformSection::*)( const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Array1<Standard_Real> & ) const>(&GeomFill_UniformSection::GetTolerance),
             R"#(Returns the tolerances associated at each poles to reach in approximation, to satisfy: BoundTol error at the Boundary AngleTol tangent error at the Boundary (in radian) SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"))
        .def("BarycentreOfSurf",
             (gp_Pnt (GeomFill_UniformSection::*)() const) static_cast<gp_Pnt (GeomFill_UniformSection::*)() const>(&GeomFill_UniformSection::BarycentreOfSurf),
             R"#(Get the barycentre of Surface. An very poor estimation is sufficent. This information is usefull to perform well conditioned rational approximation. Warning: Used only if <me> IsRational)#" )
        .def("MaximalSection",
             (Standard_Real (GeomFill_UniformSection::*)() const) static_cast<Standard_Real (GeomFill_UniformSection::*)() const>(&GeomFill_UniformSection::MaximalSection),
             R"#(Returns the length of the greater section. This information is usefull to G1's control. Warning: With an little value, approximation can be slower.)#" )
        .def("GetMinimalWeight",
             (void (GeomFill_UniformSection::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (GeomFill_UniformSection::*)( NCollection_Array1<Standard_Real> & ) const>(&GeomFill_UniformSection::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles in all sections. This information is usefull to control error in rational approximation. Warning: Used only if <me> IsRational)#"  , py::arg("Weigths"))
        .def("IsConstant",
             (Standard_Boolean (GeomFill_UniformSection::*)( Standard_Real & ) const) static_cast<Standard_Boolean (GeomFill_UniformSection::*)( Standard_Real & ) const>(&GeomFill_UniformSection::IsConstant),
             R"#(return True)#"  , py::arg("Error"))
        .def("ConstantSection",
             (opencascade::handle<Geom_Curve> (GeomFill_UniformSection::*)() const) static_cast<opencascade::handle<Geom_Curve> (GeomFill_UniformSection::*)() const>(&GeomFill_UniformSection::ConstantSection),
             R"#(Return the constant Section if <me> IsConstant.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_UniformSection::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_UniformSection::*)() const>(&GeomFill_UniformSection::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("SectionShape",
             []( GeomFill_UniformSection &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; self.SectionShape(NbPoles,NbKnots,Degree); return std::make_tuple(NbPoles,NbKnots,Degree); },
             R"#(get the format of an section)#" )
        .def("GetInterval",
             []( GeomFill_UniformSection &self   ){ Standard_Real  First; Standard_Real  Last; self.GetInterval(First,Last); return std::make_tuple(First,Last); },
             R"#(Gets the bounds of the parametric interval on the function)#" )
        .def("GetDomain",
             []( GeomFill_UniformSection &self   ){ Standard_Real  First; Standard_Real  Last; self.GetDomain(First,Last); return std::make_tuple(First,Last); },
             R"#(Gets the bounds of the function parametric domain. Warning: This domain it is not modified by the SetValue method)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_UniformSection::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_GuideTrihedronAC ,opencascade::handle<GeomFill_GuideTrihedronAC> , GeomFill_TrihedronWithGuide>>(m.attr("GeomFill_GuideTrihedronAC"))
    // constructors
    // custom constructors
    // methods
        .def("SetCurve",
             (void (GeomFill_GuideTrihedronAC::*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<void (GeomFill_GuideTrihedronAC::*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&GeomFill_GuideTrihedronAC::SetCurve),
             R"#(None)#"  , py::arg("C"))
        .def("Copy",
             (opencascade::handle<GeomFill_TrihedronLaw> (GeomFill_GuideTrihedronAC::*)() const) static_cast<opencascade::handle<GeomFill_TrihedronLaw> (GeomFill_GuideTrihedronAC::*)() const>(&GeomFill_GuideTrihedronAC::Copy),
             R"#(None)#" )
        .def("Guide",
             (opencascade::handle<Adaptor3d_HCurve> (GeomFill_GuideTrihedronAC::*)() const) static_cast<opencascade::handle<Adaptor3d_HCurve> (GeomFill_GuideTrihedronAC::*)() const>(&GeomFill_GuideTrihedronAC::Guide),
             R"#(None)#" )
        .def("D0",
             (Standard_Boolean (GeomFill_GuideTrihedronAC::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_GuideTrihedronAC::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_GuideTrihedronAC::D0),
             R"#(None)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("Normal"),  py::arg("BiNormal"))
        .def("D1",
             (Standard_Boolean (GeomFill_GuideTrihedronAC::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_GuideTrihedronAC::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_GuideTrihedronAC::D1),
             R"#(None)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("DTangent"),  py::arg("Normal"),  py::arg("DNormal"),  py::arg("BiNormal"),  py::arg("DBiNormal"))
        .def("D2",
             (Standard_Boolean (GeomFill_GuideTrihedronAC::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_GuideTrihedronAC::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_GuideTrihedronAC::D2),
             R"#(None)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("DTangent"),  py::arg("D2Tangent"),  py::arg("Normal"),  py::arg("DNormal"),  py::arg("D2Normal"),  py::arg("BiNormal"),  py::arg("DBiNormal"),  py::arg("D2BiNormal"))
        .def("NbIntervals",
             (Standard_Integer (GeomFill_GuideTrihedronAC::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (GeomFill_GuideTrihedronAC::*)( const GeomAbs_Shape ) const>(&GeomFill_GuideTrihedronAC::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (GeomFill_GuideTrihedronAC::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (GeomFill_GuideTrihedronAC::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&GeomFill_GuideTrihedronAC::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("SetInterval",
             (void (GeomFill_GuideTrihedronAC::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomFill_GuideTrihedronAC::*)( const Standard_Real , const Standard_Real ) >(&GeomFill_GuideTrihedronAC::SetInterval),
             R"#(Sets the bounds of the parametric interval on the function This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetAverageLaw",
             (void (GeomFill_GuideTrihedronAC::*)( gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (GeomFill_GuideTrihedronAC::*)( gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_GuideTrihedronAC::GetAverageLaw),
             R"#(Get average value of M(t) and V(t) it is usfull to make fast approximation of rational surfaces.)#"  , py::arg("ATangent"),  py::arg("ANormal"),  py::arg("ABiNormal"))
        .def("IsConstant",
             (Standard_Boolean (GeomFill_GuideTrihedronAC::*)() const) static_cast<Standard_Boolean (GeomFill_GuideTrihedronAC::*)() const>(&GeomFill_GuideTrihedronAC::IsConstant),
             R"#(Say if the law is Constant)#" )
        .def("IsOnlyBy3dCurve",
             (Standard_Boolean (GeomFill_GuideTrihedronAC::*)() const) static_cast<Standard_Boolean (GeomFill_GuideTrihedronAC::*)() const>(&GeomFill_GuideTrihedronAC::IsOnlyBy3dCurve),
             R"#(Say if the law is defined, only by the 3d Geometry of the setted Curve Return False by Default.)#" )
        .def("Origine",
             (void (GeomFill_GuideTrihedronAC::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomFill_GuideTrihedronAC::*)( const Standard_Real , const Standard_Real ) >(&GeomFill_GuideTrihedronAC::Origine),
             R"#(None)#"  , py::arg("OrACR1"),  py::arg("OrACR2"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_GuideTrihedronAC::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_GuideTrihedronAC::*)() const>(&GeomFill_GuideTrihedronAC::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_GuideTrihedronAC::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomFill_GuideTrihedronPlan ,opencascade::handle<GeomFill_GuideTrihedronPlan> , GeomFill_TrihedronWithGuide>>(m.attr("GeomFill_GuideTrihedronPlan"))
    // constructors
    // custom constructors
    // methods
        .def("SetCurve",
             (void (GeomFill_GuideTrihedronPlan::*)( const opencascade::handle<Adaptor3d_HCurve> & ) ) static_cast<void (GeomFill_GuideTrihedronPlan::*)( const opencascade::handle<Adaptor3d_HCurve> & ) >(&GeomFill_GuideTrihedronPlan::SetCurve),
             R"#(None)#"  , py::arg("thePath"))
        .def("Copy",
             (opencascade::handle<GeomFill_TrihedronLaw> (GeomFill_GuideTrihedronPlan::*)() const) static_cast<opencascade::handle<GeomFill_TrihedronLaw> (GeomFill_GuideTrihedronPlan::*)() const>(&GeomFill_GuideTrihedronPlan::Copy),
             R"#(None)#" )
        .def("ErrorStatus",
             (GeomFill_PipeError (GeomFill_GuideTrihedronPlan::*)() const) static_cast<GeomFill_PipeError (GeomFill_GuideTrihedronPlan::*)() const>(&GeomFill_GuideTrihedronPlan::ErrorStatus),
             R"#(Give a status to the Law Returns PipeOk (default implementation))#" )
        .def("Guide",
             (opencascade::handle<Adaptor3d_HCurve> (GeomFill_GuideTrihedronPlan::*)() const) static_cast<opencascade::handle<Adaptor3d_HCurve> (GeomFill_GuideTrihedronPlan::*)() const>(&GeomFill_GuideTrihedronPlan::Guide),
             R"#(None)#" )
        .def("D0",
             (Standard_Boolean (GeomFill_GuideTrihedronPlan::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_GuideTrihedronPlan::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_GuideTrihedronPlan::D0),
             R"#(None)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("Normal"),  py::arg("BiNormal"))
        .def("D1",
             (Standard_Boolean (GeomFill_GuideTrihedronPlan::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_GuideTrihedronPlan::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_GuideTrihedronPlan::D1),
             R"#(None)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("DTangent"),  py::arg("Normal"),  py::arg("DNormal"),  py::arg("BiNormal"),  py::arg("DBiNormal"))
        .def("D2",
             (Standard_Boolean (GeomFill_GuideTrihedronPlan::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (GeomFill_GuideTrihedronPlan::*)( const Standard_Real , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_GuideTrihedronPlan::D2),
             R"#(None)#"  , py::arg("Param"),  py::arg("Tangent"),  py::arg("DTangent"),  py::arg("D2Tangent"),  py::arg("Normal"),  py::arg("DNormal"),  py::arg("D2Normal"),  py::arg("BiNormal"),  py::arg("DBiNormal"),  py::arg("D2BiNormal"))
        .def("SetInterval",
             (void (GeomFill_GuideTrihedronPlan::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomFill_GuideTrihedronPlan::*)( const Standard_Real , const Standard_Real ) >(&GeomFill_GuideTrihedronPlan::SetInterval),
             R"#(Sets the bounds of the parametric interval on the function This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("NbIntervals",
             (Standard_Integer (GeomFill_GuideTrihedronPlan::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (GeomFill_GuideTrihedronPlan::*)( const GeomAbs_Shape ) const>(&GeomFill_GuideTrihedronPlan::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (GeomFill_GuideTrihedronPlan::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (GeomFill_GuideTrihedronPlan::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&GeomFill_GuideTrihedronPlan::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("GetAverageLaw",
             (void (GeomFill_GuideTrihedronPlan::*)( gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (GeomFill_GuideTrihedronPlan::*)( gp_Vec & , gp_Vec & , gp_Vec & ) >(&GeomFill_GuideTrihedronPlan::GetAverageLaw),
             R"#(Get average value of M(t) and V(t) it is usfull to make fast approximation of rational surfaces.)#"  , py::arg("ATangent"),  py::arg("ANormal"),  py::arg("ABiNormal"))
        .def("IsConstant",
             (Standard_Boolean (GeomFill_GuideTrihedronPlan::*)() const) static_cast<Standard_Boolean (GeomFill_GuideTrihedronPlan::*)() const>(&GeomFill_GuideTrihedronPlan::IsConstant),
             R"#(Say if the law is Constant)#" )
        .def("IsOnlyBy3dCurve",
             (Standard_Boolean (GeomFill_GuideTrihedronPlan::*)() const) static_cast<Standard_Boolean (GeomFill_GuideTrihedronPlan::*)() const>(&GeomFill_GuideTrihedronPlan::IsOnlyBy3dCurve),
             R"#(Say if the law is defined, only by the 3d Geometry of the setted Curve Return False by Default.)#" )
        .def("Origine",
             (void (GeomFill_GuideTrihedronPlan::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomFill_GuideTrihedronPlan::*)( const Standard_Real , const Standard_Real ) >(&GeomFill_GuideTrihedronPlan::Origine),
             R"#(None)#"  , py::arg("OrACR1"),  py::arg("OrACR2"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomFill_GuideTrihedronPlan::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomFill_GuideTrihedronPlan::*)() const>(&GeomFill_GuideTrihedronPlan::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomFill_GuideTrihedronPlan::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/GeomFill_DiscreteTrihedron.hxx
// ./opencascade/GeomFill_FillingStyle.hxx
// ./opencascade/GeomFill_PlanFunc.hxx
// ./opencascade/GeomFill_LocFunction.hxx
// ./opencascade/GeomFill_CornerState.hxx
// ./opencascade/GeomFill_SequenceOfTrsf.hxx
// ./opencascade/GeomFill_Filling.hxx
// ./opencascade/GeomFill_Frenet.hxx
// ./opencascade/GeomFill_UniformSection.hxx
// ./opencascade/GeomFill_CurveAndTrihedron.hxx
// ./opencascade/GeomFill_SectionLaw.hxx
// ./opencascade/GeomFill_HArray1OfLocationLaw.hxx
// ./opencascade/GeomFill_QuasiAngularConvertor.hxx
// ./opencascade/GeomFill_LocationGuide.hxx
// ./opencascade/GeomFill_Profiler.hxx
// ./opencascade/GeomFill_BSplineCurves.hxx
// ./opencascade/GeomFill_SequenceOfAx2.hxx
// ./opencascade/GeomFill_TrihedronWithGuide.hxx
// ./opencascade/GeomFill_EvolvedSection.hxx
// ./opencascade/GeomFill_TgtField.hxx
// ./opencascade/GeomFill_FunctionGuide.hxx
// ./opencascade/GeomFill_PolynomialConvertor.hxx
// ./opencascade/GeomFill_GuideTrihedronPlan.hxx
// ./opencascade/GeomFill_ConstantBiNormal.hxx
// ./opencascade/GeomFill_LocationDraft.hxx
// ./opencascade/GeomFill_Coons.hxx
// ./opencascade/GeomFill_Fixed.hxx
// ./opencascade/GeomFill_SweepSectionGenerator.hxx
// ./opencascade/GeomFill_DegeneratedBound.hxx
// ./opencascade/GeomFill_PipeError.hxx
// ./opencascade/GeomFill_CoonsAlgPatch.hxx
// ./opencascade/GeomFill_SimpleBound.hxx
// ./opencascade/GeomFill_HArray1OfSectionLaw.hxx
// ./opencascade/GeomFill_Array1OfSectionLaw.hxx
// ./opencascade/GeomFill_Tensor.hxx
// ./opencascade/GeomFill_SnglrFunc.hxx
// ./opencascade/GeomFill_BoundWithSurf.hxx
// ./opencascade/GeomFill_Line.hxx
// ./opencascade/GeomFill_CircularBlendFunc.hxx
// ./opencascade/GeomFill_NSections.hxx
// ./opencascade/GeomFill_SweepFunction.hxx
// ./opencascade/GeomFill_Darboux.hxx
// ./opencascade/GeomFill_DraftTrihedron.hxx
// ./opencascade/GeomFill.hxx
// ./opencascade/GeomFill_BezierCurves.hxx
// ./opencascade/GeomFill_SectionGenerator.hxx
// ./opencascade/GeomFill_GuideTrihedronAC.hxx
// ./opencascade/GeomFill_Array1OfLocationLaw.hxx
// ./opencascade/GeomFill_Sweep.hxx
// ./opencascade/GeomFill_TgtOnCoons.hxx
// ./opencascade/GeomFill_Generator.hxx
// ./opencascade/GeomFill_Stretch.hxx
// ./opencascade/GeomFill_ConstrainedFilling.hxx
// ./opencascade/GeomFill_CorrectedFrenet.hxx
// ./opencascade/GeomFill_TrihedronLaw.hxx
// ./opencascade/GeomFill_Curved.hxx
// ./opencascade/GeomFill_ApproxStyle.hxx
// ./opencascade/GeomFill_FunctionDraft.hxx
// ./opencascade/GeomFill_AppSweep.hxx
// ./opencascade/GeomFill_LocationLaw.hxx
// ./opencascade/GeomFill_Boundary.hxx
// ./opencascade/GeomFill_Trihedron.hxx
// ./opencascade/GeomFill_AppSurf.hxx
// ./opencascade/GeomFill_SectionPlacement.hxx
// ./opencascade/GeomFill_Pipe.hxx
// ./opencascade/GeomFill_HSequenceOfAx2.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<gp_Trsf>(m,"GeomFill_SequenceOfTrsf");
    register_template_NCollection_Sequence<gp_Ax2>(m,"GeomFill_SequenceOfAx2");
    register_template_NCollection_Array1<opencascade::handle<GeomFill_SectionLaw> >(m,"GeomFill_Array1OfSectionLaw");
    register_template_NCollection_Array1<opencascade::handle<GeomFill_LocationLaw> >(m,"GeomFill_Array1OfLocationLaw");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

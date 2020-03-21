
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <math_Matrix.hxx>
#include <gp_Pnt.hxx>
#include <math_Matrix.hxx>
#include <Blend_Point.hxx>
#include <math_Matrix.hxx>
#include <Blend_Point.hxx>
#include <math_Matrix.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <math_Matrix.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <math_Matrix.hxx>
#include <gp_Pnt.hxx>
#include <math_Matrix.hxx>
#include <Blend_Point.hxx>
#include <math_Matrix.hxx>
#include <Blend_Point.hxx>
#include <math_Matrix.hxx>
#include <Blend_Point.hxx>

// module includes
#include <Blend_AppFunction.hxx>
#include <Blend_CSFunction.hxx>
#include <Blend_CurvPointFuncInv.hxx>
#include <Blend_DecrochStatus.hxx>
#include <Blend_FuncInv.hxx>
#include <Blend_Function.hxx>
#include <Blend_Point.hxx>
#include <Blend_RstRstFunction.hxx>
#include <Blend_SequenceOfPoint.hxx>
#include <Blend_Status.hxx>
#include <Blend_SurfCurvFuncInv.hxx>
#include <Blend_SurfPointFuncInv.hxx>
#include <Blend_SurfRstFunction.hxx>

// template related includes
// ./opencascade\Blend_SequenceOfPoint.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Blend_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Blend", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Blend_DecrochStatus>(m, "Blend_DecrochStatus",R"#(None)#")
        .value("Blend_NoDecroch",Blend_DecrochStatus::Blend_NoDecroch)
        .value("Blend_DecrochRst1",Blend_DecrochStatus::Blend_DecrochRst1)
        .value("Blend_DecrochRst2",Blend_DecrochStatus::Blend_DecrochRst2)
        .value("Blend_DecrochBoth",Blend_DecrochStatus::Blend_DecrochBoth).export_values();
    py::enum_<Blend_Status>(m, "Blend_Status",R"#(None)#")
        .value("Blend_StepTooLarge",Blend_Status::Blend_StepTooLarge)
        .value("Blend_StepTooSmall",Blend_Status::Blend_StepTooSmall)
        .value("Blend_Backward",Blend_Status::Blend_Backward)
        .value("Blend_SamePoints",Blend_Status::Blend_SamePoints)
        .value("Blend_OnRst1",Blend_Status::Blend_OnRst1)
        .value("Blend_OnRst2",Blend_Status::Blend_OnRst2)
        .value("Blend_OnRst12",Blend_Status::Blend_OnRst12)
        .value("Blend_OK",Blend_Status::Blend_OK).export_values();

//Python trampoline classes
    class Py_Blend_AppFunction : public Blend_AppFunction{
    public:
        using Blend_AppFunction::Blend_AppFunction;


        // public pure virtual
        Standard_Integer NbVariables() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Blend_AppFunction,NbVariables,) };
        Standard_Integer NbEquations() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Blend_AppFunction,NbEquations,) };
        Standard_Boolean Value(const math_Vector & X,math_Vector & F) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_AppFunction,Value,X,F) };
        Standard_Boolean Derivatives(const math_Vector & X,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_AppFunction,Derivatives,X,D) };
        Standard_Boolean Values(const math_Vector & X,math_Vector & F,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_AppFunction,Values,X,F,D) };
        void Set(const Standard_Real Param) override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,Set,Param) };
        void Set(const Standard_Real First,const Standard_Real Last) override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,Set,First,Last) };
        void GetTolerance(math_Vector & Tolerance,const Standard_Real Tol) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,GetTolerance,Tolerance,Tol) };
        void GetBounds(math_Vector & InfBound,math_Vector & SupBound) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,GetBounds,InfBound,SupBound) };
        Standard_Boolean IsSolution(const math_Vector & Sol,const Standard_Real Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_AppFunction,IsSolution,Sol,Tol) };
        Standard_Real GetMinimalDistance() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Blend_AppFunction,GetMinimalDistance,) };
        const gp_Pnt & Pnt1() const  override { PYBIND11_OVERLOAD_PURE(const gp_Pnt &,Blend_AppFunction,Pnt1,) };
        const gp_Pnt & Pnt2() const  override { PYBIND11_OVERLOAD_PURE(const gp_Pnt &,Blend_AppFunction,Pnt2,) };
        Standard_Boolean IsRational() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_AppFunction,IsRational,) };
        Standard_Real GetSectionSize() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Blend_AppFunction,GetSectionSize,) };
        void GetMinimalWeight(NCollection_Array1<Standard_Real> & Weigths) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,GetMinimalWeight,Weigths) };
        Standard_Integer NbIntervals(const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Blend_AppFunction,NbIntervals,S) };
        void Intervals(NCollection_Array1<Standard_Real> & T,const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,Intervals,T,S) };
        void GetTolerance(const Standard_Real BoundTol,const Standard_Real SurfTol,const Standard_Real AngleTol,math_Vector & Tol3d,math_Vector & Tol1D) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,GetTolerance,BoundTol,SurfTol,AngleTol,Tol3d,Tol1D) };
        void Knots(NCollection_Array1<Standard_Real> & TKnots) override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,Knots,TKnots) };
        void Mults(NCollection_Array1<Standard_Integer> & TMults) override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,Mults,TMults) };
        Standard_Boolean Section(const Blend_Point & P,NCollection_Array1<gp_Pnt> & Poles,NCollection_Array1<gp_Vec> & DPoles,NCollection_Array1<gp_Pnt2d> & Poles2d,NCollection_Array1<gp_Vec2d> & DPoles2d,NCollection_Array1<Standard_Real> & Weigths,NCollection_Array1<Standard_Real> & DWeigths) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_AppFunction,Section,P,Poles,DPoles,Poles2d,DPoles2d,Weigths,DWeigths) };
        void Section(const Blend_Point & P,NCollection_Array1<gp_Pnt> & Poles,NCollection_Array1<gp_Pnt2d> & Poles2d,NCollection_Array1<Standard_Real> & Weigths) override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,Section,P,Poles,Poles2d,Weigths) };
        Standard_Boolean Section(const Blend_Point & P,NCollection_Array1<gp_Pnt> & Poles,NCollection_Array1<gp_Vec> & DPoles,NCollection_Array1<gp_Vec> & D2Poles,NCollection_Array1<gp_Pnt2d> & Poles2d,NCollection_Array1<gp_Vec2d> & DPoles2d,NCollection_Array1<gp_Vec2d> & D2Poles2d,NCollection_Array1<Standard_Real> & Weigths,NCollection_Array1<Standard_Real> & DWeigths,NCollection_Array1<Standard_Real> & D2Weigths) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_AppFunction,Section,P,Poles,DPoles,D2Poles,Poles2d,DPoles2d,D2Poles2d,Weigths,DWeigths,D2Weigths) };
        void GetShape(Standard_Integer & NbPoles,Standard_Integer & NbKnots,Standard_Integer & Degree,Standard_Integer & NbPoles2d) override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,GetShape,NbPoles,NbKnots,Degree,NbPoles2d) };
        void Resolution(const Standard_Integer IC2d,const Standard_Real Tol,Standard_Real & TolU,Standard_Real & TolV) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,Resolution,IC2d,Tol,TolU,TolV) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Blend_CurvPointFuncInv : public Blend_CurvPointFuncInv{
    public:
        using Blend_CurvPointFuncInv::Blend_CurvPointFuncInv;


        // public pure virtual
        Standard_Integer NbEquations() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Blend_CurvPointFuncInv,NbEquations,) };
        Standard_Boolean Value(const math_Vector & X,math_Vector & F) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_CurvPointFuncInv,Value,X,F) };
        Standard_Boolean Derivatives(const math_Vector & X,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_CurvPointFuncInv,Derivatives,X,D) };
        Standard_Boolean Values(const math_Vector & X,math_Vector & F,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_CurvPointFuncInv,Values,X,F,D) };
        void Set(const gp_Pnt & P) override { PYBIND11_OVERLOAD_PURE(void,Blend_CurvPointFuncInv,Set,P) };
        void GetTolerance(math_Vector & Tolerance,const Standard_Real Tol) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_CurvPointFuncInv,GetTolerance,Tolerance,Tol) };
        void GetBounds(math_Vector & InfBound,math_Vector & SupBound) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_CurvPointFuncInv,GetBounds,InfBound,SupBound) };
        Standard_Boolean IsSolution(const math_Vector & Sol,const Standard_Real Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_CurvPointFuncInv,IsSolution,Sol,Tol) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Blend_FuncInv : public Blend_FuncInv{
    public:
        using Blend_FuncInv::Blend_FuncInv;


        // public pure virtual
        Standard_Integer NbEquations() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Blend_FuncInv,NbEquations,) };
        Standard_Boolean Value(const math_Vector & X,math_Vector & F) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_FuncInv,Value,X,F) };
        Standard_Boolean Derivatives(const math_Vector & X,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_FuncInv,Derivatives,X,D) };
        Standard_Boolean Values(const math_Vector & X,math_Vector & F,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_FuncInv,Values,X,F,D) };
        void Set(const Standard_Boolean OnFirst,const opencascade::handle<Adaptor2d_HCurve2d> & COnSurf) override { PYBIND11_OVERLOAD_PURE(void,Blend_FuncInv,Set,OnFirst,COnSurf) };
        void GetTolerance(math_Vector & Tolerance,const Standard_Real Tol) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_FuncInv,GetTolerance,Tolerance,Tol) };
        void GetBounds(math_Vector & InfBound,math_Vector & SupBound) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_FuncInv,GetBounds,InfBound,SupBound) };
        Standard_Boolean IsSolution(const math_Vector & Sol,const Standard_Real Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_FuncInv,IsSolution,Sol,Tol) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Blend_SurfCurvFuncInv : public Blend_SurfCurvFuncInv{
    public:
        using Blend_SurfCurvFuncInv::Blend_SurfCurvFuncInv;


        // public pure virtual
        Standard_Integer NbEquations() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Blend_SurfCurvFuncInv,NbEquations,) };
        Standard_Boolean Value(const math_Vector & X,math_Vector & F) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_SurfCurvFuncInv,Value,X,F) };
        Standard_Boolean Derivatives(const math_Vector & X,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_SurfCurvFuncInv,Derivatives,X,D) };
        Standard_Boolean Values(const math_Vector & X,math_Vector & F,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_SurfCurvFuncInv,Values,X,F,D) };
        void Set(const opencascade::handle<Adaptor2d_HCurve2d> & Rst) override { PYBIND11_OVERLOAD_PURE(void,Blend_SurfCurvFuncInv,Set,Rst) };
        void GetTolerance(math_Vector & Tolerance,const Standard_Real Tol) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_SurfCurvFuncInv,GetTolerance,Tolerance,Tol) };
        void GetBounds(math_Vector & InfBound,math_Vector & SupBound) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_SurfCurvFuncInv,GetBounds,InfBound,SupBound) };
        Standard_Boolean IsSolution(const math_Vector & Sol,const Standard_Real Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_SurfCurvFuncInv,IsSolution,Sol,Tol) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Blend_SurfPointFuncInv : public Blend_SurfPointFuncInv{
    public:
        using Blend_SurfPointFuncInv::Blend_SurfPointFuncInv;


        // public pure virtual
        Standard_Integer NbEquations() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Blend_SurfPointFuncInv,NbEquations,) };
        Standard_Boolean Value(const math_Vector & X,math_Vector & F) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_SurfPointFuncInv,Value,X,F) };
        Standard_Boolean Derivatives(const math_Vector & X,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_SurfPointFuncInv,Derivatives,X,D) };
        Standard_Boolean Values(const math_Vector & X,math_Vector & F,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_SurfPointFuncInv,Values,X,F,D) };
        void Set(const gp_Pnt & P) override { PYBIND11_OVERLOAD_PURE(void,Blend_SurfPointFuncInv,Set,P) };
        void GetTolerance(math_Vector & Tolerance,const Standard_Real Tol) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_SurfPointFuncInv,GetTolerance,Tolerance,Tol) };
        void GetBounds(math_Vector & InfBound,math_Vector & SupBound) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_SurfPointFuncInv,GetBounds,InfBound,SupBound) };
        Standard_Boolean IsSolution(const math_Vector & Sol,const Standard_Real Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_SurfPointFuncInv,IsSolution,Sol,Tol) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Blend_CSFunction : public Blend_CSFunction{
    public:
        using Blend_CSFunction::Blend_CSFunction;


        // public pure virtual
        Standard_Integer NbEquations() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Blend_CSFunction,NbEquations,) };
        Standard_Boolean Value(const math_Vector & X,math_Vector & F) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_CSFunction,Value,X,F) };
        Standard_Boolean Derivatives(const math_Vector & X,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_CSFunction,Derivatives,X,D) };
        Standard_Boolean Values(const math_Vector & X,math_Vector & F,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_CSFunction,Values,X,F,D) };
        void Set(const Standard_Real Param) override { PYBIND11_OVERLOAD_PURE(void,Blend_CSFunction,Set,Param) };
        void Set(const Standard_Real First,const Standard_Real Last) override { PYBIND11_OVERLOAD_PURE(void,Blend_CSFunction,Set,First,Last) };
        void GetTolerance(math_Vector & Tolerance,const Standard_Real Tol) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_CSFunction,GetTolerance,Tolerance,Tol) };
        void GetBounds(math_Vector & InfBound,math_Vector & SupBound) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_CSFunction,GetBounds,InfBound,SupBound) };
        Standard_Boolean IsSolution(const math_Vector & Sol,const Standard_Real Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_CSFunction,IsSolution,Sol,Tol) };
        const gp_Pnt & PointOnS() const  override { PYBIND11_OVERLOAD_PURE(const gp_Pnt &,Blend_CSFunction,PointOnS,) };
        const gp_Pnt & PointOnC() const  override { PYBIND11_OVERLOAD_PURE(const gp_Pnt &,Blend_CSFunction,PointOnC,) };
        const gp_Pnt2d & Pnt2d() const  override { PYBIND11_OVERLOAD_PURE(const gp_Pnt2d &,Blend_CSFunction,Pnt2d,) };
        Standard_Real ParameterOnC() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Blend_CSFunction,ParameterOnC,) };
        Standard_Boolean IsTangencyPoint() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_CSFunction,IsTangencyPoint,) };
        const gp_Vec & TangentOnS() const  override { PYBIND11_OVERLOAD_PURE(const gp_Vec &,Blend_CSFunction,TangentOnS,) };
        const gp_Vec2d & Tangent2d() const  override { PYBIND11_OVERLOAD_PURE(const gp_Vec2d &,Blend_CSFunction,Tangent2d,) };
        const gp_Vec & TangentOnC() const  override { PYBIND11_OVERLOAD_PURE(const gp_Vec &,Blend_CSFunction,TangentOnC,) };
        void Tangent(const Standard_Real U,const Standard_Real V,gp_Vec & TgS,gp_Vec & NormS) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_CSFunction,Tangent,U,V,TgS,NormS) };
        void GetTolerance(const Standard_Real BoundTol,const Standard_Real SurfTol,const Standard_Real AngleTol,math_Vector & Tol3d,math_Vector & Tol1D) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_CSFunction,GetTolerance,BoundTol,SurfTol,AngleTol,Tol3d,Tol1D) };
        void Knots(NCollection_Array1<Standard_Real> & TKnots) override { PYBIND11_OVERLOAD_PURE(void,Blend_CSFunction,Knots,TKnots) };
        void Mults(NCollection_Array1<Standard_Integer> & TMults) override { PYBIND11_OVERLOAD_PURE(void,Blend_CSFunction,Mults,TMults) };
        Standard_Boolean Section(const Blend_Point & P,NCollection_Array1<gp_Pnt> & Poles,NCollection_Array1<gp_Vec> & DPoles,NCollection_Array1<gp_Pnt2d> & Poles2d,NCollection_Array1<gp_Vec2d> & DPoles2d,NCollection_Array1<Standard_Real> & Weigths,NCollection_Array1<Standard_Real> & DWeigths) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_CSFunction,Section,P,Poles,DPoles,Poles2d,DPoles2d,Weigths,DWeigths) };
        void Section(const Blend_Point & P,NCollection_Array1<gp_Pnt> & Poles,NCollection_Array1<gp_Pnt2d> & Poles2d,NCollection_Array1<Standard_Real> & Weigths) override { PYBIND11_OVERLOAD_PURE(void,Blend_CSFunction,Section,P,Poles,Poles2d,Weigths) };
        void GetShape(Standard_Integer & NbPoles,Standard_Integer & NbKnots,Standard_Integer & Degree,Standard_Integer & NbPoles2d) override { PYBIND11_OVERLOAD_PURE(void,Blend_CSFunction,GetShape,NbPoles,NbKnots,Degree,NbPoles2d) };

        Standard_Boolean IsRational() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_AppFunction,IsRational,) };
        Standard_Real GetSectionSize() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Blend_AppFunction,GetSectionSize,) };
        void GetMinimalWeight(NCollection_Array1<Standard_Real> & Weigths) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,GetMinimalWeight,Weigths) };
        Standard_Integer NbIntervals(const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Blend_AppFunction,NbIntervals,S) };
        void Intervals(NCollection_Array1<Standard_Real> & T,const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,Intervals,T,S) };

        // protected pure virtual


        // private pure virtual

    };
    class Py_Blend_Function : public Blend_Function{
    public:
        using Blend_Function::Blend_Function;


        // public pure virtual
        const gp_Pnt & PointOnS1() const  override { PYBIND11_OVERLOAD_PURE(const gp_Pnt &,Blend_Function,PointOnS1,) };
        const gp_Pnt & PointOnS2() const  override { PYBIND11_OVERLOAD_PURE(const gp_Pnt &,Blend_Function,PointOnS2,) };
        Standard_Boolean IsTangencyPoint() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_Function,IsTangencyPoint,) };
        const gp_Vec & TangentOnS1() const  override { PYBIND11_OVERLOAD_PURE(const gp_Vec &,Blend_Function,TangentOnS1,) };
        const gp_Vec2d & Tangent2dOnS1() const  override { PYBIND11_OVERLOAD_PURE(const gp_Vec2d &,Blend_Function,Tangent2dOnS1,) };
        const gp_Vec & TangentOnS2() const  override { PYBIND11_OVERLOAD_PURE(const gp_Vec &,Blend_Function,TangentOnS2,) };
        const gp_Vec2d & Tangent2dOnS2() const  override { PYBIND11_OVERLOAD_PURE(const gp_Vec2d &,Blend_Function,Tangent2dOnS2,) };
        void Tangent(const Standard_Real U1,const Standard_Real V1,const Standard_Real U2,const Standard_Real V2,gp_Vec & TgFirst,gp_Vec & TgLast,gp_Vec & NormFirst,gp_Vec & NormLast) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_Function,Tangent,U1,V1,U2,V2,TgFirst,TgLast,NormFirst,NormLast) };
        void Section(const Blend_Point & P,NCollection_Array1<gp_Pnt> & Poles,NCollection_Array1<gp_Pnt2d> & Poles2d,NCollection_Array1<Standard_Real> & Weigths) override { PYBIND11_OVERLOAD_PURE(void,Blend_Function,Section,P,Poles,Poles2d,Weigths) };

        Standard_Integer NbEquations() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Blend_AppFunction,NbEquations,) };
        Standard_Boolean Value(const math_Vector & X,math_Vector & F) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_AppFunction,Value,X,F) };
        Standard_Boolean Derivatives(const math_Vector & X,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_AppFunction,Derivatives,X,D) };
        Standard_Boolean Values(const math_Vector & X,math_Vector & F,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_AppFunction,Values,X,F,D) };
        void Set(const Standard_Real Param) override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,Set,Param) };
        void Set(const Standard_Real First,const Standard_Real Last) override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,Set,First,Last) };
        void GetTolerance(math_Vector & Tolerance,const Standard_Real Tol) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,GetTolerance,Tolerance,Tol) };
        void GetBounds(math_Vector & InfBound,math_Vector & SupBound) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,GetBounds,InfBound,SupBound) };
        Standard_Boolean IsSolution(const math_Vector & Sol,const Standard_Real Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_AppFunction,IsSolution,Sol,Tol) };
        Standard_Real GetMinimalDistance() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Blend_AppFunction,GetMinimalDistance,) };
        Standard_Boolean IsRational() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_AppFunction,IsRational,) };
        Standard_Real GetSectionSize() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Blend_AppFunction,GetSectionSize,) };
        void GetMinimalWeight(NCollection_Array1<Standard_Real> & Weigths) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,GetMinimalWeight,Weigths) };
        Standard_Integer NbIntervals(const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Blend_AppFunction,NbIntervals,S) };
        void Intervals(NCollection_Array1<Standard_Real> & T,const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,Intervals,T,S) };
        void GetTolerance(const Standard_Real BoundTol,const Standard_Real SurfTol,const Standard_Real AngleTol,math_Vector & Tol3d,math_Vector & Tol1D) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,GetTolerance,BoundTol,SurfTol,AngleTol,Tol3d,Tol1D) };
        void Knots(NCollection_Array1<Standard_Real> & TKnots) override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,Knots,TKnots) };
        void Mults(NCollection_Array1<Standard_Integer> & TMults) override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,Mults,TMults) };

        // protected pure virtual


        // private pure virtual

    };
    class Py_Blend_RstRstFunction : public Blend_RstRstFunction{
    public:
        using Blend_RstRstFunction::Blend_RstRstFunction;


        // public pure virtual
        Standard_Integer NbVariables() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Blend_RstRstFunction,NbVariables,) };
        Standard_Integer NbEquations() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Blend_RstRstFunction,NbEquations,) };
        Standard_Boolean Value(const math_Vector & X,math_Vector & F) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_RstRstFunction,Value,X,F) };
        Standard_Boolean Derivatives(const math_Vector & X,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_RstRstFunction,Derivatives,X,D) };
        Standard_Boolean Values(const math_Vector & X,math_Vector & F,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_RstRstFunction,Values,X,F,D) };
        void Set(const Standard_Real Param) override { PYBIND11_OVERLOAD_PURE(void,Blend_RstRstFunction,Set,Param) };
        void Set(const Standard_Real First,const Standard_Real Last) override { PYBIND11_OVERLOAD_PURE(void,Blend_RstRstFunction,Set,First,Last) };
        void GetTolerance(math_Vector & Tolerance,const Standard_Real Tol) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_RstRstFunction,GetTolerance,Tolerance,Tol) };
        void GetBounds(math_Vector & InfBound,math_Vector & SupBound) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_RstRstFunction,GetBounds,InfBound,SupBound) };
        Standard_Boolean IsSolution(const math_Vector & Sol,const Standard_Real Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_RstRstFunction,IsSolution,Sol,Tol) };
        const gp_Pnt & PointOnRst1() const  override { PYBIND11_OVERLOAD_PURE(const gp_Pnt &,Blend_RstRstFunction,PointOnRst1,) };
        const gp_Pnt & PointOnRst2() const  override { PYBIND11_OVERLOAD_PURE(const gp_Pnt &,Blend_RstRstFunction,PointOnRst2,) };
        const gp_Pnt2d & Pnt2dOnRst1() const  override { PYBIND11_OVERLOAD_PURE(const gp_Pnt2d &,Blend_RstRstFunction,Pnt2dOnRst1,) };
        const gp_Pnt2d & Pnt2dOnRst2() const  override { PYBIND11_OVERLOAD_PURE(const gp_Pnt2d &,Blend_RstRstFunction,Pnt2dOnRst2,) };
        Standard_Real ParameterOnRst1() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Blend_RstRstFunction,ParameterOnRst1,) };
        Standard_Real ParameterOnRst2() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Blend_RstRstFunction,ParameterOnRst2,) };
        Standard_Boolean IsTangencyPoint() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_RstRstFunction,IsTangencyPoint,) };
        const gp_Vec & TangentOnRst1() const  override { PYBIND11_OVERLOAD_PURE(const gp_Vec &,Blend_RstRstFunction,TangentOnRst1,) };
        const gp_Vec2d & Tangent2dOnRst1() const  override { PYBIND11_OVERLOAD_PURE(const gp_Vec2d &,Blend_RstRstFunction,Tangent2dOnRst1,) };
        const gp_Vec & TangentOnRst2() const  override { PYBIND11_OVERLOAD_PURE(const gp_Vec &,Blend_RstRstFunction,TangentOnRst2,) };
        const gp_Vec2d & Tangent2dOnRst2() const  override { PYBIND11_OVERLOAD_PURE(const gp_Vec2d &,Blend_RstRstFunction,Tangent2dOnRst2,) };
        Blend_DecrochStatus Decroch(const math_Vector & Sol,gp_Vec & NRst1,gp_Vec & TgRst1,gp_Vec & NRst2,gp_Vec & TgRst2) const  override { PYBIND11_OVERLOAD_PURE(Blend_DecrochStatus,Blend_RstRstFunction,Decroch,Sol,NRst1,TgRst1,NRst2,TgRst2) };
        Standard_Boolean IsRational() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_RstRstFunction,IsRational,) };
        Standard_Real GetSectionSize() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Blend_RstRstFunction,GetSectionSize,) };
        void GetMinimalWeight(NCollection_Array1<Standard_Real> & Weigths) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_RstRstFunction,GetMinimalWeight,Weigths) };
        Standard_Integer NbIntervals(const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Blend_RstRstFunction,NbIntervals,S) };
        void Intervals(NCollection_Array1<Standard_Real> & T,const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_RstRstFunction,Intervals,T,S) };
        void GetTolerance(const Standard_Real BoundTol,const Standard_Real SurfTol,const Standard_Real AngleTol,math_Vector & Tol3d,math_Vector & Tol1D) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_RstRstFunction,GetTolerance,BoundTol,SurfTol,AngleTol,Tol3d,Tol1D) };
        void Knots(NCollection_Array1<Standard_Real> & TKnots) override { PYBIND11_OVERLOAD_PURE(void,Blend_RstRstFunction,Knots,TKnots) };
        void Mults(NCollection_Array1<Standard_Integer> & TMults) override { PYBIND11_OVERLOAD_PURE(void,Blend_RstRstFunction,Mults,TMults) };
        void Section(const Blend_Point & P,NCollection_Array1<gp_Pnt> & Poles,NCollection_Array1<gp_Pnt2d> & Poles2d,NCollection_Array1<Standard_Real> & Weigths) override { PYBIND11_OVERLOAD_PURE(void,Blend_RstRstFunction,Section,P,Poles,Poles2d,Weigths) };
        Standard_Boolean Section(const Blend_Point & P,NCollection_Array1<gp_Pnt> & Poles,NCollection_Array1<gp_Vec> & DPoles,NCollection_Array1<gp_Pnt2d> & Poles2d,NCollection_Array1<gp_Vec2d> & DPoles2d,NCollection_Array1<Standard_Real> & Weigths,NCollection_Array1<Standard_Real> & DWeigths) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_RstRstFunction,Section,P,Poles,DPoles,Poles2d,DPoles2d,Weigths,DWeigths) };
        Standard_Boolean Section(const Blend_Point & P,NCollection_Array1<gp_Pnt> & Poles,NCollection_Array1<gp_Vec> & DPoles,NCollection_Array1<gp_Vec> & D2Poles,NCollection_Array1<gp_Pnt2d> & Poles2d,NCollection_Array1<gp_Vec2d> & DPoles2d,NCollection_Array1<gp_Vec2d> & D2Poles2d,NCollection_Array1<Standard_Real> & Weigths,NCollection_Array1<Standard_Real> & DWeigths,NCollection_Array1<Standard_Real> & D2Weigths) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_RstRstFunction,Section,P,Poles,DPoles,D2Poles,Poles2d,DPoles2d,D2Poles2d,Weigths,DWeigths,D2Weigths) };
        void GetShape(Standard_Integer & NbPoles,Standard_Integer & NbKnots,Standard_Integer & Degree,Standard_Integer & NbPoles2d) override { PYBIND11_OVERLOAD_PURE(void,Blend_RstRstFunction,GetShape,NbPoles,NbKnots,Degree,NbPoles2d) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Blend_SurfRstFunction : public Blend_SurfRstFunction{
    public:
        using Blend_SurfRstFunction::Blend_SurfRstFunction;


        // public pure virtual
        Standard_Integer NbVariables() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Blend_SurfRstFunction,NbVariables,) };
        Standard_Integer NbEquations() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Blend_SurfRstFunction,NbEquations,) };
        Standard_Boolean Value(const math_Vector & X,math_Vector & F) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_SurfRstFunction,Value,X,F) };
        Standard_Boolean Derivatives(const math_Vector & X,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_SurfRstFunction,Derivatives,X,D) };
        Standard_Boolean Values(const math_Vector & X,math_Vector & F,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_SurfRstFunction,Values,X,F,D) };
        void Set(const Standard_Real Param) override { PYBIND11_OVERLOAD_PURE(void,Blend_SurfRstFunction,Set,Param) };
        void Set(const Standard_Real First,const Standard_Real Last) override { PYBIND11_OVERLOAD_PURE(void,Blend_SurfRstFunction,Set,First,Last) };
        void GetTolerance(math_Vector & Tolerance,const Standard_Real Tol) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_SurfRstFunction,GetTolerance,Tolerance,Tol) };
        void GetBounds(math_Vector & InfBound,math_Vector & SupBound) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_SurfRstFunction,GetBounds,InfBound,SupBound) };
        Standard_Boolean IsSolution(const math_Vector & Sol,const Standard_Real Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_SurfRstFunction,IsSolution,Sol,Tol) };
        const gp_Pnt & PointOnS() const  override { PYBIND11_OVERLOAD_PURE(const gp_Pnt &,Blend_SurfRstFunction,PointOnS,) };
        const gp_Pnt & PointOnRst() const  override { PYBIND11_OVERLOAD_PURE(const gp_Pnt &,Blend_SurfRstFunction,PointOnRst,) };
        const gp_Pnt2d & Pnt2dOnS() const  override { PYBIND11_OVERLOAD_PURE(const gp_Pnt2d &,Blend_SurfRstFunction,Pnt2dOnS,) };
        const gp_Pnt2d & Pnt2dOnRst() const  override { PYBIND11_OVERLOAD_PURE(const gp_Pnt2d &,Blend_SurfRstFunction,Pnt2dOnRst,) };
        Standard_Real ParameterOnRst() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Blend_SurfRstFunction,ParameterOnRst,) };
        Standard_Boolean IsTangencyPoint() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_SurfRstFunction,IsTangencyPoint,) };
        const gp_Vec & TangentOnS() const  override { PYBIND11_OVERLOAD_PURE(const gp_Vec &,Blend_SurfRstFunction,TangentOnS,) };
        const gp_Vec2d & Tangent2dOnS() const  override { PYBIND11_OVERLOAD_PURE(const gp_Vec2d &,Blend_SurfRstFunction,Tangent2dOnS,) };
        const gp_Vec & TangentOnRst() const  override { PYBIND11_OVERLOAD_PURE(const gp_Vec &,Blend_SurfRstFunction,TangentOnRst,) };
        const gp_Vec2d & Tangent2dOnRst() const  override { PYBIND11_OVERLOAD_PURE(const gp_Vec2d &,Blend_SurfRstFunction,Tangent2dOnRst,) };
        Standard_Boolean Decroch(const math_Vector & Sol,gp_Vec & NS,gp_Vec & TgS) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_SurfRstFunction,Decroch,Sol,NS,TgS) };
        Standard_Boolean IsRational() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_SurfRstFunction,IsRational,) };
        Standard_Real GetSectionSize() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Blend_SurfRstFunction,GetSectionSize,) };
        void GetMinimalWeight(NCollection_Array1<Standard_Real> & Weigths) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_SurfRstFunction,GetMinimalWeight,Weigths) };
        Standard_Integer NbIntervals(const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Blend_SurfRstFunction,NbIntervals,S) };
        void Intervals(NCollection_Array1<Standard_Real> & T,const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_SurfRstFunction,Intervals,T,S) };
        void GetTolerance(const Standard_Real BoundTol,const Standard_Real SurfTol,const Standard_Real AngleTol,math_Vector & Tol3d,math_Vector & Tol1D) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_SurfRstFunction,GetTolerance,BoundTol,SurfTol,AngleTol,Tol3d,Tol1D) };
        void Knots(NCollection_Array1<Standard_Real> & TKnots) override { PYBIND11_OVERLOAD_PURE(void,Blend_SurfRstFunction,Knots,TKnots) };
        void Mults(NCollection_Array1<Standard_Integer> & TMults) override { PYBIND11_OVERLOAD_PURE(void,Blend_SurfRstFunction,Mults,TMults) };
        Standard_Boolean Section(const Blend_Point & P,NCollection_Array1<gp_Pnt> & Poles,NCollection_Array1<gp_Vec> & DPoles,NCollection_Array1<gp_Pnt2d> & Poles2d,NCollection_Array1<gp_Vec2d> & DPoles2d,NCollection_Array1<Standard_Real> & Weigths,NCollection_Array1<Standard_Real> & DWeigths) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_SurfRstFunction,Section,P,Poles,DPoles,Poles2d,DPoles2d,Weigths,DWeigths) };
        Standard_Boolean Section(const Blend_Point & P,NCollection_Array1<gp_Pnt> & Poles,NCollection_Array1<gp_Vec> & DPoles,NCollection_Array1<gp_Vec> & D2Poles,NCollection_Array1<gp_Pnt2d> & Poles2d,NCollection_Array1<gp_Vec2d> & DPoles2d,NCollection_Array1<gp_Vec2d> & D2Poles2d,NCollection_Array1<Standard_Real> & Weigths,NCollection_Array1<Standard_Real> & DWeigths,NCollection_Array1<Standard_Real> & D2Weigths) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_SurfRstFunction,Section,P,Poles,DPoles,D2Poles,Poles2d,DPoles2d,D2Poles2d,Weigths,DWeigths,D2Weigths) };
        void Section(const Blend_Point & P,NCollection_Array1<gp_Pnt> & Poles,NCollection_Array1<gp_Pnt2d> & Poles2d,NCollection_Array1<Standard_Real> & Weigths) override { PYBIND11_OVERLOAD_PURE(void,Blend_SurfRstFunction,Section,P,Poles,Poles2d,Weigths) };
        void GetShape(Standard_Integer & NbPoles,Standard_Integer & NbKnots,Standard_Integer & Degree,Standard_Integer & NbPoles2d) override { PYBIND11_OVERLOAD_PURE(void,Blend_SurfRstFunction,GetShape,NbPoles,NbKnots,Degree,NbPoles2d) };


        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs
    preregister_template_NCollection_Sequence<Blend_Point>(m,"Blend_SequenceOfPoint");

// classes forward declarations only
    py::class_<Blend_AppFunction , shared_ptr<Blend_AppFunction>,Py_Blend_AppFunction , math_FunctionSetWithDerivatives>(m,"Blend_AppFunction",R"#(Deferred class for a function used to compute a blending surface between two surfaces, using a guide line. The vector <X> used in Value, Values and Derivatives methods has to be the vector of the parametric coordinates U1,V1, U2,V2, of the extremities of a section on the first and second surface.)#");
    py::class_<Blend_CurvPointFuncInv , shared_ptr<Blend_CurvPointFuncInv>,Py_Blend_CurvPointFuncInv , math_FunctionSetWithDerivatives>(m,"Blend_CurvPointFuncInv",R"#(Deferred class for a function used to compute a blending surface between a surface and a curve, using a guide line. This function is used to find a solution on a done point of the curve. The vector <X> used in Value, Values and Derivatives methods has to be the vector of the parametric coordinates w, U, V where w is the parameter on the guide line, U,V are the parametric coordinates of a point on the partner surface.)#");
    py::class_<Blend_FuncInv , shared_ptr<Blend_FuncInv>,Py_Blend_FuncInv , math_FunctionSetWithDerivatives>(m,"Blend_FuncInv",R"#(Deferred class for a function used to compute a blending surface between two surfaces, using a guide line. This function is used to find a solution on a restriction of one of the surface. The vector <X> used in Value, Values and Derivatives methods has to be the vector of the parametric coordinates t,w,U,V where t is the parameter on the curve on surface, w is the parameter on the guide line, U,V are the parametric coordinates of a point on the partner surface.)#");
    py::class_<Blend_Point , shared_ptr<Blend_Point> >(m,"Blend_Point",R"#(None)#");
    py::class_<Blend_SurfCurvFuncInv , shared_ptr<Blend_SurfCurvFuncInv>,Py_Blend_SurfCurvFuncInv , math_FunctionSetWithDerivatives>(m,"Blend_SurfCurvFuncInv",R"#(Deferred class for a function used to compute a blending surface between a surface and a curve, using a guide line. This function is used to find a solution on a done restriction of the surface.)#");
    py::class_<Blend_SurfPointFuncInv , shared_ptr<Blend_SurfPointFuncInv>,Py_Blend_SurfPointFuncInv , math_FunctionSetWithDerivatives>(m,"Blend_SurfPointFuncInv",R"#(Deferred class for a function used to compute a blending surface between a surface and a curve, using a guide line. This function is used to find a solution on a done point of the curve.)#");
    py::class_<Blend_CSFunction , shared_ptr<Blend_CSFunction>,Py_Blend_CSFunction , Blend_AppFunction>(m,"Blend_CSFunction",R"#(Deferred class for a function used to compute a blending surface between a surface and a curve, using a guide line. The vector <X> used in Value, Values and Derivatives methods may be the vector of the parametric coordinates U,V, W of the extremities of a section on the surface and the curve.)#");
    py::class_<Blend_Function , shared_ptr<Blend_Function>,Py_Blend_Function , Blend_AppFunction>(m,"Blend_Function",R"#(Deferred class for a function used to compute a blending surface between two surfaces, using a guide line. The vector <X> used in Value, Values and Derivatives methods has to be the vector of the parametric coordinates U1,V1, U2,V2, of the extremities of a section on the first and second surface.)#");
    py::class_<Blend_RstRstFunction , shared_ptr<Blend_RstRstFunction>,Py_Blend_RstRstFunction , Blend_AppFunction>(m,"Blend_RstRstFunction",R"#(Deferred class for a function used to compute a blending surface between a surface and a pcurve on an other Surface, using a guide line. The vector <X> used in Value, Values and Derivatives methods may be the vector of the parametric coordinates U,V, W of the extremities of a section on the surface and the curve.)#");
    py::class_<Blend_SurfRstFunction , shared_ptr<Blend_SurfRstFunction>,Py_Blend_SurfRstFunction , Blend_AppFunction>(m,"Blend_SurfRstFunction",R"#(Deferred class for a function used to compute a blending surface between a surface and a pcurve on an other Surface, using a guide line. The vector <X> used in Value, Values and Derivatives methods may be the vector of the parametric coordinates U,V, W of the extremities of a section on the surface and the curve.)#");

};

// user-defined post-inclusion per module

// user-defined post

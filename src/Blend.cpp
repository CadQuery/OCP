
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
#include <Blend_Point.hxx>
#include <math_Matrix.hxx>
#include <Blend_Point.hxx>
#include <math_Matrix.hxx>
#include <Blend_Point.hxx>
#include <math_Matrix.hxx>
#include <Blend_Point.hxx>
#include <math_Matrix.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <math_Matrix.hxx>
#include <gp_Pnt.hxx>
#include <math_Matrix.hxx>
#include <gp_Pnt.hxx>
#include <math_Matrix.hxx>
#include <Blend_Point.hxx>
#include <math_Matrix.hxx>
#include <Adaptor2d_HCurve2d.hxx>

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
// ./opencascade/Blend_SequenceOfPoint.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Blend(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Blend"));


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
        Standard_Integer NbEquations() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Blend_Function,NbEquations,) };
        Standard_Boolean Value(const math_Vector & X,math_Vector & F) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_Function,Value,X,F) };
        Standard_Boolean Derivatives(const math_Vector & X,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_Function,Derivatives,X,D) };
        Standard_Boolean Values(const math_Vector & X,math_Vector & F,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_Function,Values,X,F,D) };
        void Set(const Standard_Real Param) override { PYBIND11_OVERLOAD_PURE(void,Blend_Function,Set,Param) };
        void Set(const Standard_Real First,const Standard_Real Last) override { PYBIND11_OVERLOAD_PURE(void,Blend_Function,Set,First,Last) };
        void GetTolerance(math_Vector & Tolerance,const Standard_Real Tol) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_Function,GetTolerance,Tolerance,Tol) };
        void GetBounds(math_Vector & InfBound,math_Vector & SupBound) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_Function,GetBounds,InfBound,SupBound) };
        Standard_Boolean IsSolution(const math_Vector & Sol,const Standard_Real Tol) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_Function,IsSolution,Sol,Tol) };
        const gp_Pnt & PointOnS1() const  override { PYBIND11_OVERLOAD_PURE(const gp_Pnt &,Blend_Function,PointOnS1,) };
        const gp_Pnt & PointOnS2() const  override { PYBIND11_OVERLOAD_PURE(const gp_Pnt &,Blend_Function,PointOnS2,) };
        Standard_Boolean IsTangencyPoint() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_Function,IsTangencyPoint,) };
        const gp_Vec & TangentOnS1() const  override { PYBIND11_OVERLOAD_PURE(const gp_Vec &,Blend_Function,TangentOnS1,) };
        const gp_Vec2d & Tangent2dOnS1() const  override { PYBIND11_OVERLOAD_PURE(const gp_Vec2d &,Blend_Function,Tangent2dOnS1,) };
        const gp_Vec & TangentOnS2() const  override { PYBIND11_OVERLOAD_PURE(const gp_Vec &,Blend_Function,TangentOnS2,) };
        const gp_Vec2d & Tangent2dOnS2() const  override { PYBIND11_OVERLOAD_PURE(const gp_Vec2d &,Blend_Function,Tangent2dOnS2,) };
        void Tangent(const Standard_Real U1,const Standard_Real V1,const Standard_Real U2,const Standard_Real V2,gp_Vec & TgFirst,gp_Vec & TgLast,gp_Vec & NormFirst,gp_Vec & NormLast) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_Function,Tangent,U1,V1,U2,V2,TgFirst,TgLast,NormFirst,NormLast) };
        void GetTolerance(const Standard_Real BoundTol,const Standard_Real SurfTol,const Standard_Real AngleTol,math_Vector & Tol3d,math_Vector & Tol1D) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_Function,GetTolerance,BoundTol,SurfTol,AngleTol,Tol3d,Tol1D) };
        void Knots(NCollection_Array1<Standard_Real> & TKnots) override { PYBIND11_OVERLOAD_PURE(void,Blend_Function,Knots,TKnots) };
        void Mults(NCollection_Array1<Standard_Integer> & TMults) override { PYBIND11_OVERLOAD_PURE(void,Blend_Function,Mults,TMults) };
        Standard_Boolean Section(const Blend_Point & P,NCollection_Array1<gp_Pnt> & Poles,NCollection_Array1<gp_Vec> & DPoles,NCollection_Array1<gp_Pnt2d> & Poles2d,NCollection_Array1<gp_Vec2d> & DPoles2d,NCollection_Array1<Standard_Real> & Weigths,NCollection_Array1<Standard_Real> & DWeigths) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_Function,Section,P,Poles,DPoles,Poles2d,DPoles2d,Weigths,DWeigths) };
        void Section(const Blend_Point & P,NCollection_Array1<gp_Pnt> & Poles,NCollection_Array1<gp_Pnt2d> & Poles2d,NCollection_Array1<Standard_Real> & Weigths) override { PYBIND11_OVERLOAD_PURE(void,Blend_Function,Section,P,Poles,Poles2d,Weigths) };
        void GetShape(Standard_Integer & NbPoles,Standard_Integer & NbKnots,Standard_Integer & Degree,Standard_Integer & NbPoles2d) override { PYBIND11_OVERLOAD_PURE(void,Blend_Function,GetShape,NbPoles,NbKnots,Degree,NbPoles2d) };
        
        Standard_Real GetMinimalDistance() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Blend_AppFunction,GetMinimalDistance,) };
        Standard_Boolean IsRational() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Blend_AppFunction,IsRational,) };
        Standard_Real GetSectionSize() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Blend_AppFunction,GetSectionSize,) };
        void GetMinimalWeight(NCollection_Array1<Standard_Real> & Weigths) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,GetMinimalWeight,Weigths) };
        Standard_Integer NbIntervals(const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Blend_AppFunction,NbIntervals,S) };
        void Intervals(NCollection_Array1<Standard_Real> & T,const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(void,Blend_AppFunction,Intervals,T,S) };
        
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

// classes


    static_cast<py::class_<Blend_AppFunction , shared_ptr<Blend_AppFunction> ,Py_Blend_AppFunction , math_FunctionSetWithDerivatives >>(m.attr("Blend_AppFunction"))
    // methods
        .def("NbVariables",
             (Standard_Integer (Blend_AppFunction::*)() const) static_cast<Standard_Integer (Blend_AppFunction::*)() const>(&Blend_AppFunction::NbVariables),
             R"#(returns the number of variables of the function.)#" )
        .def("NbEquations",
             (Standard_Integer (Blend_AppFunction::*)() const) static_cast<Standard_Integer (Blend_AppFunction::*)() const>(&Blend_AppFunction::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (Blend_AppFunction::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Blend_AppFunction::*)( const math_Vector & ,  math_Vector &  ) >(&Blend_AppFunction::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Blend_AppFunction::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Blend_AppFunction::*)( const math_Vector & ,  math_Matrix &  ) >(&Blend_AppFunction::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Blend_AppFunction::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Blend_AppFunction::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&Blend_AppFunction::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (Blend_AppFunction::*)( const Standard_Real  ) ) static_cast<void (Blend_AppFunction::*)( const Standard_Real  ) >(&Blend_AppFunction::Set),
             R"#(Sets the value of the parameter along the guide line. This determines the plane in which the solution has to be found.)#"  , py::arg("Param"))
        .def("Set",
             (void (Blend_AppFunction::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Blend_AppFunction::*)( const Standard_Real ,  const Standard_Real  ) >(&Blend_AppFunction::Set),
             R"#(Sets the bounds of the parametric interval on the guide line. This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (Blend_AppFunction::*)( math_Vector & ,  const Standard_Real  ) const) static_cast<void (Blend_AppFunction::*)( math_Vector & ,  const Standard_Real  ) const>(&Blend_AppFunction::GetTolerance),
             R"#(Returns in the vector Tolerance the parametric tolerance for each of the 4 variables; Tol is the tolerance used in 3d space.)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (Blend_AppFunction::*)( math_Vector & ,  math_Vector &  ) const) static_cast<void (Blend_AppFunction::*)( math_Vector & ,  math_Vector &  ) const>(&Blend_AppFunction::GetBounds),
             R"#(Returns in the vector InfBound the lowest values allowed for each of the 4 variables. Returns in the vector SupBound the greatest values allowed for each of the 4 variables.)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (Blend_AppFunction::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (Blend_AppFunction::*)( const math_Vector & ,  const Standard_Real  ) >(&Blend_AppFunction::IsSolution),
             R"#(Returns Standard_True if Sol is a zero of the function. Tol is the tolerance used in 3d space. The computation is made at the current value of the parameter on the guide line.)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("GetMinimalDistance",
             (Standard_Real (Blend_AppFunction::*)() const) static_cast<Standard_Real (Blend_AppFunction::*)() const>(&Blend_AppFunction::GetMinimalDistance),
             R"#(Returns the minimal Distance beetween two extremitys of calculed sections.)#" )
        .def("Pnt1",
             (const gp_Pnt & (Blend_AppFunction::*)() const) static_cast<const gp_Pnt & (Blend_AppFunction::*)() const>(&Blend_AppFunction::Pnt1),
             R"#(Returns the point on the first support.)#" )
        .def("Pnt2",
             (const gp_Pnt & (Blend_AppFunction::*)() const) static_cast<const gp_Pnt & (Blend_AppFunction::*)() const>(&Blend_AppFunction::Pnt2),
             R"#(Returns the point on the first support.)#" )
        .def("IsRational",
             (Standard_Boolean (Blend_AppFunction::*)() const) static_cast<Standard_Boolean (Blend_AppFunction::*)() const>(&Blend_AppFunction::IsRational),
             R"#(Returns if the section is rationnal)#" )
        .def("GetSectionSize",
             (Standard_Real (Blend_AppFunction::*)() const) static_cast<Standard_Real (Blend_AppFunction::*)() const>(&Blend_AppFunction::GetSectionSize),
             R"#(Returns the length of the maximum section)#" )
        .def("GetMinimalWeight",
             (void (Blend_AppFunction::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (Blend_AppFunction::*)( NCollection_Array1<Standard_Real> &  ) const>(&Blend_AppFunction::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles of all sections.)#"  , py::arg("Weigths"))
        .def("NbIntervals",
             (Standard_Integer (Blend_AppFunction::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (Blend_AppFunction::*)( const GeomAbs_Shape  ) const>(&Blend_AppFunction::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (Blend_AppFunction::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (Blend_AppFunction::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&Blend_AppFunction::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("GetTolerance",
             (void (Blend_AppFunction::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const) static_cast<void (Blend_AppFunction::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const>(&Blend_AppFunction::GetTolerance),
             R"#(Returns the tolerance to reach in approximation to respecte BoundTol error at the Boundary AngleTol tangent error at the Boundary SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"),  py::arg("Tol1D"))
        .def("Knots",
             (void (Blend_AppFunction::*)( NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Blend_AppFunction::*)( NCollection_Array1<Standard_Real> &  ) >(&Blend_AppFunction::Knots),
             R"#(None)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (Blend_AppFunction::*)( NCollection_Array1<Standard_Integer> &  ) ) static_cast<void (Blend_AppFunction::*)( NCollection_Array1<Standard_Integer> &  ) >(&Blend_AppFunction::Mults),
             R"#(None)#"  , py::arg("TMults"))
        .def("Section",
             (Standard_Boolean (Blend_AppFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (Blend_AppFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&Blend_AppFunction::Section),
             R"#(Used for the first and last section The method returns Standard_True if the derivatives are computed, otherwise it returns Standard_False.)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("Section",
             (void (Blend_AppFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Blend_AppFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) >(&Blend_AppFunction::Section),
             R"#(None)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("Poles2d"),  py::arg("Weigths"))
        .def("Section",
             (Standard_Boolean (Blend_AppFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (Blend_AppFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&Blend_AppFunction::Section),
             R"#(Used for the first and last section The method returns Standard_True if the derivatives are computed, otherwise it returns Standard_False.)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
        .def("Parameter",
             (Standard_Real (Blend_AppFunction::*)( const Blend_Point &  ) const) static_cast<Standard_Real (Blend_AppFunction::*)( const Blend_Point &  ) const>(&Blend_AppFunction::Parameter),
             R"#(Returns the parameter of the point P. Used to impose the parameters in the approximation.)#"  , py::arg("P"))
    // methods using call by reference i.s.o. return
        .def("GetShape",
             []( Blend_AppFunction &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; Standard_Integer  NbPoles2d; self.GetShape(NbPoles,NbKnots,Degree,NbPoles2d); return std::make_tuple(NbPoles,NbKnots,Degree,NbPoles2d); },
             R"#(None)#" )
        .def("Resolution",
             []( Blend_AppFunction &self , const Standard_Integer IC2d,const Standard_Real Tol ){ Standard_Real  TolU; Standard_Real  TolV; self.Resolution(IC2d,Tol,TolU,TolV); return std::make_tuple(TolU,TolV); },
             R"#(None)#"  , py::arg("IC2d"),  py::arg("Tol"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Blend_CurvPointFuncInv , shared_ptr<Blend_CurvPointFuncInv> ,Py_Blend_CurvPointFuncInv , math_FunctionSetWithDerivatives >>(m.attr("Blend_CurvPointFuncInv"))
    // methods
        .def("NbVariables",
             (Standard_Integer (Blend_CurvPointFuncInv::*)() const) static_cast<Standard_Integer (Blend_CurvPointFuncInv::*)() const>(&Blend_CurvPointFuncInv::NbVariables),
             R"#(Returns 3.)#" )
        .def("NbEquations",
             (Standard_Integer (Blend_CurvPointFuncInv::*)() const) static_cast<Standard_Integer (Blend_CurvPointFuncInv::*)() const>(&Blend_CurvPointFuncInv::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (Blend_CurvPointFuncInv::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Blend_CurvPointFuncInv::*)( const math_Vector & ,  math_Vector &  ) >(&Blend_CurvPointFuncInv::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Blend_CurvPointFuncInv::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Blend_CurvPointFuncInv::*)( const math_Vector & ,  math_Matrix &  ) >(&Blend_CurvPointFuncInv::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Blend_CurvPointFuncInv::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Blend_CurvPointFuncInv::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&Blend_CurvPointFuncInv::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (Blend_CurvPointFuncInv::*)( const gp_Pnt &  ) ) static_cast<void (Blend_CurvPointFuncInv::*)( const gp_Pnt &  ) >(&Blend_CurvPointFuncInv::Set),
             R"#(Set the Point on which a solution has to be found.)#"  , py::arg("P"))
        .def("GetTolerance",
             (void (Blend_CurvPointFuncInv::*)( math_Vector & ,  const Standard_Real  ) const) static_cast<void (Blend_CurvPointFuncInv::*)( math_Vector & ,  const Standard_Real  ) const>(&Blend_CurvPointFuncInv::GetTolerance),
             R"#(Returns in the vector Tolerance the parametric tolerance for each of the 3 variables; Tol is the tolerance used in 3d space.)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (Blend_CurvPointFuncInv::*)( math_Vector & ,  math_Vector &  ) const) static_cast<void (Blend_CurvPointFuncInv::*)( math_Vector & ,  math_Vector &  ) const>(&Blend_CurvPointFuncInv::GetBounds),
             R"#(Returns in the vector InfBound the lowest values allowed for each of the 3 variables. Returns in the vector SupBound the greatest values allowed for each of the 3 variables.)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (Blend_CurvPointFuncInv::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (Blend_CurvPointFuncInv::*)( const math_Vector & ,  const Standard_Real  ) >(&Blend_CurvPointFuncInv::IsSolution),
             R"#(Returns Standard_True if Sol is a zero of the function. Tol is the tolerance used in 3d space.)#"  , py::arg("Sol"),  py::arg("Tol"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Blend_FuncInv , shared_ptr<Blend_FuncInv> ,Py_Blend_FuncInv , math_FunctionSetWithDerivatives >>(m.attr("Blend_FuncInv"))
    // methods
        .def("NbVariables",
             (Standard_Integer (Blend_FuncInv::*)() const) static_cast<Standard_Integer (Blend_FuncInv::*)() const>(&Blend_FuncInv::NbVariables),
             R"#(Returns 4.)#" )
        .def("NbEquations",
             (Standard_Integer (Blend_FuncInv::*)() const) static_cast<Standard_Integer (Blend_FuncInv::*)() const>(&Blend_FuncInv::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (Blend_FuncInv::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Blend_FuncInv::*)( const math_Vector & ,  math_Vector &  ) >(&Blend_FuncInv::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Blend_FuncInv::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Blend_FuncInv::*)( const math_Vector & ,  math_Matrix &  ) >(&Blend_FuncInv::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Blend_FuncInv::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Blend_FuncInv::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&Blend_FuncInv::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (Blend_FuncInv::*)( const Standard_Boolean ,  const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<void (Blend_FuncInv::*)( const Standard_Boolean ,  const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&Blend_FuncInv::Set),
             R"#(Sets the CurveOnSurface on which a solution has to be found. If <OnFirst> is set to Standard_True, the curve will be on the first surface, otherwise the curve is on the second one.)#"  , py::arg("OnFirst"),  py::arg("COnSurf"))
        .def("GetTolerance",
             (void (Blend_FuncInv::*)( math_Vector & ,  const Standard_Real  ) const) static_cast<void (Blend_FuncInv::*)( math_Vector & ,  const Standard_Real  ) const>(&Blend_FuncInv::GetTolerance),
             R"#(Returns in the vector Tolerance the parametric tolerance for each of the 4 variables; Tol is the tolerance used in 3d space.)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (Blend_FuncInv::*)( math_Vector & ,  math_Vector &  ) const) static_cast<void (Blend_FuncInv::*)( math_Vector & ,  math_Vector &  ) const>(&Blend_FuncInv::GetBounds),
             R"#(Returns in the vector InfBound the lowest values allowed for each of the 4 variables. Returns in the vector SupBound the greatest values allowed for each of the 4 variables.)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (Blend_FuncInv::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (Blend_FuncInv::*)( const math_Vector & ,  const Standard_Real  ) >(&Blend_FuncInv::IsSolution),
             R"#(Returns Standard_True if Sol is a zero of the function. Tol is the tolerance used in 3d space.)#"  , py::arg("Sol"),  py::arg("Tol"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Blend_Point , shared_ptr<Blend_Point>  >>(m.attr("Blend_Point"))
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const gp_Vec &,const gp_Vec &,const gp_Vec2d &,const gp_Vec2d & >()  , py::arg("Pt1"),  py::arg("Pt2"),  py::arg("Param"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("Tg1"),  py::arg("Tg2"),  py::arg("Tg12d"),  py::arg("Tg22d") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Pt1"),  py::arg("Pt2"),  py::arg("Param"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const gp_Vec &,const gp_Vec &,const gp_Vec2d & >()  , py::arg("Pts"),  py::arg("Ptc"),  py::arg("Param"),  py::arg("U"),  py::arg("V"),  py::arg("W"),  py::arg("Tgs"),  py::arg("Tgc"),  py::arg("Tg2d") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Pts"),  py::arg("Ptc"),  py::arg("Param"),  py::arg("U"),  py::arg("V"),  py::arg("W") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const gp_Vec &,const gp_Vec &,const gp_Vec2d &,const gp_Vec2d & >()  , py::arg("Pt1"),  py::arg("Pt2"),  py::arg("Param"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("PC"),  py::arg("Tg1"),  py::arg("Tg2"),  py::arg("Tg12d"),  py::arg("Tg22d") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Pt1"),  py::arg("Pt2"),  py::arg("Param"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("PC") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const gp_Vec &,const gp_Vec &,const gp_Vec2d &,const gp_Vec2d & >()  , py::arg("Pt1"),  py::arg("Pt2"),  py::arg("Param"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("PC1"),  py::arg("PC2"),  py::arg("Tg1"),  py::arg("Tg2"),  py::arg("Tg12d"),  py::arg("Tg22d") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Pt1"),  py::arg("Pt2"),  py::arg("Param"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("PC1"),  py::arg("PC2") )
    // methods
        .def("SetValue",
             (void (Blend_Point::*)( const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const gp_Vec & ,  const gp_Vec & ,  const gp_Vec2d & ,  const gp_Vec2d &  ) ) static_cast<void (Blend_Point::*)( const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const gp_Vec & ,  const gp_Vec & ,  const gp_Vec2d & ,  const gp_Vec2d &  ) >(&Blend_Point::SetValue),
             R"#(Set the values for a point on 2 surfaces, with tangents.)#"  , py::arg("Pt1"),  py::arg("Pt2"),  py::arg("Param"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("Tg1"),  py::arg("Tg2"),  py::arg("Tg12d"),  py::arg("Tg22d"))
        .def("SetValue",
             (void (Blend_Point::*)( const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Blend_Point::*)( const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Blend_Point::SetValue),
             R"#(Set the values for a point on 2 surfaces, without tangents.)#"  , py::arg("Pt1"),  py::arg("Pt2"),  py::arg("Param"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"))
        .def("SetValue",
             (void (Blend_Point::*)( const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const gp_Vec & ,  const gp_Vec & ,  const gp_Vec2d &  ) ) static_cast<void (Blend_Point::*)( const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const gp_Vec & ,  const gp_Vec & ,  const gp_Vec2d &  ) >(&Blend_Point::SetValue),
             R"#(Set the values for a point on a surface and a curve, with tangents.)#"  , py::arg("Pts"),  py::arg("Ptc"),  py::arg("Param"),  py::arg("U"),  py::arg("V"),  py::arg("W"),  py::arg("Tgs"),  py::arg("Tgc"),  py::arg("Tg2d"))
        .def("SetValue",
             (void (Blend_Point::*)( const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Blend_Point::*)( const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Blend_Point::SetValue),
             R"#(Set the values for a point on a surface and a curve, without tangents.)#"  , py::arg("Pts"),  py::arg("Ptc"),  py::arg("Param"),  py::arg("U"),  py::arg("V"),  py::arg("W"))
        .def("SetValue",
             (void (Blend_Point::*)( const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const gp_Vec & ,  const gp_Vec & ,  const gp_Vec2d & ,  const gp_Vec2d &  ) ) static_cast<void (Blend_Point::*)( const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const gp_Vec & ,  const gp_Vec & ,  const gp_Vec2d & ,  const gp_Vec2d &  ) >(&Blend_Point::SetValue),
             R"#(Creates a point on a surface and a curve on surface, with tangents.)#"  , py::arg("Pt1"),  py::arg("Pt2"),  py::arg("Param"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("PC"),  py::arg("Tg1"),  py::arg("Tg2"),  py::arg("Tg12d"),  py::arg("Tg22d"))
        .def("SetValue",
             (void (Blend_Point::*)( const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Blend_Point::*)( const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Blend_Point::SetValue),
             R"#(Creates a point on a surface and a curve on surface, without tangents.)#"  , py::arg("Pt1"),  py::arg("Pt2"),  py::arg("Param"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("PC"))
        .def("SetValue",
             (void (Blend_Point::*)( const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const gp_Vec & ,  const gp_Vec & ,  const gp_Vec2d & ,  const gp_Vec2d &  ) ) static_cast<void (Blend_Point::*)( const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const gp_Vec & ,  const gp_Vec & ,  const gp_Vec2d & ,  const gp_Vec2d &  ) >(&Blend_Point::SetValue),
             R"#(Creates a point on two curves on surfaces, with tangents.)#"  , py::arg("Pt1"),  py::arg("Pt2"),  py::arg("Param"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("PC1"),  py::arg("PC2"),  py::arg("Tg1"),  py::arg("Tg2"),  py::arg("Tg12d"),  py::arg("Tg22d"))
        .def("SetValue",
             (void (Blend_Point::*)( const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Blend_Point::*)( const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Blend_Point::SetValue),
             R"#(Creates a point on two curves on surfaces, without tangents.)#"  , py::arg("Pt1"),  py::arg("Pt2"),  py::arg("Param"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("PC1"),  py::arg("PC2"))
        .def("SetValue",
             (void (Blend_Point::*)( const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Blend_Point::*)( const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Blend_Point::SetValue),
             R"#(Creates a point on two curves.)#"  , py::arg("Pt1"),  py::arg("Pt2"),  py::arg("Param"),  py::arg("PC1"),  py::arg("PC2"))
        .def("SetParameter",
             (void (Blend_Point::*)( const Standard_Real  ) ) static_cast<void (Blend_Point::*)( const Standard_Real  ) >(&Blend_Point::SetParameter),
             R"#(Changes parameter on existing point)#"  , py::arg("Param"))
        .def("Parameter",
             (Standard_Real (Blend_Point::*)() const) static_cast<Standard_Real (Blend_Point::*)() const>(&Blend_Point::Parameter),
             R"#(None)#" )
        .def("IsTangencyPoint",
             (Standard_Boolean (Blend_Point::*)() const) static_cast<Standard_Boolean (Blend_Point::*)() const>(&Blend_Point::IsTangencyPoint),
             R"#(Returns Standard_True if it was not possible to compute the tangent vectors at PointOnS1 and/or PointOnS2.)#" )
        .def("PointOnS1",
             (const gp_Pnt & (Blend_Point::*)() const) static_cast<const gp_Pnt & (Blend_Point::*)() const>(&Blend_Point::PointOnS1),
             R"#(None)#" )
        .def("PointOnS2",
             (const gp_Pnt & (Blend_Point::*)() const) static_cast<const gp_Pnt & (Blend_Point::*)() const>(&Blend_Point::PointOnS2),
             R"#(None)#" )
        .def("TangentOnS1",
             (const gp_Vec & (Blend_Point::*)() const) static_cast<const gp_Vec & (Blend_Point::*)() const>(&Blend_Point::TangentOnS1),
             R"#(None)#" )
        .def("TangentOnS2",
             (const gp_Vec & (Blend_Point::*)() const) static_cast<const gp_Vec & (Blend_Point::*)() const>(&Blend_Point::TangentOnS2),
             R"#(None)#" )
        .def("Tangent2dOnS1",
             (gp_Vec2d (Blend_Point::*)() const) static_cast<gp_Vec2d (Blend_Point::*)() const>(&Blend_Point::Tangent2dOnS1),
             R"#(None)#" )
        .def("Tangent2dOnS2",
             (gp_Vec2d (Blend_Point::*)() const) static_cast<gp_Vec2d (Blend_Point::*)() const>(&Blend_Point::Tangent2dOnS2),
             R"#(None)#" )
        .def("PointOnS",
             (const gp_Pnt & (Blend_Point::*)() const) static_cast<const gp_Pnt & (Blend_Point::*)() const>(&Blend_Point::PointOnS),
             R"#(None)#" )
        .def("PointOnC",
             (const gp_Pnt & (Blend_Point::*)() const) static_cast<const gp_Pnt & (Blend_Point::*)() const>(&Blend_Point::PointOnC),
             R"#(None)#" )
        .def("ParameterOnC",
             (Standard_Real (Blend_Point::*)() const) static_cast<Standard_Real (Blend_Point::*)() const>(&Blend_Point::ParameterOnC),
             R"#(None)#" )
        .def("TangentOnS",
             (const gp_Vec & (Blend_Point::*)() const) static_cast<const gp_Vec & (Blend_Point::*)() const>(&Blend_Point::TangentOnS),
             R"#(None)#" )
        .def("TangentOnC",
             (const gp_Vec & (Blend_Point::*)() const) static_cast<const gp_Vec & (Blend_Point::*)() const>(&Blend_Point::TangentOnC),
             R"#(None)#" )
        .def("Tangent2d",
             (gp_Vec2d (Blend_Point::*)() const) static_cast<gp_Vec2d (Blend_Point::*)() const>(&Blend_Point::Tangent2d),
             R"#(None)#" )
        .def("PointOnC1",
             (const gp_Pnt & (Blend_Point::*)() const) static_cast<const gp_Pnt & (Blend_Point::*)() const>(&Blend_Point::PointOnC1),
             R"#(None)#" )
        .def("PointOnC2",
             (const gp_Pnt & (Blend_Point::*)() const) static_cast<const gp_Pnt & (Blend_Point::*)() const>(&Blend_Point::PointOnC2),
             R"#(None)#" )
        .def("ParameterOnC1",
             (Standard_Real (Blend_Point::*)() const) static_cast<Standard_Real (Blend_Point::*)() const>(&Blend_Point::ParameterOnC1),
             R"#(None)#" )
        .def("ParameterOnC2",
             (Standard_Real (Blend_Point::*)() const) static_cast<Standard_Real (Blend_Point::*)() const>(&Blend_Point::ParameterOnC2),
             R"#(None)#" )
        .def("TangentOnC1",
             (const gp_Vec & (Blend_Point::*)() const) static_cast<const gp_Vec & (Blend_Point::*)() const>(&Blend_Point::TangentOnC1),
             R"#(None)#" )
        .def("TangentOnC2",
             (const gp_Vec & (Blend_Point::*)() const) static_cast<const gp_Vec & (Blend_Point::*)() const>(&Blend_Point::TangentOnC2),
             R"#(None)#" )
        .def("SetParameter",
             (void (Blend_Point::*)( const Standard_Real  ) ) static_cast<void (Blend_Point::*)( const Standard_Real  ) >(&Blend_Point::SetParameter),
             R"#(Changes parameter on existing point)#"  , py::arg("Param"))
        .def("PointOnS1",
             (const gp_Pnt & (Blend_Point::*)() const) static_cast<const gp_Pnt & (Blend_Point::*)() const>(&Blend_Point::PointOnS1),
             R"#(None)#" )
        .def("PointOnS2",
             (const gp_Pnt & (Blend_Point::*)() const) static_cast<const gp_Pnt & (Blend_Point::*)() const>(&Blend_Point::PointOnS2),
             R"#(None)#" )
        .def("Parameter",
             (Standard_Real (Blend_Point::*)() const) static_cast<Standard_Real (Blend_Point::*)() const>(&Blend_Point::Parameter),
             R"#(None)#" )
        .def("IsTangencyPoint",
             (Standard_Boolean (Blend_Point::*)() const) static_cast<Standard_Boolean (Blend_Point::*)() const>(&Blend_Point::IsTangencyPoint),
             R"#(Returns Standard_True if it was not possible to compute the tangent vectors at PointOnS1 and/or PointOnS2.)#" )
        .def("TangentOnS1",
             (const gp_Vec & (Blend_Point::*)() const) static_cast<const gp_Vec & (Blend_Point::*)() const>(&Blend_Point::TangentOnS1),
             R"#(None)#" )
        .def("TangentOnS2",
             (const gp_Vec & (Blend_Point::*)() const) static_cast<const gp_Vec & (Blend_Point::*)() const>(&Blend_Point::TangentOnS2),
             R"#(None)#" )
        .def("Tangent2dOnS1",
             (gp_Vec2d (Blend_Point::*)() const) static_cast<gp_Vec2d (Blend_Point::*)() const>(&Blend_Point::Tangent2dOnS1),
             R"#(None)#" )
        .def("Tangent2dOnS2",
             (gp_Vec2d (Blend_Point::*)() const) static_cast<gp_Vec2d (Blend_Point::*)() const>(&Blend_Point::Tangent2dOnS2),
             R"#(None)#" )
        .def("PointOnS",
             (const gp_Pnt & (Blend_Point::*)() const) static_cast<const gp_Pnt & (Blend_Point::*)() const>(&Blend_Point::PointOnS),
             R"#(None)#" )
        .def("PointOnC",
             (const gp_Pnt & (Blend_Point::*)() const) static_cast<const gp_Pnt & (Blend_Point::*)() const>(&Blend_Point::PointOnC),
             R"#(None)#" )
        .def("ParameterOnC",
             (Standard_Real (Blend_Point::*)() const) static_cast<Standard_Real (Blend_Point::*)() const>(&Blend_Point::ParameterOnC),
             R"#(None)#" )
        .def("TangentOnS",
             (const gp_Vec & (Blend_Point::*)() const) static_cast<const gp_Vec & (Blend_Point::*)() const>(&Blend_Point::TangentOnS),
             R"#(None)#" )
        .def("TangentOnC",
             (const gp_Vec & (Blend_Point::*)() const) static_cast<const gp_Vec & (Blend_Point::*)() const>(&Blend_Point::TangentOnC),
             R"#(None)#" )
        .def("Tangent2d",
             (gp_Vec2d (Blend_Point::*)() const) static_cast<gp_Vec2d (Blend_Point::*)() const>(&Blend_Point::Tangent2d),
             R"#(None)#" )
        .def("PointOnC1",
             (const gp_Pnt & (Blend_Point::*)() const) static_cast<const gp_Pnt & (Blend_Point::*)() const>(&Blend_Point::PointOnC1),
             R"#(None)#" )
        .def("PointOnC2",
             (const gp_Pnt & (Blend_Point::*)() const) static_cast<const gp_Pnt & (Blend_Point::*)() const>(&Blend_Point::PointOnC2),
             R"#(None)#" )
        .def("ParameterOnC1",
             (Standard_Real (Blend_Point::*)() const) static_cast<Standard_Real (Blend_Point::*)() const>(&Blend_Point::ParameterOnC1),
             R"#(None)#" )
        .def("ParameterOnC2",
             (Standard_Real (Blend_Point::*)() const) static_cast<Standard_Real (Blend_Point::*)() const>(&Blend_Point::ParameterOnC2),
             R"#(None)#" )
        .def("TangentOnC1",
             (const gp_Vec & (Blend_Point::*)() const) static_cast<const gp_Vec & (Blend_Point::*)() const>(&Blend_Point::TangentOnC1),
             R"#(None)#" )
        .def("TangentOnC2",
             (const gp_Vec & (Blend_Point::*)() const) static_cast<const gp_Vec & (Blend_Point::*)() const>(&Blend_Point::TangentOnC2),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("ParametersOnS1",
             []( Blend_Point &self   ){ Standard_Real  U; Standard_Real  V; self.ParametersOnS1(U,V); return std::make_tuple(U,V); },
             R"#(None)#" )
        .def("ParametersOnS2",
             []( Blend_Point &self   ){ Standard_Real  U; Standard_Real  V; self.ParametersOnS2(U,V); return std::make_tuple(U,V); },
             R"#(None)#" )
        .def("ParametersOnS",
             []( Blend_Point &self   ){ Standard_Real  U; Standard_Real  V; self.ParametersOnS(U,V); return std::make_tuple(U,V); },
             R"#(None)#" )
        .def("ParametersOnS1",
             []( Blend_Point &self   ){ Standard_Real  U1; Standard_Real  V1; self.ParametersOnS1(U1,V1); return std::make_tuple(U1,V1); },
             R"#(None)#" )
        .def("ParametersOnS2",
             []( Blend_Point &self   ){ Standard_Real  U2; Standard_Real  V2; self.ParametersOnS2(U2,V2); return std::make_tuple(U2,V2); },
             R"#(None)#" )
        .def("ParametersOnS",
             []( Blend_Point &self   ){ Standard_Real  U1; Standard_Real  V1; self.ParametersOnS(U1,V1); return std::make_tuple(U1,V1); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Blend_SurfCurvFuncInv , shared_ptr<Blend_SurfCurvFuncInv> ,Py_Blend_SurfCurvFuncInv , math_FunctionSetWithDerivatives >>(m.attr("Blend_SurfCurvFuncInv"))
    // methods
        .def("NbVariables",
             (Standard_Integer (Blend_SurfCurvFuncInv::*)() const) static_cast<Standard_Integer (Blend_SurfCurvFuncInv::*)() const>(&Blend_SurfCurvFuncInv::NbVariables),
             R"#(Returns 3.)#" )
        .def("NbEquations",
             (Standard_Integer (Blend_SurfCurvFuncInv::*)() const) static_cast<Standard_Integer (Blend_SurfCurvFuncInv::*)() const>(&Blend_SurfCurvFuncInv::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (Blend_SurfCurvFuncInv::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Blend_SurfCurvFuncInv::*)( const math_Vector & ,  math_Vector &  ) >(&Blend_SurfCurvFuncInv::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Blend_SurfCurvFuncInv::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Blend_SurfCurvFuncInv::*)( const math_Vector & ,  math_Matrix &  ) >(&Blend_SurfCurvFuncInv::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Blend_SurfCurvFuncInv::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Blend_SurfCurvFuncInv::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&Blend_SurfCurvFuncInv::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (Blend_SurfCurvFuncInv::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<void (Blend_SurfCurvFuncInv::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&Blend_SurfCurvFuncInv::Set),
             R"#(Set the Point on which a solution has to be found.)#"  , py::arg("Rst"))
        .def("GetTolerance",
             (void (Blend_SurfCurvFuncInv::*)( math_Vector & ,  const Standard_Real  ) const) static_cast<void (Blend_SurfCurvFuncInv::*)( math_Vector & ,  const Standard_Real  ) const>(&Blend_SurfCurvFuncInv::GetTolerance),
             R"#(Returns in the vector Tolerance the parametric tolerance for each of the 3 variables; Tol is the tolerance used in 3d space.)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (Blend_SurfCurvFuncInv::*)( math_Vector & ,  math_Vector &  ) const) static_cast<void (Blend_SurfCurvFuncInv::*)( math_Vector & ,  math_Vector &  ) const>(&Blend_SurfCurvFuncInv::GetBounds),
             R"#(Returns in the vector InfBound the lowest values allowed for each of the 3 variables. Returns in the vector SupBound the greatest values allowed for each of the 3 variables.)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (Blend_SurfCurvFuncInv::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (Blend_SurfCurvFuncInv::*)( const math_Vector & ,  const Standard_Real  ) >(&Blend_SurfCurvFuncInv::IsSolution),
             R"#(Returns Standard_True if Sol is a zero of the function. Tol is the tolerance used in 3d space.)#"  , py::arg("Sol"),  py::arg("Tol"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Blend_SurfPointFuncInv , shared_ptr<Blend_SurfPointFuncInv> ,Py_Blend_SurfPointFuncInv , math_FunctionSetWithDerivatives >>(m.attr("Blend_SurfPointFuncInv"))
    // methods
        .def("NbVariables",
             (Standard_Integer (Blend_SurfPointFuncInv::*)() const) static_cast<Standard_Integer (Blend_SurfPointFuncInv::*)() const>(&Blend_SurfPointFuncInv::NbVariables),
             R"#(Returns 3.)#" )
        .def("NbEquations",
             (Standard_Integer (Blend_SurfPointFuncInv::*)() const) static_cast<Standard_Integer (Blend_SurfPointFuncInv::*)() const>(&Blend_SurfPointFuncInv::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (Blend_SurfPointFuncInv::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Blend_SurfPointFuncInv::*)( const math_Vector & ,  math_Vector &  ) >(&Blend_SurfPointFuncInv::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Blend_SurfPointFuncInv::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Blend_SurfPointFuncInv::*)( const math_Vector & ,  math_Matrix &  ) >(&Blend_SurfPointFuncInv::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Blend_SurfPointFuncInv::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Blend_SurfPointFuncInv::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&Blend_SurfPointFuncInv::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (Blend_SurfPointFuncInv::*)( const gp_Pnt &  ) ) static_cast<void (Blend_SurfPointFuncInv::*)( const gp_Pnt &  ) >(&Blend_SurfPointFuncInv::Set),
             R"#(Set the Point on which a solution has to be found.)#"  , py::arg("P"))
        .def("GetTolerance",
             (void (Blend_SurfPointFuncInv::*)( math_Vector & ,  const Standard_Real  ) const) static_cast<void (Blend_SurfPointFuncInv::*)( math_Vector & ,  const Standard_Real  ) const>(&Blend_SurfPointFuncInv::GetTolerance),
             R"#(Returns in the vector Tolerance the parametric tolerance for each of the 3 variables; Tol is the tolerance used in 3d space.)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (Blend_SurfPointFuncInv::*)( math_Vector & ,  math_Vector &  ) const) static_cast<void (Blend_SurfPointFuncInv::*)( math_Vector & ,  math_Vector &  ) const>(&Blend_SurfPointFuncInv::GetBounds),
             R"#(Returns in the vector InfBound the lowest values allowed for each of the 3 variables. Returns in the vector SupBound the greatest values allowed for each of the 3 variables.)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (Blend_SurfPointFuncInv::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (Blend_SurfPointFuncInv::*)( const math_Vector & ,  const Standard_Real  ) >(&Blend_SurfPointFuncInv::IsSolution),
             R"#(Returns Standard_True if Sol is a zero of the function. Tol is the tolerance used in 3d space.)#"  , py::arg("Sol"),  py::arg("Tol"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Blend_CSFunction , shared_ptr<Blend_CSFunction> ,Py_Blend_CSFunction , Blend_AppFunction >>(m.attr("Blend_CSFunction"))
    // methods
        .def("NbVariables",
             (Standard_Integer (Blend_CSFunction::*)() const) static_cast<Standard_Integer (Blend_CSFunction::*)() const>(&Blend_CSFunction::NbVariables),
             R"#(Returns 3 (default value). Can be redefined.)#" )
        .def("NbEquations",
             (Standard_Integer (Blend_CSFunction::*)() const) static_cast<Standard_Integer (Blend_CSFunction::*)() const>(&Blend_CSFunction::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (Blend_CSFunction::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Blend_CSFunction::*)( const math_Vector & ,  math_Vector &  ) >(&Blend_CSFunction::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Blend_CSFunction::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Blend_CSFunction::*)( const math_Vector & ,  math_Matrix &  ) >(&Blend_CSFunction::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Blend_CSFunction::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Blend_CSFunction::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&Blend_CSFunction::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (Blend_CSFunction::*)( const Standard_Real  ) ) static_cast<void (Blend_CSFunction::*)( const Standard_Real  ) >(&Blend_CSFunction::Set),
             R"#(Sets the value of the parameter along the guide line. This determines the plane in which the solution has to be found.)#"  , py::arg("Param"))
        .def("Set",
             (void (Blend_CSFunction::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Blend_CSFunction::*)( const Standard_Real ,  const Standard_Real  ) >(&Blend_CSFunction::Set),
             R"#(Sets the bounds of the parametric interval on the guide line. This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (Blend_CSFunction::*)( math_Vector & ,  const Standard_Real  ) const) static_cast<void (Blend_CSFunction::*)( math_Vector & ,  const Standard_Real  ) const>(&Blend_CSFunction::GetTolerance),
             R"#(Returns in the vector Tolerance the parametric tolerance for each of the 3 variables; Tol is the tolerance used in 3d space.)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (Blend_CSFunction::*)( math_Vector & ,  math_Vector &  ) const) static_cast<void (Blend_CSFunction::*)( math_Vector & ,  math_Vector &  ) const>(&Blend_CSFunction::GetBounds),
             R"#(Returns in the vector InfBound the lowest values allowed for each of the 3 variables. Returns in the vector SupBound the greatest values allowed for each of the 3 variables.)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (Blend_CSFunction::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (Blend_CSFunction::*)( const math_Vector & ,  const Standard_Real  ) >(&Blend_CSFunction::IsSolution),
             R"#(Returns Standard_True if Sol is a zero of the function. Tol is the tolerance used in 3d space. The computation is made at the current value of the parameter on the guide line.)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("GetMinimalDistance",
             (Standard_Real (Blend_CSFunction::*)() const) static_cast<Standard_Real (Blend_CSFunction::*)() const>(&Blend_CSFunction::GetMinimalDistance),
             R"#(Returns the minimal Distance beetween two extremitys of calculed sections.)#" )
        .def("Pnt1",
             (const gp_Pnt & (Blend_CSFunction::*)() const) static_cast<const gp_Pnt & (Blend_CSFunction::*)() const>(&Blend_CSFunction::Pnt1),
             R"#(Returns the point on the first support.)#" )
        .def("Pnt2",
             (const gp_Pnt & (Blend_CSFunction::*)() const) static_cast<const gp_Pnt & (Blend_CSFunction::*)() const>(&Blend_CSFunction::Pnt2),
             R"#(Returns the point on the seconde support.)#" )
        .def("PointOnS",
             (const gp_Pnt & (Blend_CSFunction::*)() const) static_cast<const gp_Pnt & (Blend_CSFunction::*)() const>(&Blend_CSFunction::PointOnS),
             R"#(Returns the point on the surface.)#" )
        .def("PointOnC",
             (const gp_Pnt & (Blend_CSFunction::*)() const) static_cast<const gp_Pnt & (Blend_CSFunction::*)() const>(&Blend_CSFunction::PointOnC),
             R"#(Returns the point on the curve.)#" )
        .def("Pnt2d",
             (const gp_Pnt2d & (Blend_CSFunction::*)() const) static_cast<const gp_Pnt2d & (Blend_CSFunction::*)() const>(&Blend_CSFunction::Pnt2d),
             R"#(Returns U,V coordinates of the point on the surface.)#" )
        .def("ParameterOnC",
             (Standard_Real (Blend_CSFunction::*)() const) static_cast<Standard_Real (Blend_CSFunction::*)() const>(&Blend_CSFunction::ParameterOnC),
             R"#(Returns parameter of the point on the curve.)#" )
        .def("IsTangencyPoint",
             (Standard_Boolean (Blend_CSFunction::*)() const) static_cast<Standard_Boolean (Blend_CSFunction::*)() const>(&Blend_CSFunction::IsTangencyPoint),
             R"#(Returns True when it is not possible to compute the tangent vectors at PointOnS and/or PointOnC.)#" )
        .def("TangentOnS",
             (const gp_Vec & (Blend_CSFunction::*)() const) static_cast<const gp_Vec & (Blend_CSFunction::*)() const>(&Blend_CSFunction::TangentOnS),
             R"#(Returns the tangent vector at PointOnS, in 3d space.)#" )
        .def("Tangent2d",
             (const gp_Vec2d & (Blend_CSFunction::*)() const) static_cast<const gp_Vec2d & (Blend_CSFunction::*)() const>(&Blend_CSFunction::Tangent2d),
             R"#(Returns the tangent vector at PointOnS, in the parametric space of the first surface.)#" )
        .def("TangentOnC",
             (const gp_Vec & (Blend_CSFunction::*)() const) static_cast<const gp_Vec & (Blend_CSFunction::*)() const>(&Blend_CSFunction::TangentOnC),
             R"#(Returns the tangent vector at PointOnC, in 3d space.)#" )
        .def("Tangent",
             (void (Blend_CSFunction::*)( const Standard_Real ,  const Standard_Real ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Blend_CSFunction::*)( const Standard_Real ,  const Standard_Real ,  gp_Vec & ,  gp_Vec &  ) const>(&Blend_CSFunction::Tangent),
             R"#(Returns the tangent vector at the section, at the beginning and the end of the section, and returns the normal (of the surfaces) at these points.)#"  , py::arg("U"),  py::arg("V"),  py::arg("TgS"),  py::arg("NormS"))
        .def("GetTolerance",
             (void (Blend_CSFunction::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const) static_cast<void (Blend_CSFunction::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const>(&Blend_CSFunction::GetTolerance),
             R"#(Returns the tolerance to reach in approximation to respecte BoundTol error at the Boundary AngleTol tangent error at the Boundary SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"),  py::arg("Tol1D"))
        .def("Knots",
             (void (Blend_CSFunction::*)( NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Blend_CSFunction::*)( NCollection_Array1<Standard_Real> &  ) >(&Blend_CSFunction::Knots),
             R"#(None)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (Blend_CSFunction::*)( NCollection_Array1<Standard_Integer> &  ) ) static_cast<void (Blend_CSFunction::*)( NCollection_Array1<Standard_Integer> &  ) >(&Blend_CSFunction::Mults),
             R"#(None)#"  , py::arg("TMults"))
        .def("Section",
             (Standard_Boolean (Blend_CSFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (Blend_CSFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&Blend_CSFunction::Section),
             R"#(Used for the first and last section The method returns Standard_True if the derivatives are computed, otherwise it returns Standard_False.)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("Section",
             (void (Blend_CSFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Blend_CSFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) >(&Blend_CSFunction::Section),
             R"#(None)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("Poles2d"),  py::arg("Weigths"))
        .def("Section",
             (Standard_Boolean (Blend_CSFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (Blend_CSFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&Blend_CSFunction::Section),
             R"#(Used for the first and last section The method returns Standard_True if the derivatives are computed, otherwise it returns Standard_False.)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
    // methods using call by reference i.s.o. return
        .def("GetShape",
             []( Blend_CSFunction &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; Standard_Integer  NbPoles2d; self.GetShape(NbPoles,NbKnots,Degree,NbPoles2d); return std::make_tuple(NbPoles,NbKnots,Degree,NbPoles2d); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Blend_Function , shared_ptr<Blend_Function> ,Py_Blend_Function , Blend_AppFunction >>(m.attr("Blend_Function"))
    // methods
        .def("NbVariables",
             (Standard_Integer (Blend_Function::*)() const) static_cast<Standard_Integer (Blend_Function::*)() const>(&Blend_Function::NbVariables),
             R"#(Returns 4.)#" )
        .def("NbEquations",
             (Standard_Integer (Blend_Function::*)() const) static_cast<Standard_Integer (Blend_Function::*)() const>(&Blend_Function::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (Blend_Function::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Blend_Function::*)( const math_Vector & ,  math_Vector &  ) >(&Blend_Function::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Blend_Function::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Blend_Function::*)( const math_Vector & ,  math_Matrix &  ) >(&Blend_Function::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Blend_Function::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Blend_Function::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&Blend_Function::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (Blend_Function::*)( const Standard_Real  ) ) static_cast<void (Blend_Function::*)( const Standard_Real  ) >(&Blend_Function::Set),
             R"#(Sets the value of the parameter along the guide line. This determines the plane in which the solution has to be found.)#"  , py::arg("Param"))
        .def("Set",
             (void (Blend_Function::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Blend_Function::*)( const Standard_Real ,  const Standard_Real  ) >(&Blend_Function::Set),
             R"#(Sets the bounds of the parametric interval on the guide line. This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (Blend_Function::*)( math_Vector & ,  const Standard_Real  ) const) static_cast<void (Blend_Function::*)( math_Vector & ,  const Standard_Real  ) const>(&Blend_Function::GetTolerance),
             R"#(Returns in the vector Tolerance the parametric tolerance for each of the 4 variables; Tol is the tolerance used in 3d space.)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (Blend_Function::*)( math_Vector & ,  math_Vector &  ) const) static_cast<void (Blend_Function::*)( math_Vector & ,  math_Vector &  ) const>(&Blend_Function::GetBounds),
             R"#(Returns in the vector InfBound the lowest values allowed for each of the 4 variables. Returns in the vector SupBound the greatest values allowed for each of the 4 variables.)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (Blend_Function::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (Blend_Function::*)( const math_Vector & ,  const Standard_Real  ) >(&Blend_Function::IsSolution),
             R"#(Returns Standard_True if Sol is a zero of the function. Tol is the tolerance used in 3d space. The computation is made at the current value of the parameter on the guide line.)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("Pnt1",
             (const gp_Pnt & (Blend_Function::*)() const) static_cast<const gp_Pnt & (Blend_Function::*)() const>(&Blend_Function::Pnt1),
             R"#(Returns the point on the first support.)#" )
        .def("Pnt2",
             (const gp_Pnt & (Blend_Function::*)() const) static_cast<const gp_Pnt & (Blend_Function::*)() const>(&Blend_Function::Pnt2),
             R"#(Returns the point on the seconde support.)#" )
        .def("PointOnS1",
             (const gp_Pnt & (Blend_Function::*)() const) static_cast<const gp_Pnt & (Blend_Function::*)() const>(&Blend_Function::PointOnS1),
             R"#(Returns the point on the first surface, at parameter Sol(1),Sol(2) (Sol is the vector used in the call of IsSolution.)#" )
        .def("PointOnS2",
             (const gp_Pnt & (Blend_Function::*)() const) static_cast<const gp_Pnt & (Blend_Function::*)() const>(&Blend_Function::PointOnS2),
             R"#(Returns the point on the second surface, at parameter Sol(3),Sol(4) (Sol is the vector used in the call of IsSolution.)#" )
        .def("IsTangencyPoint",
             (Standard_Boolean (Blend_Function::*)() const) static_cast<Standard_Boolean (Blend_Function::*)() const>(&Blend_Function::IsTangencyPoint),
             R"#(Returns True when it is not possible to compute the tangent vectors at PointOnS1 and/or PointOnS2.)#" )
        .def("TangentOnS1",
             (const gp_Vec & (Blend_Function::*)() const) static_cast<const gp_Vec & (Blend_Function::*)() const>(&Blend_Function::TangentOnS1),
             R"#(Returns the tangent vector at PointOnS1, in 3d space.)#" )
        .def("Tangent2dOnS1",
             (const gp_Vec2d & (Blend_Function::*)() const) static_cast<const gp_Vec2d & (Blend_Function::*)() const>(&Blend_Function::Tangent2dOnS1),
             R"#(Returns the tangent vector at PointOnS1, in the parametric space of the first surface.)#" )
        .def("TangentOnS2",
             (const gp_Vec & (Blend_Function::*)() const) static_cast<const gp_Vec & (Blend_Function::*)() const>(&Blend_Function::TangentOnS2),
             R"#(Returns the tangent vector at PointOnS2, in 3d space.)#" )
        .def("Tangent2dOnS2",
             (const gp_Vec2d & (Blend_Function::*)() const) static_cast<const gp_Vec2d & (Blend_Function::*)() const>(&Blend_Function::Tangent2dOnS2),
             R"#(Returns the tangent vector at PointOnS2, in the parametric space of the second surface.)#" )
        .def("Tangent",
             (void (Blend_Function::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Blend_Function::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Blend_Function::Tangent),
             R"#(Returns the tangent vector at the section, at the beginning and the end of the section, and returns the normal (of the surfaces) at these points.)#"  , py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("TgFirst"),  py::arg("TgLast"),  py::arg("NormFirst"),  py::arg("NormLast"))
        .def("TwistOnS1",
             (Standard_Boolean (Blend_Function::*)() const) static_cast<Standard_Boolean (Blend_Function::*)() const>(&Blend_Function::TwistOnS1),
             R"#(None)#" )
        .def("TwistOnS2",
             (Standard_Boolean (Blend_Function::*)() const) static_cast<Standard_Boolean (Blend_Function::*)() const>(&Blend_Function::TwistOnS2),
             R"#(None)#" )
        .def("GetTolerance",
             (void (Blend_Function::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const) static_cast<void (Blend_Function::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const>(&Blend_Function::GetTolerance),
             R"#(Returns the tolerance to reach in approximation to respecte BoundTol error at the Boundary AngleTol tangent error at the Boundary SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"),  py::arg("Tol1D"))
        .def("Knots",
             (void (Blend_Function::*)( NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Blend_Function::*)( NCollection_Array1<Standard_Real> &  ) >(&Blend_Function::Knots),
             R"#(None)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (Blend_Function::*)( NCollection_Array1<Standard_Integer> &  ) ) static_cast<void (Blend_Function::*)( NCollection_Array1<Standard_Integer> &  ) >(&Blend_Function::Mults),
             R"#(None)#"  , py::arg("TMults"))
        .def("Section",
             (Standard_Boolean (Blend_Function::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (Blend_Function::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&Blend_Function::Section),
             R"#(Used for the first and last section The method returns Standard_True if the derivatives are computed, otherwise it returns Standard_False.)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("Section",
             (void (Blend_Function::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Blend_Function::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) >(&Blend_Function::Section),
             R"#(None)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("Poles2d"),  py::arg("Weigths"))
        .def("Section",
             (Standard_Boolean (Blend_Function::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (Blend_Function::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&Blend_Function::Section),
             R"#(Used for the first and last section The method returns Standard_True if the derivatives are computed, otherwise it returns Standard_False)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
    // methods using call by reference i.s.o. return
        .def("GetShape",
             []( Blend_Function &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; Standard_Integer  NbPoles2d; self.GetShape(NbPoles,NbKnots,Degree,NbPoles2d); return std::make_tuple(NbPoles,NbKnots,Degree,NbPoles2d); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Blend_RstRstFunction , shared_ptr<Blend_RstRstFunction> ,Py_Blend_RstRstFunction , Blend_AppFunction >>(m.attr("Blend_RstRstFunction"))
    // methods
        .def("NbVariables",
             (Standard_Integer (Blend_RstRstFunction::*)() const) static_cast<Standard_Integer (Blend_RstRstFunction::*)() const>(&Blend_RstRstFunction::NbVariables),
             R"#(Returns 2 (default value). Can be redefined.)#" )
        .def("NbEquations",
             (Standard_Integer (Blend_RstRstFunction::*)() const) static_cast<Standard_Integer (Blend_RstRstFunction::*)() const>(&Blend_RstRstFunction::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (Blend_RstRstFunction::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Blend_RstRstFunction::*)( const math_Vector & ,  math_Vector &  ) >(&Blend_RstRstFunction::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Blend_RstRstFunction::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Blend_RstRstFunction::*)( const math_Vector & ,  math_Matrix &  ) >(&Blend_RstRstFunction::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Blend_RstRstFunction::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Blend_RstRstFunction::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&Blend_RstRstFunction::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (Blend_RstRstFunction::*)( const Standard_Real  ) ) static_cast<void (Blend_RstRstFunction::*)( const Standard_Real  ) >(&Blend_RstRstFunction::Set),
             R"#(Sets the value of the parameter along the guide line. This determines the plane in which the solution has to be found.)#"  , py::arg("Param"))
        .def("Set",
             (void (Blend_RstRstFunction::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Blend_RstRstFunction::*)( const Standard_Real ,  const Standard_Real  ) >(&Blend_RstRstFunction::Set),
             R"#(Sets the bounds of the parametric interval on the guide line. This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (Blend_RstRstFunction::*)( math_Vector & ,  const Standard_Real  ) const) static_cast<void (Blend_RstRstFunction::*)( math_Vector & ,  const Standard_Real  ) const>(&Blend_RstRstFunction::GetTolerance),
             R"#(Returns in the vector Tolerance the parametric tolerance for each variable; Tol is the tolerance used in 3d space.)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (Blend_RstRstFunction::*)( math_Vector & ,  math_Vector &  ) const) static_cast<void (Blend_RstRstFunction::*)( math_Vector & ,  math_Vector &  ) const>(&Blend_RstRstFunction::GetBounds),
             R"#(Returns in the vector InfBound the lowest values allowed for each variables. Returns in the vector SupBound the greatest values allowed for each of the 3 variables.)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (Blend_RstRstFunction::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (Blend_RstRstFunction::*)( const math_Vector & ,  const Standard_Real  ) >(&Blend_RstRstFunction::IsSolution),
             R"#(Returns Standard_True if Sol is a zero of the function. Tol is the tolerance used in 3d space. The computation is made at the current value of the parameter on the guide line.)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("GetMinimalDistance",
             (Standard_Real (Blend_RstRstFunction::*)() const) static_cast<Standard_Real (Blend_RstRstFunction::*)() const>(&Blend_RstRstFunction::GetMinimalDistance),
             R"#(Returns the minimal Distance beetween two extremitys of calculed sections.)#" )
        .def("Pnt1",
             (const gp_Pnt & (Blend_RstRstFunction::*)() const) static_cast<const gp_Pnt & (Blend_RstRstFunction::*)() const>(&Blend_RstRstFunction::Pnt1),
             R"#(Returns the point on the first support.)#" )
        .def("Pnt2",
             (const gp_Pnt & (Blend_RstRstFunction::*)() const) static_cast<const gp_Pnt & (Blend_RstRstFunction::*)() const>(&Blend_RstRstFunction::Pnt2),
             R"#(Returns the point on the seconde support.)#" )
        .def("PointOnRst1",
             (const gp_Pnt & (Blend_RstRstFunction::*)() const) static_cast<const gp_Pnt & (Blend_RstRstFunction::*)() const>(&Blend_RstRstFunction::PointOnRst1),
             R"#(Returns the point on the surface.)#" )
        .def("PointOnRst2",
             (const gp_Pnt & (Blend_RstRstFunction::*)() const) static_cast<const gp_Pnt & (Blend_RstRstFunction::*)() const>(&Blend_RstRstFunction::PointOnRst2),
             R"#(Returns the point on the curve.)#" )
        .def("Pnt2dOnRst1",
             (const gp_Pnt2d & (Blend_RstRstFunction::*)() const) static_cast<const gp_Pnt2d & (Blend_RstRstFunction::*)() const>(&Blend_RstRstFunction::Pnt2dOnRst1),
             R"#(Returns U,V coordinates of the point on the surface.)#" )
        .def("Pnt2dOnRst2",
             (const gp_Pnt2d & (Blend_RstRstFunction::*)() const) static_cast<const gp_Pnt2d & (Blend_RstRstFunction::*)() const>(&Blend_RstRstFunction::Pnt2dOnRst2),
             R"#(Returns U,V coordinates of the point on the curve on surface.)#" )
        .def("ParameterOnRst1",
             (Standard_Real (Blend_RstRstFunction::*)() const) static_cast<Standard_Real (Blend_RstRstFunction::*)() const>(&Blend_RstRstFunction::ParameterOnRst1),
             R"#(Returns parameter of the point on the curve.)#" )
        .def("ParameterOnRst2",
             (Standard_Real (Blend_RstRstFunction::*)() const) static_cast<Standard_Real (Blend_RstRstFunction::*)() const>(&Blend_RstRstFunction::ParameterOnRst2),
             R"#(Returns parameter of the point on the curve.)#" )
        .def("IsTangencyPoint",
             (Standard_Boolean (Blend_RstRstFunction::*)() const) static_cast<Standard_Boolean (Blend_RstRstFunction::*)() const>(&Blend_RstRstFunction::IsTangencyPoint),
             R"#(Returns True when it is not possible to compute the tangent vectors at PointOnS and/or PointOnRst.)#" )
        .def("TangentOnRst1",
             (const gp_Vec & (Blend_RstRstFunction::*)() const) static_cast<const gp_Vec & (Blend_RstRstFunction::*)() const>(&Blend_RstRstFunction::TangentOnRst1),
             R"#(Returns the tangent vector at PointOnS, in 3d space.)#" )
        .def("Tangent2dOnRst1",
             (const gp_Vec2d & (Blend_RstRstFunction::*)() const) static_cast<const gp_Vec2d & (Blend_RstRstFunction::*)() const>(&Blend_RstRstFunction::Tangent2dOnRst1),
             R"#(Returns the tangent vector at PointOnS, in the parametric space of the first surface.)#" )
        .def("TangentOnRst2",
             (const gp_Vec & (Blend_RstRstFunction::*)() const) static_cast<const gp_Vec & (Blend_RstRstFunction::*)() const>(&Blend_RstRstFunction::TangentOnRst2),
             R"#(Returns the tangent vector at PointOnC, in 3d space.)#" )
        .def("Tangent2dOnRst2",
             (const gp_Vec2d & (Blend_RstRstFunction::*)() const) static_cast<const gp_Vec2d & (Blend_RstRstFunction::*)() const>(&Blend_RstRstFunction::Tangent2dOnRst2),
             R"#(Returns the tangent vector at PointOnRst, in the parametric space of the second surface.)#" )
        .def("Decroch",
             (Blend_DecrochStatus (Blend_RstRstFunction::*)( const math_Vector & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<Blend_DecrochStatus (Blend_RstRstFunction::*)( const math_Vector & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Blend_RstRstFunction::Decroch),
             R"#(Enables to implement a criterion of decrochage specific to the function. Warning: Can be called without previous call of issolution but the values calculated can be senseless.)#"  , py::arg("Sol"),  py::arg("NRst1"),  py::arg("TgRst1"),  py::arg("NRst2"),  py::arg("TgRst2"))
        .def("IsRational",
             (Standard_Boolean (Blend_RstRstFunction::*)() const) static_cast<Standard_Boolean (Blend_RstRstFunction::*)() const>(&Blend_RstRstFunction::IsRational),
             R"#(Returns if the section is rationnal)#" )
        .def("GetSectionSize",
             (Standard_Real (Blend_RstRstFunction::*)() const) static_cast<Standard_Real (Blend_RstRstFunction::*)() const>(&Blend_RstRstFunction::GetSectionSize),
             R"#(Returns the length of the maximum section)#" )
        .def("GetMinimalWeight",
             (void (Blend_RstRstFunction::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (Blend_RstRstFunction::*)( NCollection_Array1<Standard_Real> &  ) const>(&Blend_RstRstFunction::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles of all sections.)#"  , py::arg("Weigths"))
        .def("NbIntervals",
             (Standard_Integer (Blend_RstRstFunction::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (Blend_RstRstFunction::*)( const GeomAbs_Shape  ) const>(&Blend_RstRstFunction::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (Blend_RstRstFunction::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (Blend_RstRstFunction::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&Blend_RstRstFunction::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("GetTolerance",
             (void (Blend_RstRstFunction::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const) static_cast<void (Blend_RstRstFunction::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const>(&Blend_RstRstFunction::GetTolerance),
             R"#(Returns the tolerance to reach in approximation to respecte BoundTol error at the Boundary AngleTol tangent error at the Boundary SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"),  py::arg("Tol1D"))
        .def("Knots",
             (void (Blend_RstRstFunction::*)( NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Blend_RstRstFunction::*)( NCollection_Array1<Standard_Real> &  ) >(&Blend_RstRstFunction::Knots),
             R"#(None)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (Blend_RstRstFunction::*)( NCollection_Array1<Standard_Integer> &  ) ) static_cast<void (Blend_RstRstFunction::*)( NCollection_Array1<Standard_Integer> &  ) >(&Blend_RstRstFunction::Mults),
             R"#(None)#"  , py::arg("TMults"))
        .def("Section",
             (void (Blend_RstRstFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Blend_RstRstFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) >(&Blend_RstRstFunction::Section),
             R"#(None)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("Poles2d"),  py::arg("Weigths"))
        .def("Section",
             (Standard_Boolean (Blend_RstRstFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (Blend_RstRstFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&Blend_RstRstFunction::Section),
             R"#(Used for the first and last section The method returns Standard_True if the derivatives are computed, otherwise it returns Standard_False.)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("Section",
             (Standard_Boolean (Blend_RstRstFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (Blend_RstRstFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&Blend_RstRstFunction::Section),
             R"#(Used for the first and last section The method returns Standard_True if the derivatives are computed, otherwise it returns Standard_False.)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
    // methods using call by reference i.s.o. return
        .def("GetShape",
             []( Blend_RstRstFunction &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; Standard_Integer  NbPoles2d; self.GetShape(NbPoles,NbKnots,Degree,NbPoles2d); return std::make_tuple(NbPoles,NbKnots,Degree,NbPoles2d); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Blend_SurfRstFunction , shared_ptr<Blend_SurfRstFunction> ,Py_Blend_SurfRstFunction , Blend_AppFunction >>(m.attr("Blend_SurfRstFunction"))
    // methods
        .def("NbVariables",
             (Standard_Integer (Blend_SurfRstFunction::*)() const) static_cast<Standard_Integer (Blend_SurfRstFunction::*)() const>(&Blend_SurfRstFunction::NbVariables),
             R"#(Returns 3 (default value). Can be redefined.)#" )
        .def("NbEquations",
             (Standard_Integer (Blend_SurfRstFunction::*)() const) static_cast<Standard_Integer (Blend_SurfRstFunction::*)() const>(&Blend_SurfRstFunction::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (Blend_SurfRstFunction::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (Blend_SurfRstFunction::*)( const math_Vector & ,  math_Vector &  ) >(&Blend_SurfRstFunction::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Blend_SurfRstFunction::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Blend_SurfRstFunction::*)( const math_Vector & ,  math_Matrix &  ) >(&Blend_SurfRstFunction::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Blend_SurfRstFunction::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (Blend_SurfRstFunction::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&Blend_SurfRstFunction::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Set",
             (void (Blend_SurfRstFunction::*)( const Standard_Real  ) ) static_cast<void (Blend_SurfRstFunction::*)( const Standard_Real  ) >(&Blend_SurfRstFunction::Set),
             R"#(Sets the value of the parameter along the guide line. This determines the plane in which the solution has to be found.)#"  , py::arg("Param"))
        .def("Set",
             (void (Blend_SurfRstFunction::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Blend_SurfRstFunction::*)( const Standard_Real ,  const Standard_Real  ) >(&Blend_SurfRstFunction::Set),
             R"#(Sets the bounds of the parametric interval on the guide line. This determines the derivatives in these values if the function is not Cn.)#"  , py::arg("First"),  py::arg("Last"))
        .def("GetTolerance",
             (void (Blend_SurfRstFunction::*)( math_Vector & ,  const Standard_Real  ) const) static_cast<void (Blend_SurfRstFunction::*)( math_Vector & ,  const Standard_Real  ) const>(&Blend_SurfRstFunction::GetTolerance),
             R"#(Returns in the vector Tolerance the parametric tolerance for each variable; Tol is the tolerance used in 3d space.)#"  , py::arg("Tolerance"),  py::arg("Tol"))
        .def("GetBounds",
             (void (Blend_SurfRstFunction::*)( math_Vector & ,  math_Vector &  ) const) static_cast<void (Blend_SurfRstFunction::*)( math_Vector & ,  math_Vector &  ) const>(&Blend_SurfRstFunction::GetBounds),
             R"#(Returns in the vector InfBound the lowest values allowed for each variables. Returns in the vector SupBound the greatest values allowed for each of the 3 variables.)#"  , py::arg("InfBound"),  py::arg("SupBound"))
        .def("IsSolution",
             (Standard_Boolean (Blend_SurfRstFunction::*)( const math_Vector & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (Blend_SurfRstFunction::*)( const math_Vector & ,  const Standard_Real  ) >(&Blend_SurfRstFunction::IsSolution),
             R"#(Returns Standard_True if Sol is a zero of the function. Tol is the tolerance used in 3d space. The computation is made at the current value of the parameter on the guide line.)#"  , py::arg("Sol"),  py::arg("Tol"))
        .def("GetMinimalDistance",
             (Standard_Real (Blend_SurfRstFunction::*)() const) static_cast<Standard_Real (Blend_SurfRstFunction::*)() const>(&Blend_SurfRstFunction::GetMinimalDistance),
             R"#(Returns the minimal Distance beetween two extremitys of calculed sections.)#" )
        .def("Pnt1",
             (const gp_Pnt & (Blend_SurfRstFunction::*)() const) static_cast<const gp_Pnt & (Blend_SurfRstFunction::*)() const>(&Blend_SurfRstFunction::Pnt1),
             R"#(Returns the point on the first support.)#" )
        .def("Pnt2",
             (const gp_Pnt & (Blend_SurfRstFunction::*)() const) static_cast<const gp_Pnt & (Blend_SurfRstFunction::*)() const>(&Blend_SurfRstFunction::Pnt2),
             R"#(Returns the point on the seconde support.)#" )
        .def("PointOnS",
             (const gp_Pnt & (Blend_SurfRstFunction::*)() const) static_cast<const gp_Pnt & (Blend_SurfRstFunction::*)() const>(&Blend_SurfRstFunction::PointOnS),
             R"#(Returns the point on the surface.)#" )
        .def("PointOnRst",
             (const gp_Pnt & (Blend_SurfRstFunction::*)() const) static_cast<const gp_Pnt & (Blend_SurfRstFunction::*)() const>(&Blend_SurfRstFunction::PointOnRst),
             R"#(Returns the point on the curve.)#" )
        .def("Pnt2dOnS",
             (const gp_Pnt2d & (Blend_SurfRstFunction::*)() const) static_cast<const gp_Pnt2d & (Blend_SurfRstFunction::*)() const>(&Blend_SurfRstFunction::Pnt2dOnS),
             R"#(Returns U,V coordinates of the point on the surface.)#" )
        .def("Pnt2dOnRst",
             (const gp_Pnt2d & (Blend_SurfRstFunction::*)() const) static_cast<const gp_Pnt2d & (Blend_SurfRstFunction::*)() const>(&Blend_SurfRstFunction::Pnt2dOnRst),
             R"#(Returns U,V coordinates of the point on the curve on surface.)#" )
        .def("ParameterOnRst",
             (Standard_Real (Blend_SurfRstFunction::*)() const) static_cast<Standard_Real (Blend_SurfRstFunction::*)() const>(&Blend_SurfRstFunction::ParameterOnRst),
             R"#(Returns parameter of the point on the curve.)#" )
        .def("IsTangencyPoint",
             (Standard_Boolean (Blend_SurfRstFunction::*)() const) static_cast<Standard_Boolean (Blend_SurfRstFunction::*)() const>(&Blend_SurfRstFunction::IsTangencyPoint),
             R"#(Returns True when it is not possible to compute the tangent vectors at PointOnS and/or PointOnRst.)#" )
        .def("TangentOnS",
             (const gp_Vec & (Blend_SurfRstFunction::*)() const) static_cast<const gp_Vec & (Blend_SurfRstFunction::*)() const>(&Blend_SurfRstFunction::TangentOnS),
             R"#(Returns the tangent vector at PointOnS, in 3d space.)#" )
        .def("Tangent2dOnS",
             (const gp_Vec2d & (Blend_SurfRstFunction::*)() const) static_cast<const gp_Vec2d & (Blend_SurfRstFunction::*)() const>(&Blend_SurfRstFunction::Tangent2dOnS),
             R"#(Returns the tangent vector at PointOnS, in the parametric space of the first surface.)#" )
        .def("TangentOnRst",
             (const gp_Vec & (Blend_SurfRstFunction::*)() const) static_cast<const gp_Vec & (Blend_SurfRstFunction::*)() const>(&Blend_SurfRstFunction::TangentOnRst),
             R"#(Returns the tangent vector at PointOnC, in 3d space.)#" )
        .def("Tangent2dOnRst",
             (const gp_Vec2d & (Blend_SurfRstFunction::*)() const) static_cast<const gp_Vec2d & (Blend_SurfRstFunction::*)() const>(&Blend_SurfRstFunction::Tangent2dOnRst),
             R"#(Returns the tangent vector at PointOnRst, in the parametric space of the second surface.)#" )
        .def("Decroch",
             (Standard_Boolean (Blend_SurfRstFunction::*)( const math_Vector & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<Standard_Boolean (Blend_SurfRstFunction::*)( const math_Vector & ,  gp_Vec & ,  gp_Vec &  ) const>(&Blend_SurfRstFunction::Decroch),
             R"#(Enables implementation of a criterion of decrochage specific to the function.)#"  , py::arg("Sol"),  py::arg("NS"),  py::arg("TgS"))
        .def("IsRational",
             (Standard_Boolean (Blend_SurfRstFunction::*)() const) static_cast<Standard_Boolean (Blend_SurfRstFunction::*)() const>(&Blend_SurfRstFunction::IsRational),
             R"#(Returns if the section is rationnal)#" )
        .def("GetSectionSize",
             (Standard_Real (Blend_SurfRstFunction::*)() const) static_cast<Standard_Real (Blend_SurfRstFunction::*)() const>(&Blend_SurfRstFunction::GetSectionSize),
             R"#(Returns the length of the maximum section)#" )
        .def("GetMinimalWeight",
             (void (Blend_SurfRstFunction::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (Blend_SurfRstFunction::*)( NCollection_Array1<Standard_Real> &  ) const>(&Blend_SurfRstFunction::GetMinimalWeight),
             R"#(Compute the minimal value of weight for each poles of all sections.)#"  , py::arg("Weigths"))
        .def("NbIntervals",
             (Standard_Integer (Blend_SurfRstFunction::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (Blend_SurfRstFunction::*)( const GeomAbs_Shape  ) const>(&Blend_SurfRstFunction::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (Blend_SurfRstFunction::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (Blend_SurfRstFunction::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&Blend_SurfRstFunction::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("GetTolerance",
             (void (Blend_SurfRstFunction::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const) static_cast<void (Blend_SurfRstFunction::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  math_Vector & ,  math_Vector &  ) const>(&Blend_SurfRstFunction::GetTolerance),
             R"#(Returns the tolerance to reach in approximation to respecte BoundTol error at the Boundary AngleTol tangent error at the Boundary SurfTol error inside the surface.)#"  , py::arg("BoundTol"),  py::arg("SurfTol"),  py::arg("AngleTol"),  py::arg("Tol3d"),  py::arg("Tol1D"))
        .def("Knots",
             (void (Blend_SurfRstFunction::*)( NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Blend_SurfRstFunction::*)( NCollection_Array1<Standard_Real> &  ) >(&Blend_SurfRstFunction::Knots),
             R"#(None)#"  , py::arg("TKnots"))
        .def("Mults",
             (void (Blend_SurfRstFunction::*)( NCollection_Array1<Standard_Integer> &  ) ) static_cast<void (Blend_SurfRstFunction::*)( NCollection_Array1<Standard_Integer> &  ) >(&Blend_SurfRstFunction::Mults),
             R"#(None)#"  , py::arg("TMults"))
        .def("Section",
             (Standard_Boolean (Blend_SurfRstFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (Blend_SurfRstFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&Blend_SurfRstFunction::Section),
             R"#(Used for the first and last section The method returns Standard_True if the derivatives are computed, otherwise it returns Standard_False.)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("Weigths"),  py::arg("DWeigths"))
        .def("Section",
             (Standard_Boolean (Blend_SurfRstFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (Blend_SurfRstFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<gp_Vec2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&Blend_SurfRstFunction::Section),
             R"#(Used for the first and last section The method returns Standard_True if the derivatives are computed, otherwise it returns Standard_False.)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("DPoles"),  py::arg("D2Poles"),  py::arg("Poles2d"),  py::arg("DPoles2d"),  py::arg("D2Poles2d"),  py::arg("Weigths"),  py::arg("DWeigths"),  py::arg("D2Weigths"))
        .def("Section",
             (void (Blend_SurfRstFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Blend_SurfRstFunction::*)( const Blend_Point & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) >(&Blend_SurfRstFunction::Section),
             R"#(None)#"  , py::arg("P"),  py::arg("Poles"),  py::arg("Poles2d"),  py::arg("Weigths"))
    // methods using call by reference i.s.o. return
        .def("GetShape",
             []( Blend_SurfRstFunction &self   ){ Standard_Integer  NbPoles; Standard_Integer  NbKnots; Standard_Integer  Degree; Standard_Integer  NbPoles2d; self.GetShape(NbPoles,NbKnots,Degree,NbPoles2d); return std::make_tuple(NbPoles,NbKnots,Degree,NbPoles2d); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/Blend_CSFunction.hxx
// ./opencascade/Blend_AppFunction.hxx
// ./opencascade/Blend_RstRstFunction.hxx
// ./opencascade/Blend_DecrochStatus.hxx
// ./opencascade/Blend_SurfRstFunction.hxx
// ./opencascade/Blend_Status.hxx
// ./opencascade/Blend_Point.hxx
// ./opencascade/Blend_FuncInv.hxx
// ./opencascade/Blend_SurfPointFuncInv.hxx
// ./opencascade/Blend_CurvPointFuncInv.hxx
// ./opencascade/Blend_Function.hxx
// ./opencascade/Blend_SequenceOfPoint.hxx
// ./opencascade/Blend_SurfCurvFuncInv.hxx

// operators

// register typdefs
    register_template_NCollection_Sequence<Blend_Point>(m,"Blend_SequenceOfPoint");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

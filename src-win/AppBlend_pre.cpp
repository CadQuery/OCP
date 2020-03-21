
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
#include <StdFail_NotDone.hxx>

// module includes
#include <AppBlend_Approx.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_AppBlend_enums(py::module &main_module) {


py::module m = main_module.def_submodule("AppBlend", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_AppBlend_Approx : public AppBlend_Approx{
    public:
        using AppBlend_Approx::AppBlend_Approx;


        // public pure virtual
        Standard_Boolean IsDone() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,AppBlend_Approx,IsDone,) };
        void Surface(NCollection_Array2<gp_Pnt> & TPoles,NCollection_Array2<Standard_Real> & TWeights,NCollection_Array1<Standard_Real> & TUKnots,NCollection_Array1<Standard_Real> & TVKnots,NCollection_Array1<Standard_Integer> & TUMults,NCollection_Array1<Standard_Integer> & TVMults) const  override { PYBIND11_OVERLOAD_PURE(void,AppBlend_Approx,Surface,TPoles,TWeights,TUKnots,TVKnots,TUMults,TVMults) };
        Standard_Integer UDegree() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,AppBlend_Approx,UDegree,) };
        Standard_Integer VDegree() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,AppBlend_Approx,VDegree,) };
        const TColgp_Array2OfPnt & SurfPoles() const  override { PYBIND11_OVERLOAD_PURE(const TColgp_Array2OfPnt &,AppBlend_Approx,SurfPoles,) };
        const TColStd_Array2OfReal & SurfWeights() const  override { PYBIND11_OVERLOAD_PURE(const TColStd_Array2OfReal &,AppBlend_Approx,SurfWeights,) };
        const TColStd_Array1OfReal & SurfUKnots() const  override { PYBIND11_OVERLOAD_PURE(const TColStd_Array1OfReal &,AppBlend_Approx,SurfUKnots,) };
        const TColStd_Array1OfReal & SurfVKnots() const  override { PYBIND11_OVERLOAD_PURE(const TColStd_Array1OfReal &,AppBlend_Approx,SurfVKnots,) };
        const TColStd_Array1OfInteger & SurfUMults() const  override { PYBIND11_OVERLOAD_PURE(const TColStd_Array1OfInteger &,AppBlend_Approx,SurfUMults,) };
        const TColStd_Array1OfInteger & SurfVMults() const  override { PYBIND11_OVERLOAD_PURE(const TColStd_Array1OfInteger &,AppBlend_Approx,SurfVMults,) };
        Standard_Integer NbCurves2d() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,AppBlend_Approx,NbCurves2d,) };
        void Curve2d(const Standard_Integer Index,NCollection_Array1<gp_Pnt2d> & TPoles,NCollection_Array1<Standard_Real> & TKnots,NCollection_Array1<Standard_Integer> & TMults) const  override { PYBIND11_OVERLOAD_PURE(void,AppBlend_Approx,Curve2d,Index,TPoles,TKnots,TMults) };
        Standard_Integer Curves2dDegree() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,AppBlend_Approx,Curves2dDegree,) };
        const TColgp_Array1OfPnt2d & Curve2dPoles(const Standard_Integer Index) const  override { PYBIND11_OVERLOAD_PURE(const TColgp_Array1OfPnt2d &,AppBlend_Approx,Curve2dPoles,Index) };
        const TColStd_Array1OfReal & Curves2dKnots() const  override { PYBIND11_OVERLOAD_PURE(const TColStd_Array1OfReal &,AppBlend_Approx,Curves2dKnots,) };
        const TColStd_Array1OfInteger & Curves2dMults() const  override { PYBIND11_OVERLOAD_PURE(const TColStd_Array1OfInteger &,AppBlend_Approx,Curves2dMults,) };
        Standard_Real TolCurveOnSurf(const Standard_Integer Index) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,AppBlend_Approx,TolCurveOnSurf,Index) };
        void SurfShape(Standard_Integer & UDegree,Standard_Integer & VDegree,Standard_Integer & NbUPoles,Standard_Integer & NbVPoles,Standard_Integer & NbUKnots,Standard_Integer & NbVKnots) const  override { PYBIND11_OVERLOAD_PURE(void,AppBlend_Approx,SurfShape,UDegree,VDegree,NbUPoles,NbVPoles,NbUKnots,NbVKnots) };
        void Curves2dShape(Standard_Integer & Degree,Standard_Integer & NbPoles,Standard_Integer & NbKnots) const  override { PYBIND11_OVERLOAD_PURE(void,AppBlend_Approx,Curves2dShape,Degree,NbPoles,NbKnots) };
        void TolReached(Standard_Real & Tol3d,Standard_Real & Tol2d) const  override { PYBIND11_OVERLOAD_PURE(void,AppBlend_Approx,TolReached,Tol3d,Tol2d) };


        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs

// classes forward declarations only
    py::class_<AppBlend_Approx , shared_ptr<AppBlend_Approx>,Py_AppBlend_Approx >(m,"AppBlend_Approx",R"#(Bspline approximation of a surface.)#");

};

// user-defined post-inclusion per module

// user-defined post

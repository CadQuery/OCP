
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>

// module includes
#include <AppBlend_Approx.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_AppBlend(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("AppBlend"));


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

// classes


    static_cast<py::class_<AppBlend_Approx , shared_ptr<AppBlend_Approx> ,Py_AppBlend_Approx >>(m.attr("AppBlend_Approx"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (AppBlend_Approx::*)() const) static_cast<Standard_Boolean (AppBlend_Approx::*)() const>(&AppBlend_Approx::IsDone),
             R"#(None)#" )
        .def("Surface",
             (void (AppBlend_Approx::*)( NCollection_Array2<gp_Pnt> & ,  NCollection_Array2<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Integer> & ,  NCollection_Array1<Standard_Integer> &  ) const) static_cast<void (AppBlend_Approx::*)( NCollection_Array2<gp_Pnt> & ,  NCollection_Array2<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Integer> & ,  NCollection_Array1<Standard_Integer> &  ) const>(&AppBlend_Approx::Surface),
             R"#(None)#"  , py::arg("TPoles"),  py::arg("TWeights"),  py::arg("TUKnots"),  py::arg("TVKnots"),  py::arg("TUMults"),  py::arg("TVMults"))
        .def("UDegree",
             (Standard_Integer (AppBlend_Approx::*)() const) static_cast<Standard_Integer (AppBlend_Approx::*)() const>(&AppBlend_Approx::UDegree),
             R"#(None)#" )
        .def("VDegree",
             (Standard_Integer (AppBlend_Approx::*)() const) static_cast<Standard_Integer (AppBlend_Approx::*)() const>(&AppBlend_Approx::VDegree),
             R"#(None)#" )
        .def("SurfPoles",
             (const TColgp_Array2OfPnt & (AppBlend_Approx::*)() const) static_cast<const TColgp_Array2OfPnt & (AppBlend_Approx::*)() const>(&AppBlend_Approx::SurfPoles),
             R"#(None)#" )
        .def("SurfWeights",
             (const TColStd_Array2OfReal & (AppBlend_Approx::*)() const) static_cast<const TColStd_Array2OfReal & (AppBlend_Approx::*)() const>(&AppBlend_Approx::SurfWeights),
             R"#(None)#" )
        .def("SurfUKnots",
             (const TColStd_Array1OfReal & (AppBlend_Approx::*)() const) static_cast<const TColStd_Array1OfReal & (AppBlend_Approx::*)() const>(&AppBlend_Approx::SurfUKnots),
             R"#(None)#" )
        .def("SurfVKnots",
             (const TColStd_Array1OfReal & (AppBlend_Approx::*)() const) static_cast<const TColStd_Array1OfReal & (AppBlend_Approx::*)() const>(&AppBlend_Approx::SurfVKnots),
             R"#(None)#" )
        .def("SurfUMults",
             (const TColStd_Array1OfInteger & (AppBlend_Approx::*)() const) static_cast<const TColStd_Array1OfInteger & (AppBlend_Approx::*)() const>(&AppBlend_Approx::SurfUMults),
             R"#(None)#" )
        .def("SurfVMults",
             (const TColStd_Array1OfInteger & (AppBlend_Approx::*)() const) static_cast<const TColStd_Array1OfInteger & (AppBlend_Approx::*)() const>(&AppBlend_Approx::SurfVMults),
             R"#(None)#" )
        .def("NbCurves2d",
             (Standard_Integer (AppBlend_Approx::*)() const) static_cast<Standard_Integer (AppBlend_Approx::*)() const>(&AppBlend_Approx::NbCurves2d),
             R"#(None)#" )
        .def("Curve2d",
             (void (AppBlend_Approx::*)( const Standard_Integer ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Integer> &  ) const) static_cast<void (AppBlend_Approx::*)( const Standard_Integer ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Integer> &  ) const>(&AppBlend_Approx::Curve2d),
             R"#(None)#"  , py::arg("Index"),  py::arg("TPoles"),  py::arg("TKnots"),  py::arg("TMults"))
        .def("Curves2dDegree",
             (Standard_Integer (AppBlend_Approx::*)() const) static_cast<Standard_Integer (AppBlend_Approx::*)() const>(&AppBlend_Approx::Curves2dDegree),
             R"#(None)#" )
        .def("Curve2dPoles",
             (const TColgp_Array1OfPnt2d & (AppBlend_Approx::*)( const Standard_Integer  ) const) static_cast<const TColgp_Array1OfPnt2d & (AppBlend_Approx::*)( const Standard_Integer  ) const>(&AppBlend_Approx::Curve2dPoles),
             R"#(None)#"  , py::arg("Index"))
        .def("Curves2dKnots",
             (const TColStd_Array1OfReal & (AppBlend_Approx::*)() const) static_cast<const TColStd_Array1OfReal & (AppBlend_Approx::*)() const>(&AppBlend_Approx::Curves2dKnots),
             R"#(None)#" )
        .def("Curves2dMults",
             (const TColStd_Array1OfInteger & (AppBlend_Approx::*)() const) static_cast<const TColStd_Array1OfInteger & (AppBlend_Approx::*)() const>(&AppBlend_Approx::Curves2dMults),
             R"#(None)#" )
        .def("TolCurveOnSurf",
             (Standard_Real (AppBlend_Approx::*)( const Standard_Integer  ) const) static_cast<Standard_Real (AppBlend_Approx::*)( const Standard_Integer  ) const>(&AppBlend_Approx::TolCurveOnSurf),
             R"#(None)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
        .def("SurfShape",
             []( AppBlend_Approx &self   ){ Standard_Integer  UDegree; Standard_Integer  VDegree; Standard_Integer  NbUPoles; Standard_Integer  NbVPoles; Standard_Integer  NbUKnots; Standard_Integer  NbVKnots; self.SurfShape(UDegree,VDegree,NbUPoles,NbVPoles,NbUKnots,NbVKnots); return std::make_tuple(UDegree,VDegree,NbUPoles,NbVPoles,NbUKnots,NbVKnots); },
             R"#(None)#" )
        .def("Curves2dShape",
             []( AppBlend_Approx &self   ){ Standard_Integer  Degree; Standard_Integer  NbPoles; Standard_Integer  NbKnots; self.Curves2dShape(Degree,NbPoles,NbKnots); return std::make_tuple(Degree,NbPoles,NbKnots); },
             R"#(None)#" )
        .def("TolReached",
             []( AppBlend_Approx &self   ){ Standard_Real  Tol3d; Standard_Real  Tol2d; self.TolReached(Tol3d,Tol2d); return std::make_tuple(Tol3d,Tol2d); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/AppBlend_Approx.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post

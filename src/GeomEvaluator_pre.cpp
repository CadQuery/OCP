
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <GeomAdaptor_HSurface.hxx>
#include <GeomAdaptor_HCurve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HCurve.hxx>

// module includes
#include <GeomEvaluator_Curve.hxx>
#include <GeomEvaluator_OffsetCurve.hxx>
#include <GeomEvaluator_OffsetSurface.hxx>
#include <GeomEvaluator_Surface.hxx>
#include <GeomEvaluator_SurfaceOfExtrusion.hxx>
#include <GeomEvaluator_SurfaceOfRevolution.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomEvaluator_enums(py::module &main_module) {


py::module m = main_module.def_submodule("GeomEvaluator", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_GeomEvaluator_Curve : public GeomEvaluator_Curve{
    public:
        using GeomEvaluator_Curve::GeomEvaluator_Curve;
        
        
        // public pure virtual
        void D0(const Standard_Real theU,gp_Pnt & theValue) const  override { PYBIND11_OVERLOAD_PURE(void,GeomEvaluator_Curve,D0,theU,theValue) };
        void D1(const Standard_Real theU,gp_Pnt & theValue,gp_Vec & theD1) const  override { PYBIND11_OVERLOAD_PURE(void,GeomEvaluator_Curve,D1,theU,theValue,theD1) };
        void D2(const Standard_Real theU,gp_Pnt & theValue,gp_Vec & theD1,gp_Vec & theD2) const  override { PYBIND11_OVERLOAD_PURE(void,GeomEvaluator_Curve,D2,theU,theValue,theD1,theD2) };
        void D3(const Standard_Real theU,gp_Pnt & theValue,gp_Vec & theD1,gp_Vec & theD2,gp_Vec & theD3) const  override { PYBIND11_OVERLOAD_PURE(void,GeomEvaluator_Curve,D3,theU,theValue,theD1,theD2,theD3) };
        gp_Vec DN(const Standard_Real theU,const Standard_Integer theDerU) const  override { PYBIND11_OVERLOAD_PURE(gp_Vec,GeomEvaluator_Curve,DN,theU,theDerU) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_GeomEvaluator_Surface : public GeomEvaluator_Surface{
    public:
        using GeomEvaluator_Surface::GeomEvaluator_Surface;
        
        
        // public pure virtual
        void D0(const Standard_Real theU,const Standard_Real theV,gp_Pnt & theValue) const  override { PYBIND11_OVERLOAD_PURE(void,GeomEvaluator_Surface,D0,theU,theV,theValue) };
        void D1(const Standard_Real theU,const Standard_Real theV,gp_Pnt & theValue,gp_Vec & theD1U,gp_Vec & theD1V) const  override { PYBIND11_OVERLOAD_PURE(void,GeomEvaluator_Surface,D1,theU,theV,theValue,theD1U,theD1V) };
        void D2(const Standard_Real theU,const Standard_Real theV,gp_Pnt & theValue,gp_Vec & theD1U,gp_Vec & theD1V,gp_Vec & theD2U,gp_Vec & theD2V,gp_Vec & theD2UV) const  override { PYBIND11_OVERLOAD_PURE(void,GeomEvaluator_Surface,D2,theU,theV,theValue,theD1U,theD1V,theD2U,theD2V,theD2UV) };
        void D3(const Standard_Real theU,const Standard_Real theV,gp_Pnt & theValue,gp_Vec & theD1U,gp_Vec & theD1V,gp_Vec & theD2U,gp_Vec & theD2V,gp_Vec & theD2UV,gp_Vec & theD3U,gp_Vec & theD3V,gp_Vec & theD3UUV,gp_Vec & theD3UVV) const  override { PYBIND11_OVERLOAD_PURE(void,GeomEvaluator_Surface,D3,theU,theV,theValue,theD1U,theD1V,theD2U,theD2V,theD2UV,theD3U,theD3V,theD3UUV,theD3UVV) };
        gp_Vec DN(const Standard_Real theU,const Standard_Real theV,const Standard_Integer theDerU,const Standard_Integer theDerV) const  override { PYBIND11_OVERLOAD_PURE(gp_Vec,GeomEvaluator_Surface,DN,theU,theV,theDerU,theDerV) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// pre-register typdefs

// classes forward declarations only
    py::class_<GeomEvaluator_Curve ,opencascade::handle<GeomEvaluator_Curve> ,Py_GeomEvaluator_Curve , Standard_Transient >(m,"GeomEvaluator_Curve",R"#(Interface for calculation of values and derivatives for different kinds of curves in 3D. Works both with adaptors and curves.Interface for calculation of values and derivatives for different kinds of curves in 3D. Works both with adaptors and curves.)#");
    py::class_<GeomEvaluator_Surface ,opencascade::handle<GeomEvaluator_Surface> ,Py_GeomEvaluator_Surface , Standard_Transient >(m,"GeomEvaluator_Surface",R"#(Interface for calculation of values and derivatives for different kinds of surfaces. Works both with adaptors and surfaces.Interface for calculation of values and derivatives for different kinds of surfaces. Works both with adaptors and surfaces.)#");
    py::class_<GeomEvaluator_OffsetCurve ,opencascade::handle<GeomEvaluator_OffsetCurve>  , GeomEvaluator_Curve >(m,"GeomEvaluator_OffsetCurve",R"#(Allows to calculate values and derivatives for offset curves in 3DAllows to calculate values and derivatives for offset curves in 3D)#");
    py::class_<GeomEvaluator_OffsetSurface ,opencascade::handle<GeomEvaluator_OffsetSurface>  , GeomEvaluator_Surface >(m,"GeomEvaluator_OffsetSurface",R"#(Allows to calculate values and derivatives for offset surfacesAllows to calculate values and derivatives for offset surfaces)#");
    py::class_<GeomEvaluator_SurfaceOfExtrusion ,opencascade::handle<GeomEvaluator_SurfaceOfExtrusion>  , GeomEvaluator_Surface >(m,"GeomEvaluator_SurfaceOfExtrusion",R"#(Allows to calculate values and derivatives for surfaces of linear extrusionAllows to calculate values and derivatives for surfaces of linear extrusion)#");
    py::class_<GeomEvaluator_SurfaceOfRevolution ,opencascade::handle<GeomEvaluator_SurfaceOfRevolution>  , GeomEvaluator_Surface >(m,"GeomEvaluator_SurfaceOfRevolution",R"#(Allows to calculate values and derivatives for surfaces of revolutionAllows to calculate values and derivatives for surfaces of revolution)#");

};

// user-defined post-inclusion per module

// user-defined post

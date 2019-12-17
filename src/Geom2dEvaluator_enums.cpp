
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <Geom2dAdaptor_HCurve.hxx>

// module includes
#include <Geom2dEvaluator_Curve.hxx>
#include <Geom2dEvaluator_OffsetCurve.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2dEvaluator_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Geom2dEvaluator", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_Geom2dEvaluator_Curve : public Geom2dEvaluator_Curve{
    public:
        using Geom2dEvaluator_Curve::Geom2dEvaluator_Curve;
        
        // public pure virtual
        void D0(const Standard_Real theU,gp_Pnt2d & theValue) const  override { PYBIND11_OVERLOAD_PURE(void,Geom2dEvaluator_Curve,D0,theU,theValue) };
        void D1(const Standard_Real theU,gp_Pnt2d & theValue,gp_Vec2d & theD1) const  override { PYBIND11_OVERLOAD_PURE(void,Geom2dEvaluator_Curve,D1,theU,theValue,theD1) };
        void D2(const Standard_Real theU,gp_Pnt2d & theValue,gp_Vec2d & theD1,gp_Vec2d & theD2) const  override { PYBIND11_OVERLOAD_PURE(void,Geom2dEvaluator_Curve,D2,theU,theValue,theD1,theD2) };
        void D3(const Standard_Real theU,gp_Pnt2d & theValue,gp_Vec2d & theD1,gp_Vec2d & theD2,gp_Vec2d & theD3) const  override { PYBIND11_OVERLOAD_PURE(void,Geom2dEvaluator_Curve,D3,theU,theValue,theD1,theD2,theD3) };
        gp_Vec2d DN(const Standard_Real theU,const Standard_Integer theDerU) const  override { PYBIND11_OVERLOAD_PURE(gp_Vec2d,Geom2dEvaluator_Curve,DN,theU,theDerU) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes forward declarations only
    py::class_<Geom2dEvaluator_Curve ,opencascade::handle<Geom2dEvaluator_Curve> ,Py_Geom2dEvaluator_Curve , Standard_Transient >(m,"Geom2dEvaluator_Curve",R"#(Interface for calculation of values and derivatives for different kinds of curves in 2D. Works both with adaptors and curves.Interface for calculation of values and derivatives for different kinds of curves in 2D. Works both with adaptors and curves.)#");
    py::class_<Geom2dEvaluator_OffsetCurve ,opencascade::handle<Geom2dEvaluator_OffsetCurve>  , Geom2dEvaluator_Curve >(m,"Geom2dEvaluator_OffsetCurve",R"#(Allows to calculate values and derivatives for offset curves in 2DAllows to calculate values and derivatives for offset curves in 2D)#");

// pre-register typdefs
// ./opencascade/Geom2dEvaluator_Curve.hxx
// ./opencascade/Geom2dEvaluator_OffsetCurve.hxx

};

// user-defined post-inclusion per module

// user-defined post

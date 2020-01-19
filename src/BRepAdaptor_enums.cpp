
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Adaptor3d_HCurve.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <gp_Ax1.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HCurveOnSurface.hxx>
#include <TopoDS_Face.hxx>
#include <Adaptor3d_CurveOnSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_OffsetCurve.hxx>

// module includes
#include <BRepAdaptor_Array1OfCurve.hxx>
#include <BRepAdaptor_CompCurve.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <BRepAdaptor_Curve2d.hxx>
#include <BRepAdaptor_HArray1OfCurve.hxx>
#include <BRepAdaptor_HCompCurve.hxx>
#include <BRepAdaptor_HCurve.hxx>
#include <BRepAdaptor_HCurve2d.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <BRepAdaptor_Surface.hxx>

// template related includes
// ./opencascade/BRepAdaptor_Array1OfCurve.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepAdaptor_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepAdaptor", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array1<BRepAdaptor_Curve>(m,"BRepAdaptor_Array1OfCurve");  

// classes forward declarations only
    py::class_<BRepAdaptor_CompCurve , shared_ptr<BRepAdaptor_CompCurve>  , Adaptor3d_Curve >(m,"BRepAdaptor_CompCurve",R"#(The Curve from BRepAdaptor allows to use a Wire of the BRep topology like a 3D curve. Warning: With this class of curve, C0 and C1 continuities are not assumed. So be careful with some algorithm! Please note that BRepAdaptor_CompCurve cannot be periodic curve at all (even if it contains single periodic edge).)#");
    py::class_<BRepAdaptor_Curve , shared_ptr<BRepAdaptor_Curve>  , Adaptor3d_Curve >(m,"BRepAdaptor_Curve",R"#(The Curve from BRepAdaptor allows to use an Edge of the BRep topology like a 3D curve.)#");
    py::class_<BRepAdaptor_Curve2d , shared_ptr<BRepAdaptor_Curve2d>  , Geom2dAdaptor_Curve >(m,"BRepAdaptor_Curve2d",R"#(The Curve2d from BRepAdaptor allows to use an Edge on a Face like a 2d curve. (curve in the parametric space).)#");
    py::class_<BRepAdaptor_HArray1OfCurve ,opencascade::handle<BRepAdaptor_HArray1OfCurve>  , BRepAdaptor_Array1OfCurve , Standard_Transient >(m,"BRepAdaptor_HArray1OfCurve",R"#()#");
    py::class_<BRepAdaptor_HCompCurve ,opencascade::handle<BRepAdaptor_HCompCurve>  , Adaptor3d_HCurve >(m,"BRepAdaptor_HCompCurve",R"#()#");
    py::class_<BRepAdaptor_HCurve ,opencascade::handle<BRepAdaptor_HCurve>  , Adaptor3d_HCurve >(m,"BRepAdaptor_HCurve",R"#()#");
    py::class_<BRepAdaptor_HCurve2d ,opencascade::handle<BRepAdaptor_HCurve2d>  , Adaptor2d_HCurve2d >(m,"BRepAdaptor_HCurve2d",R"#()#");
    py::class_<BRepAdaptor_HSurface ,opencascade::handle<BRepAdaptor_HSurface>  , Adaptor3d_HSurface >(m,"BRepAdaptor_HSurface",R"#()#");
    py::class_<BRepAdaptor_Surface , shared_ptr<BRepAdaptor_Surface>  , Adaptor3d_Surface >(m,"BRepAdaptor_Surface",R"#(The Surface from BRepAdaptor allows to use a Face of the BRep topology look like a 3D surface.)#");

};

// user-defined post-inclusion per module

// user-defined post

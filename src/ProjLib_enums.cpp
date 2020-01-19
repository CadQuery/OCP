
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_NoSuchObject.hxx>
#include <gp_Circ.hxx>
#include <gp_Lin.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Pln.hxx>
#include <gp_Pnt.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Hypr.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <ProjLib_ProjectOnPlane.hxx>
#include <ProjLib_ProjectOnSurface.hxx>
#include <ProjLib_ComputeApprox.hxx>
#include <ProjLib_ComputeApproxOnPolarSurface.hxx>
#include <ProjLib_ProjectedCurve.hxx>
#include <ProjLib_HProjectedCurve.hxx>
#include <ProjLib_CompProjectedCurve.hxx>
#include <ProjLib_HCompProjectedCurve.hxx>
#include <ProjLib_PrjResolve.hxx>
#include <ProjLib_PrjFunc.hxx>
#include <ProjLib_Projector.hxx>
#include <ProjLib_Plane.hxx>
#include <ProjLib_Cylinder.hxx>
#include <ProjLib_Cone.hxx>
#include <ProjLib_Sphere.hxx>
#include <ProjLib_Torus.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Standard_NoSuchObject.hxx>
#include <gp_Circ.hxx>
#include <gp_Lin.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <math_Matrix.hxx>
#include <gp_Pnt2d.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomAdaptor_HCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NotImplemented.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_BezierCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NotImplemented.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NotImplemented.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Standard_NoSuchObject.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_Curve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_BezierCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NotImplemented.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Geom2d_BezierCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>

// module includes
#include <ProjLib.hxx>
#include <ProjLib_CompProjectedCurve.hxx>
#include <ProjLib_ComputeApprox.hxx>
#include <ProjLib_ComputeApproxOnPolarSurface.hxx>
#include <ProjLib_Cone.hxx>
#include <ProjLib_Cylinder.hxx>
#include <ProjLib_HCompProjectedCurve.hxx>
#include <ProjLib_HProjectedCurve.hxx>
#include <ProjLib_HSequenceOfHSequenceOfPnt.hxx>
#include <ProjLib_Plane.hxx>
#include <ProjLib_PrjFunc.hxx>
#include <ProjLib_PrjResolve.hxx>
#include <ProjLib_ProjectedCurve.hxx>
#include <ProjLib_ProjectOnPlane.hxx>
#include <ProjLib_ProjectOnSurface.hxx>
#include <ProjLib_Projector.hxx>
#include <ProjLib_SequenceOfHSequenceOfPnt.hxx>
#include <ProjLib_Sphere.hxx>
#include <ProjLib_Torus.hxx>

// template related includes
// ./opencascade/ProjLib_SequenceOfHSequenceOfPnt.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ProjLib_enums(py::module &main_module) {


py::module m = main_module.def_submodule("ProjLib", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Sequence<opencascade::handle<TColgp_HSequenceOfPnt> >(m,"ProjLib_SequenceOfHSequenceOfPnt");  

// classes forward declarations only
    py::class_<ProjLib , shared_ptr<ProjLib>  >(m,"ProjLib",R"#(The projLib package first provides projection of curves on a plane along a given Direction. The result will be a 3D curve. The ProjLib package provides projection of curves on surfaces to compute the curve in the parametric space.)#");
    py::class_<ProjLib_CompProjectedCurve , shared_ptr<ProjLib_CompProjectedCurve>  , Adaptor2d_Curve2d >(m,"ProjLib_CompProjectedCurve",R"#(None)#");
    py::class_<ProjLib_ComputeApprox , shared_ptr<ProjLib_ComputeApprox>  >(m,"ProjLib_ComputeApprox",R"#(Approximate the projection of a 3d curve on an analytic surface and stores the result in Approx. The result is a 2d curve. For approximation some parameters are used, including required tolerance of approximation. Tolerance is maximal possible value of 3d deviation of 3d projection of projected curve from "exact" 3d projection. Since algorithm searches 2d curve on surface, required 2d tolerance is computed from 3d tolerance with help of U,V resolutions of surface. 3d and 2d tolerances have sence only for curves on surface, it defines precision of projecting and approximation and have nothing to do with distance between the projected curve and the surface.)#");
    py::class_<ProjLib_ComputeApproxOnPolarSurface , shared_ptr<ProjLib_ComputeApproxOnPolarSurface>  >(m,"ProjLib_ComputeApproxOnPolarSurface",R"#(Approximate the projection of a 3d curve on an polar surface and stores the result in Approx. The result is a 2d curve. The evaluation of the current point of the 2d curve is done with the evaluation of the extrema P3d - Surface. For approximation some parameters are used, including required tolerance of approximation. Tolerance is maximal possible value of 3d deviation of 3d projection of projected curve from "exact" 3d projection. Since algorithm searches 2d curve on surface, required 2d tolerance is computed from 3d tolerance with help of U,V resolutions of surface. 3d and 2d tolerances have sence only for curves on surface, it defines precision of projecting and approximation and have nothing to do with distance between the projected curve and the surface.)#");
    py::class_<ProjLib_HCompProjectedCurve ,opencascade::handle<ProjLib_HCompProjectedCurve>  , Adaptor2d_HCurve2d >(m,"ProjLib_HCompProjectedCurve",R"#()#");
    py::class_<ProjLib_HProjectedCurve ,opencascade::handle<ProjLib_HProjectedCurve>  , Adaptor2d_HCurve2d >(m,"ProjLib_HProjectedCurve",R"#()#");
    py::class_<ProjLib_HSequenceOfHSequenceOfPnt ,opencascade::handle<ProjLib_HSequenceOfHSequenceOfPnt>  , ProjLib_SequenceOfHSequenceOfPnt , Standard_Transient >(m,"ProjLib_HSequenceOfHSequenceOfPnt",R"#()#");
    py::class_<ProjLib_PrjFunc , shared_ptr<ProjLib_PrjFunc>  , math_FunctionSetWithDerivatives >(m,"ProjLib_PrjFunc",R"#(None)#");
    py::class_<ProjLib_PrjResolve , shared_ptr<ProjLib_PrjResolve>  >(m,"ProjLib_PrjResolve",R"#(None)#");
    py::class_<ProjLib_ProjectOnPlane , shared_ptr<ProjLib_ProjectOnPlane>  , Adaptor3d_Curve >(m,"ProjLib_ProjectOnPlane",R"#(Class used to project a 3d curve on a plane. The result will be a 3d curve.)#");
    py::class_<ProjLib_ProjectOnSurface , shared_ptr<ProjLib_ProjectOnSurface>  >(m,"ProjLib_ProjectOnSurface",R"#(Project a curve on a surface. The result ( a 3D Curve) will be an approximation)#");
    py::class_<ProjLib_ProjectedCurve , shared_ptr<ProjLib_ProjectedCurve>  , Adaptor2d_Curve2d >(m,"ProjLib_ProjectedCurve",R"#(Compute the 2d-curve. Try to solve the particular case if possible. Otherwize, an approximation is done. For approximation some parameters are used, including required tolerance of approximation. Tolerance is maximal possible value of 3d deviation of 3d projection of projected curve from "exact" 3d projection. Since algorithm searches 2d curve on surface, required 2d tolerance is computed from 3d tolerance with help of U,V resolutions of surface. 3d and 2d tolerances have sence only for curves on surface, it defines precision of projecting and approximation and have nothing to do with distance between the projected curve and the surface.)#");
    py::class_<ProjLib_Projector , shared_ptr<ProjLib_Projector>  >(m,"ProjLib_Projector",R"#(Root class for projection algorithms, stores the result.)#");
    py::class_<ProjLib_Cone , shared_ptr<ProjLib_Cone>  , ProjLib_Projector >(m,"ProjLib_Cone",R"#(Projects elementary curves on a cone.)#");
    py::class_<ProjLib_Cylinder , shared_ptr<ProjLib_Cylinder>  , ProjLib_Projector >(m,"ProjLib_Cylinder",R"#(Projects elementary curves on a cylinder.)#");
    py::class_<ProjLib_Plane , shared_ptr<ProjLib_Plane>  , ProjLib_Projector >(m,"ProjLib_Plane",R"#(Projects elementary curves on a plane.)#");
    py::class_<ProjLib_Sphere , shared_ptr<ProjLib_Sphere>  , ProjLib_Projector >(m,"ProjLib_Sphere",R"#(Projects elementary curves on a sphere.)#");
    py::class_<ProjLib_Torus , shared_ptr<ProjLib_Torus>  , ProjLib_Projector >(m,"ProjLib_Torus",R"#(Projects elementary curves on a torus.)#");

};

// user-defined post-inclusion per module

// user-defined post

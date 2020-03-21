
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
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Contap_HContTool.hxx>
#include <Contap_SurfFunction.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Contap_HCurve2dTool.hxx>
#include <Contap_HContTool.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Contap_ArcFunction.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <IntSurf_PathPointTool.hxx>
#include <IntSurf_InteriorPointTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Contap_SurfFunction.hxx>
#include <math_FunctionSetRoot.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <gp_Pnt2d.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <gp_Pnt.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <math_Matrix.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <gp_Sphere.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor2d_HCurve2d.hxx>

// module includes
#include <Contap_ArcFunction.hxx>
#include <Contap_ContAna.hxx>
#include <Contap_Contour.hxx>
#include <Contap_HContTool.hxx>
#include <Contap_HCurve2dTool.hxx>
#include <Contap_IType.hxx>
#include <Contap_Line.hxx>
#include <Contap_Point.hxx>
#include <Contap_SequenceOfIWLineOfTheIWalking.hxx>
#include <Contap_SequenceOfPathPointOfTheSearch.hxx>
#include <Contap_SequenceOfSegmentOfTheSearch.hxx>
#include <Contap_SurfFunction.hxx>
#include <Contap_SurfProps.hxx>
#include <Contap_TFunction.hxx>
#include <Contap_TheHSequenceOfPoint.hxx>
#include <Contap_TheIWalking.hxx>
#include <Contap_TheIWLineOfTheIWalking.hxx>
#include <Contap_ThePathPointOfTheSearch.hxx>
#include <Contap_TheSearch.hxx>
#include <Contap_TheSearchInside.hxx>
#include <Contap_TheSegmentOfTheSearch.hxx>
#include <Contap_TheSequenceOfLine.hxx>
#include <Contap_TheSequenceOfPoint.hxx>

// template related includes
// ./opencascade\Contap_SequenceOfPathPointOfTheSearch.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Contap_TheSequenceOfLine.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Contap_TheSequenceOfPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Contap_SequenceOfSegmentOfTheSearch.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Contap_SequenceOfIWLineOfTheIWalking.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Contap_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Contap", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Contap_TFunction>(m, "Contap_TFunction",R"#(None)#")
        .value("Contap_ContourStd",Contap_TFunction::Contap_ContourStd)
        .value("Contap_ContourPrs",Contap_TFunction::Contap_ContourPrs)
        .value("Contap_DraftStd",Contap_TFunction::Contap_DraftStd)
        .value("Contap_DraftPrs",Contap_TFunction::Contap_DraftPrs).export_values();
    py::enum_<Contap_IType>(m, "Contap_IType",R"#(None)#")
        .value("Contap_Lin",Contap_IType::Contap_Lin)
        .value("Contap_Circle",Contap_IType::Contap_Circle)
        .value("Contap_Walking",Contap_IType::Contap_Walking)
        .value("Contap_Restriction",Contap_IType::Contap_Restriction).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Sequence<Contap_ThePathPointOfTheSearch>(m,"Contap_SequenceOfPathPointOfTheSearch");
    preregister_template_NCollection_Sequence<Contap_Line>(m,"Contap_TheSequenceOfLine");
    preregister_template_NCollection_Sequence<Contap_Point>(m,"Contap_TheSequenceOfPoint");
    preregister_template_NCollection_Sequence<Contap_TheSegmentOfTheSearch>(m,"Contap_SequenceOfSegmentOfTheSearch");
    preregister_template_NCollection_Sequence<opencascade::handle<Contap_TheIWLineOfTheIWalking> >(m,"Contap_SequenceOfIWLineOfTheIWalking");

// classes forward declarations only
    py::class_<Contap_ArcFunction , shared_ptr<Contap_ArcFunction> , math_FunctionWithDerivative>(m,"Contap_ArcFunction",R"#(None)#");
    py::class_<Contap_ContAna , shared_ptr<Contap_ContAna> >(m,"Contap_ContAna",R"#(This class provides the computation of the contours for quadric surfaces.)#");
    py::class_<Contap_Contour , shared_ptr<Contap_Contour> >(m,"Contap_Contour",R"#(None)#");
    py::class_<Contap_HContTool , shared_ptr<Contap_HContTool> >(m,"Contap_HContTool",R"#(Tool for the intersection between 2 surfaces. Regroupe pour l instant les methodes hors Adaptor3d...)#");
    py::class_<Contap_HCurve2dTool , shared_ptr<Contap_HCurve2dTool> >(m,"Contap_HCurve2dTool",R"#(None)#");
    py::class_<Contap_Line , shared_ptr<Contap_Line> >(m,"Contap_Line",R"#(None)#");
    py::class_<Contap_Point , shared_ptr<Contap_Point> >(m,"Contap_Point",R"#(Definition of a vertex on the contour line. Most of the time, such a point is an intersection between the contour and a restriction of the surface. When it is not tyhe method IsOnArc return False. Such a point is contains geometrical informations (see the Value method) and logical informations.)#");
    py::class_<Contap_SurfFunction , shared_ptr<Contap_SurfFunction> , math_FunctionSetWithDerivatives>(m,"Contap_SurfFunction",R"#(This class describes the function on a parametric surface. the form of the function is F(u,v) = 0 where u and v are the parameteric coordinates of a point on the surface, to compute the contours of the surface.)#");
    py::class_<Contap_SurfProps , shared_ptr<Contap_SurfProps> >(m,"Contap_SurfProps",R"#(Internal tool used to compute the normal and its derivatives.)#");
    py::class_<Contap_TheHSequenceOfPoint ,opencascade::handle<Contap_TheHSequenceOfPoint> , Contap_TheSequenceOfPoint, Standard_Transient>(m,"Contap_TheHSequenceOfPoint",R"#()#");
    py::class_<Contap_TheIWLineOfTheIWalking ,opencascade::handle<Contap_TheIWLineOfTheIWalking> , Standard_Transient>(m,"Contap_TheIWLineOfTheIWalking",R"#()#");
    py::class_<Contap_TheIWalking , shared_ptr<Contap_TheIWalking> >(m,"Contap_TheIWalking",R"#(None)#");
    py::class_<Contap_ThePathPointOfTheSearch , shared_ptr<Contap_ThePathPointOfTheSearch> >(m,"Contap_ThePathPointOfTheSearch",R"#(None)#");
    py::class_<Contap_TheSearch , shared_ptr<Contap_TheSearch> >(m,"Contap_TheSearch",R"#(None)#");
    py::class_<Contap_TheSearchInside , shared_ptr<Contap_TheSearchInside> >(m,"Contap_TheSearchInside",R"#(None)#");
    py::class_<Contap_TheSegmentOfTheSearch , shared_ptr<Contap_TheSegmentOfTheSearch> >(m,"Contap_TheSegmentOfTheSearch",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post


// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <gp_Elips.hxx>
#include <Geom_OffsetCurve.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Prs3d_DimensionAspect.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <Geom_Surface.hxx>
#include <Prs3d_LineAspect.hxx>
#include <Prs3d_ArrowAspect.hxx>
#include <Prs3d_TextAspect.hxx>
#include <gp_Circ.hxx>
#include <gp_Circ.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <Geom_Plane.hxx>
#include <gp_Circ.hxx>
#include <TopoDS_Shape.hxx>
#include <gp_Circ.hxx>

// module includes
#include <DsgPrs.hxx>
#include <DsgPrs_AnglePresentation.hxx>
#include <DsgPrs_ArrowSide.hxx>
#include <DsgPrs_Chamf2dPresentation.hxx>
#include <DsgPrs_ConcentricPresentation.hxx>
#include <DsgPrs_DatumPrs.hxx>
#include <DsgPrs_DiameterPresentation.hxx>
#include <DsgPrs_EllipseRadiusPresentation.hxx>
#include <DsgPrs_EqualDistancePresentation.hxx>
#include <DsgPrs_EqualRadiusPresentation.hxx>
#include <DsgPrs_FilletRadiusPresentation.hxx>
#include <DsgPrs_FixPresentation.hxx>
#include <DsgPrs_IdenticPresentation.hxx>
#include <DsgPrs_LengthPresentation.hxx>
#include <DsgPrs_MidPointPresentation.hxx>
#include <DsgPrs_OffsetPresentation.hxx>
#include <DsgPrs_ParalPresentation.hxx>
#include <DsgPrs_PerpenPresentation.hxx>
#include <DsgPrs_RadiusPresentation.hxx>
#include <DsgPrs_ShadedPlanePresentation.hxx>
#include <DsgPrs_ShapeDirPresentation.hxx>
#include <DsgPrs_SymbPresentation.hxx>
#include <DsgPrs_SymmetricPresentation.hxx>
#include <DsgPrs_TangentPresentation.hxx>
#include <DsgPrs_XYZAxisPresentation.hxx>
#include <DsgPrs_XYZPlanePresentation.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_DsgPrs_enums(py::module &main_module) {


py::module m = main_module.def_submodule("DsgPrs", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<DsgPrs_ArrowSide>(m, "DsgPrs_ArrowSide",R"#(Designates how many arrows will be displayed and where they will be displayed in presenting a length.)#")
        .value("DsgPrs_AS_NONE",DsgPrs_ArrowSide::DsgPrs_AS_NONE)
        .value("DsgPrs_AS_FIRSTAR",DsgPrs_ArrowSide::DsgPrs_AS_FIRSTAR)
        .value("DsgPrs_AS_LASTAR",DsgPrs_ArrowSide::DsgPrs_AS_LASTAR)
        .value("DsgPrs_AS_BOTHAR",DsgPrs_ArrowSide::DsgPrs_AS_BOTHAR)
        .value("DsgPrs_AS_FIRSTPT",DsgPrs_ArrowSide::DsgPrs_AS_FIRSTPT)
        .value("DsgPrs_AS_LASTPT",DsgPrs_ArrowSide::DsgPrs_AS_LASTPT)
        .value("DsgPrs_AS_BOTHPT",DsgPrs_ArrowSide::DsgPrs_AS_BOTHPT)
        .value("DsgPrs_AS_FIRSTAR_LASTPT",DsgPrs_ArrowSide::DsgPrs_AS_FIRSTAR_LASTPT)
        .value("DsgPrs_AS_FIRSTPT_LASTAR",DsgPrs_ArrowSide::DsgPrs_AS_FIRSTPT_LASTAR).export_values();

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<DsgPrs , shared_ptr<DsgPrs> >(m,"DsgPrs",R"#(Describes Standard Presentations for DsgIHM objects)#");
    py::class_<DsgPrs_AnglePresentation , shared_ptr<DsgPrs_AnglePresentation> >(m,"DsgPrs_AnglePresentation",R"#(A framework for displaying angles.)#");
    py::class_<DsgPrs_Chamf2dPresentation , shared_ptr<DsgPrs_Chamf2dPresentation> >(m,"DsgPrs_Chamf2dPresentation",R"#(Framework for display of 2D chamfers.)#");
    py::class_<DsgPrs_ConcentricPresentation , shared_ptr<DsgPrs_ConcentricPresentation> >(m,"DsgPrs_ConcentricPresentation",R"#(A framework to define display of relations of concentricity.)#");
    py::class_<DsgPrs_DatumPrs , shared_ptr<DsgPrs_DatumPrs> , Prs3d_Root>(m,"DsgPrs_DatumPrs",R"#(A framework for displaying an XYZ trihedron.)#");
    py::class_<DsgPrs_DiameterPresentation , shared_ptr<DsgPrs_DiameterPresentation> >(m,"DsgPrs_DiameterPresentation",R"#(A framework for displaying diameters in shapes.)#");
    py::class_<DsgPrs_EllipseRadiusPresentation , shared_ptr<DsgPrs_EllipseRadiusPresentation> >(m,"DsgPrs_EllipseRadiusPresentation",R"#(None)#");
    py::class_<DsgPrs_EqualDistancePresentation , shared_ptr<DsgPrs_EqualDistancePresentation> >(m,"DsgPrs_EqualDistancePresentation",R"#(A framework to display equal distances between shapes and a given plane. The distance is the length of a projection from the shape to the plane. These distances are used to compare two shapes by this vector alone.)#");
    py::class_<DsgPrs_EqualRadiusPresentation , shared_ptr<DsgPrs_EqualRadiusPresentation> >(m,"DsgPrs_EqualRadiusPresentation",R"#(A framework to define display of equality in radii.)#");
    py::class_<DsgPrs_FilletRadiusPresentation , shared_ptr<DsgPrs_FilletRadiusPresentation> >(m,"DsgPrs_FilletRadiusPresentation",R"#(A framework for displaying radii of fillets.)#");
    py::class_<DsgPrs_FixPresentation , shared_ptr<DsgPrs_FixPresentation> >(m,"DsgPrs_FixPresentation",R"#(class which draws the presentation of Fixed objects)#");
    py::class_<DsgPrs_IdenticPresentation , shared_ptr<DsgPrs_IdenticPresentation> >(m,"DsgPrs_IdenticPresentation",R"#(None)#");
    py::class_<DsgPrs_LengthPresentation , shared_ptr<DsgPrs_LengthPresentation> >(m,"DsgPrs_LengthPresentation",R"#(Framework for displaying lengths. The length displayed is indicated by line segments and text alone or by a combination of line segment, text and arrows at either or both of its ends.)#");
    py::class_<DsgPrs_MidPointPresentation , shared_ptr<DsgPrs_MidPointPresentation> >(m,"DsgPrs_MidPointPresentation",R"#(None)#");
    py::class_<DsgPrs_OffsetPresentation , shared_ptr<DsgPrs_OffsetPresentation> >(m,"DsgPrs_OffsetPresentation",R"#(A framework to define display of offsets.)#");
    py::class_<DsgPrs_ParalPresentation , shared_ptr<DsgPrs_ParalPresentation> >(m,"DsgPrs_ParalPresentation",R"#(A framework to define display of relations of parallelism between shapes.)#");
    py::class_<DsgPrs_PerpenPresentation , shared_ptr<DsgPrs_PerpenPresentation> >(m,"DsgPrs_PerpenPresentation",R"#(A framework to define display of perpendicular constraints between shapes.)#");
    py::class_<DsgPrs_RadiusPresentation , shared_ptr<DsgPrs_RadiusPresentation> >(m,"DsgPrs_RadiusPresentation",R"#(A framework to define display of radii.)#");
    py::class_<DsgPrs_ShadedPlanePresentation , shared_ptr<DsgPrs_ShadedPlanePresentation> >(m,"DsgPrs_ShadedPlanePresentation",R"#(A framework to define display of shaded planes.)#");
    py::class_<DsgPrs_ShapeDirPresentation , shared_ptr<DsgPrs_ShapeDirPresentation> >(m,"DsgPrs_ShapeDirPresentation",R"#(A framework to define display of the normal to the surface of a shape.)#");
    py::class_<DsgPrs_SymbPresentation , shared_ptr<DsgPrs_SymbPresentation> >(m,"DsgPrs_SymbPresentation",R"#(A framework to define display of symbols.)#");
    py::class_<DsgPrs_SymmetricPresentation , shared_ptr<DsgPrs_SymmetricPresentation> >(m,"DsgPrs_SymmetricPresentation",R"#(A framework to define display of symmetry between shapes.)#");
    py::class_<DsgPrs_TangentPresentation , shared_ptr<DsgPrs_TangentPresentation> >(m,"DsgPrs_TangentPresentation",R"#(A framework to define display of tangents.)#");
    py::class_<DsgPrs_XYZAxisPresentation , shared_ptr<DsgPrs_XYZAxisPresentation> >(m,"DsgPrs_XYZAxisPresentation",R"#(A framework for displaying the axes of an XYZ trihedron.)#");
    py::class_<DsgPrs_XYZPlanePresentation , shared_ptr<DsgPrs_XYZPlanePresentation> >(m,"DsgPrs_XYZPlanePresentation",R"#(A framework for displaying the planes of an XYZ trihedron.)#");

};

// user-defined post-inclusion per module

// user-defined post

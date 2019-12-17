
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Prs3d_Presentation.hxx>
#include <TopoDS_Shape.hxx>
#include <Prs3d_Presentation.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <Prs3d_Presentation.hxx>
#include <gp_Pnt.hxx>
#include <Geom_Plane.hxx>
#include <Prs3d_Presentation.hxx>
#include <gp_Pnt.hxx>
#include <Prs3d_Presentation.hxx>
#include <TCollection_ExtendedString.hxx>
#include <gp_Pnt.hxx>
#include <gp_Elips.hxx>
#include <Geom_OffsetCurve.hxx>
#include <Prs3d_Presentation.hxx>
#include <gp_Pnt.hxx>
#include <TCollection_ExtendedString.hxx>
#include <Prs3d_Presentation.hxx>
#include <gp_Pnt.hxx>
#include <Prs3d_Presentation.hxx>
#include <TCollection_ExtendedString.hxx>
#include <gp_Circ.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <gp_Ax1.hxx>
#include <Prs3d_Presentation.hxx>
#include <TCollection_ExtendedString.hxx>
#include <gp_Pnt.hxx>
#include <gp_Ax2.hxx>
#include <gp_Elips.hxx>
#include <Prs3d_Presentation.hxx>
#include <TCollection_ExtendedString.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <gp_Pln.hxx>
#include <Geom_Surface.hxx>
#include <Prs3d_Presentation.hxx>
#include <TCollection_ExtendedString.hxx>
#include <gp_Pnt.hxx>
#include <Prs3d_Presentation.hxx>
#include <TCollection_ExtendedString.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <Prs3d_Presentation.hxx>
#include <gp_Pnt.hxx>
#include <Prs3d_Presentation.hxx>
#include <TCollection_ExtendedString.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <Prs3d_Presentation.hxx>
#include <gp_Ax2.hxx>
#include <gp_Pnt.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <Prs3d_Presentation.hxx>
#include <TCollection_ExtendedString.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <Prs3d_Presentation.hxx>
#include <Prs3d_DimensionAspect.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <gp_Pln.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <gp_Ax1.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <DsgPrs_EllipseRadiusPresentation.hxx>
#include <DsgPrs_LengthPresentation.hxx>
#include <DsgPrs_RadiusPresentation.hxx>
#include <DsgPrs_DiameterPresentation.hxx>
#include <DsgPrs_FilletRadiusPresentation.hxx>
#include <DsgPrs_AnglePresentation.hxx>
#include <DsgPrs_Chamf2dPresentation.hxx>
#include <DsgPrs_ParalPresentation.hxx>
#include <DsgPrs_PerpenPresentation.hxx>
#include <DsgPrs_SymmetricPresentation.hxx>
#include <DsgPrs_MidPointPresentation.hxx>
#include <DsgPrs_TangentPresentation.hxx>
#include <DsgPrs_ConcentricPresentation.hxx>
#include <DsgPrs_FixPresentation.hxx>
#include <DsgPrs_IdenticPresentation.hxx>
#include <DsgPrs_EqualRadiusPresentation.hxx>
#include <DsgPrs_EqualDistancePresentation.hxx>
#include <DsgPrs_SymbPresentation.hxx>
#include <DsgPrs_ShapeDirPresentation.hxx>
#include <DsgPrs_OffsetPresentation.hxx>
#include <DsgPrs_XYZAxisPresentation.hxx>
#include <DsgPrs_XYZPlanePresentation.hxx>
#include <DsgPrs_ShadedPlanePresentation.hxx>
#include <Prs3d_Presentation.hxx>
#include <TCollection_ExtendedString.hxx>
#include <gp_Pnt.hxx>
#include <gp_Circ.hxx>
#include <Prs3d_Presentation.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <Prs3d_Presentation.hxx>
#include <TCollection_ExtendedString.hxx>
#include <gp_Pnt.hxx>
#include <gp_Circ.hxx>
#include <Prs3d_Presentation.hxx>
#include <gp_Pnt.hxx>
#include <Geom_Plane.hxx>
#include <gp_Dir.hxx>
#include <gp_Circ.hxx>
#include <Prs3d_Presentation.hxx>
#include <Prs3d_LineAspect.hxx>
#include <gp_Dir.hxx>
#include <gp_Pnt.hxx>
#include <Prs3d_ArrowAspect.hxx>
#include <Prs3d_TextAspect.hxx>
#include <Prs3d_Presentation.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <Prs3d_Presentation.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>

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

// classes forward declarations only
    py::class_<DsgPrs_ShapeDirPresentation ,std::unique_ptr<DsgPrs_ShapeDirPresentation>  >(m,"DsgPrs_ShapeDirPresentation",R"#(A framework to define display of the normal to the surface of a shape.)#");
    py::class_<DsgPrs_EqualRadiusPresentation ,std::unique_ptr<DsgPrs_EqualRadiusPresentation>  >(m,"DsgPrs_EqualRadiusPresentation",R"#(A framework to define display of equality in radii.)#");
    py::class_<DsgPrs_EllipseRadiusPresentation ,std::unique_ptr<DsgPrs_EllipseRadiusPresentation>  >(m,"DsgPrs_EllipseRadiusPresentation",R"#(None)#");
    py::class_<DsgPrs_ShadedPlanePresentation ,std::unique_ptr<DsgPrs_ShadedPlanePresentation>  >(m,"DsgPrs_ShadedPlanePresentation",R"#(A framework to define display of shaded planes.)#");
    py::class_<DsgPrs_IdenticPresentation ,std::unique_ptr<DsgPrs_IdenticPresentation>  >(m,"DsgPrs_IdenticPresentation",R"#(None)#");
    py::class_<DsgPrs_SymbPresentation ,std::unique_ptr<DsgPrs_SymbPresentation>  >(m,"DsgPrs_SymbPresentation",R"#(A framework to define display of symbols.)#");
    py::class_<DsgPrs_XYZPlanePresentation ,std::unique_ptr<DsgPrs_XYZPlanePresentation>  >(m,"DsgPrs_XYZPlanePresentation",R"#(A framework for displaying the planes of an XYZ trihedron.)#");
    py::class_<DsgPrs_MidPointPresentation ,std::unique_ptr<DsgPrs_MidPointPresentation>  >(m,"DsgPrs_MidPointPresentation",R"#(None)#");
    py::class_<DsgPrs ,std::unique_ptr<DsgPrs>  >(m,"DsgPrs",R"#(Describes Standard Presentations for DsgIHM objects)#");
    py::class_<DsgPrs_DiameterPresentation ,std::unique_ptr<DsgPrs_DiameterPresentation>  >(m,"DsgPrs_DiameterPresentation",R"#(A framework for displaying diameters in shapes.)#");
    py::class_<DsgPrs_RadiusPresentation ,std::unique_ptr<DsgPrs_RadiusPresentation>  >(m,"DsgPrs_RadiusPresentation",R"#(A framework to define display of radii.)#");
    py::class_<DsgPrs_XYZAxisPresentation ,std::unique_ptr<DsgPrs_XYZAxisPresentation>  >(m,"DsgPrs_XYZAxisPresentation",R"#(A framework for displaying the axes of an XYZ trihedron.)#");
    py::class_<DsgPrs_TangentPresentation ,std::unique_ptr<DsgPrs_TangentPresentation>  >(m,"DsgPrs_TangentPresentation",R"#(A framework to define display of tangents.)#");
    py::class_<DsgPrs_ConcentricPresentation ,std::unique_ptr<DsgPrs_ConcentricPresentation>  >(m,"DsgPrs_ConcentricPresentation",R"#(A framework to define display of relations of concentricity.)#");
    py::class_<DsgPrs_Chamf2dPresentation ,std::unique_ptr<DsgPrs_Chamf2dPresentation>  >(m,"DsgPrs_Chamf2dPresentation",R"#(Framework for display of 2D chamfers.)#");
    py::class_<DsgPrs_LengthPresentation ,std::unique_ptr<DsgPrs_LengthPresentation>  >(m,"DsgPrs_LengthPresentation",R"#(Framework for displaying lengths. The length displayed is indicated by line segments and text alone or by a combination of line segment, text and arrows at either or both of its ends.)#");
    py::class_<DsgPrs_FilletRadiusPresentation ,std::unique_ptr<DsgPrs_FilletRadiusPresentation>  >(m,"DsgPrs_FilletRadiusPresentation",R"#(A framework for displaying radii of fillets.)#");
    py::class_<DsgPrs_DatumPrs ,std::unique_ptr<DsgPrs_DatumPrs>  , Prs3d_Root >(m,"DsgPrs_DatumPrs",R"#(A framework for displaying an XYZ trihedron.)#");
    py::class_<DsgPrs_EqualDistancePresentation ,std::unique_ptr<DsgPrs_EqualDistancePresentation>  >(m,"DsgPrs_EqualDistancePresentation",R"#(A framework to display equal distances between shapes and a given plane. The distance is the length of a projection from the shape to the plane. These distances are used to compare two shapes by this vector alone.)#");
    py::class_<DsgPrs_PerpenPresentation ,std::unique_ptr<DsgPrs_PerpenPresentation>  >(m,"DsgPrs_PerpenPresentation",R"#(A framework to define display of perpendicular constraints between shapes.)#");
    py::class_<DsgPrs_OffsetPresentation ,std::unique_ptr<DsgPrs_OffsetPresentation>  >(m,"DsgPrs_OffsetPresentation",R"#(A framework to define display of offsets.)#");
    py::class_<DsgPrs_SymmetricPresentation ,std::unique_ptr<DsgPrs_SymmetricPresentation>  >(m,"DsgPrs_SymmetricPresentation",R"#(A framework to define display of symmetry between shapes.)#");
    py::class_<DsgPrs_AnglePresentation ,std::unique_ptr<DsgPrs_AnglePresentation>  >(m,"DsgPrs_AnglePresentation",R"#(A framework for displaying angles.)#");
    py::class_<DsgPrs_FixPresentation ,std::unique_ptr<DsgPrs_FixPresentation>  >(m,"DsgPrs_FixPresentation",R"#(class which draws the presentation of Fixed objects)#");
    py::class_<DsgPrs_ParalPresentation ,std::unique_ptr<DsgPrs_ParalPresentation>  >(m,"DsgPrs_ParalPresentation",R"#(A framework to define display of relations of parallelism between shapes.)#");

// pre-register typdefs
// ./opencascade/DsgPrs_ShapeDirPresentation.hxx
// ./opencascade/DsgPrs_ConcentricPresentation.hxx
// ./opencascade/DsgPrs_EqualRadiusPresentation.hxx
// ./opencascade/DsgPrs_PerpenPresentation.hxx
// ./opencascade/DsgPrs_EllipseRadiusPresentation.hxx
// ./opencascade/DsgPrs_Chamf2dPresentation.hxx
// ./opencascade/DsgPrs_ShadedPlanePresentation.hxx
// ./opencascade/DsgPrs_AnglePresentation.hxx
// ./opencascade/DsgPrs_IdenticPresentation.hxx
// ./opencascade/DsgPrs_LengthPresentation.hxx
// ./opencascade/DsgPrs_ArrowSide.hxx
// ./opencascade/DsgPrs_SymbPresentation.hxx
// ./opencascade/DsgPrs_OffsetPresentation.hxx
// ./opencascade/DsgPrs_XYZPlanePresentation.hxx
// ./opencascade/DsgPrs_FilletRadiusPresentation.hxx
// ./opencascade/DsgPrs_MidPointPresentation.hxx
// ./opencascade/DsgPrs_ParalPresentation.hxx
// ./opencascade/DsgPrs.hxx
// ./opencascade/DsgPrs_DatumPrs.hxx
// ./opencascade/DsgPrs_DiameterPresentation.hxx
// ./opencascade/DsgPrs_SymmetricPresentation.hxx
// ./opencascade/DsgPrs_RadiusPresentation.hxx
// ./opencascade/DsgPrs_EqualDistancePresentation.hxx
// ./opencascade/DsgPrs_XYZAxisPresentation.hxx
// ./opencascade/DsgPrs_FixPresentation.hxx
// ./opencascade/DsgPrs_TangentPresentation.hxx

};

// user-defined post-inclusion per module

// user-defined post

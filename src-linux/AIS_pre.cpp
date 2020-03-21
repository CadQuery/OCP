
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Geom_Line.hxx>
#include <Geom_Axis1Placement.hxx>
#include <Geom_Axis2Placement.hxx>
#include <Prs3d_LineAspect.hxx>
#include <Geom_Plane.hxx>
#include <AIS_InteractiveContext.hxx>
#include <Prs3d_BasicAspect.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <Graphic3d_Camera.hxx>
#include <V3d_View.hxx>
#include <Geom_Plane.hxx>
#include <Graphic3d_ArrayOfSegments.hxx>
#include <Graphic3d_ArrayOfTriangles.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_SelectionManager.hxx>
#include <V3d_Viewer.hxx>
#include <SelectMgr_OrFilter.hxx>
#include <V3d_View.hxx>
#include <Prs3d_LineAspect.hxx>
#include <Prs3d_BasicAspect.hxx>
#include <TopoDS_Shape.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom_Plane.hxx>
#include <AIS_AnimationCamera.hxx>
#include <AIS_InteractiveObject.hxx>
#include <AIS_InteractiveContext.hxx>
#include <AIS_Point.hxx>
#include <AIS_RubberBand.hxx>
#include <V3d_View.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <AIS_AnimationCamera.hxx>
#include <Graphic3d_ArrayOfTriangles.hxx>
#include <V3d_View.hxx>
#include <AIS_Line.hxx>
#include <AIS_Point.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Plane.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Axis2Placement.hxx>
#include <AIS_Axis.hxx>
#include <AIS_Point.hxx>
#include <AIS_Plane.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Circle.hxx>
#include <Geom_OffsetCurve.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Axis2Placement.hxx>
#include <MeshVS_TwoColors.hxx>
#include <StdSelect_BRepOwner.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <Poly_Triangulation.hxx>
#include <Geom_Point.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom_Plane.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <Geom_Line.hxx>
#include <Geom_Point.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Line.hxx>
#include <Geom_Circle.hxx>
#include <Geom_Ellipse.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Vertex.hxx>
#include <TColStd_HPackedMapOfInteger.hxx>

// module includes
#include <AIS.hxx>
#include <AIS_AngleDimension.hxx>
#include <AIS_Animation.hxx>
#include <AIS_AnimationCamera.hxx>
#include <AIS_AnimationObject.hxx>
#include <AIS_AnimationTimer.hxx>
#include <AIS_AttributeFilter.hxx>
#include <AIS_Axis.hxx>
#include <AIS_BadEdgeFilter.hxx>
#include <AIS_C0RegularityFilter.hxx>
#include <AIS_CameraFrustum.hxx>
#include <AIS_Chamf2dDimension.hxx>
#include <AIS_Chamf3dDimension.hxx>
#include <AIS_Circle.hxx>
#include <AIS_ClearMode.hxx>
#include <AIS_ColoredDrawer.hxx>
#include <AIS_ColoredShape.hxx>
#include <AIS_ColorScale.hxx>
#include <AIS_ConcentricRelation.hxx>
#include <AIS_ConnectedInteractive.hxx>
#include <AIS_ConnectStatus.hxx>
#include <AIS_DataMapIteratorOfDataMapofIntegerListOfinteractive.hxx>
#include <AIS_DataMapIteratorOfDataMapOfIOStatus.hxx>
#include <AIS_DataMapofIntegerListOfinteractive.hxx>
#include <AIS_DataMapOfIOStatus.hxx>
#include <AIS_DataMapOfShapeDrawer.hxx>
#include <AIS_DiameterDimension.hxx>
#include <AIS_Dimension.hxx>
#include <AIS_DimensionOwner.hxx>
#include <AIS_DimensionSelectionMode.hxx>
#include <AIS_DisplayMode.hxx>
#include <AIS_DisplaySpecialSymbol.hxx>
#include <AIS_DisplayStatus.hxx>
#include <AIS_DragAction.hxx>
#include <AIS_EllipseRadiusDimension.hxx>
#include <AIS_EqualDistanceRelation.hxx>
#include <AIS_EqualRadiusRelation.hxx>
#include <AIS_ExclusionFilter.hxx>
#include <AIS_FixRelation.hxx>
#include <AIS_GlobalStatus.hxx>
#include <AIS_GraphicTool.hxx>
#include <AIS_IdenticRelation.hxx>
#include <AIS_IndexedDataMapOfOwnerPrs.hxx>
#include <AIS_InteractiveContext.hxx>
#include <AIS_InteractiveObject.hxx>
#include <AIS_KindOfDimension.hxx>
#include <AIS_KindOfInteractive.hxx>
#include <AIS_KindOfRelation.hxx>
#include <AIS_KindOfSurface.hxx>
#include <AIS_KindOfUnit.hxx>
#include <AIS_LengthDimension.hxx>
#include <AIS_Line.hxx>
#include <AIS_ListIteratorOfListOfInteractive.hxx>
#include <AIS_ListOfInteractive.hxx>
#include <AIS_Manipulator.hxx>
#include <AIS_ManipulatorMode.hxx>
#include <AIS_ManipulatorOwner.hxx>
#include <AIS_MapIteratorOfMapOfInteractive.hxx>
#include <AIS_MapOfInteractive.hxx>
#include <AIS_MaxRadiusDimension.hxx>
#include <AIS_MediaPlayer.hxx>
#include <AIS_MidPointRelation.hxx>
#include <AIS_MinRadiusDimension.hxx>
#include <AIS_MouseGesture.hxx>
#include <AIS_MultipleConnectedInteractive.hxx>
#include <AIS_NavigationMode.hxx>
#include <AIS_NListOfEntityOwner.hxx>
#include <AIS_OffsetDimension.hxx>
#include <AIS_ParallelRelation.hxx>
#include <AIS_PerpendicularRelation.hxx>
#include <AIS_Plane.hxx>
#include <AIS_PlaneTrihedron.hxx>
#include <AIS_Point.hxx>
#include <AIS_PointCloud.hxx>
#include <AIS_RadiusDimension.hxx>
#include <AIS_Relation.hxx>
#include <AIS_RotationMode.hxx>
#include <AIS_RubberBand.hxx>
#include <AIS_Selection.hxx>
#include <AIS_SelectionModesConcurrency.hxx>
#include <AIS_SelectStatus.hxx>
#include <AIS_SequenceOfDimension.hxx>
#include <AIS_SequenceOfInteractive.hxx>
#include <AIS_Shape.hxx>
#include <AIS_SignatureFilter.hxx>
#include <AIS_StandardDatum.hxx>
#include <AIS_StatusOfDetection.hxx>
#include <AIS_StatusOfPick.hxx>
#include <AIS_SymmetricRelation.hxx>
#include <AIS_TangentRelation.hxx>
#include <AIS_TextLabel.hxx>
#include <AIS_TexturedShape.hxx>
#include <AIS_Triangulation.hxx>
#include <AIS_Trihedron.hxx>
#include <AIS_TrihedronOwner.hxx>
#include <AIS_TrihedronSelectionMode.hxx>
#include <AIS_TypeFilter.hxx>
#include <AIS_TypeOfAngle.hxx>
#include <AIS_TypeOfAngleArrowVisibility.hxx>
#include <AIS_TypeOfAttribute.hxx>
#include <AIS_TypeOfAxis.hxx>
#include <AIS_TypeOfDist.hxx>
#include <AIS_TypeOfIso.hxx>
#include <AIS_TypeOfPlane.hxx>
#include <AIS_ViewController.hxx>
#include <AIS_ViewCube.hxx>
#include <AIS_ViewInputBuffer.hxx>
#include <AIS_WalkDelta.hxx>

// template related includes
// ./opencascade/AIS_MouseGesture.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AIS_MapOfInteractive.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AIS_MapOfInteractive.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AIS_DataMapofIntegerListOfinteractive.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AIS_DataMapofIntegerListOfinteractive.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AIS_DataMapOfIOStatus.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AIS_NListOfEntityOwner.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AIS_ListOfInteractive.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AIS_ListOfInteractive.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AIS_SequenceOfInteractive.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AIS_SequenceOfDimension.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <Media_PlayerContext.hxx>
auto OptionsForAttach = [](){return AIS_Manipulator::OptionsForAttach();};

// Module definiiton
void register_AIS_enums(py::module &main_module) {


py::module m = main_module.def_submodule("AIS", R"#()#");

// user-defined inclusion per module in the body
py::class_<AIS_Manipulator::OptionsForAttach>(m,"AIS_Manipulator_OptionsForAttach");

// enums
    py::enum_<AIS_ConnectStatus>(m, "AIS_ConnectStatus",R"#(Gives the status of connection of an Interactive Object. This will be one of the following: - No connection - Connection - Transformation - Both connection and transformation This enumeration is used in AIS_ConnectedInteractive. Transform indicates that the Interactive Object reference geometry has changed location relative to the reference geometry.)#")
        .value("AIS_CS_None",AIS_ConnectStatus::AIS_CS_None)
        .value("AIS_CS_Connection",AIS_ConnectStatus::AIS_CS_Connection)
        .value("AIS_CS_Transform",AIS_ConnectStatus::AIS_CS_Transform)
        .value("AIS_CS_Both",AIS_ConnectStatus::AIS_CS_Both).export_values();
    py::enum_<AIS_DisplayMode>(m, "AIS_DisplayMode",R"#(Sets display modes other than neutral point ones, for interactive objects. The possibilities include: - wireframe, - shaded,)#")
        .value("AIS_WireFrame",AIS_DisplayMode::AIS_WireFrame)
        .value("AIS_Shaded",AIS_DisplayMode::AIS_Shaded).export_values();
    py::enum_<AIS_DisplaySpecialSymbol>(m, "AIS_DisplaySpecialSymbol",R"#(Specifies dimension special symbol display options)#")
        .value("AIS_DSS_No",AIS_DisplaySpecialSymbol::AIS_DSS_No)
        .value("AIS_DSS_Before",AIS_DisplaySpecialSymbol::AIS_DSS_Before)
        .value("AIS_DSS_After",AIS_DisplaySpecialSymbol::AIS_DSS_After).export_values();
    py::enum_<AIS_KindOfSurface>(m, "AIS_KindOfSurface",R"#(None)#")
        .value("AIS_KOS_Plane",AIS_KindOfSurface::AIS_KOS_Plane)
        .value("AIS_KOS_Cylinder",AIS_KindOfSurface::AIS_KOS_Cylinder)
        .value("AIS_KOS_Cone",AIS_KindOfSurface::AIS_KOS_Cone)
        .value("AIS_KOS_Sphere",AIS_KindOfSurface::AIS_KOS_Sphere)
        .value("AIS_KOS_Torus",AIS_KindOfSurface::AIS_KOS_Torus)
        .value("AIS_KOS_Revolution",AIS_KindOfSurface::AIS_KOS_Revolution)
        .value("AIS_KOS_Extrusion",AIS_KindOfSurface::AIS_KOS_Extrusion)
        .value("AIS_KOS_OtherSurface",AIS_KindOfSurface::AIS_KOS_OtherSurface).export_values();
    py::enum_<AIS_SelectionModesConcurrency>(m, "AIS_SelectionModesConcurrency",R"#(The mode specifying how multiple active Selection Modes should be treated during activation of new one.)#")
        .value("AIS_SelectionModesConcurrency_Single",AIS_SelectionModesConcurrency::AIS_SelectionModesConcurrency_Single)
        .value("AIS_SelectionModesConcurrency_GlobalOrLocal",AIS_SelectionModesConcurrency::AIS_SelectionModesConcurrency_GlobalOrLocal)
        .value("AIS_SelectionModesConcurrency_Multiple",AIS_SelectionModesConcurrency::AIS_SelectionModesConcurrency_Multiple).export_values();
    py::enum_<AIS_ManipulatorMode>(m, "AIS_ManipulatorMode",R"#(Mode to make definite kind of transformations with AIS_Manipulator object.)#")
        .value("AIS_MM_None",AIS_ManipulatorMode::AIS_MM_None)
        .value("AIS_MM_Translation",AIS_ManipulatorMode::AIS_MM_Translation)
        .value("AIS_MM_Rotation",AIS_ManipulatorMode::AIS_MM_Rotation)
        .value("AIS_MM_Scaling",AIS_ManipulatorMode::AIS_MM_Scaling)
        .value("AIS_MM_TranslationPlane",AIS_ManipulatorMode::AIS_MM_TranslationPlane).export_values();
    py::enum_<AIS_ViewSelectionTool>(m, "AIS_ViewSelectionTool",R"#(Selection mode)#")
        .value("AIS_ViewSelectionTool_Picking",AIS_ViewSelectionTool::AIS_ViewSelectionTool_Picking)
        .value("AIS_ViewSelectionTool_RubberBand",AIS_ViewSelectionTool::AIS_ViewSelectionTool_RubberBand)
        .value("AIS_ViewSelectionTool_Polygon",AIS_ViewSelectionTool::AIS_ViewSelectionTool_Polygon).export_values();
    py::enum_<AIS_ViewInputBufferType>(m, "AIS_ViewInputBufferType",R"#(Input buffer type.)#")
        .value("AIS_ViewInputBufferType_UI",AIS_ViewInputBufferType::AIS_ViewInputBufferType_UI)
        .value("AIS_ViewInputBufferType_GL",AIS_ViewInputBufferType::AIS_ViewInputBufferType_GL).export_values();
    py::enum_<AIS_ClearMode>(m, "AIS_ClearMode",R"#(Declares which entities in an opened local context are to be cleared of mode settings. Temporary graphic presentations such as those for sub-shapes, for example, are only created for the selection process. By means of these enumerations, they can be cleared from local context.)#")
        .value("AIS_CM_All",AIS_ClearMode::AIS_CM_All)
        .value("AIS_CM_Interactive",AIS_ClearMode::AIS_CM_Interactive)
        .value("AIS_CM_Filters",AIS_ClearMode::AIS_CM_Filters)
        .value("AIS_CM_StandardModes",AIS_ClearMode::AIS_CM_StandardModes)
        .value("AIS_CM_TemporaryShapePrs",AIS_ClearMode::AIS_CM_TemporaryShapePrs).export_values();
    py::enum_<AIS_TrihedronSelectionMode>(m, "AIS_TrihedronSelectionMode",R"#(Enumeration defining selection modes supported by AIS_Trihedron.)#")
        .value("AIS_TrihedronSelectionMode_EntireObject",AIS_TrihedronSelectionMode::AIS_TrihedronSelectionMode_EntireObject)
        .value("AIS_TrihedronSelectionMode_Origin",AIS_TrihedronSelectionMode::AIS_TrihedronSelectionMode_Origin)
        .value("AIS_TrihedronSelectionMode_Axes",AIS_TrihedronSelectionMode::AIS_TrihedronSelectionMode_Axes)
        .value("AIS_TrihedronSelectionMode_MainPlanes",AIS_TrihedronSelectionMode::AIS_TrihedronSelectionMode_MainPlanes).export_values();
    py::enum_<AIS_StatusOfDetection>(m, "AIS_StatusOfDetection",R"#(None)#")
        .value("AIS_SOD_Error",AIS_StatusOfDetection::AIS_SOD_Error)
        .value("AIS_SOD_Nothing",AIS_StatusOfDetection::AIS_SOD_Nothing)
        .value("AIS_SOD_AllBad",AIS_StatusOfDetection::AIS_SOD_AllBad)
        .value("AIS_SOD_Selected",AIS_StatusOfDetection::AIS_SOD_Selected)
        .value("AIS_SOD_OnlyOneDetected",AIS_StatusOfDetection::AIS_SOD_OnlyOneDetected)
        .value("AIS_SOD_OnlyOneGood",AIS_StatusOfDetection::AIS_SOD_OnlyOneGood)
        .value("AIS_SOD_SeveralGood",AIS_StatusOfDetection::AIS_SOD_SeveralGood).export_values();
    py::enum_<AIS_MouseGesture>(m, "AIS_MouseGesture",R"#(Mouse gesture - only one can be active at one moment.)#")
        .value("AIS_MouseGesture_NONE",AIS_MouseGesture::AIS_MouseGesture_NONE)
        .value("AIS_MouseGesture_SelectRectangle",AIS_MouseGesture::AIS_MouseGesture_SelectRectangle)
        .value("AIS_MouseGesture_SelectLasso",AIS_MouseGesture::AIS_MouseGesture_SelectLasso)
        .value("AIS_MouseGesture_Zoom",AIS_MouseGesture::AIS_MouseGesture_Zoom)
        .value("AIS_MouseGesture_Pan",AIS_MouseGesture::AIS_MouseGesture_Pan)
        .value("AIS_MouseGesture_RotateOrbit",AIS_MouseGesture::AIS_MouseGesture_RotateOrbit)
        .value("AIS_MouseGesture_RotateView",AIS_MouseGesture::AIS_MouseGesture_RotateView).export_values();
    py::enum_<AIS_KindOfDimension>(m, "AIS_KindOfDimension",R"#(Declares the kinds of dimensions needed in the display of Interactive Objects.)#")
        .value("AIS_KOD_NONE",AIS_KindOfDimension::AIS_KOD_NONE)
        .value("AIS_KOD_LENGTH",AIS_KindOfDimension::AIS_KOD_LENGTH)
        .value("AIS_KOD_PLANEANGLE",AIS_KindOfDimension::AIS_KOD_PLANEANGLE)
        .value("AIS_KOD_SOLIDANGLE",AIS_KindOfDimension::AIS_KOD_SOLIDANGLE)
        .value("AIS_KOD_AREA",AIS_KindOfDimension::AIS_KOD_AREA)
        .value("AIS_KOD_VOLUME",AIS_KindOfDimension::AIS_KOD_VOLUME)
        .value("AIS_KOD_MASS",AIS_KindOfDimension::AIS_KOD_MASS)
        .value("AIS_KOD_TIME",AIS_KindOfDimension::AIS_KOD_TIME)
        .value("AIS_KOD_RADIUS",AIS_KindOfDimension::AIS_KOD_RADIUS)
        .value("AIS_KOD_DIAMETER",AIS_KindOfDimension::AIS_KOD_DIAMETER)
        .value("AIS_KOD_CHAMF2D",AIS_KindOfDimension::AIS_KOD_CHAMF2D)
        .value("AIS_KOD_CHAMF3D",AIS_KindOfDimension::AIS_KOD_CHAMF3D)
        .value("AIS_KOD_OFFSET",AIS_KindOfDimension::AIS_KOD_OFFSET)
        .value("AIS_KOD_ELLIPSERADIUS",AIS_KindOfDimension::AIS_KOD_ELLIPSERADIUS).export_values();
    py::enum_<AIS_TypeOfIso>(m, "AIS_TypeOfIso",R"#(Declares the type of isoparameter displayed.)#")
        .value("AIS_TOI_IsoU",AIS_TypeOfIso::AIS_TOI_IsoU)
        .value("AIS_TOI_IsoV",AIS_TypeOfIso::AIS_TOI_IsoV)
        .value("AIS_TOI_Both",AIS_TypeOfIso::AIS_TOI_Both).export_values();
    py::enum_<AIS_TypeOfAxis>(m, "AIS_TypeOfAxis",R"#(Declares the type of axis.)#")
        .value("AIS_TOAX_Unknown",AIS_TypeOfAxis::AIS_TOAX_Unknown)
        .value("AIS_TOAX_XAxis",AIS_TypeOfAxis::AIS_TOAX_XAxis)
        .value("AIS_TOAX_YAxis",AIS_TypeOfAxis::AIS_TOAX_YAxis)
        .value("AIS_TOAX_ZAxis",AIS_TypeOfAxis::AIS_TOAX_ZAxis).export_values();
    py::enum_<AIS_DimensionSelectionMode>(m, "AIS_DimensionSelectionMode",R"#(Specifies dimension selection modes.)#")
        .value("AIS_DSM_All",AIS_DimensionSelectionMode::AIS_DSM_All)
        .value("AIS_DSM_Line",AIS_DimensionSelectionMode::AIS_DSM_Line)
        .value("AIS_DSM_Text",AIS_DimensionSelectionMode::AIS_DSM_Text).export_values();
    py::enum_<AIS_StatusOfPick>(m, "AIS_StatusOfPick",R"#(None)#")
        .value("AIS_SOP_Error",AIS_StatusOfPick::AIS_SOP_Error)
        .value("AIS_SOP_NothingSelected",AIS_StatusOfPick::AIS_SOP_NothingSelected)
        .value("AIS_SOP_Removed",AIS_StatusOfPick::AIS_SOP_Removed)
        .value("AIS_SOP_OneSelected",AIS_StatusOfPick::AIS_SOP_OneSelected)
        .value("AIS_SOP_SeveralSelected",AIS_StatusOfPick::AIS_SOP_SeveralSelected).export_values();
    py::enum_<AIS_DisplayStatus>(m, "AIS_DisplayStatus",R"#(To give the display status of an Interactive Object.)#")
        .value("AIS_DS_Displayed",AIS_DisplayStatus::AIS_DS_Displayed)
        .value("AIS_DS_Erased",AIS_DisplayStatus::AIS_DS_Erased)
        .value("AIS_DS_None",AIS_DisplayStatus::AIS_DS_None).export_values();
    py::enum_<AIS_RotationMode>(m, "AIS_RotationMode",R"#(Camera rotation mode.)#")
        .value("AIS_RotationMode_BndBoxActive",AIS_RotationMode::AIS_RotationMode_BndBoxActive)
        .value("AIS_RotationMode_PickLast",AIS_RotationMode::AIS_RotationMode_PickLast)
        .value("AIS_RotationMode_PickCenter",AIS_RotationMode::AIS_RotationMode_PickCenter)
        .value("AIS_RotationMode_CameraAt",AIS_RotationMode::AIS_RotationMode_CameraAt)
        .value("AIS_RotationMode_BndBoxScene",AIS_RotationMode::AIS_RotationMode_BndBoxScene).export_values();
    m.attr("AIS_RotationMode_LOWER") = py::cast(int(AIS_RotationMode_LOWER));
    m.attr("AIS_RotationMode_UPPER") = py::cast(int(AIS_RotationMode_UPPER));
    py::enum_<AIS_TypeOfDist>(m, "AIS_TypeOfDist",R"#(To declare the type of distance.)#")
        .value("AIS_TOD_Unknown",AIS_TypeOfDist::AIS_TOD_Unknown)
        .value("AIS_TOD_Horizontal",AIS_TypeOfDist::AIS_TOD_Horizontal)
        .value("AIS_TOD_Vertical",AIS_TypeOfDist::AIS_TOD_Vertical).export_values();
    py::enum_<AIS_TypeOfPlane>(m, "AIS_TypeOfPlane",R"#(Declares the type of plane.)#")
        .value("AIS_TOPL_Unknown",AIS_TypeOfPlane::AIS_TOPL_Unknown)
        .value("AIS_TOPL_XYPlane",AIS_TypeOfPlane::AIS_TOPL_XYPlane)
        .value("AIS_TOPL_XZPlane",AIS_TypeOfPlane::AIS_TOPL_XZPlane)
        .value("AIS_TOPL_YZPlane",AIS_TypeOfPlane::AIS_TOPL_YZPlane).export_values();
    py::enum_<AIS_TypeOfAngleArrowVisibility>(m, "AIS_TypeOfAngleArrowVisibility",R"#(Declares what arrows are visible on angle presentation)#")
        .value("AIS_TOAV_Both",AIS_TypeOfAngleArrowVisibility::AIS_TOAV_Both)
        .value("AIS_TOAV_First",AIS_TypeOfAngleArrowVisibility::AIS_TOAV_First)
        .value("AIS_TOAV_Second",AIS_TypeOfAngleArrowVisibility::AIS_TOAV_Second)
        .value("AIS_TOAV_None",AIS_TypeOfAngleArrowVisibility::AIS_TOAV_None).export_values();
    py::enum_<AIS_StandardDatum>(m, "AIS_StandardDatum",R"#(Declares the type of standard datum of an Interactive Object.)#")
        .value("AIS_SD_None",AIS_StandardDatum::AIS_SD_None)
        .value("AIS_SD_Point",AIS_StandardDatum::AIS_SD_Point)
        .value("AIS_SD_Axis",AIS_StandardDatum::AIS_SD_Axis)
        .value("AIS_SD_Trihedron",AIS_StandardDatum::AIS_SD_Trihedron)
        .value("AIS_SD_PlaneTrihedron",AIS_StandardDatum::AIS_SD_PlaneTrihedron)
        .value("AIS_SD_Line",AIS_StandardDatum::AIS_SD_Line)
        .value("AIS_SD_Circle",AIS_StandardDatum::AIS_SD_Circle)
        .value("AIS_SD_Plane",AIS_StandardDatum::AIS_SD_Plane).export_values();
    py::enum_<AIS_DragAction>(m, "AIS_DragAction",R"#(Dragging action.)#")
        .value("AIS_DragAction_Start",AIS_DragAction::AIS_DragAction_Start)
        .value("AIS_DragAction_Update",AIS_DragAction::AIS_DragAction_Update)
        .value("AIS_DragAction_Stop",AIS_DragAction::AIS_DragAction_Stop)
        .value("AIS_DragAction_Abort",AIS_DragAction::AIS_DragAction_Abort).export_values();
    py::enum_<AIS_KindOfInteractive>(m, "AIS_KindOfInteractive",R"#(Declares the type of Interactive Object. This is one of the following: - the Datum - the Object - the Relation - the Dimension - the None type. The Datum is the construction element. These include points, lines, axes and planes. The object brings together topological shapes. The Relation includes dimensions and constraints. The Dimension includes length, radius, diameter and angle dimensions. When the object is of an unknown type, the None type is declared.)#")
        .value("AIS_KOI_None",AIS_KindOfInteractive::AIS_KOI_None)
        .value("AIS_KOI_Datum",AIS_KindOfInteractive::AIS_KOI_Datum)
        .value("AIS_KOI_Shape",AIS_KindOfInteractive::AIS_KOI_Shape)
        .value("AIS_KOI_Object",AIS_KindOfInteractive::AIS_KOI_Object)
        .value("AIS_KOI_Relation",AIS_KindOfInteractive::AIS_KOI_Relation)
        .value("AIS_KOI_Dimension",AIS_KindOfInteractive::AIS_KOI_Dimension).export_values();
    py::enum_<AIS_TypeOfAttribute>(m, "AIS_TypeOfAttribute",R"#(None)#")
        .value("AIS_TOA_Line",AIS_TypeOfAttribute::AIS_TOA_Line)
        .value("AIS_TOA_Dimension",AIS_TypeOfAttribute::AIS_TOA_Dimension)
        .value("AIS_TOA_Wire",AIS_TypeOfAttribute::AIS_TOA_Wire)
        .value("AIS_TOA_Plane",AIS_TypeOfAttribute::AIS_TOA_Plane)
        .value("AIS_TOA_Vector",AIS_TypeOfAttribute::AIS_TOA_Vector)
        .value("AIS_TOA_UIso",AIS_TypeOfAttribute::AIS_TOA_UIso)
        .value("AIS_TOA_VIso",AIS_TypeOfAttribute::AIS_TOA_VIso)
        .value("AIS_TOA_Free",AIS_TypeOfAttribute::AIS_TOA_Free)
        .value("AIS_TOA_UnFree",AIS_TypeOfAttribute::AIS_TOA_UnFree)
        .value("AIS_TOA_Section",AIS_TypeOfAttribute::AIS_TOA_Section)
        .value("AIS_TOA_Hidden",AIS_TypeOfAttribute::AIS_TOA_Hidden)
        .value("AIS_TOA_Seen",AIS_TypeOfAttribute::AIS_TOA_Seen)
        .value("AIS_TOA_FaceBoundary",AIS_TypeOfAttribute::AIS_TOA_FaceBoundary)
        .value("AIS_TOA_FirstAxis",AIS_TypeOfAttribute::AIS_TOA_FirstAxis)
        .value("AIS_TOA_SecondAxis",AIS_TypeOfAttribute::AIS_TOA_SecondAxis)
        .value("AIS_TOA_ThirdAxis",AIS_TypeOfAttribute::AIS_TOA_ThirdAxis).export_values();
    py::enum_<AIS_NavigationMode>(m, "AIS_NavigationMode",R"#(Camera navigation mode.)#")
        .value("AIS_NavigationMode_Orbit",AIS_NavigationMode::AIS_NavigationMode_Orbit)
        .value("AIS_NavigationMode_FirstPersonFlight",AIS_NavigationMode::AIS_NavigationMode_FirstPersonFlight)
        .value("AIS_NavigationMode_FirstPersonWalk",AIS_NavigationMode::AIS_NavigationMode_FirstPersonWalk).export_values();
    m.attr("AIS_NavigationMode_LOWER") = py::cast(int(AIS_NavigationMode_LOWER));
    m.attr("AIS_NavigationMode_UPPER") = py::cast(int(AIS_NavigationMode_UPPER));
    py::enum_<AIS_WalkTranslation>(m, "AIS_WalkTranslation",R"#(Walking translation components.)#")
        .value("AIS_WalkTranslation_Forward",AIS_WalkTranslation::AIS_WalkTranslation_Forward)
        .value("AIS_WalkTranslation_Side",AIS_WalkTranslation::AIS_WalkTranslation_Side)
        .value("AIS_WalkTranslation_Up",AIS_WalkTranslation::AIS_WalkTranslation_Up).export_values();
    py::enum_<AIS_WalkRotation>(m, "AIS_WalkRotation",R"#(Walking rotation components.)#")
        .value("AIS_WalkRotation_Yaw",AIS_WalkRotation::AIS_WalkRotation_Yaw)
        .value("AIS_WalkRotation_Pitch",AIS_WalkRotation::AIS_WalkRotation_Pitch)
        .value("AIS_WalkRotation_Roll",AIS_WalkRotation::AIS_WalkRotation_Roll).export_values();
    py::enum_<AIS_TypeOfAngle>(m, "AIS_TypeOfAngle",R"#(Declares the type of angle.)#")
        .value("AIS_TOA_Interior",AIS_TypeOfAngle::AIS_TOA_Interior)
        .value("AIS_TOA_Exterior",AIS_TypeOfAngle::AIS_TOA_Exterior).export_values();
    py::enum_<AIS_KindOfUnit>(m, "AIS_KindOfUnit",R"#(Declares the type of Interactive Object unit.)#")
        .value("AIS_TOU_LENGTH",AIS_KindOfUnit::AIS_TOU_LENGTH)
        .value("AIS_TOU_SURFACE",AIS_KindOfUnit::AIS_TOU_SURFACE)
        .value("AIS_TOU_VOLUME",AIS_KindOfUnit::AIS_TOU_VOLUME)
        .value("AIS_TOU_PLANE_ANGLE",AIS_KindOfUnit::AIS_TOU_PLANE_ANGLE)
        .value("AIS_TOU_SOLID_ANGLE",AIS_KindOfUnit::AIS_TOU_SOLID_ANGLE)
        .value("AIS_TOU_MASS",AIS_KindOfUnit::AIS_TOU_MASS)
        .value("AIS_TOU_FORCE",AIS_KindOfUnit::AIS_TOU_FORCE)
        .value("AIS_TOU_TIME",AIS_KindOfUnit::AIS_TOU_TIME).export_values();
    py::enum_<AIS_KindOfRelation>(m, "AIS_KindOfRelation",R"#(None)#")
        .value("AIS_KOR_NONE",AIS_KindOfRelation::AIS_KOR_NONE)
        .value("AIS_KOR_CONCENTRIC",AIS_KindOfRelation::AIS_KOR_CONCENTRIC)
        .value("AIS_KOR_EQUALDISTANCE",AIS_KindOfRelation::AIS_KOR_EQUALDISTANCE)
        .value("AIS_KOR_EQUALRADIUS",AIS_KindOfRelation::AIS_KOR_EQUALRADIUS)
        .value("AIS_KOR_FIX",AIS_KindOfRelation::AIS_KOR_FIX)
        .value("AIS_KOR_IDENTIC",AIS_KindOfRelation::AIS_KOR_IDENTIC)
        .value("AIS_KOR_OFFSET",AIS_KindOfRelation::AIS_KOR_OFFSET)
        .value("AIS_KOR_PARALLEL",AIS_KindOfRelation::AIS_KOR_PARALLEL)
        .value("AIS_KOR_PERPENDICULAR",AIS_KindOfRelation::AIS_KOR_PERPENDICULAR)
        .value("AIS_KOR_TANGENT",AIS_KindOfRelation::AIS_KOR_TANGENT)
        .value("AIS_KOR_SYMMETRIC",AIS_KindOfRelation::AIS_KOR_SYMMETRIC).export_values();
    py::enum_<AIS_SelectStatus>(m, "AIS_SelectStatus",R"#(None)#")
        .value("AIS_SS_Added",AIS_SelectStatus::AIS_SS_Added)
        .value("AIS_SS_Removed",AIS_SelectStatus::AIS_SS_Removed)
        .value("AIS_SS_NotDone",AIS_SelectStatus::AIS_SS_NotDone).export_values();

//Python trampoline classes
    class Py_AIS_InteractiveObject : public AIS_InteractiveObject{
    public:
        using AIS_InteractiveObject::AIS_InteractiveObject;


        // public pure virtual

        void ComputeSelection(const opencascade::handle<SelectMgr_Selection> & theSelection,const Standard_Integer theMode) override { PYBIND11_OVERLOAD_PURE(void,SelectMgr_SelectableObject,ComputeSelection,theSelection,theMode) };

        // protected pure virtual

        void Compute(const opencascade::handle<PrsMgr_PresentationManager> & thePrsMgr,const opencascade::handle<Prs3d_Presentation> & thePrs,const Standard_Integer theMode) override { PYBIND11_OVERLOAD_PURE(void,PrsMgr_PresentableObject,Compute,thePrsMgr,thePrs,theMode) };

        // private pure virtual

    };
    class Py_AIS_Dimension : public AIS_Dimension{
    public:
        using AIS_Dimension::AIS_Dimension;


        // public pure virtual

        void ComputeSelection(const opencascade::handle<SelectMgr_Selection> & theSelection,const Standard_Integer theMode) override { PYBIND11_OVERLOAD_PURE(void,SelectMgr_SelectableObject,ComputeSelection,theSelection,theMode) };

        // protected pure virtual

        void Compute(const opencascade::handle<PrsMgr_PresentationManager> & thePrsMgr,const opencascade::handle<Prs3d_Presentation> & thePrs,const Standard_Integer theMode) override { PYBIND11_OVERLOAD_PURE(void,PrsMgr_PresentableObject,Compute,thePrsMgr,thePrs,theMode) };

        // private pure virtual

    };
    class Py_AIS_Relation : public AIS_Relation{
    public:
        using AIS_Relation::AIS_Relation;


        // public pure virtual

        void ComputeSelection(const opencascade::handle<SelectMgr_Selection> & theSelection,const Standard_Integer theMode) override { PYBIND11_OVERLOAD_PURE(void,SelectMgr_SelectableObject,ComputeSelection,theSelection,theMode) };

        // protected pure virtual

        void Compute(const opencascade::handle<PrsMgr_PresentationManager> & thePrsMgr,const opencascade::handle<Prs3d_Presentation> & thePrs,const Standard_Integer theMode) override { PYBIND11_OVERLOAD_PURE(void,PrsMgr_PresentableObject,Compute,thePrsMgr,thePrs,theMode) };

        // private pure virtual

    };
    class Py_AIS_EllipseRadiusDimension : public AIS_EllipseRadiusDimension{
    public:
        using AIS_EllipseRadiusDimension::AIS_EllipseRadiusDimension;


        // public pure virtual

        void ComputeSelection(const opencascade::handle<SelectMgr_Selection> & theSelection,const Standard_Integer theMode) override { PYBIND11_OVERLOAD_PURE(void,SelectMgr_SelectableObject,ComputeSelection,theSelection,theMode) };

        // protected pure virtual

        void Compute(const opencascade::handle<PrsMgr_PresentationManager> & thePrsMgr,const opencascade::handle<Prs3d_Presentation> & thePrs,const Standard_Integer theMode) override { PYBIND11_OVERLOAD_PURE(void,PrsMgr_PresentableObject,Compute,thePrsMgr,thePrs,theMode) };

        // private pure virtual

    };

// pre-register typdefs
    preregister_template_NCollection_DataMap<unsigned int, AIS_MouseGesture>(m,"AIS_MouseGestureMap");
    preregister_template_NCollection_Map<opencascade::handle<AIS_InteractiveObject>, TColStd_MapTransientHasher>(m,"AIS_MapOfInteractive");
    preregister_template_NCollection_DataMap<Standard_Integer, AIS_ListOfInteractive, TColStd_MapIntegerHasher>(m,"AIS_DataMapofIntegerListOfinteractive");
    preregister_template_NCollection_List<opencascade::handle<SelectMgr_EntityOwner> >(m,"AIS_NListOfEntityOwner");
    preregister_template_NCollection_List<opencascade::handle<AIS_InteractiveObject> >(m,"AIS_ListOfInteractive");
    preregister_template_NCollection_Sequence<opencascade::handle<AIS_InteractiveObject> >(m,"AIS_SequenceOfInteractive");
    preregister_template_NCollection_Sequence<opencascade::handle<AIS_Relation> >(m,"AIS_SequenceOfDimension");

// classes forward declarations only
    py::class_<AIS , shared_ptr<AIS> >(m,"AIS",R"#(Application Interactive Services provide the means to create links between an application GUI viewer and the packages which are used to manage selection and presentation. The tools AIS defined in order to do this include different sorts of entities: both the selectable viewable objects themselves and the context and attribute managers to define their selection and display. To orient the user as he works in a modeling environment, views and selections must be comprehensible. There must be several different sorts of selectable and viewable object defined. These must also be interactive, that is, connecting graphic representation and the underlying reference geometry. These entities are called Interactive Objects, and are divided into four types: - the Datum - the Relation - the Object - None. The Datum groups together the construction elements such as lines, circles, points, trihedra, plane trihedra, planes and axes. The Relation is made up of constraints on one or more interactive shapes and the corresponding reference geometry. For example, you might want to constrain two edges in a parallel relation. This contraint is considered as an object in its own right, and is shown as a sensitive primitive. This takes the graphic form of a perpendicular arrow marked with the || symbol and lying between the two edges. The Object type includes topological shapes, and connections between shapes. None, in order not to eliminate the object, tells the application to look further until it finds an object definition in its generation which is accepted. Inside these categories, you have the possibility of an additional characterization by means of a signature. The signature provides an index to the further characterization. By default, the Interactive Object has a None type and a signature of 0 (equivalent to None.) If you want to give a particular type and signature to your interactive object, you must redefine the two virtual methods: Type and Signature. In the C++ inheritance structure of the package, each class representing a specific Interactive Object inherits AIS_InteractiveObject. Among these inheriting classes, AIS_Relation functions as the abstract mother class for tinheriting classes defining display of specific relational constraints and types of dimension. Some of these include: - display of constraints based on relations of symmetry, tangency, parallelism and concentricity - display of dimensions for angles, offsets, diameters, radii and chamfers. No viewer can show everything at once with any coherence or clarity. Views must be managed carefully both sequentially and at any given instant. Another function of the view is that of a context to carry out design in. The design changes are applied to the objects in the view and then extended to the underlying reference geometry by a solver. To make sense of this complicated visual data, several display and selection tools are required. To facilitate management, each object and each construction element has a selection priority. There are also means to modify the default priority. To define an environment of dynamic detection, you can use standard filter classes or create your own. A filter questions the owner of the sensitive primitive to determine if it has the the desired qualities. If it answers positively, it is kept. If not, it is rejected. The standard filters supplied in AIS include: - AIS_AttributeFilter - AIS_SignatureFilter - AIS_TypeFilter. A set of functions allows you to choose the interactive objects which you want to act on, the selection modes which you want to activate. An interactive object can have a certain number of graphic attributes which are specific to it, such as visualization mode, color, and material. By the same token, the interactive context has a set of graphic attributes, the Drawer which is valid by default for the objects it controls. When an interactive object is visualized, the required graphic attributes are first taken from the object's own Drawer if one exists, or from the context drawer for the others.)#");
    py::class_<AIS_Animation ,opencascade::handle<AIS_Animation> , Standard_Transient>(m,"AIS_Animation",R"#(Class represents a basic animation class. AIS_Animation can be used as:Class represents a basic animation class. AIS_Animation can be used as:)#");
    py::class_<AIS_AnimationProgress , shared_ptr<AIS_AnimationProgress> >(m,"AIS_AnimationProgress",R"#(Structure defining current animation progress.)#");
    py::class_<AIS_AttributeFilter ,opencascade::handle<AIS_AttributeFilter> , SelectMgr_Filter>(m,"AIS_AttributeFilter",R"#(Selects Interactive Objects, which have the desired width or color. The filter questions each Interactive Object in local context to determine whether it has an non-null owner, and if so, whether it has the required color and width attributes. If the object returns true in each case, it is kept. If not, it is rejected. This filter is used only in an open local context. In the Collector viewer, you can only locate Interactive Objects, which answer positively to the filters, which are in position when a local context is open.Selects Interactive Objects, which have the desired width or color. The filter questions each Interactive Object in local context to determine whether it has an non-null owner, and if so, whether it has the required color and width attributes. If the object returns true in each case, it is kept. If not, it is rejected. This filter is used only in an open local context. In the Collector viewer, you can only locate Interactive Objects, which answer positively to the filters, which are in position when a local context is open.Selects Interactive Objects, which have the desired width or color. The filter questions each Interactive Object in local context to determine whether it has an non-null owner, and if so, whether it has the required color and width attributes. If the object returns true in each case, it is kept. If not, it is rejected. This filter is used only in an open local context. In the Collector viewer, you can only locate Interactive Objects, which answer positively to the filters, which are in position when a local context is open.)#");
    py::class_<AIS_BadEdgeFilter ,opencascade::handle<AIS_BadEdgeFilter> , SelectMgr_Filter>(m,"AIS_BadEdgeFilter",R"#(A ClassA ClassA Class)#");
    py::class_<AIS_C0RegularityFilter ,opencascade::handle<AIS_C0RegularityFilter> , SelectMgr_Filter>(m,"AIS_C0RegularityFilter",R"#()#");
    py::class_<AIS_ColoredDrawer ,opencascade::handle<AIS_ColoredDrawer> , Prs3d_Drawer>(m,"AIS_ColoredDrawer",R"#(Customizable properties.Customizable properties.)#");
    py::class_<AIS_DimensionOwner ,opencascade::handle<AIS_DimensionOwner> , SelectMgr_EntityOwner>(m,"AIS_DimensionOwner",R"#(The owner is the entity which makes it possible to link the sensitive primitives and the reference shapes that you want to detect. It stocks the various pieces of information which make it possible to find objects. An owner has a priority which you can modulate, so as to make one entity more selectable than another. You might want to make edges more selectable than faces, for example. In that case, you could attribute sa higher priority to the one compared to the other. An edge, could have priority 5, for example, and a face, priority 4. The default priority is 5.The owner is the entity which makes it possible to link the sensitive primitives and the reference shapes that you want to detect. It stocks the various pieces of information which make it possible to find objects. An owner has a priority which you can modulate, so as to make one entity more selectable than another. You might want to make edges more selectable than faces, for example. In that case, you could attribute sa higher priority to the one compared to the other. An edge, could have priority 5, for example, and a face, priority 4. The default priority is 5.)#");
    py::class_<AIS_ExclusionFilter ,opencascade::handle<AIS_ExclusionFilter> , SelectMgr_Filter>(m,"AIS_ExclusionFilter",R"#(A framework to reject or to accept only objects of given types and/or signatures. Objects are stored, and the stored objects - along with the flag settings - are used to define the filter. Objects to be filtered are compared with the stored objects added to the filter, and are accepted or rejected according to the exclusion flag setting. - Exclusion flag on - the function IsOk answers true for all objects, except those of the types and signatures stored in the filter framework - Exclusion flag off - the funciton IsOk answers true for all objects which have the same type and signature as the stored ones.A framework to reject or to accept only objects of given types and/or signatures. Objects are stored, and the stored objects - along with the flag settings - are used to define the filter. Objects to be filtered are compared with the stored objects added to the filter, and are accepted or rejected according to the exclusion flag setting. - Exclusion flag on - the function IsOk answers true for all objects, except those of the types and signatures stored in the filter framework - Exclusion flag off - the funciton IsOk answers true for all objects which have the same type and signature as the stored ones.A framework to reject or to accept only objects of given types and/or signatures. Objects are stored, and the stored objects - along with the flag settings - are used to define the filter. Objects to be filtered are compared with the stored objects added to the filter, and are accepted or rejected according to the exclusion flag setting. - Exclusion flag on - the function IsOk answers true for all objects, except those of the types and signatures stored in the filter framework - Exclusion flag off - the funciton IsOk answers true for all objects which have the same type and signature as the stored ones.)#");
    py::class_<AIS_GlobalStatus ,opencascade::handle<AIS_GlobalStatus> , Standard_Transient>(m,"AIS_GlobalStatus",R"#(Stores information about objects in graphic context: - Status Of Display : in the main viewer hidden in the main viewer - Displayed Modes - Active Selection Modes - is the Interactive Object Current ? - Layer IndexStores information about objects in graphic context: - Status Of Display : in the main viewer hidden in the main viewer - Displayed Modes - Active Selection Modes - is the Interactive Object Current ? - Layer Index)#");
    py::class_<AIS_GraphicTool , shared_ptr<AIS_GraphicTool> >(m,"AIS_GraphicTool",R"#(None)#");
    py::class_<AIS_InteractiveContext ,opencascade::handle<AIS_InteractiveContext> , Standard_Transient>(m,"AIS_InteractiveContext",R"#(The Interactive Context allows you to manage graphic behavior and selection of Interactive Objects in one or more viewers. Class methods make this highly transparent. It is essential to remember that an Interactive Object which is already known by the Interactive Context must be modified using Context methods. You can only directly call the methods available for an Interactive Object if it has not been loaded into an Interactive Context.The Interactive Context allows you to manage graphic behavior and selection of Interactive Objects in one or more viewers. Class methods make this highly transparent. It is essential to remember that an Interactive Object which is already known by the Interactive Context must be modified using Context methods. You can only directly call the methods available for an Interactive Object if it has not been loaded into an Interactive Context.)#");
    py::class_<AIS_InteractiveObject ,opencascade::handle<AIS_InteractiveObject>,Py_AIS_InteractiveObject , SelectMgr_SelectableObject>(m,"AIS_InteractiveObject",R"#(Defines a class of objects with display and selection services. Entities which are visualized and selected are Interactive Objects. Specific attributes of entities such as arrow aspect for dimensions must be loaded in a Prs3d_Drawer.Defines a class of objects with display and selection services. Entities which are visualized and selected are Interactive Objects. Specific attributes of entities such as arrow aspect for dimensions must be loaded in a Prs3d_Drawer.)#");
    py::class_<AIS_ManipulatorObjectSequence ,opencascade::handle<AIS_ManipulatorObjectSequence> , Standard_Transient>(m,"AIS_ManipulatorObjectSequence",R"#()#");
    py::class_<AIS_ManipulatorOwner ,opencascade::handle<AIS_ManipulatorOwner> , SelectMgr_EntityOwner>(m,"AIS_ManipulatorOwner",R"#(Entity owner for selection management of AIS_Manipulator object.Entity owner for selection management of AIS_Manipulator object.)#");
    py::class_<AIS_PointCloudOwner ,opencascade::handle<AIS_PointCloudOwner> , SelectMgr_EntityOwner>(m,"AIS_PointCloudOwner",R"#(Custom owner for highlighting selected points.)#");
    py::class_<AIS_Selection ,opencascade::handle<AIS_Selection> , Standard_Transient>(m,"AIS_Selection",R"#(Class holding the list of selected owners.Class holding the list of selected owners.)#");
    py::class_<AIS_TrihedronOwner ,opencascade::handle<AIS_TrihedronOwner> , SelectMgr_EntityOwner>(m,"AIS_TrihedronOwner",R"#(Entity owner for selection management of AIS_Trihedron object.Entity owner for selection management of AIS_Trihedron object.)#");
    py::class_<AIS_TypeFilter ,opencascade::handle<AIS_TypeFilter> , SelectMgr_Filter>(m,"AIS_TypeFilter",R"#(Selects Interactive Objects through their types. The filter questions each Interactive Object in local context to determine whether it has an non-null owner, and if so, whether it is of the desired type. If the object returns true in each case, it is kept. If not, it is rejected. By default, the interactive object has a None type and a signature of 0. A filter for type specifies a choice of type out of a range at any level enumerated for type or kind. The choice could be for kind of interactive object, of dimension, of unit, or type of axis, plane or attribute. If you want to give a particular type and signature to your Interactive Object, you must redefine two virtual methods: Type and Signature. This filter is used in both Neutral Point and open local contexts. In the Collector viewer, you can only locate Interactive Objects which answer positively to the positioned filters when a local context is open. Warning When you close a local context, all temporary interactive objects are deleted, all selection modes concerning the context are cancelled, and all content filters are emptied.Selects Interactive Objects through their types. The filter questions each Interactive Object in local context to determine whether it has an non-null owner, and if so, whether it is of the desired type. If the object returns true in each case, it is kept. If not, it is rejected. By default, the interactive object has a None type and a signature of 0. A filter for type specifies a choice of type out of a range at any level enumerated for type or kind. The choice could be for kind of interactive object, of dimension, of unit, or type of axis, plane or attribute. If you want to give a particular type and signature to your Interactive Object, you must redefine two virtual methods: Type and Signature. This filter is used in both Neutral Point and open local contexts. In the Collector viewer, you can only locate Interactive Objects which answer positively to the positioned filters when a local context is open. Warning When you close a local context, all temporary interactive objects are deleted, all selection modes concerning the context are cancelled, and all content filters are emptied.Selects Interactive Objects through their types. The filter questions each Interactive Object in local context to determine whether it has an non-null owner, and if so, whether it is of the desired type. If the object returns true in each case, it is kept. If not, it is rejected. By default, the interactive object has a None type and a signature of 0. A filter for type specifies a choice of type out of a range at any level enumerated for type or kind. The choice could be for kind of interactive object, of dimension, of unit, or type of axis, plane or attribute. If you want to give a particular type and signature to your Interactive Object, you must redefine two virtual methods: Type and Signature. This filter is used in both Neutral Point and open local contexts. In the Collector viewer, you can only locate Interactive Objects which answer positively to the positioned filters when a local context is open. Warning When you close a local context, all temporary interactive objects are deleted, all selection modes concerning the context are cancelled, and all content filters are emptied.)#");
    py::class_<AIS_ViewController , shared_ptr<AIS_ViewController> >(m,"AIS_ViewController",R"#(Auxiliary structure for handling viewer events between GUI and Rendering threads.)#");
    py::class_<AIS_ViewCubeOwner ,opencascade::handle<AIS_ViewCubeOwner> , SelectMgr_EntityOwner>(m,"AIS_ViewCubeOwner",R"#(Redefined entity owner that is highlighted when owner is detected, even if Interactive Context highlighted on last detection procedure.Redefined entity owner that is highlighted when owner is detected, even if Interactive Context highlighted on last detection procedure.)#");
    py::class_<AIS_ViewInputBuffer , shared_ptr<AIS_ViewInputBuffer> >(m,"AIS_ViewInputBuffer",R"#(Auxiliary structure defining viewer events)#");
    py::class_<AIS_WalkDelta , shared_ptr<AIS_WalkDelta> >(m,"AIS_WalkDelta",R"#(Walking values.)#");
    py::class_<AIS_WalkPart , shared_ptr<AIS_WalkPart> >(m,"AIS_WalkPart",R"#(Walking value.)#");
    py::class_<AIS_AnimationCamera ,opencascade::handle<AIS_AnimationCamera> , AIS_Animation>(m,"AIS_AnimationCamera",R"#(Camera animation.Camera animation.)#");
    py::class_<AIS_AnimationObject ,opencascade::handle<AIS_AnimationObject> , AIS_Animation>(m,"AIS_AnimationObject",R"#(Animation defining object transformation.Animation defining object transformation.)#");
    py::class_<AIS_Axis ,opencascade::handle<AIS_Axis> , AIS_InteractiveObject>(m,"AIS_Axis",R"#(Locates the x, y and z axes in an Interactive Object. These are used to orient it correctly in presentations from different viewpoints, or to construct a revolved shape, for example, from one of the axes. Conversely, an axis can be created to build a revolved shape and then situated relative to one of the axes of the view.Locates the x, y and z axes in an Interactive Object. These are used to orient it correctly in presentations from different viewpoints, or to construct a revolved shape, for example, from one of the axes. Conversely, an axis can be created to build a revolved shape and then situated relative to one of the axes of the view.)#");
    py::class_<AIS_CameraFrustum ,opencascade::handle<AIS_CameraFrustum> , AIS_InteractiveObject>(m,"AIS_CameraFrustum",R"#(Presentation for drawing camera frustum. Default configuration is built with filling and some transparency.)#");
    py::class_<AIS_Circle ,opencascade::handle<AIS_Circle> , AIS_InteractiveObject>(m,"AIS_Circle",R"#(Constructs circle datums to be used in construction of composite shapes.Constructs circle datums to be used in construction of composite shapes.)#");
    py::class_<AIS_ColorScale ,opencascade::handle<AIS_ColorScale> , AIS_InteractiveObject>(m,"AIS_ColorScale",R"#(Class for drawing a custom color scale.Class for drawing a custom color scale.Class for drawing a custom color scale.)#");
    py::class_<AIS_ConnectedInteractive ,opencascade::handle<AIS_ConnectedInteractive> , AIS_InteractiveObject>(m,"AIS_ConnectedInteractive",R"#(Creates an arbitrary located instance of another Interactive Object, which serves as a reference. This allows you to use the Connected Interactive Object without having to recalculate presentation, selection or graphic structure. These are deduced from your reference object. The relation between the connected interactive object and its source is generally one of geometric transformation. AIS_ConnectedInteractive class supports selection mode 0 for any InteractiveObject and all standard modes if its reference based on AIS_Shape. Descendants may redefine ComputeSelection() though. Also ConnectedInteractive will handle HLR if its reference based on AIS_Shape.Creates an arbitrary located instance of another Interactive Object, which serves as a reference. This allows you to use the Connected Interactive Object without having to recalculate presentation, selection or graphic structure. These are deduced from your reference object. The relation between the connected interactive object and its source is generally one of geometric transformation. AIS_ConnectedInteractive class supports selection mode 0 for any InteractiveObject and all standard modes if its reference based on AIS_Shape. Descendants may redefine ComputeSelection() though. Also ConnectedInteractive will handle HLR if its reference based on AIS_Shape.)#");
    py::class_<AIS_Dimension ,opencascade::handle<AIS_Dimension>,Py_AIS_Dimension , AIS_InteractiveObject>(m,"AIS_Dimension",R"#(AIS_Dimension is a base class for 2D presentations of linear (length, diameter, radius) and angular dimensions.AIS_Dimension is a base class for 2D presentations of linear (length, diameter, radius) and angular dimensions.AIS_Dimension is a base class for 2D presentations of linear (length, diameter, radius) and angular dimensions.)#");
    py::class_<AIS_Line ,opencascade::handle<AIS_Line> , AIS_InteractiveObject>(m,"AIS_Line",R"#(Constructs line datums to be used in construction of composite shapes.Constructs line datums to be used in construction of composite shapes.)#");
    py::class_<AIS_Manipulator ,opencascade::handle<AIS_Manipulator> , AIS_InteractiveObject>(m,"AIS_Manipulator",R"#(Interactive object class to manipulate local transformation of another interactive object or a group of objects via mouse. It manages three types of manipulations in 3D space: - translation through axis - scaling within axis - rotation around axis To enable one of this modes, selection mode (from 1 to 3) is to be activated. There are three orthogonal transformation axes defined by position property of the manipulator. Particular transformation mode can be disabled for each of the axes or all of them. Furthermore each of the axes can be hidden or made visible. The following steps demonstrate how to attach, configure and use manipulator for an interactive object: Step 1. Create manipulator object and adjust it appearance: Note that you can enable only one manipulation mode but have all visual parts displayed. This code allows you to view manipulator and select its manipulation parts. Note that manipulator activates mode on part selection. If this mode is activated, no selection will be performed for manipulator. It can be activated with highlighting. To enable this: Step 2. To perform transformation of object use next code in your event processing chain: Step 3. To deactivate current manipulation mode use: Step 4. To detach manipulator from object use: The last method erases manipulator object.Interactive object class to manipulate local transformation of another interactive object or a group of objects via mouse. It manages three types of manipulations in 3D space: - translation through axis - scaling within axis - rotation around axis To enable one of this modes, selection mode (from 1 to 3) is to be activated. There are three orthogonal transformation axes defined by position property of the manipulator. Particular transformation mode can be disabled for each of the axes or all of them. Furthermore each of the axes can be hidden or made visible. The following steps demonstrate how to attach, configure and use manipulator for an interactive object: Step 1. Create manipulator object and adjust it appearance: Note that you can enable only one manipulation mode but have all visual parts displayed. This code allows you to view manipulator and select its manipulation parts. Note that manipulator activates mode on part selection. If this mode is activated, no selection will be performed for manipulator. It can be activated with highlighting. To enable this: Step 2. To perform transformation of object use next code in your event processing chain: Step 3. To deactivate current manipulation mode use: Step 4. To detach manipulator from object use: The last method erases manipulator object.)#");
    py::class_<AIS_MediaPlayer ,opencascade::handle<AIS_MediaPlayer> , AIS_InteractiveObject>(m,"AIS_MediaPlayer",R"#(Presentation for video playback.)#");
    py::class_<AIS_MultipleConnectedInteractive ,opencascade::handle<AIS_MultipleConnectedInteractive> , AIS_InteractiveObject>(m,"AIS_MultipleConnectedInteractive",R"#(Defines an Interactive Object by gathering together several object presentations. This is done through a list of interactive objects. These can also be Connected objects. That way memory-costly calculations of presentation are avoided.Defines an Interactive Object by gathering together several object presentations. This is done through a list of interactive objects. These can also be Connected objects. That way memory-costly calculations of presentation are avoided.)#");
    py::class_<AIS_Plane ,opencascade::handle<AIS_Plane> , AIS_InteractiveObject>(m,"AIS_Plane",R"#(Constructs plane datums to be used in construction of composite shapes.Constructs plane datums to be used in construction of composite shapes.)#");
    py::class_<AIS_PlaneTrihedron ,opencascade::handle<AIS_PlaneTrihedron> , AIS_InteractiveObject>(m,"AIS_PlaneTrihedron",R"#(To construct a selectable 2d axis system in a 3d drawing. This can be placed anywhere in the 3d system, and provides a coordinate system for drawing curves and shapes in a plane. There are 3 selection modes: - mode 0 selection of the whole plane "trihedron" - mode 1 selection of the origin of the plane "trihedron" - mode 2 selection of the axes. Warning For the presentation of planes and trihedra, the millimetre is default unit of length, and 100 the default value for the representation of the axes. If you modify these dimensions, you must temporarily recover the Drawer object. From inside it, take the Aspects in which the values for length are stocked, for example, PlaneAspect for planes and LineAspect for trihedra. Change these values and recalculate the presentation.To construct a selectable 2d axis system in a 3d drawing. This can be placed anywhere in the 3d system, and provides a coordinate system for drawing curves and shapes in a plane. There are 3 selection modes: - mode 0 selection of the whole plane "trihedron" - mode 1 selection of the origin of the plane "trihedron" - mode 2 selection of the axes. Warning For the presentation of planes and trihedra, the millimetre is default unit of length, and 100 the default value for the representation of the axes. If you modify these dimensions, you must temporarily recover the Drawer object. From inside it, take the Aspects in which the values for length are stocked, for example, PlaneAspect for planes and LineAspect for trihedra. Change these values and recalculate the presentation.)#");
    py::class_<AIS_Point ,opencascade::handle<AIS_Point> , AIS_InteractiveObject>(m,"AIS_Point",R"#(Constructs point datums to be used in construction of composite shapes. The datum is displayed as the plus marker +.Constructs point datums to be used in construction of composite shapes. The datum is displayed as the plus marker +.)#");
    py::class_<AIS_PointCloud ,opencascade::handle<AIS_PointCloud> , AIS_InteractiveObject>(m,"AIS_PointCloud",R"#(Interactive object for set of points. The presentation supports two display modes: - Points. - Bounding box for highlighting. Presentation provides selection by bouding box. Selection and consequently highlighting can disabled by setting default selection mode to -1. There will be no way to select object from interactive view. Any calls to AIS_InteractiveContext::AddOrRemoveSelected should be also prohibited, to avoid programmatic highlighting (workaround is setting non-supported hilight mode, e.g. 100);Interactive object for set of points. The presentation supports two display modes: - Points. - Bounding box for highlighting. Presentation provides selection by bouding box. Selection and consequently highlighting can disabled by setting default selection mode to -1. There will be no way to select object from interactive view. Any calls to AIS_InteractiveContext::AddOrRemoveSelected should be also prohibited, to avoid programmatic highlighting (workaround is setting non-supported hilight mode, e.g. 100);)#");
    py::class_<AIS_Relation ,opencascade::handle<AIS_Relation>,Py_AIS_Relation , AIS_InteractiveObject>(m,"AIS_Relation",R"#(One of the four types of interactive object in AIS,comprising dimensions and constraints. Serves as the abstract class for the seven relation classes as well as the seven dimension classes. The statuses available for relations between shapes are as follows: - 0 - there is no connection to a shape; - 1 - there is a connection to the first shape; - 2 - there is a connection to the second shape. The connection takes the form of an edge between the two shapes.One of the four types of interactive object in AIS,comprising dimensions and constraints. Serves as the abstract class for the seven relation classes as well as the seven dimension classes. The statuses available for relations between shapes are as follows: - 0 - there is no connection to a shape; - 1 - there is a connection to the first shape; - 2 - there is a connection to the second shape. The connection takes the form of an edge between the two shapes.)#");
    py::class_<AIS_RubberBand ,opencascade::handle<AIS_RubberBand> , AIS_InteractiveObject>(m,"AIS_RubberBand",R"#(Presentation for drawing rubber band selection. It supports rectangle and polygonal selection. It is constructed in 2d overlay. Default configaration is built without filling. For rectangle selection use SetRectangle() method. For polygonal selection use AddPoint() and GetPoints() methods.Presentation for drawing rubber band selection. It supports rectangle and polygonal selection. It is constructed in 2d overlay. Default configaration is built without filling. For rectangle selection use SetRectangle() method. For polygonal selection use AddPoint() and GetPoints() methods.)#");
    py::class_<AIS_Shape ,opencascade::handle<AIS_Shape> , AIS_InteractiveObject>(m,"AIS_Shape",R"#(A framework to manage presentation and selection of shapes. AIS_Shape is the interactive object which is used the most by applications. There are standard functions available which allow you to prepare selection operations on the constituent elements of shapes - vertices, edges, faces etc - in an open local context. The selection modes specific to "Shape" type objects are referred to as Standard Activation Mode. These modes are only taken into account in open local context and only act on Interactive Objects which have redefined the virtual method AcceptShapeDecomposition so that it returns true. Several advanced functions are also available. These include functions to manage deviation angle and deviation coefficient - both HLR and non-HLR - of an inheriting shape class. These services allow you to select one type of shape interactive object for higher precision drawing. When you do this, the Prs3d_Drawer::IsOwn... functions corresponding to the above deviation angle and coefficient functions return true indicating that there is a local setting available for the specific object.A framework to manage presentation and selection of shapes. AIS_Shape is the interactive object which is used the most by applications. There are standard functions available which allow you to prepare selection operations on the constituent elements of shapes - vertices, edges, faces etc - in an open local context. The selection modes specific to "Shape" type objects are referred to as Standard Activation Mode. These modes are only taken into account in open local context and only act on Interactive Objects which have redefined the virtual method AcceptShapeDecomposition so that it returns true. Several advanced functions are also available. These include functions to manage deviation angle and deviation coefficient - both HLR and non-HLR - of an inheriting shape class. These services allow you to select one type of shape interactive object for higher precision drawing. When you do this, the Prs3d_Drawer::IsOwn... functions corresponding to the above deviation angle and coefficient functions return true indicating that there is a local setting available for the specific object.)#");
    py::class_<AIS_SignatureFilter ,opencascade::handle<AIS_SignatureFilter> , AIS_TypeFilter>(m,"AIS_SignatureFilter",R"#(Selects Interactive Objects through their signatures and types. The signature provides an additional characterization of an object's type, and takes the form of an index. The filter questions each Interactive Object in local context to determine whether it has an non-null owner, and if so, whether it has the desired signature. If the object returns true in each case, it is kept. If not, it is rejected. By default, the interactive object has a None type and a signature of 0. If you want to give a particular type and signature to your Interactive Object, you must redefine two virtual methods: Type and Signature. This filter is only used in an open local contexts. In the Collector viewer, you can only locate Interactive Objects which answer positively to the positioned filters when a local context is open. Warning Some signatures have already been used by standard objects delivered in AIS. These include: - signature 0 - Shape - signature 1 - Point - signature 2 - Axis - signature 3 - Trihedron - signature 4 - PlaneTrihedron - signature 5 - Line - signature 6 - Circle - signature 7 - PlaneSelects Interactive Objects through their signatures and types. The signature provides an additional characterization of an object's type, and takes the form of an index. The filter questions each Interactive Object in local context to determine whether it has an non-null owner, and if so, whether it has the desired signature. If the object returns true in each case, it is kept. If not, it is rejected. By default, the interactive object has a None type and a signature of 0. If you want to give a particular type and signature to your Interactive Object, you must redefine two virtual methods: Type and Signature. This filter is only used in an open local contexts. In the Collector viewer, you can only locate Interactive Objects which answer positively to the positioned filters when a local context is open. Warning Some signatures have already been used by standard objects delivered in AIS. These include: - signature 0 - Shape - signature 1 - Point - signature 2 - Axis - signature 3 - Trihedron - signature 4 - PlaneTrihedron - signature 5 - Line - signature 6 - Circle - signature 7 - PlaneSelects Interactive Objects through their signatures and types. The signature provides an additional characterization of an object's type, and takes the form of an index. The filter questions each Interactive Object in local context to determine whether it has an non-null owner, and if so, whether it has the desired signature. If the object returns true in each case, it is kept. If not, it is rejected. By default, the interactive object has a None type and a signature of 0. If you want to give a particular type and signature to your Interactive Object, you must redefine two virtual methods: Type and Signature. This filter is only used in an open local contexts. In the Collector viewer, you can only locate Interactive Objects which answer positively to the positioned filters when a local context is open. Warning Some signatures have already been used by standard objects delivered in AIS. These include: - signature 0 - Shape - signature 1 - Point - signature 2 - Axis - signature 3 - Trihedron - signature 4 - PlaneTrihedron - signature 5 - Line - signature 6 - Circle - signature 7 - Plane)#");
    py::class_<AIS_TextLabel ,opencascade::handle<AIS_TextLabel> , AIS_InteractiveObject>(m,"AIS_TextLabel",R"#(Presentation of the text.Presentation of the text.)#");
    py::class_<AIS_Triangulation ,opencascade::handle<AIS_Triangulation> , AIS_InteractiveObject>(m,"AIS_Triangulation",R"#(Interactive object that draws data from Poly_Triangulation, optionally with colors associated with each triangulation vertex. For maximum efficiency colors are represented as 32-bit integers instead of classic Quantity_Color values. Interactive selection of triangles and vertices is not yet implemented.Interactive object that draws data from Poly_Triangulation, optionally with colors associated with each triangulation vertex. For maximum efficiency colors are represented as 32-bit integers instead of classic Quantity_Color values. Interactive selection of triangles and vertices is not yet implemented.)#");
    py::class_<AIS_Trihedron ,opencascade::handle<AIS_Trihedron> , AIS_InteractiveObject>(m,"AIS_Trihedron",R"#(Create a selectable trihedron The trihedron includes 1 origin, 3 axes and 3 labels. Default text of labels are "X", "Y", "Z". Color of origin and any axis, color of arrows and labels may be changed. Visual presentation might be shown in two, shaded and wireframe modes, wireframe by default). There are 4 modes of selection: - AIS_TrihedronSelectionMode_EntireObject to select trihedron, priority = 1 - AIS_TrihedronSelectionMode_Origin to select its origin, priority = 5 - AIS_TrihedronSelectionMode_Axes to select its axis, priority = 3 - AIS_TrihedronSelectionMode_MainPlanes to select its planes, priority = 2Create a selectable trihedron The trihedron includes 1 origin, 3 axes and 3 labels. Default text of labels are "X", "Y", "Z". Color of origin and any axis, color of arrows and labels may be changed. Visual presentation might be shown in two, shaded and wireframe modes, wireframe by default). There are 4 modes of selection: - AIS_TrihedronSelectionMode_EntireObject to select trihedron, priority = 1 - AIS_TrihedronSelectionMode_Origin to select its origin, priority = 5 - AIS_TrihedronSelectionMode_Axes to select its axis, priority = 3 - AIS_TrihedronSelectionMode_MainPlanes to select its planes, priority = 2)#");
    py::class_<AIS_ViewCube ,opencascade::handle<AIS_ViewCube> , AIS_InteractiveObject>(m,"AIS_ViewCube",R"#(Interactive object for displaying the view manipulation cube.)#");
    py::class_<AIS_AngleDimension ,opencascade::handle<AIS_AngleDimension> , AIS_Dimension>(m,"AIS_AngleDimension",R"#(Angle dimension. Can be constructed: - on two intersected edges. - on three points or vertices. - on conical face. - between two intersected faces.Angle dimension. Can be constructed: - on two intersected edges. - on three points or vertices. - on conical face. - between two intersected faces.Angle dimension. Can be constructed: - on two intersected edges. - on three points or vertices. - on conical face. - between two intersected faces.)#");
    py::class_<AIS_Chamf2dDimension ,opencascade::handle<AIS_Chamf2dDimension> , AIS_Relation>(m,"AIS_Chamf2dDimension",R"#(A framework to define display of 2D chamfers. A chamfer is displayed with arrows and text. The text gives the length of the chamfer if it is a symmetrical chamfer, or the angle if it is not.A framework to define display of 2D chamfers. A chamfer is displayed with arrows and text. The text gives the length of the chamfer if it is a symmetrical chamfer, or the angle if it is not.)#");
    py::class_<AIS_Chamf3dDimension ,opencascade::handle<AIS_Chamf3dDimension> , AIS_Relation>(m,"AIS_Chamf3dDimension",R"#(A framework to define display of 3D chamfers. A chamfer is displayed with arrows and text. The text gives the length of the chamfer if it is a symmetrical chamfer, or the angle if it is not.A framework to define display of 3D chamfers. A chamfer is displayed with arrows and text. The text gives the length of the chamfer if it is a symmetrical chamfer, or the angle if it is not.)#");
    py::class_<AIS_ColoredShape ,opencascade::handle<AIS_ColoredShape> , AIS_Shape>(m,"AIS_ColoredShape",R"#(Presentation of the shape with customizable sub-shapes properties.Presentation of the shape with customizable sub-shapes properties.)#");
    py::class_<AIS_ConcentricRelation ,opencascade::handle<AIS_ConcentricRelation> , AIS_Relation>(m,"AIS_ConcentricRelation",R"#(A framework to define a constraint by a relation of concentricity between two or more interactive datums. The display of this constraint is also defined. A plane is used to create an axis along which the relation of concentricity can be extended.A framework to define a constraint by a relation of concentricity between two or more interactive datums. The display of this constraint is also defined. A plane is used to create an axis along which the relation of concentricity can be extended.)#");
    py::class_<AIS_DiameterDimension ,opencascade::handle<AIS_DiameterDimension> , AIS_Dimension>(m,"AIS_DiameterDimension",R"#(Diameter dimension. Can be constructued: - On generic circle. - On generic circle with user-defined anchor point on that circle (dimension plane is oriented to follow the anchor point). - On generic circle in the specified plane. - On generic shape containing geometry that can be measured by diameter dimension: circle wire, circular face, etc. The anchor point is the location of the left attachement point of dimension on the circle. The anchor point computation is processed after dimension plane setting so that positive flyout direction stands with normal of the circle and the normal of the plane. If the plane is user-defined the anchor point was computed as intersection of the plane and the basis circle. Among two intersection points the one is selected so that positive flyout direction vector and the circle normal on the one side form the circle plane. (corner between positive flyout directio nand the circle normal is acute.) If the plane is computed automatically (by default it is the circle plane), the anchor point is the zero parameter point of the circle.Diameter dimension. Can be constructued: - On generic circle. - On generic circle with user-defined anchor point on that circle (dimension plane is oriented to follow the anchor point). - On generic circle in the specified plane. - On generic shape containing geometry that can be measured by diameter dimension: circle wire, circular face, etc. The anchor point is the location of the left attachement point of dimension on the circle. The anchor point computation is processed after dimension plane setting so that positive flyout direction stands with normal of the circle and the normal of the plane. If the plane is user-defined the anchor point was computed as intersection of the plane and the basis circle. Among two intersection points the one is selected so that positive flyout direction vector and the circle normal on the one side form the circle plane. (corner between positive flyout directio nand the circle normal is acute.) If the plane is computed automatically (by default it is the circle plane), the anchor point is the zero parameter point of the circle.Diameter dimension. Can be constructued: - On generic circle. - On generic circle with user-defined anchor point on that circle (dimension plane is oriented to follow the anchor point). - On generic circle in the specified plane. - On generic shape containing geometry that can be measured by diameter dimension: circle wire, circular face, etc. The anchor point is the location of the left attachement point of dimension on the circle. The anchor point computation is processed after dimension plane setting so that positive flyout direction stands with normal of the circle and the normal of the plane. If the plane is user-defined the anchor point was computed as intersection of the plane and the basis circle. Among two intersection points the one is selected so that positive flyout direction vector and the circle normal on the one side form the circle plane. (corner between positive flyout directio nand the circle normal is acute.) If the plane is computed automatically (by default it is the circle plane), the anchor point is the zero parameter point of the circle.)#");
    py::class_<AIS_EllipseRadiusDimension ,opencascade::handle<AIS_EllipseRadiusDimension>,Py_AIS_EllipseRadiusDimension , AIS_Relation>(m,"AIS_EllipseRadiusDimension",R"#(Computes geometry ( basis curve and plane of dimension) for input shape aShape from TopoDS Root class for MinRadiusDimension and MaxRadiusDimensionComputes geometry ( basis curve and plane of dimension) for input shape aShape from TopoDS Root class for MinRadiusDimension and MaxRadiusDimensionComputes geometry ( basis curve and plane of dimension) for input shape aShape from TopoDS Root class for MinRadiusDimension and MaxRadiusDimension)#");
    py::class_<AIS_EqualDistanceRelation ,opencascade::handle<AIS_EqualDistanceRelation> , AIS_Relation>(m,"AIS_EqualDistanceRelation",R"#(A framework to display equivalent distances between shapes and a given plane. The distance is the length of a projection from the shape to the plane. These distances are used to compare shapes by this vector alone.A framework to display equivalent distances between shapes and a given plane. The distance is the length of a projection from the shape to the plane. These distances are used to compare shapes by this vector alone.)#");
    py::class_<AIS_EqualRadiusRelation ,opencascade::handle<AIS_EqualRadiusRelation> , AIS_Relation>(m,"AIS_EqualRadiusRelation",R"#()#");
    py::class_<AIS_FixRelation ,opencascade::handle<AIS_FixRelation> , AIS_Relation>(m,"AIS_FixRelation",R"#(Constructs and manages a constraint by a fixed relation between two or more interactive datums. This constraint is represented by a wire from a shape - point, vertex, or edge - in the first datum and a corresponding shape in the second. Warning: This relation is not bound with any kind of parametric constraint : it represents the "status" of an parametric object.Constructs and manages a constraint by a fixed relation between two or more interactive datums. This constraint is represented by a wire from a shape - point, vertex, or edge - in the first datum and a corresponding shape in the second. Warning: This relation is not bound with any kind of parametric constraint : it represents the "status" of an parametric object.)#");
    py::class_<AIS_IdenticRelation ,opencascade::handle<AIS_IdenticRelation> , AIS_Relation>(m,"AIS_IdenticRelation",R"#(Constructs a constraint by a relation of identity between two or more datums figuring in shape Interactive Objects.Constructs a constraint by a relation of identity between two or more datums figuring in shape Interactive Objects.)#");
    py::class_<AIS_LengthDimension ,opencascade::handle<AIS_LengthDimension> , AIS_Dimension>(m,"AIS_LengthDimension",R"#(Length dimension. Can be constructued: - Between two generic points. - Between two vertices. - Between two faces. - Between two parallel edges. - Between face and edge.Length dimension. Can be constructued: - Between two generic points. - Between two vertices. - Between two faces. - Between two parallel edges. - Between face and edge.)#");
    py::class_<AIS_MidPointRelation ,opencascade::handle<AIS_MidPointRelation> , AIS_Relation>(m,"AIS_MidPointRelation",R"#(presentation of equal distance to point myMidPointpresentation of equal distance to point myMidPoint)#");
    py::class_<AIS_OffsetDimension ,opencascade::handle<AIS_OffsetDimension> , AIS_Relation>(m,"AIS_OffsetDimension",R"#(A framework to display dimensions of offsets. The relation between the offset and the basis shape is indicated. This relation is displayed with arrows and text. The text gives the dsitance between the offset and the basis shape.A framework to display dimensions of offsets. The relation between the offset and the basis shape is indicated. This relation is displayed with arrows and text. The text gives the dsitance between the offset and the basis shape.)#");
    py::class_<AIS_ParallelRelation ,opencascade::handle<AIS_ParallelRelation> , AIS_Relation>(m,"AIS_ParallelRelation",R"#(A framework to display constraints of parallelism between two or more Interactive Objects. These entities can be faces or edges.A framework to display constraints of parallelism between two or more Interactive Objects. These entities can be faces or edges.)#");
    py::class_<AIS_PerpendicularRelation ,opencascade::handle<AIS_PerpendicularRelation> , AIS_Relation>(m,"AIS_PerpendicularRelation",R"#(A framework to display constraints of perpendicularity between two or more interactive datums. These datums can be edges or faces.A framework to display constraints of perpendicularity between two or more interactive datums. These datums can be edges or faces.)#");
    py::class_<AIS_RadiusDimension ,opencascade::handle<AIS_RadiusDimension> , AIS_Dimension>(m,"AIS_RadiusDimension",R"#(Radius dimension. Can be constructued: - On generic circle. - On generic circle with user-defined anchor point on that circle. - On generic shape containing geometry that can be measured by diameter dimension: circle wire, arc, circular face, etc. The anchor point is the location of left attachement point of dimension on the circle. It can be user-specified, or computed as middle point on the arc. The radius dimension always lies in the plane of the measured circle. The dimension is considered as invalid if the user-specified anchor point is not lying on the circle, if the radius of the circle is less than Precision::Confusion(). In case if the dimension is built on the arbitrary shape, it can be considered as invalid if the shape does not contain circle geometry.Radius dimension. Can be constructued: - On generic circle. - On generic circle with user-defined anchor point on that circle. - On generic shape containing geometry that can be measured by diameter dimension: circle wire, arc, circular face, etc. The anchor point is the location of left attachement point of dimension on the circle. It can be user-specified, or computed as middle point on the arc. The radius dimension always lies in the plane of the measured circle. The dimension is considered as invalid if the user-specified anchor point is not lying on the circle, if the radius of the circle is less than Precision::Confusion(). In case if the dimension is built on the arbitrary shape, it can be considered as invalid if the shape does not contain circle geometry.Radius dimension. Can be constructued: - On generic circle. - On generic circle with user-defined anchor point on that circle. - On generic shape containing geometry that can be measured by diameter dimension: circle wire, arc, circular face, etc. The anchor point is the location of left attachement point of dimension on the circle. It can be user-specified, or computed as middle point on the arc. The radius dimension always lies in the plane of the measured circle. The dimension is considered as invalid if the user-specified anchor point is not lying on the circle, if the radius of the circle is less than Precision::Confusion(). In case if the dimension is built on the arbitrary shape, it can be considered as invalid if the shape does not contain circle geometry.)#");
    py::class_<AIS_SymmetricRelation ,opencascade::handle<AIS_SymmetricRelation> , AIS_Relation>(m,"AIS_SymmetricRelation",R"#(A framework to display constraints of symmetricity between two or more datum Interactive Objects. A plane serves as the axis of symmetry between the shapes of which the datums are parts.A framework to display constraints of symmetricity between two or more datum Interactive Objects. A plane serves as the axis of symmetry between the shapes of which the datums are parts.)#");
    py::class_<AIS_TangentRelation ,opencascade::handle<AIS_TangentRelation> , AIS_Relation>(m,"AIS_TangentRelation",R"#(A framework to display tangency constraints between two or more Interactive Objects of the datum type. The datums are normally faces or edges.A framework to display tangency constraints between two or more Interactive Objects of the datum type. The datums are normally faces or edges.)#");
    py::class_<AIS_TexturedShape ,opencascade::handle<AIS_TexturedShape> , AIS_Shape>(m,"AIS_TexturedShape",R"#(This class allows to map textures on shapes. Presentations modes AIS_WireFrame (0) and AIS_Shaded (1) behave in the same manner as in AIS_Shape, whilst new modes 2 (bounding box) and 3 (texture mapping) extends it functionality.This class allows to map textures on shapes. Presentations modes AIS_WireFrame (0) and AIS_Shaded (1) behave in the same manner as in AIS_Shape, whilst new modes 2 (bounding box) and 3 (texture mapping) extends it functionality.)#");
    py::class_<AIS_MaxRadiusDimension ,opencascade::handle<AIS_MaxRadiusDimension> , AIS_EllipseRadiusDimension>(m,"AIS_MaxRadiusDimension",R"#(Ellipse Max radius dimension of a Shape which can be Edge or Face (planar or cylindrical(surface of extrusion or surface of offset))Ellipse Max radius dimension of a Shape which can be Edge or Face (planar or cylindrical(surface of extrusion or surface of offset)))#");
    py::class_<AIS_MinRadiusDimension ,opencascade::handle<AIS_MinRadiusDimension> , AIS_EllipseRadiusDimension>(m,"AIS_MinRadiusDimension",R"#(-- Ellipse Min radius dimension of a Shape which can be Edge or Face (planar or cylindrical(surface of extrusion or surface of offset))-- Ellipse Min radius dimension of a Shape which can be Edge or Face (planar or cylindrical(surface of extrusion or surface of offset)))#");

};

// user-defined post-inclusion per module

// user-defined post

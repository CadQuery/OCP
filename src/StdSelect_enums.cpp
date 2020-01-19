
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <Graphic3d_StructureManager.hxx>
#include <TopoDS_Face.hxx>
#include <Prs3d_Projector.hxx>
#include <V3d_View.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <StdSelect_BRepSelectionTool.hxx>
#include <StdSelect_BRepOwner.hxx>
#include <StdSelect_EdgeFilter.hxx>
#include <StdSelect_FaceFilter.hxx>
#include <StdSelect_ShapeTypeFilter.hxx>
#include <StdSelect_Prs.hxx>
#include <StdSelect_Shape.hxx>
#include <StdSelect_Shape.hxx>
#include <SelectMgr_EntityOwner.hxx>

// module includes
#include <StdSelect.hxx>
#include <StdSelect_BRepOwner.hxx>
#include <StdSelect_BRepSelectionTool.hxx>
#include <StdSelect_DisplayMode.hxx>
#include <StdSelect_EdgeFilter.hxx>
#include <StdSelect_FaceFilter.hxx>
#include <StdSelect_IndexedDataMapOfOwnerPrs.hxx>
#include <StdSelect_Prs.hxx>
#include <StdSelect_SensitivityMode.hxx>
#include <StdSelect_Shape.hxx>
#include <StdSelect_ShapeTypeFilter.hxx>
#include <StdSelect_TypeOfEdge.hxx>
#include <StdSelect_TypeOfFace.hxx>
#include <StdSelect_TypeOfResult.hxx>
#include <StdSelect_TypeOfSelectionImage.hxx>
#include <StdSelect_ViewerSelector3d.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StdSelect_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StdSelect", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<StdSelect_TypeOfSelectionImage>(m, "StdSelect_TypeOfSelectionImage",R"#(Type of output selection image.)#")
        .value("StdSelect_TypeOfSelectionImage_NormalizedDepth",StdSelect_TypeOfSelectionImage::StdSelect_TypeOfSelectionImage_NormalizedDepth)
        .value("StdSelect_TypeOfSelectionImage_NormalizedDepthInverted",StdSelect_TypeOfSelectionImage::StdSelect_TypeOfSelectionImage_NormalizedDepthInverted)
        .value("StdSelect_TypeOfSelectionImage_UnnormalizedDepth",StdSelect_TypeOfSelectionImage::StdSelect_TypeOfSelectionImage_UnnormalizedDepth)
        .value("StdSelect_TypeOfSelectionImage_ColoredDetectedObject",StdSelect_TypeOfSelectionImage::StdSelect_TypeOfSelectionImage_ColoredDetectedObject)
        .value("StdSelect_TypeOfSelectionImage_ColoredEntity",StdSelect_TypeOfSelectionImage::StdSelect_TypeOfSelectionImage_ColoredEntity)
        .value("StdSelect_TypeOfSelectionImage_ColoredOwner",StdSelect_TypeOfSelectionImage::StdSelect_TypeOfSelectionImage_ColoredOwner)
        .value("StdSelect_TypeOfSelectionImage_ColoredSelectionMode",StdSelect_TypeOfSelectionImage::StdSelect_TypeOfSelectionImage_ColoredSelectionMode).export_values();
    py::enum_<StdSelect_TypeOfResult>(m, "StdSelect_TypeOfResult",R"#(Provides values for type of result. These are used to specify whether the result is to be simple or whether it may be multiple.)#")
        .value("StdSelect_TOR_SIMPLE",StdSelect_TypeOfResult::StdSelect_TOR_SIMPLE)
        .value("StdSelect_TOR_MULTIPLE",StdSelect_TypeOfResult::StdSelect_TOR_MULTIPLE).export_values();
    py::enum_<StdSelect_TypeOfFace>(m, "StdSelect_TypeOfFace",R"#(Provides values for different types of faces. These values are used to filter faces in frameworks inheriting StdSelect_FaceFilter.)#")
        .value("StdSelect_AnyFace",StdSelect_TypeOfFace::StdSelect_AnyFace)
        .value("StdSelect_Plane",StdSelect_TypeOfFace::StdSelect_Plane)
        .value("StdSelect_Cylinder",StdSelect_TypeOfFace::StdSelect_Cylinder)
        .value("StdSelect_Sphere",StdSelect_TypeOfFace::StdSelect_Sphere)
        .value("StdSelect_Torus",StdSelect_TypeOfFace::StdSelect_Torus)
        .value("StdSelect_Revol",StdSelect_TypeOfFace::StdSelect_Revol)
        .value("StdSelect_Cone",StdSelect_TypeOfFace::StdSelect_Cone).export_values();
    py::enum_<StdSelect_TypeOfEdge>(m, "StdSelect_TypeOfEdge",R"#(Provides values for different types of edges. These values are used to filter edges in frameworks inheriting StdSelect_EdgeFilter.)#")
        .value("StdSelect_AnyEdge",StdSelect_TypeOfEdge::StdSelect_AnyEdge)
        .value("StdSelect_Line",StdSelect_TypeOfEdge::StdSelect_Line)
        .value("StdSelect_Circle",StdSelect_TypeOfEdge::StdSelect_Circle).export_values();
    py::enum_<StdSelect_SensitivityMode>(m, "StdSelect_SensitivityMode",R"#(Selection sensitivity mode. SM_WINDOW mode uses the specified pixel tolerance to compute the sensitivity value, SM_VIEW mode allows to define the sensitivity manually.)#")
        .value("StdSelect_SM_WINDOW",StdSelect_SensitivityMode::StdSelect_SM_WINDOW)
        .value("StdSelect_SM_VIEW",StdSelect_SensitivityMode::StdSelect_SM_VIEW).export_values();
    py::enum_<StdSelect_DisplayMode>(m, "StdSelect_DisplayMode",R"#(None)#")
        .value("StdSelect_DM_Wireframe",StdSelect_DisplayMode::StdSelect_DM_Wireframe)
        .value("StdSelect_DM_Shading",StdSelect_DisplayMode::StdSelect_DM_Shading)
        .value("StdSelect_DM_HLR",StdSelect_DisplayMode::StdSelect_DM_HLR).export_values();

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<StdSelect , shared_ptr<StdSelect>  >(m,"StdSelect",R"#(The StdSelect package provides the following services - the definition of selection modes for topological shapes - the definition of several concrete filtertandard Selection2d.ap classes - 2D and 3D viewer selectors. Note that each new Interactive Object must have all its selection modes defined. Standard Classes is useful to build 3D Selectable Objects, and to process 3D Selections:)#");
    py::class_<StdSelect_BRepOwner ,opencascade::handle<StdSelect_BRepOwner>  , SelectMgr_EntityOwner >(m,"StdSelect_BRepOwner",R"#(Defines Specific Owners for Sensitive Primitives (Sensitive Segments,Circles...). Used in Dynamic Selection Mechanism. A BRepOwner has an Owner (the shape it represents) and Users (One or More Transient entities). The highlight-unhighlight methods are empty and must be redefined by each User.Defines Specific Owners for Sensitive Primitives (Sensitive Segments,Circles...). Used in Dynamic Selection Mechanism. A BRepOwner has an Owner (the shape it represents) and Users (One or More Transient entities). The highlight-unhighlight methods are empty and must be redefined by each User.)#");
    py::class_<StdSelect_BRepSelectionTool , shared_ptr<StdSelect_BRepSelectionTool>  >(m,"StdSelect_BRepSelectionTool",R"#(Tool to create specific selections (sets of primitives) for Shapes from Topology. These Selections may be used in dynamic selection Mechanism Given a Shape and a mode of selection (selection of vertices, edges,faces ...) , This Tool Computes corresponding sensitive primitives, puts them in an entity called Selection (see package SelectMgr) and returns it.)#");
    py::class_<StdSelect_EdgeFilter ,opencascade::handle<StdSelect_EdgeFilter>  , SelectMgr_Filter >(m,"StdSelect_EdgeFilter",R"#(A framework to define a filter to select a specific type of edge. The types available include: - any edge - a linear edge - a circular edge.A framework to define a filter to select a specific type of edge. The types available include: - any edge - a linear edge - a circular edge.A framework to define a filter to select a specific type of edge. The types available include: - any edge - a linear edge - a circular edge.)#");
    py::class_<StdSelect_FaceFilter ,opencascade::handle<StdSelect_FaceFilter>  , SelectMgr_Filter >(m,"StdSelect_FaceFilter",R"#(A framework to define a filter to select a specific type of face. The types available include: - any face - a planar face - a cylindrical face - a spherical face - a toroidal face - a revol face.A framework to define a filter to select a specific type of face. The types available include: - any face - a planar face - a cylindrical face - a spherical face - a toroidal face - a revol face.A framework to define a filter to select a specific type of face. The types available include: - any face - a planar face - a cylindrical face - a spherical face - a toroidal face - a revol face.)#");
    py::class_<StdSelect_Prs ,opencascade::handle<StdSelect_Prs>  , Prs3d_Presentation >(m,"StdSelect_Prs",R"#(allows entities owners to be hilighted independantly from PresentableObjectsallows entities owners to be hilighted independantly from PresentableObjectsallows entities owners to be hilighted independantly from PresentableObjects)#");
    py::class_<StdSelect_Shape ,opencascade::handle<StdSelect_Shape>  , PrsMgr_PresentableObject >(m,"StdSelect_Shape",R"#(Presentable shape only for purpose of display for BRepOwner...Presentable shape only for purpose of display for BRepOwner...)#");
    py::class_<StdSelect_ShapeTypeFilter ,opencascade::handle<StdSelect_ShapeTypeFilter>  , SelectMgr_Filter >(m,"StdSelect_ShapeTypeFilter",R"#(A filter framework which allows you to define a filter for a specific shape type. The types available include: - compound - compsolid - solid - shell - face - wire - edge - vertex.A filter framework which allows you to define a filter for a specific shape type. The types available include: - compound - compsolid - solid - shell - face - wire - edge - vertex.A filter framework which allows you to define a filter for a specific shape type. The types available include: - compound - compsolid - solid - shell - face - wire - edge - vertex.)#");
    py::class_<StdSelect_ViewerSelector3d ,opencascade::handle<StdSelect_ViewerSelector3d>  , SelectMgr_ViewerSelector >(m,"StdSelect_ViewerSelector3d",R"#(Selector Usable by Viewers from V3dSelector Usable by Viewers from V3d)#");

};

// user-defined post-inclusion per module

// user-defined post


// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <MeshVS_Mesh.hxx>
#include <MeshVS_DataSource.hxx>
#include <Graphic3d_ArrayOfPrimitives.hxx>
#include <MeshVS_Mesh.hxx>
#include <MeshVS_DataSource.hxx>
#include <Graphic3d_ArrayOfSegments.hxx>
#include <Graphic3d_ArrayOfTriangles.hxx>
#include <Graphic3d_ArrayOfPrimitives.hxx>
#include <MeshVS_Mesh.hxx>
#include <MeshVS_DataSource.hxx>
#include <Bnd_Box.hxx>
#include <MeshVS_Mesh.hxx>
#include <TColStd_HPackedMapOfInteger.hxx>
#include <Bnd_Box2d.hxx>
#include <MeshVS_Mesh.hxx>
#include <MeshVS_DataSource.hxx>
#include <Graphic3d_Texture2D.hxx>
#include <Graphic3d_ArrayOfPrimitives.hxx>
#include <TColStd_HPackedMapOfInteger.hxx>
#include <MeshVS_DataSource.hxx>
#include <MeshVS_Drawer.hxx>
#include <Graphic3d_AspectFillArea3d.hxx>
#include <MeshVS_Drawer.hxx>
#include <Graphic3d_MaterialAspect.hxx>
#include <Graphic3d_AspectLine3d.hxx>
#include <Graphic3d_AspectMarker3d.hxx>
#include <Graphic3d_AspectText3d.hxx>
#include <gp_Vec.hxx>
#include <MeshVS_DataSource.hxx>
#include <MeshVS_Drawer.hxx>
#include <MeshVS_Mesh.hxx>
#include <Select3D_SensitiveEntity.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <MeshVS_Mesh.hxx>
#include <MeshVS_DataSource.hxx>
#include <TColStd_HPackedMapOfInteger.hxx>
#include <Bnd_Box2d.hxx>
#include <MeshVS_Mesh.hxx>
#include <MeshVS_DataSource.hxx>

// module includes
#include <MeshVS_Array1OfSequenceOfInteger.hxx>
#include <MeshVS_Buffer.hxx>
#include <MeshVS_BuilderPriority.hxx>
#include <MeshVS_ColorHasher.hxx>
#include <MeshVS_CommonSensitiveEntity.hxx>
#include <MeshVS_DataMapIteratorOfDataMapOfColorMapOfInteger.hxx>
#include <MeshVS_DataMapIteratorOfDataMapOfHArray1OfSequenceOfInteger.hxx>
#include <MeshVS_DataMapIteratorOfDataMapOfIntegerAsciiString.hxx>
#include <MeshVS_DataMapIteratorOfDataMapOfIntegerBoolean.hxx>
#include <MeshVS_DataMapIteratorOfDataMapOfIntegerColor.hxx>
#include <MeshVS_DataMapIteratorOfDataMapOfIntegerMaterial.hxx>
#include <MeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner.hxx>
#include <MeshVS_DataMapIteratorOfDataMapOfIntegerOwner.hxx>
#include <MeshVS_DataMapIteratorOfDataMapOfIntegerTwoColors.hxx>
#include <MeshVS_DataMapIteratorOfDataMapOfIntegerVector.hxx>
#include <MeshVS_DataMapIteratorOfDataMapOfTwoColorsMapOfInteger.hxx>
#include <MeshVS_DataMapOfColorMapOfInteger.hxx>
#include <MeshVS_DataMapOfHArray1OfSequenceOfInteger.hxx>
#include <MeshVS_DataMapOfIntegerAsciiString.hxx>
#include <MeshVS_DataMapOfIntegerBoolean.hxx>
#include <MeshVS_DataMapOfIntegerColor.hxx>
#include <MeshVS_DataMapOfIntegerMaterial.hxx>
#include <MeshVS_DataMapOfIntegerMeshEntityOwner.hxx>
#include <MeshVS_DataMapOfIntegerOwner.hxx>
#include <MeshVS_DataMapOfIntegerTwoColors.hxx>
#include <MeshVS_DataMapOfIntegerVector.hxx>
#include <MeshVS_DataMapOfTwoColorsMapOfInteger.hxx>
#include <MeshVS_DataSource.hxx>
#include <MeshVS_DataSource3D.hxx>
#include <MeshVS_DeformedDataSource.hxx>
#include <MeshVS_DisplayModeFlags.hxx>
#include <MeshVS_Drawer.hxx>
#include <MeshVS_DrawerAttribute.hxx>
#include <MeshVS_DummySensitiveEntity.hxx>
#include <MeshVS_ElementalColorPrsBuilder.hxx>
#include <MeshVS_EntityType.hxx>
#include <MeshVS_HArray1OfSequenceOfInteger.hxx>
#include <MeshVS_MapIteratorOfMapOfTwoNodes.hxx>
#include <MeshVS_MapOfTwoNodes.hxx>
#include <MeshVS_Mesh.hxx>
#include <MeshVS_MeshEntityOwner.hxx>
#include <MeshVS_MeshOwner.hxx>
#include <MeshVS_MeshPrsBuilder.hxx>
#include <MeshVS_MeshPtr.hxx>
#include <MeshVS_MeshSelectionMethod.hxx>
#include <MeshVS_NodalColorPrsBuilder.hxx>
#include <MeshVS_PrsBuilder.hxx>
#include <MeshVS_SelectionModeFlags.hxx>
#include <MeshVS_SensitiveFace.hxx>
#include <MeshVS_SensitiveMesh.hxx>
#include <MeshVS_SensitivePolyhedron.hxx>
#include <MeshVS_SensitiveQuad.hxx>
#include <MeshVS_SensitiveSegment.hxx>
#include <MeshVS_SequenceOfPrsBuilder.hxx>
#include <MeshVS_SymmetricPairHasher.hxx>
#include <MeshVS_TextPrsBuilder.hxx>
#include <MeshVS_Tool.hxx>
#include <MeshVS_TwoColors.hxx>
#include <MeshVS_TwoColorsHasher.hxx>
#include <MeshVS_TwoNodes.hxx>
#include <MeshVS_TwoNodesHasher.hxx>
#include <MeshVS_VectorPrsBuilder.hxx>

// template related includes
// ./opencascade/MeshVS_DataMapOfIntegerAsciiString.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerAsciiString.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_DataMapOfColorMapOfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_DataMapOfColorMapOfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerOwner.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_Array1OfSequenceOfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_TwoColorsHasher.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_SequenceOfPrsBuilder.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerMaterial.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerMaterial.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_MapOfTwoNodes.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_MapOfTwoNodes.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerMeshEntityOwner.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerVector.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerVector.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerColor.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerColor.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_DataMapOfHArray1OfSequenceOfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerBoolean.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerBoolean.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_TwoNodesHasher.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_DataMapOfTwoColorsMapOfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_DataMapOfTwoColorsMapOfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerTwoColors.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerTwoColors.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_SensitivePolyhedron.hxx
#include "NCollection.hxx"
// ./opencascade/MeshVS_SensitivePolyhedron.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_MeshVS_enums(py::module &main_module) {


py::module m = main_module.def_submodule("MeshVS", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<MeshVS_SelectionModeFlags>(m, "MeshVS_SelectionModeFlags",R"#(None)#")
        .value("MeshVS_SMF_Mesh",MeshVS_SelectionModeFlags::MeshVS_SMF_Mesh)
        .value("MeshVS_SMF_Node",MeshVS_SelectionModeFlags::MeshVS_SMF_Node)
        .value("MeshVS_SMF_0D",MeshVS_SelectionModeFlags::MeshVS_SMF_0D)
        .value("MeshVS_SMF_Link",MeshVS_SelectionModeFlags::MeshVS_SMF_Link)
        .value("MeshVS_SMF_Face",MeshVS_SelectionModeFlags::MeshVS_SMF_Face)
        .value("MeshVS_SMF_Volume",MeshVS_SelectionModeFlags::MeshVS_SMF_Volume)
        .value("MeshVS_SMF_Element",MeshVS_SelectionModeFlags::MeshVS_SMF_Element)
        .value("MeshVS_SMF_All",MeshVS_SelectionModeFlags::MeshVS_SMF_All)
        .value("MeshVS_SMF_Group",MeshVS_SelectionModeFlags::MeshVS_SMF_Group).export_values();
    m.attr("MeshVS_BP_Mesh") = py::cast(int(MeshVS_BP_Mesh));
    m.attr("MeshVS_BP_NodalColor") = py::cast(int(MeshVS_BP_NodalColor));
    m.attr("MeshVS_BP_ElemColor") = py::cast(int(MeshVS_BP_ElemColor));
    m.attr("MeshVS_BP_Text") = py::cast(int(MeshVS_BP_Text));
    m.attr("MeshVS_BP_Vector") = py::cast(int(MeshVS_BP_Vector));
    m.attr("MeshVS_BP_User") = py::cast(int(MeshVS_BP_User));
    m.attr("MeshVS_BP_Default") = py::cast(int(MeshVS_BP_Default));
    m.attr("MeshVS_DMF_WireFrame") = py::cast(int(MeshVS_DMF_WireFrame));
    m.attr("MeshVS_DMF_Shading") = py::cast(int(MeshVS_DMF_Shading));
    m.attr("MeshVS_DMF_Shrink") = py::cast(int(MeshVS_DMF_Shrink));
    m.attr("MeshVS_DMF_OCCMask") = py::cast(int(MeshVS_DMF_OCCMask));
    m.attr("MeshVS_DMF_VectorDataPrs") = py::cast(int(MeshVS_DMF_VectorDataPrs));
    m.attr("MeshVS_DMF_NodalColorDataPrs") = py::cast(int(MeshVS_DMF_NodalColorDataPrs));
    m.attr("MeshVS_DMF_ElementalColorDataPrs") = py::cast(int(MeshVS_DMF_ElementalColorDataPrs));
    m.attr("MeshVS_DMF_TextDataPrs") = py::cast(int(MeshVS_DMF_TextDataPrs));
    m.attr("MeshVS_DMF_EntitiesWithData") = py::cast(int(MeshVS_DMF_EntitiesWithData));
    m.attr("MeshVS_DMF_DeformedPrsWireFrame") = py::cast(int(MeshVS_DMF_DeformedPrsWireFrame));
    m.attr("MeshVS_DMF_DeformedPrsShading") = py::cast(int(MeshVS_DMF_DeformedPrsShading));
    m.attr("MeshVS_DMF_DeformedPrsShrink") = py::cast(int(MeshVS_DMF_DeformedPrsShrink));
    m.attr("MeshVS_DMF_DeformedMask") = py::cast(int(MeshVS_DMF_DeformedMask));
    m.attr("MeshVS_DMF_SelectionPrs") = py::cast(int(MeshVS_DMF_SelectionPrs));
    m.attr("MeshVS_DMF_HilightPrs") = py::cast(int(MeshVS_DMF_HilightPrs));
    m.attr("MeshVS_DMF_User") = py::cast(int(MeshVS_DMF_User));
    py::enum_<MeshVS_DrawerAttribute>(m, "MeshVS_DrawerAttribute",R"#(Is it allowed to draw beam and face's edge overlapping with this beam.//! Is mesh drawn with reflective material//! Is colored mesh data representation drawn with reflective material//! What part of face or link will be shown if shrink mode. It is recommended this coeff to be between 0 and 1.//! How many nodes is possible to be in face//! If this parameter is true, the compute method CPU time will be displayed in console window//! If this parameter is true, the compute selection method CPU time will be displayed in console window//! If this parameter is false, the nodes won't be shown in viewer, otherwise will be.//! If this parameter is true, the selectable nodes map will be updated automatically when hidden elements change//! If this parameter is false, the face's edges are not shown Warning: in wireframe mode this parameter is ignored//! Is mesh drawing in smooth shading mode//! Is back faces of volume elements should be supressed//! The integer keys for most useful constants attuning mesh presentation appearence WARNING: DA_TextExpansionFactor, DA_TextSpace, DA_TextDisplayType have no effect and might be removed in the future.)#")
        .value("MeshVS_DA_InteriorStyle",MeshVS_DrawerAttribute::MeshVS_DA_InteriorStyle)
        .value("MeshVS_DA_InteriorColor",MeshVS_DrawerAttribute::MeshVS_DA_InteriorColor)
        .value("MeshVS_DA_BackInteriorColor",MeshVS_DrawerAttribute::MeshVS_DA_BackInteriorColor)
        .value("MeshVS_DA_EdgeColor",MeshVS_DrawerAttribute::MeshVS_DA_EdgeColor)
        .value("MeshVS_DA_EdgeType",MeshVS_DrawerAttribute::MeshVS_DA_EdgeType)
        .value("MeshVS_DA_EdgeWidth",MeshVS_DrawerAttribute::MeshVS_DA_EdgeWidth)
        .value("MeshVS_DA_HatchStyle",MeshVS_DrawerAttribute::MeshVS_DA_HatchStyle)
        .value("MeshVS_DA_FrontMaterial",MeshVS_DrawerAttribute::MeshVS_DA_FrontMaterial)
        .value("MeshVS_DA_BackMaterial",MeshVS_DrawerAttribute::MeshVS_DA_BackMaterial)
        .value("MeshVS_DA_BeamType",MeshVS_DrawerAttribute::MeshVS_DA_BeamType)
        .value("MeshVS_DA_BeamWidth",MeshVS_DrawerAttribute::MeshVS_DA_BeamWidth)
        .value("MeshVS_DA_BeamColor",MeshVS_DrawerAttribute::MeshVS_DA_BeamColor)
        .value("MeshVS_DA_MarkerType",MeshVS_DrawerAttribute::MeshVS_DA_MarkerType)
        .value("MeshVS_DA_MarkerColor",MeshVS_DrawerAttribute::MeshVS_DA_MarkerColor)
        .value("MeshVS_DA_MarkerScale",MeshVS_DrawerAttribute::MeshVS_DA_MarkerScale)
        .value("MeshVS_DA_TextColor",MeshVS_DrawerAttribute::MeshVS_DA_TextColor)
        .value("MeshVS_DA_TextHeight",MeshVS_DrawerAttribute::MeshVS_DA_TextHeight)
        .value("MeshVS_DA_TextFont",MeshVS_DrawerAttribute::MeshVS_DA_TextFont)
        .value("MeshVS_DA_TextExpansionFactor",MeshVS_DrawerAttribute::MeshVS_DA_TextExpansionFactor)
        .value("MeshVS_DA_TextSpace",MeshVS_DrawerAttribute::MeshVS_DA_TextSpace)
        .value("MeshVS_DA_TextStyle",MeshVS_DrawerAttribute::MeshVS_DA_TextStyle)
        .value("MeshVS_DA_TextDisplayType",MeshVS_DrawerAttribute::MeshVS_DA_TextDisplayType)
        .value("MeshVS_DA_TextTexFont",MeshVS_DrawerAttribute::MeshVS_DA_TextTexFont)
        .value("MeshVS_DA_TextFontAspect",MeshVS_DrawerAttribute::MeshVS_DA_TextFontAspect)
        .value("MeshVS_DA_VectorColor",MeshVS_DrawerAttribute::MeshVS_DA_VectorColor)
        .value("MeshVS_DA_VectorMaxLength",MeshVS_DrawerAttribute::MeshVS_DA_VectorMaxLength)
        .value("MeshVS_DA_VectorArrowPart",MeshVS_DrawerAttribute::MeshVS_DA_VectorArrowPart)
        .value("MeshVS_DA_IsAllowOverlapped",MeshVS_DrawerAttribute::MeshVS_DA_IsAllowOverlapped)
        .value("MeshVS_DA_Reflection",MeshVS_DrawerAttribute::MeshVS_DA_Reflection)
        .value("MeshVS_DA_ColorReflection",MeshVS_DrawerAttribute::MeshVS_DA_ColorReflection)
        .value("MeshVS_DA_ShrinkCoeff",MeshVS_DrawerAttribute::MeshVS_DA_ShrinkCoeff)
        .value("MeshVS_DA_MaxFaceNodes",MeshVS_DrawerAttribute::MeshVS_DA_MaxFaceNodes)
        .value("MeshVS_DA_ComputeTime",MeshVS_DrawerAttribute::MeshVS_DA_ComputeTime)
        .value("MeshVS_DA_ComputeSelectionTime",MeshVS_DrawerAttribute::MeshVS_DA_ComputeSelectionTime)
        .value("MeshVS_DA_DisplayNodes",MeshVS_DrawerAttribute::MeshVS_DA_DisplayNodes)
        .value("MeshVS_DA_SelectableAuto",MeshVS_DrawerAttribute::MeshVS_DA_SelectableAuto)
        .value("MeshVS_DA_ShowEdges",MeshVS_DrawerAttribute::MeshVS_DA_ShowEdges)
        .value("MeshVS_DA_SmoothShading",MeshVS_DrawerAttribute::MeshVS_DA_SmoothShading)
        .value("MeshVS_DA_SupressBackFaces",MeshVS_DrawerAttribute::MeshVS_DA_SupressBackFaces)
        .value("MeshVS_DA_User",MeshVS_DrawerAttribute::MeshVS_DA_User).export_values();
    py::enum_<MeshVS_MeshSelectionMethod>(m, "MeshVS_MeshSelectionMethod",R"#(this enumeration describe what type of sensitive entity will be built in 0-th selection mode (it means that whole mesh is selected ))#")
        .value("MeshVS_MSM_PRECISE",MeshVS_MeshSelectionMethod::MeshVS_MSM_PRECISE)
        .value("MeshVS_MSM_NODES",MeshVS_MeshSelectionMethod::MeshVS_MSM_NODES)
        .value("MeshVS_MSM_BOX",MeshVS_MeshSelectionMethod::MeshVS_MSM_BOX).export_values();
    py::enum_<MeshVS_EntityType>(m, "MeshVS_EntityType",R"#(None)#")
        .value("MeshVS_ET_NONE",MeshVS_EntityType::MeshVS_ET_NONE)
        .value("MeshVS_ET_Node",MeshVS_EntityType::MeshVS_ET_Node)
        .value("MeshVS_ET_0D",MeshVS_EntityType::MeshVS_ET_0D)
        .value("MeshVS_ET_Link",MeshVS_EntityType::MeshVS_ET_Link)
        .value("MeshVS_ET_Face",MeshVS_EntityType::MeshVS_ET_Face)
        .value("MeshVS_ET_Volume",MeshVS_EntityType::MeshVS_ET_Volume)
        .value("MeshVS_ET_Element",MeshVS_EntityType::MeshVS_ET_Element)
        .value("MeshVS_ET_All",MeshVS_EntityType::MeshVS_ET_All).export_values();

//Python trampoline classes
    class Py_MeshVS_DataSource : public MeshVS_DataSource{
    public:
        using MeshVS_DataSource::MeshVS_DataSource;
        
        
        // public pure virtual
        Standard_Boolean GetGeom(const Standard_Integer ID,const Standard_Boolean IsElement,NCollection_Array1<Standard_Real> & Coords,Standard_Integer & NbNodes,MeshVS_EntityType & Type) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,MeshVS_DataSource,GetGeom,ID,IsElement,Coords,NbNodes,Type) };
        Standard_Boolean GetGeomType(const Standard_Integer ID,const Standard_Boolean IsElement,MeshVS_EntityType & Type) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,MeshVS_DataSource,GetGeomType,ID,IsElement,Type) };
        Standard_Address GetAddr(const Standard_Integer ID,const Standard_Boolean IsElement) const  override { PYBIND11_OVERLOAD_PURE(Standard_Address,MeshVS_DataSource,GetAddr,ID,IsElement) };
        Standard_Boolean GetNodesByElement(const Standard_Integer ID,NCollection_Array1<Standard_Integer> & NodeIDs,Standard_Integer & NbNodes) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,MeshVS_DataSource,GetNodesByElement,ID,NodeIDs,NbNodes) };
        const TColStd_PackedMapOfInteger & GetAllNodes() const  override { PYBIND11_OVERLOAD_PURE(const TColStd_PackedMapOfInteger &,MeshVS_DataSource,GetAllNodes,) };
        const TColStd_PackedMapOfInteger & GetAllElements() const  override { PYBIND11_OVERLOAD_PURE(const TColStd_PackedMapOfInteger &,MeshVS_DataSource,GetAllElements,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_MeshVS_PrsBuilder : public MeshVS_PrsBuilder{
    public:
        using MeshVS_PrsBuilder::MeshVS_PrsBuilder;
        
        
        // public pure virtual
        void Build(const opencascade::handle<Prs3d_Presentation> & Prs,const TColStd_PackedMapOfInteger & IDs,TColStd_PackedMapOfInteger & IDsToExclude,const Standard_Boolean IsElement,const Standard_Integer DisplayMode) const  override { PYBIND11_OVERLOAD_PURE(void,MeshVS_PrsBuilder,Build,Prs,IDs,IDsToExclude,IsElement,DisplayMode) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_MeshVS_DataSource3D : public MeshVS_DataSource3D{
    public:
        using MeshVS_DataSource3D::MeshVS_DataSource3D;
        
        
        // public pure virtual
        
        Standard_Boolean GetGeom(const Standard_Integer ID,const Standard_Boolean IsElement,NCollection_Array1<Standard_Real> & Coords,Standard_Integer & NbNodes,MeshVS_EntityType & Type) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,MeshVS_DataSource,GetGeom,ID,IsElement,Coords,NbNodes,Type) };
        Standard_Boolean GetGeomType(const Standard_Integer ID,const Standard_Boolean IsElement,MeshVS_EntityType & Type) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,MeshVS_DataSource,GetGeomType,ID,IsElement,Type) };
        Standard_Address GetAddr(const Standard_Integer ID,const Standard_Boolean IsElement) const  override { PYBIND11_OVERLOAD_PURE(Standard_Address,MeshVS_DataSource,GetAddr,ID,IsElement) };
        Standard_Boolean GetNodesByElement(const Standard_Integer ID,NCollection_Array1<Standard_Integer> & NodeIDs,Standard_Integer & NbNodes) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,MeshVS_DataSource,GetNodesByElement,ID,NodeIDs,NbNodes) };
        const TColStd_PackedMapOfInteger & GetAllNodes() const  override { PYBIND11_OVERLOAD_PURE(const TColStd_PackedMapOfInteger &,MeshVS_DataSource,GetAllNodes,) };
        const TColStd_PackedMapOfInteger & GetAllElements() const  override { PYBIND11_OVERLOAD_PURE(const TColStd_PackedMapOfInteger &,MeshVS_DataSource,GetAllElements,) };
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// pre-register typdefs
    preregister_template_NCollection_DataMap<Standard_Integer, TCollection_AsciiString, TColStd_MapIntegerHasher>(m,"MeshVS_DataMapOfIntegerAsciiString");  
    preregister_template_NCollection_DataMap<Quantity_Color, TColStd_MapOfInteger, Quantity_ColorHasher>(m,"MeshVS_DataMapOfColorMapOfInteger");  
    preregister_template_NCollection_Array1<TColStd_SequenceOfInteger>(m,"MeshVS_Array1OfSequenceOfInteger");  
    preregister_template_NCollection_DefaultHasher<MeshVS_TwoColors>(m,"MeshVS_TwoColorsHasher");  
    preregister_template_NCollection_Sequence<opencascade::handle<MeshVS_PrsBuilder> >(m,"MeshVS_SequenceOfPrsBuilder");  
    preregister_template_NCollection_DataMap<Standard_Integer, Graphic3d_MaterialAspect, TColStd_MapIntegerHasher>(m,"MeshVS_DataMapOfIntegerMaterial");  
    preregister_template_NCollection_Map<MeshVS_TwoNodes, MeshVS_TwoNodesHasher>(m,"MeshVS_MapOfTwoNodes");  
    preregister_template_NCollection_DataMap<Standard_Integer, gp_Vec, TColStd_MapIntegerHasher>(m,"MeshVS_DataMapOfIntegerVector");  
    preregister_template_NCollection_DataMap<Standard_Integer, Quantity_Color, TColStd_MapIntegerHasher>(m,"MeshVS_DataMapOfIntegerColor");  
    preregister_template_NCollection_DataMap<Standard_Integer, Standard_Boolean, TColStd_MapIntegerHasher>(m,"MeshVS_DataMapOfIntegerBoolean");  
    preregister_template_NCollection_DefaultHasher<MeshVS_TwoNodes>(m,"MeshVS_TwoNodesHasher");  
    preregister_template_NCollection_DataMap<MeshVS_TwoColors, TColStd_MapOfInteger, MeshVS_TwoColorsHasher>(m,"MeshVS_DataMapOfTwoColorsMapOfInteger");  
    preregister_template_NCollection_DataMap<Standard_Integer, MeshVS_TwoColors, TColStd_MapIntegerHasher>(m,"MeshVS_DataMapOfIntegerTwoColors");  
    preregister_template_NCollection_List<opencascade::handle<TColgp_HArray1OfPnt> >(m,"MeshVS_PolyhedronVerts");  

// classes forward declarations only
    py::class_<MeshVS_Buffer , shared_ptr<MeshVS_Buffer>  >(m,"MeshVS_Buffer",R"#(None)#");
    py::class_<MeshVS_CommonSensitiveEntity ,opencascade::handle<MeshVS_CommonSensitiveEntity>  , Select3D_SensitiveSet >(m,"MeshVS_CommonSensitiveEntity",R"#(Sensitive entity covering entire mesh for global selection.Sensitive entity covering entire mesh for global selection.)#");
    py::class_<MeshVS_DataSource ,opencascade::handle<MeshVS_DataSource> ,Py_MeshVS_DataSource , Standard_Transient >(m,"MeshVS_DataSource",R"#(The deferred class using for the following tasks: 1) Receiving geometry data about single element of node by its number; 2) Receiving type of element or node by its number; 3) Receiving topological information about links between element and nodes it consist of; 4) Receiving information about what element cover this node; 5) Receiving information about all nodes and elements the object consist of 6) Activation of advanced mesh selection. In the advanced mesh selection mode there is created: - one owner for the whole mesh and for all selection modes - one sensitive entity for the whole mesh and for each selection mode Receiving of IDs of detected entities (nodes and elements) in a viewer is achieved by implementation of a group of methods GetDetectedEntities.The deferred class using for the following tasks: 1) Receiving geometry data about single element of node by its number; 2) Receiving type of element or node by its number; 3) Receiving topological information about links between element and nodes it consist of; 4) Receiving information about what element cover this node; 5) Receiving information about all nodes and elements the object consist of 6) Activation of advanced mesh selection. In the advanced mesh selection mode there is created: - one owner for the whole mesh and for all selection modes - one sensitive entity for the whole mesh and for each selection mode Receiving of IDs of detected entities (nodes and elements) in a viewer is achieved by implementation of a group of methods GetDetectedEntities.The deferred class using for the following tasks: 1) Receiving geometry data about single element of node by its number; 2) Receiving type of element or node by its number; 3) Receiving topological information about links between element and nodes it consist of; 4) Receiving information about what element cover this node; 5) Receiving information about all nodes and elements the object consist of 6) Activation of advanced mesh selection. In the advanced mesh selection mode there is created: - one owner for the whole mesh and for all selection modes - one sensitive entity for the whole mesh and for each selection mode Receiving of IDs of detected entities (nodes and elements) in a viewer is achieved by implementation of a group of methods GetDetectedEntities.)#");
    py::class_<MeshVS_Drawer ,opencascade::handle<MeshVS_Drawer>  , Standard_Transient >(m,"MeshVS_Drawer",R"#(This class provided the common interface to share between classes big set of constants affecting to object appearance. By default, this class can store integers, doubles, OCC colors, OCC materials. Each of OCC enum members can be stored as integers.This class provided the common interface to share between classes big set of constants affecting to object appearance. By default, this class can store integers, doubles, OCC colors, OCC materials. Each of OCC enum members can be stored as integers.This class provided the common interface to share between classes big set of constants affecting to object appearance. By default, this class can store integers, doubles, OCC colors, OCC materials. Each of OCC enum members can be stored as integers.)#");
    py::class_<MeshVS_DummySensitiveEntity ,opencascade::handle<MeshVS_DummySensitiveEntity>  , Select3D_SensitiveEntity >(m,"MeshVS_DummySensitiveEntity",R"#(This class allows to create owners to all elements or nodes, both hidden and shown, but these owners user cannot select "by hands" in viewer. They means for internal application tasks, for example, receiving all owners, both for hidden and shown entities.This class allows to create owners to all elements or nodes, both hidden and shown, but these owners user cannot select "by hands" in viewer. They means for internal application tasks, for example, receiving all owners, both for hidden and shown entities.)#");
    py::class_<MeshVS_HArray1OfSequenceOfInteger ,opencascade::handle<MeshVS_HArray1OfSequenceOfInteger>  , MeshVS_Array1OfSequenceOfInteger , Standard_Transient >(m,"MeshVS_HArray1OfSequenceOfInteger",R"#()#");
    py::class_<MeshVS_Mesh ,opencascade::handle<MeshVS_Mesh>  , AIS_InteractiveObject >(m,"MeshVS_Mesh",R"#(the main class provides interface to create mesh presentation as a wholethe main class provides interface to create mesh presentation as a whole)#");
    py::class_<MeshVS_MeshEntityOwner ,opencascade::handle<MeshVS_MeshEntityOwner>  , SelectMgr_EntityOwner >(m,"MeshVS_MeshEntityOwner",R"#(The custom owner. This class provides methods to store owner information: 1) An address of element or node data structure 2) Type of node or element owner assigned 3) ID of node or element owner assignedThe custom owner. This class provides methods to store owner information: 1) An address of element or node data structure 2) Type of node or element owner assigned 3) ID of node or element owner assignedThe custom owner. This class provides methods to store owner information: 1) An address of element or node data structure 2) Type of node or element owner assigned 3) ID of node or element owner assigned)#");
    py::class_<MeshVS_MeshOwner ,opencascade::handle<MeshVS_MeshOwner>  , SelectMgr_EntityOwner >(m,"MeshVS_MeshOwner",R"#(The custom mesh owner used for advanced mesh selection. This class provides methods to store information: 1) IDs of hilighted mesh nodes and elements 2) IDs of mesh nodes and elements selected on the meshThe custom mesh owner used for advanced mesh selection. This class provides methods to store information: 1) IDs of hilighted mesh nodes and elements 2) IDs of mesh nodes and elements selected on the meshThe custom mesh owner used for advanced mesh selection. This class provides methods to store information: 1) IDs of hilighted mesh nodes and elements 2) IDs of mesh nodes and elements selected on the mesh)#");
    py::class_<MeshVS_PrsBuilder ,opencascade::handle<MeshVS_PrsBuilder> ,Py_MeshVS_PrsBuilder , Standard_Transient >(m,"MeshVS_PrsBuilder",R"#(This class is parent for all builders using in MeshVS_Mesh. It provides base fields and methods all buildes need.This class is parent for all builders using in MeshVS_Mesh. It provides base fields and methods all buildes need.)#");
    py::class_<MeshVS_SensitiveFace ,opencascade::handle<MeshVS_SensitiveFace>  , Select3D_SensitiveFace >(m,"MeshVS_SensitiveFace",R"#(This class provides custom sensitive face, which will be selected if it center is in rectangle.This class provides custom sensitive face, which will be selected if it center is in rectangle.)#");
    py::class_<MeshVS_SensitiveMesh ,opencascade::handle<MeshVS_SensitiveMesh>  , Select3D_SensitiveEntity >(m,"MeshVS_SensitiveMesh",R"#(This class provides custom mesh sensitive entity used in advanced mesh selection.This class provides custom mesh sensitive entity used in advanced mesh selection.)#");
    py::class_<MeshVS_SensitivePolyhedron ,opencascade::handle<MeshVS_SensitivePolyhedron>  , Select3D_SensitiveEntity >(m,"MeshVS_SensitivePolyhedron",R"#(This class is used to detect selection of a polyhedron. The main principle of detection algorithm is to search for overlap with each polyhedron's face separately, treating them as planar convex polygons.This class is used to detect selection of a polyhedron. The main principle of detection algorithm is to search for overlap with each polyhedron's face separately, treating them as planar convex polygons.)#");
    py::class_<MeshVS_SensitiveQuad ,opencascade::handle<MeshVS_SensitiveQuad>  , Select3D_SensitiveEntity >(m,"MeshVS_SensitiveQuad",R"#(This class contains description of planar quadrangle and defines methods for its detection by OCCT BVH selection mechanismThis class contains description of planar quadrangle and defines methods for its detection by OCCT BVH selection mechanism)#");
    py::class_<MeshVS_SensitiveSegment ,opencascade::handle<MeshVS_SensitiveSegment>  , Select3D_SensitiveSegment >(m,"MeshVS_SensitiveSegment",R"#(This class provides custom sensitive face, which will be selected if it center is in rectangle.This class provides custom sensitive face, which will be selected if it center is in rectangle.)#");
    py::class_<MeshVS_SymmetricPairHasher , shared_ptr<MeshVS_SymmetricPairHasher>  >(m,"MeshVS_SymmetricPairHasher",R"#(Provides symmetric hash methods pair of integers.)#");
    py::class_<MeshVS_Tool , shared_ptr<MeshVS_Tool>  >(m,"MeshVS_Tool",R"#(This class provides auxiliary methods to create differents aspects)#");
    py::class_<MeshVS_TwoColors , shared_ptr<MeshVS_TwoColors>  >(m,"MeshVS_TwoColors",R"#(None)#");
    py::class_<MeshVS_TwoNodes , shared_ptr<MeshVS_TwoNodes>  >(m,"MeshVS_TwoNodes",R"#(Structure containing two IDs (of nodes) for using as a key in a map (as representation of a mesh link))#");
    py::class_<MeshVS_DataSource3D ,opencascade::handle<MeshVS_DataSource3D> ,Py_MeshVS_DataSource3D , MeshVS_DataSource >(m,"MeshVS_DataSource3D",R"#()#");
    py::class_<MeshVS_DeformedDataSource ,opencascade::handle<MeshVS_DeformedDataSource>  , MeshVS_DataSource >(m,"MeshVS_DeformedDataSource",R"#(The class provides default class which helps to represent node displacements by deformed mesh This class has an internal handle to canonical non-deformed mesh data source and map of displacement vectors. The displacement can be magnified to useful size. All methods is implemented with calling the corresponding methods of non-deformed data source.The class provides default class which helps to represent node displacements by deformed mesh This class has an internal handle to canonical non-deformed mesh data source and map of displacement vectors. The displacement can be magnified to useful size. All methods is implemented with calling the corresponding methods of non-deformed data source.The class provides default class which helps to represent node displacements by deformed mesh This class has an internal handle to canonical non-deformed mesh data source and map of displacement vectors. The displacement can be magnified to useful size. All methods is implemented with calling the corresponding methods of non-deformed data source.)#");
    py::class_<MeshVS_ElementalColorPrsBuilder ,opencascade::handle<MeshVS_ElementalColorPrsBuilder>  , MeshVS_PrsBuilder >(m,"MeshVS_ElementalColorPrsBuilder",R"#(This class provides methods to create presentation of elements with assigned colors. The class contains two color maps: map of same colors for front and back side of face and map of different ones,This class provides methods to create presentation of elements with assigned colors. The class contains two color maps: map of same colors for front and back side of face and map of different ones,This class provides methods to create presentation of elements with assigned colors. The class contains two color maps: map of same colors for front and back side of face and map of different ones,)#");
    py::class_<MeshVS_MeshPrsBuilder ,opencascade::handle<MeshVS_MeshPrsBuilder>  , MeshVS_PrsBuilder >(m,"MeshVS_MeshPrsBuilder",R"#(This class provides methods to compute base mesh presentationThis class provides methods to compute base mesh presentation)#");
    py::class_<MeshVS_NodalColorPrsBuilder ,opencascade::handle<MeshVS_NodalColorPrsBuilder>  , MeshVS_PrsBuilder >(m,"MeshVS_NodalColorPrsBuilder",R"#(This class provides methods to create presentation of nodes with assigned color. There are two ways of presentation building 1. Without using texture. In this case colors of nodes are specified with DataMapOfIntegerColor and presentation is built with gradient fill between these nodes (default behaviour) 2. Using texture. In this case presentation is built with spectrum filling between nodes. For example, if one node has blue color and second one has violet color, parameters of this class may be set to fill presentation between nodes with solar spectrum. Methods: UseTexture - activates/deactivates this way SetColorMap - sets colors used for generation of texture SetColorindices - specifies correspondence between node IDs and indices of colors from color mapThis class provides methods to create presentation of nodes with assigned color. There are two ways of presentation building 1. Without using texture. In this case colors of nodes are specified with DataMapOfIntegerColor and presentation is built with gradient fill between these nodes (default behaviour) 2. Using texture. In this case presentation is built with spectrum filling between nodes. For example, if one node has blue color and second one has violet color, parameters of this class may be set to fill presentation between nodes with solar spectrum. Methods: UseTexture - activates/deactivates this way SetColorMap - sets colors used for generation of texture SetColorindices - specifies correspondence between node IDs and indices of colors from color map)#");
    py::class_<MeshVS_TextPrsBuilder ,opencascade::handle<MeshVS_TextPrsBuilder>  , MeshVS_PrsBuilder >(m,"MeshVS_TextPrsBuilder",R"#(This class provides methods to create text data presentation. It store map of texts assigned with nodes or elements.This class provides methods to create text data presentation. It store map of texts assigned with nodes or elements.)#");
    py::class_<MeshVS_VectorPrsBuilder ,opencascade::handle<MeshVS_VectorPrsBuilder>  , MeshVS_PrsBuilder >(m,"MeshVS_VectorPrsBuilder",R"#(This class provides methods to create vector data presentation. It store map of vectors assigned with nodes or elements. In simplified mode vectors draws with thickened ends instead of arrowsThis class provides methods to create vector data presentation. It store map of vectors assigned with nodes or elements. In simplified mode vectors draws with thickened ends instead of arrows)#");

};

// user-defined post-inclusion per module

// user-defined post
